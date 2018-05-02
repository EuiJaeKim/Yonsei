/*============================================================================*/
/*                                                                            */
/*                           Author : Yoon Ho Jung                            */
/*                            {scs}@hanback.co.kr                             */
/*                                                                            */
/*                      Copyright (c) HANBACK ELECTRONICS                     */
/*                             All rights reserved.                           */
/*                                                                            */
/*                            http://www.hanback.com                          */
/*                                                                            */
/******************************************************************************/

/******************************************************************************/
/*                                                                            */
/*============================================================================*/
/* Permission to use, copy, modify, and distribute this software and its      */
/* documentation are reserved by above authors and Hanback electronics.       */
/* The above copyright notice and authors must be described in this software. */
/*============================================================================*/
/*                                                                            */
/******************************************************************************/



configuration GasDetectorC
{
  provides interface GasDetector;
}
implementation
{
  
#define IRQ_PORT_D_PIN(bit) (uint8_t)&EICRA, ISC##bit##0, ISC##bit##1, bit
#define IRQ_PORT_E_PIN(bit) (uint8_t)&EICRB, ISC##bit##0, ISC##bit##1, bit

  components 
    HplAtm128InterruptSigP as IrqVector,
    new HplAtm128InterruptPinP(IRQ_PORT_D_PIN(5)) as IntPin;
  
    IntPin.IrqSignal ->IrqVector.IntSig5;
  
  components GasDetectorP,new TimerMilliC() as T0,new TimerMilliC() as T1,PlatformSerialC,BusyWaitMicroC,LedsC;

    GasDetectorP.Int-> IntPin;
    GasDetectorP.timer -> T0;
    GasDetectorP.timer1 -> T1;

    GasDetectorP.Leds -> LedsC;
    GasDetector = GasDetectorP.GasDetector;

}
