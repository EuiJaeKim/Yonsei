includes HomeNet;


configuration OutletC { }
implementation { 

  components MainC, OutletM, LedsC, new TimerMilliC(); 
      OutletM.Boot -> MainC;
      OutletM.Timer -> TimerMilliC;
      OutletM.Leds -> LedsC;

  components new SensirionSht11C(), new PhotoSensorC(), new UltraredSensorC(), new VoltageC(); 
      OutletM.Read_Humi -> SensirionSht11C.Humidity; 
      OutletM.Read_Temp -> SensirionSht11C.Temperature; 
      OutletM.Read_Photo -> PhotoSensorC; 
      OutletM.Read_Ultrared -> UltraredSensorC; 
      OutletM.Read_Voltage -> VoltageC;  

  components ActiveMessageC, new AMSenderC(AM_HOMENET), new AMReceiverC(AM_HOMENET); 
      OutletM.CommControl -> ActiveMessageC; 
      OutletM.AMSend -> AMSenderC; 
      OutletM.Receive -> AMReceiverC;  

  components RelayC, new TimerMilliC() as RelayTimerC;
      OutletM.Relay -> RelayC;
      OutletM.RelayTimer -> RelayTimerC;
}  
