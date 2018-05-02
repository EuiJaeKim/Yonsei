includes HomeNet;

configuration Ch6_GasDetector_101C { }
implementation { 

  components MainC, Ch6_GasDetector_101M, LedsC, new TimerMilliC(); 
      Ch6_GasDetector_101M.Boot -> MainC;
      Ch6_GasDetector_101M.Timer -> TimerMilliC;
      Ch6_GasDetector_101M.Leds -> LedsC;

  components new SensirionSht11C(), new PhotoSensorC(), new UltraredSensorC(), new VoltageC(); 
      Ch6_GasDetector_101M.Read_Humi -> SensirionSht11C.Humidity; 
      Ch6_GasDetector_101M.Read_Temp -> SensirionSht11C.Temperature; 
      Ch6_GasDetector_101M.Read_Photo -> PhotoSensorC; 
      Ch6_GasDetector_101M.Read_Ultrared -> UltraredSensorC; 
      Ch6_GasDetector_101M.Read_Voltage -> VoltageC;  

  components ActiveMessageC, new AMSenderC(AM_HOMENET), new AMReceiverC(AM_HOMENET); 
      Ch6_GasDetector_101M.CommControl -> ActiveMessageC; 
      Ch6_GasDetector_101M.AMSend -> AMSenderC; 
      Ch6_GasDetector_101M.Receive -> AMReceiverC;  

  components GasDetectorC;
      Ch6_GasDetector_101M.GasDetector -> GasDetectorC;  
}  
