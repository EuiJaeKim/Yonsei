/*
 *
 * Authors:       chlee hanback electronics
 * Date last modified:  2/28/06
 *
 */
module RelayP
{
  provides {
    interface Relay;
  }
  uses{
    interface GeneralIO as Relay0Pin;
    interface GeneralIO as Relay1Pin; 
  }
}

implementation
{
  uint8_t relay_status;

  command error_t Relay.relay_init(){
    call Relay1Pin.clr();
    call Relay1Pin.makeOutput();
    call Relay0Pin.clr();
    call Relay0Pin.makeOutput();
    relay_status = 0;
    return SUCCESS;
  }

  command error_t Relay.relay_set0() {
    call Relay0Pin.set();
    relay_status |= 0x10;
    return SUCCESS;
  }

  command error_t Relay.relay_set1() {
    call Relay1Pin.set();
    relay_status |= 0x20;
    return SUCCESS;
  }

  command error_t Relay.relay_clear0() {
    call Relay0Pin.clr();
    relay_status &= ~0x10;
    return SUCCESS;
  }

  command error_t Relay.relay_clear1() {
    call Relay1Pin.clr();
    relay_status &= ~0x20;
    return SUCCESS;
  }

  command uint8_t Relay.IsSet0() {
    if(relay_status & 0x10)
      return TRUE;
    else
      return FALSE;
    
  }
 
  command uint8_t Relay.IsSet1() {
    if(relay_status & 0x20)
      return TRUE;
    else
      return FALSE;
  }
  
  command error_t Relay.relay_sendbyte(uint8_t data){
    if(data & 0x10){call Relay0Pin.set();;relay_status |= 0x10;}
    if(data & 0x20){call Relay1Pin.set();;relay_status |= 0x20;}
    return SUCCESS;
  }
  
  command uint8_t Relay.relay_getbyte() {
    return relay_status;
  }
  
}

