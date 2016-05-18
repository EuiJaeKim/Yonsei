/*
 *
 * Authors:		Cheul-hee Lee
 *
 * $Id: rtc4513C.nc,v 1.1 2005/06/21 18:45:40 chlee $
 * hanback co. ltd,
 */
 
interface Motor {
  command error_t M1_forward();
  command error_t M1_backward();
  command error_t M1_stop();
  command error_t M2_forward();
  command error_t M2_backward();
  command error_t M2_stop();
  command error_t motor_init();
}


