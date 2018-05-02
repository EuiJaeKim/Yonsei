/*
 *
 * Authors:		Cheul-hee Lee
 *
 * $Id: rtc4513C.nc,v 1.1 2005/06/21 18:45:40 chlee $
 * hanback co. ltd,
 */
 
interface Relay {
  command error_t relay_set0();
  command error_t relay_set1();
  command error_t relay_clear0();
  command error_t relay_clear1();
  command error_t IsSet0();
  command error_t IsSet1();
  
  command error_t relay_sendbyte(uint8_t data);
  command uint8_t relay_getbyte();
  command error_t relay_init();

}

