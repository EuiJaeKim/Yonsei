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
module DimmerP
{
  provides interface dimmer;

  uses interface GpioInterrupt as DimmerINT;
  uses interface BusyWait<TMicro, uint16_t>;
}
implementation
{
  // global variables
  uint8_t fallingEDGE;
  uint16_t delay_t1;
    
  void wait(uint16_t delay) {
  uint16_t i;
    for(i=0;i<delay*2;i++);
  }
  
  command error_t dimmer.init() {
    DDRC |= 0x0f;
    CLR_BIT(PORTC,4);
    SET_BIT(PORTC,5);
    call DimmerINT.enableRisingEdge(); //falling edge active
    atomic {
    	fallingEDGE=0x00;
    	delay_t1 = 0x1500;
    }
    return SUCCESS;
  }

  command error_t dimmer.setLevel(uint16_t d1)
  {
    atomic delay_t1 = d1<<8;
    return SUCCESS;
  }

  async event void DimmerINT.fired()
  { 
    call DimmerINT.disable();
    call BusyWait.wait(1536);
    call BusyWait.wait(delay_t1);
    CLR_BIT(PORTC,4);
   	CLR_BIT(PORTC,5);
   	call BusyWait.wait(256);
   	SET_BIT(PORTC,4);
   	SET_BIT(PORTC,5);
   	/*SET_BIT(PORTC,4);
   	SET_BIT(PORTC,5);
    call BusyWait.wait(4096);
    call BusyWait.wait(delay_t1);
		CLR_BIT(PORTC,4);
   	CLR_BIT(PORTC,5);
		call BusyWait.wait(256);
   	SET_BIT(PORTC,4);
   	SET_BIT(PORTC,5);*/
    if(fallingEDGE) call DimmerINT.enableFallingEdge(); //falling edge active
    else call DimmerINT.enableRisingEdge(); //rising edge active
    atomic fallingEDGE ^= 0x01;
  }
}
