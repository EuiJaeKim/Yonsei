/******************************************************************************/
/*                                                                            */
/*                     Pir Sensor Components in TinyOS                      */
/*                                                                            */
/*============================================================================*/
/*                                                                            */
/*                            Author : Yoon Ho,Chul Hee                       */
/*                            {chlee}@hanback.co.kr                           */
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

module PirP
{
  provides {
    interface ResourceConfigure;
    interface Atm128AdcConfig;
  }
  uses {
    interface GeneralIO as PirPin;
    interface ZigbexBusAdc as PirAdc;
    interface Leds;
  }
}
implementation
{
  async command uint8_t Atm128AdcConfig.getChannel() {
    return call PirAdc.getChannel();
  }

  async command uint8_t Atm128AdcConfig.getRefVoltage() {
    return ATM128_ADC_VREF_2_56;
  }

  async command uint8_t Atm128AdcConfig.getPrescaler() {
    return ATM128_ADC_PRESCALE;
  }

  async command void ResourceConfigure.configure() {
 //   call PirPin.makeOutput();
 //   call PirPin.set();
    
    
  }

  async command void ResourceConfigure.unconfigure() {
  //  call PirPin.clr();
  }
}


