includes HomeNet;

configuration Ch8_Dimmer_181C { }
implementation { 

  components MainC, Ch8_Dimmer_181M, LedsC, new TimerMilliC(); 
      Ch8_Dimmer_181M.Boot -> MainC;
      Ch8_Dimmer_181M.Timer -> TimerMilliC;
      Ch8_Dimmer_181M.Leds -> LedsC;

  components new SensirionSht11C(), new PhotoSensorC(), new UltraredSensorC(), new VoltageC(); 
      Ch8_Dimmer_181M.Read_Humi -> SensirionSht11C.Humidity; 
      Ch8_Dimmer_181M.Read_Temp -> SensirionSht11C.Temperature; 
      Ch8_Dimmer_181M.Read_Photo -> PhotoSensorC; 
      Ch8_Dimmer_181M.Read_Ultrared -> UltraredSensorC; 
      Ch8_Dimmer_181M.Read_Voltage -> VoltageC;  

  components ActiveMessageC, new AMSenderC(AM_HOMENET), new AMReceiverC(AM_HOMENET); 
      Ch8_Dimmer_181M.CommControl -> ActiveMessageC; 
      Ch8_Dimmer_181M.AMSend -> AMSenderC; 
      Ch8_Dimmer_181M.Receive -> AMReceiverC;  

  components DimmerC;
      Ch8_Dimmer_181M.dimmer-> DimmerC;  

}  
