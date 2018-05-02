/*
 *
 * Authors:		chlee hanback electronics
 * Date last modified:  2/28/06
 *
 */
configuration MotorC
{
  provides {
     interface Motor;
   
  }
}

implementation {
  components MotorP,ZigbexBusC;

  Motor = MotorP;
  
  MotorP.M1_A1 -> ZigbexBusC.PW0;
  MotorP.M1_A2 -> ZigbexBusC.PW1;
  MotorP.M1_EN -> ZigbexBusC.PW2;
  MotorP.M2_B1 -> ZigbexBusC.PW4;
  MotorP.M2_B2 -> ZigbexBusC.PW5;
  MotorP.M2_EN -> ZigbexBusC.PW6;
}


