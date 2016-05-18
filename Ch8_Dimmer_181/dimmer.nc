// $Id: dimmer.nc,v 1.0 2007-03-27 10:01:33 $

/*tab:4
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
 
interface dimmer {
  command error_t init();
  command error_t setLevel(uint16_t d1);
}
