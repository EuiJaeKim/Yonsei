/*
 *
 * Authors:		chlee hanback electronics
 * Date last modified:  2/28/06
 *
 */
configuration RelayC
{
  provides {
     interface Relay;
   
  }
}

implementation {
  components RelayP,HplAtm128GeneralIOC;

  Relay = RelayP;
  
  RelayP.Relay0Pin -> HplAtm128GeneralIOC.PortC5;
  RelayP.Relay1Pin -> HplAtm128GeneralIOC.PortC6;
}


