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

#include "basicsb.h"

configuration PirDeviceP {
  provides {
    interface ResourceConfigure;
    interface Atm128AdcConfig;
  }
}
implementation {
  components PirP, ZigbexBusC;

  ResourceConfigure = PirP;
  Atm128AdcConfig = PirP;


  PirP.PirPin -> ZigbexBusC.PW3;
  PirP.PirAdc -> ZigbexBusC.Adc4;
}


