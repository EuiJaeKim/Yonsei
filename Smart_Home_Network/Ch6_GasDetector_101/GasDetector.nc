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

interface GasDetector {
	command void Init(uint8_t edge,uint16_t nomalcheckTimer,uint16_t minGapTimer);
	command uint8_t WatchEscOfGas();

	event	void BecomeNormal();
	event	void EscapeOfGas();
}

