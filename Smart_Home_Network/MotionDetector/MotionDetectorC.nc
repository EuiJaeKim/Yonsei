includes HomeNet;


configuration MotionDetectorC { }
implementation { 

  components MainC, MotionDetectorM, LedsC, new TimerMilliC(); 
      MotionDetectorM.Boot -> MainC;
      MotionDetectorM.Timer -> TimerMilliC;
      MotionDetectorM.Leds -> LedsC;

  components new SensirionSht11C(), new PhotoSensorC(), new UltraredSensorC(), new VoltageC(); 
      MotionDetectorM.Read_Humi -> SensirionSht11C.Humidity; 
      MotionDetectorM.Read_Temp -> SensirionSht11C.Temperature; 
      MotionDetectorM.Read_Photo -> PhotoSensorC; 
      MotionDetectorM.Read_Ultrared -> UltraredSensorC; 
      MotionDetectorM.Read_Voltage -> VoltageC;  

  components ActiveMessageC, new AMSenderC(AM_HOMENET), new AMReceiverC(AM_HOMENET); 
      MotionDetectorM.CommControl -> ActiveMessageC; 
      MotionDetectorM.AMSend -> AMSenderC; 
      MotionDetectorM.Receive -> AMReceiverC;  

  components new PirSensorC(), ZigbexBusC, new TimerMilliC() as PirTimerC; 
      MotionDetectorM.Pir -> PirSensorC;
      MotionDetectorM.PirPw -> ZigbexBusC.PW3;
      MotionDetectorM.PirTimer -> PirTimerC;  
}  
