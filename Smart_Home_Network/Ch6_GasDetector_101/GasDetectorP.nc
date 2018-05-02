/*============================================================================*/
/*									      */
/*                           Author : Jin Nam Seo			      */
/*                            {scs}@hanback.co.kr			      */
/*									      */
/*                      Copyright (c) HANBACK ELECTRONICS		      */
/*                             All rights reserved.			      */
/*									      */
/*                            http://www.hanback.com			      */
/*									      */
/******************************************************************************/

/******************************************************************************/
/*									      */
/*============================================================================*/
/* Permission to use, copy, modify, and distribute this software and its      */
/* documentation are reserved by above authors and Hanback electronics.	      */
/* The above copyright notice and authors must be described in this software. */
/*============================================================================*/
/*									      */
/******************************************************************************/

#define NORMAL	
#define ESC_GAS

module GasDetectorP {
  provides interface   GasDetector;
  
  uses interface HplAtm128Interrupt as Int;
  uses interface Timer<TMilli> as timer;	//가스가 감지된후  일정 시간마다 포트를 체크해서 정상인지 확인
  uses interface Timer<TMilli> as timer1;	//가스가 감지된 후 일정 시간동안 중복 감지를 막는 타이머 
  uses interface Leds;
}
implementation
{
  
  uint16_t m_normalCheckTime;			//감지된 후 정상상태로 돌아왔는지 확인하는 타이머 
  uint16_t m_firedCheckTime;			//가스가 감지된 다음 다음감지 기간의 최소 시간
  
  task void sendSignal() {
    
	call timer1.startOneShot(m_firedCheckTime);
    	call timer.startPeriodic(m_normalCheckTime);
    	signal GasDetector.EscapeOfGas();

  }
  
  task void timerStop(){
	call timer1.stop();
	call timer.stop();
	
  }

  async event void Int.fired() {
	call Int.disable();
	call Int.clear();
	if(READ_BIT(PINE, 5)){
		call Int.enable();
		post timerStop();
		return ;		//아주 짧은 시간 동안 유지. 되었다..  잡음?
	}
	post sendSignal();
  }

  event void timer.fired() {
	if(READ_BIT(PINE, 5)){
		signal GasDetector.BecomeNormal();
		call timer.stop();
	}
  }
 
  event void timer1.fired() {
 
	if(!READ_BIT(PINE, 5)){		//최소 감지 각격이 지났는데 아직도 감지중이면 또 시그널
  		post sendSignal();
	}
	else{
		call Int.enable();	//아니면 인터럽트 인에이블
	}
	
  }

  command void GasDetector.Init(uint8_t edge,uint16_t nomalcheckTimer,uint16_t minGapTimer){
	call Int.edge(edge);
	m_normalCheckTime = nomalcheckTimer;
	m_firedCheckTime = minGapTimer;
  }

  command uint8_t GasDetector.WatchEscOfGas(){
	uint8_t now;
	call Int.clear();
	if(READ_BIT(PINE, 5)){
		call Int.enable();
		now = 1;
	}
	else{
		post sendSignal();
		now =0;
	}
	return now;
  }
}
