/*
 *
 * Authors:       chlee hanback electronics
 * Date last modified:  2/28/06
 *
 */
module MotorP
{
  provides {
    interface Motor;
  }
  uses{
    interface GeneralIO as M1_A1;
    interface GeneralIO as M1_A2;
    interface GeneralIO as M1_EN;
    interface GeneralIO as M2_B1;
    interface GeneralIO as M2_B2;
    interface GeneralIO as M2_EN;
  }
}

implementation
{
uint8_t Motor1_status,Motor2_status;

command error_t Motor.motor_init(){
    call M1_A1.makeOutput();
    call M1_A2.makeOutput();
    call M1_EN.makeOutput();
    call M1_EN.clr();
    call M2_B1.makeOutput();
    call M2_B1.makeOutput();
    call M2_EN.makeOutput();
    call M2_EN.clr();
    Motor1_status = Motor2_status = 0;
    return SUCCESS;
}

command error_t Motor.M1_forward() {
  call M1_A1.set();
  call M1_A2.clr();
  call M1_EN.set();
  return SUCCESS;
}

command error_t Motor.M1_backward() {
  call M1_A1.clr();
  call M1_A2.set();
  call M1_EN.set();
  return SUCCESS;
}

command error_t Motor.M1_stop() {
  call M1_A1.clr();
  call M1_A2.clr();
  call M1_EN.clr();
  return SUCCESS;
}

command error_t Motor.M2_forward() {
  call M2_B1.set();
  call M2_B2.clr();
  call M2_EN.set();
  return SUCCESS;
}

command error_t Motor.M2_backward() {
  call M2_B1.clr();
  call M2_B2.set();
  call M2_EN.set();
  return SUCCESS;
}

command error_t Motor.M2_stop() {
  call M2_B1.clr();
  call M2_B2.clr();
  call M2_EN.clr();
  return SUCCESS;
}

}


