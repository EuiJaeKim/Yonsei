

module MotionDetectorM {
    uses { 
        interface Boot; 
        interface Timer<TMilli>; 
        interface Leds; 
        interface Read<uint16_t> as Read_Humi; 
        interface Read<uint16_t> as Read_Temp; 
        interface Read<uint16_t> as Read_Photo; 
        interface Read<uint16_t> as Read_Ultrared; 
        interface Read<uint16_t> as Read_Voltage; 
	interface SplitControl as CommControl; 
	interface AMSend; 
	interface Receive; 
	interface Read<uint16_t> as Pir; 
	interface GeneralIO as PirPw; 
	interface Timer<TMilli> as PirTimer; 
    }
}
implementation {  

  message_t TXData, uartmsg, SensorData, CMDmsg;
  uint16_t myTemp; 
  uint16_t myHumi; 
  uint16_t myPhoto; 
  uint16_t myUltrared; 
  uint16_t myBattery; 
  uint16_t Raw_Temp; 
  uint16_t Raw_Humi;

  void calc_SHT_(uint16_t p_humidity ,uint16_t p_temperature);  

  event void Boot.booted() { 
  	atomic { 
  		myTemp=0xFFFF; 
  		myHumi=0xFFFF; 
  		myPhoto=0xFFFF; 
  		myUltrared=0xFFFF; 
  		Raw_Temp=0xFFFF; 
  		Raw_Humi=0xFFFF; 
  		myBattery=0xFFFF; 
  	} 
	call PirPw.set();    //Pir Power On 
	call PirTimer.startOneShot(50);
	call Timer.startPeriodic(1000); 
	call CommControl.start(); 
  }  

  event void CommControl.startDone(error_t error) {} 

  event void CommControl.stopDone(error_t error) {}  

  event void Timer.fired() { 
	call Read_Photo.read(); 
  }  

  event void Read_Photo.readDone(error_t err, uint16_t val) { 
	if (err == SUCCESS) 
		myPhoto = val; 
	call Read_Temp.read(); 
  }  

  event void Read_Temp.readDone(error_t err, uint16_t val) { 
	if (err == SUCCESS) 
		Raw_Temp = val; 
	call Read_Humi.read(); 
  }  

  event void Read_Humi.readDone(error_t err, uint16_t val) { 
	if (err == SUCCESS && Raw_Temp!=0xFFFF){ 
		Raw_Humi = val; 
		calc_SHT_(Raw_Humi, Raw_Temp); 
	} 
	call Read_Voltage.read(); 
  }  

  event void Read_Voltage.readDone(error_t err, uint16_t val) { 
	if (err == SUCCESS) 
		myBattery = val; 
	call Read_Ultrared.read(); 
  }  

  event void Read_Ultrared.readDone(error_t err, uint16_t val) { 
	if (err == SUCCESS) 
		myUltrared = val;  
  }  

  task void SendSensorData() { 
	sens_data_t sensorData; 
	atomic { 
		sensorData.uh.id = TOS_NODE_ID; 
		sensorData.uh.cmd = COMM_GET; 
		sensorData.uh.sub = COMM_GET_ALL; 
		sensorData.uh.length = SensorDataLen; 
		sensorData.photo = myPhoto; 
		sensorData.temp = Raw_Temp; 
		sensorData.humi = Raw_Humi; 
		sensorData.infrared = myUltrared; 
		sensorData.battery = myBattery; 
	} 
	memcpy (call AMSend.getPayload(&SensorData), &sensorData, sizeof(sensorData)); 
	call AMSend.send(AM_BROADCAST_ADDR, &SensorData, sizeof(sensorData));
  }  

  event void AMSend.sendDone(message_t* msg, error_t error) { 
	call Leds.led2Toggle(); 
  }  

  event message_t* Receive.receive(message_t* msg, void* payload, uint8_t len) {  
	user_header_t *pUH;  
	pUH = (user_header_t *)payload; 
	if(pUH->id !=  TOS_NODE_ID) 
		return msg;  
	switch(pUH->cmd){  
		case COMM_GET: 
			if(pUH->sub == COMM_GET_ALL){ 
				post SendSensorData();  
			} 
			break;  
		default:break; 
	} 
	call Leds.led2Toggle(); 
	return msg;
  }  

  event void PirTimer.fired(){ 
	call Pir.read(); 
  }  

  event void Pir.readDone(error_t result, uint16_t data) { 
	if(result != SUCCESS) return; 
	if((data>>6) > 300){ 
		user_header_t uh; 
		uh.id = TOS_NODE_ID; 
		uh.cmd = COMM_INT; 
		uh.sub = COMM_INT_MOTION_DETECT; 
		uh.length = 0; 
		memcpy (call AMSend.getPayload(&CMDmsg), &uh, sizeof(user_header_t)); 
		if(call AMSend.send(AM_BROADCAST_ADDR, &CMDmsg, sizeof(user_header_t))==SUCCESS){
			call PirTimer.stop();
			call PirTimer.startOneShot(1000);
		}else{
			call PirTimer.startOneShot(50);
		}
	}else{
		call PirTimer.startOneShot(50);
	}
  }

  void calc_SHT_(uint16_t p_humidity ,uint16_t p_temperature) 
  { 
	const float C1=-4.0; // for 12 Bit 
	const float C2= 0.0405; // for 12 Bit 
	const float C3=-0.0000028; // for 12 Bit 
	const float T1=0.01; // for 14 Bit @ 5V 
	const float T2=0.00008; // for 14 Bit @ 5V  
	float rh_lin; // rh_lin: Humidity linear 
	float rh_true; // rh_true: Temperature compensated humidity 
	float t_C; // t_C : Temperature [C] 
	float rh=(float)p_humidity; // rh: Humidity [Ticks] 12 Bit 
	float t=(float)p_temperature; // t: Temperature [Ticks] 14 Bit  
	t_C=t*0.01 - 40; //calc. Temperature from ticks to [C] 
	t_C=t*0.01 - 40; //calc. Temperature from ticks to [C] 
	rh_lin=C3*rh*rh + C2*rh + C1; //calc. Humidity from ticks to [RH] 
	rh_true=(t_C-25)*(T1+T2*rh)+rh_lin; //calc. Temperature compensated humidity [RH] 
	if(rh_true>100)rh_true=100; //cut if the value is outside of 
	if(rh_true<0.1)rh_true=0.1; //the physical possible range 
	atomic myTemp=(uint16_t)t_C; //return temperature [C] 
	atomic myHumi=(uint16_t)rh_true; //return humidity[RH] 
  }  
}
