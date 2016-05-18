includes HomeNet;


configuration GasShutterC { }
implementation { 

  components MainC, GasShutterM, LedsC, new TimerMilliC(); 
      GasShutterM.Boot -> MainC;
      GasShutterM.Timer -> TimerMilliC;
      GasShutterM.Leds -> LedsC;

  components new SensirionSht11C(), new PhotoSensorC(), new UltraredSensorC(), new VoltageC(); 
      GasShutterM.Read_Humi -> SensirionSht11C.Humidity; 
      GasShutterM.Read_Temp -> SensirionSht11C.Temperature; 
      GasShutterM.Read_Photo -> PhotoSensorC; 
      GasShutterM.Read_Ultrared -> UltraredSensorC; 
      GasShutterM.Read_Voltage -> VoltageC;  

  components ActiveMessageC, new AMSenderC(AM_HOMENET), new AMReceiverC(AM_HOMENET); 
      GasShutterM.CommControl -> ActiveMessageC; 
      GasShutterM.AMSend -> AMSenderC; 
      GasShutterM.Receive -> AMReceiverC;  

  components MotorC, new TimerMilliC() as GasTimerC;
      GasShutterM.Motor -> MotorC;
      GasShutterM.GasTimer -> GasTimerC;
}  
