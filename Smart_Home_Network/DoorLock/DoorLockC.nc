includes HomeNet;


configuration DoorLockC { }
implementation { 

  components MainC, DoorLockM, LedsC, new TimerMilliC(); 
      DoorLockM.Boot -> MainC;
      DoorLockM.Timer -> TimerMilliC;
      DoorLockM.Leds -> LedsC;

  components new SensirionSht11C(), new PhotoSensorC(), new UltraredSensorC(), new VoltageC(); 
      DoorLockM.Read_Humi -> SensirionSht11C.Humidity; 
      DoorLockM.Read_Temp -> SensirionSht11C.Temperature; 
      DoorLockM.Read_Photo -> PhotoSensorC; 
      DoorLockM.Read_Ultrared -> UltraredSensorC; 
      DoorLockM.Read_Voltage -> VoltageC;  

  components ActiveMessageC, new AMSenderC(AM_HOMENET), new AMReceiverC(AM_HOMENET); 
      DoorLockM.CommControl -> ActiveMessageC; 
      DoorLockM.AMSend -> AMSenderC; 
      DoorLockM.Receive -> AMReceiverC;  

  components RelayC, new TimerMilliC() as RelayTimerC;
      DoorLockM.Relay -> RelayC;
      DoorLockM.RelayTimer -> RelayTimerC;
}  
