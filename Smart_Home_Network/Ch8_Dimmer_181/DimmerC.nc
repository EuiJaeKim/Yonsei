// $Id: DimmerC.nc,v 1.0 2007-03-27 10:01:33 $

/*									tab:4
 * "Copyright (c) 2007 ~ HANBACK ELECTRONICS.  
 * All rights reserved.
 *
 * Permission to use, copy, modify, and distribute this software and its
 * documentation for any purpose, without fee, and without written agreement is
 * hereby granted, provided that the above copyright notice, the following
 * two paragraphs and the author appear in all copies of this software.
 */ 
 
/* Auther
 * Cheol-Hee Lee @ HANBACK ELECTRONICS co., ltd.
 */

configuration DimmerC
{
  provides interface dimmer;
}
implementation {
  components DimmerP, BusyWaitMicroC;
	components HplAtm128InterruptC, new Atm128GpioInterruptC() as IntDimm;

  dimmer = DimmerP.dimmer;
  DimmerP.BusyWait -> BusyWaitMicroC;
  IntDimm.Atm128Interrupt -> HplAtm128InterruptC.Int7;
  DimmerP.DimmerINT -> IntDimm.Interrupt;
}
