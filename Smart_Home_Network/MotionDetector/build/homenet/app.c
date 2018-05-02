#define nx_struct struct
#define nx_union union
#define dbg(mode, format, ...) ((void)0)
#define dbg_clear(mode, format, ...) ((void)0)
#define dbg_active(mode) 0
# 65 "/usr/lib/gcc/avr/3.4.3/../../../../avr/include/stdint.h"
typedef signed char int8_t;




typedef unsigned char uint8_t;
# 104 "/usr/lib/gcc/avr/3.4.3/../../../../avr/include/stdint.h" 3
typedef int int16_t;




typedef unsigned int uint16_t;










typedef long int32_t;




typedef unsigned long uint32_t;










typedef long long int64_t;




typedef unsigned long long uint64_t;
#line 155
typedef int16_t intptr_t;




typedef uint16_t uintptr_t;
# 235 "/usr/lib/ncc/nesc_nx.h"
static __inline uint8_t __nesc_ntoh_uint8(const void *source);




static __inline uint8_t __nesc_hton_uint8(void *target, uint8_t value);





static __inline uint8_t __nesc_ntoh_leuint8(const void *source);




static __inline uint8_t __nesc_hton_leuint8(void *target, uint8_t value);





static __inline int8_t __nesc_hton_int8(void *target, int8_t value);
#line 269
static __inline uint16_t __nesc_hton_uint16(void *target, uint16_t value);






static __inline uint16_t __nesc_ntoh_leuint16(const void *source);




static __inline uint16_t __nesc_hton_leuint16(void *target, uint16_t value);
#line 385
typedef struct { char data[1]; } __attribute__((packed)) nx_int8_t;typedef int8_t __nesc_nxbase_nx_int8_t  ;
typedef struct { char data[2]; } __attribute__((packed)) nx_int16_t;typedef int16_t __nesc_nxbase_nx_int16_t  ;
typedef struct { char data[4]; } __attribute__((packed)) nx_int32_t;typedef int32_t __nesc_nxbase_nx_int32_t  ;
typedef struct { char data[8]; } __attribute__((packed)) nx_int64_t;typedef int64_t __nesc_nxbase_nx_int64_t  ;
typedef struct { char data[1]; } __attribute__((packed)) nx_uint8_t;typedef uint8_t __nesc_nxbase_nx_uint8_t  ;
typedef struct { char data[2]; } __attribute__((packed)) nx_uint16_t;typedef uint16_t __nesc_nxbase_nx_uint16_t  ;
typedef struct { char data[4]; } __attribute__((packed)) nx_uint32_t;typedef uint32_t __nesc_nxbase_nx_uint32_t  ;
typedef struct { char data[8]; } __attribute__((packed)) nx_uint64_t;typedef uint64_t __nesc_nxbase_nx_uint64_t  ;


typedef struct { char data[1]; } __attribute__((packed)) nxle_int8_t;typedef int8_t __nesc_nxbase_nxle_int8_t  ;
typedef struct { char data[2]; } __attribute__((packed)) nxle_int16_t;typedef int16_t __nesc_nxbase_nxle_int16_t  ;
typedef struct { char data[4]; } __attribute__((packed)) nxle_int32_t;typedef int32_t __nesc_nxbase_nxle_int32_t  ;
typedef struct { char data[8]; } __attribute__((packed)) nxle_int64_t;typedef int64_t __nesc_nxbase_nxle_int64_t  ;
typedef struct { char data[1]; } __attribute__((packed)) nxle_uint8_t;typedef uint8_t __nesc_nxbase_nxle_uint8_t  ;
typedef struct { char data[2]; } __attribute__((packed)) nxle_uint16_t;typedef uint16_t __nesc_nxbase_nxle_uint16_t  ;
typedef struct { char data[4]; } __attribute__((packed)) nxle_uint32_t;typedef uint32_t __nesc_nxbase_nxle_uint32_t  ;
typedef struct { char data[8]; } __attribute__((packed)) nxle_uint64_t;typedef uint64_t __nesc_nxbase_nxle_uint64_t  ;
# 213 "/usr/lib/gcc/avr/3.4.3/include/stddef.h" 3
typedef unsigned int size_t;
# 67 "/usr/lib/gcc/avr/3.4.3/../../../../avr/include/string.h"
extern void *memcpy(void *, const void *, size_t );

extern void *memset(void *, int , size_t );
# 325 "/usr/lib/gcc/avr/3.4.3/include/stddef.h" 3
typedef int wchar_t;
# 69 "/usr/lib/gcc/avr/3.4.3/../../../../avr/include/stdlib.h"
#line 66
typedef struct __nesc_unnamed4242 {
  int quot;
  int rem;
} div_t;





#line 72
typedef struct __nesc_unnamed4243 {
  long quot;
  long rem;
} ldiv_t;


typedef int (*__compar_fn_t)(const void *, const void *);
# 151 "/usr/lib/gcc/avr/3.4.3/include/stddef.h" 3
typedef int ptrdiff_t;
# 19 "/opt/tinyos-2.x/tos/system/tos.h"
typedef uint8_t bool;
enum __nesc_unnamed4244 {
#line 20
  FALSE = 0, TRUE = 1
};
typedef struct { char data[1]; } __attribute__((packed)) nx_bool;typedef int8_t __nesc_nxbase_nx_bool  ;
uint16_t TOS_NODE_ID = 1;





struct __nesc_attr_atmostonce {
};
#line 30
struct __nesc_attr_atleastonce {
};
#line 31
struct __nesc_attr_exactlyonce {
};
# 34 "/opt/tinyos-2.x/tos/types/TinyError.h"
enum __nesc_unnamed4245 {
  SUCCESS = 0, 
  FAIL = 1, 
  ESIZE = 2, 
  ECANCEL = 3, 
  EOFF = 4, 
  EBUSY = 5, 
  EINVAL = 6, 
  ERETRY = 7, 
  ERESERVE = 8
};

typedef uint8_t error_t  ;

static inline error_t ecombine(error_t r1, error_t r2);
# 90 "/usr/lib/gcc/avr/3.4.3/../../../../avr/include/avr/pgmspace.h"
typedef void prog_void __attribute((__progmem__)) ;
typedef char prog_char __attribute((__progmem__)) ;
typedef unsigned char prog_uchar __attribute((__progmem__)) ;

typedef int8_t prog_int8_t __attribute((__progmem__)) ;
typedef uint8_t prog_uint8_t __attribute((__progmem__)) ;
typedef int16_t prog_int16_t __attribute((__progmem__)) ;
typedef uint16_t prog_uint16_t __attribute((__progmem__)) ;

typedef int32_t prog_int32_t __attribute((__progmem__)) ;
typedef uint32_t prog_uint32_t __attribute((__progmem__)) ;


typedef int64_t prog_int64_t __attribute((__progmem__)) ;
typedef uint64_t prog_uint64_t __attribute((__progmem__)) ;
# 25 "/opt/tinyos-2.x/tos/chips/atm128/atm128const.h"
typedef uint8_t const_uint8_t __attribute((__progmem__)) ;
typedef uint16_t const_uint16_t __attribute((__progmem__)) ;
typedef uint32_t const_uint32_t __attribute((__progmem__)) ;
typedef int8_t const_int8_t __attribute((__progmem__)) ;
typedef int16_t const_int16_t __attribute((__progmem__)) ;
typedef int32_t const_int32_t __attribute((__progmem__)) ;
# 78 "/opt/tinyos-2.x/tos/chips/atm128/atm128hardware.h"
static __inline void __nesc_enable_interrupt(void);



static __inline void __nesc_disable_interrupt(void);




typedef uint8_t __nesc_atomic_t;
__nesc_atomic_t __nesc_atomic_start(void );
void __nesc_atomic_end(__nesc_atomic_t original_SREG);









#line 98
__inline __nesc_atomic_t 
__nesc_atomic_start(void )  ;








#line 107
__inline void 
__nesc_atomic_end(__nesc_atomic_t original_SREG)  ;






typedef uint8_t mcu_power_t  ;


enum __nesc_unnamed4246 {
  ATM128_POWER_IDLE = 0, 
  ATM128_POWER_ADC_NR = 1, 
  ATM128_POWER_EXT_STANDBY = 2, 
  ATM128_POWER_SAVE = 3, 
  ATM128_POWER_STANDBY = 4, 
  ATM128_POWER_DOWN = 5
};


static inline mcu_power_t mcombine(mcu_power_t m1, mcu_power_t m2);
# 34 "/opt/tinyos-2.x/tos/chips/atm128/adc/Atm128Adc.h"
enum __nesc_unnamed4247 {
  ATM128_ADC_VREF_OFF = 0, 
  ATM128_ADC_VREF_AVCC = 1, 
  ATM128_ADC_VREF_RSVD, 
  ATM128_ADC_VREF_2_56 = 3
};


enum __nesc_unnamed4248 {
  ATM128_ADC_RIGHT_ADJUST = 0, 
  ATM128_ADC_LEFT_ADJUST = 1
};



enum __nesc_unnamed4249 {
  ATM128_ADC_SNGL_ADC0 = 0, 
  ATM128_ADC_SNGL_ADC1, 
  ATM128_ADC_SNGL_ADC2, 
  ATM128_ADC_SNGL_ADC3, 
  ATM128_ADC_SNGL_ADC4, 
  ATM128_ADC_SNGL_ADC5, 
  ATM128_ADC_SNGL_ADC6, 
  ATM128_ADC_SNGL_ADC7, 
  ATM128_ADC_DIFF_ADC00_10x, 
  ATM128_ADC_DIFF_ADC10_10x, 
  ATM128_ADC_DIFF_ADC00_200x, 
  ATM128_ADC_DIFF_ADC10_200x, 
  ATM128_ADC_DIFF_ADC22_10x, 
  ATM128_ADC_DIFF_ADC32_10x, 
  ATM128_ADC_DIFF_ADC22_200x, 
  ATM128_ADC_DIFF_ADC32_200x, 
  ATM128_ADC_DIFF_ADC01_1x, 
  ATM128_ADC_DIFF_ADC11_1x, 
  ATM128_ADC_DIFF_ADC21_1x, 
  ATM128_ADC_DIFF_ADC31_1x, 
  ATM128_ADC_DIFF_ADC41_1x, 
  ATM128_ADC_DIFF_ADC51_1x, 
  ATM128_ADC_DIFF_ADC61_1x, 
  ATM128_ADC_DIFF_ADC71_1x, 
  ATM128_ADC_DIFF_ADC02_1x, 
  ATM128_ADC_DIFF_ADC12_1x, 
  ATM128_ADC_DIFF_ADC22_1x, 
  ATM128_ADC_DIFF_ADC32_1x, 
  ATM128_ADC_DIFF_ADC42_1x, 
  ATM128_ADC_DIFF_ADC52_1x, 
  ATM128_ADC_SNGL_1_23, 
  ATM128_ADC_SNGL_GND
};







#line 85
typedef struct __nesc_unnamed4250 {

  uint8_t mux : 5;
  uint8_t adlar : 1;
  uint8_t refs : 2;
} Atm128Admux_t;




enum __nesc_unnamed4251 {
  ATM128_ADC_PRESCALE_2 = 0, 
  ATM128_ADC_PRESCALE_2b, 
  ATM128_ADC_PRESCALE_4, 
  ATM128_ADC_PRESCALE_8, 
  ATM128_ADC_PRESCALE_16, 
  ATM128_ADC_PRESCALE_32, 
  ATM128_ADC_PRESCALE_64, 
  ATM128_ADC_PRESCALE_128, 



  ATM128_ADC_PRESCALE
};


enum __nesc_unnamed4252 {
  ATM128_ADC_ENABLE_OFF = 0, 
  ATM128_ADC_ENABLE_ON
};


enum __nesc_unnamed4253 {
  ATM128_ADC_START_CONVERSION_OFF = 0, 
  ATM128_ADC_START_CONVERSION_ON
};


enum __nesc_unnamed4254 {
  ATM128_ADC_FREE_RUNNING_OFF = 0, 
  ATM128_ADC_FREE_RUNNING_ON
};


enum __nesc_unnamed4255 {
  ATM128_ADC_INT_FLAG_OFF = 0, 
  ATM128_ADC_INT_FLAG_ON
};


enum __nesc_unnamed4256 {
  ATM128_ADC_INT_ENABLE_OFF = 0, 
  ATM128_ADC_INT_ENABLE_ON
};










#line 141
typedef struct __nesc_unnamed4257 {

  uint8_t adps : 3;
  uint8_t adie : 1;
  uint8_t adif : 1;
  uint8_t adfr : 1;
  uint8_t adsc : 1;
  uint8_t aden : 1;
} Atm128Adcsra_t;

typedef uint8_t Atm128_ADCH_t;
typedef uint8_t Atm128_ADCL_t;
# 29 "/opt/tinyos-2.x/tos/lib/timer/Timer.h"
typedef struct __nesc_unnamed4258 {
} 
#line 29
TMilli;
typedef struct __nesc_unnamed4259 {
} 
#line 30
T32khz;
typedef struct __nesc_unnamed4260 {
} 
#line 31
TMicro;
# 43 "/opt/tinyos-2.x/tos/chips/atm128/timer/Atm128Timer.h"
enum __nesc_unnamed4261 {
  ATM128_CLK8_OFF = 0x0, 
  ATM128_CLK8_NORMAL = 0x1, 
  ATM128_CLK8_DIVIDE_8 = 0x2, 
  ATM128_CLK8_DIVIDE_32 = 0x3, 
  ATM128_CLK8_DIVIDE_64 = 0x4, 
  ATM128_CLK8_DIVIDE_128 = 0x5, 
  ATM128_CLK8_DIVIDE_256 = 0x6, 
  ATM128_CLK8_DIVIDE_1024 = 0x7
};

enum __nesc_unnamed4262 {
  ATM128_CLK16_OFF = 0x0, 
  ATM128_CLK16_NORMAL = 0x1, 
  ATM128_CLK16_DIVIDE_8 = 0x2, 
  ATM128_CLK16_DIVIDE_64 = 0x3, 
  ATM128_CLK16_DIVIDE_256 = 0x4, 
  ATM128_CLK16_DIVIDE_1024 = 0x5, 
  ATM128_CLK16_EXTERNAL_FALL = 0x6, 
  ATM128_CLK16_EXTERNAL_RISE = 0x7
};


enum __nesc_unnamed4263 {
  AVR_CLOCK_OFF = 0, 
  AVR_CLOCK_ON = 1, 
  AVR_CLOCK_DIVIDE_8 = 2
};


enum __nesc_unnamed4264 {
  ATM128_WAVE8_NORMAL = 0, 
  ATM128_WAVE8_PWM, 
  ATM128_WAVE8_CTC, 
  ATM128_WAVE8_PWM_FAST
};


enum __nesc_unnamed4265 {
  ATM128_COMPARE_OFF = 0, 
  ATM128_COMPARE_TOGGLE, 
  ATM128_COMPARE_CLEAR, 
  ATM128_COMPARE_SET
};
#line 99
#line 89
typedef union __nesc_unnamed4266 {

  uint8_t flat;
  struct __nesc_unnamed4267 {
    uint8_t cs : 3;
    uint8_t wgm1 : 1;
    uint8_t com : 2;
    uint8_t wgm0 : 1;
    uint8_t foc : 1;
  } bits;
} Atm128TimerControl_t;

typedef Atm128TimerControl_t Atm128_TCCR0_t;
typedef uint8_t Atm128_TCNT0_t;
typedef uint8_t Atm128_OCR0_t;

typedef Atm128TimerControl_t Atm128_TCCR2_t;
typedef uint8_t Atm128_TCNT2_t;
typedef uint8_t Atm128_OCR2_t;
#line 121
#line 111
typedef union __nesc_unnamed4268 {

  uint8_t flat;
  struct __nesc_unnamed4269 {
    uint8_t tcr0ub : 1;
    uint8_t ocr0ub : 1;
    uint8_t tcn0ub : 1;
    uint8_t as0 : 1;
    uint8_t rsvd : 4;
  } bits;
} Atm128_ASSR_t;
#line 137
#line 124
typedef union __nesc_unnamed4270 {

  uint8_t flat;
  struct __nesc_unnamed4271 {
    uint8_t toie0 : 1;
    uint8_t ocie0 : 1;
    uint8_t toie1 : 1;
    uint8_t ocie1b : 1;
    uint8_t ocie1a : 1;
    uint8_t ticie1 : 1;
    uint8_t toie2 : 1;
    uint8_t ocie2 : 1;
  } bits;
} Atm128_TIMSK_t;
#line 154
#line 141
typedef union __nesc_unnamed4272 {

  uint8_t flat;
  struct __nesc_unnamed4273 {
    uint8_t tov0 : 1;
    uint8_t ocf0 : 1;
    uint8_t tov1 : 1;
    uint8_t ocf1b : 1;
    uint8_t ocf1a : 1;
    uint8_t icf1 : 1;
    uint8_t tov2 : 1;
    uint8_t ocf2 : 1;
  } bits;
} Atm128_TIFR_t;
#line 169
#line 158
typedef union __nesc_unnamed4274 {

  uint8_t flat;
  struct __nesc_unnamed4275 {
    uint8_t psr321 : 1;
    uint8_t psr0 : 1;
    uint8_t pud : 1;
    uint8_t acme : 1;
    uint8_t rsvd : 3;
    uint8_t tsm : 1;
  } bits;
} Atm128_SFIOR_t;






enum __nesc_unnamed4276 {
  ATM128_TIMER_COMPARE_NORMAL = 0, 
  ATM128_TIMER_COMPARE_TOGGLE, 
  ATM128_TIMER_COMPARE_CLEAR, 
  ATM128_TIMER_COMPARE_SET
};
#line 193
#line 184
typedef union __nesc_unnamed4277 {

  uint8_t flat;
  struct __nesc_unnamed4278 {
    uint8_t wgm10 : 2;
    uint8_t comC : 2;
    uint8_t comB : 2;
    uint8_t comA : 2;
  } bits;
} Atm128TimerCtrlCompare_t;


typedef Atm128TimerCtrlCompare_t Atm128_TCCR1A_t;


typedef Atm128TimerCtrlCompare_t Atm128_TCCR3A_t;


enum __nesc_unnamed4279 {
  ATM128_WAVE16_NORMAL = 0, 
  ATM128_WAVE16_PWM_8BIT, 
  ATM128_WAVE16_PWM_9BIT, 
  ATM128_WAVE16_PWM_10BIT, 
  ATM128_WAVE16_CTC_COMPARE, 
  ATM128_WAVE16_PWM_FAST_8BIT, 
  ATM128_WAVE16_PWM_FAST_9BIT, 
  ATM128_WAVE16_PWM_FAST_10BIT, 
  ATM128_WAVE16_PWM_CAPTURE_LOW, 
  ATM128_WAVE16_PWM_COMPARE_LOW, 
  ATM128_WAVE16_PWM_CAPTURE_HIGH, 
  ATM128_WAVE16_PWM_COMPARE_HIGH, 
  ATM128_WAVE16_CTC_CAPTURE, 
  ATM128_WAVE16_RESERVED, 
  ATM128_WAVE16_PWM_FAST_CAPTURE, 
  ATM128_WAVE16_PWM_FAST_COMPARE
};
#line 232
#line 222
typedef union __nesc_unnamed4280 {

  uint8_t flat;
  struct __nesc_unnamed4281 {
    uint8_t cs : 3;
    uint8_t wgm32 : 2;
    uint8_t rsvd : 1;
    uint8_t ices1 : 1;
    uint8_t icnc1 : 1;
  } bits;
} Atm128TimerCtrlCapture_t;


typedef Atm128TimerCtrlCapture_t Atm128_TCCR1B_t;


typedef Atm128TimerCtrlCapture_t Atm128_TCCR3B_t;
#line 250
#line 241
typedef union __nesc_unnamed4282 {

  uint8_t flat;
  struct __nesc_unnamed4283 {
    uint8_t rsvd : 5;
    uint8_t focC : 1;
    uint8_t focB : 1;
    uint8_t focA : 1;
  } bits;
} Atm128TimerCtrlClock_t;


typedef Atm128TimerCtrlClock_t Atm128_TCCR1C_t;


typedef Atm128TimerCtrlClock_t Atm128_TCCR3C_t;



typedef uint8_t Atm128_TCNT1H_t;
typedef uint8_t Atm128_TCNT1L_t;
typedef uint8_t Atm128_TCNT3H_t;
typedef uint8_t Atm128_TCNT3L_t;


typedef uint8_t Atm128_OCR1AH_t;
typedef uint8_t Atm128_OCR1AL_t;
typedef uint8_t Atm128_OCR1BH_t;
typedef uint8_t Atm128_OCR1BL_t;
typedef uint8_t Atm128_OCR1CH_t;
typedef uint8_t Atm128_OCR1CL_t;


typedef uint8_t Atm128_OCR3AH_t;
typedef uint8_t Atm128_OCR3AL_t;
typedef uint8_t Atm128_OCR3BH_t;
typedef uint8_t Atm128_OCR3BL_t;
typedef uint8_t Atm128_OCR3CH_t;
typedef uint8_t Atm128_OCR3CL_t;


typedef uint8_t Atm128_ICR1H_t;
typedef uint8_t Atm128_ICR1L_t;
typedef uint8_t Atm128_ICR3H_t;
typedef uint8_t Atm128_ICR3L_t;
#line 300
#line 288
typedef union __nesc_unnamed4284 {

  uint8_t flat;
  struct __nesc_unnamed4285 {
    uint8_t ocie1c : 1;
    uint8_t ocie3c : 1;
    uint8_t toie3 : 1;
    uint8_t ocie3b : 1;
    uint8_t ocie3a : 1;
    uint8_t ticie3 : 1;
    uint8_t rsvd : 2;
  } bits;
} Atm128_ETIMSK_t;
#line 315
#line 303
typedef union __nesc_unnamed4286 {

  uint8_t flat;
  struct __nesc_unnamed4287 {
    uint8_t ocf1c : 1;
    uint8_t ocf3c : 1;
    uint8_t tov3 : 1;
    uint8_t ocf3b : 1;
    uint8_t ocf3a : 1;
    uint8_t icf3 : 1;
    uint8_t rsvd : 2;
  } bits;
} Atm128_ETIFR_t;
# 51 "/opt/tinyos-2.x/tos/platforms/mica/MicaTimer.h"
typedef struct __nesc_unnamed4288 {
} 
#line 51
T64khz;
typedef struct __nesc_unnamed4289 {
} 
#line 52
T128khz;
typedef struct __nesc_unnamed4290 {
} 
#line 53
T2mhz;
typedef struct __nesc_unnamed4291 {
} 
#line 54
T4mhz;
#line 107
typedef T32khz TOne;
typedef TMicro TThree;
typedef uint16_t counter_one_overflow_t;
typedef uint16_t counter_three_overflow_t;

enum __nesc_unnamed4292 {
  MICA_PRESCALER_ONE = ATM128_CLK16_DIVIDE_256, 
  MICA_DIVIDE_ONE_FOR_32KHZ_LOG2 = 0, 
  MICA_PRESCALER_THREE = ATM128_CLK16_DIVIDE_8, 
  MICA_DIVIDE_THREE_FOR_MICRO_LOG2 = 0, 
  EXT_STANDBY_T0_THRESHOLD = 12
};





enum __nesc_unnamed4293 {
  PLATFORM_MHZ = 8
};
# 56 "/opt/tinyos-2.x/tos/platforms/homenet/hardware.h"
enum __nesc_unnamed4294 {
  CHANNEL_THERMISTOR = ATM128_ADC_SNGL_ADC1, 
  CHANNEL_RSSI = ATM128_ADC_SNGL_ADC0, 
  CHANNEL_BATTERY = ATM128_ADC_SNGL_ADC7
};

enum __nesc_unnamed4295 {
  PLATFORM_BAUDRATE = 57600L
};
# 7 "HomeNet.h"
enum __nesc_unnamed4296 {
  F_EDGE = 0, 
  R_EDGE = 1
};

enum __nesc_unnamed4297 {
  SENSOR_TIMER = 200
};

enum __nesc_unnamed4298 {
  RFID_TIMER = 1000
};

enum __nesc_unnamed4299 {
  MOTE_001_SEN_HUMAN_DETECT = 1, 
  MOTE_002_SEN_HUMAN_DETECT = 2, 
  MOTE_011_SEN_HUMAN_DOOR_DETECT = 11, 
  MOTE_031_DEV_DOOR_LOCK = 31, 
  MOTE_041_DEV_CURTAIN_GAS = 41, 
  MOTE_061_DEV_RELAY_LIGHT_FAN = 61, 
  MOTE_062_DEV_RELAY_TV_REFREG_AIRCON = 62, 
  MOTE_101_SEN_GAS_DETECT = 101
};

enum __nesc_unnamed4300 {
  AM_UBIHOUSE = 0x3e, 
  AM_UBIHOUSE_IN = 0x3f, 
  UBIHOUSE_GROUP = 0x27
};



enum __nesc_unnamed4301 {
  COMM_GET = 1, 
  COMM_SET = 2, 
  COMM_INT = 3
};

enum __nesc_unnamed4302 {

  COMM_GET_BAT = 1, 
  COMM_GET_TEMP = 2, 
  COMM_GET_HUMI = 3, 
  COMM_GET_CDS = 4, 
  COMM_GET_ALL = 5, 
  COMM_GET_DAY_DETECT = 6, 
  COMM_GET_GAS_DETECT_STATUS = 7, 
  COMM_GET_REFREG_RFID = 8
};

enum __nesc_unnamed4303 {


  COMM_INT_GAS_DETECT = 1, 
  COMM_INT_GAS_CLEAR = 2, 
  COMM_INT_MOTION_DETECT = 3, 
  COMM_INT_BAT_LOW = 4, 
  COMM_INT_DAY_DETECT = 5, 
  COMM_INT_RFID = 6, 
  COMM_INT_REED = 7, 
  COMM_INT_DOOR_RFID = 8, 
  COMM_INT_BELL = 10, 
  COMM_INT_SENSING_POWER_ON = 11, 
  COMM_INT_SENSING_POWER_OFF = 12
};

enum __nesc_unnamed4304 {



  COMM_SET_MOTER_1S = 0x0, 
  COMM_SET_MOTER_1N = 0x1, 
  COMM_SET_MOTER_1R = 0x2, 
  COMM_SET_MOTER_0S = 0x3, 
  COMM_SET_MOTER_0N = 0x4, 
  COMM_SET_MOTER_0R = 0x5, 


  COMM_SET_MOTER_1S0S = 0x6, 
  COMM_SET_MOTER_1S0N = 0x7, 
  COMM_SET_MOTER_1N0S = 0x8, 
  COMM_SET_MOTER_1N0N = 0x9, 
  COMM_SET_MOTER_1S0R = 0xa, 
  COMM_SET_MOTER_1R0S = 0xb, 
  COMM_SET_MOTER_1R0R = 0xc
};


enum __nesc_unnamed4305 {



  COMM_SET_RELAY_1D = 0xd, 
  COMM_SET_RELAY_1C = 0xe, 
  COMM_SET_RELAY_0D = 0xf, 
  COMM_SET_RELAY_0C = 0x10, 

  COMM_SET_RELAY_1D0D = 0x11, 
  COMM_SET_RELAY_1D0C = 0x12, 
  COMM_SET_RELAY_1C0D = 0x13, 
  COMM_SET_RELAY_1C0C = 0x14
};


enum __nesc_unnamed4306 {

  COMM_SET_DIMMER_DN = 0x15, 
  COMM_SET_DIMMER_UP = 0x16
};

enum __nesc_unnamed4307 {

  COMM_SET_GAS_ON = 0x17, 
  COMM_SET_GAS_OFF = 0x18, 
  COMM_SET_CURTAIN_OPEN = 0x19, 
  COMM_SET_CURTAIN_CLOSE = 0x1a, 
  COMM_SET_CURTAIN_STOP = 0x1b, 
  COMM_SET_TV_ON = 0x1c, 
  COMM_SET_TV_OFF = 0x1d, 
  COMM_SET_AIRCON_ON = 0x1e, 
  COMM_SET_AIRCON_OFF = 0x1f, 
  COMM_SET_REFREG_ON = 0x20, 
  COMM_SET_REFREG_OFF = 0x21
};
#line 147
#line 142
typedef struct _user_header {
  uint8_t id;
  uint8_t cmd;
  uint8_t sub;
  uint8_t length;
} user_header_t;




#line 149
typedef struct _user_packet {
  user_header_t uh;
  uint8_t data;
} user_packet_t;










#line 156
typedef struct _sens_data {
  user_header_t uh;
  uint16_t photo;
  uint16_t temp;
  uint16_t humi;
  uint16_t infrared;
  uint16_t battery;
} sens_data_t;

enum __nesc_unnamed4308 {
#line 165
  AM_HOMENET = 0x09
};
# 30 "/opt/tinyos-2.x/tos/types/Leds.h"
enum __nesc_unnamed4309 {
  LEDS_LED0 = 1 << 0, 
  LEDS_LED1 = 1 << 1, 
  LEDS_LED2 = 1 << 2, 
  LEDS_LED3 = 1 << 3, 
  LEDS_LED4 = 1 << 4, 
  LEDS_LED5 = 1 << 5, 
  LEDS_LED6 = 1 << 6, 
  LEDS_LED7 = 1 << 7
};
# 40 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420.h"
typedef uint8_t cc2420_status_t;









#line 42
typedef nx_struct cc2420_header_t {
  nxle_uint8_t length;
  nxle_uint16_t fcf;
  nxle_uint8_t dsn;
  nxle_uint16_t destpan;
  nxle_uint16_t dest;
  nxle_uint16_t src;
  nxle_uint8_t type;
} __attribute__((packed)) cc2420_header_t;


#line 52
typedef nx_struct cc2420_footer_t {
} __attribute__((packed)) cc2420_footer_t;








#line 55
typedef nx_struct cc2420_metadata_t {
  nx_uint8_t tx_power;
  nx_uint8_t rssi;
  nx_uint8_t lqi;
  nx_bool crc;
  nx_bool ack;
  nx_uint16_t time;
} __attribute__((packed)) cc2420_metadata_t;




#line 64
typedef nx_struct cc2420_packet_t {
  cc2420_header_t packet;
  nx_uint8_t data[];
} __attribute__((packed)) cc2420_packet_t;
#line 81
enum __nesc_unnamed4310 {

  MAC_HEADER_SIZE = sizeof(cc2420_header_t ) - 1, 

  MAC_FOOTER_SIZE = sizeof(uint16_t ), 

  MAC_PACKET_SIZE = MAC_HEADER_SIZE + 28 + MAC_FOOTER_SIZE
};

enum cc2420_enums {
  CC2420_TIME_ACK_TURNAROUND = 7, 
  CC2420_TIME_VREN = 20, 
  CC2420_TIME_SYMBOL = 2, 
  CC2420_BACKOFF_PERIOD = 20 / CC2420_TIME_SYMBOL, 
  CC2420_ACK_WAIT_DELAY = 128
};

enum cc2420_status_enums {
  CC2420_STATUS_RSSI_VALID = 1 << 1, 
  CC2420_STATUS_LOCK = 1 << 2, 
  CC2420_STATUS_TX_ACTIVE = 1 << 3, 
  CC2420_STATUS_ENC_BUSY = 1 << 4, 
  CC2420_STATUS_TX_UNDERFLOW = 1 << 5, 
  CC2420_STATUS_XOSC16M_STABLE = 1 << 6
};

enum cc2420_config_reg_enums {
  CC2420_SNOP = 0x00, 
  CC2420_SXOSCON = 0x01, 
  CC2420_STXCAL = 0x02, 
  CC2420_SRXON = 0x03, 
  CC2420_STXON = 0x04, 
  CC2420_STXONCCA = 0x05, 
  CC2420_SRFOFF = 0x06, 
  CC2420_SXOSCOFF = 0x07, 
  CC2420_SFLUSHRX = 0x08, 
  CC2420_SFLUSHTX = 0x09, 
  CC2420_SACK = 0x0a, 
  CC2420_SACKPEND = 0x0b, 
  CC2420_SRXDEC = 0x0c, 
  CC2420_SRXENC = 0x0d, 
  CC2420_SAES = 0x0e, 
  CC2420_MAIN = 0x10, 
  CC2420_MDMCTRL0 = 0x11, 
  CC2420_MDMCTRL1 = 0x12, 
  CC2420_RSSI = 0x13, 
  CC2420_SYNCWORD = 0x14, 
  CC2420_TXCTRL = 0x15, 
  CC2420_RXCTRL0 = 0x16, 
  CC2420_RXCTRL1 = 0x17, 
  CC2420_FSCTRL = 0x18, 
  CC2420_SECCTRL0 = 0x19, 
  CC2420_SECCTRL1 = 0x1a, 
  CC2420_BATTMON = 0x1b, 
  CC2420_IOCFG0 = 0x1c, 
  CC2420_IOCFG1 = 0x1d, 
  CC2420_MANFIDL = 0x1e, 
  CC2420_MANFIDH = 0x1f, 
  CC2420_FSMTC = 0x20, 
  CC2420_MANAND = 0x21, 
  CC2420_MANOR = 0x22, 
  CC2420_AGCCTRL = 0x23, 
  CC2420_AGCTST0 = 0x24, 
  CC2420_AGCTST1 = 0x25, 
  CC2420_AGCTST2 = 0x26, 
  CC2420_FSTST0 = 0x27, 
  CC2420_FSTST1 = 0x28, 
  CC2420_FSTST2 = 0x29, 
  CC2420_FSTST3 = 0x2a, 
  CC2420_RXBPFTST = 0x2b, 
  CC2420_FMSTATE = 0x2c, 
  CC2420_ADCTST = 0x2d, 
  CC2420_DACTST = 0x2e, 
  CC2420_TOPTST = 0x2f, 
  CC2420_TXFIFO = 0x3e, 
  CC2420_RXFIFO = 0x3f
};

enum cc2420_ram_addr_enums {
  CC2420_RAM_TXFIFO = 0x000, 
  CC2420_RAM_RXFIFO = 0x080, 
  CC2420_RAM_KEY0 = 0x100, 
  CC2420_RAM_RXNONCE = 0x110, 
  CC2420_RAM_SABUF = 0x120, 
  CC2420_RAM_KEY1 = 0x130, 
  CC2420_RAM_TXNONCE = 0x140, 
  CC2420_RAM_CBCSTATE = 0x150, 
  CC2420_RAM_IEEEADR = 0x160, 
  CC2420_RAM_PANID = 0x168, 
  CC2420_RAM_SHORTADR = 0x16a
};

enum cc2420_nonce_enums {
  CC2420_NONCE_BLOCK_COUNTER = 0, 
  CC2420_NONCE_KEY_SEQ_COUNTER = 2, 
  CC2420_NONCE_FRAME_COUNTER = 3, 
  CC2420_NONCE_SOURCE_ADDRESS = 7, 
  CC2420_NONCE_FLAGS = 15
};

enum cc2420_main_enums {
  CC2420_MAIN_RESETn = 15, 
  CC2420_MAIN_ENC_RESETn = 14, 
  CC2420_MAIN_DEMOD_RESETn = 13, 
  CC2420_MAIN_MOD_RESETn = 12, 
  CC2420_MAIN_FS_RESETn = 11, 
  CC2420_MAIN_XOSC16M_BYPASS = 0
};

enum cc2420_mdmctrl0_enums {
  CC2420_MDMCTRL0_RESERVED_FRAME_MODE = 13, 
  CC2420_MDMCTRL0_PAN_COORDINATOR = 12, 
  CC2420_MDMCTRL0_ADR_DECODE = 11, 
  CC2420_MDMCTRL0_CCA_HYST = 8, 
  CC2420_MDMCTRL0_CCA_MOD = 6, 
  CC2420_MDMCTRL0_AUTOCRC = 5, 
  CC2420_MDMCTRL0_AUTOACK = 4, 
  CC2420_MDMCTRL0_PREAMBLE_LENGTH = 0
};

enum cc2420_mdmctrl1_enums {
  CC2420_MDMCTRL1_CORR_THR = 6, 
  CC2420_MDMCTRL1_DEMOD_AVG_MODE = 5, 
  CC2420_MDMCTRL1_MODULATION_MODE = 4, 
  CC2420_MDMCTRL1_TX_MODE = 2, 
  CC2420_MDMCTRL1_RX_MODE = 0
};

enum cc2420_rssi_enums {
  CC2420_RSSI_CCA_THR = 8, 
  CC2420_RSSI_RSSI_VAL = 0
};

enum cc2420_syncword_enums {
  CC2420_SYNCWORD_SYNCWORD = 0
};

enum cc2420_txctrl_enums {
  CC2420_TXCTRL_TXMIXBUF_CUR = 14, 
  CC2420_TXCTRL_TX_TURNAROUND = 13, 
  CC2420_TXCTRL_TXMIX_CAP_ARRAY = 11, 
  CC2420_TXCTRL_TXMIX_CURRENT = 9, 
  CC2420_TXCTRL_PA_CURRENT = 6, 
  CC2420_TXCTRL_RESERVED = 5, 
  CC2420_TXCTRL_PA_LEVEL = 0
};

enum cc2420_rxctrl0_enums {
  CC2420_RXCTRL0_RXMIXBUF_CUR = 12, 
  CC2420_RXCTRL0_HIGH_LNA_GAIN = 10, 
  CC2420_RXCTRL0_MED_LNA_GAIN = 8, 
  CC2420_RXCTRL0_LOW_LNA_GAIN = 6, 
  CC2420_RXCTRL0_HIGH_LNA_CURRENT = 4, 
  CC2420_RXCTRL0_MED_LNA_CURRENT = 2, 
  CC2420_RXCTRL0_LOW_LNA_CURRENT = 0
};

enum cc2420_rxctrl1_enums {
  CC2420_RXCTRL1_RXBPF_LOCUR = 13, 
  CC2420_RXCTRL1_RXBPF_MIDCUR = 12, 
  CC2420_RXCTRL1_LOW_LOWGAIN = 11, 
  CC2420_RXCTRL1_MED_LOWGAIN = 10, 
  CC2420_RXCTRL1_HIGH_HGM = 9, 
  CC2420_RXCTRL1_MED_HGM = 8, 
  CC2420_RXCTRL1_LNA_CAP_ARRAY = 6, 
  CC2420_RXCTRL1_RXMIX_TAIL = 4, 
  CC2420_RXCTRL1_RXMIX_VCM = 2, 
  CC2420_RXCTRL1_RXMIX_CURRENT = 0
};

enum cc2420_rsctrl_enums {
  CC2420_FSCTRL_LOCK_THR = 14, 
  CC2420_FSCTRL_CAL_DONE = 13, 
  CC2420_FSCTRL_CAL_RUNNING = 12, 
  CC2420_FSCTRL_LOCK_LENGTH = 11, 
  CC2420_FSCTRL_LOCK_STATUS = 10, 
  CC2420_FSCTRL_FREQ = 0
};

enum cc2420_secctrl0_enums {
  CC2420_SECCTRL0_RXFIFO_PROTECTION = 9, 
  CC2420_SECCTRL0_SEC_CBC_HEAD = 8, 
  CC2420_SECCTRL0_SEC_SAKEYSEL = 7, 
  CC2420_SECCTRL0_SEC_TXKEYSEL = 6, 
  CC2420_SECCTRL0_SEC_RXKEYSEL = 5, 
  CC2420_SECCTRL0_SEC_M = 2, 
  CC2420_SECCTRL0_SEC_MODE = 0
};

enum cc2420_secctrl1_enums {
  CC2420_SECCTRL1_SEC_TXL = 8, 
  CC2420_SECCTRL1_SEC_RXL = 0
};

enum cc2420_battmon_enums {
  CC2420_BATTMON_BATT_OK = 6, 
  CC2420_BATTMON_BATTMON_EN = 5, 
  CC2420_BATTMON_BATTMON_VOLTAGE = 0
};

enum cc2420_iocfg0_enums {
  CC2420_IOCFG0_BCN_ACCEPT = 11, 
  CC2420_IOCFG0_FIFO_POLARITY = 10, 
  CC2420_IOCFG0_FIFOP_POLARITY = 9, 
  CC2420_IOCFG0_SFD_POLARITY = 8, 
  CC2420_IOCFG0_CCA_POLARITY = 7, 
  CC2420_IOCFG0_FIFOP_THR = 0
};

enum cc2420_iocfg1_enums {
  CC2420_IOCFG1_HSSD_SRC = 10, 
  CC2420_IOCFG1_SFDMUX = 5, 
  CC2420_IOCFG1_CCAMUX = 0
};

enum cc2420_manfidl_enums {
  CC2420_MANFIDL_PARTNUM = 12, 
  CC2420_MANFIDL_MANFID = 0
};

enum cc2420_manfidh_enums {
  CC2420_MANFIDH_VERSION = 12, 
  CC2420_MANFIDH_PARTNUM = 0
};

enum cc2420_fsmtc_enums {
  CC2420_FSMTC_TC_RXCHAIN2RX = 13, 
  CC2420_FSMTC_TC_SWITCH2TX = 10, 
  CC2420_FSMTC_TC_PAON2TX = 6, 
  CC2420_FSMTC_TC_TXEND2SWITCH = 3, 
  CC2420_FSMTC_TC_TXEND2PAOFF = 0
};

enum cc2420_sfdmux_enums {
  CC2420_SFDMUX_SFD = 0, 
  CC2420_SFDMUX_XOSC16M_STABLE = 24
};
# 6 "/opt/tinyos-2.x/tos/types/AM.h"
typedef nx_uint8_t nx_am_id_t;
typedef nx_uint8_t nx_am_group_t;
typedef nx_uint16_t nx_am_addr_t;

typedef uint8_t am_id_t;
typedef uint8_t am_group_t;
typedef uint16_t am_addr_t;

enum __nesc_unnamed4311 {
  AM_BROADCAST_ADDR = 0xffff
};









enum __nesc_unnamed4312 {
  TOS_AM_GROUP = 50, 
  TOS_AM_ADDRESS = 1
};
# 72 "/opt/tinyos-2.x/tos/lib/serial/Serial.h"
typedef uint8_t uart_id_t;



enum __nesc_unnamed4313 {
  HDLC_FLAG_BYTE = 0x7e, 
  HDLC_CTLESC_BYTE = 0x7d
};



enum __nesc_unnamed4314 {
  TOS_SERIAL_ACTIVE_MESSAGE_ID = 0, 
  TOS_SERIAL_CC1000_ID = 1, 
  TOS_SERIAL_802_15_4_ID = 2, 
  TOS_SERIAL_UNKNOWN_ID = 255
};


enum __nesc_unnamed4315 {
  SERIAL_PROTO_ACK = 67, 
  SERIAL_PROTO_PACKET_ACK = 68, 
  SERIAL_PROTO_PACKET_NOACK = 69, 
  SERIAL_PROTO_PACKET_UNKNOWN = 255
};
#line 110
#line 98
typedef struct radio_stats {
  uint8_t version;
  uint8_t flags;
  uint8_t reserved;
  uint8_t platform;
  uint16_t MTU;
  uint16_t radio_crc_fail;
  uint16_t radio_queue_drops;
  uint16_t serial_crc_fail;
  uint16_t serial_tx_fail;
  uint16_t serial_short_packets;
  uint16_t serial_proto_drops;
} radio_stats_t;







#line 112
typedef nx_struct serial_header {
  nx_am_addr_t dest;
  nx_am_addr_t src;
  nx_uint8_t length;
  nx_am_group_t group;
  nx_am_id_t type;
} __attribute__((packed)) serial_header_t;




#line 120
typedef nx_struct serial_packet {
  serial_header_t header;
  nx_uint8_t data[];
} __attribute__((packed)) serial_packet_t;
# 49 "/opt/tinyos-2.x/tos/platforms/homenet/platform_message.h"
#line 46
typedef union message_header {
  cc2420_header_t cc2420;
  serial_header_t serial;
} message_header_t;



#line 51
typedef union message_footer {
  cc2420_footer_t cc2420;
} message_footer_t;



#line 55
typedef union message_metadata {
  cc2420_metadata_t cc2420;
} message_metadata_t;
# 19 "/opt/tinyos-2.x/tos/types/message.h"
#line 14
typedef nx_struct message_t {
  nx_uint8_t header[sizeof(message_header_t )];
  nx_uint8_t data[28];
  nx_uint8_t footer[sizeof(message_footer_t )];
  nx_uint8_t metadata[sizeof(message_metadata_t )];
} __attribute__((packed)) message_t;
# 37 "/opt/tinyos-2.x/tos/sensorboards/homenet_sensor/sht11/SensirionSht11.h"
enum __nesc_unnamed4316 {
  SHT11_STATUS_LOW_RES_BIT = 1 << 0, 
  SHT11_STATUS_NO_RELOAD_BIT = 1 << 1, 
  SHT11_STATUS_HEATER_ON_BIT = 1 << 2, 
  SHT11_STATUS_LOW_BATTERY_BIT = 1 << 6
};
# 33 "/opt/tinyos-2.x/tos/types/Resource.h"
typedef uint8_t resource_client_id_t;
# 38 "/opt/tinyos-2.x/tos/chips/cc2420/IEEE802154.h"
enum ieee154_fcf_enums {
  IEEE154_FCF_FRAME_TYPE = 0, 
  IEEE154_FCF_SECURITY_ENABLED = 3, 
  IEEE154_FCF_FRAME_PENDING = 4, 
  IEEE154_FCF_ACK_REQ = 5, 
  IEEE154_FCF_INTRAPAN = 6, 
  IEEE154_FCF_DEST_ADDR_MODE = 10, 
  IEEE154_FCF_SRC_ADDR_MODE = 14
};

enum ieee154_fcf_type_enums {
  IEEE154_TYPE_BEACON = 0, 
  IEEE154_TYPE_DATA = 1, 
  IEEE154_TYPE_ACK = 2, 
  IEEE154_TYPE_MAC_CMD = 3
};

enum iee154_fcf_addr_mode_enums {
  IEEE154_ADDR_NONE = 0, 
  IEEE154_ADDR_SHORT = 2, 
  IEEE154_ADDR_EXT = 3
};
# 32 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128Spi.h"
enum __nesc_unnamed4317 {
  ATM128_SPI_CLK_DIVIDE_4 = 0, 
  ATM128_SPI_CLK_DIVIDE_16 = 1, 
  ATM128_SPI_CLK_DIVIDE_64 = 2, 
  ATM128_SPI_CLK_DIVIDE_128 = 3
};
#line 49
#line 40
typedef struct __nesc_unnamed4318 {
  uint8_t spie : 1;
  uint8_t spe : 1;
  uint8_t dord : 1;
  uint8_t mstr : 1;
  uint8_t cpol : 1;
  uint8_t cpha : 1;
  uint8_t spr : 2;
} 
Atm128SPIControl_s;



#line 50
typedef union __nesc_unnamed4319 {
  uint8_t flat;
  Atm128SPIControl_s bits;
} Atm128SPIControl_t;

typedef Atm128SPIControl_t Atm128_SPCR_t;








#line 58
typedef struct __nesc_unnamed4320 {
  uint8_t spif : 1;
  uint8_t wcol : 1;
  uint8_t rsvd : 5;
  uint8_t spi2x : 1;
} 
Atm128SPIStatus_s;



#line 65
typedef union __nesc_unnamed4321 {
  uint8_t flat;
  Atm128SPIStatus_s bits;
} Atm128SPIStatus_t;

typedef Atm128SPIStatus_t Atm128_SPSR_t;

typedef uint8_t Atm128_SPDR_t;
typedef uint16_t MotionDetectorM$Read_Voltage$val_t;
typedef uint16_t MotionDetectorM$Read_Humi$val_t;
typedef uint16_t MotionDetectorM$Read_Ultrared$val_t;
typedef uint16_t MotionDetectorM$Read_Photo$val_t;
typedef TMilli MotionDetectorM$PirTimer$precision_tag;
typedef uint16_t MotionDetectorM$Read_Temp$val_t;
typedef TMilli MotionDetectorM$Timer$precision_tag;
typedef uint16_t MotionDetectorM$Pir$val_t;
enum HilTimerMilliC$__nesc_unnamed4322 {
  HilTimerMilliC$TIMER_COUNT = 5U
};
typedef uint8_t HplAtm128Timer0AsyncC$Compare$size_type;
typedef uint8_t HplAtm128Timer0AsyncC$Timer$timer_size;
typedef uint8_t /*AlarmCounterMilliP.MilliInit*/Atm128TimerInitC$0$timer_size;
typedef /*AlarmCounterMilliP.MilliInit*/Atm128TimerInitC$0$timer_size /*AlarmCounterMilliP.MilliInit*/Atm128TimerInitC$0$Timer$timer_size;
typedef TMilli /*AlarmCounterMilliP.MilliAlarm*/Atm128AlarmC$0$frequency_tag;
typedef uint8_t /*AlarmCounterMilliP.MilliAlarm*/Atm128AlarmC$0$timer_size;
typedef /*AlarmCounterMilliP.MilliAlarm*/Atm128AlarmC$0$frequency_tag /*AlarmCounterMilliP.MilliAlarm*/Atm128AlarmC$0$Alarm$precision_tag;
typedef /*AlarmCounterMilliP.MilliAlarm*/Atm128AlarmC$0$timer_size /*AlarmCounterMilliP.MilliAlarm*/Atm128AlarmC$0$Alarm$size_type;
typedef /*AlarmCounterMilliP.MilliAlarm*/Atm128AlarmC$0$timer_size /*AlarmCounterMilliP.MilliAlarm*/Atm128AlarmC$0$HplAtm128Compare$size_type;
typedef /*AlarmCounterMilliP.MilliAlarm*/Atm128AlarmC$0$timer_size /*AlarmCounterMilliP.MilliAlarm*/Atm128AlarmC$0$HplAtm128Timer$timer_size;
typedef TMilli /*AlarmCounterMilliP.MilliCounter*/Atm128CounterC$0$frequency_tag;
typedef uint8_t /*AlarmCounterMilliP.MilliCounter*/Atm128CounterC$0$timer_size;
typedef /*AlarmCounterMilliP.MilliCounter*/Atm128CounterC$0$frequency_tag /*AlarmCounterMilliP.MilliCounter*/Atm128CounterC$0$Counter$precision_tag;
typedef /*AlarmCounterMilliP.MilliCounter*/Atm128CounterC$0$timer_size /*AlarmCounterMilliP.MilliCounter*/Atm128CounterC$0$Counter$size_type;
typedef /*AlarmCounterMilliP.MilliCounter*/Atm128CounterC$0$timer_size /*AlarmCounterMilliP.MilliCounter*/Atm128CounterC$0$Timer$timer_size;
typedef TMilli /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$to_precision_tag;
typedef uint32_t /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$to_size_type;
typedef TMilli /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$from_precision_tag;
typedef uint8_t /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$from_size_type;
typedef uint32_t /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$upper_count_type;
typedef /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$to_precision_tag /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$Alarm$precision_tag;
typedef /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$to_size_type /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$Alarm$size_type;
typedef /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$from_precision_tag /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$CounterFrom$precision_tag;
typedef /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$from_size_type /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$CounterFrom$size_type;
typedef /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$to_precision_tag /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$Counter$precision_tag;
typedef /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$to_size_type /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$Counter$size_type;
typedef /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$from_precision_tag /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$AlarmFrom$precision_tag;
typedef /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$from_size_type /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$AlarmFrom$size_type;
typedef TMilli /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$precision_tag;
typedef /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$precision_tag /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$precision_tag;
typedef uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$size_type;
typedef /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$precision_tag /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$precision_tag;
typedef TMilli /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$precision_tag;
typedef /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$precision_tag /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$precision_tag;
typedef /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$precision_tag /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$precision_tag;
typedef TMilli /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC$0$precision_tag;
typedef /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC$0$precision_tag /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC$0$LocalTime$precision_tag;
typedef /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC$0$precision_tag /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC$0$Counter$precision_tag;
typedef uint32_t /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC$0$Counter$size_type;
typedef uint16_t /*MotionDetectorC.SensirionSht11C.SensirionSht11ReaderP*/SensirionSht11ReaderP$0$Humidity$val_t;
typedef uint16_t /*MotionDetectorC.SensirionSht11C.SensirionSht11ReaderP*/SensirionSht11ReaderP$0$Temperature$val_t;
typedef TMilli /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$Timer$precision_tag;
typedef TMilli HplSensirionSht11P$Timer$precision_tag;
enum /*MotionDetectorC.SensirionSht11C*/SensirionSht11C$0$__nesc_unnamed4323 {
  SensirionSht11C$0$TEMP_KEY = 0U
};
enum /*MotionDetectorC.SensirionSht11C*/SensirionSht11C$0$__nesc_unnamed4324 {
  SensirionSht11C$0$HUM_KEY = 1U
};
typedef uint16_t /*MotionDetectorC.PhotoSensorC.DemoChannel.ADC_ShiftM*/ADC_ShiftM$0$Read$val_t;
typedef uint16_t /*MotionDetectorC.PhotoSensorC.DemoChannel.ADC_ShiftM*/ADC_ShiftM$0$subRead$val_t;
typedef uint16_t AdcP$Read$val_t;
typedef uint16_t AdcP$ReadNow$val_t;
typedef uint16_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$width_t;
typedef /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$width_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$Read$val_t;
typedef /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$width_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$Service$val_t;
enum /*MotionDetectorC.PhotoSensorC.DemoChannel.PhotoProC.AdcReadClientC*/AdcReadClientC$0$__nesc_unnamed4325 {
  AdcReadClientC$0$ID = 0U, AdcReadClientC$0$HAL_ID = 0U
};
typedef uint16_t /*MotionDetectorC.UltraredSensorC.DemoChannel.ADC_ShiftM*/ADC_ShiftM$1$Read$val_t;
typedef uint16_t /*MotionDetectorC.UltraredSensorC.DemoChannel.ADC_ShiftM*/ADC_ShiftM$1$subRead$val_t;
enum /*MotionDetectorC.UltraredSensorC.DemoChannel.UltraredProC.AdcReadClientC*/AdcReadClientC$1$__nesc_unnamed4326 {
  AdcReadClientC$1$ID = 1U, AdcReadClientC$1$HAL_ID = 1U
};
typedef uint16_t /*MotionDetectorC.VoltageC.ADC_ShiftM*/ADC_ShiftM$2$Read$val_t;
typedef uint16_t /*MotionDetectorC.VoltageC.ADC_ShiftM*/ADC_ShiftM$2$subRead$val_t;
enum /*MotionDetectorC.VoltageC.VoltageProC.AdcReadClientC*/AdcReadClientC$2$__nesc_unnamed4327 {
  AdcReadClientC$2$ID = 2U, AdcReadClientC$2$HAL_ID = 2U
};
typedef T32khz CC2420ControlP$StartupTimer$precision_tag;
typedef uint32_t CC2420ControlP$StartupTimer$size_type;
typedef uint16_t HplAtm128Timer1P$CompareA$size_type;
typedef uint16_t HplAtm128Timer1P$Capture$size_type;
typedef uint16_t HplAtm128Timer1P$CompareB$size_type;
typedef uint16_t HplAtm128Timer1P$CompareC$size_type;
typedef uint16_t HplAtm128Timer1P$Timer$timer_size;
typedef uint16_t /*InitOneP.InitOne*/Atm128TimerInitC$1$timer_size;
typedef /*InitOneP.InitOne*/Atm128TimerInitC$1$timer_size /*InitOneP.InitOne*/Atm128TimerInitC$1$Timer$timer_size;
typedef TOne /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$1$frequency_tag;
typedef uint16_t /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$1$timer_size;
typedef /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$1$frequency_tag /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$1$Alarm$precision_tag;
typedef /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$1$timer_size /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$1$Alarm$size_type;
typedef /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$1$timer_size /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$1$HplAtm128Compare$size_type;
typedef /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$1$timer_size /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$1$HplAtm128Timer$timer_size;
enum /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16*/AlarmOne16C$0$__nesc_unnamed4328 {
  AlarmOne16C$0$COMPARE_ID = 0U
};
typedef TOne /*CounterOne16C.NCounter*/Atm128CounterC$1$frequency_tag;
typedef uint16_t /*CounterOne16C.NCounter*/Atm128CounterC$1$timer_size;
typedef /*CounterOne16C.NCounter*/Atm128CounterC$1$frequency_tag /*CounterOne16C.NCounter*/Atm128CounterC$1$Counter$precision_tag;
typedef /*CounterOne16C.NCounter*/Atm128CounterC$1$timer_size /*CounterOne16C.NCounter*/Atm128CounterC$1$Counter$size_type;
typedef /*CounterOne16C.NCounter*/Atm128CounterC$1$timer_size /*CounterOne16C.NCounter*/Atm128CounterC$1$Timer$timer_size;
typedef T32khz /*Counter32khz32C.Transform32*/TransformCounterC$0$to_precision_tag;
typedef uint32_t /*Counter32khz32C.Transform32*/TransformCounterC$0$to_size_type;
typedef T32khz /*Counter32khz32C.Transform32*/TransformCounterC$0$from_precision_tag;
typedef uint16_t /*Counter32khz32C.Transform32*/TransformCounterC$0$from_size_type;
typedef counter_one_overflow_t /*Counter32khz32C.Transform32*/TransformCounterC$0$upper_count_type;
typedef /*Counter32khz32C.Transform32*/TransformCounterC$0$from_precision_tag /*Counter32khz32C.Transform32*/TransformCounterC$0$CounterFrom$precision_tag;
typedef /*Counter32khz32C.Transform32*/TransformCounterC$0$from_size_type /*Counter32khz32C.Transform32*/TransformCounterC$0$CounterFrom$size_type;
typedef /*Counter32khz32C.Transform32*/TransformCounterC$0$to_precision_tag /*Counter32khz32C.Transform32*/TransformCounterC$0$Counter$precision_tag;
typedef /*Counter32khz32C.Transform32*/TransformCounterC$0$to_size_type /*Counter32khz32C.Transform32*/TransformCounterC$0$Counter$size_type;
typedef T32khz /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$to_precision_tag;
typedef uint32_t /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$to_size_type;
typedef TOne /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$from_precision_tag;
typedef uint16_t /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$from_size_type;
typedef /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$to_precision_tag /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$Alarm$precision_tag;
typedef /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$to_size_type /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$Alarm$size_type;
typedef /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$from_precision_tag /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$AlarmFrom$precision_tag;
typedef /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$from_size_type /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$AlarmFrom$size_type;
typedef /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$to_precision_tag /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$Counter$precision_tag;
typedef /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$to_size_type /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$Counter$size_type;
typedef uint16_t /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC$0$Atm128Capture$size_type;
typedef TMilli HplCC2420InterruptsP$CCATimer$precision_tag;
enum /*CC2420ControlC.Spi*/CC2420SpiC$0$__nesc_unnamed4329 {
  CC2420SpiC$0$CLIENT_ID = 0U
};
enum /*CC2420ControlC.SyncSpiC*/CC2420SpiC$1$__nesc_unnamed4330 {
  CC2420SpiC$1$CLIENT_ID = 1U
};
typedef T32khz CC2420TransmitP$BackoffTimer$precision_tag;
typedef uint32_t CC2420TransmitP$BackoffTimer$size_type;
enum /*CC2420TransmitC.Spi*/CC2420SpiC$2$__nesc_unnamed4331 {
  CC2420SpiC$2$CLIENT_ID = 2U
};
enum /*CC2420ReceiveC.Spi*/CC2420SpiC$3$__nesc_unnamed4332 {
  CC2420SpiC$3$CLIENT_ID = 3U
};
typedef uint16_t RandomMlcgP$SeedInit$parameter;
enum AMQueueP$__nesc_unnamed4333 {
  AMQueueP$NUM_CLIENTS = 1U
};
enum /*MotionDetectorC.PirSensorC.DemoChannel.AdcReadClientC*/AdcReadClientC$3$__nesc_unnamed4334 {
  AdcReadClientC$3$ID = 3U, AdcReadClientC$3$HAL_ID = 3U
};
# 51 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static  error_t PlatformP$Init$init(void);
#line 51
static  error_t MotePlatformP$PlatformInit$init(void);
#line 51
static  error_t MeasureClockC$Init$init(void);
# 53 "/opt/tinyos-2.x/tos/chips/atm128/timer/Atm128Calibrate.nc"
static   uint8_t MeasureClockC$Atm128Calibrate$adcPrescaler(void);
# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static   error_t SchedulerBasicP$TaskBasic$postTask(
# 45 "/opt/tinyos-2.x/tos/system/SchedulerBasicP.nc"
uint8_t arg_0x7f062030);
# 64 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static  void SchedulerBasicP$TaskBasic$default$runTask(
# 45 "/opt/tinyos-2.x/tos/system/SchedulerBasicP.nc"
uint8_t arg_0x7f062030);
# 46 "/opt/tinyos-2.x/tos/interfaces/Scheduler.nc"
static  void SchedulerBasicP$Scheduler$init(void);
#line 61
static  void SchedulerBasicP$Scheduler$taskLoop(void);
#line 54
static  bool SchedulerBasicP$Scheduler$runNextTask(void);
# 54 "/opt/tinyos-2.x/tos/interfaces/McuPowerOverride.nc"
static   mcu_power_t McuSleepC$McuPowerOverride$default$lowestState(void);
# 59 "/opt/tinyos-2.x/tos/interfaces/McuSleep.nc"
static   void McuSleepC$McuSleep$sleep(void);
# 44 "/opt/tinyos-2.x/tos/interfaces/McuPowerState.nc"
static   void McuSleepC$McuPowerState$update(void);
# 49 "/opt/tinyos-2.x/tos/interfaces/Boot.nc"
static  void MotionDetectorM$Boot$booted(void);
# 63 "/opt/tinyos-2.x/tos/interfaces/Read.nc"
static  void MotionDetectorM$Read_Voltage$readDone(error_t arg_0x7ee20010, MotionDetectorM$Read_Voltage$val_t arg_0x7ee20198);
# 99 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
static  void MotionDetectorM$AMSend$sendDone(message_t *arg_0x7ed74030, error_t arg_0x7ed741b8);
# 64 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static  void MotionDetectorM$SendSensorData$runTask(void);
# 63 "/opt/tinyos-2.x/tos/interfaces/Read.nc"
static  void MotionDetectorM$Read_Humi$readDone(error_t arg_0x7ee20010, MotionDetectorM$Read_Humi$val_t arg_0x7ee20198);
#line 63
static  void MotionDetectorM$Read_Ultrared$readDone(error_t arg_0x7ee20010, MotionDetectorM$Read_Ultrared$val_t arg_0x7ee20198);
#line 63
static  void MotionDetectorM$Read_Photo$readDone(error_t arg_0x7ee20010, MotionDetectorM$Read_Photo$val_t arg_0x7ee20198);
# 72 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
static  void MotionDetectorM$PirTimer$fired(void);
# 67 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
static  message_t *MotionDetectorM$Receive$receive(message_t *arg_0x7ed71e10, void *arg_0x7ed70010, uint8_t arg_0x7ed70198);
# 88 "/opt/tinyos-2.x/tos/interfaces/SplitControl.nc"
static  void MotionDetectorM$CommControl$startDone(error_t arg_0x7ee01578);
#line 110
static  void MotionDetectorM$CommControl$stopDone(error_t arg_0x7ee000f8);
# 63 "/opt/tinyos-2.x/tos/interfaces/Read.nc"
static  void MotionDetectorM$Read_Temp$readDone(error_t arg_0x7ee20010, MotionDetectorM$Read_Temp$val_t arg_0x7ee20198);
# 72 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
static  void MotionDetectorM$Timer$fired(void);
# 63 "/opt/tinyos-2.x/tos/interfaces/Read.nc"
static  void MotionDetectorM$Pir$readDone(error_t arg_0x7ee20010, MotionDetectorM$Pir$val_t arg_0x7ee20198);
# 51 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static  error_t LedsP$Init$init(void);
# 89 "/opt/tinyos-2.x/tos/interfaces/Leds.nc"
static   void LedsP$Leds$led2Toggle(void);
# 31 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static   void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP$0$IO$toggle(void);



static   void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP$0$IO$makeOutput(void);
#line 29
static   void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP$0$IO$set(void);





static   void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP$1$IO$makeOutput(void);
#line 29
static   void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP$1$IO$set(void);





static   void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP$2$IO$makeOutput(void);
#line 29
static   void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP$2$IO$set(void);





static   void /*HplAtm128GeneralIOC.PortA.Bit5*/HplAtm128GeneralIOPinP$5$IO$makeOutput(void);
#line 29
static   void /*HplAtm128GeneralIOC.PortA.Bit5*/HplAtm128GeneralIOPinP$5$IO$set(void);





static   void /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP$6$IO$makeOutput(void);
#line 29
static   void /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP$6$IO$set(void);
static   void /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP$6$IO$clr(void);




static   void /*HplAtm128GeneralIOC.PortA.Bit7*/HplAtm128GeneralIOPinP$7$IO$makeOutput(void);
#line 29
static   void /*HplAtm128GeneralIOC.PortA.Bit7*/HplAtm128GeneralIOPinP$7$IO$set(void);
static   void /*HplAtm128GeneralIOC.PortA.Bit7*/HplAtm128GeneralIOPinP$7$IO$clr(void);




static   void /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP$8$IO$makeOutput(void);
#line 29
static   void /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP$8$IO$set(void);
static   void /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP$8$IO$clr(void);




static   void /*HplAtm128GeneralIOC.PortB.Bit1*/HplAtm128GeneralIOPinP$9$IO$makeOutput(void);
#line 35
static   void /*HplAtm128GeneralIOC.PortB.Bit2*/HplAtm128GeneralIOPinP$10$IO$makeOutput(void);
#line 33
static   void /*HplAtm128GeneralIOC.PortB.Bit3*/HplAtm128GeneralIOPinP$11$IO$makeInput(void);
#line 32
static   bool /*HplAtm128GeneralIOC.PortB.Bit7*/HplAtm128GeneralIOPinP$15$IO$get(void);
#line 29
static   void /*HplAtm128GeneralIOC.PortC.Bit3*/HplAtm128GeneralIOPinP$19$IO$set(void);



static   void /*HplAtm128GeneralIOC.PortD.Bit0*/HplAtm128GeneralIOPinP$24$IO$makeInput(void);

static   void /*HplAtm128GeneralIOC.PortD.Bit0*/HplAtm128GeneralIOPinP$24$IO$makeOutput(void);
#line 29
static   void /*HplAtm128GeneralIOC.PortD.Bit0*/HplAtm128GeneralIOPinP$24$IO$set(void);
static   void /*HplAtm128GeneralIOC.PortD.Bit0*/HplAtm128GeneralIOPinP$24$IO$clr(void);


static   void /*HplAtm128GeneralIOC.PortD.Bit1*/HplAtm128GeneralIOPinP$25$IO$makeInput(void);
#line 32
static   bool /*HplAtm128GeneralIOC.PortD.Bit1*/HplAtm128GeneralIOPinP$25$IO$get(void);


static   void /*HplAtm128GeneralIOC.PortD.Bit1*/HplAtm128GeneralIOPinP$25$IO$makeOutput(void);
#line 29
static   void /*HplAtm128GeneralIOC.PortD.Bit1*/HplAtm128GeneralIOPinP$25$IO$set(void);
static   void /*HplAtm128GeneralIOC.PortD.Bit1*/HplAtm128GeneralIOPinP$25$IO$clr(void);


static   void /*HplAtm128GeneralIOC.PortD.Bit4*/HplAtm128GeneralIOPinP$28$IO$makeInput(void);
#line 32
static   bool /*HplAtm128GeneralIOC.PortD.Bit4*/HplAtm128GeneralIOPinP$28$IO$get(void);
static   void /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP$30$IO$makeInput(void);
#line 32
static   bool /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP$30$IO$get(void);


static   void /*HplAtm128GeneralIOC.PortE.Bit4*/HplAtm128GeneralIOPinP$36$IO$makeOutput(void);
#line 29
static   void /*HplAtm128GeneralIOC.PortE.Bit4*/HplAtm128GeneralIOPinP$36$IO$set(void);
static   void /*HplAtm128GeneralIOC.PortE.Bit4*/HplAtm128GeneralIOPinP$36$IO$clr(void);

static   bool /*HplAtm128GeneralIOC.PortE.Bit6*/HplAtm128GeneralIOPinP$38$IO$get(void);
# 36 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128TimerCtrl8.nc"
static   Atm128TimerControl_t HplAtm128Timer0AsyncC$TimerCtrl$getControl(void);







static   Atm128_TIFR_t HplAtm128Timer0AsyncC$TimerCtrl$getInterruptFlag(void);
#line 37
static   void HplAtm128Timer0AsyncC$TimerCtrl$setControl(Atm128TimerControl_t arg_0x7e9e6a30);
# 51 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static  error_t HplAtm128Timer0AsyncC$Init$init(void);
# 53 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
static   void HplAtm128Timer0AsyncC$Compare$reset(void);
#line 45
static   void HplAtm128Timer0AsyncC$Compare$set(HplAtm128Timer0AsyncC$Compare$size_type arg_0x7e9e2a20);










static   void HplAtm128Timer0AsyncC$Compare$start(void);


static   void HplAtm128Timer0AsyncC$Compare$stop(void);
# 78 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
static   bool HplAtm128Timer0AsyncC$Timer$test(void);
#line 52
static   HplAtm128Timer0AsyncC$Timer$timer_size HplAtm128Timer0AsyncC$Timer$get(void);
#line 95
static   void HplAtm128Timer0AsyncC$Timer$setScale(uint8_t arg_0x7e9f5da8);
#line 58
static   void HplAtm128Timer0AsyncC$Timer$set(HplAtm128Timer0AsyncC$Timer$timer_size arg_0x7ea00100);










static   void HplAtm128Timer0AsyncC$Timer$start(void);
# 51 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static  error_t /*AlarmCounterMilliP.MilliInit*/Atm128TimerInitC$0$Init$init(void);
# 61 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
static   void /*AlarmCounterMilliP.MilliInit*/Atm128TimerInitC$0$Timer$overflow(void);
# 92 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
static   void /*AlarmCounterMilliP.MilliAlarm*/Atm128AlarmC$0$Alarm$startAt(/*AlarmCounterMilliP.MilliAlarm*/Atm128AlarmC$0$Alarm$size_type arg_0x7ea22350, /*AlarmCounterMilliP.MilliAlarm*/Atm128AlarmC$0$Alarm$size_type arg_0x7ea224e0);
#line 62
static   void /*AlarmCounterMilliP.MilliAlarm*/Atm128AlarmC$0$Alarm$stop(void);
# 49 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
static   void /*AlarmCounterMilliP.MilliAlarm*/Atm128AlarmC$0$HplAtm128Compare$fired(void);
# 61 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
static   void /*AlarmCounterMilliP.MilliAlarm*/Atm128AlarmC$0$HplAtm128Timer$overflow(void);
# 53 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
static   /*AlarmCounterMilliP.MilliCounter*/Atm128CounterC$0$Counter$size_type /*AlarmCounterMilliP.MilliCounter*/Atm128CounterC$0$Counter$get(void);






static   bool /*AlarmCounterMilliP.MilliCounter*/Atm128CounterC$0$Counter$isOverflowPending(void);
# 61 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
static   void /*AlarmCounterMilliP.MilliCounter*/Atm128CounterC$0$Timer$overflow(void);
# 98 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
static   /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$Alarm$size_type /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$Alarm$getNow(void);
#line 92
static   void /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$Alarm$startAt(/*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$Alarm$size_type arg_0x7ea22350, /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$Alarm$size_type arg_0x7ea224e0);
#line 105
static   /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$Alarm$size_type /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$Alarm$getAlarm(void);
#line 62
static   void /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$Alarm$stop(void);
# 71 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
static   void /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$CounterFrom$overflow(void);
#line 53
static   /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$Counter$size_type /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$Counter$get(void);
# 67 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
static   void /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$AlarmFrom$fired(void);
# 64 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static  void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$fired$runTask(void);
# 67 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
static   void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$fired(void);
# 125 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
static  uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$getNow(void);
#line 118
static  void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$startOneShotAt(uint32_t arg_0x7ee609b8, uint32_t arg_0x7ee60b48);
#line 67
static  void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$stop(void);
# 64 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static  void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$updateFromTimer$runTask(void);
# 72 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
static  void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$fired(void);
#line 72
static  void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$default$fired(
# 37 "/opt/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x7e8863a0);
# 53 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
static  void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startPeriodic(
# 37 "/opt/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x7e8863a0, 
# 53 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
uint32_t arg_0x7ee626d8);








static  void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startOneShot(
# 37 "/opt/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x7e8863a0, 
# 62 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
uint32_t arg_0x7ee62ca8);




static  void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$stop(
# 37 "/opt/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x7e8863a0);
# 71 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
static   void /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC$0$Counter$overflow(void);
# 84 "/opt/tinyos-2.x/tos/sensorboards/homenet_sensor/sht11/SensirionSht11.nc"
static  void /*MotionDetectorC.SensirionSht11C.SensirionSht11ReaderP*/SensirionSht11ReaderP$0$Sht11Hum$measureHumidityDone(error_t arg_0x7e806b70, uint16_t arg_0x7e806d00);
#line 116
static  void /*MotionDetectorC.SensirionSht11C.SensirionSht11ReaderP*/SensirionSht11ReaderP$0$Sht11Hum$writeStatusRegDone(error_t arg_0x7e8033a0);
#line 100
static  void /*MotionDetectorC.SensirionSht11C.SensirionSht11ReaderP*/SensirionSht11ReaderP$0$Sht11Hum$readStatusRegDone(error_t arg_0x7e805730, uint8_t arg_0x7e8058b8);
#line 54
static  void /*MotionDetectorC.SensirionSht11C.SensirionSht11ReaderP*/SensirionSht11ReaderP$0$Sht11Hum$resetDone(error_t arg_0x7e807820);
#line 69
static  void /*MotionDetectorC.SensirionSht11C.SensirionSht11ReaderP*/SensirionSht11ReaderP$0$Sht11Hum$measureTemperatureDone(error_t arg_0x7e8060f8, uint16_t arg_0x7e806288);
# 55 "/opt/tinyos-2.x/tos/interfaces/Read.nc"
static  error_t /*MotionDetectorC.SensirionSht11C.SensirionSht11ReaderP*/SensirionSht11ReaderP$0$Humidity$read(void);
# 92 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static  void /*MotionDetectorC.SensirionSht11C.SensirionSht11ReaderP*/SensirionSht11ReaderP$0$TempResource$granted(void);
# 84 "/opt/tinyos-2.x/tos/sensorboards/homenet_sensor/sht11/SensirionSht11.nc"
static  void /*MotionDetectorC.SensirionSht11C.SensirionSht11ReaderP*/SensirionSht11ReaderP$0$Sht11Temp$measureHumidityDone(error_t arg_0x7e806b70, uint16_t arg_0x7e806d00);
#line 116
static  void /*MotionDetectorC.SensirionSht11C.SensirionSht11ReaderP*/SensirionSht11ReaderP$0$Sht11Temp$writeStatusRegDone(error_t arg_0x7e8033a0);
#line 100
static  void /*MotionDetectorC.SensirionSht11C.SensirionSht11ReaderP*/SensirionSht11ReaderP$0$Sht11Temp$readStatusRegDone(error_t arg_0x7e805730, uint8_t arg_0x7e8058b8);
#line 54
static  void /*MotionDetectorC.SensirionSht11C.SensirionSht11ReaderP*/SensirionSht11ReaderP$0$Sht11Temp$resetDone(error_t arg_0x7e807820);
#line 69
static  void /*MotionDetectorC.SensirionSht11C.SensirionSht11ReaderP*/SensirionSht11ReaderP$0$Sht11Temp$measureTemperatureDone(error_t arg_0x7e8060f8, uint16_t arg_0x7e806288);
# 92 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static  void /*MotionDetectorC.SensirionSht11C.SensirionSht11ReaderP*/SensirionSht11ReaderP$0$HumResource$granted(void);
# 55 "/opt/tinyos-2.x/tos/interfaces/Read.nc"
static  error_t /*MotionDetectorC.SensirionSht11C.SensirionSht11ReaderP*/SensirionSht11ReaderP$0$Temperature$read(void);
# 57 "/opt/tinyos-2.x/tos/interfaces/GpioInterrupt.nc"
static   void /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$InterruptDATA$fired(void);
# 64 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static  void /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$readSensor$runTask(void);
#line 64
static  void /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$signalStatusDone$runTask(void);
# 84 "/opt/tinyos-2.x/tos/sensorboards/homenet_sensor/sht11/SensirionSht11.nc"
static  void /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$SensirionSht11$default$measureHumidityDone(
# 54 "/opt/tinyos-2.x/tos/sensorboards/homenet_sensor/sht11/SensirionSht11LogicP.nc"
uint8_t arg_0x7e7c8200, 
# 84 "/opt/tinyos-2.x/tos/sensorboards/homenet_sensor/sht11/SensirionSht11.nc"
error_t arg_0x7e806b70, uint16_t arg_0x7e806d00);
#line 76
static  error_t /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$SensirionSht11$measureHumidity(
# 54 "/opt/tinyos-2.x/tos/sensorboards/homenet_sensor/sht11/SensirionSht11LogicP.nc"
uint8_t arg_0x7e7c8200);
# 61 "/opt/tinyos-2.x/tos/sensorboards/homenet_sensor/sht11/SensirionSht11.nc"
static  error_t /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$SensirionSht11$measureTemperature(
# 54 "/opt/tinyos-2.x/tos/sensorboards/homenet_sensor/sht11/SensirionSht11LogicP.nc"
uint8_t arg_0x7e7c8200);
# 116 "/opt/tinyos-2.x/tos/sensorboards/homenet_sensor/sht11/SensirionSht11.nc"
static  void /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$SensirionSht11$default$writeStatusRegDone(
# 54 "/opt/tinyos-2.x/tos/sensorboards/homenet_sensor/sht11/SensirionSht11LogicP.nc"
uint8_t arg_0x7e7c8200, 
# 116 "/opt/tinyos-2.x/tos/sensorboards/homenet_sensor/sht11/SensirionSht11.nc"
error_t arg_0x7e8033a0);
#line 100
static  void /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$SensirionSht11$default$readStatusRegDone(
# 54 "/opt/tinyos-2.x/tos/sensorboards/homenet_sensor/sht11/SensirionSht11LogicP.nc"
uint8_t arg_0x7e7c8200, 
# 100 "/opt/tinyos-2.x/tos/sensorboards/homenet_sensor/sht11/SensirionSht11.nc"
error_t arg_0x7e805730, uint8_t arg_0x7e8058b8);
#line 54
static  void /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$SensirionSht11$default$resetDone(
# 54 "/opt/tinyos-2.x/tos/sensorboards/homenet_sensor/sht11/SensirionSht11LogicP.nc"
uint8_t arg_0x7e7c8200, 
# 54 "/opt/tinyos-2.x/tos/sensorboards/homenet_sensor/sht11/SensirionSht11.nc"
error_t arg_0x7e807820);
#line 69
static  void /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$SensirionSht11$default$measureTemperatureDone(
# 54 "/opt/tinyos-2.x/tos/sensorboards/homenet_sensor/sht11/SensirionSht11LogicP.nc"
uint8_t arg_0x7e7c8200, 
# 69 "/opt/tinyos-2.x/tos/sensorboards/homenet_sensor/sht11/SensirionSht11.nc"
error_t arg_0x7e8060f8, uint16_t arg_0x7e806288);
# 72 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
static  void /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$Timer$fired(void);
# 79 "/opt/tinyos-2.x/tos/interfaces/SplitControl.nc"
static  error_t HplSensirionSht11P$SplitControl$start(void);
#line 102
static  error_t HplSensirionSht11P$SplitControl$stop(void);
# 64 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static  void HplSensirionSht11P$stopTask$runTask(void);
# 72 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
static  void HplSensirionSht11P$Timer$fired(void);
# 64 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static   void /*HplAtm128InterruptC.IntPin0*/HplAtm128InterruptPinP$0$Irq$default$fired(void);
# 41 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptSig.nc"
static   void /*HplAtm128InterruptC.IntPin0*/HplAtm128InterruptPinP$0$IrqSignal$fired(void);
# 45 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static   void /*HplAtm128InterruptC.IntPin1*/HplAtm128InterruptPinP$1$Irq$clear(void);
#line 40
static   void /*HplAtm128InterruptC.IntPin1*/HplAtm128InterruptPinP$1$Irq$disable(void);
#line 59
static   void /*HplAtm128InterruptC.IntPin1*/HplAtm128InterruptPinP$1$Irq$edge(bool arg_0x7e728c60);
#line 35
static   void /*HplAtm128InterruptC.IntPin1*/HplAtm128InterruptPinP$1$Irq$enable(void);
# 41 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptSig.nc"
static   void /*HplAtm128InterruptC.IntPin1*/HplAtm128InterruptPinP$1$IrqSignal$fired(void);
# 64 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static   void /*HplAtm128InterruptC.IntPin2*/HplAtm128InterruptPinP$2$Irq$default$fired(void);
# 41 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptSig.nc"
static   void /*HplAtm128InterruptC.IntPin2*/HplAtm128InterruptPinP$2$IrqSignal$fired(void);
# 64 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static   void /*HplAtm128InterruptC.IntPin3*/HplAtm128InterruptPinP$3$Irq$default$fired(void);
# 41 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptSig.nc"
static   void /*HplAtm128InterruptC.IntPin3*/HplAtm128InterruptPinP$3$IrqSignal$fired(void);
# 64 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static   void /*HplAtm128InterruptC.IntPin4*/HplAtm128InterruptPinP$4$Irq$default$fired(void);
# 41 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptSig.nc"
static   void /*HplAtm128InterruptC.IntPin4*/HplAtm128InterruptPinP$4$IrqSignal$fired(void);
# 64 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static   void /*HplAtm128InterruptC.IntPin5*/HplAtm128InterruptPinP$5$Irq$default$fired(void);
# 41 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptSig.nc"
static   void /*HplAtm128InterruptC.IntPin5*/HplAtm128InterruptPinP$5$IrqSignal$fired(void);
# 45 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static   void /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP$6$Irq$clear(void);
#line 40
static   void /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP$6$Irq$disable(void);
#line 59
static   void /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP$6$Irq$edge(bool arg_0x7e728c60);
#line 35
static   void /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP$6$Irq$enable(void);
# 41 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptSig.nc"
static   void /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP$6$IrqSignal$fired(void);
# 64 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static   void /*HplAtm128InterruptC.IntPin7*/HplAtm128InterruptPinP$7$Irq$default$fired(void);
# 41 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptSig.nc"
static   void /*HplAtm128InterruptC.IntPin7*/HplAtm128InterruptPinP$7$IrqSignal$fired(void);
# 64 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static   void /*HplSensirionSht11C.InterruptDATAC*/Atm128GpioInterruptC$0$Atm128Interrupt$fired(void);
# 50 "/opt/tinyos-2.x/tos/interfaces/GpioInterrupt.nc"
static   error_t /*HplSensirionSht11C.InterruptDATAC*/Atm128GpioInterruptC$0$Interrupt$disable(void);
#line 43
static   error_t /*HplSensirionSht11C.InterruptDATAC*/Atm128GpioInterruptC$0$Interrupt$enableFallingEdge(void);
# 51 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static  error_t /*HplSensirionSht11C.Arbiter.Queue*/FcfsResourceQueueC$0$Init$init(void);
# 69 "/opt/tinyos-2.x/tos/interfaces/ResourceQueue.nc"
static   error_t /*HplSensirionSht11C.Arbiter.Queue*/FcfsResourceQueueC$0$FcfsQueue$enqueue(resource_client_id_t arg_0x7e6a18b0);
#line 43
static   bool /*HplSensirionSht11C.Arbiter.Queue*/FcfsResourceQueueC$0$FcfsQueue$isEmpty(void);








static   bool /*HplSensirionSht11C.Arbiter.Queue*/FcfsResourceQueueC$0$FcfsQueue$isEnqueued(resource_client_id_t arg_0x7e6a2e28);







static   resource_client_id_t /*HplSensirionSht11C.Arbiter.Queue*/FcfsResourceQueueC$0$FcfsQueue$dequeue(void);
# 43 "/opt/tinyos-2.x/tos/interfaces/ResourceRequested.nc"
static   void /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP$0$ResourceRequested$default$requested(
# 54 "/opt/tinyos-2.x/tos/system/ArbiterP.nc"
uint8_t arg_0x7e690f10);
# 55 "/opt/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
static   void /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP$0$ResourceConfigure$default$unconfigure(
# 59 "/opt/tinyos-2.x/tos/system/ArbiterP.nc"
uint8_t arg_0x7e6890f8);
# 49 "/opt/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
static   void /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP$0$ResourceConfigure$default$configure(
# 59 "/opt/tinyos-2.x/tos/system/ArbiterP.nc"
uint8_t arg_0x7e6890f8);
# 56 "/opt/tinyos-2.x/tos/interfaces/ResourceController.nc"
static   error_t /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP$0$ResourceController$release(void);
# 101 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static   error_t /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP$0$Resource$release(
# 53 "/opt/tinyos-2.x/tos/system/ArbiterP.nc"
uint8_t arg_0x7e6905d0);
# 78 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static   error_t /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP$0$Resource$request(
# 53 "/opt/tinyos-2.x/tos/system/ArbiterP.nc"
uint8_t arg_0x7e6905d0);
# 92 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static  void /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP$0$Resource$default$granted(
# 53 "/opt/tinyos-2.x/tos/system/ArbiterP.nc"
uint8_t arg_0x7e6905d0);
# 64 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static  void /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP$0$grantedTask$runTask(void);
# 88 "/opt/tinyos-2.x/tos/interfaces/SplitControl.nc"
static  void /*HplSensirionSht11C.SplitControlPowerManagerC.PowerManager*/PowerManagerP$0$SplitControl$startDone(error_t arg_0x7ee01578);
#line 110
static  void /*HplSensirionSht11C.SplitControlPowerManagerC.PowerManager*/PowerManagerP$0$SplitControl$stopDone(error_t arg_0x7ee000f8);
# 52 "/opt/tinyos-2.x/tos/lib/power/PowerDownCleanup.nc"
static   void /*HplSensirionSht11C.SplitControlPowerManagerC.PowerManager*/PowerManagerP$0$PowerDownCleanup$default$cleanup(void);
# 64 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static  void /*HplSensirionSht11C.SplitControlPowerManagerC.PowerManager*/PowerManagerP$0$stopTask$runTask(void);
# 73 "/opt/tinyos-2.x/tos/interfaces/ResourceController.nc"
static   void /*HplSensirionSht11C.SplitControlPowerManagerC.PowerManager*/PowerManagerP$0$ResourceController$requested(void);
#line 46
static   void /*HplSensirionSht11C.SplitControlPowerManagerC.PowerManager*/PowerManagerP$0$ResourceController$granted(void);
# 64 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static  void /*HplSensirionSht11C.SplitControlPowerManagerC.PowerManager*/PowerManagerP$0$startTask$runTask(void);
# 73 "/opt/tinyos-2.x/tos/interfaces/StdControl.nc"
static  error_t /*HplSensirionSht11C.SplitControlPowerManagerC.PowerManager*/PowerManagerP$0$StdControl$default$start(void);








static  error_t /*HplSensirionSht11C.SplitControlPowerManagerC.PowerManager*/PowerManagerP$0$StdControl$default$stop(void);
# 55 "/opt/tinyos-2.x/tos/interfaces/Read.nc"
static  error_t /*MotionDetectorC.PhotoSensorC.DemoChannel.ADC_ShiftM*/ADC_ShiftM$0$Read$read(void);







static  void /*MotionDetectorC.PhotoSensorC.DemoChannel.ADC_ShiftM*/ADC_ShiftM$0$subRead$readDone(error_t arg_0x7ee20010, /*MotionDetectorC.PhotoSensorC.DemoChannel.ADC_ShiftM*/ADC_ShiftM$0$subRead$val_t arg_0x7ee20198);
# 51 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static  error_t Atm128AdcP$Init$init(void);
# 110 "/opt/tinyos-2.x/tos/chips/atm128/adc/Atm128AdcMultiple.nc"
static   bool Atm128AdcP$Atm128AdcMultiple$default$dataReady(uint16_t arg_0x7e5d0a68, bool arg_0x7e5d0bf0, uint8_t arg_0x7e5d0d78, 
uint8_t *arg_0x7e5cb010, uint8_t *arg_0x7e5cb1c0);
# 61 "/opt/tinyos-2.x/tos/chips/atm128/adc/Atm128AdcSingle.nc"
static   bool Atm128AdcP$Atm128AdcSingle$getData(uint8_t arg_0x7e5d7868, uint8_t arg_0x7e5d79f8, 
bool arg_0x7e5d7b98, uint8_t arg_0x7e5d7d28);
# 147 "/opt/tinyos-2.x/tos/chips/atm128/adc/HplAtm128Adc.nc"
static   void Atm128AdcP$HplAtm128Adc$dataReady(uint16_t arg_0x7e5b5120);
# 73 "/opt/tinyos-2.x/tos/interfaces/AsyncStdControl.nc"
static   error_t Atm128AdcP$AsyncStdControl$start(void);








static   error_t Atm128AdcP$AsyncStdControl$stop(void);
# 44 "/opt/tinyos-2.x/tos/chips/atm128/adc/HplAtm128Adc.nc"
static   Atm128Admux_t HplAtm128AdcP$HplAtm128Adc$getAdmux(void);
#line 73
static   void HplAtm128AdcP$HplAtm128Adc$enableAdc(void);
#line 49
static   void HplAtm128AdcP$HplAtm128Adc$setAdmux(Atm128Admux_t arg_0x7e5c0da8);
#line 141
static   bool HplAtm128AdcP$HplAtm128Adc$cancel(void);
#line 77
static   void HplAtm128AdcP$HplAtm128Adc$disableAdc(void);








static   void HplAtm128AdcP$HplAtm128Adc$disableInterruption(void);
#line 60
static   void HplAtm128AdcP$HplAtm128Adc$setAdcsra(Atm128Adcsra_t arg_0x7e5ba6f8);
#line 55
static   Atm128Adcsra_t HplAtm128AdcP$HplAtm128Adc$getAdcsra(void);










static   uint16_t HplAtm128AdcP$HplAtm128Adc$getValue(void);
# 51 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static  error_t /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC$0$Init$init(void);
# 69 "/opt/tinyos-2.x/tos/interfaces/ResourceQueue.nc"
static   error_t /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC$0$RoundRobinQueue$enqueue(resource_client_id_t arg_0x7e6a18b0);
#line 43
static   bool /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC$0$RoundRobinQueue$isEmpty(void);








static   bool /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC$0$RoundRobinQueue$isEnqueued(resource_client_id_t arg_0x7e6a2e28);







static   resource_client_id_t /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC$0$RoundRobinQueue$dequeue(void);
# 43 "/opt/tinyos-2.x/tos/interfaces/ResourceRequested.nc"
static   void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$1$ResourceRequested$default$requested(
# 54 "/opt/tinyos-2.x/tos/system/ArbiterP.nc"
uint8_t arg_0x7e690f10);
# 55 "/opt/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
static   void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$1$ResourceConfigure$default$unconfigure(
# 59 "/opt/tinyos-2.x/tos/system/ArbiterP.nc"
uint8_t arg_0x7e6890f8);
# 49 "/opt/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
static   void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$1$ResourceConfigure$default$configure(
# 59 "/opt/tinyos-2.x/tos/system/ArbiterP.nc"
uint8_t arg_0x7e6890f8);
# 56 "/opt/tinyos-2.x/tos/interfaces/ResourceController.nc"
static   error_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$1$ResourceController$release(void);
# 101 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static   error_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$1$Resource$release(
# 53 "/opt/tinyos-2.x/tos/system/ArbiterP.nc"
uint8_t arg_0x7e6905d0);
# 78 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static   error_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$1$Resource$request(
# 53 "/opt/tinyos-2.x/tos/system/ArbiterP.nc"
uint8_t arg_0x7e6905d0);
# 92 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static  void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$1$Resource$default$granted(
# 53 "/opt/tinyos-2.x/tos/system/ArbiterP.nc"
uint8_t arg_0x7e6905d0);
# 64 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static  void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$1$grantedTask$runTask(void);
# 52 "/opt/tinyos-2.x/tos/lib/power/PowerDownCleanup.nc"
static   void /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP$0$PowerDownCleanup$default$cleanup(void);
# 73 "/opt/tinyos-2.x/tos/interfaces/ResourceController.nc"
static   void /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP$0$ResourceController$requested(void);
#line 46
static   void /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP$0$ResourceController$granted(void);
# 55 "/opt/tinyos-2.x/tos/interfaces/Read.nc"
static  error_t AdcP$Read$read(
# 48 "/opt/tinyos-2.x/tos/chips/atm128/adc/AdcP.nc"
uint8_t arg_0x7e52b7d8);
# 65 "/opt/tinyos-2.x/tos/interfaces/ReadNow.nc"
static   void AdcP$ReadNow$default$readDone(
# 49 "/opt/tinyos-2.x/tos/chips/atm128/adc/AdcP.nc"
uint8_t arg_0x7e52a628, 
# 65 "/opt/tinyos-2.x/tos/interfaces/ReadNow.nc"
error_t arg_0x7e5e6b10, AdcP$ReadNow$val_t arg_0x7e5e6c98);
# 32 "/opt/tinyos-2.x/tos/chips/atm128/adc/Atm128AdcConfig.nc"
static   uint8_t AdcP$Atm128AdcConfig$default$getRefVoltage(
# 53 "/opt/tinyos-2.x/tos/chips/atm128/adc/AdcP.nc"
uint8_t arg_0x7e5289c0);
# 25 "/opt/tinyos-2.x/tos/chips/atm128/adc/Atm128AdcConfig.nc"
static   uint8_t AdcP$Atm128AdcConfig$default$getChannel(
# 53 "/opt/tinyos-2.x/tos/chips/atm128/adc/AdcP.nc"
uint8_t arg_0x7e5289c0);
# 39 "/opt/tinyos-2.x/tos/chips/atm128/adc/Atm128AdcConfig.nc"
static   uint8_t AdcP$Atm128AdcConfig$default$getPrescaler(
# 53 "/opt/tinyos-2.x/tos/chips/atm128/adc/AdcP.nc"
uint8_t arg_0x7e5289c0);
# 72 "/opt/tinyos-2.x/tos/chips/atm128/adc/Atm128AdcSingle.nc"
static   void AdcP$Atm128AdcSingle$dataReady(uint16_t arg_0x7e5d68b8, bool arg_0x7e5d6a40);
# 64 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static  void AdcP$acquiredData$runTask(void);
# 55 "/opt/tinyos-2.x/tos/interfaces/Read.nc"
static  error_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$Read$read(
# 24 "/opt/tinyos-2.x/tos/system/ArbitratedReadC.nc"
uint8_t arg_0x7e510550);
# 63 "/opt/tinyos-2.x/tos/interfaces/Read.nc"
static  void /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$Read$default$readDone(
# 24 "/opt/tinyos-2.x/tos/system/ArbitratedReadC.nc"
uint8_t arg_0x7e510550, 
# 63 "/opt/tinyos-2.x/tos/interfaces/Read.nc"
error_t arg_0x7ee20010, /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$Read$val_t arg_0x7ee20198);
#line 63
static  void /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$Service$readDone(
# 26 "/opt/tinyos-2.x/tos/system/ArbitratedReadC.nc"
uint8_t arg_0x7e50b3f8, 
# 63 "/opt/tinyos-2.x/tos/interfaces/Read.nc"
error_t arg_0x7ee20010, /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$Service$val_t arg_0x7ee20198);
# 101 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static   error_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$Resource$default$release(
# 27 "/opt/tinyos-2.x/tos/system/ArbitratedReadC.nc"
uint8_t arg_0x7e50a188);
# 78 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static   error_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$Resource$default$request(
# 27 "/opt/tinyos-2.x/tos/system/ArbitratedReadC.nc"
uint8_t arg_0x7e50a188);
# 92 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static  void /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$Resource$granted(
# 27 "/opt/tinyos-2.x/tos/system/ArbitratedReadC.nc"
uint8_t arg_0x7e50a188);
# 55 "/opt/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
static   void PhotoP$ResourceConfigure$unconfigure(void);
#line 49
static   void PhotoP$ResourceConfigure$configure(void);
# 32 "/opt/tinyos-2.x/tos/chips/atm128/adc/Atm128AdcConfig.nc"
static   uint8_t PhotoP$Atm128AdcConfig$getRefVoltage(void);
#line 25
static   uint8_t PhotoP$Atm128AdcConfig$getChannel(void);
#line 39
static   uint8_t PhotoP$Atm128AdcConfig$getPrescaler(void);
# 31 "/opt/tinyos-2.x/tos/platforms/homenet/ZigbexBusAdc.nc"
static   uint8_t ZigbexBusP$Adc0$getChannel(void);
#line 31
static   uint8_t ZigbexBusP$Adc1$getChannel(void);
#line 31
static   uint8_t ZigbexBusP$Adc4$getChannel(void);
# 55 "/opt/tinyos-2.x/tos/interfaces/Read.nc"
static  error_t /*MotionDetectorC.UltraredSensorC.DemoChannel.ADC_ShiftM*/ADC_ShiftM$1$Read$read(void);







static  void /*MotionDetectorC.UltraredSensorC.DemoChannel.ADC_ShiftM*/ADC_ShiftM$1$subRead$readDone(error_t arg_0x7ee20010, /*MotionDetectorC.UltraredSensorC.DemoChannel.ADC_ShiftM*/ADC_ShiftM$1$subRead$val_t arg_0x7ee20198);
# 55 "/opt/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
static   void UltraredP$ResourceConfigure$unconfigure(void);
#line 49
static   void UltraredP$ResourceConfigure$configure(void);
# 32 "/opt/tinyos-2.x/tos/chips/atm128/adc/Atm128AdcConfig.nc"
static   uint8_t UltraredP$Atm128AdcConfig$getRefVoltage(void);
#line 25
static   uint8_t UltraredP$Atm128AdcConfig$getChannel(void);
#line 39
static   uint8_t UltraredP$Atm128AdcConfig$getPrescaler(void);
# 55 "/opt/tinyos-2.x/tos/interfaces/Read.nc"
static  error_t /*MotionDetectorC.VoltageC.ADC_ShiftM*/ADC_ShiftM$2$Read$read(void);







static  void /*MotionDetectorC.VoltageC.ADC_ShiftM*/ADC_ShiftM$2$subRead$readDone(error_t arg_0x7ee20010, /*MotionDetectorC.VoltageC.ADC_ShiftM*/ADC_ShiftM$2$subRead$val_t arg_0x7ee20198);
# 55 "/opt/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
static   void VoltageP$ResourceConfigure$unconfigure(void);
#line 49
static   void VoltageP$ResourceConfigure$configure(void);
# 32 "/opt/tinyos-2.x/tos/chips/atm128/adc/Atm128AdcConfig.nc"
static   uint8_t VoltageP$VoltageConfig$getRefVoltage(void);
#line 25
static   uint8_t VoltageP$VoltageConfig$getChannel(void);
#line 39
static   uint8_t VoltageP$VoltageConfig$getPrescaler(void);
# 89 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
static  void CC2420ActiveMessageP$SubSend$sendDone(message_t *arg_0x7e456598, error_t arg_0x7e456720);
# 67 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
static  message_t *CC2420ActiveMessageP$SubReceive$receive(message_t *arg_0x7ed71e10, void *arg_0x7ed70010, uint8_t arg_0x7ed70198);
# 69 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
static  error_t CC2420ActiveMessageP$AMSend$send(
# 37 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
am_id_t arg_0x7e460758, 
# 69 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
am_addr_t arg_0x7ed82c18, message_t *arg_0x7ed82dc8, uint8_t arg_0x7ed81010);
#line 125
static  void *CC2420ActiveMessageP$AMSend$getPayload(
# 37 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
am_id_t arg_0x7e460758, 
# 125 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
message_t *arg_0x7ed74c68);
# 67 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
static  message_t *CC2420ActiveMessageP$Snoop$default$receive(
# 39 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
am_id_t arg_0x7e45e848, 
# 67 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
message_t *arg_0x7ed71e10, void *arg_0x7ed70010, uint8_t arg_0x7ed70198);
# 67 "/opt/tinyos-2.x/tos/interfaces/Packet.nc"
static  uint8_t CC2420ActiveMessageP$Packet$payloadLength(message_t *arg_0x7e480360);
#line 108
static  void *CC2420ActiveMessageP$Packet$getPayload(message_t *arg_0x7e47c750, uint8_t *arg_0x7e47c8f8);
#line 83
static  void CC2420ActiveMessageP$Packet$setPayloadLength(message_t *arg_0x7e4809d0, uint8_t arg_0x7e480b58);
# 67 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
static  message_t *CC2420ActiveMessageP$Receive$default$receive(
# 38 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
am_id_t arg_0x7e45e0b0, 
# 67 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
message_t *arg_0x7ed71e10, void *arg_0x7ed70010, uint8_t arg_0x7ed70198);
# 57 "/opt/tinyos-2.x/tos/interfaces/AMPacket.nc"
static  am_addr_t CC2420ActiveMessageP$AMPacket$address(void);









static  am_addr_t CC2420ActiveMessageP$AMPacket$destination(message_t *arg_0x7e478088);
#line 92
static  void CC2420ActiveMessageP$AMPacket$setDestination(message_t *arg_0x7e478c30, am_addr_t arg_0x7e478dc0);
#line 136
static  am_id_t CC2420ActiveMessageP$AMPacket$type(message_t *arg_0x7e475660);
#line 151
static  void CC2420ActiveMessageP$AMPacket$setType(message_t *arg_0x7e475be8, am_id_t arg_0x7e475d70);
#line 125
static  bool CC2420ActiveMessageP$AMPacket$isForMe(message_t *arg_0x7e477f00);
# 79 "/opt/tinyos-2.x/tos/interfaces/SplitControl.nc"
static  error_t CC2420CsmaP$SplitControl$start(void);
# 85 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420Transmit.nc"
static   void CC2420CsmaP$CC2420Transmit$sendDone(message_t *arg_0x7e413010, error_t arg_0x7e413198);
# 64 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
static  error_t CC2420CsmaP$Send$send(message_t *arg_0x7e458468, uint8_t arg_0x7e4585f0);
# 51 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static  error_t CC2420CsmaP$Init$init(void);
# 76 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420Power.nc"
static   void CC2420CsmaP$CC2420Power$startOscillatorDone(void);
#line 56
static   void CC2420CsmaP$CC2420Power$startVRegDone(void);
# 92 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static  void CC2420CsmaP$Resource$granted(void);
# 43 "/opt/tinyos-2.x/tos/interfaces/CsmaBackoff.nc"
static   uint16_t CC2420CsmaP$CsmaBackoff$congestion(message_t *arg_0x7e40eb10);
#line 36
static   uint16_t CC2420CsmaP$CsmaBackoff$initial(message_t *arg_0x7e40e560);
# 64 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static  void CC2420CsmaP$sendDone_task$runTask(void);
#line 64
static  void CC2420CsmaP$stopDone_task$runTask(void);
#line 64
static  void CC2420CsmaP$startDone_task$runTask(void);
# 53 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420Config.nc"
static  void CC2420ControlP$CC2420Config$default$syncDone(error_t arg_0x7e3e3330);
# 67 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
static   void CC2420ControlP$StartupTimer$fired(void);
# 51 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static  error_t CC2420ControlP$Init$init(void);
# 92 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static  void CC2420ControlP$SpiResource$granted(void);
#line 92
static  void CC2420ControlP$SyncResource$granted(void);
# 71 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420Power.nc"
static   error_t CC2420ControlP$CC2420Power$startOscillator(void);
#line 90
static   error_t CC2420ControlP$CC2420Power$rxOn(void);
#line 51
static   error_t CC2420ControlP$CC2420Power$startVReg(void);
# 101 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static   error_t CC2420ControlP$Resource$release(void);
#line 78
static   error_t CC2420ControlP$Resource$request(void);
# 57 "/opt/tinyos-2.x/tos/interfaces/GpioInterrupt.nc"
static   void CC2420ControlP$InterruptCCA$fired(void);
# 64 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static  void CC2420ControlP$syncDone_task$runTask(void);
# 41 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128TimerCtrl16.nc"
static   void HplAtm128Timer1P$TimerCtrl$setCtrlCapture(Atm128TimerCtrlCapture_t arg_0x7e37e368);
#line 37
static   Atm128TimerCtrlCapture_t HplAtm128Timer1P$TimerCtrl$getCtrlCapture(void);
# 53 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
static   void HplAtm128Timer1P$CompareA$reset(void);
#line 45
static   void HplAtm128Timer1P$CompareA$set(HplAtm128Timer1P$CompareA$size_type arg_0x7e9e2a20);










static   void HplAtm128Timer1P$CompareA$start(void);


static   void HplAtm128Timer1P$CompareA$stop(void);
# 79 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Capture.nc"
static   void HplAtm128Timer1P$Capture$setEdge(bool arg_0x7e377710);
#line 55
static   void HplAtm128Timer1P$Capture$reset(void);


static   void HplAtm128Timer1P$Capture$start(void);


static   void HplAtm128Timer1P$Capture$stop(void);
# 49 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
static   void HplAtm128Timer1P$CompareB$default$fired(void);
#line 49
static   void HplAtm128Timer1P$CompareC$default$fired(void);
# 78 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
static   bool HplAtm128Timer1P$Timer$test(void);
#line 52
static   HplAtm128Timer1P$Timer$timer_size HplAtm128Timer1P$Timer$get(void);
#line 95
static   void HplAtm128Timer1P$Timer$setScale(uint8_t arg_0x7e9f5da8);
#line 58
static   void HplAtm128Timer1P$Timer$set(HplAtm128Timer1P$Timer$timer_size arg_0x7ea00100);










static   void HplAtm128Timer1P$Timer$start(void);
# 51 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static  error_t /*InitOneP.InitOne*/Atm128TimerInitC$1$Init$init(void);
# 61 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
static   void /*InitOneP.InitOne*/Atm128TimerInitC$1$Timer$overflow(void);
# 92 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
static   void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$1$Alarm$startAt(/*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$1$Alarm$size_type arg_0x7ea22350, /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$1$Alarm$size_type arg_0x7ea224e0);
#line 62
static   void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$1$Alarm$stop(void);
# 49 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
static   void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$1$HplAtm128Compare$fired(void);
# 61 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
static   void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$1$HplAtm128Timer$overflow(void);
# 53 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
static   /*CounterOne16C.NCounter*/Atm128CounterC$1$Counter$size_type /*CounterOne16C.NCounter*/Atm128CounterC$1$Counter$get(void);






static   bool /*CounterOne16C.NCounter*/Atm128CounterC$1$Counter$isOverflowPending(void);
# 61 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
static   void /*CounterOne16C.NCounter*/Atm128CounterC$1$Timer$overflow(void);
# 71 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
static   void /*Counter32khz32C.Transform32*/TransformCounterC$0$CounterFrom$overflow(void);
#line 53
static   /*Counter32khz32C.Transform32*/TransformCounterC$0$Counter$size_type /*Counter32khz32C.Transform32*/TransformCounterC$0$Counter$get(void);
# 98 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
static   /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$Alarm$size_type /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$Alarm$getNow(void);
#line 92
static   void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$Alarm$startAt(/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$Alarm$size_type arg_0x7ea22350, /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$Alarm$size_type arg_0x7ea224e0);
#line 55
static   void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$Alarm$start(/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$Alarm$size_type arg_0x7ea23220);






static   void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$Alarm$stop(void);




static   void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$AlarmFrom$fired(void);
# 71 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
static   void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$Counter$overflow(void);
# 51 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static  error_t NoInitC$Init$init(void);
# 43 "/opt/tinyos-2.x/tos/interfaces/GpioCapture.nc"
static   error_t /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC$0$Capture$captureFallingEdge(void);
#line 42
static   error_t /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC$0$Capture$captureRisingEdge(void);
# 51 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Capture.nc"
static   void /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC$0$Atm128Capture$captured(/*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC$0$Atm128Capture$size_type arg_0x7e378120);
# 64 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static   void /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC$1$Atm128Interrupt$fired(void);
# 43 "/opt/tinyos-2.x/tos/interfaces/GpioInterrupt.nc"
static   error_t /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC$1$Interrupt$enableFallingEdge(void);
# 72 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
static  void HplCC2420InterruptsP$CCATimer$fired(void);
# 64 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static  void HplCC2420InterruptsP$stopTask$runTask(void);
# 50 "/opt/tinyos-2.x/tos/interfaces/GpioInterrupt.nc"
static   error_t HplCC2420InterruptsP$CCA$disable(void);
#line 42
static   error_t HplCC2420InterruptsP$CCA$enableRisingEdge(void);
# 64 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static  void HplCC2420InterruptsP$CCATask$runTask(void);
# 71 "/opt/tinyos-2.x/tos/interfaces/SpiPacket.nc"
static   void CC2420SpiImplP$SpiPacket$sendDone(uint8_t *arg_0x7e17e290, uint8_t *arg_0x7e17e438, uint16_t arg_0x7e17e5c8, 
error_t arg_0x7e17e760);
# 62 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420Fifo.nc"
static   error_t CC2420SpiImplP$Fifo$continueRead(
# 40 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420SpiImplP.nc"
uint8_t arg_0x7e195068, 
# 62 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420Fifo.nc"
uint8_t *arg_0x7e1b2d00, uint8_t arg_0x7e1b2e88);
#line 91
static   void CC2420SpiImplP$Fifo$default$writeDone(
# 40 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420SpiImplP.nc"
uint8_t arg_0x7e195068, 
# 91 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420Fifo.nc"
uint8_t *arg_0x7e1a1610, uint8_t arg_0x7e1a1798, error_t arg_0x7e1a1920);
#line 82
static   cc2420_status_t CC2420SpiImplP$Fifo$write(
# 40 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420SpiImplP.nc"
uint8_t arg_0x7e195068, 
# 82 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420Fifo.nc"
uint8_t *arg_0x7e1b0dd0, uint8_t arg_0x7e1a1010);
#line 51
static   cc2420_status_t CC2420SpiImplP$Fifo$beginRead(
# 40 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420SpiImplP.nc"
uint8_t arg_0x7e195068, 
# 51 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420Fifo.nc"
uint8_t *arg_0x7e1b2568, uint8_t arg_0x7e1b26f0);
#line 71
static   void CC2420SpiImplP$Fifo$default$readDone(
# 40 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420SpiImplP.nc"
uint8_t arg_0x7e195068, 
# 71 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420Fifo.nc"
uint8_t *arg_0x7e1b04f8, uint8_t arg_0x7e1b0680, error_t arg_0x7e1b0808);
# 92 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static  void CC2420SpiImplP$SpiResource$granted(void);
# 63 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420Ram.nc"
static   cc2420_status_t CC2420SpiImplP$Ram$write(
# 41 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420SpiImplP.nc"
uint16_t arg_0x7e1959f0, 
# 63 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420Ram.nc"
uint8_t arg_0x7e3d2920, uint8_t *arg_0x7e3d2ac8, uint8_t arg_0x7e3d2c50);
# 55 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420Register.nc"
static   cc2420_status_t CC2420SpiImplP$Reg$write(
# 42 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420SpiImplP.nc"
uint8_t arg_0x7e1930f8, 
# 55 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420Register.nc"
uint16_t arg_0x7e3cee48);
# 101 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static   error_t CC2420SpiImplP$Resource$release(
# 39 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420SpiImplP.nc"
uint8_t arg_0x7e1966c0);
# 87 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static   error_t CC2420SpiImplP$Resource$immediateRequest(
# 39 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420SpiImplP.nc"
uint8_t arg_0x7e1966c0);
# 78 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static   error_t CC2420SpiImplP$Resource$request(
# 39 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420SpiImplP.nc"
uint8_t arg_0x7e1966c0);
# 92 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static  void CC2420SpiImplP$Resource$default$granted(
# 39 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420SpiImplP.nc"
uint8_t arg_0x7e1966c0);
# 45 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420Strobe.nc"
static   cc2420_status_t CC2420SpiImplP$Strobe$strobe(
# 43 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420SpiImplP.nc"
uint8_t arg_0x7e1937d8);
# 59 "/opt/tinyos-2.x/tos/interfaces/SpiPacket.nc"
static   error_t Atm128SpiP$SpiPacket$send(uint8_t *arg_0x7e17f7f8, uint8_t *arg_0x7e17f9a0, uint16_t arg_0x7e17fb30);
# 92 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static  void Atm128SpiP$ResourceArbiter$granted(
# 84 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
uint8_t arg_0x7e130410);
# 34 "/opt/tinyos-2.x/tos/interfaces/SpiByte.nc"
static   uint8_t Atm128SpiP$SpiByte$write(uint8_t arg_0x7e181088);
# 92 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128Spi.nc"
static   void Atm128SpiP$Spi$dataReady(uint8_t arg_0x7e11df08);
# 101 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static   error_t Atm128SpiP$Resource$release(
# 80 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
uint8_t arg_0x7e133010);
# 87 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static   error_t Atm128SpiP$Resource$immediateRequest(
# 80 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
uint8_t arg_0x7e133010);
# 78 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static   error_t Atm128SpiP$Resource$request(
# 80 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
uint8_t arg_0x7e133010);
# 92 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static  void Atm128SpiP$Resource$default$granted(
# 80 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
uint8_t arg_0x7e133010);
# 72 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128Spi.nc"
static   void HplAtm128SpiP$SPI$sleep(void);
#line 66
static   void HplAtm128SpiP$SPI$initMaster(void);
#line 105
static   void HplAtm128SpiP$SPI$setMasterBit(bool arg_0x7e11ac08);
#line 96
static   void HplAtm128SpiP$SPI$enableInterrupt(bool arg_0x7e11c478);
#line 80
static   uint8_t HplAtm128SpiP$SPI$read(void);
#line 125
static   void HplAtm128SpiP$SPI$setMasterDoubleSpeed(bool arg_0x7e116680);
#line 114
static   void HplAtm128SpiP$SPI$setClock(uint8_t arg_0x7e118480);
#line 108
static   void HplAtm128SpiP$SPI$setClockPolarity(bool arg_0x7e119490);
#line 86
static   void HplAtm128SpiP$SPI$write(uint8_t arg_0x7e11d9f8);
#line 99
static   void HplAtm128SpiP$SPI$enableSpi(bool arg_0x7e11cc48);
#line 111
static   void HplAtm128SpiP$SPI$setClockPhase(bool arg_0x7e119c70);
# 51 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static  error_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$1$Init$init(void);
# 69 "/opt/tinyos-2.x/tos/interfaces/ResourceQueue.nc"
static   error_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$1$FcfsQueue$enqueue(resource_client_id_t arg_0x7e6a18b0);
#line 43
static   bool /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$1$FcfsQueue$isEmpty(void);








static   bool /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$1$FcfsQueue$isEnqueued(resource_client_id_t arg_0x7e6a2e28);







static   resource_client_id_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$1$FcfsQueue$dequeue(void);
# 43 "/opt/tinyos-2.x/tos/interfaces/ResourceRequested.nc"
static   void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceRequested$default$requested(
# 54 "/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x7e07cb40);
# 51 "/opt/tinyos-2.x/tos/interfaces/ResourceRequested.nc"
static   void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceRequested$default$immediateRequested(
# 54 "/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x7e07cb40);
# 55 "/opt/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
static   void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceConfigure$default$unconfigure(
# 58 "/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x7e07b650);
# 49 "/opt/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
static   void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceConfigure$default$configure(
# 58 "/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x7e07b650);
# 101 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static   error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$Resource$release(
# 53 "/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x7e07c200);
# 87 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static   error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$Resource$immediateRequest(
# 53 "/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x7e07c200);
# 78 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static   error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$Resource$request(
# 53 "/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x7e07c200);
# 80 "/opt/tinyos-2.x/tos/interfaces/ArbiterInfo.nc"
static   bool /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ArbiterInfo$inUse(void);
# 64 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static  void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$grantedTask$runTask(void);
# 50 "/opt/tinyos-2.x/tos/interfaces/GpioCapture.nc"
static   void CC2420TransmitP$CaptureSFD$captured(uint16_t arg_0x7e2017f8);
# 67 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
static   void CC2420TransmitP$BackoffTimer$fired(void);
# 48 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420Transmit.nc"
static   error_t CC2420TransmitP$Send$sendCCA(message_t *arg_0x7e415900);
# 61 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420Receive.nc"
static   void CC2420TransmitP$CC2420Receive$receive(uint8_t arg_0x7dffa068, message_t *arg_0x7dffa218);
# 51 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static  error_t CC2420TransmitP$Init$init(void);
# 92 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static  void CC2420TransmitP$SpiResource$granted(void);
# 73 "/opt/tinyos-2.x/tos/interfaces/AsyncStdControl.nc"
static   error_t CC2420TransmitP$AsyncStdControl$start(void);
# 39 "/opt/tinyos-2.x/tos/interfaces/RadioTimeStamping.nc"
static   void CC2420TransmitP$TimeStamp$default$transmittedSFD(uint16_t arg_0x7e016030, message_t *arg_0x7e0161e0);










static   void CC2420TransmitP$TimeStamp$default$receivedSFD(uint16_t arg_0x7e016710);
# 91 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420Fifo.nc"
static   void CC2420TransmitP$TXFIFO$writeDone(uint8_t *arg_0x7e1a1610, uint8_t arg_0x7e1a1798, error_t arg_0x7e1a1920);
#line 71
static   void CC2420TransmitP$TXFIFO$readDone(uint8_t *arg_0x7e1b04f8, uint8_t arg_0x7e1b0680, error_t arg_0x7e1b0808);
# 64 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static  void CC2420ReceiveP$receiveDone_task$runTask(void);
# 53 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420Receive.nc"
static   void CC2420ReceiveP$CC2420Receive$sfd_dropped(void);
#line 47
static   void CC2420ReceiveP$CC2420Receive$sfd(uint16_t arg_0x7dffb750);
# 51 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static  error_t CC2420ReceiveP$Init$init(void);
# 92 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static  void CC2420ReceiveP$SpiResource$granted(void);
# 91 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420Fifo.nc"
static   void CC2420ReceiveP$RXFIFO$writeDone(uint8_t *arg_0x7e1a1610, uint8_t arg_0x7e1a1798, error_t arg_0x7e1a1920);
#line 71
static   void CC2420ReceiveP$RXFIFO$readDone(uint8_t *arg_0x7e1b04f8, uint8_t arg_0x7e1b0680, error_t arg_0x7e1b0808);
# 73 "/opt/tinyos-2.x/tos/interfaces/AsyncStdControl.nc"
static   error_t CC2420ReceiveP$AsyncStdControl$start(void);
# 57 "/opt/tinyos-2.x/tos/interfaces/GpioInterrupt.nc"
static   void CC2420ReceiveP$InterruptFIFOP$fired(void);
# 41 "/opt/tinyos-2.x/tos/interfaces/Random.nc"
static   uint16_t RandomMlcgP$Random$rand16(void);
#line 35
static   uint32_t RandomMlcgP$Random$rand32(void);
# 51 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static  error_t RandomMlcgP$Init$init(void);
# 42 "/opt/tinyos-2.x/tos/system/ActiveMessageAddressC.nc"
static   am_addr_t ActiveMessageAddressC$amAddress(void);
# 69 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
static  error_t /*MotionDetectorC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$0$AMSend$send(am_addr_t arg_0x7ed82c18, message_t *arg_0x7ed82dc8, uint8_t arg_0x7ed81010);
#line 125
static  void */*MotionDetectorC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$0$AMSend$getPayload(message_t *arg_0x7ed74c68);
# 89 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
static  void /*MotionDetectorC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$0$Send$sendDone(message_t *arg_0x7e456598, error_t arg_0x7e456720);
# 99 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
static  void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMSend$sendDone(
# 40 "/opt/tinyos-2.x/tos/system/AMQueueImplP.nc"
am_id_t arg_0x7ded06a8, 
# 99 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
message_t *arg_0x7ed74030, error_t arg_0x7ed741b8);
# 64 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
static  error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$send(
# 38 "/opt/tinyos-2.x/tos/system/AMQueueImplP.nc"
uint8_t arg_0x7ded1c90, 
# 64 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
message_t *arg_0x7e458468, uint8_t arg_0x7e4585f0);
#line 114
static  void */*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$getPayload(
# 38 "/opt/tinyos-2.x/tos/system/AMQueueImplP.nc"
uint8_t arg_0x7ded1c90, 
# 114 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
message_t *arg_0x7e4551f8);
#line 89
static  void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$default$sendDone(
# 38 "/opt/tinyos-2.x/tos/system/AMQueueImplP.nc"
uint8_t arg_0x7ded1c90, 
# 89 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
message_t *arg_0x7e456598, error_t arg_0x7e456720);
# 64 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static  void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$errorTask$runTask(void);
# 55 "/opt/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
static   void PirP$ResourceConfigure$unconfigure(void);
#line 49
static   void PirP$ResourceConfigure$configure(void);
# 32 "/opt/tinyos-2.x/tos/chips/atm128/adc/Atm128AdcConfig.nc"
static   uint8_t PirP$Atm128AdcConfig$getRefVoltage(void);
#line 25
static   uint8_t PirP$Atm128AdcConfig$getChannel(void);
#line 39
static   uint8_t PirP$Atm128AdcConfig$getPrescaler(void);
# 51 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static  error_t PlatformP$MoteInit$init(void);
#line 51
static  error_t PlatformP$MeasureClock$init(void);
# 42 "/opt/tinyos-2.x/tos/platforms/mica/PlatformP.nc"
static inline void PlatformP$power_init(void);






static inline  error_t PlatformP$Init$init(void);
# 51 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static  error_t MotePlatformP$SubInit$init(void);
# 27 "/opt/tinyos-2.x/tos/platforms/homenet/MotePlatformP.nc"
static inline  error_t MotePlatformP$PlatformInit$init(void);
# 33 "/opt/tinyos-2.x/tos/platforms/mica/MeasureClockC.nc"
enum MeasureClockC$__nesc_unnamed4335 {


  MeasureClockC$MAGIC = 488 / (16 / PLATFORM_MHZ)
};

uint16_t MeasureClockC$cycles;

static inline  error_t MeasureClockC$Init$init(void);
#line 103
static inline   uint8_t MeasureClockC$Atm128Calibrate$adcPrescaler(void);
# 51 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static  error_t RealMainP$SoftwareInit$init(void);
# 49 "/opt/tinyos-2.x/tos/interfaces/Boot.nc"
static  void RealMainP$Boot$booted(void);
# 51 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static  error_t RealMainP$PlatformInit$init(void);
# 46 "/opt/tinyos-2.x/tos/interfaces/Scheduler.nc"
static  void RealMainP$Scheduler$init(void);
#line 61
static  void RealMainP$Scheduler$taskLoop(void);
#line 54
static  bool RealMainP$Scheduler$runNextTask(void);
# 52 "/opt/tinyos-2.x/tos/system/RealMainP.nc"
int main(void)   ;
# 64 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static  void SchedulerBasicP$TaskBasic$runTask(
# 45 "/opt/tinyos-2.x/tos/system/SchedulerBasicP.nc"
uint8_t arg_0x7f062030);
# 59 "/opt/tinyos-2.x/tos/interfaces/McuSleep.nc"
static   void SchedulerBasicP$McuSleep$sleep(void);
# 50 "/opt/tinyos-2.x/tos/system/SchedulerBasicP.nc"
enum SchedulerBasicP$__nesc_unnamed4336 {

  SchedulerBasicP$NUM_TASKS = 20U, 
  SchedulerBasicP$NO_TASK = 255
};

volatile uint8_t SchedulerBasicP$m_head;
volatile uint8_t SchedulerBasicP$m_tail;
volatile uint8_t SchedulerBasicP$m_next[SchedulerBasicP$NUM_TASKS];








static __inline uint8_t SchedulerBasicP$popTask(void);
#line 86
static inline bool SchedulerBasicP$isWaiting(uint8_t id);




static inline bool SchedulerBasicP$pushTask(uint8_t id);
#line 113
static inline  void SchedulerBasicP$Scheduler$init(void);









static  bool SchedulerBasicP$Scheduler$runNextTask(void);
#line 138
static inline  void SchedulerBasicP$Scheduler$taskLoop(void);
#line 159
static   error_t SchedulerBasicP$TaskBasic$postTask(uint8_t id);




static   void SchedulerBasicP$TaskBasic$default$runTask(uint8_t id);
# 54 "/opt/tinyos-2.x/tos/interfaces/McuPowerOverride.nc"
static   mcu_power_t McuSleepC$McuPowerOverride$lowestState(void);
# 58 "/opt/tinyos-2.x/tos/chips/atm128/McuSleepC.nc"
const_uint8_t McuSleepC$atm128PowerBits[ATM128_POWER_DOWN + 1] = { 
0, 
1 << 3, ((
1 << 2) | (1 << 4)) | (1 << 3), (
1 << 4) | (1 << 3), (
1 << 2) | (1 << 4), 
1 << 4 };

static inline mcu_power_t McuSleepC$getPowerState(void);
#line 111
static inline   void McuSleepC$McuSleep$sleep(void);
#line 123
static inline   void McuSleepC$McuPowerState$update(void);


static inline    mcu_power_t McuSleepC$McuPowerOverride$default$lowestState(void);
# 55 "/opt/tinyos-2.x/tos/interfaces/Read.nc"
static  error_t MotionDetectorM$Read_Voltage$read(void);
# 69 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
static  error_t MotionDetectorM$AMSend$send(am_addr_t arg_0x7ed82c18, message_t *arg_0x7ed82dc8, uint8_t arg_0x7ed81010);
#line 125
static  void *MotionDetectorM$AMSend$getPayload(message_t *arg_0x7ed74c68);
# 29 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static   void MotionDetectorM$PirPw$set(void);
# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static   error_t MotionDetectorM$SendSensorData$postTask(void);
# 55 "/opt/tinyos-2.x/tos/interfaces/Read.nc"
static  error_t MotionDetectorM$Read_Humi$read(void);
#line 55
static  error_t MotionDetectorM$Read_Ultrared$read(void);
#line 55
static  error_t MotionDetectorM$Read_Photo$read(void);
# 62 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
static  void MotionDetectorM$PirTimer$startOneShot(uint32_t arg_0x7ee62ca8);




static  void MotionDetectorM$PirTimer$stop(void);
# 79 "/opt/tinyos-2.x/tos/interfaces/SplitControl.nc"
static  error_t MotionDetectorM$CommControl$start(void);
# 89 "/opt/tinyos-2.x/tos/interfaces/Leds.nc"
static   void MotionDetectorM$Leds$led2Toggle(void);
# 55 "/opt/tinyos-2.x/tos/interfaces/Read.nc"
static  error_t MotionDetectorM$Read_Temp$read(void);
# 53 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
static  void MotionDetectorM$Timer$startPeriodic(uint32_t arg_0x7ee626d8);
# 55 "/opt/tinyos-2.x/tos/interfaces/Read.nc"
static  error_t MotionDetectorM$Pir$read(void);
# 89 "MotionDetectorM.nc"
enum MotionDetectorM$__nesc_unnamed4337 {
#line 89
  MotionDetectorM$SendSensorData = 0U
};
#line 89
typedef int MotionDetectorM$__nesc_sillytask_SendSensorData[MotionDetectorM$SendSensorData];
#line 23
message_t MotionDetectorM$SensorData;
#line 23
message_t MotionDetectorM$CMDmsg;
uint16_t MotionDetectorM$myTemp;
uint16_t MotionDetectorM$myHumi;
uint16_t MotionDetectorM$myPhoto;
uint16_t MotionDetectorM$myUltrared;
uint16_t MotionDetectorM$myBattery;
uint16_t MotionDetectorM$Raw_Temp;
uint16_t MotionDetectorM$Raw_Humi;

static inline void MotionDetectorM$calc_SHT_(uint16_t p_humidity, uint16_t p_temperature);

static inline  void MotionDetectorM$Boot$booted(void);
#line 50
static inline  void MotionDetectorM$CommControl$startDone(error_t error);

static inline  void MotionDetectorM$CommControl$stopDone(error_t error);

static inline  void MotionDetectorM$Timer$fired(void);



static inline  void MotionDetectorM$Read_Photo$readDone(error_t err, uint16_t val);





static inline  void MotionDetectorM$Read_Temp$readDone(error_t err, uint16_t val);





static  void MotionDetectorM$Read_Humi$readDone(error_t err, uint16_t val);







static inline  void MotionDetectorM$Read_Voltage$readDone(error_t err, uint16_t val);





static inline  void MotionDetectorM$Read_Ultrared$readDone(error_t err, uint16_t val);




static inline  void MotionDetectorM$SendSensorData$runTask(void);
#line 106
static inline  void MotionDetectorM$AMSend$sendDone(message_t *msg, error_t error);



static inline  message_t *MotionDetectorM$Receive$receive(message_t *msg, void *payload, uint8_t len);
#line 127
static inline  void MotionDetectorM$PirTimer$fired(void);



static inline  void MotionDetectorM$Pir$readDone(error_t result, uint16_t data);
#line 151
static inline void MotionDetectorM$calc_SHT_(uint16_t p_humidity, uint16_t p_temperature);
# 35 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static   void LedsP$Led0$makeOutput(void);
#line 29
static   void LedsP$Led0$set(void);





static   void LedsP$Led1$makeOutput(void);
#line 29
static   void LedsP$Led1$set(void);

static   void LedsP$Led2$toggle(void);



static   void LedsP$Led2$makeOutput(void);
#line 29
static   void LedsP$Led2$set(void);
# 45 "/opt/tinyos-2.x/tos/system/LedsP.nc"
static inline  error_t LedsP$Init$init(void);
#line 103
static inline   void LedsP$Leds$led2Toggle(void);
# 46 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline   void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP$0$IO$set(void);

static   void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP$0$IO$toggle(void);



static __inline   void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP$0$IO$makeOutput(void);
#line 46
static __inline   void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP$1$IO$set(void);





static __inline   void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP$1$IO$makeOutput(void);
#line 46
static __inline   void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP$2$IO$set(void);





static __inline   void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP$2$IO$makeOutput(void);
#line 46
static __inline   void /*HplAtm128GeneralIOC.PortA.Bit5*/HplAtm128GeneralIOPinP$5$IO$set(void);





static __inline   void /*HplAtm128GeneralIOC.PortA.Bit5*/HplAtm128GeneralIOPinP$5$IO$makeOutput(void);
#line 46
static __inline   void /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP$6$IO$set(void);
static __inline   void /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP$6$IO$clr(void);




static __inline   void /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP$6$IO$makeOutput(void);
#line 46
static __inline   void /*HplAtm128GeneralIOC.PortA.Bit7*/HplAtm128GeneralIOPinP$7$IO$set(void);
static __inline   void /*HplAtm128GeneralIOC.PortA.Bit7*/HplAtm128GeneralIOPinP$7$IO$clr(void);




static __inline   void /*HplAtm128GeneralIOC.PortA.Bit7*/HplAtm128GeneralIOPinP$7$IO$makeOutput(void);
#line 46
static __inline   void /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP$8$IO$set(void);
static __inline   void /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP$8$IO$clr(void);




static __inline   void /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP$8$IO$makeOutput(void);
#line 52
static __inline   void /*HplAtm128GeneralIOC.PortB.Bit1*/HplAtm128GeneralIOPinP$9$IO$makeOutput(void);
#line 52
static __inline   void /*HplAtm128GeneralIOC.PortB.Bit2*/HplAtm128GeneralIOPinP$10$IO$makeOutput(void);
#line 50
static __inline   void /*HplAtm128GeneralIOC.PortB.Bit3*/HplAtm128GeneralIOPinP$11$IO$makeInput(void);
#line 45
static __inline   bool /*HplAtm128GeneralIOC.PortB.Bit7*/HplAtm128GeneralIOPinP$15$IO$get(void);
static __inline   void /*HplAtm128GeneralIOC.PortC.Bit3*/HplAtm128GeneralIOPinP$19$IO$set(void);
#line 46
static __inline   void /*HplAtm128GeneralIOC.PortD.Bit0*/HplAtm128GeneralIOPinP$24$IO$set(void);
static __inline   void /*HplAtm128GeneralIOC.PortD.Bit0*/HplAtm128GeneralIOPinP$24$IO$clr(void);


static __inline   void /*HplAtm128GeneralIOC.PortD.Bit0*/HplAtm128GeneralIOPinP$24$IO$makeInput(void);

static __inline   void /*HplAtm128GeneralIOC.PortD.Bit0*/HplAtm128GeneralIOPinP$24$IO$makeOutput(void);
#line 45
static __inline   bool /*HplAtm128GeneralIOC.PortD.Bit1*/HplAtm128GeneralIOPinP$25$IO$get(void);
static __inline   void /*HplAtm128GeneralIOC.PortD.Bit1*/HplAtm128GeneralIOPinP$25$IO$set(void);
static __inline   void /*HplAtm128GeneralIOC.PortD.Bit1*/HplAtm128GeneralIOPinP$25$IO$clr(void);


static __inline   void /*HplAtm128GeneralIOC.PortD.Bit1*/HplAtm128GeneralIOPinP$25$IO$makeInput(void);

static __inline   void /*HplAtm128GeneralIOC.PortD.Bit1*/HplAtm128GeneralIOPinP$25$IO$makeOutput(void);
#line 45
static __inline   bool /*HplAtm128GeneralIOC.PortD.Bit4*/HplAtm128GeneralIOPinP$28$IO$get(void);




static __inline   void /*HplAtm128GeneralIOC.PortD.Bit4*/HplAtm128GeneralIOPinP$28$IO$makeInput(void);
#line 45
static __inline   bool /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP$30$IO$get(void);




static __inline   void /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP$30$IO$makeInput(void);
#line 46
static __inline   void /*HplAtm128GeneralIOC.PortE.Bit4*/HplAtm128GeneralIOPinP$36$IO$set(void);
static __inline   void /*HplAtm128GeneralIOC.PortE.Bit4*/HplAtm128GeneralIOPinP$36$IO$clr(void);




static __inline   void /*HplAtm128GeneralIOC.PortE.Bit4*/HplAtm128GeneralIOPinP$36$IO$makeOutput(void);
#line 45
static __inline   bool /*HplAtm128GeneralIOC.PortE.Bit6*/HplAtm128GeneralIOPinP$38$IO$get(void);
# 49 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
static   void HplAtm128Timer0AsyncC$Compare$fired(void);
# 61 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
static   void HplAtm128Timer0AsyncC$Timer$overflow(void);
# 49 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer0AsyncC.nc"
static inline  error_t HplAtm128Timer0AsyncC$Init$init(void);





static inline   uint8_t HplAtm128Timer0AsyncC$Timer$get(void);


static inline   void HplAtm128Timer0AsyncC$Timer$set(uint8_t t);
#line 71
static inline   void HplAtm128Timer0AsyncC$Timer$setScale(uint8_t s);






static inline   Atm128TimerControl_t HplAtm128Timer0AsyncC$TimerCtrl$getControl(void);




static inline   void HplAtm128Timer0AsyncC$TimerCtrl$setControl(Atm128TimerControl_t x);
#line 103
static inline   Atm128_TIFR_t HplAtm128Timer0AsyncC$TimerCtrl$getInterruptFlag(void);
#line 117
static inline   void HplAtm128Timer0AsyncC$Timer$start(void);


static inline bool HplAtm128Timer0AsyncC$overflowed(void);



static inline   bool HplAtm128Timer0AsyncC$Timer$test(void);





static inline   void HplAtm128Timer0AsyncC$Compare$reset(void);
static inline   void HplAtm128Timer0AsyncC$Compare$start(void);
static inline   void HplAtm128Timer0AsyncC$Compare$stop(void);
#line 144
static inline   void HplAtm128Timer0AsyncC$Compare$set(uint8_t t);









static void HplAtm128Timer0AsyncC$stabiliseTimer0(void);






void __vector_15(void) __attribute((signal))   ;





void __vector_16(void) __attribute((signal))   ;
# 95 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
static   void /*AlarmCounterMilliP.MilliInit*/Atm128TimerInitC$0$Timer$setScale(uint8_t arg_0x7e9f5da8);
#line 58
static   void /*AlarmCounterMilliP.MilliInit*/Atm128TimerInitC$0$Timer$set(/*AlarmCounterMilliP.MilliInit*/Atm128TimerInitC$0$Timer$timer_size arg_0x7ea00100);










static   void /*AlarmCounterMilliP.MilliInit*/Atm128TimerInitC$0$Timer$start(void);
# 42 "/opt/tinyos-2.x/tos/chips/atm128/timer/Atm128TimerInitC.nc"
static inline  error_t /*AlarmCounterMilliP.MilliInit*/Atm128TimerInitC$0$Init$init(void);








static inline   void /*AlarmCounterMilliP.MilliInit*/Atm128TimerInitC$0$Timer$overflow(void);
# 67 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
static   void /*AlarmCounterMilliP.MilliAlarm*/Atm128AlarmC$0$Alarm$fired(void);
# 53 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
static   void /*AlarmCounterMilliP.MilliAlarm*/Atm128AlarmC$0$HplAtm128Compare$reset(void);
#line 45
static   void /*AlarmCounterMilliP.MilliAlarm*/Atm128AlarmC$0$HplAtm128Compare$set(/*AlarmCounterMilliP.MilliAlarm*/Atm128AlarmC$0$HplAtm128Compare$size_type arg_0x7e9e2a20);










static   void /*AlarmCounterMilliP.MilliAlarm*/Atm128AlarmC$0$HplAtm128Compare$start(void);


static   void /*AlarmCounterMilliP.MilliAlarm*/Atm128AlarmC$0$HplAtm128Compare$stop(void);
# 52 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
static   /*AlarmCounterMilliP.MilliAlarm*/Atm128AlarmC$0$HplAtm128Timer$timer_size /*AlarmCounterMilliP.MilliAlarm*/Atm128AlarmC$0$HplAtm128Timer$get(void);
# 65 "/opt/tinyos-2.x/tos/chips/atm128/timer/Atm128AlarmC.nc"
static inline   void /*AlarmCounterMilliP.MilliAlarm*/Atm128AlarmC$0$Alarm$stop(void);








static inline   void /*AlarmCounterMilliP.MilliAlarm*/Atm128AlarmC$0$Alarm$startAt(/*AlarmCounterMilliP.MilliAlarm*/Atm128AlarmC$0$timer_size t0, /*AlarmCounterMilliP.MilliAlarm*/Atm128AlarmC$0$timer_size dt);
#line 110
static inline   void /*AlarmCounterMilliP.MilliAlarm*/Atm128AlarmC$0$HplAtm128Compare$fired(void);






static inline   void /*AlarmCounterMilliP.MilliAlarm*/Atm128AlarmC$0$HplAtm128Timer$overflow(void);
# 71 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
static   void /*AlarmCounterMilliP.MilliCounter*/Atm128CounterC$0$Counter$overflow(void);
# 78 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
static   bool /*AlarmCounterMilliP.MilliCounter*/Atm128CounterC$0$Timer$test(void);
#line 52
static   /*AlarmCounterMilliP.MilliCounter*/Atm128CounterC$0$Timer$timer_size /*AlarmCounterMilliP.MilliCounter*/Atm128CounterC$0$Timer$get(void);
# 41 "/opt/tinyos-2.x/tos/chips/atm128/timer/Atm128CounterC.nc"
static inline   /*AlarmCounterMilliP.MilliCounter*/Atm128CounterC$0$timer_size /*AlarmCounterMilliP.MilliCounter*/Atm128CounterC$0$Counter$get(void);




static inline   bool /*AlarmCounterMilliP.MilliCounter*/Atm128CounterC$0$Counter$isOverflowPending(void);









static inline   void /*AlarmCounterMilliP.MilliCounter*/Atm128CounterC$0$Timer$overflow(void);
# 67 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
static   void /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$Alarm$fired(void);
# 53 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
static   /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$CounterFrom$size_type /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$CounterFrom$get(void);






static   bool /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$CounterFrom$isOverflowPending(void);










static   void /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$Counter$overflow(void);
# 92 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
static   void /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$AlarmFrom$startAt(/*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$AlarmFrom$size_type arg_0x7ea22350, /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$AlarmFrom$size_type arg_0x7ea224e0);
#line 62
static   void /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$AlarmFrom$stop(void);
# 68 "/opt/tinyos-2.x/tos/lib/timer/TransformAlarmCounterC.nc"
/*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$upper_count_type /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$m_upper;
/*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$to_size_type /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$m_t0;
/*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$to_size_type /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$m_dt;
uint8_t /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$m_skip_overflows;

enum /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$__nesc_unnamed4338 {

  TransformAlarmCounterC$0$MAX_DELAY_LOG2 = 8 * sizeof(/*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$from_size_type ) - 1 - 0, 
  TransformAlarmCounterC$0$MAX_DELAY = (/*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$to_size_type )1 << /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$MAX_DELAY_LOG2
};

enum /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$__nesc_unnamed4339 {

  TransformAlarmCounterC$0$LOW_SHIFT_RIGHT = 0, 
  TransformAlarmCounterC$0$HIGH_SHIFT_LEFT = 8 * sizeof(/*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$from_size_type ) - /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$LOW_SHIFT_RIGHT, 
  TransformAlarmCounterC$0$NUM_UPPER_BITS = 8 * sizeof(/*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$to_size_type ) - 8 * sizeof(/*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$from_size_type ) + 0, 



  TransformAlarmCounterC$0$OVERFLOW_MASK = /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$NUM_UPPER_BITS ? ((/*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$upper_count_type )2 << (/*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$NUM_UPPER_BITS - 1)) - 1 : 0
};

static void /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$set_alarm(void);

static   /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$to_size_type /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$Counter$get(void);
#line 145
static inline   void /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$CounterFrom$overflow(void);
#line 158
static inline   /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$to_size_type /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$Alarm$getNow(void);




static inline   /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$to_size_type /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$Alarm$getAlarm(void);









static inline   void /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$Alarm$stop(void);




static void /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$set_alarm(void);
#line 221
static   void /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$Alarm$startAt(/*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$to_size_type t0, /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$to_size_type dt);
#line 236
static inline   void /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$AlarmFrom$fired(void);
# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static   error_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$fired$postTask(void);
# 98 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
static   /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$size_type /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$getNow(void);
#line 92
static   void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$startAt(/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$size_type arg_0x7ea22350, /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$size_type arg_0x7ea224e0);
#line 105
static   /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$size_type /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$getAlarm(void);
#line 62
static   void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$stop(void);
# 72 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
static  void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$fired(void);
# 63 "/opt/tinyos-2.x/tos/lib/timer/AlarmToTimerC.nc"
enum /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$__nesc_unnamed4340 {
#line 63
  AlarmToTimerC$0$fired = 1U
};
#line 63
typedef int /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$__nesc_sillytask_fired[/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$fired];
#line 44
uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$m_dt;
bool /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$m_oneshot;

static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$start(uint32_t t0, uint32_t dt, bool oneshot);
#line 60
static inline  void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$stop(void);


static inline  void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$fired$runTask(void);






static inline   void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$fired(void);
#line 82
static inline  void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$startOneShotAt(uint32_t t0, uint32_t dt);


static inline  uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$getNow(void);
# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static   error_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$updateFromTimer$postTask(void);
# 125 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
static  uint32_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$getNow(void);
#line 118
static  void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$startOneShotAt(uint32_t arg_0x7ee609b8, uint32_t arg_0x7ee60b48);
#line 67
static  void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$stop(void);




static  void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$fired(
# 37 "/opt/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x7e8863a0);
#line 60
enum /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$__nesc_unnamed4341 {
#line 60
  VirtualizeTimerC$0$updateFromTimer = 2U
};
#line 60
typedef int /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$__nesc_sillytask_updateFromTimer[/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$updateFromTimer];
#line 42
enum /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$__nesc_unnamed4342 {

  VirtualizeTimerC$0$NUM_TIMERS = 5, 
  VirtualizeTimerC$0$END_OF_LIST = 255
};








#line 48
typedef struct /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$__nesc_unnamed4343 {

  uint32_t t0;
  uint32_t dt;
  bool isoneshot : 1;
  bool isrunning : 1;
  bool _reserved : 6;
} /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer_t;

/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$m_timers[/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$NUM_TIMERS];




static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$fireTimers(uint32_t now);
#line 88
static inline  void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$updateFromTimer$runTask(void);
#line 127
static inline  void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$fired(void);




static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$startTimer(uint8_t num, uint32_t t0, uint32_t dt, bool isoneshot);









static inline  void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startPeriodic(uint8_t num, uint32_t dt);




static inline  void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startOneShot(uint8_t num, uint32_t dt);




static inline  void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$stop(uint8_t num);
#line 192
static inline   void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$default$fired(uint8_t num);
# 47 "/opt/tinyos-2.x/tos/lib/timer/CounterToLocalTimeC.nc"
static inline   void /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC$0$Counter$overflow(void);
# 76 "/opt/tinyos-2.x/tos/sensorboards/homenet_sensor/sht11/SensirionSht11.nc"
static  error_t /*MotionDetectorC.SensirionSht11C.SensirionSht11ReaderP*/SensirionSht11ReaderP$0$Sht11Hum$measureHumidity(void);
# 63 "/opt/tinyos-2.x/tos/interfaces/Read.nc"
static  void /*MotionDetectorC.SensirionSht11C.SensirionSht11ReaderP*/SensirionSht11ReaderP$0$Humidity$readDone(error_t arg_0x7ee20010, /*MotionDetectorC.SensirionSht11C.SensirionSht11ReaderP*/SensirionSht11ReaderP$0$Humidity$val_t arg_0x7ee20198);
# 101 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static   error_t /*MotionDetectorC.SensirionSht11C.SensirionSht11ReaderP*/SensirionSht11ReaderP$0$TempResource$release(void);
#line 78
static   error_t /*MotionDetectorC.SensirionSht11C.SensirionSht11ReaderP*/SensirionSht11ReaderP$0$TempResource$request(void);
# 61 "/opt/tinyos-2.x/tos/sensorboards/homenet_sensor/sht11/SensirionSht11.nc"
static  error_t /*MotionDetectorC.SensirionSht11C.SensirionSht11ReaderP*/SensirionSht11ReaderP$0$Sht11Temp$measureTemperature(void);
# 101 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static   error_t /*MotionDetectorC.SensirionSht11C.SensirionSht11ReaderP*/SensirionSht11ReaderP$0$HumResource$release(void);
#line 78
static   error_t /*MotionDetectorC.SensirionSht11C.SensirionSht11ReaderP*/SensirionSht11ReaderP$0$HumResource$request(void);
# 63 "/opt/tinyos-2.x/tos/interfaces/Read.nc"
static  void /*MotionDetectorC.SensirionSht11C.SensirionSht11ReaderP*/SensirionSht11ReaderP$0$Temperature$readDone(error_t arg_0x7ee20010, /*MotionDetectorC.SensirionSht11C.SensirionSht11ReaderP*/SensirionSht11ReaderP$0$Temperature$val_t arg_0x7ee20198);
# 53 "/opt/tinyos-2.x/tos/sensorboards/homenet_sensor/sht11/SensirionSht11ReaderP.nc"
static inline  error_t /*MotionDetectorC.SensirionSht11C.SensirionSht11ReaderP*/SensirionSht11ReaderP$0$Temperature$read(void);




static inline  void /*MotionDetectorC.SensirionSht11C.SensirionSht11ReaderP*/SensirionSht11ReaderP$0$TempResource$granted(void);







static  void /*MotionDetectorC.SensirionSht11C.SensirionSht11ReaderP*/SensirionSht11ReaderP$0$Sht11Temp$measureTemperatureDone(error_t result, uint16_t val);




static inline  error_t /*MotionDetectorC.SensirionSht11C.SensirionSht11ReaderP*/SensirionSht11ReaderP$0$Humidity$read(void);




static inline  void /*MotionDetectorC.SensirionSht11C.SensirionSht11ReaderP*/SensirionSht11ReaderP$0$HumResource$granted(void);







static inline  void /*MotionDetectorC.SensirionSht11C.SensirionSht11ReaderP*/SensirionSht11ReaderP$0$Sht11Hum$measureHumidityDone(error_t result, uint16_t val);




static inline  void /*MotionDetectorC.SensirionSht11C.SensirionSht11ReaderP*/SensirionSht11ReaderP$0$Sht11Temp$resetDone(error_t result);
static inline  void /*MotionDetectorC.SensirionSht11C.SensirionSht11ReaderP*/SensirionSht11ReaderP$0$Sht11Temp$measureHumidityDone(error_t result, uint16_t val);
static inline  void /*MotionDetectorC.SensirionSht11C.SensirionSht11ReaderP*/SensirionSht11ReaderP$0$Sht11Temp$readStatusRegDone(error_t result, uint8_t val);
static inline  void /*MotionDetectorC.SensirionSht11C.SensirionSht11ReaderP*/SensirionSht11ReaderP$0$Sht11Temp$writeStatusRegDone(error_t result);

static inline  void /*MotionDetectorC.SensirionSht11C.SensirionSht11ReaderP*/SensirionSht11ReaderP$0$Sht11Hum$resetDone(error_t result);
static inline  void /*MotionDetectorC.SensirionSht11C.SensirionSht11ReaderP*/SensirionSht11ReaderP$0$Sht11Hum$measureTemperatureDone(error_t result, uint16_t val);
static inline  void /*MotionDetectorC.SensirionSht11C.SensirionSht11ReaderP*/SensirionSht11ReaderP$0$Sht11Hum$readStatusRegDone(error_t result, uint8_t val);
static inline  void /*MotionDetectorC.SensirionSht11C.SensirionSht11ReaderP*/SensirionSht11ReaderP$0$Sht11Hum$writeStatusRegDone(error_t result);
# 50 "/opt/tinyos-2.x/tos/interfaces/GpioInterrupt.nc"
static   error_t /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$InterruptDATA$disable(void);
#line 43
static   error_t /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$InterruptDATA$enableFallingEdge(void);
# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static   error_t /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$readSensor$postTask(void);
#line 56
static   error_t /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$signalStatusDone$postTask(void);
# 35 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static   void /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$CLOCK$makeOutput(void);
#line 29
static   void /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$CLOCK$set(void);
static   void /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$CLOCK$clr(void);
# 84 "/opt/tinyos-2.x/tos/sensorboards/homenet_sensor/sht11/SensirionSht11.nc"
static  void /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$SensirionSht11$measureHumidityDone(
# 54 "/opt/tinyos-2.x/tos/sensorboards/homenet_sensor/sht11/SensirionSht11LogicP.nc"
uint8_t arg_0x7e7c8200, 
# 84 "/opt/tinyos-2.x/tos/sensorboards/homenet_sensor/sht11/SensirionSht11.nc"
error_t arg_0x7e806b70, uint16_t arg_0x7e806d00);
#line 116
static  void /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$SensirionSht11$writeStatusRegDone(
# 54 "/opt/tinyos-2.x/tos/sensorboards/homenet_sensor/sht11/SensirionSht11LogicP.nc"
uint8_t arg_0x7e7c8200, 
# 116 "/opt/tinyos-2.x/tos/sensorboards/homenet_sensor/sht11/SensirionSht11.nc"
error_t arg_0x7e8033a0);
#line 100
static  void /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$SensirionSht11$readStatusRegDone(
# 54 "/opt/tinyos-2.x/tos/sensorboards/homenet_sensor/sht11/SensirionSht11LogicP.nc"
uint8_t arg_0x7e7c8200, 
# 100 "/opt/tinyos-2.x/tos/sensorboards/homenet_sensor/sht11/SensirionSht11.nc"
error_t arg_0x7e805730, uint8_t arg_0x7e8058b8);
#line 54
static  void /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$SensirionSht11$resetDone(
# 54 "/opt/tinyos-2.x/tos/sensorboards/homenet_sensor/sht11/SensirionSht11LogicP.nc"
uint8_t arg_0x7e7c8200, 
# 54 "/opt/tinyos-2.x/tos/sensorboards/homenet_sensor/sht11/SensirionSht11.nc"
error_t arg_0x7e807820);
#line 69
static  void /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$SensirionSht11$measureTemperatureDone(
# 54 "/opt/tinyos-2.x/tos/sensorboards/homenet_sensor/sht11/SensirionSht11LogicP.nc"
uint8_t arg_0x7e7c8200, 
# 69 "/opt/tinyos-2.x/tos/sensorboards/homenet_sensor/sht11/SensirionSht11.nc"
error_t arg_0x7e8060f8, uint16_t arg_0x7e806288);
# 33 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static   void /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$DATA$makeInput(void);
#line 32
static   bool /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$DATA$get(void);


static   void /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$DATA$makeOutput(void);
#line 29
static   void /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$DATA$set(void);
static   void /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$DATA$clr(void);
# 62 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
static  void /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$Timer$startOneShot(uint32_t arg_0x7ee62ca8);




static  void /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$Timer$stop(void);
# 102 "/opt/tinyos-2.x/tos/sensorboards/homenet_sensor/sht11/SensirionSht11LogicP.nc"
enum /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$__nesc_unnamed4344 {
#line 102
  SensirionSht11LogicP$0$readSensor = 3U
};
#line 102
typedef int /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$__nesc_sillytask_readSensor[/*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$readSensor];
enum /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$__nesc_unnamed4345 {
#line 103
  SensirionSht11LogicP$0$signalStatusDone = 4U
};
#line 103
typedef int /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$__nesc_sillytask_signalStatusDone[/*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$signalStatusDone];
#line 72
#line 66
typedef enum /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$__nesc_unnamed4346 {
  SensirionSht11LogicP$0$CMD_MEASURE_TEMPERATURE = 0x3, 
  SensirionSht11LogicP$0$CMD_MEASURE_HUMIDITY = 0x5, 
  SensirionSht11LogicP$0$CMD_READ_STATUS = 0x7, 
  SensirionSht11LogicP$0$CMD_WRITE_STATUS = 0x6, 
  SensirionSht11LogicP$0$CMD_SOFT_RESET = 0x1E
} /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$sht_cmd_t;

enum /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$__nesc_unnamed4347 {
  SensirionSht11LogicP$0$TIMEOUT_RESET = 11, 
  SensirionSht11LogicP$0$TIMEOUT_14BIT = 250, 
  SensirionSht11LogicP$0$TIMEOUT_12BIT = 250, 
  SensirionSht11LogicP$0$TIMEOUT_8BIT = 250
};

bool /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$on = TRUE;
bool /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$busy = FALSE;
uint8_t /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$status = 0;
/*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$sht_cmd_t /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$cmd;
uint8_t /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$newStatus;
bool /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$writeFail = FALSE;

uint8_t /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$currentClient;

static error_t /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$performCommand(void);
static inline void /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$initPins(void);
static inline void /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$resetDevice(void);
static inline void /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$transmissionStart(void);
static inline void /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$sendCommand(uint8_t _cmd);
static void /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$writeByte(uint8_t byte);
static error_t /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$waitForResponse(void);
static inline void /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$enableInterrupt(void);
static uint8_t /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$readByte(void);
static inline void /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$ack(void);
static void /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$endTransmission(void);
#line 113
static inline  error_t /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$SensirionSht11$measureTemperature(uint8_t client);







static inline  error_t /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$SensirionSht11$measureHumidity(uint8_t client);
#line 149
static error_t /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$performCommand(void);
#line 220
static inline void /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$initPins(void);







static inline void /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$resetDevice(void);










static inline void /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$transmissionStart(void);
#line 251
static inline void /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$sendCommand(uint8_t _cmd);



static void /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$writeByte(uint8_t byte);
#line 268
static error_t /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$waitForResponse(void);
#line 281
static inline void /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$enableInterrupt(void);





static inline  void /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$Timer$fired(void);
#line 315
static inline   void /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$InterruptDATA$fired(void);




static inline  void /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$readSensor$runTask(void);
#line 355
static uint8_t /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$readByte(void);
#line 372
static inline void /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$ack(void);








static void /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$endTransmission(void);






static inline  void /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$signalStatusDone$runTask(void);
#line 406
static inline   void /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$SensirionSht11$default$resetDone(uint8_t client, error_t result);
static inline   void /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$SensirionSht11$default$measureTemperatureDone(uint8_t client, error_t result, uint16_t val);
static inline   void /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$SensirionSht11$default$measureHumidityDone(uint8_t client, error_t result, uint16_t val);
static inline   void /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$SensirionSht11$default$readStatusRegDone(uint8_t client, error_t result, uint8_t val);
static inline   void /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$SensirionSht11$default$writeStatusRegDone(uint8_t client, error_t result);
# 88 "/opt/tinyos-2.x/tos/interfaces/SplitControl.nc"
static  void HplSensirionSht11P$SplitControl$startDone(error_t arg_0x7ee01578);
#line 110
static  void HplSensirionSht11P$SplitControl$stopDone(error_t arg_0x7ee000f8);
# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static   error_t HplSensirionSht11P$stopTask$postTask(void);
# 33 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static   void HplSensirionSht11P$SCK$makeInput(void);
#line 30
static   void HplSensirionSht11P$SCK$clr(void);


static   void HplSensirionSht11P$DATA$makeInput(void);
#line 30
static   void HplSensirionSht11P$DATA$clr(void);
# 62 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
static  void HplSensirionSht11P$Timer$startOneShot(uint32_t arg_0x7ee62ca8);
# 49 "/opt/tinyos-2.x/tos/sensorboards/homenet_sensor/sht11/HplSensirionSht11P.nc"
enum HplSensirionSht11P$__nesc_unnamed4348 {
#line 49
  HplSensirionSht11P$stopTask = 5U
};
#line 49
typedef int HplSensirionSht11P$__nesc_sillytask_stopTask[HplSensirionSht11P$stopTask];

static inline  error_t HplSensirionSht11P$SplitControl$start(void);




static inline  void HplSensirionSht11P$Timer$fired(void);



static inline  error_t HplSensirionSht11P$SplitControl$stop(void);








static inline  void HplSensirionSht11P$stopTask$runTask(void);
# 41 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptSig.nc"
static   void HplAtm128InterruptSigP$IntSig6$fired(void);
#line 41
static   void HplAtm128InterruptSigP$IntSig1$fired(void);
#line 41
static   void HplAtm128InterruptSigP$IntSig4$fired(void);
#line 41
static   void HplAtm128InterruptSigP$IntSig7$fired(void);
#line 41
static   void HplAtm128InterruptSigP$IntSig2$fired(void);
#line 41
static   void HplAtm128InterruptSigP$IntSig5$fired(void);
#line 41
static   void HplAtm128InterruptSigP$IntSig0$fired(void);
#line 41
static   void HplAtm128InterruptSigP$IntSig3$fired(void);
# 46 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptSigP.nc"
void __vector_1(void) __attribute((signal))   ;




void __vector_2(void) __attribute((signal))   ;




void __vector_3(void) __attribute((signal))   ;




void __vector_4(void) __attribute((signal))   ;




void __vector_5(void) __attribute((signal))   ;




void __vector_6(void) __attribute((signal))   ;




void __vector_7(void) __attribute((signal))   ;




void __vector_8(void) __attribute((signal))   ;
# 64 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static   void /*HplAtm128InterruptC.IntPin0*/HplAtm128InterruptPinP$0$Irq$fired(void);
# 61 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline   void /*HplAtm128InterruptC.IntPin0*/HplAtm128InterruptPinP$0$IrqSignal$fired(void);

static inline    void /*HplAtm128InterruptC.IntPin0*/HplAtm128InterruptPinP$0$Irq$default$fired(void);
# 64 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static   void /*HplAtm128InterruptC.IntPin1*/HplAtm128InterruptPinP$1$Irq$fired(void);
# 41 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static __inline   void /*HplAtm128InterruptC.IntPin1*/HplAtm128InterruptPinP$1$Irq$clear(void);
static __inline   void /*HplAtm128InterruptC.IntPin1*/HplAtm128InterruptPinP$1$Irq$enable(void);
static __inline   void /*HplAtm128InterruptC.IntPin1*/HplAtm128InterruptPinP$1$Irq$disable(void);



static __inline   void /*HplAtm128InterruptC.IntPin1*/HplAtm128InterruptPinP$1$Irq$edge(bool low_to_high);
#line 61
static inline   void /*HplAtm128InterruptC.IntPin1*/HplAtm128InterruptPinP$1$IrqSignal$fired(void);
# 64 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static   void /*HplAtm128InterruptC.IntPin2*/HplAtm128InterruptPinP$2$Irq$fired(void);
# 61 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline   void /*HplAtm128InterruptC.IntPin2*/HplAtm128InterruptPinP$2$IrqSignal$fired(void);

static inline    void /*HplAtm128InterruptC.IntPin2*/HplAtm128InterruptPinP$2$Irq$default$fired(void);
# 64 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static   void /*HplAtm128InterruptC.IntPin3*/HplAtm128InterruptPinP$3$Irq$fired(void);
# 61 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline   void /*HplAtm128InterruptC.IntPin3*/HplAtm128InterruptPinP$3$IrqSignal$fired(void);

static inline    void /*HplAtm128InterruptC.IntPin3*/HplAtm128InterruptPinP$3$Irq$default$fired(void);
# 64 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static   void /*HplAtm128InterruptC.IntPin4*/HplAtm128InterruptPinP$4$Irq$fired(void);
# 61 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline   void /*HplAtm128InterruptC.IntPin4*/HplAtm128InterruptPinP$4$IrqSignal$fired(void);

static inline    void /*HplAtm128InterruptC.IntPin4*/HplAtm128InterruptPinP$4$Irq$default$fired(void);
# 64 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static   void /*HplAtm128InterruptC.IntPin5*/HplAtm128InterruptPinP$5$Irq$fired(void);
# 61 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline   void /*HplAtm128InterruptC.IntPin5*/HplAtm128InterruptPinP$5$IrqSignal$fired(void);

static inline    void /*HplAtm128InterruptC.IntPin5*/HplAtm128InterruptPinP$5$Irq$default$fired(void);
# 64 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static   void /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP$6$Irq$fired(void);
# 41 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static __inline   void /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP$6$Irq$clear(void);
static __inline   void /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP$6$Irq$enable(void);
static __inline   void /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP$6$Irq$disable(void);



static __inline   void /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP$6$Irq$edge(bool low_to_high);
#line 61
static inline   void /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP$6$IrqSignal$fired(void);
# 64 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static   void /*HplAtm128InterruptC.IntPin7*/HplAtm128InterruptPinP$7$Irq$fired(void);
# 61 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline   void /*HplAtm128InterruptC.IntPin7*/HplAtm128InterruptPinP$7$IrqSignal$fired(void);

static inline    void /*HplAtm128InterruptC.IntPin7*/HplAtm128InterruptPinP$7$Irq$default$fired(void);
# 45 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static   void /*HplSensirionSht11C.InterruptDATAC*/Atm128GpioInterruptC$0$Atm128Interrupt$clear(void);
#line 40
static   void /*HplSensirionSht11C.InterruptDATAC*/Atm128GpioInterruptC$0$Atm128Interrupt$disable(void);
#line 59
static   void /*HplSensirionSht11C.InterruptDATAC*/Atm128GpioInterruptC$0$Atm128Interrupt$edge(bool arg_0x7e728c60);
#line 35
static   void /*HplSensirionSht11C.InterruptDATAC*/Atm128GpioInterruptC$0$Atm128Interrupt$enable(void);
# 57 "/opt/tinyos-2.x/tos/interfaces/GpioInterrupt.nc"
static   void /*HplSensirionSht11C.InterruptDATAC*/Atm128GpioInterruptC$0$Interrupt$fired(void);
# 15 "/opt/tinyos-2.x/tos/chips/atm128/pins/Atm128GpioInterruptC.nc"
static error_t /*HplSensirionSht11C.InterruptDATAC*/Atm128GpioInterruptC$0$enable(bool rising);
#line 29
static inline   error_t /*HplSensirionSht11C.InterruptDATAC*/Atm128GpioInterruptC$0$Interrupt$enableFallingEdge(void);



static inline   error_t /*HplSensirionSht11C.InterruptDATAC*/Atm128GpioInterruptC$0$Interrupt$disable(void);




static inline   void /*HplSensirionSht11C.InterruptDATAC*/Atm128GpioInterruptC$0$Atm128Interrupt$fired(void);
# 39 "/opt/tinyos-2.x/tos/system/FcfsResourceQueueC.nc"
enum /*HplSensirionSht11C.Arbiter.Queue*/FcfsResourceQueueC$0$__nesc_unnamed4349 {
#line 39
  FcfsResourceQueueC$0$NO_ENTRY = 0xFF
};
uint8_t /*HplSensirionSht11C.Arbiter.Queue*/FcfsResourceQueueC$0$resQ[2U];
uint8_t /*HplSensirionSht11C.Arbiter.Queue*/FcfsResourceQueueC$0$qHead = /*HplSensirionSht11C.Arbiter.Queue*/FcfsResourceQueueC$0$NO_ENTRY;
uint8_t /*HplSensirionSht11C.Arbiter.Queue*/FcfsResourceQueueC$0$qTail = /*HplSensirionSht11C.Arbiter.Queue*/FcfsResourceQueueC$0$NO_ENTRY;

static inline  error_t /*HplSensirionSht11C.Arbiter.Queue*/FcfsResourceQueueC$0$Init$init(void);




static inline   bool /*HplSensirionSht11C.Arbiter.Queue*/FcfsResourceQueueC$0$FcfsQueue$isEmpty(void);



static inline   bool /*HplSensirionSht11C.Arbiter.Queue*/FcfsResourceQueueC$0$FcfsQueue$isEnqueued(resource_client_id_t id);



static inline   resource_client_id_t /*HplSensirionSht11C.Arbiter.Queue*/FcfsResourceQueueC$0$FcfsQueue$dequeue(void);
#line 72
static inline   error_t /*HplSensirionSht11C.Arbiter.Queue*/FcfsResourceQueueC$0$FcfsQueue$enqueue(resource_client_id_t id);
# 43 "/opt/tinyos-2.x/tos/interfaces/ResourceRequested.nc"
static   void /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP$0$ResourceRequested$requested(
# 54 "/opt/tinyos-2.x/tos/system/ArbiterP.nc"
uint8_t arg_0x7e690f10);
# 55 "/opt/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
static   void /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP$0$ResourceConfigure$unconfigure(
# 59 "/opt/tinyos-2.x/tos/system/ArbiterP.nc"
uint8_t arg_0x7e6890f8);
# 49 "/opt/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
static   void /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP$0$ResourceConfigure$configure(
# 59 "/opt/tinyos-2.x/tos/system/ArbiterP.nc"
uint8_t arg_0x7e6890f8);
# 69 "/opt/tinyos-2.x/tos/interfaces/ResourceQueue.nc"
static   error_t /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP$0$Queue$enqueue(resource_client_id_t arg_0x7e6a18b0);
#line 43
static   bool /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP$0$Queue$isEmpty(void);
#line 60
static   resource_client_id_t /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP$0$Queue$dequeue(void);
# 73 "/opt/tinyos-2.x/tos/interfaces/ResourceController.nc"
static   void /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP$0$ResourceController$requested(void);
#line 46
static   void /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP$0$ResourceController$granted(void);
# 92 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static  void /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP$0$Resource$granted(
# 53 "/opt/tinyos-2.x/tos/system/ArbiterP.nc"
uint8_t arg_0x7e6905d0);
# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static   error_t /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP$0$grantedTask$postTask(void);
# 73 "/opt/tinyos-2.x/tos/system/ArbiterP.nc"
enum /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP$0$__nesc_unnamed4350 {
#line 73
  ArbiterP$0$grantedTask = 6U
};
#line 73
typedef int /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP$0$__nesc_sillytask_grantedTask[/*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP$0$grantedTask];
#line 66
enum /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP$0$__nesc_unnamed4351 {
#line 66
  ArbiterP$0$RES_CONTROLLED, ArbiterP$0$RES_GRANTING, ArbiterP$0$RES_IMM_GRANTING, ArbiterP$0$RES_BUSY
};
#line 67
enum /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP$0$__nesc_unnamed4352 {
#line 67
  ArbiterP$0$CONTROLLER_ID = 2U
};
uint8_t /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP$0$state = /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP$0$RES_CONTROLLED;
 uint8_t /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP$0$resId = /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP$0$CONTROLLER_ID;
 uint8_t /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP$0$reqResId;



static   error_t /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP$0$Resource$request(uint8_t id);
#line 106
static   error_t /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP$0$Resource$release(uint8_t id);
#line 125
static inline   error_t /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP$0$ResourceController$release(void);
#line 172
static inline  void /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP$0$grantedTask$runTask(void);
#line 184
static inline   void /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP$0$Resource$default$granted(uint8_t id);

static inline    void /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP$0$ResourceRequested$default$requested(uint8_t id);
#line 198
static inline    void /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP$0$ResourceConfigure$default$configure(uint8_t id);

static inline    void /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP$0$ResourceConfigure$default$unconfigure(uint8_t id);
# 79 "/opt/tinyos-2.x/tos/interfaces/SplitControl.nc"
static  error_t /*HplSensirionSht11C.SplitControlPowerManagerC.PowerManager*/PowerManagerP$0$SplitControl$start(void);
#line 102
static  error_t /*HplSensirionSht11C.SplitControlPowerManagerC.PowerManager*/PowerManagerP$0$SplitControl$stop(void);
# 52 "/opt/tinyos-2.x/tos/lib/power/PowerDownCleanup.nc"
static   void /*HplSensirionSht11C.SplitControlPowerManagerC.PowerManager*/PowerManagerP$0$PowerDownCleanup$cleanup(void);
# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static   error_t /*HplSensirionSht11C.SplitControlPowerManagerC.PowerManager*/PowerManagerP$0$stopTask$postTask(void);
# 56 "/opt/tinyos-2.x/tos/interfaces/ResourceController.nc"
static   error_t /*HplSensirionSht11C.SplitControlPowerManagerC.PowerManager*/PowerManagerP$0$ResourceController$release(void);
# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static   error_t /*HplSensirionSht11C.SplitControlPowerManagerC.PowerManager*/PowerManagerP$0$startTask$postTask(void);
# 73 "/opt/tinyos-2.x/tos/interfaces/StdControl.nc"
static  error_t /*HplSensirionSht11C.SplitControlPowerManagerC.PowerManager*/PowerManagerP$0$StdControl$start(void);








static  error_t /*HplSensirionSht11C.SplitControlPowerManagerC.PowerManager*/PowerManagerP$0$StdControl$stop(void);
# 63 "/opt/tinyos-2.x/tos/lib/power/PowerManagerP.nc"
enum /*HplSensirionSht11C.SplitControlPowerManagerC.PowerManager*/PowerManagerP$0$__nesc_unnamed4353 {
#line 63
  PowerManagerP$0$startTask = 7U
};
#line 63
typedef int /*HplSensirionSht11C.SplitControlPowerManagerC.PowerManager*/PowerManagerP$0$__nesc_sillytask_startTask[/*HplSensirionSht11C.SplitControlPowerManagerC.PowerManager*/PowerManagerP$0$startTask];




enum /*HplSensirionSht11C.SplitControlPowerManagerC.PowerManager*/PowerManagerP$0$__nesc_unnamed4354 {
#line 68
  PowerManagerP$0$stopTask = 8U
};
#line 68
typedef int /*HplSensirionSht11C.SplitControlPowerManagerC.PowerManager*/PowerManagerP$0$__nesc_sillytask_stopTask[/*HplSensirionSht11C.SplitControlPowerManagerC.PowerManager*/PowerManagerP$0$stopTask];
#line 60
 bool /*HplSensirionSht11C.SplitControlPowerManagerC.PowerManager*/PowerManagerP$0$stopping = FALSE;
 bool /*HplSensirionSht11C.SplitControlPowerManagerC.PowerManager*/PowerManagerP$0$requested = FALSE;

static inline  void /*HplSensirionSht11C.SplitControlPowerManagerC.PowerManager*/PowerManagerP$0$startTask$runTask(void);




static inline  void /*HplSensirionSht11C.SplitControlPowerManagerC.PowerManager*/PowerManagerP$0$stopTask$runTask(void);





static inline   void /*HplSensirionSht11C.SplitControlPowerManagerC.PowerManager*/PowerManagerP$0$ResourceController$requested(void);









static inline   error_t /*HplSensirionSht11C.SplitControlPowerManagerC.PowerManager*/PowerManagerP$0$StdControl$default$start(void);







static inline  void /*HplSensirionSht11C.SplitControlPowerManagerC.PowerManager*/PowerManagerP$0$SplitControl$startDone(error_t error);



static inline   void /*HplSensirionSht11C.SplitControlPowerManagerC.PowerManager*/PowerManagerP$0$ResourceController$granted(void);




static inline  void /*HplSensirionSht11C.SplitControlPowerManagerC.PowerManager*/PowerManagerP$0$SplitControl$stopDone(error_t error);










static inline   error_t /*HplSensirionSht11C.SplitControlPowerManagerC.PowerManager*/PowerManagerP$0$StdControl$default$stop(void);







static inline    void /*HplSensirionSht11C.SplitControlPowerManagerC.PowerManager*/PowerManagerP$0$PowerDownCleanup$default$cleanup(void);
# 63 "/opt/tinyos-2.x/tos/interfaces/Read.nc"
static  void /*MotionDetectorC.PhotoSensorC.DemoChannel.ADC_ShiftM*/ADC_ShiftM$0$Read$readDone(error_t arg_0x7ee20010, /*MotionDetectorC.PhotoSensorC.DemoChannel.ADC_ShiftM*/ADC_ShiftM$0$Read$val_t arg_0x7ee20198);
#line 55
static  error_t /*MotionDetectorC.PhotoSensorC.DemoChannel.ADC_ShiftM*/ADC_ShiftM$0$subRead$read(void);
# 33 "/opt/tinyos-2.x/tos/sensorboards/homenet_sensor/ADC_ShiftM.nc"
static inline  error_t /*MotionDetectorC.PhotoSensorC.DemoChannel.ADC_ShiftM*/ADC_ShiftM$0$Read$read(void);



static inline  void /*MotionDetectorC.PhotoSensorC.DemoChannel.ADC_ShiftM*/ADC_ShiftM$0$subRead$readDone(error_t result, uint16_t val);
# 110 "/opt/tinyos-2.x/tos/chips/atm128/adc/Atm128AdcMultiple.nc"
static   bool Atm128AdcP$Atm128AdcMultiple$dataReady(uint16_t arg_0x7e5d0a68, bool arg_0x7e5d0bf0, uint8_t arg_0x7e5d0d78, 
uint8_t *arg_0x7e5cb010, uint8_t *arg_0x7e5cb1c0);
# 72 "/opt/tinyos-2.x/tos/chips/atm128/adc/Atm128AdcSingle.nc"
static   void Atm128AdcP$Atm128AdcSingle$dataReady(uint16_t arg_0x7e5d68b8, bool arg_0x7e5d6a40);
# 44 "/opt/tinyos-2.x/tos/chips/atm128/adc/HplAtm128Adc.nc"
static   Atm128Admux_t Atm128AdcP$HplAtm128Adc$getAdmux(void);
#line 73
static   void Atm128AdcP$HplAtm128Adc$enableAdc(void);
#line 49
static   void Atm128AdcP$HplAtm128Adc$setAdmux(Atm128Admux_t arg_0x7e5c0da8);
#line 141
static   bool Atm128AdcP$HplAtm128Adc$cancel(void);
#line 77
static   void Atm128AdcP$HplAtm128Adc$disableAdc(void);








static   void Atm128AdcP$HplAtm128Adc$disableInterruption(void);
#line 60
static   void Atm128AdcP$HplAtm128Adc$setAdcsra(Atm128Adcsra_t arg_0x7e5ba6f8);
# 53 "/opt/tinyos-2.x/tos/chips/atm128/timer/Atm128Calibrate.nc"
static   uint8_t Atm128AdcP$Atm128Calibrate$adcPrescaler(void);
# 82 "/opt/tinyos-2.x/tos/chips/atm128/adc/Atm128AdcP.nc"
#line 78
struct Atm128AdcP$__nesc_unnamed4355 {
  bool multiple : 1;
  bool precise : 1;
  uint8_t channel : 5;
} Atm128AdcP$f;
#line 82
#line 78
struct Atm128AdcP$__nesc_unnamed4355 



Atm128AdcP$nextF;

static inline  error_t Atm128AdcP$Init$init(void);
#line 104
static inline   error_t Atm128AdcP$AsyncStdControl$start(void);




static inline   error_t Atm128AdcP$AsyncStdControl$stop(void);









static __inline bool Atm128AdcP$isPrecise(Atm128Admux_t admux, uint8_t channel, uint8_t refVoltage);




static inline   void Atm128AdcP$HplAtm128Adc$dataReady(uint16_t data);
#line 184
static inline void Atm128AdcP$getData(uint8_t channel, uint8_t refVoltage, bool leftJustify, uint8_t prescaler);
#line 208
static inline   bool Atm128AdcP$Atm128AdcSingle$getData(uint8_t channel, uint8_t refVoltage, 
bool leftJustify, uint8_t prescaler);
#line 242
static inline    bool Atm128AdcP$Atm128AdcMultiple$default$dataReady(uint16_t data, bool precise, uint8_t channel, 
uint8_t *newChannel, uint8_t *newRefVoltage);
# 147 "/opt/tinyos-2.x/tos/chips/atm128/adc/HplAtm128Adc.nc"
static   void HplAtm128AdcP$HplAtm128Adc$dataReady(uint16_t arg_0x7e5b5120);
# 44 "/opt/tinyos-2.x/tos/interfaces/McuPowerState.nc"
static   void HplAtm128AdcP$McuPowerState$update(void);
# 41 "/opt/tinyos-2.x/tos/chips/atm128/adc/HplAtm128AdcP.nc"
static inline   Atm128Admux_t HplAtm128AdcP$HplAtm128Adc$getAdmux(void);


static inline   Atm128Adcsra_t HplAtm128AdcP$HplAtm128Adc$getAdcsra(void);


static inline   uint16_t HplAtm128AdcP$HplAtm128Adc$getValue(void);



static inline uint8_t HplAtm128AdcP$Admux2int(Atm128Admux_t x);
static inline uint8_t HplAtm128AdcP$Adcsra2int(Atm128Adcsra_t x);


static inline   void HplAtm128AdcP$HplAtm128Adc$setAdmux(Atm128Admux_t x);


static inline   void HplAtm128AdcP$HplAtm128Adc$setAdcsra(Atm128Adcsra_t x);
#line 71
static inline   void HplAtm128AdcP$HplAtm128Adc$enableAdc(void);



static inline   void HplAtm128AdcP$HplAtm128Adc$disableAdc(void);




static inline   void HplAtm128AdcP$HplAtm128Adc$disableInterruption(void);
#line 101
void __vector_21(void) __attribute((signal))   ;








static inline   bool HplAtm128AdcP$HplAtm128Adc$cancel(void);
# 39 "/opt/tinyos-2.x/tos/system/RoundRobinResourceQueueC.nc"
enum /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC$0$__nesc_unnamed4356 {
#line 39
  RoundRobinResourceQueueC$0$NO_ENTRY = 0xFF
};
uint8_t /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC$0$resQ[(4U - 1) / 8 + 1];
uint8_t /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC$0$last = 0;

static inline void /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC$0$clearEntry(uint8_t id);



static inline  error_t /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC$0$Init$init(void);




static inline   bool /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC$0$RoundRobinQueue$isEmpty(void);








static   bool /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC$0$RoundRobinQueue$isEnqueued(resource_client_id_t id);



static inline   resource_client_id_t /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC$0$RoundRobinQueue$dequeue(void);
#line 84
static inline   error_t /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC$0$RoundRobinQueue$enqueue(resource_client_id_t id);
# 43 "/opt/tinyos-2.x/tos/interfaces/ResourceRequested.nc"
static   void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$1$ResourceRequested$requested(
# 54 "/opt/tinyos-2.x/tos/system/ArbiterP.nc"
uint8_t arg_0x7e690f10);
# 55 "/opt/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
static   void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$1$ResourceConfigure$unconfigure(
# 59 "/opt/tinyos-2.x/tos/system/ArbiterP.nc"
uint8_t arg_0x7e6890f8);
# 49 "/opt/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
static   void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$1$ResourceConfigure$configure(
# 59 "/opt/tinyos-2.x/tos/system/ArbiterP.nc"
uint8_t arg_0x7e6890f8);
# 69 "/opt/tinyos-2.x/tos/interfaces/ResourceQueue.nc"
static   error_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$1$Queue$enqueue(resource_client_id_t arg_0x7e6a18b0);
#line 43
static   bool /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$1$Queue$isEmpty(void);
#line 60
static   resource_client_id_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$1$Queue$dequeue(void);
# 73 "/opt/tinyos-2.x/tos/interfaces/ResourceController.nc"
static   void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$1$ResourceController$requested(void);
#line 46
static   void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$1$ResourceController$granted(void);
# 92 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static  void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$1$Resource$granted(
# 53 "/opt/tinyos-2.x/tos/system/ArbiterP.nc"
uint8_t arg_0x7e6905d0);
# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static   error_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$1$grantedTask$postTask(void);
# 73 "/opt/tinyos-2.x/tos/system/ArbiterP.nc"
enum /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$1$__nesc_unnamed4357 {
#line 73
  ArbiterP$1$grantedTask = 9U
};
#line 73
typedef int /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$1$__nesc_sillytask_grantedTask[/*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$1$grantedTask];
#line 66
enum /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$1$__nesc_unnamed4358 {
#line 66
  ArbiterP$1$RES_CONTROLLED, ArbiterP$1$RES_GRANTING, ArbiterP$1$RES_IMM_GRANTING, ArbiterP$1$RES_BUSY
};
#line 67
enum /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$1$__nesc_unnamed4359 {
#line 67
  ArbiterP$1$CONTROLLER_ID = 4U
};
uint8_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$1$state = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$1$RES_CONTROLLED;
 uint8_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$1$resId = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$1$CONTROLLER_ID;
 uint8_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$1$reqResId;



static   error_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$1$Resource$request(uint8_t id);
#line 106
static   error_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$1$Resource$release(uint8_t id);
#line 125
static inline   error_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$1$ResourceController$release(void);
#line 172
static inline  void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$1$grantedTask$runTask(void);
#line 184
static inline   void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$1$Resource$default$granted(uint8_t id);

static inline    void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$1$ResourceRequested$default$requested(uint8_t id);
#line 198
static inline    void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$1$ResourceConfigure$default$configure(uint8_t id);

static inline    void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$1$ResourceConfigure$default$unconfigure(uint8_t id);
# 52 "/opt/tinyos-2.x/tos/lib/power/PowerDownCleanup.nc"
static   void /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP$0$PowerDownCleanup$cleanup(void);
# 56 "/opt/tinyos-2.x/tos/interfaces/ResourceController.nc"
static   error_t /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP$0$ResourceController$release(void);
# 73 "/opt/tinyos-2.x/tos/interfaces/AsyncStdControl.nc"
static   error_t /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP$0$AsyncStdControl$start(void);








static   error_t /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP$0$AsyncStdControl$stop(void);
# 59 "/opt/tinyos-2.x/tos/lib/power/AsyncPowerManagerP.nc"
static inline   void /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP$0$ResourceController$requested(void);









static inline   void /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP$0$ResourceController$granted(void);




static inline    void /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP$0$PowerDownCleanup$default$cleanup(void);
# 63 "/opt/tinyos-2.x/tos/interfaces/Read.nc"
static  void AdcP$Read$readDone(
# 48 "/opt/tinyos-2.x/tos/chips/atm128/adc/AdcP.nc"
uint8_t arg_0x7e52b7d8, 
# 63 "/opt/tinyos-2.x/tos/interfaces/Read.nc"
error_t arg_0x7ee20010, AdcP$Read$val_t arg_0x7ee20198);
# 65 "/opt/tinyos-2.x/tos/interfaces/ReadNow.nc"
static   void AdcP$ReadNow$readDone(
# 49 "/opt/tinyos-2.x/tos/chips/atm128/adc/AdcP.nc"
uint8_t arg_0x7e52a628, 
# 65 "/opt/tinyos-2.x/tos/interfaces/ReadNow.nc"
error_t arg_0x7e5e6b10, AdcP$ReadNow$val_t arg_0x7e5e6c98);
# 32 "/opt/tinyos-2.x/tos/chips/atm128/adc/Atm128AdcConfig.nc"
static   uint8_t AdcP$Atm128AdcConfig$getRefVoltage(
# 53 "/opt/tinyos-2.x/tos/chips/atm128/adc/AdcP.nc"
uint8_t arg_0x7e5289c0);
# 25 "/opt/tinyos-2.x/tos/chips/atm128/adc/Atm128AdcConfig.nc"
static   uint8_t AdcP$Atm128AdcConfig$getChannel(
# 53 "/opt/tinyos-2.x/tos/chips/atm128/adc/AdcP.nc"
uint8_t arg_0x7e5289c0);
# 39 "/opt/tinyos-2.x/tos/chips/atm128/adc/Atm128AdcConfig.nc"
static   uint8_t AdcP$Atm128AdcConfig$getPrescaler(
# 53 "/opt/tinyos-2.x/tos/chips/atm128/adc/AdcP.nc"
uint8_t arg_0x7e5289c0);
# 61 "/opt/tinyos-2.x/tos/chips/atm128/adc/Atm128AdcSingle.nc"
static   bool AdcP$Atm128AdcSingle$getData(uint8_t arg_0x7e5d7868, uint8_t arg_0x7e5d79f8, 
bool arg_0x7e5d7b98, uint8_t arg_0x7e5d7d28);
# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static   error_t AdcP$acquiredData$postTask(void);
# 103 "/opt/tinyos-2.x/tos/chips/atm128/adc/AdcP.nc"
enum AdcP$__nesc_unnamed4360 {
#line 103
  AdcP$acquiredData = 10U
};
#line 103
typedef int AdcP$__nesc_sillytask_acquiredData[AdcP$acquiredData];
#line 57
enum AdcP$__nesc_unnamed4361 {
  AdcP$IDLE, 
  AdcP$ACQUIRE_DATA, 
  AdcP$ACQUIRE_DATA_NOW
};




 uint8_t AdcP$state;
 uint8_t AdcP$client;
 uint16_t AdcP$val;

static inline uint8_t AdcP$channel(void);



static inline uint8_t AdcP$refVoltage(void);



static inline uint8_t AdcP$prescaler(void);



static void AdcP$sample(void);



static inline error_t AdcP$startGet(uint8_t newState, uint8_t newClient);








static inline  error_t AdcP$Read$read(uint8_t c);







static inline  void AdcP$acquiredData$runTask(void);




static inline   void AdcP$Atm128AdcSingle$dataReady(uint16_t data, bool precise);
#line 137
static inline    uint8_t AdcP$Atm128AdcConfig$default$getChannel(uint8_t c);



static inline    uint8_t AdcP$Atm128AdcConfig$default$getRefVoltage(uint8_t c);



static inline    uint8_t AdcP$Atm128AdcConfig$default$getPrescaler(uint8_t c);




static inline    void AdcP$ReadNow$default$readDone(uint8_t c, error_t e, uint16_t d);
# 63 "/opt/tinyos-2.x/tos/interfaces/Read.nc"
static  void /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$Read$readDone(
# 24 "/opt/tinyos-2.x/tos/system/ArbitratedReadC.nc"
uint8_t arg_0x7e510550, 
# 63 "/opt/tinyos-2.x/tos/interfaces/Read.nc"
error_t arg_0x7ee20010, /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$Read$val_t arg_0x7ee20198);
#line 55
static  error_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$Service$read(
# 26 "/opt/tinyos-2.x/tos/system/ArbitratedReadC.nc"
uint8_t arg_0x7e50b3f8);
# 101 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static   error_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$Resource$release(
# 27 "/opt/tinyos-2.x/tos/system/ArbitratedReadC.nc"
uint8_t arg_0x7e50a188);
# 78 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static   error_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$Resource$request(
# 27 "/opt/tinyos-2.x/tos/system/ArbitratedReadC.nc"
uint8_t arg_0x7e50a188);



static inline  error_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$Read$read(uint8_t client);



static inline  void /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$Resource$granted(uint8_t client);



static inline  void /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$Service$readDone(uint8_t client, error_t result, /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$width_t data);




static inline    error_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$Resource$default$request(uint8_t client);


static inline    error_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$Resource$default$release(uint8_t client);
static inline   void /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$Read$default$readDone(uint8_t client, error_t result, /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$width_t data);
# 35 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static   void PhotoP$PhotoPin$makeOutput(void);
#line 29
static   void PhotoP$PhotoPin$set(void);
static   void PhotoP$PhotoPin$clr(void);
# 31 "/opt/tinyos-2.x/tos/platforms/homenet/ZigbexBusAdc.nc"
static   uint8_t PhotoP$PhotoAdc$getChannel(void);
# 41 "/opt/tinyos-2.x/tos/sensorboards/homenet_sensor/PhotoP.nc"
static inline   uint8_t PhotoP$Atm128AdcConfig$getChannel(void);



static inline   uint8_t PhotoP$Atm128AdcConfig$getRefVoltage(void);



static inline   uint8_t PhotoP$Atm128AdcConfig$getPrescaler(void);



static inline   void PhotoP$ResourceConfigure$configure(void);






static inline   void PhotoP$ResourceConfigure$unconfigure(void);
# 41 "/opt/tinyos-2.x/tos/platforms/homenet/ZigbexBusP.nc"
static inline   uint8_t ZigbexBusP$Adc0$getChannel(void);
static inline   uint8_t ZigbexBusP$Adc1$getChannel(void);


static inline   uint8_t ZigbexBusP$Adc4$getChannel(void);
# 63 "/opt/tinyos-2.x/tos/interfaces/Read.nc"
static  void /*MotionDetectorC.UltraredSensorC.DemoChannel.ADC_ShiftM*/ADC_ShiftM$1$Read$readDone(error_t arg_0x7ee20010, /*MotionDetectorC.UltraredSensorC.DemoChannel.ADC_ShiftM*/ADC_ShiftM$1$Read$val_t arg_0x7ee20198);
#line 55
static  error_t /*MotionDetectorC.UltraredSensorC.DemoChannel.ADC_ShiftM*/ADC_ShiftM$1$subRead$read(void);
# 33 "/opt/tinyos-2.x/tos/sensorboards/homenet_sensor/ADC_ShiftM.nc"
static inline  error_t /*MotionDetectorC.UltraredSensorC.DemoChannel.ADC_ShiftM*/ADC_ShiftM$1$Read$read(void);



static inline  void /*MotionDetectorC.UltraredSensorC.DemoChannel.ADC_ShiftM*/ADC_ShiftM$1$subRead$readDone(error_t result, uint16_t val);
# 31 "/opt/tinyos-2.x/tos/platforms/homenet/ZigbexBusAdc.nc"
static   uint8_t UltraredP$UltraredAdc$getChannel(void);
# 40 "/opt/tinyos-2.x/tos/sensorboards/homenet_sensor/UltraredP.nc"
static inline   uint8_t UltraredP$Atm128AdcConfig$getChannel(void);



static inline   uint8_t UltraredP$Atm128AdcConfig$getRefVoltage(void);



static inline   uint8_t UltraredP$Atm128AdcConfig$getPrescaler(void);



static inline   void UltraredP$ResourceConfigure$configure(void);


static inline   void UltraredP$ResourceConfigure$unconfigure(void);
# 63 "/opt/tinyos-2.x/tos/interfaces/Read.nc"
static  void /*MotionDetectorC.VoltageC.ADC_ShiftM*/ADC_ShiftM$2$Read$readDone(error_t arg_0x7ee20010, /*MotionDetectorC.VoltageC.ADC_ShiftM*/ADC_ShiftM$2$Read$val_t arg_0x7ee20198);
#line 55
static  error_t /*MotionDetectorC.VoltageC.ADC_ShiftM*/ADC_ShiftM$2$subRead$read(void);
# 33 "/opt/tinyos-2.x/tos/sensorboards/homenet_sensor/ADC_ShiftM.nc"
static inline  error_t /*MotionDetectorC.VoltageC.ADC_ShiftM*/ADC_ShiftM$2$Read$read(void);



static inline  void /*MotionDetectorC.VoltageC.ADC_ShiftM*/ADC_ShiftM$2$subRead$readDone(error_t result, uint16_t val);
# 35 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static   void VoltageP$BatMon$makeOutput(void);
#line 29
static   void VoltageP$BatMon$set(void);
static   void VoltageP$BatMon$clr(void);
# 39 "/opt/tinyos-2.x/tos/sensorboards/homenet_sensor/VoltageP.nc"
static inline   uint8_t VoltageP$VoltageConfig$getChannel(void);



static inline   uint8_t VoltageP$VoltageConfig$getRefVoltage(void);



static inline   uint8_t VoltageP$VoltageConfig$getPrescaler(void);



static inline   void VoltageP$ResourceConfigure$configure(void);




static inline   void VoltageP$ResourceConfigure$unconfigure(void);
# 64 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
static  error_t CC2420ActiveMessageP$SubSend$send(message_t *arg_0x7e458468, uint8_t arg_0x7e4585f0);
# 46 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static  am_addr_t CC2420ActiveMessageP$amAddress(void);
# 99 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
static  void CC2420ActiveMessageP$AMSend$sendDone(
# 37 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
am_id_t arg_0x7e460758, 
# 99 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
message_t *arg_0x7ed74030, error_t arg_0x7ed741b8);
# 67 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
static  message_t *CC2420ActiveMessageP$Snoop$receive(
# 39 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
am_id_t arg_0x7e45e848, 
# 67 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
message_t *arg_0x7ed71e10, void *arg_0x7ed70010, uint8_t arg_0x7ed70198);
#line 67
static  message_t *CC2420ActiveMessageP$Receive$receive(
# 38 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
am_id_t arg_0x7e45e0b0, 
# 67 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
message_t *arg_0x7ed71e10, void *arg_0x7ed70010, uint8_t arg_0x7ed70198);
# 51 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
enum CC2420ActiveMessageP$__nesc_unnamed4362 {
  CC2420ActiveMessageP$CC2420_SIZE = MAC_HEADER_SIZE + MAC_FOOTER_SIZE
};

static inline cc2420_header_t *CC2420ActiveMessageP$getHeader(message_t *msg);



static  error_t CC2420ActiveMessageP$AMSend$send(am_id_t id, am_addr_t addr, 
message_t *msg, 
uint8_t len);
#line 78
static inline  void *CC2420ActiveMessageP$AMSend$getPayload(am_id_t id, message_t *m);
#line 98
static inline  void CC2420ActiveMessageP$SubSend$sendDone(message_t *msg, error_t result);





static inline  message_t *CC2420ActiveMessageP$SubReceive$receive(message_t *msg, void *payload, uint8_t len);








static inline  am_addr_t CC2420ActiveMessageP$AMPacket$address(void);



static  am_addr_t CC2420ActiveMessageP$AMPacket$destination(message_t *amsg);









static inline  void CC2420ActiveMessageP$AMPacket$setDestination(message_t *amsg, am_addr_t addr);









static inline  bool CC2420ActiveMessageP$AMPacket$isForMe(message_t *amsg);




static inline  am_id_t CC2420ActiveMessageP$AMPacket$type(message_t *amsg);




static inline  void CC2420ActiveMessageP$AMPacket$setType(message_t *amsg, am_id_t type);




static inline   message_t *CC2420ActiveMessageP$Receive$default$receive(am_id_t id, message_t *msg, void *payload, uint8_t len);



static inline   message_t *CC2420ActiveMessageP$Snoop$default$receive(am_id_t id, message_t *msg, void *payload, uint8_t len);










static  uint8_t CC2420ActiveMessageP$Packet$payloadLength(message_t *msg);




static inline  void CC2420ActiveMessageP$Packet$setPayloadLength(message_t *msg, uint8_t len);







static  void *CC2420ActiveMessageP$Packet$getPayload(message_t *msg, uint8_t *len);
# 88 "/opt/tinyos-2.x/tos/interfaces/SplitControl.nc"
static  void CC2420CsmaP$SplitControl$startDone(error_t arg_0x7ee01578);
#line 110
static  void CC2420CsmaP$SplitControl$stopDone(error_t arg_0x7ee000f8);
# 48 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420Transmit.nc"
static   error_t CC2420CsmaP$CC2420Transmit$sendCCA(message_t *arg_0x7e415900);
# 89 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
static  void CC2420CsmaP$Send$sendDone(message_t *arg_0x7e456598, error_t arg_0x7e456720);
# 41 "/opt/tinyos-2.x/tos/interfaces/Random.nc"
static   uint16_t CC2420CsmaP$Random$rand16(void);
# 73 "/opt/tinyos-2.x/tos/interfaces/AsyncStdControl.nc"
static   error_t CC2420CsmaP$SubControl$start(void);
# 71 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420Power.nc"
static   error_t CC2420CsmaP$CC2420Power$startOscillator(void);
#line 90
static   error_t CC2420CsmaP$CC2420Power$rxOn(void);
#line 51
static   error_t CC2420CsmaP$CC2420Power$startVReg(void);
# 101 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static   error_t CC2420CsmaP$Resource$release(void);
#line 78
static   error_t CC2420CsmaP$Resource$request(void);
# 57 "/opt/tinyos-2.x/tos/interfaces/AMPacket.nc"
static  am_addr_t CC2420CsmaP$AMPacket$address(void);
# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static   error_t CC2420CsmaP$sendDone_task$postTask(void);
#line 56
static   error_t CC2420CsmaP$startDone_task$postTask(void);
# 70 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420CsmaP.nc"
enum CC2420CsmaP$__nesc_unnamed4363 {
#line 70
  CC2420CsmaP$startDone_task = 11U
};
#line 70
typedef int CC2420CsmaP$__nesc_sillytask_startDone_task[CC2420CsmaP$startDone_task];
enum CC2420CsmaP$__nesc_unnamed4364 {
#line 71
  CC2420CsmaP$stopDone_task = 12U
};
#line 71
typedef int CC2420CsmaP$__nesc_sillytask_stopDone_task[CC2420CsmaP$stopDone_task];
enum CC2420CsmaP$__nesc_unnamed4365 {
#line 72
  CC2420CsmaP$sendDone_task = 13U
};
#line 72
typedef int CC2420CsmaP$__nesc_sillytask_sendDone_task[CC2420CsmaP$sendDone_task];
#line 56
enum CC2420CsmaP$__nesc_unnamed4366 {
  CC2420CsmaP$S_PREINIT, 
  CC2420CsmaP$S_STOPPED, 
  CC2420CsmaP$S_STARTING, 
  CC2420CsmaP$S_STARTED, 
  CC2420CsmaP$S_STOPPING, 
  CC2420CsmaP$S_TRANSMIT
};

message_t *CC2420CsmaP$m_msg;
uint8_t CC2420CsmaP$m_state = CC2420CsmaP$S_PREINIT;
uint8_t CC2420CsmaP$m_dsn;
error_t CC2420CsmaP$sendErr = SUCCESS;





static inline cc2420_header_t *CC2420CsmaP$getHeader(message_t *msg);



static inline cc2420_metadata_t *CC2420CsmaP$getMetadata(message_t *msg);



static inline  error_t CC2420CsmaP$Init$init(void);










static inline  error_t CC2420CsmaP$SplitControl$start(void);
#line 107
static inline   void CC2420CsmaP$CC2420Power$startVRegDone(void);



static inline  void CC2420CsmaP$Resource$granted(void);



static inline   void CC2420CsmaP$CC2420Power$startOscillatorDone(void);






static inline  void CC2420CsmaP$startDone_task$runTask(void);
#line 142
static inline  void CC2420CsmaP$stopDone_task$runTask(void);








static inline  error_t CC2420CsmaP$Send$send(message_t *p_msg, uint8_t len);
#line 190
static inline   uint16_t CC2420CsmaP$CsmaBackoff$initial(message_t *m);



static inline   uint16_t CC2420CsmaP$CsmaBackoff$congestion(message_t *m);



static inline   void CC2420CsmaP$CC2420Transmit$sendDone(message_t *p_msg, error_t err);




static inline  void CC2420CsmaP$sendDone_task$runTask(void);
# 53 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420Config.nc"
static  void CC2420ControlP$CC2420Config$syncDone(error_t arg_0x7e3e3330);
# 55 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
static   void CC2420ControlP$StartupTimer$start(CC2420ControlP$StartupTimer$size_type arg_0x7ea23220);
# 55 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420Register.nc"
static   cc2420_status_t CC2420ControlP$MDMCTRL0$write(uint16_t arg_0x7e3cee48);
# 35 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static   void CC2420ControlP$RSTN$makeOutput(void);
#line 29
static   void CC2420ControlP$RSTN$set(void);
static   void CC2420ControlP$RSTN$clr(void);
# 55 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420Register.nc"
static   cc2420_status_t CC2420ControlP$IOCFG0$write(uint16_t arg_0x7e3cee48);
# 35 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static   void CC2420ControlP$CSN$makeOutput(void);
#line 29
static   void CC2420ControlP$CSN$set(void);
static   void CC2420ControlP$CSN$clr(void);




static   void CC2420ControlP$VREN$makeOutput(void);
#line 29
static   void CC2420ControlP$VREN$set(void);
# 101 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static   error_t CC2420ControlP$SpiResource$release(void);
#line 78
static   error_t CC2420ControlP$SpiResource$request(void);
# 45 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420Strobe.nc"
static   cc2420_status_t CC2420ControlP$SXOSCON$strobe(void);
# 101 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static   error_t CC2420ControlP$SyncResource$release(void);
# 76 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420Power.nc"
static   void CC2420ControlP$CC2420Power$startOscillatorDone(void);
#line 56
static   void CC2420ControlP$CC2420Power$startVRegDone(void);
# 55 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420Register.nc"
static   cc2420_status_t CC2420ControlP$FSCTRL$write(uint16_t arg_0x7e3cee48);
#line 55
static   cc2420_status_t CC2420ControlP$IOCFG1$write(uint16_t arg_0x7e3cee48);
# 92 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static  void CC2420ControlP$Resource$granted(void);
# 63 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420Ram.nc"
static   cc2420_status_t CC2420ControlP$PANID$write(uint8_t arg_0x7e3d2920, uint8_t *arg_0x7e3d2ac8, uint8_t arg_0x7e3d2c50);
# 45 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420Strobe.nc"
static   cc2420_status_t CC2420ControlP$SRXON$strobe(void);
# 50 "/opt/tinyos-2.x/tos/interfaces/GpioInterrupt.nc"
static   error_t CC2420ControlP$InterruptCCA$disable(void);
#line 42
static   error_t CC2420ControlP$InterruptCCA$enableRisingEdge(void);
# 57 "/opt/tinyos-2.x/tos/interfaces/AMPacket.nc"
static  am_addr_t CC2420ControlP$AMPacket$address(void);
# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static   error_t CC2420ControlP$syncDone_task$postTask(void);
# 86 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420ControlP.nc"
enum CC2420ControlP$__nesc_unnamed4367 {
#line 86
  CC2420ControlP$syncDone_task = 14U
};
#line 86
typedef int CC2420ControlP$__nesc_sillytask_syncDone_task[CC2420ControlP$syncDone_task];
#line 79
#line 73
typedef enum CC2420ControlP$__nesc_unnamed4368 {
  CC2420ControlP$S_VREG_STOPPED, 
  CC2420ControlP$S_VREG_STARTING, 
  CC2420ControlP$S_VREG_STARTED, 
  CC2420ControlP$S_XOSC_STARTING, 
  CC2420ControlP$S_XOSC_STARTED
} CC2420ControlP$cc2420_control_state_t;

uint8_t CC2420ControlP$m_channel = 26;

uint16_t CC2420ControlP$m_pan = TOS_AM_GROUP;
uint16_t CC2420ControlP$m_short_addr;
bool CC2420ControlP$m_sync_busy;


 CC2420ControlP$cc2420_control_state_t CC2420ControlP$m_state = CC2420ControlP$S_VREG_STOPPED;

static inline  error_t CC2420ControlP$Init$init(void);
#line 105
static inline   error_t CC2420ControlP$Resource$request(void);







static inline   error_t CC2420ControlP$Resource$release(void);






static inline  void CC2420ControlP$SpiResource$granted(void);




static inline   error_t CC2420ControlP$CC2420Power$startVReg(void);










static inline   void CC2420ControlP$StartupTimer$fired(void);
#line 153
static inline   error_t CC2420ControlP$CC2420Power$startOscillator(void);
#line 179
static inline   void CC2420ControlP$InterruptCCA$fired(void);
#line 202
static inline   error_t CC2420ControlP$CC2420Power$rxOn(void);
#line 257
static inline  void CC2420ControlP$SyncResource$granted(void);
#line 279
static inline  void CC2420ControlP$syncDone_task$runTask(void);




static inline   void CC2420ControlP$CC2420Config$default$syncDone(error_t error);
# 44 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128TimerCtrl8.nc"
static   Atm128_TIFR_t HplAtm128Timer1P$Timer0Ctrl$getInterruptFlag(void);
# 49 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
static   void HplAtm128Timer1P$CompareA$fired(void);
# 51 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Capture.nc"
static   void HplAtm128Timer1P$Capture$captured(HplAtm128Timer1P$Capture$size_type arg_0x7e378120);
# 49 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
static   void HplAtm128Timer1P$CompareB$fired(void);
#line 49
static   void HplAtm128Timer1P$CompareC$fired(void);
# 61 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
static   void HplAtm128Timer1P$Timer$overflow(void);
# 49 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer1P.nc"
static inline   uint16_t HplAtm128Timer1P$Timer$get(void);


static inline   void HplAtm128Timer1P$Timer$set(uint16_t t);








static inline   void HplAtm128Timer1P$Timer$setScale(uint8_t s);









static inline   Atm128TimerCtrlCapture_t HplAtm128Timer1P$TimerCtrl$getCtrlCapture(void);









static inline uint16_t HplAtm128Timer1P$TimerCtrlCapture2int(Atm128TimerCtrlCapture_t x);






static inline   void HplAtm128Timer1P$TimerCtrl$setCtrlCapture(Atm128_TCCR1B_t x);
#line 122
static inline   void HplAtm128Timer1P$Capture$setEdge(bool up);



static inline   void HplAtm128Timer1P$Capture$reset(void);
static inline   void HplAtm128Timer1P$CompareA$reset(void);



static inline   void HplAtm128Timer1P$Timer$start(void);
static inline   void HplAtm128Timer1P$Capture$start(void);
static inline   void HplAtm128Timer1P$CompareA$start(void);




static inline   void HplAtm128Timer1P$Capture$stop(void);
static inline   void HplAtm128Timer1P$CompareA$stop(void);




static inline   bool HplAtm128Timer1P$Timer$test(void);
#line 183
static inline   void HplAtm128Timer1P$CompareA$set(uint16_t t);
#line 195
void __vector_12(void) __attribute((interrupt))   ;


static inline    void HplAtm128Timer1P$CompareB$default$fired(void);
void __vector_13(void) __attribute((interrupt))   ;


static inline    void HplAtm128Timer1P$CompareC$default$fired(void);
void __vector_24(void) __attribute((interrupt))   ;



void __vector_11(void) __attribute((interrupt))   ;



void __vector_14(void) __attribute((interrupt))   ;
# 95 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
static   void /*InitOneP.InitOne*/Atm128TimerInitC$1$Timer$setScale(uint8_t arg_0x7e9f5da8);
#line 58
static   void /*InitOneP.InitOne*/Atm128TimerInitC$1$Timer$set(/*InitOneP.InitOne*/Atm128TimerInitC$1$Timer$timer_size arg_0x7ea00100);










static   void /*InitOneP.InitOne*/Atm128TimerInitC$1$Timer$start(void);
# 42 "/opt/tinyos-2.x/tos/chips/atm128/timer/Atm128TimerInitC.nc"
static inline  error_t /*InitOneP.InitOne*/Atm128TimerInitC$1$Init$init(void);








static inline   void /*InitOneP.InitOne*/Atm128TimerInitC$1$Timer$overflow(void);
# 67 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
static   void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$1$Alarm$fired(void);
# 53 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
static   void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$1$HplAtm128Compare$reset(void);
#line 45
static   void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$1$HplAtm128Compare$set(/*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$1$HplAtm128Compare$size_type arg_0x7e9e2a20);










static   void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$1$HplAtm128Compare$start(void);


static   void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$1$HplAtm128Compare$stop(void);
# 52 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
static   /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$1$HplAtm128Timer$timer_size /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$1$HplAtm128Timer$get(void);
# 65 "/opt/tinyos-2.x/tos/chips/atm128/timer/Atm128AlarmC.nc"
static inline   void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$1$Alarm$stop(void);








static inline   void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$1$Alarm$startAt(/*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$1$timer_size t0, /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$1$timer_size dt);
#line 110
static inline   void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$1$HplAtm128Compare$fired(void);






static inline   void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$1$HplAtm128Timer$overflow(void);
# 71 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
static   void /*CounterOne16C.NCounter*/Atm128CounterC$1$Counter$overflow(void);
# 78 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
static   bool /*CounterOne16C.NCounter*/Atm128CounterC$1$Timer$test(void);
#line 52
static   /*CounterOne16C.NCounter*/Atm128CounterC$1$Timer$timer_size /*CounterOne16C.NCounter*/Atm128CounterC$1$Timer$get(void);
# 41 "/opt/tinyos-2.x/tos/chips/atm128/timer/Atm128CounterC.nc"
static inline   /*CounterOne16C.NCounter*/Atm128CounterC$1$timer_size /*CounterOne16C.NCounter*/Atm128CounterC$1$Counter$get(void);




static inline   bool /*CounterOne16C.NCounter*/Atm128CounterC$1$Counter$isOverflowPending(void);









static inline   void /*CounterOne16C.NCounter*/Atm128CounterC$1$Timer$overflow(void);
# 53 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
static   /*Counter32khz32C.Transform32*/TransformCounterC$0$CounterFrom$size_type /*Counter32khz32C.Transform32*/TransformCounterC$0$CounterFrom$get(void);






static   bool /*Counter32khz32C.Transform32*/TransformCounterC$0$CounterFrom$isOverflowPending(void);










static   void /*Counter32khz32C.Transform32*/TransformCounterC$0$Counter$overflow(void);
# 56 "/opt/tinyos-2.x/tos/lib/timer/TransformCounterC.nc"
/*Counter32khz32C.Transform32*/TransformCounterC$0$upper_count_type /*Counter32khz32C.Transform32*/TransformCounterC$0$m_upper;

enum /*Counter32khz32C.Transform32*/TransformCounterC$0$__nesc_unnamed4369 {

  TransformCounterC$0$LOW_SHIFT_RIGHT = 0, 
  TransformCounterC$0$HIGH_SHIFT_LEFT = 8 * sizeof(/*Counter32khz32C.Transform32*/TransformCounterC$0$from_size_type ) - /*Counter32khz32C.Transform32*/TransformCounterC$0$LOW_SHIFT_RIGHT, 
  TransformCounterC$0$NUM_UPPER_BITS = 8 * sizeof(/*Counter32khz32C.Transform32*/TransformCounterC$0$to_size_type ) - 8 * sizeof(/*Counter32khz32C.Transform32*/TransformCounterC$0$from_size_type ) + 0, 



  TransformCounterC$0$OVERFLOW_MASK = /*Counter32khz32C.Transform32*/TransformCounterC$0$NUM_UPPER_BITS ? ((/*Counter32khz32C.Transform32*/TransformCounterC$0$upper_count_type )2 << (/*Counter32khz32C.Transform32*/TransformCounterC$0$NUM_UPPER_BITS - 1)) - 1 : 0
};

static   /*Counter32khz32C.Transform32*/TransformCounterC$0$to_size_type /*Counter32khz32C.Transform32*/TransformCounterC$0$Counter$get(void);
#line 122
static inline   void /*Counter32khz32C.Transform32*/TransformCounterC$0$CounterFrom$overflow(void);
# 67 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
static   void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$Alarm$fired(void);
#line 92
static   void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$AlarmFrom$startAt(/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$AlarmFrom$size_type arg_0x7ea22350, /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$AlarmFrom$size_type arg_0x7ea224e0);
#line 62
static   void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$AlarmFrom$stop(void);
# 53 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
static   /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$Counter$size_type /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$Counter$get(void);
# 66 "/opt/tinyos-2.x/tos/lib/timer/TransformAlarmC.nc"
/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$to_size_type /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$m_t0;
/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$to_size_type /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$m_dt;

enum /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$__nesc_unnamed4370 {

  TransformAlarmC$0$MAX_DELAY_LOG2 = 8 * sizeof(/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$from_size_type ) - 1 - 0, 
  TransformAlarmC$0$MAX_DELAY = (/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$to_size_type )1 << /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$MAX_DELAY_LOG2
};

static inline   /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$to_size_type /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$Alarm$getNow(void);
#line 91
static inline   void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$Alarm$stop(void);




static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$set_alarm(void);
#line 136
static   void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$Alarm$startAt(/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$to_size_type t0, /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$to_size_type dt);









static inline   void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$Alarm$start(/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$to_size_type dt);




static inline   void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$AlarmFrom$fired(void);
#line 166
static inline   void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$Counter$overflow(void);
# 22 "/opt/tinyos-2.x/tos/system/NoInitC.nc"
static inline  error_t NoInitC$Init$init(void);
# 50 "/opt/tinyos-2.x/tos/interfaces/GpioCapture.nc"
static   void /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC$0$Capture$captured(uint16_t arg_0x7e2017f8);
# 79 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Capture.nc"
static   void /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC$0$Atm128Capture$setEdge(bool arg_0x7e377710);
#line 55
static   void /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC$0$Atm128Capture$reset(void);


static   void /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC$0$Atm128Capture$start(void);


static   void /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC$0$Atm128Capture$stop(void);
# 42 "/opt/tinyos-2.x/tos/chips/atm128/timer/Atm128GpioCaptureC.nc"
static error_t /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC$0$enableCapture(uint8_t mode);









static inline   error_t /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC$0$Capture$captureRisingEdge(void);



static inline   error_t /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC$0$Capture$captureFallingEdge(void);







static inline   void /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC$0$Atm128Capture$captured(uint16_t time);
# 45 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static   void /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC$1$Atm128Interrupt$clear(void);
#line 40
static   void /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC$1$Atm128Interrupt$disable(void);
#line 59
static   void /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC$1$Atm128Interrupt$edge(bool arg_0x7e728c60);
#line 35
static   void /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC$1$Atm128Interrupt$enable(void);
# 57 "/opt/tinyos-2.x/tos/interfaces/GpioInterrupt.nc"
static   void /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC$1$Interrupt$fired(void);
# 15 "/opt/tinyos-2.x/tos/chips/atm128/pins/Atm128GpioInterruptC.nc"
static inline error_t /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC$1$enable(bool rising);
#line 29
static inline   error_t /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC$1$Interrupt$enableFallingEdge(void);








static inline   void /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC$1$Atm128Interrupt$fired(void);
# 62 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
static  void HplCC2420InterruptsP$CCATimer$startOneShot(uint32_t arg_0x7ee62ca8);




static  void HplCC2420InterruptsP$CCATimer$stop(void);
# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static   error_t HplCC2420InterruptsP$stopTask$postTask(void);
# 32 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static   bool HplCC2420InterruptsP$CC_CCA$get(void);
# 57 "/opt/tinyos-2.x/tos/interfaces/GpioInterrupt.nc"
static   void HplCC2420InterruptsP$CCA$fired(void);
# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static   error_t HplCC2420InterruptsP$CCATask$postTask(void);
# 87 "/opt/tinyos-2.x/tos/platforms/homenet/chips/cc2420/HplCC2420InterruptsP.nc"
enum HplCC2420InterruptsP$__nesc_unnamed4371 {
#line 87
  HplCC2420InterruptsP$CCATask = 15U
};
#line 87
typedef int HplCC2420InterruptsP$__nesc_sillytask_CCATask[HplCC2420InterruptsP$CCATask];
#line 113
enum HplCC2420InterruptsP$__nesc_unnamed4372 {
#line 113
  HplCC2420InterruptsP$stopTask = 16U
};
#line 113
typedef int HplCC2420InterruptsP$__nesc_sillytask_stopTask[HplCC2420InterruptsP$stopTask];
#line 75
 uint8_t HplCC2420InterruptsP$ccaWaitForState;
 uint8_t HplCC2420InterruptsP$ccaLastState;
bool HplCC2420InterruptsP$ccaTimerDisabled = FALSE;









static inline  void HplCC2420InterruptsP$CCATask$runTask(void);






static inline   error_t HplCC2420InterruptsP$CCA$enableRisingEdge(void);
#line 113
static inline void  HplCC2420InterruptsP$stopTask$runTask(void);






static inline   error_t HplCC2420InterruptsP$CCA$disable(void);








static inline  void HplCC2420InterruptsP$CCATimer$fired(void);
# 59 "/opt/tinyos-2.x/tos/interfaces/SpiPacket.nc"
static   error_t CC2420SpiImplP$SpiPacket$send(uint8_t *arg_0x7e17f7f8, uint8_t *arg_0x7e17f9a0, uint16_t arg_0x7e17fb30);
# 91 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420Fifo.nc"
static   void CC2420SpiImplP$Fifo$writeDone(
# 40 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420SpiImplP.nc"
uint8_t arg_0x7e195068, 
# 91 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420Fifo.nc"
uint8_t *arg_0x7e1a1610, uint8_t arg_0x7e1a1798, error_t arg_0x7e1a1920);
#line 71
static   void CC2420SpiImplP$Fifo$readDone(
# 40 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420SpiImplP.nc"
uint8_t arg_0x7e195068, 
# 71 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420Fifo.nc"
uint8_t *arg_0x7e1b04f8, uint8_t arg_0x7e1b0680, error_t arg_0x7e1b0808);
# 34 "/opt/tinyos-2.x/tos/interfaces/SpiByte.nc"
static   uint8_t CC2420SpiImplP$SpiByte$write(uint8_t arg_0x7e181088);
# 101 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static   error_t CC2420SpiImplP$SpiResource$release(void);
#line 87
static   error_t CC2420SpiImplP$SpiResource$immediateRequest(void);
#line 78
static   error_t CC2420SpiImplP$SpiResource$request(void);
#line 92
static  void CC2420SpiImplP$Resource$granted(
# 39 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420SpiImplP.nc"
uint8_t arg_0x7e1966c0);
#line 54
enum CC2420SpiImplP$__nesc_unnamed4373 {
  CC2420SpiImplP$RESOURCE_COUNT = 4U, 
  CC2420SpiImplP$NO_HOLDER = 0xff
};

 uint16_t CC2420SpiImplP$m_addr;
bool CC2420SpiImplP$m_resource_busy = FALSE;
uint8_t CC2420SpiImplP$m_requests = 0;
uint8_t CC2420SpiImplP$m_holder = CC2420SpiImplP$NO_HOLDER;

static inline   void CC2420SpiImplP$Resource$default$granted(uint8_t id);


static   error_t CC2420SpiImplP$Resource$request(uint8_t id);
#line 80
static   error_t CC2420SpiImplP$Resource$immediateRequest(uint8_t id);
#line 94
static   error_t CC2420SpiImplP$Resource$release(uint8_t id);
#line 124
static inline  void CC2420SpiImplP$SpiResource$granted(void);





static inline   cc2420_status_t CC2420SpiImplP$Fifo$beginRead(uint8_t addr, uint8_t *data, 
uint8_t len);
#line 144
static inline   error_t CC2420SpiImplP$Fifo$continueRead(uint8_t addr, uint8_t *data, 
uint8_t len);




static inline   cc2420_status_t CC2420SpiImplP$Fifo$write(uint8_t addr, uint8_t *data, 
uint8_t len);
#line 181
static inline   void CC2420SpiImplP$SpiPacket$sendDone(uint8_t *tx_buf, uint8_t *rx_buf, 
uint16_t len, error_t error);






static   cc2420_status_t CC2420SpiImplP$Ram$write(uint16_t addr, uint8_t offset, 
uint8_t *data, 
uint8_t len);
#line 218
static   cc2420_status_t CC2420SpiImplP$Reg$write(uint8_t addr, uint16_t data);







static inline   cc2420_status_t CC2420SpiImplP$Strobe$strobe(uint8_t addr);



static inline    void CC2420SpiImplP$Fifo$default$readDone(uint8_t addr, uint8_t *rx_buf, uint8_t rx_len, error_t error);
static inline    void CC2420SpiImplP$Fifo$default$writeDone(uint8_t addr, uint8_t *tx_buf, uint8_t tx_len, error_t error);
# 71 "/opt/tinyos-2.x/tos/interfaces/SpiPacket.nc"
static   void Atm128SpiP$SpiPacket$sendDone(uint8_t *arg_0x7e17e290, uint8_t *arg_0x7e17e438, uint16_t arg_0x7e17e5c8, 
error_t arg_0x7e17e760);
# 101 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static   error_t Atm128SpiP$ResourceArbiter$release(
# 84 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
uint8_t arg_0x7e130410);
# 87 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static   error_t Atm128SpiP$ResourceArbiter$immediateRequest(
# 84 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
uint8_t arg_0x7e130410);
# 78 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static   error_t Atm128SpiP$ResourceArbiter$request(
# 84 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
uint8_t arg_0x7e130410);
# 72 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128Spi.nc"
static   void Atm128SpiP$Spi$sleep(void);
#line 66
static   void Atm128SpiP$Spi$initMaster(void);
#line 96
static   void Atm128SpiP$Spi$enableInterrupt(bool arg_0x7e11c478);
#line 80
static   uint8_t Atm128SpiP$Spi$read(void);
#line 125
static   void Atm128SpiP$Spi$setMasterDoubleSpeed(bool arg_0x7e116680);
#line 114
static   void Atm128SpiP$Spi$setClock(uint8_t arg_0x7e118480);
#line 108
static   void Atm128SpiP$Spi$setClockPolarity(bool arg_0x7e119490);
#line 86
static   void Atm128SpiP$Spi$write(uint8_t arg_0x7e11d9f8);
#line 99
static   void Atm128SpiP$Spi$enableSpi(bool arg_0x7e11cc48);
#line 111
static   void Atm128SpiP$Spi$setClockPhase(bool arg_0x7e119c70);
# 92 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static  void Atm128SpiP$Resource$granted(
# 80 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
uint8_t arg_0x7e133010);
# 44 "/opt/tinyos-2.x/tos/interfaces/McuPowerState.nc"
static   void Atm128SpiP$McuPowerState$update(void);
# 80 "/opt/tinyos-2.x/tos/interfaces/ArbiterInfo.nc"
static   bool Atm128SpiP$ArbiterInfo$inUse(void);
# 90 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
uint8_t *Atm128SpiP$txBuffer;
uint8_t *Atm128SpiP$rxBuffer;
uint16_t Atm128SpiP$len;
uint16_t Atm128SpiP$pos;

enum Atm128SpiP$__nesc_unnamed4374 {
  Atm128SpiP$SPI_IDLE, 
  Atm128SpiP$SPI_BUSY, 
  Atm128SpiP$SPI_ATOMIC_SIZE = 10
};




bool Atm128SpiP$started;

static void Atm128SpiP$startSpi(void);
#line 120
static inline void Atm128SpiP$stopSpi(void);








static   uint8_t Atm128SpiP$SpiByte$write(uint8_t tx);
#line 162
static error_t Atm128SpiP$sendNextPart(void);
#line 217
static   error_t Atm128SpiP$SpiPacket$send(uint8_t *writeBuf, 
uint8_t *readBuf, 
uint16_t bufLen);
#line 237
static inline   void Atm128SpiP$Spi$dataReady(uint8_t data);
#line 277
static inline   error_t Atm128SpiP$Resource$immediateRequest(uint8_t id);







static   error_t Atm128SpiP$Resource$request(uint8_t id);








static inline   error_t Atm128SpiP$Resource$release(uint8_t id);
#line 308
static inline  void Atm128SpiP$ResourceArbiter$granted(uint8_t id);



static inline   void Atm128SpiP$Resource$default$granted(uint8_t id);
# 33 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static   void HplAtm128SpiP$MISO$makeInput(void);

static   void HplAtm128SpiP$SCK$makeOutput(void);
#line 35
static   void HplAtm128SpiP$SS$makeOutput(void);
#line 29
static   void HplAtm128SpiP$SS$set(void);
static   void HplAtm128SpiP$SS$clr(void);
# 44 "/opt/tinyos-2.x/tos/interfaces/McuPowerState.nc"
static   void HplAtm128SpiP$Mcu$update(void);
# 92 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128Spi.nc"
static   void HplAtm128SpiP$SPI$dataReady(uint8_t arg_0x7e11df08);
# 35 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static   void HplAtm128SpiP$MOSI$makeOutput(void);
# 79 "/opt/tinyos-2.x/tos/chips/atm128/spi/HplAtm128SpiP.nc"
static inline   void HplAtm128SpiP$SPI$initMaster(void);
#line 95
static inline   void HplAtm128SpiP$SPI$sleep(void);



static inline   uint8_t HplAtm128SpiP$SPI$read(void);
static inline   void HplAtm128SpiP$SPI$write(uint8_t d);


void __vector_17(void) __attribute((signal))   ;
#line 116
static   void HplAtm128SpiP$SPI$enableInterrupt(bool enabled);
#line 131
static   void HplAtm128SpiP$SPI$enableSpi(bool enabled);
#line 157
static inline   void HplAtm128SpiP$SPI$setMasterBit(bool isMaster);
#line 170
static inline   void HplAtm128SpiP$SPI$setClockPolarity(bool highWhenIdle);
#line 184
static inline   void HplAtm128SpiP$SPI$setClockPhase(bool sampleOnTrailing);
#line 201
static inline   void HplAtm128SpiP$SPI$setClock(uint8_t v);
#line 214
static inline   void HplAtm128SpiP$SPI$setMasterDoubleSpeed(bool on);
# 39 "/opt/tinyos-2.x/tos/system/FcfsResourceQueueC.nc"
enum /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$1$__nesc_unnamed4375 {
#line 39
  FcfsResourceQueueC$1$NO_ENTRY = 0xFF
};
uint8_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$1$resQ[1U];
uint8_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$1$qHead = /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$1$NO_ENTRY;
uint8_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$1$qTail = /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$1$NO_ENTRY;

static inline  error_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$1$Init$init(void);




static inline   bool /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$1$FcfsQueue$isEmpty(void);



static inline   bool /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$1$FcfsQueue$isEnqueued(resource_client_id_t id);



static inline   resource_client_id_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$1$FcfsQueue$dequeue(void);
#line 72
static inline   error_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$1$FcfsQueue$enqueue(resource_client_id_t id);
# 43 "/opt/tinyos-2.x/tos/interfaces/ResourceRequested.nc"
static   void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceRequested$requested(
# 54 "/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x7e07cb40);
# 51 "/opt/tinyos-2.x/tos/interfaces/ResourceRequested.nc"
static   void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceRequested$immediateRequested(
# 54 "/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x7e07cb40);
# 55 "/opt/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
static   void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceConfigure$unconfigure(
# 58 "/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x7e07b650);
# 49 "/opt/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
static   void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceConfigure$configure(
# 58 "/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x7e07b650);
# 69 "/opt/tinyos-2.x/tos/interfaces/ResourceQueue.nc"
static   error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$Queue$enqueue(resource_client_id_t arg_0x7e6a18b0);
#line 43
static   bool /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$Queue$isEmpty(void);
#line 60
static   resource_client_id_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$Queue$dequeue(void);
# 92 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static  void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$Resource$granted(
# 53 "/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x7e07c200);
# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static   error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$grantedTask$postTask(void);
# 71 "/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
enum /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$__nesc_unnamed4376 {
#line 71
  SimpleArbiterP$0$grantedTask = 17U
};
#line 71
typedef int /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$__nesc_sillytask_grantedTask[/*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$grantedTask];
#line 64
enum /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$__nesc_unnamed4377 {
#line 64
  SimpleArbiterP$0$RES_IDLE = 0, SimpleArbiterP$0$RES_GRANTING = 1, SimpleArbiterP$0$RES_BUSY = 2
};
#line 65
enum /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$__nesc_unnamed4378 {
#line 65
  SimpleArbiterP$0$NO_RES = 0xFF
};
uint8_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$state = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$RES_IDLE;
 uint8_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$resId = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$NO_RES;
 uint8_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$reqResId;



static inline   error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$Resource$request(uint8_t id);
#line 86
static inline   error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$Resource$immediateRequest(uint8_t id);
#line 99
static inline   error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$Resource$release(uint8_t id);
#line 125
static   bool /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ArbiterInfo$inUse(void);
#line 152
static inline  void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$grantedTask$runTask(void);
#line 164
static inline    void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceRequested$default$requested(uint8_t id);

static inline    void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceRequested$default$immediateRequested(uint8_t id);

static inline    void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceConfigure$default$configure(uint8_t id);

static inline    void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceConfigure$default$unconfigure(uint8_t id);
# 45 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420Strobe.nc"
static   cc2420_status_t CC2420TransmitP$STXONCCA$strobe(void);
# 43 "/opt/tinyos-2.x/tos/interfaces/GpioCapture.nc"
static   error_t CC2420TransmitP$CaptureSFD$captureFallingEdge(void);
#line 42
static   error_t CC2420TransmitP$CaptureSFD$captureRisingEdge(void);
# 55 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
static   void CC2420TransmitP$BackoffTimer$start(CC2420TransmitP$BackoffTimer$size_type arg_0x7ea23220);






static   void CC2420TransmitP$BackoffTimer$stop(void);
# 85 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420Transmit.nc"
static   void CC2420TransmitP$Send$sendDone(message_t *arg_0x7e413010, error_t arg_0x7e413198);
# 55 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420Register.nc"
static   cc2420_status_t CC2420TransmitP$TXCTRL$write(uint16_t arg_0x7e3cee48);
# 35 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static   void CC2420TransmitP$CSN$makeOutput(void);
#line 29
static   void CC2420TransmitP$CSN$set(void);
static   void CC2420TransmitP$CSN$clr(void);
# 53 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420Receive.nc"
static   void CC2420TransmitP$CC2420Receive$sfd_dropped(void);
#line 47
static   void CC2420TransmitP$CC2420Receive$sfd(uint16_t arg_0x7dffb750);
# 101 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static   error_t CC2420TransmitP$SpiResource$release(void);
#line 87
static   error_t CC2420TransmitP$SpiResource$immediateRequest(void);
#line 78
static   error_t CC2420TransmitP$SpiResource$request(void);
# 33 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static   void CC2420TransmitP$CCA$makeInput(void);
#line 32
static   bool CC2420TransmitP$CCA$get(void);
# 45 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420Strobe.nc"
static   cc2420_status_t CC2420TransmitP$SNOP$strobe(void);
# 33 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static   void CC2420TransmitP$SFD$makeInput(void);
#line 32
static   bool CC2420TransmitP$SFD$get(void);
# 43 "/opt/tinyos-2.x/tos/interfaces/CsmaBackoff.nc"
static   uint16_t CC2420TransmitP$CsmaBackoff$congestion(message_t *arg_0x7e40eb10);
#line 36
static   uint16_t CC2420TransmitP$CsmaBackoff$initial(message_t *arg_0x7e40e560);
# 39 "/opt/tinyos-2.x/tos/interfaces/RadioTimeStamping.nc"
static   void CC2420TransmitP$TimeStamp$transmittedSFD(uint16_t arg_0x7e016030, message_t *arg_0x7e0161e0);










static   void CC2420TransmitP$TimeStamp$receivedSFD(uint16_t arg_0x7e016710);
# 82 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420Fifo.nc"
static   cc2420_status_t CC2420TransmitP$TXFIFO$write(uint8_t *arg_0x7e1b0dd0, uint8_t arg_0x7e1a1010);
# 45 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420Strobe.nc"
static   cc2420_status_t CC2420TransmitP$STXON$strobe(void);
# 77 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420TransmitP.nc"
#line 67
typedef enum CC2420TransmitP$__nesc_unnamed4379 {
  CC2420TransmitP$S_STOPPED, 
  CC2420TransmitP$S_STARTED, 
  CC2420TransmitP$S_LOAD, 
  CC2420TransmitP$S_SAMPLE_CCA, 
  CC2420TransmitP$S_BEGIN_TRANSMIT, 
  CC2420TransmitP$S_SFD, 
  CC2420TransmitP$S_EFD, 
  CC2420TransmitP$S_ACK_WAIT, 
  CC2420TransmitP$S_CANCEL
} CC2420TransmitP$cc2420_transmit_state_t;





enum CC2420TransmitP$__nesc_unnamed4380 {
  CC2420TransmitP$CC2420_ABORT_PERIOD = 320
};

 message_t *CC2420TransmitP$m_msg;
 bool CC2420TransmitP$m_cca;
 uint8_t CC2420TransmitP$m_tx_power;
CC2420TransmitP$cc2420_transmit_state_t CC2420TransmitP$m_state = CC2420TransmitP$S_STOPPED;
bool CC2420TransmitP$m_receiving = FALSE;
uint16_t CC2420TransmitP$m_prev_time;

static void CC2420TransmitP$loadTXFIFO(void);
static void CC2420TransmitP$attemptSend(void);

static inline cc2420_header_t *CC2420TransmitP$getHeader(message_t *msg);



static inline cc2420_metadata_t *CC2420TransmitP$getMetadata(message_t *msg);



static inline void CC2420TransmitP$startBackoffTimer(uint16_t time);



static inline void CC2420TransmitP$stopBackoffTimer(void);



static error_t CC2420TransmitP$acquireSpiResource(void);






static inline error_t CC2420TransmitP$releaseSpiResource(void);



static inline void CC2420TransmitP$signalDone(error_t err);




static inline  error_t CC2420TransmitP$Init$init(void);






static inline   error_t CC2420TransmitP$AsyncStdControl$start(void);
#line 155
static inline error_t CC2420TransmitP$send(message_t *p_msg, bool cca);
#line 172
static inline   error_t CC2420TransmitP$Send$sendCCA(message_t *p_msg);
#line 231
static void CC2420TransmitP$loadTXFIFO(void);
#line 246
static inline   void CC2420TransmitP$TXFIFO$writeDone(uint8_t *tx_buf, uint8_t tx_len, 
error_t error);
#line 267
static void CC2420TransmitP$congestionBackoff(void);









static inline   void CC2420TransmitP$BackoffTimer$fired(void);
#line 320
static void CC2420TransmitP$attemptSend(void);
#line 357
static inline   void CC2420TransmitP$CaptureSFD$captured(uint16_t time);
#line 408
static inline   void CC2420TransmitP$CC2420Receive$receive(uint8_t type, message_t *ack_msg);
#line 429
static inline  void CC2420TransmitP$SpiResource$granted(void);
#line 445
static inline   void CC2420TransmitP$TXFIFO$readDone(uint8_t *tx_buf, uint8_t tx_len, error_t error);

static inline    void CC2420TransmitP$TimeStamp$default$transmittedSFD(uint16_t time, message_t *p_msg);
static inline    void CC2420TransmitP$TimeStamp$default$receivedSFD(uint16_t time);
# 32 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static   bool CC2420ReceiveP$FIFO$get(void);
# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static   error_t CC2420ReceiveP$receiveDone_task$postTask(void);
# 32 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static   bool CC2420ReceiveP$FIFOP$get(void);
# 61 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420Receive.nc"
static   void CC2420ReceiveP$CC2420Receive$receive(uint8_t arg_0x7dffa068, message_t *arg_0x7dffa218);
# 29 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static   void CC2420ReceiveP$CSN$set(void);
static   void CC2420ReceiveP$CSN$clr(void);
# 67 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
static  message_t *CC2420ReceiveP$Receive$receive(message_t *arg_0x7ed71e10, void *arg_0x7ed70010, uint8_t arg_0x7ed70198);
# 101 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static   error_t CC2420ReceiveP$SpiResource$release(void);
#line 87
static   error_t CC2420ReceiveP$SpiResource$immediateRequest(void);
#line 78
static   error_t CC2420ReceiveP$SpiResource$request(void);
# 62 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420Fifo.nc"
static   error_t CC2420ReceiveP$RXFIFO$continueRead(uint8_t *arg_0x7e1b2d00, uint8_t arg_0x7e1b2e88);
#line 51
static   cc2420_status_t CC2420ReceiveP$RXFIFO$beginRead(uint8_t *arg_0x7e1b2568, uint8_t arg_0x7e1b26f0);
# 43 "/opt/tinyos-2.x/tos/interfaces/GpioInterrupt.nc"
static   error_t CC2420ReceiveP$InterruptFIFOP$enableFallingEdge(void);
# 45 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420Strobe.nc"
static   cc2420_status_t CC2420ReceiveP$SFLUSHRX$strobe(void);
# 85 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420ReceiveP.nc"
enum CC2420ReceiveP$__nesc_unnamed4381 {
#line 85
  CC2420ReceiveP$receiveDone_task = 18U
};
#line 85
typedef int CC2420ReceiveP$__nesc_sillytask_receiveDone_task[CC2420ReceiveP$receiveDone_task];
#line 65
#line 60
typedef enum CC2420ReceiveP$__nesc_unnamed4382 {
  CC2420ReceiveP$S_STOPPED, 
  CC2420ReceiveP$S_STARTED, 
  CC2420ReceiveP$S_RX_HEADER, 
  CC2420ReceiveP$S_RX_PAYLOAD
} CC2420ReceiveP$cc2420_receive_state_t;

enum CC2420ReceiveP$__nesc_unnamed4383 {
  CC2420ReceiveP$RXFIFO_SIZE = 128, 
  CC2420ReceiveP$TIMESTAMP_QUEUE_SIZE = 8
};

uint16_t CC2420ReceiveP$m_timestamp_queue[CC2420ReceiveP$TIMESTAMP_QUEUE_SIZE];
uint8_t CC2420ReceiveP$m_timestamp_head;
#line 73
uint8_t CC2420ReceiveP$m_timestamp_size;
uint8_t CC2420ReceiveP$m_missed_packets;

 uint8_t CC2420ReceiveP$m_bytes_left;
 message_t *CC2420ReceiveP$m_p_rx_buf;

message_t CC2420ReceiveP$m_rx_buf;
CC2420ReceiveP$cc2420_receive_state_t CC2420ReceiveP$m_state;

static void CC2420ReceiveP$beginReceive(void);
static void CC2420ReceiveP$receive(void);
static void CC2420ReceiveP$waitForNextPacket(void);


static inline cc2420_header_t *CC2420ReceiveP$getHeader(message_t *msg);



static inline cc2420_metadata_t *CC2420ReceiveP$getMetadata(message_t *msg);



static inline  error_t CC2420ReceiveP$Init$init(void);




static void CC2420ReceiveP$reset_state(void);





static inline   error_t CC2420ReceiveP$AsyncStdControl$start(void);
#line 123
static inline   void CC2420ReceiveP$CC2420Receive$sfd(uint16_t time);








static inline   void CC2420ReceiveP$CC2420Receive$sfd_dropped(void);




static inline   void CC2420ReceiveP$InterruptFIFOP$fired(void);






static void CC2420ReceiveP$beginReceive(void);







static inline  void CC2420ReceiveP$SpiResource$granted(void);



static void CC2420ReceiveP$receive(void);




static inline   void CC2420ReceiveP$RXFIFO$readDone(uint8_t *rx_buf, uint8_t rx_len, 
error_t error);
#line 229
static inline  void CC2420ReceiveP$receiveDone_task$runTask(void);
#line 246
static void CC2420ReceiveP$waitForNextPacket(void);
#line 277
static inline   void CC2420ReceiveP$RXFIFO$writeDone(uint8_t *tx_buf, uint8_t tx_len, error_t error);
# 41 "/opt/tinyos-2.x/tos/system/RandomMlcgP.nc"
uint32_t RandomMlcgP$seed;


static inline  error_t RandomMlcgP$Init$init(void);
#line 58
static   uint32_t RandomMlcgP$Random$rand32(void);
#line 78
static inline   uint16_t RandomMlcgP$Random$rand16(void);
# 46 "/opt/tinyos-2.x/tos/system/ActiveMessageAddressC.nc"
am_addr_t ActiveMessageAddressC$addr = TOS_AM_ADDRESS;





static inline   am_addr_t ActiveMessageAddressC$amAddress(void);
# 99 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
static  void /*MotionDetectorC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$0$AMSend$sendDone(message_t *arg_0x7ed74030, error_t arg_0x7ed741b8);
# 64 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
static  error_t /*MotionDetectorC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$0$Send$send(message_t *arg_0x7e458468, uint8_t arg_0x7e4585f0);
#line 114
static  void */*MotionDetectorC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$0$Send$getPayload(message_t *arg_0x7e4551f8);
# 92 "/opt/tinyos-2.x/tos/interfaces/AMPacket.nc"
static  void /*MotionDetectorC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$0$AMPacket$setDestination(message_t *arg_0x7e478c30, am_addr_t arg_0x7e478dc0);
#line 151
static  void /*MotionDetectorC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$0$AMPacket$setType(message_t *arg_0x7e475be8, am_id_t arg_0x7e475d70);
# 45 "/opt/tinyos-2.x/tos/system/AMQueueEntryP.nc"
static  error_t /*MotionDetectorC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$0$AMSend$send(am_addr_t dest, 
message_t *msg, 
uint8_t len);









static inline  void /*MotionDetectorC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$0$Send$sendDone(message_t *m, error_t err);







static inline  void */*MotionDetectorC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$0$AMSend$getPayload(message_t *m);
# 69 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
static  error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMSend$send(
# 40 "/opt/tinyos-2.x/tos/system/AMQueueImplP.nc"
am_id_t arg_0x7ded06a8, 
# 69 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
am_addr_t arg_0x7ed82c18, message_t *arg_0x7ed82dc8, uint8_t arg_0x7ed81010);
#line 125
static  void */*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMSend$getPayload(
# 40 "/opt/tinyos-2.x/tos/system/AMQueueImplP.nc"
am_id_t arg_0x7ded06a8, 
# 125 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
message_t *arg_0x7ed74c68);
# 89 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
static  void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$sendDone(
# 38 "/opt/tinyos-2.x/tos/system/AMQueueImplP.nc"
uint8_t arg_0x7ded1c90, 
# 89 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
message_t *arg_0x7e456598, error_t arg_0x7e456720);
# 67 "/opt/tinyos-2.x/tos/interfaces/Packet.nc"
static  uint8_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Packet$payloadLength(message_t *arg_0x7e480360);
#line 83
static  void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Packet$setPayloadLength(message_t *arg_0x7e4809d0, uint8_t arg_0x7e480b58);
# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static   error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$errorTask$postTask(void);
# 67 "/opt/tinyos-2.x/tos/interfaces/AMPacket.nc"
static  am_addr_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMPacket$destination(message_t *arg_0x7e478088);
#line 136
static  am_id_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMPacket$type(message_t *arg_0x7e475660);
# 143 "/opt/tinyos-2.x/tos/system/AMQueueImplP.nc"
enum /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$__nesc_unnamed4384 {
#line 143
  AMQueueImplP$0$errorTask = 19U
};
#line 143
typedef int /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$__nesc_sillytask_errorTask[/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$errorTask];
#line 49
enum /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$__nesc_unnamed4385 {
  AMQueueImplP$0$QUEUE_EMPTY = 255
};



#line 53
typedef struct /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$__nesc_unnamed4386 {
  message_t *msg;
} /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue_entry_t;

uint8_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current = /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$QUEUE_EMPTY;
/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue_entry_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue[1];


static void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$tryToSend(void);

static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$nextPacket(void);
#line 91
static inline  error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$send(uint8_t clientId, message_t *msg, 
uint8_t len);
#line 143
static inline  void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$errorTask$runTask(void);







static void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$tryToSend(void);
#line 166
static inline  void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMSend$sendDone(am_id_t id, message_t *msg, error_t err);
#line 180
static inline  void */*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$getPayload(uint8_t id, message_t *m);



static inline   void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$default$sendDone(uint8_t id, message_t *msg, error_t err);
# 31 "/opt/tinyos-2.x/tos/platforms/homenet/ZigbexBusAdc.nc"
static   uint8_t PirP$PirAdc$getChannel(void);
# 41 "PirP.nc"
static inline   uint8_t PirP$Atm128AdcConfig$getChannel(void);



static inline   uint8_t PirP$Atm128AdcConfig$getRefVoltage(void);



static inline   uint8_t PirP$Atm128AdcConfig$getPrescaler(void);



static inline   void PirP$ResourceConfigure$configure(void);






static inline   void PirP$ResourceConfigure$unconfigure(void);
# 82 "/opt/tinyos-2.x/tos/chips/atm128/atm128hardware.h"
static __inline void __nesc_disable_interrupt(void)
#line 82
{
   __asm volatile ("cli");}

#line 99
 
#line 98
__inline __nesc_atomic_t 
__nesc_atomic_start(void )
{
  __nesc_atomic_t result = * (volatile uint8_t *)(0x3F + 0x20);

#line 102
  __nesc_disable_interrupt();
  return result;
}



 
#line 107
__inline void 
__nesc_atomic_end(__nesc_atomic_t original_SREG)
{
  * (volatile uint8_t *)(0x3F + 0x20) = original_SREG;
}

# 113 "/opt/tinyos-2.x/tos/system/SchedulerBasicP.nc"
static inline  void SchedulerBasicP$Scheduler$init(void)
{
  /* atomic removed: atomic calls only */
  {
    memset((void *)SchedulerBasicP$m_next, SchedulerBasicP$NO_TASK, sizeof SchedulerBasicP$m_next);
    SchedulerBasicP$m_head = SchedulerBasicP$NO_TASK;
    SchedulerBasicP$m_tail = SchedulerBasicP$NO_TASK;
  }
}

# 46 "/opt/tinyos-2.x/tos/interfaces/Scheduler.nc"
inline static  void RealMainP$Scheduler$init(void){
#line 46
  SchedulerBasicP$Scheduler$init();
#line 46
}
#line 46
# 42 "/opt/tinyos-2.x/tos/platforms/mica/PlatformP.nc"
static inline void PlatformP$power_init(void)
#line 42
{
  /* atomic removed: atomic calls only */
#line 43
  {
    * (volatile uint8_t *)(0x35 + 0x20) = 1 << 5;
  }
}

# 48 "/opt/tinyos-2.x/tos/types/TinyError.h"
static inline error_t ecombine(error_t r1, error_t r2)




{
  return r1 == r2 ? r1 : FAIL;
}

# 49 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer0AsyncC.nc"
static inline  error_t HplAtm128Timer0AsyncC$Init$init(void)
#line 49
{
  * (volatile uint8_t *)(0x30 + 0x20) |= 1 << 3;
  return SUCCESS;
}

# 52 "/opt/tinyos-2.x/tos/chips/atm128/adc/HplAtm128AdcP.nc"
static inline uint8_t HplAtm128AdcP$Adcsra2int(Atm128Adcsra_t x)
#line 52
{
#line 52
  union __nesc_unnamed4387 {
#line 52
    Atm128Adcsra_t f;
#line 52
    uint8_t t;
  } 
#line 52
  c = { .f = x };

#line 52
  return c.t;
}




static inline   void HplAtm128AdcP$HplAtm128Adc$setAdcsra(Atm128Adcsra_t x)
#line 58
{
  * (volatile uint8_t *)(0x06 + 0x20) = HplAtm128AdcP$Adcsra2int(x);
}

# 60 "/opt/tinyos-2.x/tos/chips/atm128/adc/HplAtm128Adc.nc"
inline static   void Atm128AdcP$HplAtm128Adc$setAdcsra(Atm128Adcsra_t arg_0x7e5ba6f8){
#line 60
  HplAtm128AdcP$HplAtm128Adc$setAdcsra(arg_0x7e5ba6f8);
#line 60
}
#line 60
# 84 "/opt/tinyos-2.x/tos/chips/atm128/adc/Atm128AdcP.nc"
static inline  error_t Atm128AdcP$Init$init(void)
#line 84
{
  /* atomic removed: atomic calls only */
  {
    Atm128Adcsra_t adcsr;

    adcsr.aden = ATM128_ADC_ENABLE_OFF;
    adcsr.adsc = ATM128_ADC_START_CONVERSION_OFF;
    adcsr.adfr = ATM128_ADC_FREE_RUNNING_OFF;
    adcsr.adif = ATM128_ADC_INT_FLAG_OFF;
    adcsr.adie = ATM128_ADC_INT_ENABLE_OFF;
    adcsr.adps = ATM128_ADC_PRESCALE_2;
    Atm128AdcP$HplAtm128Adc$setAdcsra(adcsr);
  }
  return SUCCESS;
}

# 81 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer1P.nc"
static inline uint16_t HplAtm128Timer1P$TimerCtrlCapture2int(Atm128TimerCtrlCapture_t x)
#line 81
{
#line 81
  union __nesc_unnamed4388 {
#line 81
    Atm128TimerCtrlCapture_t f;
#line 81
    uint16_t t;
  } 
#line 81
  c = { .f = x };

#line 81
  return c.t;
}





static inline   void HplAtm128Timer1P$TimerCtrl$setCtrlCapture(Atm128_TCCR1B_t x)
#line 88
{
  * (volatile uint8_t *)(0x2E + 0x20) = HplAtm128Timer1P$TimerCtrlCapture2int(x);
}

#line 71
static inline   Atm128TimerCtrlCapture_t HplAtm128Timer1P$TimerCtrl$getCtrlCapture(void)
#line 71
{
  return * (Atm128TimerCtrlCapture_t *)& * (volatile uint8_t *)(0x2E + 0x20);
}

#line 61
static inline   void HplAtm128Timer1P$Timer$setScale(uint8_t s)
#line 61
{
  Atm128TimerCtrlCapture_t x = HplAtm128Timer1P$TimerCtrl$getCtrlCapture();

#line 63
  x.bits.cs = s;
  HplAtm128Timer1P$TimerCtrl$setCtrlCapture(x);
}

# 95 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static   void /*InitOneP.InitOne*/Atm128TimerInitC$1$Timer$setScale(uint8_t arg_0x7e9f5da8){
#line 95
  HplAtm128Timer1P$Timer$setScale(arg_0x7e9f5da8);
#line 95
}
#line 95
# 131 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer1P.nc"
static inline   void HplAtm128Timer1P$Timer$start(void)
#line 131
{
#line 131
  * (volatile uint8_t *)(0x37 + 0x20) |= 1 << 2;
}

# 69 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static   void /*InitOneP.InitOne*/Atm128TimerInitC$1$Timer$start(void){
#line 69
  HplAtm128Timer1P$Timer$start();
#line 69
}
#line 69
# 52 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer1P.nc"
static inline   void HplAtm128Timer1P$Timer$set(uint16_t t)
#line 52
{
#line 52
  * (volatile uint16_t *)(0x2C + 0x20) = t;
}

# 58 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static   void /*InitOneP.InitOne*/Atm128TimerInitC$1$Timer$set(/*InitOneP.InitOne*/Atm128TimerInitC$1$Timer$timer_size arg_0x7ea00100){
#line 58
  HplAtm128Timer1P$Timer$set(arg_0x7ea00100);
#line 58
}
#line 58
# 42 "/opt/tinyos-2.x/tos/chips/atm128/timer/Atm128TimerInitC.nc"
static inline  error_t /*InitOneP.InitOne*/Atm128TimerInitC$1$Init$init(void)
#line 42
{
  /* atomic removed: atomic calls only */
#line 43
  {
    /*InitOneP.InitOne*/Atm128TimerInitC$1$Timer$set(0);
    /*InitOneP.InitOne*/Atm128TimerInitC$1$Timer$start();
    /*InitOneP.InitOne*/Atm128TimerInitC$1$Timer$setScale(4);
  }
  return SUCCESS;
}

# 51 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
inline static  error_t MotePlatformP$SubInit$init(void){
#line 51
  unsigned char result;
#line 51

#line 51
  result = /*InitOneP.InitOne*/Atm128TimerInitC$1$Init$init();
#line 51
  result = ecombine(result, Atm128AdcP$Init$init());
#line 51
  result = ecombine(result, HplAtm128Timer0AsyncC$Init$init());
#line 51

#line 51
  return result;
#line 51
}
#line 51
# 27 "/opt/tinyos-2.x/tos/platforms/homenet/MotePlatformP.nc"
static inline  error_t MotePlatformP$PlatformInit$init(void)
#line 27
{

  * (volatile uint8_t *)(0x15 + 0x20) = 0;
  * (volatile uint8_t *)(0x14 + 0x20) = 0xff;
  return MotePlatformP$SubInit$init();
}

# 46 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline   void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP$0$IO$set(void)
#line 46
{
#line 46
  * (volatile uint8_t *)59U |= 1 << 0;
}

# 29 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   void LedsP$Led2$set(void){
#line 29
  /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP$0$IO$set();
#line 29
}
#line 29
# 46 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline   void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP$1$IO$set(void)
#line 46
{
#line 46
  * (volatile uint8_t *)59U |= 1 << 1;
}

# 29 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   void LedsP$Led1$set(void){
#line 29
  /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP$1$IO$set();
#line 29
}
#line 29
# 46 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline   void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP$2$IO$set(void)
#line 46
{
#line 46
  * (volatile uint8_t *)59U |= 1 << 2;
}

# 29 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   void LedsP$Led0$set(void){
#line 29
  /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP$2$IO$set();
#line 29
}
#line 29
# 52 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline   void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP$0$IO$makeOutput(void)
#line 52
{
#line 52
  * (volatile uint8_t *)58U |= 1 << 0;
}

# 35 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   void LedsP$Led2$makeOutput(void){
#line 35
  /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP$0$IO$makeOutput();
#line 35
}
#line 35
# 52 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline   void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP$1$IO$makeOutput(void)
#line 52
{
#line 52
  * (volatile uint8_t *)58U |= 1 << 1;
}

# 35 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   void LedsP$Led1$makeOutput(void){
#line 35
  /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP$1$IO$makeOutput();
#line 35
}
#line 35
# 52 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline   void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP$2$IO$makeOutput(void)
#line 52
{
#line 52
  * (volatile uint8_t *)58U |= 1 << 2;
}

# 35 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   void LedsP$Led0$makeOutput(void){
#line 35
  /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP$2$IO$makeOutput();
#line 35
}
#line 35
# 45 "/opt/tinyos-2.x/tos/system/LedsP.nc"
static inline  error_t LedsP$Init$init(void)
#line 45
{
  /* atomic removed: atomic calls only */
#line 46
  {
    ;
    LedsP$Led0$makeOutput();
    LedsP$Led1$makeOutput();
    LedsP$Led2$makeOutput();
    LedsP$Led0$set();
    LedsP$Led1$set();
    LedsP$Led2$set();
  }
  return SUCCESS;
}

# 51 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
inline static  error_t PlatformP$MoteInit$init(void){
#line 51
  unsigned char result;
#line 51

#line 51
  result = LedsP$Init$init();
#line 51
  result = ecombine(result, MotePlatformP$PlatformInit$init());
#line 51

#line 51
  return result;
#line 51
}
#line 51
# 41 "/opt/tinyos-2.x/tos/platforms/mica/MeasureClockC.nc"
static inline  error_t MeasureClockC$Init$init(void)
#line 41
{
  /* atomic removed: atomic calls only */



  {
    uint8_t now;
#line 47
    uint8_t wraps;
    uint16_t start;


    * (volatile uint8_t *)(0x2E + 0x20) = 1 << 0;
    * (volatile uint8_t *)(0x30 + 0x20) = 1 << 3;
    * (volatile uint8_t *)(0x33 + 0x20) = (1 << 1) | (1 << 0);




    start = * (volatile uint16_t *)(0x2C + 0x20);
    for (wraps = MeasureClockC$MAGIC / 2; wraps; ) 
      {
        uint16_t next = * (volatile uint16_t *)(0x2C + 0x20);

        if (next < start) {
          wraps--;
          }
#line 65
        start = next;
      }


    now = * (volatile uint8_t *)(0x32 + 0x20);
    while (* (volatile uint8_t *)(0x32 + 0x20) == now) ;


    start = * (volatile uint16_t *)(0x2C + 0x20);
    now = * (volatile uint8_t *)(0x32 + 0x20);
    while (* (volatile uint8_t *)(0x32 + 0x20) == now) ;
    MeasureClockC$cycles = * (volatile uint16_t *)(0x2C + 0x20);

    MeasureClockC$cycles = (MeasureClockC$cycles - start + 16) >> 5;


    * (volatile uint8_t *)(0x30 + 0x20) = * (volatile uint8_t *)(0x2E + 0x20) = * (volatile uint8_t *)(0x33 + 0x20) = 0;
    * (volatile uint8_t *)(0x32 + 0x20) = 0;
    * (volatile uint16_t *)(0x2C + 0x20) = 0;
    * (volatile uint8_t *)0x7C = * (volatile uint8_t *)(0x36 + 0x20) = 0xff;
    while (* (volatile uint8_t *)(0x30 + 0x20) & (((1 << 2) | (1 << 1)) | (1 << 0))) 
      ;
  }
  return SUCCESS;
}

# 51 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
inline static  error_t PlatformP$MeasureClock$init(void){
#line 51
  unsigned char result;
#line 51

#line 51
  result = MeasureClockC$Init$init();
#line 51

#line 51
  return result;
#line 51
}
#line 51
# 49 "/opt/tinyos-2.x/tos/platforms/mica/PlatformP.nc"
static inline  error_t PlatformP$Init$init(void)
{
  error_t ok;


  ok = PlatformP$MeasureClock$init();
  ok = ecombine(ok, PlatformP$MoteInit$init());

  if (ok != SUCCESS) {
    return ok;
    }
  PlatformP$power_init();

  return SUCCESS;
}

# 51 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
inline static  error_t RealMainP$PlatformInit$init(void){
#line 51
  unsigned char result;
#line 51

#line 51
  result = PlatformP$Init$init();
#line 51

#line 51
  return result;
#line 51
}
#line 51
# 54 "/opt/tinyos-2.x/tos/interfaces/Scheduler.nc"
inline static  bool RealMainP$Scheduler$runNextTask(void){
#line 54
  unsigned char result;
#line 54

#line 54
  result = SchedulerBasicP$Scheduler$runNextTask();
#line 54

#line 54
  return result;
#line 54
}
#line 54
# 31 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   void LedsP$Led2$toggle(void){
#line 31
  /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP$0$IO$toggle();
#line 31
}
#line 31
# 103 "/opt/tinyos-2.x/tos/system/LedsP.nc"
static inline   void LedsP$Leds$led2Toggle(void)
#line 103
{
  LedsP$Led2$toggle();
  ;
#line 105
  ;
}

# 89 "/opt/tinyos-2.x/tos/interfaces/Leds.nc"
inline static   void MotionDetectorM$Leds$led2Toggle(void){
#line 89
  LedsP$Leds$led2Toggle();
#line 89
}
#line 89
# 106 "MotionDetectorM.nc"
static inline  void MotionDetectorM$AMSend$sendDone(message_t *msg, error_t error)
#line 106
{
  MotionDetectorM$Leds$led2Toggle();
}

# 99 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
inline static  void /*MotionDetectorC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$0$AMSend$sendDone(message_t *arg_0x7ed74030, error_t arg_0x7ed741b8){
#line 99
  MotionDetectorM$AMSend$sendDone(arg_0x7ed74030, arg_0x7ed741b8);
#line 99
}
#line 99
# 57 "/opt/tinyos-2.x/tos/system/AMQueueEntryP.nc"
static inline  void /*MotionDetectorC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$0$Send$sendDone(message_t *m, error_t err)
#line 57
{
  /*MotionDetectorC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$0$AMSend$sendDone(m, err);
}

# 184 "/opt/tinyos-2.x/tos/system/AMQueueImplP.nc"
static inline   void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$default$sendDone(uint8_t id, message_t *msg, error_t err)
#line 184
{
}

# 89 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
inline static  void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$sendDone(uint8_t arg_0x7ded1c90, message_t *arg_0x7e456598, error_t arg_0x7e456720){
#line 89
  switch (arg_0x7ded1c90) {
#line 89
    case 0U:
#line 89
      /*MotionDetectorC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$0$Send$sendDone(arg_0x7e456598, arg_0x7e456720);
#line 89
      break;
#line 89
    default:
#line 89
      /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$default$sendDone(arg_0x7ded1c90, arg_0x7e456598, arg_0x7e456720);
#line 89
      break;
#line 89
    }
#line 89
}
#line 89
# 143 "/opt/tinyos-2.x/tos/system/AMQueueImplP.nc"
static inline  void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$errorTask$runTask(void)
#line 143
{
  message_t *msg = /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue[/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current].msg;

#line 145
  /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue[/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current].msg = (void *)0;
  /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$sendDone(/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current, msg, FAIL);
  /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$tryToSend();
}

#line 63
static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$nextPacket(void)
#line 63
{
  uint16_t i;
  uint8_t initial = /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current;

#line 66
  if (initial == /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$QUEUE_EMPTY) {
      initial = 0;
    }
  i = initial;
  for (; i < initial + 1; i++) {
      uint8_t client = (uint8_t )i % 1;

#line 72
      if (/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue[client].msg != (void *)0) {
          /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current = client;
          return;
        }
    }
  /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current = /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$QUEUE_EMPTY;
}

# 67 "/opt/tinyos-2.x/tos/interfaces/Packet.nc"
inline static  uint8_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Packet$payloadLength(message_t *arg_0x7e480360){
#line 67
  unsigned char result;
#line 67

#line 67
  result = CC2420ActiveMessageP$Packet$payloadLength(arg_0x7e480360);
#line 67

#line 67
  return result;
#line 67
}
#line 67
# 269 "/usr/lib/ncc/nesc_nx.h"
static __inline uint16_t __nesc_hton_uint16(void *target, uint16_t value)
#line 269
{
  uint8_t *base = target;

#line 271
  base[1] = value;
  base[0] = value >> 8;
  return value;
}

#line 240
static __inline uint8_t __nesc_hton_uint8(void *target, uint8_t value)
#line 240
{
  uint8_t *base = target;

#line 242
  base[0] = value;
  return value;
}

#line 257
static __inline int8_t __nesc_hton_int8(void *target, int8_t value)
#line 257
{
#line 257
  __nesc_hton_uint8(target, value);
#line 257
  return value;
}

#line 281
static __inline uint16_t __nesc_hton_leuint16(void *target, uint16_t value)
#line 281
{
  uint8_t *base = target;

#line 283
  base[0] = value;
  base[1] = value >> 8;
  return value;
}

#line 276
static __inline uint16_t __nesc_ntoh_leuint16(const void *source)
#line 276
{
  const uint8_t *base = source;

#line 278
  return ((uint16_t )base[1] << 8) | base[0];
}

#line 251
static __inline uint8_t __nesc_hton_leuint8(void *target, uint8_t value)
#line 251
{
  uint8_t *base = target;

#line 253
  base[0] = value;
  return value;
}

# 155 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420TransmitP.nc"
static inline error_t CC2420TransmitP$send(message_t *p_msg, bool cca)
#line 155
{

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 157
    {
      if (CC2420TransmitP$m_state != CC2420TransmitP$S_STARTED) 
        {
          unsigned char __nesc_temp = 
#line 159
          FAIL;

          {
#line 159
            __nesc_atomic_end(__nesc_atomic); 
#line 159
            return __nesc_temp;
          }
        }
#line 160
      CC2420TransmitP$m_state = CC2420TransmitP$S_LOAD;
      CC2420TransmitP$m_cca = cca;
      CC2420TransmitP$m_msg = p_msg;
    }
#line 163
    __nesc_atomic_end(__nesc_atomic); }

  if (CC2420TransmitP$acquireSpiResource() == SUCCESS) {
    CC2420TransmitP$loadTXFIFO();
    }
  return SUCCESS;
}


static inline   error_t CC2420TransmitP$Send$sendCCA(message_t *p_msg)
#line 172
{
  return CC2420TransmitP$send(p_msg, TRUE);
}

# 48 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420Transmit.nc"
inline static   error_t CC2420CsmaP$CC2420Transmit$sendCCA(message_t *arg_0x7e415900){
#line 48
  unsigned char result;
#line 48

#line 48
  result = CC2420TransmitP$Send$sendCCA(arg_0x7e415900);
#line 48

#line 48
  return result;
#line 48
}
#line 48
# 52 "/opt/tinyos-2.x/tos/system/ActiveMessageAddressC.nc"
static inline   am_addr_t ActiveMessageAddressC$amAddress(void)
#line 52
{
  return ActiveMessageAddressC$addr;
}

# 46 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
inline static  am_addr_t CC2420ActiveMessageP$amAddress(void){
#line 46
  unsigned int result;
#line 46

#line 46
  result = ActiveMessageAddressC$amAddress();
#line 46

#line 46
  return result;
#line 46
}
#line 46
#line 113
static inline  am_addr_t CC2420ActiveMessageP$AMPacket$address(void)
#line 113
{
  return CC2420ActiveMessageP$amAddress();
}

# 57 "/opt/tinyos-2.x/tos/interfaces/AMPacket.nc"
inline static  am_addr_t CC2420CsmaP$AMPacket$address(void){
#line 57
  unsigned int result;
#line 57

#line 57
  result = CC2420ActiveMessageP$AMPacket$address();
#line 57

#line 57
  return result;
#line 57
}
#line 57
# 78 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420CsmaP.nc"
static inline cc2420_metadata_t *CC2420CsmaP$getMetadata(message_t *msg)
#line 78
{
  return (cc2420_metadata_t *)msg->metadata;
}

#line 74
static inline cc2420_header_t *CC2420CsmaP$getHeader(message_t *msg)
#line 74
{
  return (cc2420_header_t *)(msg->data - sizeof(cc2420_header_t ));
}

#line 151
static inline  error_t CC2420CsmaP$Send$send(message_t *p_msg, uint8_t len)
#line 151
{
  unsigned char *__nesc_temp43;
  unsigned char *__nesc_temp42;
#line 153
  cc2420_header_t *header = CC2420CsmaP$getHeader(p_msg);
  cc2420_metadata_t *metadata = CC2420CsmaP$getMetadata(p_msg);

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 156
    {
      if (CC2420CsmaP$m_state != CC2420CsmaP$S_STARTED) 
        {
          unsigned char __nesc_temp = 
#line 158
          FAIL;

          {
#line 158
            __nesc_atomic_end(__nesc_atomic); 
#line 158
            return __nesc_temp;
          }
        }
#line 159
      CC2420CsmaP$m_state = CC2420CsmaP$S_TRANSMIT;
      CC2420CsmaP$m_msg = p_msg;
      __nesc_hton_leuint8((unsigned char *)&header->dsn, ++CC2420CsmaP$m_dsn);
    }
#line 162
    __nesc_atomic_end(__nesc_atomic); }

  __nesc_hton_leuint8((unsigned char *)&header->length, len);
  (__nesc_temp42 = (unsigned char *)&header->fcf, __nesc_hton_leuint16(__nesc_temp42, __nesc_ntoh_leuint16(__nesc_temp42) & (1 << IEEE154_FCF_ACK_REQ)));
  (__nesc_temp43 = (unsigned char *)&header->fcf, __nesc_hton_leuint16(__nesc_temp43, __nesc_ntoh_leuint16(__nesc_temp43) | ((((IEEE154_TYPE_DATA << IEEE154_FCF_FRAME_TYPE) | (
  1 << IEEE154_FCF_INTRAPAN)) | (
  IEEE154_ADDR_SHORT << IEEE154_FCF_DEST_ADDR_MODE)) | (
  IEEE154_ADDR_SHORT << IEEE154_FCF_SRC_ADDR_MODE))));
  __nesc_hton_leuint16((unsigned char *)&header->src, CC2420CsmaP$AMPacket$address());
  __nesc_hton_int8((unsigned char *)&metadata->ack, FALSE);
  __nesc_hton_uint8((unsigned char *)&metadata->rssi, 0);
  __nesc_hton_uint8((unsigned char *)&metadata->lqi, 0);
  __nesc_hton_uint16((unsigned char *)&metadata->time, 0);

  CC2420CsmaP$CC2420Transmit$sendCCA(CC2420CsmaP$m_msg);

  return SUCCESS;
}

# 64 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
inline static  error_t CC2420ActiveMessageP$SubSend$send(message_t *arg_0x7e458468, uint8_t arg_0x7e4585f0){
#line 64
  unsigned char result;
#line 64

#line 64
  result = CC2420CsmaP$Send$send(arg_0x7e458468, arg_0x7e4585f0);
#line 64

#line 64
  return result;
#line 64
}
#line 64
# 87 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
inline static   error_t CC2420TransmitP$SpiResource$immediateRequest(void){
#line 87
  unsigned char result;
#line 87

#line 87
  result = CC2420SpiImplP$Resource$immediateRequest(/*CC2420TransmitC.Spi*/CC2420SpiC$2$CLIENT_ID);
#line 87

#line 87
  return result;
#line 87
}
#line 87
# 168 "/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
static inline    void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceConfigure$default$configure(uint8_t id)
#line 168
{
}

# 49 "/opt/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
inline static   void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceConfigure$configure(uint8_t arg_0x7e07b650){
#line 49
    /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceConfigure$default$configure(arg_0x7e07b650);
#line 49
}
#line 49
# 166 "/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
static inline    void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceRequested$default$immediateRequested(uint8_t id)
#line 166
{
}

# 51 "/opt/tinyos-2.x/tos/interfaces/ResourceRequested.nc"
inline static   void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceRequested$immediateRequested(uint8_t arg_0x7e07cb40){
#line 51
    /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceRequested$default$immediateRequested(arg_0x7e07cb40);
#line 51
}
#line 51
# 86 "/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
static inline   error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$Resource$immediateRequest(uint8_t id)
#line 86
{
  /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceRequested$immediateRequested(/*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$resId);
  /* atomic removed: atomic calls only */
#line 88
  {
    if (/*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$state == /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$RES_IDLE) {
        /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$state = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$RES_BUSY;
        /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$resId = id;
        /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceConfigure$configure(/*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$resId);
        {
          unsigned char __nesc_temp = 
#line 93
          SUCCESS;

#line 93
          return __nesc_temp;
        }
      }
#line 95
    {
      unsigned char __nesc_temp = 
#line 95
      FAIL;

#line 95
      return __nesc_temp;
    }
  }
}

# 87 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
inline static   error_t Atm128SpiP$ResourceArbiter$immediateRequest(uint8_t arg_0x7e130410){
#line 87
  unsigned char result;
#line 87

#line 87
  result = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$Resource$immediateRequest(arg_0x7e130410);
#line 87

#line 87
  return result;
#line 87
}
#line 87
# 277 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
static inline   error_t Atm128SpiP$Resource$immediateRequest(uint8_t id)
#line 277
{
  error_t result = Atm128SpiP$ResourceArbiter$immediateRequest(id);

#line 279
  if (result == SUCCESS) {
      Atm128SpiP$startSpi();
    }
  return result;
}

# 87 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
inline static   error_t CC2420SpiImplP$SpiResource$immediateRequest(void){
#line 87
  unsigned char result;
#line 87

#line 87
  result = Atm128SpiP$Resource$immediateRequest(0U);
#line 87

#line 87
  return result;
#line 87
}
#line 87
# 123 "/opt/tinyos-2.x/tos/chips/atm128/McuSleepC.nc"
static inline   void McuSleepC$McuPowerState$update(void)
#line 123
{
}

# 44 "/opt/tinyos-2.x/tos/interfaces/McuPowerState.nc"
inline static   void HplAtm128SpiP$Mcu$update(void){
#line 44
  McuSleepC$McuPowerState$update();
#line 44
}
#line 44
# 47 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline   void /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP$8$IO$clr(void)
#line 47
{
#line 47
  * (volatile uint8_t *)56U &= ~(1 << 0);
}

# 30 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   void HplAtm128SpiP$SS$clr(void){
#line 30
  /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP$8$IO$clr();
#line 30
}
#line 30
# 157 "/opt/tinyos-2.x/tos/chips/atm128/spi/HplAtm128SpiP.nc"
static inline   void HplAtm128SpiP$SPI$setMasterBit(bool isMaster)
#line 157
{
  if (isMaster) {
      * (volatile uint8_t *)(0x0D + 0x20) |= 1 << 4;
    }
  else {
      * (volatile uint8_t *)(0x0D + 0x20) &= ~(1 << 4);
    }
}

# 52 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline   void /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP$8$IO$makeOutput(void)
#line 52
{
#line 52
  * (volatile uint8_t *)55U |= 1 << 0;
}

# 35 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   void HplAtm128SpiP$SS$makeOutput(void){
#line 35
  /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP$8$IO$makeOutput();
#line 35
}
#line 35
# 52 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline   void /*HplAtm128GeneralIOC.PortB.Bit1*/HplAtm128GeneralIOPinP$9$IO$makeOutput(void)
#line 52
{
#line 52
  * (volatile uint8_t *)55U |= 1 << 1;
}

# 35 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   void HplAtm128SpiP$SCK$makeOutput(void){
#line 35
  /*HplAtm128GeneralIOC.PortB.Bit1*/HplAtm128GeneralIOPinP$9$IO$makeOutput();
#line 35
}
#line 35
# 50 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline   void /*HplAtm128GeneralIOC.PortB.Bit3*/HplAtm128GeneralIOPinP$11$IO$makeInput(void)
#line 50
{
#line 50
  * (volatile uint8_t *)55U &= ~(1 << 3);
}

# 33 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   void HplAtm128SpiP$MISO$makeInput(void){
#line 33
  /*HplAtm128GeneralIOC.PortB.Bit3*/HplAtm128GeneralIOPinP$11$IO$makeInput();
#line 33
}
#line 33
# 52 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline   void /*HplAtm128GeneralIOC.PortB.Bit2*/HplAtm128GeneralIOPinP$10$IO$makeOutput(void)
#line 52
{
#line 52
  * (volatile uint8_t *)55U |= 1 << 2;
}

# 35 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   void HplAtm128SpiP$MOSI$makeOutput(void){
#line 35
  /*HplAtm128GeneralIOC.PortB.Bit2*/HplAtm128GeneralIOPinP$10$IO$makeOutput();
#line 35
}
#line 35
# 79 "/opt/tinyos-2.x/tos/chips/atm128/spi/HplAtm128SpiP.nc"
static inline   void HplAtm128SpiP$SPI$initMaster(void)
#line 79
{
  HplAtm128SpiP$MOSI$makeOutput();
  HplAtm128SpiP$MISO$makeInput();
  HplAtm128SpiP$SCK$makeOutput();
  HplAtm128SpiP$SS$makeOutput();
  HplAtm128SpiP$SPI$setMasterBit(TRUE);
  HplAtm128SpiP$SS$clr();
}

# 66 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128Spi.nc"
inline static   void Atm128SpiP$Spi$initMaster(void){
#line 66
  HplAtm128SpiP$SPI$initMaster();
#line 66
}
#line 66
# 214 "/opt/tinyos-2.x/tos/chips/atm128/spi/HplAtm128SpiP.nc"
static inline   void HplAtm128SpiP$SPI$setMasterDoubleSpeed(bool on)
#line 214
{
  if (on) {
      * (volatile uint8_t *)(0x0E + 0x20) |= 1 << 0;
    }
  else {
      * (volatile uint8_t *)(0x0E + 0x20) &= ~(1 << 0);
    }
}

# 125 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128Spi.nc"
inline static   void Atm128SpiP$Spi$setMasterDoubleSpeed(bool arg_0x7e116680){
#line 125
  HplAtm128SpiP$SPI$setMasterDoubleSpeed(arg_0x7e116680);
#line 125
}
#line 125
# 170 "/opt/tinyos-2.x/tos/chips/atm128/spi/HplAtm128SpiP.nc"
static inline   void HplAtm128SpiP$SPI$setClockPolarity(bool highWhenIdle)
#line 170
{
  if (highWhenIdle) {
      * (volatile uint8_t *)(0x0D + 0x20) |= 1 << 3;
    }
  else {
      * (volatile uint8_t *)(0x0D + 0x20) &= ~(1 << 3);
    }
}

# 108 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128Spi.nc"
inline static   void Atm128SpiP$Spi$setClockPolarity(bool arg_0x7e119490){
#line 108
  HplAtm128SpiP$SPI$setClockPolarity(arg_0x7e119490);
#line 108
}
#line 108
# 184 "/opt/tinyos-2.x/tos/chips/atm128/spi/HplAtm128SpiP.nc"
static inline   void HplAtm128SpiP$SPI$setClockPhase(bool sampleOnTrailing)
#line 184
{
  if (sampleOnTrailing) {
      * (volatile uint8_t *)(0x0D + 0x20) |= 1 << 2;
    }
  else {
      * (volatile uint8_t *)(0x0D + 0x20) &= ~(1 << 2);
    }
}

# 111 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128Spi.nc"
inline static   void Atm128SpiP$Spi$setClockPhase(bool arg_0x7e119c70){
#line 111
  HplAtm128SpiP$SPI$setClockPhase(arg_0x7e119c70);
#line 111
}
#line 111
# 201 "/opt/tinyos-2.x/tos/chips/atm128/spi/HplAtm128SpiP.nc"
static inline   void HplAtm128SpiP$SPI$setClock(uint8_t v)
#line 201
{
  v &= 1 | 0;
  * (volatile uint8_t *)(0x0D + 0x20) = (* (volatile uint8_t *)(0x0D + 0x20) & ~(1 | 0)) | v;
}

# 114 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128Spi.nc"
inline static   void Atm128SpiP$Spi$setClock(uint8_t arg_0x7e118480){
#line 114
  HplAtm128SpiP$SPI$setClock(arg_0x7e118480);
#line 114
}
#line 114
# 78 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
inline static   error_t CC2420TransmitP$SpiResource$request(void){
#line 78
  unsigned char result;
#line 78

#line 78
  result = CC2420SpiImplP$Resource$request(/*CC2420TransmitC.Spi*/CC2420SpiC$2$CLIENT_ID);
#line 78

#line 78
  return result;
#line 78
}
#line 78
inline static   error_t CC2420SpiImplP$SpiResource$request(void){
#line 78
  unsigned char result;
#line 78

#line 78
  result = Atm128SpiP$Resource$request(0U);
#line 78

#line 78
  return result;
#line 78
}
#line 78
# 54 "/opt/tinyos-2.x/tos/system/FcfsResourceQueueC.nc"
static inline   bool /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$1$FcfsQueue$isEnqueued(resource_client_id_t id)
#line 54
{
  return /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$1$resQ[id] != /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$1$NO_ENTRY || /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$1$qTail == id;
}

#line 72
static inline   error_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$1$FcfsQueue$enqueue(resource_client_id_t id)
#line 72
{
  /* atomic removed: atomic calls only */
#line 73
  {
    if (!/*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$1$FcfsQueue$isEnqueued(id)) {
        if (/*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$1$qHead == /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$1$NO_ENTRY) {
          /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$1$qHead = id;
          }
        else {
#line 78
          /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$1$resQ[/*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$1$qTail] = id;
          }
#line 79
        /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$1$qTail = id;
        {
          unsigned char __nesc_temp = 
#line 80
          SUCCESS;

#line 80
          return __nesc_temp;
        }
      }
#line 82
    {
      unsigned char __nesc_temp = 
#line 82
      EBUSY;

#line 82
      return __nesc_temp;
    }
  }
}

# 69 "/opt/tinyos-2.x/tos/interfaces/ResourceQueue.nc"
inline static   error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$Queue$enqueue(resource_client_id_t arg_0x7e6a18b0){
#line 69
  unsigned char result;
#line 69

#line 69
  result = /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$1$FcfsQueue$enqueue(arg_0x7e6a18b0);
#line 69

#line 69
  return result;
#line 69
}
#line 69
# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static   error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$grantedTask$postTask(void){
#line 56
  unsigned char result;
#line 56

#line 56
  result = SchedulerBasicP$TaskBasic$postTask(/*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$grantedTask);
#line 56

#line 56
  return result;
#line 56
}
#line 56
# 164 "/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
static inline    void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceRequested$default$requested(uint8_t id)
#line 164
{
}

# 43 "/opt/tinyos-2.x/tos/interfaces/ResourceRequested.nc"
inline static   void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceRequested$requested(uint8_t arg_0x7e07cb40){
#line 43
    /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceRequested$default$requested(arg_0x7e07cb40);
#line 43
}
#line 43
# 73 "/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
static inline   error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$Resource$request(uint8_t id)
#line 73
{
  /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceRequested$requested(/*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$resId);
  /* atomic removed: atomic calls only */
#line 75
  {
    if (/*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$state == /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$RES_IDLE) {
        /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$state = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$RES_GRANTING;
        /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$reqResId = id;
        /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$grantedTask$postTask();
        {
          unsigned char __nesc_temp = 
#line 80
          SUCCESS;

#line 80
          return __nesc_temp;
        }
      }
#line 82
    {
      unsigned char __nesc_temp = 
#line 82
      /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$Queue$enqueue(id);

#line 82
      return __nesc_temp;
    }
  }
}

# 78 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
inline static   error_t Atm128SpiP$ResourceArbiter$request(uint8_t arg_0x7e130410){
#line 78
  unsigned char result;
#line 78

#line 78
  result = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$Resource$request(arg_0x7e130410);
#line 78

#line 78
  return result;
#line 78
}
#line 78
# 86 "/opt/tinyos-2.x/tos/system/SchedulerBasicP.nc"
static inline bool SchedulerBasicP$isWaiting(uint8_t id)
{
  return SchedulerBasicP$m_next[id] != SchedulerBasicP$NO_TASK || SchedulerBasicP$m_tail == id;
}

static inline bool SchedulerBasicP$pushTask(uint8_t id)
{
  if (!SchedulerBasicP$isWaiting(id)) 
    {
      if (SchedulerBasicP$m_head == SchedulerBasicP$NO_TASK) 
        {
          SchedulerBasicP$m_head = id;
          SchedulerBasicP$m_tail = id;
        }
      else 
        {
          SchedulerBasicP$m_next[SchedulerBasicP$m_tail] = id;
          SchedulerBasicP$m_tail = id;
        }
      return TRUE;
    }
  else 
    {
      return FALSE;
    }
}

# 30 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   void CC2420TransmitP$CSN$clr(void){
#line 30
  /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP$8$IO$clr();
#line 30
}
#line 30
# 55 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420Register.nc"
inline static   cc2420_status_t CC2420TransmitP$TXCTRL$write(uint16_t arg_0x7e3cee48){
#line 55
  unsigned char result;
#line 55

#line 55
  result = CC2420SpiImplP$Reg$write(CC2420_TXCTRL, arg_0x7e3cee48);
#line 55

#line 55
  return result;
#line 55
}
#line 55
# 100 "/opt/tinyos-2.x/tos/chips/atm128/spi/HplAtm128SpiP.nc"
static inline   void HplAtm128SpiP$SPI$write(uint8_t d)
#line 100
{
#line 100
  * (volatile uint8_t *)(0x0F + 0x20) = d;
}

# 86 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128Spi.nc"
inline static   void Atm128SpiP$Spi$write(uint8_t arg_0x7e11d9f8){
#line 86
  HplAtm128SpiP$SPI$write(arg_0x7e11d9f8);
#line 86
}
#line 86
# 59 "/opt/tinyos-2.x/tos/interfaces/SpiPacket.nc"
inline static   error_t CC2420SpiImplP$SpiPacket$send(uint8_t *arg_0x7e17f7f8, uint8_t *arg_0x7e17f9a0, uint16_t arg_0x7e17fb30){
#line 59
  unsigned char result;
#line 59

#line 59
  result = Atm128SpiP$SpiPacket$send(arg_0x7e17f7f8, arg_0x7e17f9a0, arg_0x7e17fb30);
#line 59

#line 59
  return result;
#line 59
}
#line 59
# 34 "/opt/tinyos-2.x/tos/interfaces/SpiByte.nc"
inline static   uint8_t CC2420SpiImplP$SpiByte$write(uint8_t arg_0x7e181088){
#line 34
  unsigned char result;
#line 34

#line 34
  result = Atm128SpiP$SpiByte$write(arg_0x7e181088);
#line 34

#line 34
  return result;
#line 34
}
#line 34
# 150 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420SpiImplP.nc"
static inline   cc2420_status_t CC2420SpiImplP$Fifo$write(uint8_t addr, uint8_t *data, 
uint8_t len)
#line 151
{

  uint8_t status;

  CC2420SpiImplP$m_addr = addr;

  status = CC2420SpiImplP$SpiByte$write(CC2420SpiImplP$m_addr);
  CC2420SpiImplP$SpiPacket$send(data, (void *)0, len);

  return status;
}

# 82 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420Fifo.nc"
inline static   cc2420_status_t CC2420TransmitP$TXFIFO$write(uint8_t *arg_0x7e1b0dd0, uint8_t arg_0x7e1a1010){
#line 82
  unsigned char result;
#line 82

#line 82
  result = CC2420SpiImplP$Fifo$write(CC2420_TXFIFO, arg_0x7e1b0dd0, arg_0x7e1a1010);
#line 82

#line 82
  return result;
#line 82
}
#line 82
# 235 "/usr/lib/ncc/nesc_nx.h"
static __inline uint8_t __nesc_ntoh_uint8(const void *source)
#line 235
{
  const uint8_t *base = source;

#line 237
  return base[0];
}

# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static   error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$errorTask$postTask(void){
#line 56
  unsigned char result;
#line 56

#line 56
  result = SchedulerBasicP$TaskBasic$postTask(/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$errorTask);
#line 56

#line 56
  return result;
#line 56
}
#line 56
# 246 "/usr/lib/ncc/nesc_nx.h"
static __inline uint8_t __nesc_ntoh_leuint8(const void *source)
#line 246
{
  const uint8_t *base = source;

#line 248
  return base[0];
}

# 55 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static inline cc2420_header_t *CC2420ActiveMessageP$getHeader(message_t *msg)
#line 55
{
  return (cc2420_header_t *)(msg->data - sizeof(cc2420_header_t ));
}

#line 142
static inline  am_id_t CC2420ActiveMessageP$AMPacket$type(message_t *amsg)
#line 142
{
  cc2420_header_t *header = CC2420ActiveMessageP$getHeader(amsg);

#line 144
  return __nesc_ntoh_leuint8((unsigned char *)&header->type);
}










static inline   message_t *CC2420ActiveMessageP$Snoop$default$receive(am_id_t id, message_t *msg, void *payload, uint8_t len)
#line 156
{
  return msg;
}

# 67 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
inline static  message_t *CC2420ActiveMessageP$Snoop$receive(am_id_t arg_0x7e45e848, message_t *arg_0x7ed71e10, void *arg_0x7ed70010, uint8_t arg_0x7ed70198){
#line 67
  nx_struct message_t *result;
#line 67

#line 67
    result = CC2420ActiveMessageP$Snoop$default$receive(arg_0x7e45e848, arg_0x7ed71e10, arg_0x7ed70010, arg_0x7ed70198);
#line 67

#line 67
  return result;
#line 67
}
#line 67
# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static   error_t MotionDetectorM$SendSensorData$postTask(void){
#line 56
  unsigned char result;
#line 56

#line 56
  result = SchedulerBasicP$TaskBasic$postTask(MotionDetectorM$SendSensorData);
#line 56

#line 56
  return result;
#line 56
}
#line 56
# 110 "MotionDetectorM.nc"
static inline  message_t *MotionDetectorM$Receive$receive(message_t *msg, void *payload, uint8_t len)
#line 110
{
  user_header_t *pUH;

#line 112
  pUH = (user_header_t *)payload;
  if (pUH->id != TOS_NODE_ID) {
    return msg;
    }
#line 115
  switch (pUH->cmd) {
      case COMM_GET: 
        if (pUH->sub == COMM_GET_ALL) {
            MotionDetectorM$SendSensorData$postTask();
          }
      break;
      default: break;
    }
  MotionDetectorM$Leds$led2Toggle();
  return msg;
}

# 152 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static inline   message_t *CC2420ActiveMessageP$Receive$default$receive(am_id_t id, message_t *msg, void *payload, uint8_t len)
#line 152
{
  return msg;
}

# 67 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
inline static  message_t *CC2420ActiveMessageP$Receive$receive(am_id_t arg_0x7e45e0b0, message_t *arg_0x7ed71e10, void *arg_0x7ed70010, uint8_t arg_0x7ed70198){
#line 67
  nx_struct message_t *result;
#line 67

#line 67
  switch (arg_0x7e45e0b0) {
#line 67
    case 9:
#line 67
      result = MotionDetectorM$Receive$receive(arg_0x7ed71e10, arg_0x7ed70010, arg_0x7ed70198);
#line 67
      break;
#line 67
    default:
#line 67
      result = CC2420ActiveMessageP$Receive$default$receive(arg_0x7e45e0b0, arg_0x7ed71e10, arg_0x7ed70010, arg_0x7ed70198);
#line 67
      break;
#line 67
    }
#line 67

#line 67
  return result;
#line 67
}
#line 67
# 137 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static inline  bool CC2420ActiveMessageP$AMPacket$isForMe(message_t *amsg)
#line 137
{
  return CC2420ActiveMessageP$AMPacket$destination(amsg) == CC2420ActiveMessageP$AMPacket$address() || 
  CC2420ActiveMessageP$AMPacket$destination(amsg) == AM_BROADCAST_ADDR;
}

#line 104
static inline  message_t *CC2420ActiveMessageP$SubReceive$receive(message_t *msg, void *payload, uint8_t len)
#line 104
{
  if (CC2420ActiveMessageP$AMPacket$isForMe(msg)) {
      return CC2420ActiveMessageP$Receive$receive(CC2420ActiveMessageP$AMPacket$type(msg), msg, payload, len - CC2420ActiveMessageP$CC2420_SIZE);
    }
  else {
      return CC2420ActiveMessageP$Snoop$receive(CC2420ActiveMessageP$AMPacket$type(msg), msg, payload, len - CC2420ActiveMessageP$CC2420_SIZE);
    }
}

# 67 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
inline static  message_t *CC2420ReceiveP$Receive$receive(message_t *arg_0x7ed71e10, void *arg_0x7ed70010, uint8_t arg_0x7ed70198){
#line 67
  nx_struct message_t *result;
#line 67

#line 67
  result = CC2420ActiveMessageP$SubReceive$receive(arg_0x7ed71e10, arg_0x7ed70010, arg_0x7ed70198);
#line 67

#line 67
  return result;
#line 67
}
#line 67
# 91 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420ReceiveP.nc"
static inline cc2420_metadata_t *CC2420ReceiveP$getMetadata(message_t *msg)
#line 91
{
  return (cc2420_metadata_t *)msg->metadata;
}

#line 87
static inline cc2420_header_t *CC2420ReceiveP$getHeader(message_t *msg)
#line 87
{
  return (cc2420_header_t *)(msg->data - sizeof(cc2420_header_t ));
}

#line 229
static inline  void CC2420ReceiveP$receiveDone_task$runTask(void)
#line 229
{

  cc2420_header_t *header = CC2420ReceiveP$getHeader(CC2420ReceiveP$m_p_rx_buf);
  cc2420_metadata_t *metadata = CC2420ReceiveP$getMetadata(CC2420ReceiveP$m_p_rx_buf);
  uint8_t *buf = (uint8_t *)header;
  uint8_t length = buf[0];

  __nesc_hton_int8((unsigned char *)&metadata->crc, buf[length] >> 7);
  __nesc_hton_uint8((unsigned char *)&metadata->rssi, buf[length - 1]);
  __nesc_hton_uint8((unsigned char *)&metadata->lqi, buf[length] & 0x7f);
  CC2420ReceiveP$m_p_rx_buf = CC2420ReceiveP$Receive$receive(CC2420ReceiveP$m_p_rx_buf, CC2420ReceiveP$m_p_rx_buf->data, 
  length);

  CC2420ReceiveP$waitForNextPacket();
}

# 87 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
inline static   error_t CC2420ReceiveP$SpiResource$immediateRequest(void){
#line 87
  unsigned char result;
#line 87

#line 87
  result = CC2420SpiImplP$Resource$immediateRequest(/*CC2420ReceiveC.Spi*/CC2420SpiC$3$CLIENT_ID);
#line 87

#line 87
  return result;
#line 87
}
#line 87
# 144 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420SpiImplP.nc"
static inline   error_t CC2420SpiImplP$Fifo$continueRead(uint8_t addr, uint8_t *data, 
uint8_t len)
#line 145
{
  CC2420SpiImplP$SpiPacket$send((void *)0, data, len);
  return SUCCESS;
}

#line 130
static inline   cc2420_status_t CC2420SpiImplP$Fifo$beginRead(uint8_t addr, uint8_t *data, 
uint8_t len)
#line 131
{

  cc2420_status_t status;

  CC2420SpiImplP$m_addr = addr | 0x40;

  status = CC2420SpiImplP$SpiByte$write(CC2420SpiImplP$m_addr);
  CC2420SpiImplP$Fifo$continueRead(addr, data, len);

  return status;
}

# 51 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420Fifo.nc"
inline static   cc2420_status_t CC2420ReceiveP$RXFIFO$beginRead(uint8_t *arg_0x7e1b2568, uint8_t arg_0x7e1b26f0){
#line 51
  unsigned char result;
#line 51

#line 51
  result = CC2420SpiImplP$Fifo$beginRead(CC2420_RXFIFO, arg_0x7e1b2568, arg_0x7e1b26f0);
#line 51

#line 51
  return result;
#line 51
}
#line 51
# 78 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
inline static   error_t CC2420ReceiveP$SpiResource$request(void){
#line 78
  unsigned char result;
#line 78

#line 78
  result = CC2420SpiImplP$Resource$request(/*CC2420ReceiveC.Spi*/CC2420SpiC$3$CLIENT_ID);
#line 78

#line 78
  return result;
#line 78
}
#line 78
# 55 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420Register.nc"
inline static   cc2420_status_t CC2420ControlP$MDMCTRL0$write(uint16_t arg_0x7e3cee48){
#line 55
  unsigned char result;
#line 55

#line 55
  result = CC2420SpiImplP$Reg$write(CC2420_MDMCTRL0, arg_0x7e3cee48);
#line 55

#line 55
  return result;
#line 55
}
#line 55
inline static   cc2420_status_t CC2420ControlP$FSCTRL$write(uint16_t arg_0x7e3cee48){
#line 55
  unsigned char result;
#line 55

#line 55
  result = CC2420SpiImplP$Reg$write(CC2420_FSCTRL, arg_0x7e3cee48);
#line 55

#line 55
  return result;
#line 55
}
#line 55
inline static   cc2420_status_t CC2420ControlP$IOCFG0$write(uint16_t arg_0x7e3cee48){
#line 55
  unsigned char result;
#line 55

#line 55
  result = CC2420SpiImplP$Reg$write(CC2420_IOCFG0, arg_0x7e3cee48);
#line 55

#line 55
  return result;
#line 55
}
#line 55
# 226 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420SpiImplP.nc"
static inline   cc2420_status_t CC2420SpiImplP$Strobe$strobe(uint8_t addr)
#line 226
{
  return CC2420SpiImplP$SpiByte$write(addr);
}

# 45 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420Strobe.nc"
inline static   cc2420_status_t CC2420ControlP$SXOSCON$strobe(void){
#line 45
  unsigned char result;
#line 45

#line 45
  result = CC2420SpiImplP$Strobe$strobe(CC2420_SXOSCON);
#line 45

#line 45
  return result;
#line 45
}
#line 45
# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static   error_t HplCC2420InterruptsP$CCATask$postTask(void){
#line 56
  unsigned char result;
#line 56

#line 56
  result = SchedulerBasicP$TaskBasic$postTask(HplCC2420InterruptsP$CCATask);
#line 56

#line 56
  return result;
#line 56
}
#line 56
# 45 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline   bool /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP$30$IO$get(void)
#line 45
{
#line 45
  return (* (volatile uint8_t *)48U & (1 << 6)) != 0;
}

# 32 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   bool HplCC2420InterruptsP$CC_CCA$get(void){
#line 32
  unsigned char result;
#line 32

#line 32
  result = /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP$30$IO$get();
#line 32

#line 32
  return result;
#line 32
}
#line 32
# 94 "/opt/tinyos-2.x/tos/platforms/homenet/chips/cc2420/HplCC2420InterruptsP.nc"
static inline   error_t HplCC2420InterruptsP$CCA$enableRisingEdge(void)
#line 94
{
  /* atomic removed: atomic calls only */
#line 95
  HplCC2420InterruptsP$ccaWaitForState = TRUE;
  /* atomic removed: atomic calls only */
#line 96
  HplCC2420InterruptsP$ccaTimerDisabled = FALSE;
  HplCC2420InterruptsP$ccaLastState = HplCC2420InterruptsP$CC_CCA$get();
  HplCC2420InterruptsP$CCATask$postTask();
  return SUCCESS;
}

# 42 "/opt/tinyos-2.x/tos/interfaces/GpioInterrupt.nc"
inline static   error_t CC2420ControlP$InterruptCCA$enableRisingEdge(void){
#line 42
  unsigned char result;
#line 42

#line 42
  result = HplCC2420InterruptsP$CCA$enableRisingEdge();
#line 42

#line 42
  return result;
#line 42
}
#line 42
# 55 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420Register.nc"
inline static   cc2420_status_t CC2420ControlP$IOCFG1$write(uint16_t arg_0x7e3cee48){
#line 55
  unsigned char result;
#line 55

#line 55
  result = CC2420SpiImplP$Reg$write(CC2420_IOCFG1, arg_0x7e3cee48);
#line 55

#line 55
  return result;
#line 55
}
#line 55
# 153 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420ControlP.nc"
static inline   error_t CC2420ControlP$CC2420Power$startOscillator(void)
#line 153
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 154
    {
      if (CC2420ControlP$m_state != CC2420ControlP$S_VREG_STARTED) 
        {
          unsigned char __nesc_temp = 
#line 156
          FAIL;

          {
#line 156
            __nesc_atomic_end(__nesc_atomic); 
#line 156
            return __nesc_temp;
          }
        }
#line 158
      CC2420ControlP$m_state = CC2420ControlP$S_XOSC_STARTING;
      CC2420ControlP$IOCFG1$write(CC2420_SFDMUX_XOSC16M_STABLE << 
      CC2420_IOCFG1_CCAMUX);
      CC2420ControlP$InterruptCCA$enableRisingEdge();
      CC2420ControlP$SXOSCON$strobe();
      CC2420ControlP$IOCFG0$write((1 << CC2420_IOCFG0_FIFOP_POLARITY) | (
      127 << CC2420_IOCFG0_FIFOP_THR));
      CC2420ControlP$FSCTRL$write((1 << CC2420_FSCTRL_LOCK_THR) | (((
      CC2420ControlP$m_channel - 11) * 5 + 357)
       << CC2420_FSCTRL_FREQ));
      CC2420ControlP$MDMCTRL0$write(((((((1 << CC2420_MDMCTRL0_RESERVED_FRAME_MODE) | (
      1 << CC2420_MDMCTRL0_ADR_DECODE)) | (
      2 << CC2420_MDMCTRL0_CCA_HYST)) | (
      3 << CC2420_MDMCTRL0_CCA_MOD)) | (
      1 << CC2420_MDMCTRL0_AUTOCRC)) | (
      1 << CC2420_MDMCTRL0_AUTOACK)) | (
      2 << CC2420_MDMCTRL0_PREAMBLE_LENGTH));
    }
#line 175
    __nesc_atomic_end(__nesc_atomic); }
  return SUCCESS;
}

# 71 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420Power.nc"
inline static   error_t CC2420CsmaP$CC2420Power$startOscillator(void){
#line 71
  unsigned char result;
#line 71

#line 71
  result = CC2420ControlP$CC2420Power$startOscillator();
#line 71

#line 71
  return result;
#line 71
}
#line 71
# 111 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420CsmaP.nc"
static inline  void CC2420CsmaP$Resource$granted(void)
#line 111
{
  CC2420CsmaP$CC2420Power$startOscillator();
}

# 92 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
inline static  void CC2420ControlP$Resource$granted(void){
#line 92
  CC2420CsmaP$Resource$granted();
#line 92
}
#line 92
# 30 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   void CC2420ControlP$CSN$clr(void){
#line 30
  /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP$8$IO$clr();
#line 30
}
#line 30
# 120 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420ControlP.nc"
static inline  void CC2420ControlP$SpiResource$granted(void)
#line 120
{
  CC2420ControlP$CSN$clr();
  CC2420ControlP$Resource$granted();
}

# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static   error_t CC2420ControlP$syncDone_task$postTask(void){
#line 56
  unsigned char result;
#line 56

#line 56
  result = SchedulerBasicP$TaskBasic$postTask(CC2420ControlP$syncDone_task);
#line 56

#line 56
  return result;
#line 56
}
#line 56
# 101 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
inline static   error_t CC2420ControlP$SyncResource$release(void){
#line 101
  unsigned char result;
#line 101

#line 101
  result = CC2420SpiImplP$Resource$release(/*CC2420ControlC.SyncSpiC*/CC2420SpiC$1$CLIENT_ID);
#line 101

#line 101
  return result;
#line 101
}
#line 101
# 46 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline   void /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP$8$IO$set(void)
#line 46
{
#line 46
  * (volatile uint8_t *)56U |= 1 << 0;
}

# 29 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   void CC2420ControlP$CSN$set(void){
#line 29
  /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP$8$IO$set();
#line 29
}
#line 29
# 63 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420Ram.nc"
inline static   cc2420_status_t CC2420ControlP$PANID$write(uint8_t arg_0x7e3d2920, uint8_t *arg_0x7e3d2ac8, uint8_t arg_0x7e3d2c50){
#line 63
  unsigned char result;
#line 63

#line 63
  result = CC2420SpiImplP$Ram$write(CC2420_RAM_PANID, arg_0x7e3d2920, arg_0x7e3d2ac8, arg_0x7e3d2c50);
#line 63

#line 63
  return result;
#line 63
}
#line 63
# 257 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420ControlP.nc"
static inline  void CC2420ControlP$SyncResource$granted(void)
#line 257
{

  nxle_uint16_t id[2];
  uint8_t channel;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 262
    {
      channel = CC2420ControlP$m_channel;
      __nesc_hton_leuint16((unsigned char *)&id[0], CC2420ControlP$m_pan);
      __nesc_hton_leuint16((unsigned char *)&id[1], CC2420ControlP$m_short_addr);
    }
#line 266
    __nesc_atomic_end(__nesc_atomic); }

  CC2420ControlP$CSN$clr();
  CC2420ControlP$FSCTRL$write((1 << CC2420_FSCTRL_LOCK_THR) | (((
  channel - 11) * 5 + 357) << CC2420_FSCTRL_FREQ));
  CC2420ControlP$PANID$write(0, (uint8_t *)id, sizeof id);
  CC2420ControlP$CSN$set();
  CC2420ControlP$SyncResource$release();

  CC2420ControlP$syncDone_task$postTask();
}

# 101 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
inline static   error_t CC2420TransmitP$SpiResource$release(void){
#line 101
  unsigned char result;
#line 101

#line 101
  result = CC2420SpiImplP$Resource$release(/*CC2420TransmitC.Spi*/CC2420SpiC$2$CLIENT_ID);
#line 101

#line 101
  return result;
#line 101
}
#line 101
# 120 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420TransmitP.nc"
static inline error_t CC2420TransmitP$releaseSpiResource(void)
#line 120
{
  return CC2420TransmitP$SpiResource$release();
}

#line 429
static inline  void CC2420TransmitP$SpiResource$granted(void)
#line 429
{

  uint8_t cur_state;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 433
    {
      cur_state = CC2420TransmitP$m_state;
    }
#line 435
    __nesc_atomic_end(__nesc_atomic); }

  switch (cur_state) {
      case CC2420TransmitP$S_LOAD: CC2420TransmitP$loadTXFIFO();
#line 438
      break;
      case CC2420TransmitP$S_BEGIN_TRANSMIT: CC2420TransmitP$attemptSend();
#line 439
      break;
      default: CC2420TransmitP$releaseSpiResource();
#line 440
      break;
    }
}

# 152 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420ReceiveP.nc"
static inline  void CC2420ReceiveP$SpiResource$granted(void)
#line 152
{
  CC2420ReceiveP$receive();
}

# 64 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420SpiImplP.nc"
static inline   void CC2420SpiImplP$Resource$default$granted(uint8_t id)
#line 64
{
}

# 92 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
inline static  void CC2420SpiImplP$Resource$granted(uint8_t arg_0x7e1966c0){
#line 92
  switch (arg_0x7e1966c0) {
#line 92
    case /*CC2420ControlC.Spi*/CC2420SpiC$0$CLIENT_ID:
#line 92
      CC2420ControlP$SpiResource$granted();
#line 92
      break;
#line 92
    case /*CC2420ControlC.SyncSpiC*/CC2420SpiC$1$CLIENT_ID:
#line 92
      CC2420ControlP$SyncResource$granted();
#line 92
      break;
#line 92
    case /*CC2420TransmitC.Spi*/CC2420SpiC$2$CLIENT_ID:
#line 92
      CC2420TransmitP$SpiResource$granted();
#line 92
      break;
#line 92
    case /*CC2420ReceiveC.Spi*/CC2420SpiC$3$CLIENT_ID:
#line 92
      CC2420ReceiveP$SpiResource$granted();
#line 92
      break;
#line 92
    default:
#line 92
      CC2420SpiImplP$Resource$default$granted(arg_0x7e1966c0);
#line 92
      break;
#line 92
    }
#line 92
}
#line 92
# 124 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420SpiImplP.nc"
static inline  void CC2420SpiImplP$SpiResource$granted(void)
#line 124
{
  uint8_t holder;

#line 126
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 126
    holder = CC2420SpiImplP$m_holder;
#line 126
    __nesc_atomic_end(__nesc_atomic); }
  CC2420SpiImplP$Resource$granted(holder);
}

# 312 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
static inline   void Atm128SpiP$Resource$default$granted(uint8_t id)
#line 312
{
}

# 92 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
inline static  void Atm128SpiP$Resource$granted(uint8_t arg_0x7e133010){
#line 92
  switch (arg_0x7e133010) {
#line 92
    case 0U:
#line 92
      CC2420SpiImplP$SpiResource$granted();
#line 92
      break;
#line 92
    default:
#line 92
      Atm128SpiP$Resource$default$granted(arg_0x7e133010);
#line 92
      break;
#line 92
    }
#line 92
}
#line 92
# 308 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
static inline  void Atm128SpiP$ResourceArbiter$granted(uint8_t id)
#line 308
{
  Atm128SpiP$Resource$granted(id);
}

# 92 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
inline static  void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$Resource$granted(uint8_t arg_0x7e07c200){
#line 92
  Atm128SpiP$ResourceArbiter$granted(arg_0x7e07c200);
#line 92
}
#line 92
# 152 "/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
static inline  void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$grantedTask$runTask(void)
#line 152
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 153
    {
      /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$resId = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$reqResId;
      /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$state = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$RES_BUSY;
    }
#line 156
    __nesc_atomic_end(__nesc_atomic); }
  /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceConfigure$configure(/*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$resId);
  /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$Resource$granted(/*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$resId);
}

# 45 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420Strobe.nc"
inline static   cc2420_status_t CC2420TransmitP$STXONCCA$strobe(void){
#line 45
  unsigned char result;
#line 45

#line 45
  result = CC2420SpiImplP$Strobe$strobe(CC2420_STXONCCA);
#line 45

#line 45
  return result;
#line 45
}
#line 45
inline static   cc2420_status_t CC2420TransmitP$STXON$strobe(void){
#line 45
  unsigned char result;
#line 45

#line 45
  result = CC2420SpiImplP$Strobe$strobe(CC2420_STXON);
#line 45

#line 45
  return result;
#line 45
}
#line 45
inline static   cc2420_status_t CC2420TransmitP$SNOP$strobe(void){
#line 45
  unsigned char result;
#line 45

#line 45
  result = CC2420SpiImplP$Strobe$strobe(CC2420_SNOP);
#line 45

#line 45
  return result;
#line 45
}
#line 45
# 44 "/opt/tinyos-2.x/tos/interfaces/McuPowerState.nc"
inline static   void Atm128SpiP$McuPowerState$update(void){
#line 44
  McuSleepC$McuPowerState$update();
#line 44
}
#line 44
# 29 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   void HplAtm128SpiP$SS$set(void){
#line 29
  /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP$8$IO$set();
#line 29
}
#line 29
# 95 "/opt/tinyos-2.x/tos/chips/atm128/spi/HplAtm128SpiP.nc"
static inline   void HplAtm128SpiP$SPI$sleep(void)
#line 95
{
  HplAtm128SpiP$SS$set();
}

# 72 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128Spi.nc"
inline static   void Atm128SpiP$Spi$sleep(void){
#line 72
  HplAtm128SpiP$SPI$sleep();
#line 72
}
#line 72
#line 99
inline static   void Atm128SpiP$Spi$enableSpi(bool arg_0x7e11cc48){
#line 99
  HplAtm128SpiP$SPI$enableSpi(arg_0x7e11cc48);
#line 99
}
#line 99
# 120 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
static inline void Atm128SpiP$stopSpi(void)
#line 120
{
  Atm128SpiP$Spi$enableSpi(FALSE);
  Atm128SpiP$started = FALSE;
  /* atomic removed: atomic calls only */
#line 123
  {
    Atm128SpiP$Spi$sleep();
  }
  Atm128SpiP$McuPowerState$update();
}

# 80 "/opt/tinyos-2.x/tos/interfaces/ArbiterInfo.nc"
inline static   bool Atm128SpiP$ArbiterInfo$inUse(void){
#line 80
  unsigned char result;
#line 80

#line 80
  result = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ArbiterInfo$inUse();
#line 80

#line 80
  return result;
#line 80
}
#line 80
# 170 "/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
static inline    void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceConfigure$default$unconfigure(uint8_t id)
#line 170
{
}

# 55 "/opt/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
inline static   void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceConfigure$unconfigure(uint8_t arg_0x7e07b650){
#line 55
    /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceConfigure$default$unconfigure(arg_0x7e07b650);
#line 55
}
#line 55
# 58 "/opt/tinyos-2.x/tos/system/FcfsResourceQueueC.nc"
static inline   resource_client_id_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$1$FcfsQueue$dequeue(void)
#line 58
{
  /* atomic removed: atomic calls only */
#line 59
  {
    if (/*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$1$qHead != /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$1$NO_ENTRY) {
        uint8_t id = /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$1$qHead;

#line 62
        /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$1$qHead = /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$1$resQ[/*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$1$qHead];
        if (/*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$1$qHead == /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$1$NO_ENTRY) {
          /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$1$qTail = /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$1$NO_ENTRY;
          }
#line 65
        /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$1$resQ[id] = /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$1$NO_ENTRY;
        {
          unsigned char __nesc_temp = 
#line 66
          id;

#line 66
          return __nesc_temp;
        }
      }
#line 68
    {
      unsigned char __nesc_temp = 
#line 68
      /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$1$NO_ENTRY;

#line 68
      return __nesc_temp;
    }
  }
}

# 60 "/opt/tinyos-2.x/tos/interfaces/ResourceQueue.nc"
inline static   resource_client_id_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$Queue$dequeue(void){
#line 60
  unsigned char result;
#line 60

#line 60
  result = /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$1$FcfsQueue$dequeue();
#line 60

#line 60
  return result;
#line 60
}
#line 60
# 50 "/opt/tinyos-2.x/tos/system/FcfsResourceQueueC.nc"
static inline   bool /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$1$FcfsQueue$isEmpty(void)
#line 50
{
  return /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$1$qHead == /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$1$NO_ENTRY;
}

# 43 "/opt/tinyos-2.x/tos/interfaces/ResourceQueue.nc"
inline static   bool /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$Queue$isEmpty(void){
#line 43
  unsigned char result;
#line 43

#line 43
  result = /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$1$FcfsQueue$isEmpty();
#line 43

#line 43
  return result;
#line 43
}
#line 43
# 99 "/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
static inline   error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$Resource$release(uint8_t id)
#line 99
{
  bool released = FALSE;

  /* atomic removed: atomic calls only */
#line 101
  {
    if (/*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$state == /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$RES_BUSY && /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$resId == id) {
        if (/*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$Queue$isEmpty() == FALSE) {
            /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$reqResId = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$Queue$dequeue();
            /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$state = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$RES_GRANTING;
            /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$grantedTask$postTask();
          }
        else {
            /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$resId = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$NO_RES;
            /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$state = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$RES_IDLE;
          }
        released = TRUE;
      }
  }
  if (released == TRUE) {
      /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceConfigure$unconfigure(id);
      return SUCCESS;
    }
  return FAIL;
}

# 101 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
inline static   error_t Atm128SpiP$ResourceArbiter$release(uint8_t arg_0x7e130410){
#line 101
  unsigned char result;
#line 101

#line 101
  result = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$Resource$release(arg_0x7e130410);
#line 101

#line 101
  return result;
#line 101
}
#line 101
# 294 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
static inline   error_t Atm128SpiP$Resource$release(uint8_t id)
#line 294
{
  error_t error = Atm128SpiP$ResourceArbiter$release(id);

  /* atomic removed: atomic calls only */
#line 296
  {
    if (!Atm128SpiP$ArbiterInfo$inUse()) {
        Atm128SpiP$stopSpi();
      }
  }
  return error;
}

# 101 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
inline static   error_t CC2420SpiImplP$SpiResource$release(void){
#line 101
  unsigned char result;
#line 101

#line 101
  result = Atm128SpiP$Resource$release(0U);
#line 101

#line 101
  return result;
#line 101
}
#line 101
# 78 "/opt/tinyos-2.x/tos/system/RandomMlcgP.nc"
static inline   uint16_t RandomMlcgP$Random$rand16(void)
#line 78
{
  return (uint16_t )RandomMlcgP$Random$rand32();
}

# 41 "/opt/tinyos-2.x/tos/interfaces/Random.nc"
inline static   uint16_t CC2420CsmaP$Random$rand16(void){
#line 41
  unsigned int result;
#line 41

#line 41
  result = RandomMlcgP$Random$rand16();
#line 41

#line 41
  return result;
#line 41
}
#line 41
# 194 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420CsmaP.nc"
static inline   uint16_t CC2420CsmaP$CsmaBackoff$congestion(message_t *m)
#line 194
{
  return (CC2420CsmaP$Random$rand16() & 0x7) + 1;
}

# 43 "/opt/tinyos-2.x/tos/interfaces/CsmaBackoff.nc"
inline static   uint16_t CC2420TransmitP$CsmaBackoff$congestion(message_t *arg_0x7e40eb10){
#line 43
  unsigned int result;
#line 43

#line 43
  result = CC2420CsmaP$CsmaBackoff$congestion(arg_0x7e40eb10);
#line 43

#line 43
  return result;
#line 43
}
#line 43
# 49 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer1P.nc"
static inline   uint16_t HplAtm128Timer1P$Timer$get(void)
#line 49
{
#line 49
  return * (volatile uint16_t *)(0x2C + 0x20);
}

# 52 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static   /*CounterOne16C.NCounter*/Atm128CounterC$1$Timer$timer_size /*CounterOne16C.NCounter*/Atm128CounterC$1$Timer$get(void){
#line 52
  unsigned int result;
#line 52

#line 52
  result = HplAtm128Timer1P$Timer$get();
#line 52

#line 52
  return result;
#line 52
}
#line 52
# 41 "/opt/tinyos-2.x/tos/chips/atm128/timer/Atm128CounterC.nc"
static inline   /*CounterOne16C.NCounter*/Atm128CounterC$1$timer_size /*CounterOne16C.NCounter*/Atm128CounterC$1$Counter$get(void)
{
  return /*CounterOne16C.NCounter*/Atm128CounterC$1$Timer$get();
}

# 53 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
inline static   /*Counter32khz32C.Transform32*/TransformCounterC$0$CounterFrom$size_type /*Counter32khz32C.Transform32*/TransformCounterC$0$CounterFrom$get(void){
#line 53
  unsigned int result;
#line 53

#line 53
  result = /*CounterOne16C.NCounter*/Atm128CounterC$1$Counter$get();
#line 53

#line 53
  return result;
#line 53
}
#line 53
# 103 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer0AsyncC.nc"
static inline   Atm128_TIFR_t HplAtm128Timer0AsyncC$TimerCtrl$getInterruptFlag(void)
#line 103
{
  return * (Atm128_TIFR_t *)& * (volatile uint8_t *)(0x36 + 0x20);
}

# 44 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128TimerCtrl8.nc"
inline static   Atm128_TIFR_t HplAtm128Timer1P$Timer0Ctrl$getInterruptFlag(void){
#line 44
  union __nesc_unnamed4272 result;
#line 44

#line 44
  result = HplAtm128Timer0AsyncC$TimerCtrl$getInterruptFlag();
#line 44

#line 44
  return result;
#line 44
}
#line 44
# 144 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer1P.nc"
static inline   bool HplAtm128Timer1P$Timer$test(void)
#line 144
{
  return HplAtm128Timer1P$Timer0Ctrl$getInterruptFlag().bits.tov1;
}

# 78 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static   bool /*CounterOne16C.NCounter*/Atm128CounterC$1$Timer$test(void){
#line 78
  unsigned char result;
#line 78

#line 78
  result = HplAtm128Timer1P$Timer$test();
#line 78

#line 78
  return result;
#line 78
}
#line 78
# 46 "/opt/tinyos-2.x/tos/chips/atm128/timer/Atm128CounterC.nc"
static inline   bool /*CounterOne16C.NCounter*/Atm128CounterC$1$Counter$isOverflowPending(void)
{
  return /*CounterOne16C.NCounter*/Atm128CounterC$1$Timer$test();
}

# 60 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
inline static   bool /*Counter32khz32C.Transform32*/TransformCounterC$0$CounterFrom$isOverflowPending(void){
#line 60
  unsigned char result;
#line 60

#line 60
  result = /*CounterOne16C.NCounter*/Atm128CounterC$1$Counter$isOverflowPending();
#line 60

#line 60
  return result;
#line 60
}
#line 60
# 133 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer1P.nc"
static inline   void HplAtm128Timer1P$CompareA$start(void)
#line 133
{
#line 133
  * (volatile uint8_t *)(0x37 + 0x20) |= 1 << 4;
}

# 56 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static   void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$1$HplAtm128Compare$start(void){
#line 56
  HplAtm128Timer1P$CompareA$start();
#line 56
}
#line 56
# 127 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer1P.nc"
static inline   void HplAtm128Timer1P$CompareA$reset(void)
#line 127
{
#line 127
  * (volatile uint8_t *)(0x36 + 0x20) = 1 << 4;
}

# 53 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static   void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$1$HplAtm128Compare$reset(void){
#line 53
  HplAtm128Timer1P$CompareA$reset();
#line 53
}
#line 53
# 183 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer1P.nc"
static inline   void HplAtm128Timer1P$CompareA$set(uint16_t t)
#line 183
{
#line 183
  * (volatile uint16_t *)(0x2A + 0x20) = t;
}

# 45 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static   void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$1$HplAtm128Compare$set(/*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$1$HplAtm128Compare$size_type arg_0x7e9e2a20){
#line 45
  HplAtm128Timer1P$CompareA$set(arg_0x7e9e2a20);
#line 45
}
#line 45
# 52 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static   /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$1$HplAtm128Timer$timer_size /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$1$HplAtm128Timer$get(void){
#line 52
  unsigned int result;
#line 52

#line 52
  result = HplAtm128Timer1P$Timer$get();
#line 52

#line 52
  return result;
#line 52
}
#line 52
# 74 "/opt/tinyos-2.x/tos/chips/atm128/timer/Atm128AlarmC.nc"
static inline   void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$1$Alarm$startAt(/*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$1$timer_size t0, /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$1$timer_size dt)
#line 74
{
  /* atomic removed: atomic calls only */






  {
    /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$1$timer_size now;
#line 83
    /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$1$timer_size elapsed;
#line 83
    /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$1$timer_size expires;

    ;


    now = /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$1$HplAtm128Timer$get();
    elapsed = now + 3 - t0;
    if (elapsed >= dt) {
      expires = now + 3;
      }
    else {
#line 93
      expires = t0 + dt;
      }



    if (expires == 0) {
      expires = 1;
      }



    /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$1$HplAtm128Compare$set(expires - 1);
    /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$1$HplAtm128Compare$reset();
    /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$1$HplAtm128Compare$start();
  }
}

# 92 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static   void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$AlarmFrom$startAt(/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$AlarmFrom$size_type arg_0x7ea22350, /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$AlarmFrom$size_type arg_0x7ea224e0){
#line 92
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$1$Alarm$startAt(arg_0x7ea22350, arg_0x7ea224e0);
#line 92
}
#line 92
# 152 "/opt/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
static inline  void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$stop(uint8_t num)
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$m_timers[num].isrunning = FALSE;
}

# 67 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static  void HplCC2420InterruptsP$CCATimer$stop(void){
#line 67
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$stop(3U);
#line 67
}
#line 67
# 113 "/opt/tinyos-2.x/tos/platforms/homenet/chips/cc2420/HplCC2420InterruptsP.nc"
static inline void  HplCC2420InterruptsP$stopTask$runTask(void)
#line 113
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 114
    {
      if (HplCC2420InterruptsP$ccaTimerDisabled) {
          HplCC2420InterruptsP$CCATimer$stop();
        }
    }
#line 118
    __nesc_atomic_end(__nesc_atomic); }
}

# 158 "/opt/tinyos-2.x/tos/lib/timer/TransformAlarmCounterC.nc"
static inline   /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$to_size_type /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$Alarm$getNow(void)
{
  return /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$Counter$get();
}

# 98 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static   /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$size_type /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$getNow(void){
#line 98
  unsigned long result;
#line 98

#line 98
  result = /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$Alarm$getNow();
#line 98

#line 98
  return result;
#line 98
}
#line 98
# 85 "/opt/tinyos-2.x/tos/lib/timer/AlarmToTimerC.nc"
static inline  uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$getNow(void)
{
#line 86
  return /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$getNow();
}

# 125 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static  uint32_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$getNow(void){
#line 125
  unsigned long result;
#line 125

#line 125
  result = /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$getNow();
#line 125

#line 125
  return result;
#line 125
}
#line 125
# 147 "/opt/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
static inline  void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startOneShot(uint8_t num, uint32_t dt)
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$startTimer(num, /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$getNow(), dt, TRUE);
}

# 62 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static  void HplCC2420InterruptsP$CCATimer$startOneShot(uint32_t arg_0x7ee62ca8){
#line 62
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startOneShot(3U, arg_0x7ee62ca8);
#line 62
}
#line 62
# 87 "/opt/tinyos-2.x/tos/platforms/homenet/chips/cc2420/HplCC2420InterruptsP.nc"
static inline  void HplCC2420InterruptsP$CCATask$runTask(void)
#line 87
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 88
    {
      if (!HplCC2420InterruptsP$ccaTimerDisabled) {
        HplCC2420InterruptsP$CCATimer$startOneShot(1);
        }
    }
#line 92
    __nesc_atomic_end(__nesc_atomic); }
}

# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static   error_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$updateFromTimer$postTask(void){
#line 56
  unsigned char result;
#line 56

#line 56
  result = SchedulerBasicP$TaskBasic$postTask(/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$updateFromTimer);
#line 56

#line 56
  return result;
#line 56
}
#line 56
# 55 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer0AsyncC.nc"
static inline   uint8_t HplAtm128Timer0AsyncC$Timer$get(void)
#line 55
{
#line 55
  return * (volatile uint8_t *)(0x32 + 0x20);
}

# 52 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static   /*AlarmCounterMilliP.MilliCounter*/Atm128CounterC$0$Timer$timer_size /*AlarmCounterMilliP.MilliCounter*/Atm128CounterC$0$Timer$get(void){
#line 52
  unsigned char result;
#line 52

#line 52
  result = HplAtm128Timer0AsyncC$Timer$get();
#line 52

#line 52
  return result;
#line 52
}
#line 52
# 41 "/opt/tinyos-2.x/tos/chips/atm128/timer/Atm128CounterC.nc"
static inline   /*AlarmCounterMilliP.MilliCounter*/Atm128CounterC$0$timer_size /*AlarmCounterMilliP.MilliCounter*/Atm128CounterC$0$Counter$get(void)
{
  return /*AlarmCounterMilliP.MilliCounter*/Atm128CounterC$0$Timer$get();
}

# 53 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
inline static   /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$CounterFrom$size_type /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$CounterFrom$get(void){
#line 53
  unsigned char result;
#line 53

#line 53
  result = /*AlarmCounterMilliP.MilliCounter*/Atm128CounterC$0$Counter$get();
#line 53

#line 53
  return result;
#line 53
}
#line 53
# 120 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer0AsyncC.nc"
static inline bool HplAtm128Timer0AsyncC$overflowed(void)
#line 120
{
  return HplAtm128Timer0AsyncC$TimerCtrl$getInterruptFlag().bits.tov0;
}

static inline   bool HplAtm128Timer0AsyncC$Timer$test(void)
#line 124
{
  return HplAtm128Timer0AsyncC$overflowed();
}

# 78 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static   bool /*AlarmCounterMilliP.MilliCounter*/Atm128CounterC$0$Timer$test(void){
#line 78
  unsigned char result;
#line 78

#line 78
  result = HplAtm128Timer0AsyncC$Timer$test();
#line 78

#line 78
  return result;
#line 78
}
#line 78
# 46 "/opt/tinyos-2.x/tos/chips/atm128/timer/Atm128CounterC.nc"
static inline   bool /*AlarmCounterMilliP.MilliCounter*/Atm128CounterC$0$Counter$isOverflowPending(void)
{
  return /*AlarmCounterMilliP.MilliCounter*/Atm128CounterC$0$Timer$test();
}

# 60 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
inline static   bool /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$CounterFrom$isOverflowPending(void){
#line 60
  unsigned char result;
#line 60

#line 60
  result = /*AlarmCounterMilliP.MilliCounter*/Atm128CounterC$0$Counter$isOverflowPending();
#line 60

#line 60
  return result;
#line 60
}
#line 60
# 284 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420ControlP.nc"
static inline   void CC2420ControlP$CC2420Config$default$syncDone(error_t error)
#line 284
{
}

# 53 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420Config.nc"
inline static  void CC2420ControlP$CC2420Config$syncDone(error_t arg_0x7e3e3330){
#line 53
  CC2420ControlP$CC2420Config$default$syncDone(arg_0x7e3e3330);
#line 53
}
#line 53
# 279 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420ControlP.nc"
static inline  void CC2420ControlP$syncDone_task$runTask(void)
#line 279
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 280
    CC2420ControlP$m_sync_busy = FALSE;
#line 280
    __nesc_atomic_end(__nesc_atomic); }
  CC2420ControlP$CC2420Config$syncDone(SUCCESS);
}

# 166 "/opt/tinyos-2.x/tos/system/AMQueueImplP.nc"
static inline  void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMSend$sendDone(am_id_t id, message_t *msg, error_t err)
#line 166
{
  if (/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue[/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current].msg == msg) {
      uint8_t last = /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current;

#line 169
      ;
      /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue[last].msg = (void *)0;
      /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$tryToSend();
      /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$sendDone(last, msg, err);
    }
}

# 99 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
inline static  void CC2420ActiveMessageP$AMSend$sendDone(am_id_t arg_0x7e460758, message_t *arg_0x7ed74030, error_t arg_0x7ed741b8){
#line 99
  /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMSend$sendDone(arg_0x7e460758, arg_0x7ed74030, arg_0x7ed741b8);
#line 99
}
#line 99
# 98 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static inline  void CC2420ActiveMessageP$SubSend$sendDone(message_t *msg, error_t result)
#line 98
{
  CC2420ActiveMessageP$AMSend$sendDone(CC2420ActiveMessageP$AMPacket$type(msg), msg, result);
}

# 89 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
inline static  void CC2420CsmaP$Send$sendDone(message_t *arg_0x7e456598, error_t arg_0x7e456720){
#line 89
  CC2420ActiveMessageP$SubSend$sendDone(arg_0x7e456598, arg_0x7e456720);
#line 89
}
#line 89
# 203 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420CsmaP.nc"
static inline  void CC2420CsmaP$sendDone_task$runTask(void)
#line 203
{
  error_t packetErr;

#line 205
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 205
    packetErr = CC2420CsmaP$sendErr;
#line 205
    __nesc_atomic_end(__nesc_atomic); }
  CC2420CsmaP$m_state = CC2420CsmaP$S_STARTED;
  CC2420CsmaP$Send$sendDone(CC2420CsmaP$m_msg, packetErr);
}

# 52 "MotionDetectorM.nc"
static inline  void MotionDetectorM$CommControl$stopDone(error_t error)
#line 52
{
}

# 110 "/opt/tinyos-2.x/tos/interfaces/SplitControl.nc"
inline static  void CC2420CsmaP$SplitControl$stopDone(error_t arg_0x7ee000f8){
#line 110
  MotionDetectorM$CommControl$stopDone(arg_0x7ee000f8);
#line 110
}
#line 110
# 142 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420CsmaP.nc"
static inline  void CC2420CsmaP$stopDone_task$runTask(void)
#line 142
{
  CC2420CsmaP$m_state = CC2420CsmaP$S_STOPPED;
  CC2420CsmaP$SplitControl$stopDone(SUCCESS);
}

# 50 "MotionDetectorM.nc"
static inline  void MotionDetectorM$CommControl$startDone(error_t error)
#line 50
{
}

# 88 "/opt/tinyos-2.x/tos/interfaces/SplitControl.nc"
inline static  void CC2420CsmaP$SplitControl$startDone(error_t arg_0x7ee01578){
#line 88
  MotionDetectorM$CommControl$startDone(arg_0x7ee01578);
#line 88
}
#line 88
# 122 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420CsmaP.nc"
static inline  void CC2420CsmaP$startDone_task$runTask(void)
#line 122
{
  CC2420CsmaP$m_state = CC2420CsmaP$S_STARTED;
  CC2420CsmaP$SplitControl$startDone(SUCCESS);
}

# 78 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
inline static   error_t /*MotionDetectorC.SensirionSht11C.SensirionSht11ReaderP*/SensirionSht11ReaderP$0$TempResource$request(void){
#line 78
  unsigned char result;
#line 78

#line 78
  result = /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP$0$Resource$request(/*MotionDetectorC.SensirionSht11C*/SensirionSht11C$0$TEMP_KEY);
#line 78

#line 78
  return result;
#line 78
}
#line 78
# 53 "/opt/tinyos-2.x/tos/sensorboards/homenet_sensor/sht11/SensirionSht11ReaderP.nc"
static inline  error_t /*MotionDetectorC.SensirionSht11C.SensirionSht11ReaderP*/SensirionSht11ReaderP$0$Temperature$read(void)
#line 53
{
  /*MotionDetectorC.SensirionSht11C.SensirionSht11ReaderP*/SensirionSht11ReaderP$0$TempResource$request();
  return SUCCESS;
}

# 55 "/opt/tinyos-2.x/tos/interfaces/Read.nc"
inline static  error_t MotionDetectorM$Read_Temp$read(void){
#line 55
  unsigned char result;
#line 55

#line 55
  result = /*MotionDetectorC.SensirionSht11C.SensirionSht11ReaderP*/SensirionSht11ReaderP$0$Temperature$read();
#line 55

#line 55
  return result;
#line 55
}
#line 55
# 58 "MotionDetectorM.nc"
static inline  void MotionDetectorM$Read_Photo$readDone(error_t err, uint16_t val)
#line 58
{
  if (err == SUCCESS) {
    MotionDetectorM$myPhoto = val;
    }
#line 61
  MotionDetectorM$Read_Temp$read();
}

# 63 "/opt/tinyos-2.x/tos/interfaces/Read.nc"
inline static  void /*MotionDetectorC.PhotoSensorC.DemoChannel.ADC_ShiftM*/ADC_ShiftM$0$Read$readDone(error_t arg_0x7ee20010, /*MotionDetectorC.PhotoSensorC.DemoChannel.ADC_ShiftM*/ADC_ShiftM$0$Read$val_t arg_0x7ee20198){
#line 63
  MotionDetectorM$Read_Photo$readDone(arg_0x7ee20010, arg_0x7ee20198);
#line 63
}
#line 63
# 37 "/opt/tinyos-2.x/tos/sensorboards/homenet_sensor/ADC_ShiftM.nc"
static inline  void /*MotionDetectorC.PhotoSensorC.DemoChannel.ADC_ShiftM*/ADC_ShiftM$0$subRead$readDone(error_t result, uint16_t val)
#line 37
{
  /*MotionDetectorC.PhotoSensorC.DemoChannel.ADC_ShiftM*/ADC_ShiftM$0$Read$readDone(result, val >> 6);
}

# 84 "MotionDetectorM.nc"
static inline  void MotionDetectorM$Read_Ultrared$readDone(error_t err, uint16_t val)
#line 84
{
  if (err == SUCCESS) {
    MotionDetectorM$myUltrared = val;
    }
}

# 63 "/opt/tinyos-2.x/tos/interfaces/Read.nc"
inline static  void /*MotionDetectorC.UltraredSensorC.DemoChannel.ADC_ShiftM*/ADC_ShiftM$1$Read$readDone(error_t arg_0x7ee20010, /*MotionDetectorC.UltraredSensorC.DemoChannel.ADC_ShiftM*/ADC_ShiftM$1$Read$val_t arg_0x7ee20198){
#line 63
  MotionDetectorM$Read_Ultrared$readDone(arg_0x7ee20010, arg_0x7ee20198);
#line 63
}
#line 63
# 37 "/opt/tinyos-2.x/tos/sensorboards/homenet_sensor/ADC_ShiftM.nc"
static inline  void /*MotionDetectorC.UltraredSensorC.DemoChannel.ADC_ShiftM*/ADC_ShiftM$1$subRead$readDone(error_t result, uint16_t val)
#line 37
{
  /*MotionDetectorC.UltraredSensorC.DemoChannel.ADC_ShiftM*/ADC_ShiftM$1$Read$readDone(result, val >> 6);
}

# 44 "/opt/tinyos-2.x/tos/system/ArbitratedReadC.nc"
static inline    error_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$Resource$default$request(uint8_t client)
#line 44
{
  return FAIL;
}

# 78 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
inline static   error_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$Resource$request(uint8_t arg_0x7e50a188){
#line 78
  unsigned char result;
#line 78

#line 78
  switch (arg_0x7e50a188) {
#line 78
    case /*MotionDetectorC.PhotoSensorC.DemoChannel.PhotoProC.AdcReadClientC*/AdcReadClientC$0$ID:
#line 78
      result = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$1$Resource$request(/*MotionDetectorC.PhotoSensorC.DemoChannel.PhotoProC.AdcReadClientC*/AdcReadClientC$0$HAL_ID);
#line 78
      break;
#line 78
    case /*MotionDetectorC.UltraredSensorC.DemoChannel.UltraredProC.AdcReadClientC*/AdcReadClientC$1$ID:
#line 78
      result = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$1$Resource$request(/*MotionDetectorC.UltraredSensorC.DemoChannel.UltraredProC.AdcReadClientC*/AdcReadClientC$1$HAL_ID);
#line 78
      break;
#line 78
    case /*MotionDetectorC.VoltageC.VoltageProC.AdcReadClientC*/AdcReadClientC$2$ID:
#line 78
      result = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$1$Resource$request(/*MotionDetectorC.VoltageC.VoltageProC.AdcReadClientC*/AdcReadClientC$2$HAL_ID);
#line 78
      break;
#line 78
    case /*MotionDetectorC.PirSensorC.DemoChannel.AdcReadClientC*/AdcReadClientC$3$ID:
#line 78
      result = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$1$Resource$request(/*MotionDetectorC.PirSensorC.DemoChannel.AdcReadClientC*/AdcReadClientC$3$HAL_ID);
#line 78
      break;
#line 78
    default:
#line 78
      result = /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$Resource$default$request(arg_0x7e50a188);
#line 78
      break;
#line 78
    }
#line 78

#line 78
  return result;
#line 78
}
#line 78
# 31 "/opt/tinyos-2.x/tos/system/ArbitratedReadC.nc"
static inline  error_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$Read$read(uint8_t client)
#line 31
{
  return /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$Resource$request(client);
}

# 55 "/opt/tinyos-2.x/tos/interfaces/Read.nc"
inline static  error_t /*MotionDetectorC.UltraredSensorC.DemoChannel.ADC_ShiftM*/ADC_ShiftM$1$subRead$read(void){
#line 55
  unsigned char result;
#line 55

#line 55
  result = /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$Read$read(/*MotionDetectorC.UltraredSensorC.DemoChannel.UltraredProC.AdcReadClientC*/AdcReadClientC$1$ID);
#line 55

#line 55
  return result;
#line 55
}
#line 55
# 33 "/opt/tinyos-2.x/tos/sensorboards/homenet_sensor/ADC_ShiftM.nc"
static inline  error_t /*MotionDetectorC.UltraredSensorC.DemoChannel.ADC_ShiftM*/ADC_ShiftM$1$Read$read(void)
#line 33
{
  return /*MotionDetectorC.UltraredSensorC.DemoChannel.ADC_ShiftM*/ADC_ShiftM$1$subRead$read();
}

# 55 "/opt/tinyos-2.x/tos/interfaces/Read.nc"
inline static  error_t MotionDetectorM$Read_Ultrared$read(void){
#line 55
  unsigned char result;
#line 55

#line 55
  result = /*MotionDetectorC.UltraredSensorC.DemoChannel.ADC_ShiftM*/ADC_ShiftM$1$Read$read();
#line 55

#line 55
  return result;
#line 55
}
#line 55
# 78 "MotionDetectorM.nc"
static inline  void MotionDetectorM$Read_Voltage$readDone(error_t err, uint16_t val)
#line 78
{
  if (err == SUCCESS) {
    MotionDetectorM$myBattery = val;
    }
#line 81
  MotionDetectorM$Read_Ultrared$read();
}

# 63 "/opt/tinyos-2.x/tos/interfaces/Read.nc"
inline static  void /*MotionDetectorC.VoltageC.ADC_ShiftM*/ADC_ShiftM$2$Read$readDone(error_t arg_0x7ee20010, /*MotionDetectorC.VoltageC.ADC_ShiftM*/ADC_ShiftM$2$Read$val_t arg_0x7ee20198){
#line 63
  MotionDetectorM$Read_Voltage$readDone(arg_0x7ee20010, arg_0x7ee20198);
#line 63
}
#line 63
# 37 "/opt/tinyos-2.x/tos/sensorboards/homenet_sensor/ADC_ShiftM.nc"
static inline  void /*MotionDetectorC.VoltageC.ADC_ShiftM*/ADC_ShiftM$2$subRead$readDone(error_t result, uint16_t val)
#line 37
{
  /*MotionDetectorC.VoltageC.ADC_ShiftM*/ADC_ShiftM$2$Read$readDone(result, val >> 6);
}

# 67 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static  void MotionDetectorM$PirTimer$stop(void){
#line 67
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$stop(4U);
#line 67
}
#line 67
# 69 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
inline static  error_t MotionDetectorM$AMSend$send(am_addr_t arg_0x7ed82c18, message_t *arg_0x7ed82dc8, uint8_t arg_0x7ed81010){
#line 69
  unsigned char result;
#line 69

#line 69
  result = /*MotionDetectorC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$0$AMSend$send(arg_0x7ed82c18, arg_0x7ed82dc8, arg_0x7ed81010);
#line 69

#line 69
  return result;
#line 69
}
#line 69
# 78 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static inline  void *CC2420ActiveMessageP$AMSend$getPayload(am_id_t id, message_t *m)
#line 78
{
  return CC2420ActiveMessageP$Packet$getPayload(m, (void *)0);
}

# 125 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
inline static  void */*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMSend$getPayload(am_id_t arg_0x7ded06a8, message_t *arg_0x7ed74c68){
#line 125
  void *result;
#line 125

#line 125
  result = CC2420ActiveMessageP$AMSend$getPayload(arg_0x7ded06a8, arg_0x7ed74c68);
#line 125

#line 125
  return result;
#line 125
}
#line 125
# 180 "/opt/tinyos-2.x/tos/system/AMQueueImplP.nc"
static inline  void */*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$getPayload(uint8_t id, message_t *m)
#line 180
{
  return /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMSend$getPayload(0, m);
}

# 114 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
inline static  void */*MotionDetectorC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$0$Send$getPayload(message_t *arg_0x7e4551f8){
#line 114
  void *result;
#line 114

#line 114
  result = /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$getPayload(0U, arg_0x7e4551f8);
#line 114

#line 114
  return result;
#line 114
}
#line 114
# 65 "/opt/tinyos-2.x/tos/system/AMQueueEntryP.nc"
static inline  void */*MotionDetectorC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$0$AMSend$getPayload(message_t *m)
#line 65
{
  return /*MotionDetectorC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$0$Send$getPayload(m);
}

# 125 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
inline static  void *MotionDetectorM$AMSend$getPayload(message_t *arg_0x7ed74c68){
#line 125
  void *result;
#line 125

#line 125
  result = /*MotionDetectorC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$0$AMSend$getPayload(arg_0x7ed74c68);
#line 125

#line 125
  return result;
#line 125
}
#line 125
# 131 "MotionDetectorM.nc"
static inline  void MotionDetectorM$Pir$readDone(error_t result, uint16_t data)
#line 131
{
  if (result != SUCCESS) {
#line 132
    return;
    }
#line 133
  if (data >> 6 > 300) {
      user_header_t uh;

#line 135
      uh.id = TOS_NODE_ID;
      uh.cmd = COMM_INT;
      uh.sub = COMM_INT_MOTION_DETECT;
      uh.length = 0;
      memcpy(MotionDetectorM$AMSend$getPayload(&MotionDetectorM$CMDmsg), &uh, sizeof(user_header_t ));
      if (MotionDetectorM$AMSend$send(AM_BROADCAST_ADDR, &MotionDetectorM$CMDmsg, sizeof(user_header_t )) == SUCCESS) {
          MotionDetectorM$PirTimer$stop();
          MotionDetectorM$PirTimer$startOneShot(1000);
        }
      else 
#line 143
        {
          MotionDetectorM$PirTimer$startOneShot(50);
        }
    }
  else 
#line 146
    {
      MotionDetectorM$PirTimer$startOneShot(50);
    }
}

# 48 "/opt/tinyos-2.x/tos/system/ArbitratedReadC.nc"
static inline   void /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$Read$default$readDone(uint8_t client, error_t result, /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$width_t data)
#line 48
{
}

# 63 "/opt/tinyos-2.x/tos/interfaces/Read.nc"
inline static  void /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$Read$readDone(uint8_t arg_0x7e510550, error_t arg_0x7ee20010, /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$Read$val_t arg_0x7ee20198){
#line 63
  switch (arg_0x7e510550) {
#line 63
    case /*MotionDetectorC.PhotoSensorC.DemoChannel.PhotoProC.AdcReadClientC*/AdcReadClientC$0$ID:
#line 63
      /*MotionDetectorC.PhotoSensorC.DemoChannel.ADC_ShiftM*/ADC_ShiftM$0$subRead$readDone(arg_0x7ee20010, arg_0x7ee20198);
#line 63
      break;
#line 63
    case /*MotionDetectorC.UltraredSensorC.DemoChannel.UltraredProC.AdcReadClientC*/AdcReadClientC$1$ID:
#line 63
      /*MotionDetectorC.UltraredSensorC.DemoChannel.ADC_ShiftM*/ADC_ShiftM$1$subRead$readDone(arg_0x7ee20010, arg_0x7ee20198);
#line 63
      break;
#line 63
    case /*MotionDetectorC.VoltageC.VoltageProC.AdcReadClientC*/AdcReadClientC$2$ID:
#line 63
      /*MotionDetectorC.VoltageC.ADC_ShiftM*/ADC_ShiftM$2$subRead$readDone(arg_0x7ee20010, arg_0x7ee20198);
#line 63
      break;
#line 63
    case /*MotionDetectorC.PirSensorC.DemoChannel.AdcReadClientC*/AdcReadClientC$3$ID:
#line 63
      MotionDetectorM$Pir$readDone(arg_0x7ee20010, arg_0x7ee20198);
#line 63
      break;
#line 63
    default:
#line 63
      /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$Read$default$readDone(arg_0x7e510550, arg_0x7ee20010, arg_0x7ee20198);
#line 63
      break;
#line 63
    }
#line 63
}
#line 63
# 47 "/opt/tinyos-2.x/tos/system/ArbitratedReadC.nc"
static inline    error_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$Resource$default$release(uint8_t client)
#line 47
{
#line 47
  return FAIL;
}

# 101 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
inline static   error_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$Resource$release(uint8_t arg_0x7e50a188){
#line 101
  unsigned char result;
#line 101

#line 101
  switch (arg_0x7e50a188) {
#line 101
    case /*MotionDetectorC.PhotoSensorC.DemoChannel.PhotoProC.AdcReadClientC*/AdcReadClientC$0$ID:
#line 101
      result = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$1$Resource$release(/*MotionDetectorC.PhotoSensorC.DemoChannel.PhotoProC.AdcReadClientC*/AdcReadClientC$0$HAL_ID);
#line 101
      break;
#line 101
    case /*MotionDetectorC.UltraredSensorC.DemoChannel.UltraredProC.AdcReadClientC*/AdcReadClientC$1$ID:
#line 101
      result = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$1$Resource$release(/*MotionDetectorC.UltraredSensorC.DemoChannel.UltraredProC.AdcReadClientC*/AdcReadClientC$1$HAL_ID);
#line 101
      break;
#line 101
    case /*MotionDetectorC.VoltageC.VoltageProC.AdcReadClientC*/AdcReadClientC$2$ID:
#line 101
      result = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$1$Resource$release(/*MotionDetectorC.VoltageC.VoltageProC.AdcReadClientC*/AdcReadClientC$2$HAL_ID);
#line 101
      break;
#line 101
    case /*MotionDetectorC.PirSensorC.DemoChannel.AdcReadClientC*/AdcReadClientC$3$ID:
#line 101
      result = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$1$Resource$release(/*MotionDetectorC.PirSensorC.DemoChannel.AdcReadClientC*/AdcReadClientC$3$HAL_ID);
#line 101
      break;
#line 101
    default:
#line 101
      result = /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$Resource$default$release(arg_0x7e50a188);
#line 101
      break;
#line 101
    }
#line 101

#line 101
  return result;
#line 101
}
#line 101
# 39 "/opt/tinyos-2.x/tos/system/ArbitratedReadC.nc"
static inline  void /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$Service$readDone(uint8_t client, error_t result, /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$width_t data)
#line 39
{
  /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$Resource$release(client);
  /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$Read$readDone(client, result, data);
}

# 63 "/opt/tinyos-2.x/tos/interfaces/Read.nc"
inline static  void AdcP$Read$readDone(uint8_t arg_0x7e52b7d8, error_t arg_0x7ee20010, AdcP$Read$val_t arg_0x7ee20198){
#line 63
  /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$Service$readDone(arg_0x7e52b7d8, arg_0x7ee20010, arg_0x7ee20198);
#line 63
}
#line 63
# 103 "/opt/tinyos-2.x/tos/chips/atm128/adc/AdcP.nc"
static inline  void AdcP$acquiredData$runTask(void)
#line 103
{
  AdcP$state = AdcP$IDLE;
  AdcP$Read$readDone(AdcP$client, SUCCESS, AdcP$val);
}

# 53 "/opt/tinyos-2.x/tos/system/RoundRobinResourceQueueC.nc"
static inline   bool /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC$0$RoundRobinQueue$isEmpty(void)
#line 53
{
  int i;

  /* atomic removed: atomic calls only */
#line 55
  {
    for (i = 0; i < sizeof /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC$0$resQ; i++) 
      if (/*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC$0$resQ[i] > 0) {
          unsigned char __nesc_temp = 
#line 57
          FALSE;

#line 57
          return __nesc_temp;
        }
#line 58
    {
      unsigned char __nesc_temp = 
#line 58
      TRUE;

#line 58
      return __nesc_temp;
    }
  }
}

# 43 "/opt/tinyos-2.x/tos/interfaces/ResourceQueue.nc"
inline static   bool /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$1$Queue$isEmpty(void){
#line 43
  unsigned char result;
#line 43

#line 43
  result = /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC$0$RoundRobinQueue$isEmpty();
#line 43

#line 43
  return result;
#line 43
}
#line 43
# 44 "/opt/tinyos-2.x/tos/system/RoundRobinResourceQueueC.nc"
static inline void /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC$0$clearEntry(uint8_t id)
#line 44
{
  /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC$0$resQ[id / 8] &= ~(1 << id % 8);
}

#line 66
static inline   resource_client_id_t /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC$0$RoundRobinQueue$dequeue(void)
#line 66
{
  int i;

  /* atomic removed: atomic calls only */
#line 68
  {
    for (i = /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC$0$last + 1; ; i++) {
        if (i == 4U) {
          i = 0;
          }
#line 72
        if (/*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC$0$RoundRobinQueue$isEnqueued(i)) {
            /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC$0$clearEntry(i);
            /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC$0$last = i;
            {
              unsigned char __nesc_temp = 
#line 75
              i;

#line 75
              return __nesc_temp;
            }
          }
#line 77
        if (i == /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC$0$last) {
          break;
          }
      }
#line 80
    {
      unsigned char __nesc_temp = 
#line 80
      /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC$0$NO_ENTRY;

#line 80
      return __nesc_temp;
    }
  }
}

# 60 "/opt/tinyos-2.x/tos/interfaces/ResourceQueue.nc"
inline static   resource_client_id_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$1$Queue$dequeue(void){
#line 60
  unsigned char result;
#line 60

#line 60
  result = /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC$0$RoundRobinQueue$dequeue();
#line 60

#line 60
  return result;
#line 60
}
#line 60
# 44 "/opt/tinyos-2.x/tos/interfaces/McuPowerState.nc"
inline static   void HplAtm128AdcP$McuPowerState$update(void){
#line 44
  McuSleepC$McuPowerState$update();
#line 44
}
#line 44
# 75 "/opt/tinyos-2.x/tos/chips/atm128/adc/HplAtm128AdcP.nc"
static inline   void HplAtm128AdcP$HplAtm128Adc$disableAdc(void)
#line 75
{
  * (volatile uint8_t *)(0x06 + 0x20) &= ~(1 << 7);
  HplAtm128AdcP$McuPowerState$update();
}

# 77 "/opt/tinyos-2.x/tos/chips/atm128/adc/HplAtm128Adc.nc"
inline static   void Atm128AdcP$HplAtm128Adc$disableAdc(void){
#line 77
  HplAtm128AdcP$HplAtm128Adc$disableAdc();
#line 77
}
#line 77
# 109 "/opt/tinyos-2.x/tos/chips/atm128/adc/Atm128AdcP.nc"
static inline   error_t Atm128AdcP$AsyncStdControl$stop(void)
#line 109
{
  /* atomic removed: atomic calls only */
#line 110
  Atm128AdcP$HplAtm128Adc$disableAdc();

  return SUCCESS;
}

# 82 "/opt/tinyos-2.x/tos/interfaces/AsyncStdControl.nc"
inline static   error_t /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP$0$AsyncStdControl$stop(void){
#line 82
  unsigned char result;
#line 82

#line 82
  result = Atm128AdcP$AsyncStdControl$stop();
#line 82

#line 82
  return result;
#line 82
}
#line 82
# 74 "/opt/tinyos-2.x/tos/lib/power/AsyncPowerManagerP.nc"
static inline    void /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP$0$PowerDownCleanup$default$cleanup(void)
#line 74
{
}

# 52 "/opt/tinyos-2.x/tos/lib/power/PowerDownCleanup.nc"
inline static   void /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP$0$PowerDownCleanup$cleanup(void){
#line 52
  /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP$0$PowerDownCleanup$default$cleanup();
#line 52
}
#line 52
# 69 "/opt/tinyos-2.x/tos/lib/power/AsyncPowerManagerP.nc"
static inline   void /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP$0$ResourceController$granted(void)
#line 69
{
  /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP$0$PowerDownCleanup$cleanup();
  /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP$0$AsyncStdControl$stop();
}

# 46 "/opt/tinyos-2.x/tos/interfaces/ResourceController.nc"
inline static   void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$1$ResourceController$granted(void){
#line 46
  /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP$0$ResourceController$granted();
#line 46
}
#line 46
# 47 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline   void /*HplAtm128GeneralIOC.PortE.Bit4*/HplAtm128GeneralIOPinP$36$IO$clr(void)
#line 47
{
#line 47
  * (volatile uint8_t *)35U &= ~(1 << 4);
}

# 30 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   void PhotoP$PhotoPin$clr(void){
#line 30
  /*HplAtm128GeneralIOC.PortE.Bit4*/HplAtm128GeneralIOPinP$36$IO$clr();
#line 30
}
#line 30
# 60 "/opt/tinyos-2.x/tos/sensorboards/homenet_sensor/PhotoP.nc"
static inline   void PhotoP$ResourceConfigure$unconfigure(void)
#line 60
{
  PhotoP$PhotoPin$clr();
}

# 55 "/opt/tinyos-2.x/tos/sensorboards/homenet_sensor/UltraredP.nc"
static inline   void UltraredP$ResourceConfigure$unconfigure(void)
#line 55
{
}

# 47 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline   void /*HplAtm128GeneralIOC.PortA.Bit7*/HplAtm128GeneralIOPinP$7$IO$clr(void)
#line 47
{
#line 47
  * (volatile uint8_t *)59U &= ~(1 << 7);
}

# 30 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   void VoltageP$BatMon$clr(void){
#line 30
  /*HplAtm128GeneralIOC.PortA.Bit7*/HplAtm128GeneralIOPinP$7$IO$clr();
#line 30
}
#line 30
# 56 "/opt/tinyos-2.x/tos/sensorboards/homenet_sensor/VoltageP.nc"
static inline   void VoltageP$ResourceConfigure$unconfigure(void)
#line 56
{
  VoltageP$BatMon$clr();
}

# 60 "PirP.nc"
static inline   void PirP$ResourceConfigure$unconfigure(void)
#line 60
{
}

# 200 "/opt/tinyos-2.x/tos/system/ArbiterP.nc"
static inline    void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$1$ResourceConfigure$default$unconfigure(uint8_t id)
#line 200
{
}

# 55 "/opt/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
inline static   void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$1$ResourceConfigure$unconfigure(uint8_t arg_0x7e6890f8){
#line 55
  switch (arg_0x7e6890f8) {
#line 55
    case /*MotionDetectorC.PhotoSensorC.DemoChannel.PhotoProC.AdcReadClientC*/AdcReadClientC$0$HAL_ID:
#line 55
      PhotoP$ResourceConfigure$unconfigure();
#line 55
      break;
#line 55
    case /*MotionDetectorC.UltraredSensorC.DemoChannel.UltraredProC.AdcReadClientC*/AdcReadClientC$1$HAL_ID:
#line 55
      UltraredP$ResourceConfigure$unconfigure();
#line 55
      break;
#line 55
    case /*MotionDetectorC.VoltageC.VoltageProC.AdcReadClientC*/AdcReadClientC$2$HAL_ID:
#line 55
      VoltageP$ResourceConfigure$unconfigure();
#line 55
      break;
#line 55
    case /*MotionDetectorC.PirSensorC.DemoChannel.AdcReadClientC*/AdcReadClientC$3$HAL_ID:
#line 55
      PirP$ResourceConfigure$unconfigure();
#line 55
      break;
#line 55
    default:
#line 55
      /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$1$ResourceConfigure$default$unconfigure(arg_0x7e6890f8);
#line 55
      break;
#line 55
    }
#line 55
}
#line 55
# 127 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static inline  void CC2420ActiveMessageP$AMPacket$setDestination(message_t *amsg, am_addr_t addr)
#line 127
{
  cc2420_header_t *header = CC2420ActiveMessageP$getHeader(amsg);

#line 129
  __nesc_hton_leuint16((unsigned char *)&header->dest, addr);
}

# 92 "/opt/tinyos-2.x/tos/interfaces/AMPacket.nc"
inline static  void /*MotionDetectorC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$0$AMPacket$setDestination(message_t *arg_0x7e478c30, am_addr_t arg_0x7e478dc0){
#line 92
  CC2420ActiveMessageP$AMPacket$setDestination(arg_0x7e478c30, arg_0x7e478dc0);
#line 92
}
#line 92
# 147 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static inline  void CC2420ActiveMessageP$AMPacket$setType(message_t *amsg, am_id_t type)
#line 147
{
  cc2420_header_t *header = CC2420ActiveMessageP$getHeader(amsg);

#line 149
  __nesc_hton_leuint8((unsigned char *)&header->type, type);
}

# 151 "/opt/tinyos-2.x/tos/interfaces/AMPacket.nc"
inline static  void /*MotionDetectorC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$0$AMPacket$setType(message_t *arg_0x7e475be8, am_id_t arg_0x7e475d70){
#line 151
  CC2420ActiveMessageP$AMPacket$setType(arg_0x7e475be8, arg_0x7e475d70);
#line 151
}
#line 151
# 69 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
inline static  error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMSend$send(am_id_t arg_0x7ded06a8, am_addr_t arg_0x7ed82c18, message_t *arg_0x7ed82dc8, uint8_t arg_0x7ed81010){
#line 69
  unsigned char result;
#line 69

#line 69
  result = CC2420ActiveMessageP$AMSend$send(arg_0x7ded06a8, arg_0x7ed82c18, arg_0x7ed82dc8, arg_0x7ed81010);
#line 69

#line 69
  return result;
#line 69
}
#line 69
# 67 "/opt/tinyos-2.x/tos/interfaces/AMPacket.nc"
inline static  am_addr_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMPacket$destination(message_t *arg_0x7e478088){
#line 67
  unsigned int result;
#line 67

#line 67
  result = CC2420ActiveMessageP$AMPacket$destination(arg_0x7e478088);
#line 67

#line 67
  return result;
#line 67
}
#line 67
#line 136
inline static  am_id_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMPacket$type(message_t *arg_0x7e475660){
#line 136
  unsigned char result;
#line 136

#line 136
  result = CC2420ActiveMessageP$AMPacket$type(arg_0x7e475660);
#line 136

#line 136
  return result;
#line 136
}
#line 136
# 172 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static inline  void CC2420ActiveMessageP$Packet$setPayloadLength(message_t *msg, uint8_t len)
#line 172
{
  __nesc_hton_leuint8((unsigned char *)&CC2420ActiveMessageP$getHeader(msg)->length, len + CC2420ActiveMessageP$CC2420_SIZE);
}

# 83 "/opt/tinyos-2.x/tos/interfaces/Packet.nc"
inline static  void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Packet$setPayloadLength(message_t *arg_0x7e4809d0, uint8_t arg_0x7e480b58){
#line 83
  CC2420ActiveMessageP$Packet$setPayloadLength(arg_0x7e4809d0, arg_0x7e480b58);
#line 83
}
#line 83
# 91 "/opt/tinyos-2.x/tos/system/AMQueueImplP.nc"
static inline  error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$send(uint8_t clientId, message_t *msg, 
uint8_t len)
#line 92
{
  if (clientId > 1) {
#line 93
      return FAIL;
    }
#line 94
  if (/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue[clientId].msg != (void *)0) {
#line 94
      return EBUSY;
    }
#line 95
  ;

  /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue[clientId].msg = msg;
  /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Packet$setPayloadLength(msg, len);

  if (/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current == /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$QUEUE_EMPTY) {
      error_t err;
      am_id_t amId = /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMPacket$type(msg);
      am_addr_t dest = /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMPacket$destination(msg);

      ;
      /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current = clientId;

      err = /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMSend$send(amId, dest, msg, len);
      if (err != SUCCESS) {
          ;
          /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current = /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$QUEUE_EMPTY;
          /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue[clientId].msg = (void *)0;
        }
      return err;
    }
  else {
      ;
    }
  return SUCCESS;
}

# 64 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
inline static  error_t /*MotionDetectorC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$0$Send$send(message_t *arg_0x7e458468, uint8_t arg_0x7e4585f0){
#line 64
  unsigned char result;
#line 64

#line 64
  result = /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$send(0U, arg_0x7e458468, arg_0x7e4585f0);
#line 64

#line 64
  return result;
#line 64
}
#line 64
# 186 "/opt/tinyos-2.x/tos/system/ArbiterP.nc"
static inline    void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$1$ResourceRequested$default$requested(uint8_t id)
#line 186
{
}

# 43 "/opt/tinyos-2.x/tos/interfaces/ResourceRequested.nc"
inline static   void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$1$ResourceRequested$requested(uint8_t arg_0x7e690f10){
#line 43
    /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$1$ResourceRequested$default$requested(arg_0x7e690f10);
#line 43
}
#line 43
# 84 "/opt/tinyos-2.x/tos/system/RoundRobinResourceQueueC.nc"
static inline   error_t /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC$0$RoundRobinQueue$enqueue(resource_client_id_t id)
#line 84
{
  /* atomic removed: atomic calls only */
#line 85
  {
    if (!/*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC$0$RoundRobinQueue$isEnqueued(id)) {
        /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC$0$resQ[id / 8] |= 1 << id % 8;
        {
          unsigned char __nesc_temp = 
#line 88
          SUCCESS;

#line 88
          return __nesc_temp;
        }
      }
#line 90
    {
      unsigned char __nesc_temp = 
#line 90
      EBUSY;

#line 90
      return __nesc_temp;
    }
  }
}

# 69 "/opt/tinyos-2.x/tos/interfaces/ResourceQueue.nc"
inline static   error_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$1$Queue$enqueue(resource_client_id_t arg_0x7e6a18b0){
#line 69
  unsigned char result;
#line 69

#line 69
  result = /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC$0$RoundRobinQueue$enqueue(arg_0x7e6a18b0);
#line 69

#line 69
  return result;
#line 69
}
#line 69
# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static   error_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$1$grantedTask$postTask(void){
#line 56
  unsigned char result;
#line 56

#line 56
  result = SchedulerBasicP$TaskBasic$postTask(/*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$1$grantedTask);
#line 56

#line 56
  return result;
#line 56
}
#line 56
# 125 "/opt/tinyos-2.x/tos/system/ArbiterP.nc"
static inline   error_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$1$ResourceController$release(void)
#line 125
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 126
    {
      if (/*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$1$resId == /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$1$CONTROLLER_ID) {
          if (/*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$1$state == /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$1$RES_GRANTING) {
              /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$1$grantedTask$postTask();
              {
                unsigned char __nesc_temp = 
#line 130
                SUCCESS;

                {
#line 130
                  __nesc_atomic_end(__nesc_atomic); 
#line 130
                  return __nesc_temp;
                }
              }
            }
          else {
#line 132
            if (/*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$1$state == /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$1$RES_IMM_GRANTING) {
                /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$1$resId = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$1$reqResId;
                /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$1$state = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$1$RES_BUSY;
                {
                  unsigned char __nesc_temp = 
#line 135
                  SUCCESS;

                  {
#line 135
                    __nesc_atomic_end(__nesc_atomic); 
#line 135
                    return __nesc_temp;
                  }
                }
              }
            }
        }
    }
#line 141
    __nesc_atomic_end(__nesc_atomic); }
#line 139
  return FAIL;
}

# 56 "/opt/tinyos-2.x/tos/interfaces/ResourceController.nc"
inline static   error_t /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP$0$ResourceController$release(void){
#line 56
  unsigned char result;
#line 56

#line 56
  result = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$1$ResourceController$release();
#line 56

#line 56
  return result;
#line 56
}
#line 56
# 71 "/opt/tinyos-2.x/tos/chips/atm128/adc/HplAtm128AdcP.nc"
static inline   void HplAtm128AdcP$HplAtm128Adc$enableAdc(void)
#line 71
{
  * (volatile uint8_t *)(0x06 + 0x20) |= 1 << 7;
  HplAtm128AdcP$McuPowerState$update();
}

# 73 "/opt/tinyos-2.x/tos/chips/atm128/adc/HplAtm128Adc.nc"
inline static   void Atm128AdcP$HplAtm128Adc$enableAdc(void){
#line 73
  HplAtm128AdcP$HplAtm128Adc$enableAdc();
#line 73
}
#line 73
# 104 "/opt/tinyos-2.x/tos/chips/atm128/adc/Atm128AdcP.nc"
static inline   error_t Atm128AdcP$AsyncStdControl$start(void)
#line 104
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 105
    Atm128AdcP$HplAtm128Adc$enableAdc();
#line 105
    __nesc_atomic_end(__nesc_atomic); }
  return SUCCESS;
}

# 73 "/opt/tinyos-2.x/tos/interfaces/AsyncStdControl.nc"
inline static   error_t /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP$0$AsyncStdControl$start(void){
#line 73
  unsigned char result;
#line 73

#line 73
  result = Atm128AdcP$AsyncStdControl$start();
#line 73

#line 73
  return result;
#line 73
}
#line 73
# 59 "/opt/tinyos-2.x/tos/lib/power/AsyncPowerManagerP.nc"
static inline   void /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP$0$ResourceController$requested(void)
#line 59
{
  /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP$0$AsyncStdControl$start();
  /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP$0$ResourceController$release();
}

# 73 "/opt/tinyos-2.x/tos/interfaces/ResourceController.nc"
inline static   void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$1$ResourceController$requested(void){
#line 73
  /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP$0$ResourceController$requested();
#line 73
}
#line 73
# 186 "/opt/tinyos-2.x/tos/system/ArbiterP.nc"
static inline    void /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP$0$ResourceRequested$default$requested(uint8_t id)
#line 186
{
}

# 43 "/opt/tinyos-2.x/tos/interfaces/ResourceRequested.nc"
inline static   void /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP$0$ResourceRequested$requested(uint8_t arg_0x7e690f10){
#line 43
    /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP$0$ResourceRequested$default$requested(arg_0x7e690f10);
#line 43
}
#line 43
# 54 "/opt/tinyos-2.x/tos/system/FcfsResourceQueueC.nc"
static inline   bool /*HplSensirionSht11C.Arbiter.Queue*/FcfsResourceQueueC$0$FcfsQueue$isEnqueued(resource_client_id_t id)
#line 54
{
  return /*HplSensirionSht11C.Arbiter.Queue*/FcfsResourceQueueC$0$resQ[id] != /*HplSensirionSht11C.Arbiter.Queue*/FcfsResourceQueueC$0$NO_ENTRY || /*HplSensirionSht11C.Arbiter.Queue*/FcfsResourceQueueC$0$qTail == id;
}

#line 72
static inline   error_t /*HplSensirionSht11C.Arbiter.Queue*/FcfsResourceQueueC$0$FcfsQueue$enqueue(resource_client_id_t id)
#line 72
{
  /* atomic removed: atomic calls only */
#line 73
  {
    if (!/*HplSensirionSht11C.Arbiter.Queue*/FcfsResourceQueueC$0$FcfsQueue$isEnqueued(id)) {
        if (/*HplSensirionSht11C.Arbiter.Queue*/FcfsResourceQueueC$0$qHead == /*HplSensirionSht11C.Arbiter.Queue*/FcfsResourceQueueC$0$NO_ENTRY) {
          /*HplSensirionSht11C.Arbiter.Queue*/FcfsResourceQueueC$0$qHead = id;
          }
        else {
#line 78
          /*HplSensirionSht11C.Arbiter.Queue*/FcfsResourceQueueC$0$resQ[/*HplSensirionSht11C.Arbiter.Queue*/FcfsResourceQueueC$0$qTail] = id;
          }
#line 79
        /*HplSensirionSht11C.Arbiter.Queue*/FcfsResourceQueueC$0$qTail = id;
        {
          unsigned char __nesc_temp = 
#line 80
          SUCCESS;

#line 80
          return __nesc_temp;
        }
      }
#line 82
    {
      unsigned char __nesc_temp = 
#line 82
      EBUSY;

#line 82
      return __nesc_temp;
    }
  }
}

# 69 "/opt/tinyos-2.x/tos/interfaces/ResourceQueue.nc"
inline static   error_t /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP$0$Queue$enqueue(resource_client_id_t arg_0x7e6a18b0){
#line 69
  unsigned char result;
#line 69

#line 69
  result = /*HplSensirionSht11C.Arbiter.Queue*/FcfsResourceQueueC$0$FcfsQueue$enqueue(arg_0x7e6a18b0);
#line 69

#line 69
  return result;
#line 69
}
#line 69
# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static   error_t /*HplSensirionSht11C.SplitControlPowerManagerC.PowerManager*/PowerManagerP$0$startTask$postTask(void){
#line 56
  unsigned char result;
#line 56

#line 56
  result = SchedulerBasicP$TaskBasic$postTask(/*HplSensirionSht11C.SplitControlPowerManagerC.PowerManager*/PowerManagerP$0$startTask);
#line 56

#line 56
  return result;
#line 56
}
#line 56
# 74 "/opt/tinyos-2.x/tos/lib/power/PowerManagerP.nc"
static inline   void /*HplSensirionSht11C.SplitControlPowerManagerC.PowerManager*/PowerManagerP$0$ResourceController$requested(void)
#line 74
{
  if (/*HplSensirionSht11C.SplitControlPowerManagerC.PowerManager*/PowerManagerP$0$stopping == FALSE) {
      /*HplSensirionSht11C.SplitControlPowerManagerC.PowerManager*/PowerManagerP$0$startTask$postTask();
    }
  else {
#line 78
    /*HplSensirionSht11C.SplitControlPowerManagerC.PowerManager*/PowerManagerP$0$requested = TRUE;
    }
}

# 73 "/opt/tinyos-2.x/tos/interfaces/ResourceController.nc"
inline static   void /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP$0$ResourceController$requested(void){
#line 73
  /*HplSensirionSht11C.SplitControlPowerManagerC.PowerManager*/PowerManagerP$0$ResourceController$requested();
#line 73
}
#line 73
# 86 "/opt/tinyos-2.x/tos/chips/atm128/adc/AdcP.nc"
static inline error_t AdcP$startGet(uint8_t newState, uint8_t newClient)
#line 86
{

  AdcP$state = newState;
  AdcP$client = newClient;
  AdcP$sample();

  return SUCCESS;
}

static inline  error_t AdcP$Read$read(uint8_t c)
#line 95
{
  return AdcP$startGet(AdcP$ACQUIRE_DATA, c);
}

# 55 "/opt/tinyos-2.x/tos/interfaces/Read.nc"
inline static  error_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$Service$read(uint8_t arg_0x7e50b3f8){
#line 55
  unsigned char result;
#line 55

#line 55
  result = AdcP$Read$read(arg_0x7e50b3f8);
#line 55

#line 55
  return result;
#line 55
}
#line 55
# 35 "/opt/tinyos-2.x/tos/system/ArbitratedReadC.nc"
static inline  void /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$Resource$granted(uint8_t client)
#line 35
{
  /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$Service$read(client);
}

# 184 "/opt/tinyos-2.x/tos/system/ArbiterP.nc"
static inline   void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$1$Resource$default$granted(uint8_t id)
#line 184
{
}

# 92 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
inline static  void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$1$Resource$granted(uint8_t arg_0x7e6905d0){
#line 92
  switch (arg_0x7e6905d0) {
#line 92
    case /*MotionDetectorC.PhotoSensorC.DemoChannel.PhotoProC.AdcReadClientC*/AdcReadClientC$0$HAL_ID:
#line 92
      /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$Resource$granted(/*MotionDetectorC.PhotoSensorC.DemoChannel.PhotoProC.AdcReadClientC*/AdcReadClientC$0$ID);
#line 92
      break;
#line 92
    case /*MotionDetectorC.UltraredSensorC.DemoChannel.UltraredProC.AdcReadClientC*/AdcReadClientC$1$HAL_ID:
#line 92
      /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$Resource$granted(/*MotionDetectorC.UltraredSensorC.DemoChannel.UltraredProC.AdcReadClientC*/AdcReadClientC$1$ID);
#line 92
      break;
#line 92
    case /*MotionDetectorC.VoltageC.VoltageProC.AdcReadClientC*/AdcReadClientC$2$HAL_ID:
#line 92
      /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$Resource$granted(/*MotionDetectorC.VoltageC.VoltageProC.AdcReadClientC*/AdcReadClientC$2$ID);
#line 92
      break;
#line 92
    case /*MotionDetectorC.PirSensorC.DemoChannel.AdcReadClientC*/AdcReadClientC$3$HAL_ID:
#line 92
      /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$Resource$granted(/*MotionDetectorC.PirSensorC.DemoChannel.AdcReadClientC*/AdcReadClientC$3$ID);
#line 92
      break;
#line 92
    default:
#line 92
      /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$1$Resource$default$granted(arg_0x7e6905d0);
#line 92
      break;
#line 92
    }
#line 92
}
#line 92
# 46 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline   void /*HplAtm128GeneralIOC.PortE.Bit4*/HplAtm128GeneralIOPinP$36$IO$set(void)
#line 46
{
#line 46
  * (volatile uint8_t *)35U |= 1 << 4;
}

# 29 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   void PhotoP$PhotoPin$set(void){
#line 29
  /*HplAtm128GeneralIOC.PortE.Bit4*/HplAtm128GeneralIOPinP$36$IO$set();
#line 29
}
#line 29
# 52 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline   void /*HplAtm128GeneralIOC.PortE.Bit4*/HplAtm128GeneralIOPinP$36$IO$makeOutput(void)
#line 52
{
#line 52
  * (volatile uint8_t *)34U |= 1 << 4;
}

# 35 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   void PhotoP$PhotoPin$makeOutput(void){
#line 35
  /*HplAtm128GeneralIOC.PortE.Bit4*/HplAtm128GeneralIOPinP$36$IO$makeOutput();
#line 35
}
#line 35
# 53 "/opt/tinyos-2.x/tos/sensorboards/homenet_sensor/PhotoP.nc"
static inline   void PhotoP$ResourceConfigure$configure(void)
#line 53
{
  PhotoP$PhotoPin$makeOutput();
  PhotoP$PhotoPin$set();
}

# 52 "/opt/tinyos-2.x/tos/sensorboards/homenet_sensor/UltraredP.nc"
static inline   void UltraredP$ResourceConfigure$configure(void)
#line 52
{
}

# 46 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline   void /*HplAtm128GeneralIOC.PortA.Bit7*/HplAtm128GeneralIOPinP$7$IO$set(void)
#line 46
{
#line 46
  * (volatile uint8_t *)59U |= 1 << 7;
}

# 29 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   void VoltageP$BatMon$set(void){
#line 29
  /*HplAtm128GeneralIOC.PortA.Bit7*/HplAtm128GeneralIOPinP$7$IO$set();
#line 29
}
#line 29
# 52 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline   void /*HplAtm128GeneralIOC.PortA.Bit7*/HplAtm128GeneralIOPinP$7$IO$makeOutput(void)
#line 52
{
#line 52
  * (volatile uint8_t *)58U |= 1 << 7;
}

# 35 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   void VoltageP$BatMon$makeOutput(void){
#line 35
  /*HplAtm128GeneralIOC.PortA.Bit7*/HplAtm128GeneralIOPinP$7$IO$makeOutput();
#line 35
}
#line 35
# 51 "/opt/tinyos-2.x/tos/sensorboards/homenet_sensor/VoltageP.nc"
static inline   void VoltageP$ResourceConfigure$configure(void)
#line 51
{
  VoltageP$BatMon$makeOutput();
  VoltageP$BatMon$set();
}

# 53 "PirP.nc"
static inline   void PirP$ResourceConfigure$configure(void)
#line 53
{
}

# 198 "/opt/tinyos-2.x/tos/system/ArbiterP.nc"
static inline    void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$1$ResourceConfigure$default$configure(uint8_t id)
#line 198
{
}

# 49 "/opt/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
inline static   void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$1$ResourceConfigure$configure(uint8_t arg_0x7e6890f8){
#line 49
  switch (arg_0x7e6890f8) {
#line 49
    case /*MotionDetectorC.PhotoSensorC.DemoChannel.PhotoProC.AdcReadClientC*/AdcReadClientC$0$HAL_ID:
#line 49
      PhotoP$ResourceConfigure$configure();
#line 49
      break;
#line 49
    case /*MotionDetectorC.UltraredSensorC.DemoChannel.UltraredProC.AdcReadClientC*/AdcReadClientC$1$HAL_ID:
#line 49
      UltraredP$ResourceConfigure$configure();
#line 49
      break;
#line 49
    case /*MotionDetectorC.VoltageC.VoltageProC.AdcReadClientC*/AdcReadClientC$2$HAL_ID:
#line 49
      VoltageP$ResourceConfigure$configure();
#line 49
      break;
#line 49
    case /*MotionDetectorC.PirSensorC.DemoChannel.AdcReadClientC*/AdcReadClientC$3$HAL_ID:
#line 49
      PirP$ResourceConfigure$configure();
#line 49
      break;
#line 49
    default:
#line 49
      /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$1$ResourceConfigure$default$configure(arg_0x7e6890f8);
#line 49
      break;
#line 49
    }
#line 49
}
#line 49
# 172 "/opt/tinyos-2.x/tos/system/ArbiterP.nc"
static inline  void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$1$grantedTask$runTask(void)
#line 172
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 173
    {
      /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$1$resId = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$1$reqResId;
      /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$1$state = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$1$RES_BUSY;
    }
#line 176
    __nesc_atomic_end(__nesc_atomic); }
  /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$1$ResourceConfigure$configure(/*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$1$resId);
  /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$1$Resource$granted(/*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$1$resId);
}

# 103 "/opt/tinyos-2.x/tos/platforms/mica/MeasureClockC.nc"
static inline   uint8_t MeasureClockC$Atm128Calibrate$adcPrescaler(void)
#line 103
{

  if (MeasureClockC$cycles >= 390) {
    return ATM128_ADC_PRESCALE_128;
    }
#line 107
  if (MeasureClockC$cycles >= 195) {
    return ATM128_ADC_PRESCALE_64;
    }
#line 109
  if (MeasureClockC$cycles >= 97) {
    return ATM128_ADC_PRESCALE_32;
    }
#line 111
  if (MeasureClockC$cycles >= 48) {
    return ATM128_ADC_PRESCALE_16;
    }
#line 113
  if (MeasureClockC$cycles >= 24) {
    return ATM128_ADC_PRESCALE_8;
    }
#line 115
  if (MeasureClockC$cycles >= 12) {
    return ATM128_ADC_PRESCALE_4;
    }
#line 117
  return ATM128_ADC_PRESCALE_2;
}

# 53 "/opt/tinyos-2.x/tos/chips/atm128/timer/Atm128Calibrate.nc"
inline static   uint8_t Atm128AdcP$Atm128Calibrate$adcPrescaler(void){
#line 53
  unsigned char result;
#line 53

#line 53
  result = MeasureClockC$Atm128Calibrate$adcPrescaler();
#line 53

#line 53
  return result;
#line 53
}
#line 53
# 51 "/opt/tinyos-2.x/tos/chips/atm128/adc/HplAtm128AdcP.nc"
static inline uint8_t HplAtm128AdcP$Admux2int(Atm128Admux_t x)
#line 51
{
#line 51
  union __nesc_unnamed4389 {
#line 51
    Atm128Admux_t f;
#line 51
    uint8_t t;
  } 
#line 51
  c = { .f = x };

#line 51
  return c.t;
}


static inline   void HplAtm128AdcP$HplAtm128Adc$setAdmux(Atm128Admux_t x)
#line 55
{
  * (volatile uint8_t *)(0x07 + 0x20) = HplAtm128AdcP$Admux2int(x);
}

# 49 "/opt/tinyos-2.x/tos/chips/atm128/adc/HplAtm128Adc.nc"
inline static   void Atm128AdcP$HplAtm128Adc$setAdmux(Atm128Admux_t arg_0x7e5c0da8){
#line 49
  HplAtm128AdcP$HplAtm128Adc$setAdmux(arg_0x7e5c0da8);
#line 49
}
#line 49
# 119 "/opt/tinyos-2.x/tos/chips/atm128/adc/Atm128AdcP.nc"
static __inline bool Atm128AdcP$isPrecise(Atm128Admux_t admux, uint8_t channel, uint8_t refVoltage)
#line 119
{
  return refVoltage == admux.refs && ((
  channel <= ATM128_ADC_SNGL_ADC7 || channel >= ATM128_ADC_SNGL_1_23) || channel == admux.mux);
}

# 41 "/opt/tinyos-2.x/tos/chips/atm128/adc/HplAtm128AdcP.nc"
static inline   Atm128Admux_t HplAtm128AdcP$HplAtm128Adc$getAdmux(void)
#line 41
{
  return * (Atm128Admux_t *)& * (volatile uint8_t *)(0x07 + 0x20);
}

# 44 "/opt/tinyos-2.x/tos/chips/atm128/adc/HplAtm128Adc.nc"
inline static   Atm128Admux_t Atm128AdcP$HplAtm128Adc$getAdmux(void){
#line 44
  struct __nesc_unnamed4250 result;
#line 44

#line 44
  result = HplAtm128AdcP$HplAtm128Adc$getAdmux();
#line 44

#line 44
  return result;
#line 44
}
#line 44
# 184 "/opt/tinyos-2.x/tos/chips/atm128/adc/Atm128AdcP.nc"
static inline void Atm128AdcP$getData(uint8_t channel, uint8_t refVoltage, bool leftJustify, uint8_t prescaler)
#line 184
{
  Atm128Admux_t admux;
  Atm128Adcsra_t adcsr;

  admux = Atm128AdcP$HplAtm128Adc$getAdmux();
  Atm128AdcP$f.precise = Atm128AdcP$isPrecise(admux, channel, refVoltage);
  Atm128AdcP$f.channel = channel;

  admux.refs = refVoltage;
  admux.adlar = leftJustify;
  admux.mux = channel;
  Atm128AdcP$HplAtm128Adc$setAdmux(admux);

  adcsr.aden = ATM128_ADC_ENABLE_ON;
  adcsr.adsc = ATM128_ADC_START_CONVERSION_ON;
  adcsr.adfr = Atm128AdcP$f.multiple;
  adcsr.adif = ATM128_ADC_INT_FLAG_ON;
  adcsr.adie = ATM128_ADC_INT_ENABLE_ON;
  if (prescaler == ATM128_ADC_PRESCALE) {
    prescaler = Atm128AdcP$Atm128Calibrate$adcPrescaler();
    }
#line 204
  adcsr.adps = prescaler;
  Atm128AdcP$HplAtm128Adc$setAdcsra(adcsr);
}

static inline   bool Atm128AdcP$Atm128AdcSingle$getData(uint8_t channel, uint8_t refVoltage, 
bool leftJustify, uint8_t prescaler)
#line 209
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      Atm128AdcP$f.multiple = FALSE;
      Atm128AdcP$getData(channel, refVoltage, leftJustify, prescaler);

      {
        unsigned char __nesc_temp = 
#line 215
        Atm128AdcP$f.precise;

        {
#line 215
          __nesc_atomic_end(__nesc_atomic); 
#line 215
          return __nesc_temp;
        }
      }
    }
#line 218
    __nesc_atomic_end(__nesc_atomic); }
}

# 61 "/opt/tinyos-2.x/tos/chips/atm128/adc/Atm128AdcSingle.nc"
inline static   bool AdcP$Atm128AdcSingle$getData(uint8_t arg_0x7e5d7868, uint8_t arg_0x7e5d79f8, bool arg_0x7e5d7b98, uint8_t arg_0x7e5d7d28){
#line 61
  unsigned char result;
#line 61

#line 61
  result = Atm128AdcP$Atm128AdcSingle$getData(arg_0x7e5d7868, arg_0x7e5d79f8, arg_0x7e5d7b98, arg_0x7e5d7d28);
#line 61

#line 61
  return result;
#line 61
}
#line 61
# 41 "/opt/tinyos-2.x/tos/platforms/homenet/ZigbexBusP.nc"
static inline   uint8_t ZigbexBusP$Adc0$getChannel(void)
#line 41
{
#line 41
  return 0;
}

# 31 "/opt/tinyos-2.x/tos/platforms/homenet/ZigbexBusAdc.nc"
inline static   uint8_t PhotoP$PhotoAdc$getChannel(void){
#line 31
  unsigned char result;
#line 31

#line 31
  result = ZigbexBusP$Adc0$getChannel();
#line 31

#line 31
  return result;
#line 31
}
#line 31
# 41 "/opt/tinyos-2.x/tos/sensorboards/homenet_sensor/PhotoP.nc"
static inline   uint8_t PhotoP$Atm128AdcConfig$getChannel(void)
#line 41
{
  return PhotoP$PhotoAdc$getChannel();
}

# 42 "/opt/tinyos-2.x/tos/platforms/homenet/ZigbexBusP.nc"
static inline   uint8_t ZigbexBusP$Adc1$getChannel(void)
#line 42
{
#line 42
  return 1;
}

# 31 "/opt/tinyos-2.x/tos/platforms/homenet/ZigbexBusAdc.nc"
inline static   uint8_t UltraredP$UltraredAdc$getChannel(void){
#line 31
  unsigned char result;
#line 31

#line 31
  result = ZigbexBusP$Adc1$getChannel();
#line 31

#line 31
  return result;
#line 31
}
#line 31
# 40 "/opt/tinyos-2.x/tos/sensorboards/homenet_sensor/UltraredP.nc"
static inline   uint8_t UltraredP$Atm128AdcConfig$getChannel(void)
#line 40
{
  return UltraredP$UltraredAdc$getChannel();
}

# 39 "/opt/tinyos-2.x/tos/sensorboards/homenet_sensor/VoltageP.nc"
static inline   uint8_t VoltageP$VoltageConfig$getChannel(void)
#line 39
{
  return CHANNEL_BATTERY;
}

# 45 "/opt/tinyos-2.x/tos/platforms/homenet/ZigbexBusP.nc"
static inline   uint8_t ZigbexBusP$Adc4$getChannel(void)
#line 45
{
#line 45
  return 4;
}

# 31 "/opt/tinyos-2.x/tos/platforms/homenet/ZigbexBusAdc.nc"
inline static   uint8_t PirP$PirAdc$getChannel(void){
#line 31
  unsigned char result;
#line 31

#line 31
  result = ZigbexBusP$Adc4$getChannel();
#line 31

#line 31
  return result;
#line 31
}
#line 31
# 41 "PirP.nc"
static inline   uint8_t PirP$Atm128AdcConfig$getChannel(void)
#line 41
{
  return PirP$PirAdc$getChannel();
}

# 137 "/opt/tinyos-2.x/tos/chips/atm128/adc/AdcP.nc"
static inline    uint8_t AdcP$Atm128AdcConfig$default$getChannel(uint8_t c)
#line 137
{
  return ATM128_ADC_SNGL_GND;
}

# 25 "/opt/tinyos-2.x/tos/chips/atm128/adc/Atm128AdcConfig.nc"
inline static   uint8_t AdcP$Atm128AdcConfig$getChannel(uint8_t arg_0x7e5289c0){
#line 25
  unsigned char result;
#line 25

#line 25
  switch (arg_0x7e5289c0) {
#line 25
    case /*MotionDetectorC.PhotoSensorC.DemoChannel.PhotoProC.AdcReadClientC*/AdcReadClientC$0$ID:
#line 25
      result = PhotoP$Atm128AdcConfig$getChannel();
#line 25
      break;
#line 25
    case /*MotionDetectorC.UltraredSensorC.DemoChannel.UltraredProC.AdcReadClientC*/AdcReadClientC$1$ID:
#line 25
      result = UltraredP$Atm128AdcConfig$getChannel();
#line 25
      break;
#line 25
    case /*MotionDetectorC.VoltageC.VoltageProC.AdcReadClientC*/AdcReadClientC$2$ID:
#line 25
      result = VoltageP$VoltageConfig$getChannel();
#line 25
      break;
#line 25
    case /*MotionDetectorC.PirSensorC.DemoChannel.AdcReadClientC*/AdcReadClientC$3$ID:
#line 25
      result = PirP$Atm128AdcConfig$getChannel();
#line 25
      break;
#line 25
    default:
#line 25
      result = AdcP$Atm128AdcConfig$default$getChannel(arg_0x7e5289c0);
#line 25
      break;
#line 25
    }
#line 25

#line 25
  return result;
#line 25
}
#line 25
# 70 "/opt/tinyos-2.x/tos/chips/atm128/adc/AdcP.nc"
static inline uint8_t AdcP$channel(void)
#line 70
{
  return AdcP$Atm128AdcConfig$getChannel(AdcP$client);
}

# 45 "/opt/tinyos-2.x/tos/sensorboards/homenet_sensor/PhotoP.nc"
static inline   uint8_t PhotoP$Atm128AdcConfig$getRefVoltage(void)
#line 45
{
  return ATM128_ADC_VREF_OFF;
}

# 44 "/opt/tinyos-2.x/tos/sensorboards/homenet_sensor/UltraredP.nc"
static inline   uint8_t UltraredP$Atm128AdcConfig$getRefVoltage(void)
#line 44
{
  return ATM128_ADC_VREF_OFF;
}

# 43 "/opt/tinyos-2.x/tos/sensorboards/homenet_sensor/VoltageP.nc"
static inline   uint8_t VoltageP$VoltageConfig$getRefVoltage(void)
#line 43
{
  return ATM128_ADC_VREF_OFF;
}

# 45 "PirP.nc"
static inline   uint8_t PirP$Atm128AdcConfig$getRefVoltage(void)
#line 45
{
  return ATM128_ADC_VREF_2_56;
}

# 141 "/opt/tinyos-2.x/tos/chips/atm128/adc/AdcP.nc"
static inline    uint8_t AdcP$Atm128AdcConfig$default$getRefVoltage(uint8_t c)
#line 141
{
  return ATM128_ADC_VREF_OFF;
}

# 32 "/opt/tinyos-2.x/tos/chips/atm128/adc/Atm128AdcConfig.nc"
inline static   uint8_t AdcP$Atm128AdcConfig$getRefVoltage(uint8_t arg_0x7e5289c0){
#line 32
  unsigned char result;
#line 32

#line 32
  switch (arg_0x7e5289c0) {
#line 32
    case /*MotionDetectorC.PhotoSensorC.DemoChannel.PhotoProC.AdcReadClientC*/AdcReadClientC$0$ID:
#line 32
      result = PhotoP$Atm128AdcConfig$getRefVoltage();
#line 32
      break;
#line 32
    case /*MotionDetectorC.UltraredSensorC.DemoChannel.UltraredProC.AdcReadClientC*/AdcReadClientC$1$ID:
#line 32
      result = UltraredP$Atm128AdcConfig$getRefVoltage();
#line 32
      break;
#line 32
    case /*MotionDetectorC.VoltageC.VoltageProC.AdcReadClientC*/AdcReadClientC$2$ID:
#line 32
      result = VoltageP$VoltageConfig$getRefVoltage();
#line 32
      break;
#line 32
    case /*MotionDetectorC.PirSensorC.DemoChannel.AdcReadClientC*/AdcReadClientC$3$ID:
#line 32
      result = PirP$Atm128AdcConfig$getRefVoltage();
#line 32
      break;
#line 32
    default:
#line 32
      result = AdcP$Atm128AdcConfig$default$getRefVoltage(arg_0x7e5289c0);
#line 32
      break;
#line 32
    }
#line 32

#line 32
  return result;
#line 32
}
#line 32
# 74 "/opt/tinyos-2.x/tos/chips/atm128/adc/AdcP.nc"
static inline uint8_t AdcP$refVoltage(void)
#line 74
{
  return AdcP$Atm128AdcConfig$getRefVoltage(AdcP$client);
}

# 49 "/opt/tinyos-2.x/tos/sensorboards/homenet_sensor/PhotoP.nc"
static inline   uint8_t PhotoP$Atm128AdcConfig$getPrescaler(void)
#line 49
{
  return ATM128_ADC_PRESCALE;
}

# 48 "/opt/tinyos-2.x/tos/sensorboards/homenet_sensor/UltraredP.nc"
static inline   uint8_t UltraredP$Atm128AdcConfig$getPrescaler(void)
#line 48
{
  return ATM128_ADC_PRESCALE;
}

# 47 "/opt/tinyos-2.x/tos/sensorboards/homenet_sensor/VoltageP.nc"
static inline   uint8_t VoltageP$VoltageConfig$getPrescaler(void)
#line 47
{
  return ATM128_ADC_PRESCALE;
}

# 49 "PirP.nc"
static inline   uint8_t PirP$Atm128AdcConfig$getPrescaler(void)
#line 49
{
  return ATM128_ADC_PRESCALE;
}

# 145 "/opt/tinyos-2.x/tos/chips/atm128/adc/AdcP.nc"
static inline    uint8_t AdcP$Atm128AdcConfig$default$getPrescaler(uint8_t c)
#line 145
{
  return ATM128_ADC_PRESCALE_2;
}

# 39 "/opt/tinyos-2.x/tos/chips/atm128/adc/Atm128AdcConfig.nc"
inline static   uint8_t AdcP$Atm128AdcConfig$getPrescaler(uint8_t arg_0x7e5289c0){
#line 39
  unsigned char result;
#line 39

#line 39
  switch (arg_0x7e5289c0) {
#line 39
    case /*MotionDetectorC.PhotoSensorC.DemoChannel.PhotoProC.AdcReadClientC*/AdcReadClientC$0$ID:
#line 39
      result = PhotoP$Atm128AdcConfig$getPrescaler();
#line 39
      break;
#line 39
    case /*MotionDetectorC.UltraredSensorC.DemoChannel.UltraredProC.AdcReadClientC*/AdcReadClientC$1$ID:
#line 39
      result = UltraredP$Atm128AdcConfig$getPrescaler();
#line 39
      break;
#line 39
    case /*MotionDetectorC.VoltageC.VoltageProC.AdcReadClientC*/AdcReadClientC$2$ID:
#line 39
      result = VoltageP$VoltageConfig$getPrescaler();
#line 39
      break;
#line 39
    case /*MotionDetectorC.PirSensorC.DemoChannel.AdcReadClientC*/AdcReadClientC$3$ID:
#line 39
      result = PirP$Atm128AdcConfig$getPrescaler();
#line 39
      break;
#line 39
    default:
#line 39
      result = AdcP$Atm128AdcConfig$default$getPrescaler(arg_0x7e5289c0);
#line 39
      break;
#line 39
    }
#line 39

#line 39
  return result;
#line 39
}
#line 39
# 78 "/opt/tinyos-2.x/tos/chips/atm128/adc/AdcP.nc"
static inline uint8_t AdcP$prescaler(void)
#line 78
{
  return AdcP$Atm128AdcConfig$getPrescaler(AdcP$client);
}

# 51 "/opt/tinyos-2.x/tos/sensorboards/homenet_sensor/sht11/HplSensirionSht11P.nc"
static inline  error_t HplSensirionSht11P$SplitControl$start(void)
#line 51
{
  HplSensirionSht11P$Timer$startOneShot(11);
  return SUCCESS;
}

# 79 "/opt/tinyos-2.x/tos/interfaces/SplitControl.nc"
inline static  error_t /*HplSensirionSht11C.SplitControlPowerManagerC.PowerManager*/PowerManagerP$0$SplitControl$start(void){
#line 79
  unsigned char result;
#line 79

#line 79
  result = HplSensirionSht11P$SplitControl$start();
#line 79

#line 79
  return result;
#line 79
}
#line 79
# 84 "/opt/tinyos-2.x/tos/lib/power/PowerManagerP.nc"
static inline   error_t /*HplSensirionSht11C.SplitControlPowerManagerC.PowerManager*/PowerManagerP$0$StdControl$default$start(void)
#line 84
{
  return SUCCESS;
}

# 73 "/opt/tinyos-2.x/tos/interfaces/StdControl.nc"
inline static  error_t /*HplSensirionSht11C.SplitControlPowerManagerC.PowerManager*/PowerManagerP$0$StdControl$start(void){
#line 73
  unsigned char result;
#line 73

#line 73
  result = /*HplSensirionSht11C.SplitControlPowerManagerC.PowerManager*/PowerManagerP$0$StdControl$default$start();
#line 73

#line 73
  return result;
#line 73
}
#line 73
# 63 "/opt/tinyos-2.x/tos/lib/power/PowerManagerP.nc"
static inline  void /*HplSensirionSht11C.SplitControlPowerManagerC.PowerManager*/PowerManagerP$0$startTask$runTask(void)
#line 63
{
  /*HplSensirionSht11C.SplitControlPowerManagerC.PowerManager*/PowerManagerP$0$StdControl$start();
  /*HplSensirionSht11C.SplitControlPowerManagerC.PowerManager*/PowerManagerP$0$SplitControl$start();
}

# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static   error_t HplSensirionSht11P$stopTask$postTask(void){
#line 56
  unsigned char result;
#line 56

#line 56
  result = SchedulerBasicP$TaskBasic$postTask(HplSensirionSht11P$stopTask);
#line 56

#line 56
  return result;
#line 56
}
#line 56
# 47 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline   void /*HplAtm128GeneralIOC.PortD.Bit1*/HplAtm128GeneralIOPinP$25$IO$clr(void)
#line 47
{
#line 47
  * (volatile uint8_t *)50U &= ~(1 << 1);
}

# 30 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   void HplSensirionSht11P$DATA$clr(void){
#line 30
  /*HplAtm128GeneralIOC.PortD.Bit1*/HplAtm128GeneralIOPinP$25$IO$clr();
#line 30
}
#line 30
# 50 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline   void /*HplAtm128GeneralIOC.PortD.Bit1*/HplAtm128GeneralIOPinP$25$IO$makeInput(void)
#line 50
{
#line 50
  * (volatile uint8_t *)49U &= ~(1 << 1);
}

# 33 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   void HplSensirionSht11P$DATA$makeInput(void){
#line 33
  /*HplAtm128GeneralIOC.PortD.Bit1*/HplAtm128GeneralIOPinP$25$IO$makeInput();
#line 33
}
#line 33
# 47 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline   void /*HplAtm128GeneralIOC.PortD.Bit0*/HplAtm128GeneralIOPinP$24$IO$clr(void)
#line 47
{
#line 47
  * (volatile uint8_t *)50U &= ~(1 << 0);
}

# 30 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   void HplSensirionSht11P$SCK$clr(void){
#line 30
  /*HplAtm128GeneralIOC.PortD.Bit0*/HplAtm128GeneralIOPinP$24$IO$clr();
#line 30
}
#line 30
# 50 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline   void /*HplAtm128GeneralIOC.PortD.Bit0*/HplAtm128GeneralIOPinP$24$IO$makeInput(void)
#line 50
{
#line 50
  * (volatile uint8_t *)49U &= ~(1 << 0);
}

# 33 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   void HplSensirionSht11P$SCK$makeInput(void){
#line 33
  /*HplAtm128GeneralIOC.PortD.Bit0*/HplAtm128GeneralIOPinP$24$IO$makeInput();
#line 33
}
#line 33
# 60 "/opt/tinyos-2.x/tos/sensorboards/homenet_sensor/sht11/HplSensirionSht11P.nc"
static inline  error_t HplSensirionSht11P$SplitControl$stop(void)
#line 60
{
  HplSensirionSht11P$SCK$makeInput();
  HplSensirionSht11P$SCK$clr();
  HplSensirionSht11P$DATA$makeInput();
  HplSensirionSht11P$DATA$clr();
  HplSensirionSht11P$stopTask$postTask();
  return SUCCESS;
}

# 102 "/opt/tinyos-2.x/tos/interfaces/SplitControl.nc"
inline static  error_t /*HplSensirionSht11C.SplitControlPowerManagerC.PowerManager*/PowerManagerP$0$SplitControl$stop(void){
#line 102
  unsigned char result;
#line 102

#line 102
  result = HplSensirionSht11P$SplitControl$stop();
#line 102

#line 102
  return result;
#line 102
}
#line 102
# 112 "/opt/tinyos-2.x/tos/lib/power/PowerManagerP.nc"
static inline   error_t /*HplSensirionSht11C.SplitControlPowerManagerC.PowerManager*/PowerManagerP$0$StdControl$default$stop(void)
#line 112
{
  return SUCCESS;
}

# 82 "/opt/tinyos-2.x/tos/interfaces/StdControl.nc"
inline static  error_t /*HplSensirionSht11C.SplitControlPowerManagerC.PowerManager*/PowerManagerP$0$StdControl$stop(void){
#line 82
  unsigned char result;
#line 82

#line 82
  result = /*HplSensirionSht11C.SplitControlPowerManagerC.PowerManager*/PowerManagerP$0$StdControl$default$stop();
#line 82

#line 82
  return result;
#line 82
}
#line 82
# 120 "/opt/tinyos-2.x/tos/lib/power/PowerManagerP.nc"
static inline    void /*HplSensirionSht11C.SplitControlPowerManagerC.PowerManager*/PowerManagerP$0$PowerDownCleanup$default$cleanup(void)
#line 120
{
}

# 52 "/opt/tinyos-2.x/tos/lib/power/PowerDownCleanup.nc"
inline static   void /*HplSensirionSht11C.SplitControlPowerManagerC.PowerManager*/PowerManagerP$0$PowerDownCleanup$cleanup(void){
#line 52
  /*HplSensirionSht11C.SplitControlPowerManagerC.PowerManager*/PowerManagerP$0$PowerDownCleanup$default$cleanup();
#line 52
}
#line 52
# 68 "/opt/tinyos-2.x/tos/lib/power/PowerManagerP.nc"
static inline  void /*HplSensirionSht11C.SplitControlPowerManagerC.PowerManager*/PowerManagerP$0$stopTask$runTask(void)
#line 68
{
  /*HplSensirionSht11C.SplitControlPowerManagerC.PowerManager*/PowerManagerP$0$PowerDownCleanup$cleanup();
  /*HplSensirionSht11C.SplitControlPowerManagerC.PowerManager*/PowerManagerP$0$StdControl$stop();
  /*HplSensirionSht11C.SplitControlPowerManagerC.PowerManager*/PowerManagerP$0$SplitControl$stop();
}

# 78 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
inline static   error_t /*MotionDetectorC.SensirionSht11C.SensirionSht11ReaderP*/SensirionSht11ReaderP$0$HumResource$request(void){
#line 78
  unsigned char result;
#line 78

#line 78
  result = /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP$0$Resource$request(/*MotionDetectorC.SensirionSht11C*/SensirionSht11C$0$HUM_KEY);
#line 78

#line 78
  return result;
#line 78
}
#line 78
# 71 "/opt/tinyos-2.x/tos/sensorboards/homenet_sensor/sht11/SensirionSht11ReaderP.nc"
static inline  error_t /*MotionDetectorC.SensirionSht11C.SensirionSht11ReaderP*/SensirionSht11ReaderP$0$Humidity$read(void)
#line 71
{
  /*MotionDetectorC.SensirionSht11C.SensirionSht11ReaderP*/SensirionSht11ReaderP$0$HumResource$request();
  return SUCCESS;
}

# 55 "/opt/tinyos-2.x/tos/interfaces/Read.nc"
inline static  error_t MotionDetectorM$Read_Humi$read(void){
#line 55
  unsigned char result;
#line 55

#line 55
  result = /*MotionDetectorC.SensirionSht11C.SensirionSht11ReaderP*/SensirionSht11ReaderP$0$Humidity$read();
#line 55

#line 55
  return result;
#line 55
}
#line 55
# 64 "MotionDetectorM.nc"
static inline  void MotionDetectorM$Read_Temp$readDone(error_t err, uint16_t val)
#line 64
{
  if (err == SUCCESS) {
    MotionDetectorM$Raw_Temp = val;
    }
#line 67
  MotionDetectorM$Read_Humi$read();
}

# 63 "/opt/tinyos-2.x/tos/interfaces/Read.nc"
inline static  void /*MotionDetectorC.SensirionSht11C.SensirionSht11ReaderP*/SensirionSht11ReaderP$0$Temperature$readDone(error_t arg_0x7ee20010, /*MotionDetectorC.SensirionSht11C.SensirionSht11ReaderP*/SensirionSht11ReaderP$0$Temperature$val_t arg_0x7ee20198){
#line 63
  MotionDetectorM$Read_Temp$readDone(arg_0x7ee20010, arg_0x7ee20198);
#line 63
}
#line 63
# 101 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
inline static   error_t /*MotionDetectorC.SensirionSht11C.SensirionSht11ReaderP*/SensirionSht11ReaderP$0$TempResource$release(void){
#line 101
  unsigned char result;
#line 101

#line 101
  result = /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP$0$Resource$release(/*MotionDetectorC.SensirionSht11C*/SensirionSht11C$0$TEMP_KEY);
#line 101

#line 101
  return result;
#line 101
}
#line 101
# 113 "/opt/tinyos-2.x/tos/sensorboards/homenet_sensor/sht11/SensirionSht11LogicP.nc"
static inline  error_t /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$SensirionSht11$measureTemperature(uint8_t client)
#line 113
{
  if (!/*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$on) {
#line 114
      return EOFF;
    }
#line 115
  if (/*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$busy) {
#line 115
      return EBUSY;
    }
  else 
#line 115
    {
#line 115
      /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$busy = TRUE;
    }
#line 116
  /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$cmd = /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$CMD_MEASURE_TEMPERATURE;
  /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$currentClient = client;
  return /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$performCommand();
}

# 61 "/opt/tinyos-2.x/tos/sensorboards/homenet_sensor/sht11/SensirionSht11.nc"
inline static  error_t /*MotionDetectorC.SensirionSht11C.SensirionSht11ReaderP*/SensirionSht11ReaderP$0$Sht11Temp$measureTemperature(void){
#line 61
  unsigned char result;
#line 61

#line 61
  result = /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$SensirionSht11$measureTemperature(/*MotionDetectorC.SensirionSht11C*/SensirionSht11C$0$TEMP_KEY);
#line 61

#line 61
  return result;
#line 61
}
#line 61
# 58 "/opt/tinyos-2.x/tos/sensorboards/homenet_sensor/sht11/SensirionSht11ReaderP.nc"
static inline  void /*MotionDetectorC.SensirionSht11C.SensirionSht11ReaderP*/SensirionSht11ReaderP$0$TempResource$granted(void)
#line 58
{
  error_t result;

#line 60
  if ((result = /*MotionDetectorC.SensirionSht11C.SensirionSht11ReaderP*/SensirionSht11ReaderP$0$Sht11Temp$measureTemperature()) != SUCCESS) {
      /*MotionDetectorC.SensirionSht11C.SensirionSht11ReaderP*/SensirionSht11ReaderP$0$TempResource$release();
      /*MotionDetectorC.SensirionSht11C.SensirionSht11ReaderP*/SensirionSht11ReaderP$0$Temperature$readDone(result, 0);
    }
}

# 63 "/opt/tinyos-2.x/tos/interfaces/Read.nc"
inline static  void /*MotionDetectorC.SensirionSht11C.SensirionSht11ReaderP*/SensirionSht11ReaderP$0$Humidity$readDone(error_t arg_0x7ee20010, /*MotionDetectorC.SensirionSht11C.SensirionSht11ReaderP*/SensirionSht11ReaderP$0$Humidity$val_t arg_0x7ee20198){
#line 63
  MotionDetectorM$Read_Humi$readDone(arg_0x7ee20010, arg_0x7ee20198);
#line 63
}
#line 63
# 101 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
inline static   error_t /*MotionDetectorC.SensirionSht11C.SensirionSht11ReaderP*/SensirionSht11ReaderP$0$HumResource$release(void){
#line 101
  unsigned char result;
#line 101

#line 101
  result = /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP$0$Resource$release(/*MotionDetectorC.SensirionSht11C*/SensirionSht11C$0$HUM_KEY);
#line 101

#line 101
  return result;
#line 101
}
#line 101
# 121 "/opt/tinyos-2.x/tos/sensorboards/homenet_sensor/sht11/SensirionSht11LogicP.nc"
static inline  error_t /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$SensirionSht11$measureHumidity(uint8_t client)
#line 121
{
  if (!/*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$on) {
#line 122
      return EOFF;
    }
#line 123
  if (/*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$busy) {
#line 123
      return EBUSY;
    }
  else 
#line 123
    {
#line 123
      /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$busy = TRUE;
    }
#line 124
  /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$cmd = /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$CMD_MEASURE_HUMIDITY;
  /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$currentClient = client;
  return /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$performCommand();
}

# 76 "/opt/tinyos-2.x/tos/sensorboards/homenet_sensor/sht11/SensirionSht11.nc"
inline static  error_t /*MotionDetectorC.SensirionSht11C.SensirionSht11ReaderP*/SensirionSht11ReaderP$0$Sht11Hum$measureHumidity(void){
#line 76
  unsigned char result;
#line 76

#line 76
  result = /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$SensirionSht11$measureHumidity(/*MotionDetectorC.SensirionSht11C*/SensirionSht11C$0$HUM_KEY);
#line 76

#line 76
  return result;
#line 76
}
#line 76
# 76 "/opt/tinyos-2.x/tos/sensorboards/homenet_sensor/sht11/SensirionSht11ReaderP.nc"
static inline  void /*MotionDetectorC.SensirionSht11C.SensirionSht11ReaderP*/SensirionSht11ReaderP$0$HumResource$granted(void)
#line 76
{
  error_t result;

#line 78
  if ((result = /*MotionDetectorC.SensirionSht11C.SensirionSht11ReaderP*/SensirionSht11ReaderP$0$Sht11Hum$measureHumidity()) != SUCCESS) {
      /*MotionDetectorC.SensirionSht11C.SensirionSht11ReaderP*/SensirionSht11ReaderP$0$HumResource$release();
      /*MotionDetectorC.SensirionSht11C.SensirionSht11ReaderP*/SensirionSht11ReaderP$0$Humidity$readDone(result, 0);
    }
}

# 184 "/opt/tinyos-2.x/tos/system/ArbiterP.nc"
static inline   void /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP$0$Resource$default$granted(uint8_t id)
#line 184
{
}

# 92 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
inline static  void /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP$0$Resource$granted(uint8_t arg_0x7e6905d0){
#line 92
  switch (arg_0x7e6905d0) {
#line 92
    case /*MotionDetectorC.SensirionSht11C*/SensirionSht11C$0$TEMP_KEY:
#line 92
      /*MotionDetectorC.SensirionSht11C.SensirionSht11ReaderP*/SensirionSht11ReaderP$0$TempResource$granted();
#line 92
      break;
#line 92
    case /*MotionDetectorC.SensirionSht11C*/SensirionSht11C$0$HUM_KEY:
#line 92
      /*MotionDetectorC.SensirionSht11C.SensirionSht11ReaderP*/SensirionSht11ReaderP$0$HumResource$granted();
#line 92
      break;
#line 92
    default:
#line 92
      /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP$0$Resource$default$granted(arg_0x7e6905d0);
#line 92
      break;
#line 92
    }
#line 92
}
#line 92
# 198 "/opt/tinyos-2.x/tos/system/ArbiterP.nc"
static inline    void /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP$0$ResourceConfigure$default$configure(uint8_t id)
#line 198
{
}

# 49 "/opt/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
inline static   void /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP$0$ResourceConfigure$configure(uint8_t arg_0x7e6890f8){
#line 49
    /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP$0$ResourceConfigure$default$configure(arg_0x7e6890f8);
#line 49
}
#line 49
# 172 "/opt/tinyos-2.x/tos/system/ArbiterP.nc"
static inline  void /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP$0$grantedTask$runTask(void)
#line 172
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 173
    {
      /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP$0$resId = /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP$0$reqResId;
      /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP$0$state = /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP$0$RES_BUSY;
    }
#line 176
    __nesc_atomic_end(__nesc_atomic); }
  /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP$0$ResourceConfigure$configure(/*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP$0$resId);
  /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP$0$Resource$granted(/*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP$0$resId);
}

# 43 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static __inline   void /*HplAtm128InterruptC.IntPin1*/HplAtm128InterruptPinP$1$Irq$disable(void)
#line 43
{
#line 43
  * (volatile uint8_t *)(0x39 + 0x20) &= ~(1 << 1);
}

# 40 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
inline static   void /*HplSensirionSht11C.InterruptDATAC*/Atm128GpioInterruptC$0$Atm128Interrupt$disable(void){
#line 40
  /*HplAtm128InterruptC.IntPin1*/HplAtm128InterruptPinP$1$Irq$disable();
#line 40
}
#line 40
# 33 "/opt/tinyos-2.x/tos/chips/atm128/pins/Atm128GpioInterruptC.nc"
static inline   error_t /*HplSensirionSht11C.InterruptDATAC*/Atm128GpioInterruptC$0$Interrupt$disable(void)
#line 33
{
  /*HplSensirionSht11C.InterruptDATAC*/Atm128GpioInterruptC$0$Atm128Interrupt$disable();
  return SUCCESS;
}

# 50 "/opt/tinyos-2.x/tos/interfaces/GpioInterrupt.nc"
inline static   error_t /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$InterruptDATA$disable(void){
#line 50
  unsigned char result;
#line 50

#line 50
  result = /*HplSensirionSht11C.InterruptDATAC*/Atm128GpioInterruptC$0$Interrupt$disable();
#line 50

#line 50
  return result;
#line 50
}
#line 50
# 46 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline   void /*HplAtm128GeneralIOC.PortD.Bit1*/HplAtm128GeneralIOPinP$25$IO$set(void)
#line 46
{
#line 46
  * (volatile uint8_t *)50U |= 1 << 1;
}

# 29 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   void /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$DATA$set(void){
#line 29
  /*HplAtm128GeneralIOC.PortD.Bit1*/HplAtm128GeneralIOPinP$25$IO$set();
#line 29
}
#line 29




inline static   void /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$DATA$makeInput(void){
#line 33
  /*HplAtm128GeneralIOC.PortD.Bit1*/HplAtm128GeneralIOPinP$25$IO$makeInput();
#line 33
}
#line 33
#line 30
inline static   void /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$CLOCK$clr(void){
#line 30
  /*HplAtm128GeneralIOC.PortD.Bit0*/HplAtm128GeneralIOPinP$24$IO$clr();
#line 30
}
#line 30
# 52 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline   void /*HplAtm128GeneralIOC.PortD.Bit0*/HplAtm128GeneralIOPinP$24$IO$makeOutput(void)
#line 52
{
#line 52
  * (volatile uint8_t *)49U |= 1 << 0;
}

# 35 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   void /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$CLOCK$makeOutput(void){
#line 35
  /*HplAtm128GeneralIOC.PortD.Bit0*/HplAtm128GeneralIOPinP$24$IO$makeOutput();
#line 35
}
#line 35
# 220 "/opt/tinyos-2.x/tos/sensorboards/homenet_sensor/sht11/SensirionSht11LogicP.nc"
static inline void /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$initPins(void)
#line 220
{
  /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$CLOCK$makeOutput();
  /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$CLOCK$clr();
  /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$DATA$makeInput();
  /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$DATA$set();
  /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$InterruptDATA$disable();
}

# 46 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline   void /*HplAtm128GeneralIOC.PortD.Bit0*/HplAtm128GeneralIOPinP$24$IO$set(void)
#line 46
{
#line 46
  * (volatile uint8_t *)50U |= 1 << 0;
}

# 29 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   void /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$CLOCK$set(void){
#line 29
  /*HplAtm128GeneralIOC.PortD.Bit0*/HplAtm128GeneralIOPinP$24$IO$set();
#line 29
}
#line 29
# 52 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline   void /*HplAtm128GeneralIOC.PortD.Bit1*/HplAtm128GeneralIOPinP$25$IO$makeOutput(void)
#line 52
{
#line 52
  * (volatile uint8_t *)49U |= 1 << 1;
}

# 35 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   void /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$DATA$makeOutput(void){
#line 35
  /*HplAtm128GeneralIOC.PortD.Bit1*/HplAtm128GeneralIOPinP$25$IO$makeOutput();
#line 35
}
#line 35
# 228 "/opt/tinyos-2.x/tos/sensorboards/homenet_sensor/sht11/SensirionSht11LogicP.nc"
static inline void /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$resetDevice(void)
#line 228
{
  uint8_t i;

#line 230
  /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$DATA$makeOutput();
  /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$DATA$set();
  /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$CLOCK$clr();
  for (i = 0; i < 9; i++) {
      /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$CLOCK$set();
      /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$CLOCK$clr();
    }
}

# 30 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   void /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$DATA$clr(void){
#line 30
  /*HplAtm128GeneralIOC.PortD.Bit1*/HplAtm128GeneralIOPinP$25$IO$clr();
#line 30
}
#line 30
# 239 "/opt/tinyos-2.x/tos/sensorboards/homenet_sensor/sht11/SensirionSht11LogicP.nc"
static inline void /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$transmissionStart(void)
#line 239
{
  /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$DATA$makeOutput();
  /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$DATA$set();
  /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$CLOCK$clr();
  /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$CLOCK$set();
  /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$DATA$clr();
  /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$CLOCK$clr();
  /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$CLOCK$set();
  /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$DATA$set();
  /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$CLOCK$clr();
}

static inline void /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$sendCommand(uint8_t _cmd)
#line 251
{
  /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$writeByte(_cmd);
}

# 45 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline   bool /*HplAtm128GeneralIOC.PortD.Bit1*/HplAtm128GeneralIOPinP$25$IO$get(void)
#line 45
{
#line 45
  return (* (volatile uint8_t *)48U & (1 << 1)) != 0;
}

# 32 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   bool /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$DATA$get(void){
#line 32
  unsigned char result;
#line 32

#line 32
  result = /*HplAtm128GeneralIOC.PortD.Bit1*/HplAtm128GeneralIOPinP$25$IO$get();
#line 32

#line 32
  return result;
#line 32
}
#line 32
# 29 "/opt/tinyos-2.x/tos/chips/atm128/pins/Atm128GpioInterruptC.nc"
static inline   error_t /*HplSensirionSht11C.InterruptDATAC*/Atm128GpioInterruptC$0$Interrupt$enableFallingEdge(void)
#line 29
{
  return /*HplSensirionSht11C.InterruptDATAC*/Atm128GpioInterruptC$0$enable(FALSE);
}

# 43 "/opt/tinyos-2.x/tos/interfaces/GpioInterrupt.nc"
inline static   error_t /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$InterruptDATA$enableFallingEdge(void){
#line 43
  unsigned char result;
#line 43

#line 43
  result = /*HplSensirionSht11C.InterruptDATAC*/Atm128GpioInterruptC$0$Interrupt$enableFallingEdge();
#line 43

#line 43
  return result;
#line 43
}
#line 43
# 281 "/opt/tinyos-2.x/tos/sensorboards/homenet_sensor/sht11/SensirionSht11LogicP.nc"
static inline void /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$enableInterrupt(void)
#line 281
{
  /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$DATA$makeInput();
  /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$DATA$set();
  /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$InterruptDATA$enableFallingEdge();
}

# 41 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static __inline   void /*HplAtm128InterruptC.IntPin1*/HplAtm128InterruptPinP$1$Irq$clear(void)
#line 41
{
#line 41
  * (volatile uint8_t *)(0x38 + 0x20) = 1 << 1;
}

# 45 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
inline static   void /*HplSensirionSht11C.InterruptDATAC*/Atm128GpioInterruptC$0$Atm128Interrupt$clear(void){
#line 45
  /*HplAtm128InterruptC.IntPin1*/HplAtm128InterruptPinP$1$Irq$clear();
#line 45
}
#line 45
# 47 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static __inline   void /*HplAtm128InterruptC.IntPin1*/HplAtm128InterruptPinP$1$Irq$edge(bool low_to_high)
#line 47
{
  * (volatile uint8_t *)106U |= 1 << 3;

  if (low_to_high) {
    * (volatile uint8_t *)106U |= 1 << 2;
    }
  else {
#line 53
    * (volatile uint8_t *)106U &= ~(1 << 2);
    }
}

# 59 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
inline static   void /*HplSensirionSht11C.InterruptDATAC*/Atm128GpioInterruptC$0$Atm128Interrupt$edge(bool arg_0x7e728c60){
#line 59
  /*HplAtm128InterruptC.IntPin1*/HplAtm128InterruptPinP$1$Irq$edge(arg_0x7e728c60);
#line 59
}
#line 59
# 42 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static __inline   void /*HplAtm128InterruptC.IntPin1*/HplAtm128InterruptPinP$1$Irq$enable(void)
#line 42
{
#line 42
  * (volatile uint8_t *)(0x39 + 0x20) |= 1 << 1;
}

# 35 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
inline static   void /*HplSensirionSht11C.InterruptDATAC*/Atm128GpioInterruptC$0$Atm128Interrupt$enable(void){
#line 35
  /*HplAtm128InterruptC.IntPin1*/HplAtm128InterruptPinP$1$Irq$enable();
#line 35
}
#line 35
# 372 "/opt/tinyos-2.x/tos/sensorboards/homenet_sensor/sht11/SensirionSht11LogicP.nc"
static inline void /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$ack(void)
#line 372
{
  /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$DATA$makeOutput();
  /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$DATA$clr();
  /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$CLOCK$set();
  /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$CLOCK$clr();
  /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$DATA$makeInput();
  /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$DATA$set();
}

# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static   error_t /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$signalStatusDone$postTask(void){
#line 56
  unsigned char result;
#line 56

#line 56
  result = SchedulerBasicP$TaskBasic$postTask(/*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$signalStatusDone);
#line 56

#line 56
  return result;
#line 56
}
#line 56
# 50 "/opt/tinyos-2.x/tos/system/FcfsResourceQueueC.nc"
static inline   bool /*HplSensirionSht11C.Arbiter.Queue*/FcfsResourceQueueC$0$FcfsQueue$isEmpty(void)
#line 50
{
  return /*HplSensirionSht11C.Arbiter.Queue*/FcfsResourceQueueC$0$qHead == /*HplSensirionSht11C.Arbiter.Queue*/FcfsResourceQueueC$0$NO_ENTRY;
}

# 43 "/opt/tinyos-2.x/tos/interfaces/ResourceQueue.nc"
inline static   bool /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP$0$Queue$isEmpty(void){
#line 43
  unsigned char result;
#line 43

#line 43
  result = /*HplSensirionSht11C.Arbiter.Queue*/FcfsResourceQueueC$0$FcfsQueue$isEmpty();
#line 43

#line 43
  return result;
#line 43
}
#line 43
# 58 "/opt/tinyos-2.x/tos/system/FcfsResourceQueueC.nc"
static inline   resource_client_id_t /*HplSensirionSht11C.Arbiter.Queue*/FcfsResourceQueueC$0$FcfsQueue$dequeue(void)
#line 58
{
  /* atomic removed: atomic calls only */
#line 59
  {
    if (/*HplSensirionSht11C.Arbiter.Queue*/FcfsResourceQueueC$0$qHead != /*HplSensirionSht11C.Arbiter.Queue*/FcfsResourceQueueC$0$NO_ENTRY) {
        uint8_t id = /*HplSensirionSht11C.Arbiter.Queue*/FcfsResourceQueueC$0$qHead;

#line 62
        /*HplSensirionSht11C.Arbiter.Queue*/FcfsResourceQueueC$0$qHead = /*HplSensirionSht11C.Arbiter.Queue*/FcfsResourceQueueC$0$resQ[/*HplSensirionSht11C.Arbiter.Queue*/FcfsResourceQueueC$0$qHead];
        if (/*HplSensirionSht11C.Arbiter.Queue*/FcfsResourceQueueC$0$qHead == /*HplSensirionSht11C.Arbiter.Queue*/FcfsResourceQueueC$0$NO_ENTRY) {
          /*HplSensirionSht11C.Arbiter.Queue*/FcfsResourceQueueC$0$qTail = /*HplSensirionSht11C.Arbiter.Queue*/FcfsResourceQueueC$0$NO_ENTRY;
          }
#line 65
        /*HplSensirionSht11C.Arbiter.Queue*/FcfsResourceQueueC$0$resQ[id] = /*HplSensirionSht11C.Arbiter.Queue*/FcfsResourceQueueC$0$NO_ENTRY;
        {
          unsigned char __nesc_temp = 
#line 66
          id;

#line 66
          return __nesc_temp;
        }
      }
#line 68
    {
      unsigned char __nesc_temp = 
#line 68
      /*HplSensirionSht11C.Arbiter.Queue*/FcfsResourceQueueC$0$NO_ENTRY;

#line 68
      return __nesc_temp;
    }
  }
}

# 60 "/opt/tinyos-2.x/tos/interfaces/ResourceQueue.nc"
inline static   resource_client_id_t /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP$0$Queue$dequeue(void){
#line 60
  unsigned char result;
#line 60

#line 60
  result = /*HplSensirionSht11C.Arbiter.Queue*/FcfsResourceQueueC$0$FcfsQueue$dequeue();
#line 60

#line 60
  return result;
#line 60
}
#line 60
# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static   error_t /*HplSensirionSht11C.SplitControlPowerManagerC.PowerManager*/PowerManagerP$0$stopTask$postTask(void){
#line 56
  unsigned char result;
#line 56

#line 56
  result = SchedulerBasicP$TaskBasic$postTask(/*HplSensirionSht11C.SplitControlPowerManagerC.PowerManager*/PowerManagerP$0$stopTask);
#line 56

#line 56
  return result;
#line 56
}
#line 56
# 96 "/opt/tinyos-2.x/tos/lib/power/PowerManagerP.nc"
static inline   void /*HplSensirionSht11C.SplitControlPowerManagerC.PowerManager*/PowerManagerP$0$ResourceController$granted(void)
#line 96
{
  /* atomic removed: atomic calls only */
#line 97
  /*HplSensirionSht11C.SplitControlPowerManagerC.PowerManager*/PowerManagerP$0$stopping = TRUE;
  /*HplSensirionSht11C.SplitControlPowerManagerC.PowerManager*/PowerManagerP$0$stopTask$postTask();
}

# 46 "/opt/tinyos-2.x/tos/interfaces/ResourceController.nc"
inline static   void /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP$0$ResourceController$granted(void){
#line 46
  /*HplSensirionSht11C.SplitControlPowerManagerC.PowerManager*/PowerManagerP$0$ResourceController$granted();
#line 46
}
#line 46
# 200 "/opt/tinyos-2.x/tos/system/ArbiterP.nc"
static inline    void /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP$0$ResourceConfigure$default$unconfigure(uint8_t id)
#line 200
{
}

# 55 "/opt/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
inline static   void /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP$0$ResourceConfigure$unconfigure(uint8_t arg_0x7e6890f8){
#line 55
    /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP$0$ResourceConfigure$default$unconfigure(arg_0x7e6890f8);
#line 55
}
#line 55
# 151 "MotionDetectorM.nc"
static inline void MotionDetectorM$calc_SHT_(uint16_t p_humidity, uint16_t p_temperature)
{
  const float C1 = -4.0;
  const float C2 = 0.0405;
  const float C3 = -0.0000028;
  const float T1 = 0.01;
  const float T2 = 0.00008;
  float rh_lin;
  float rh_true;
  float t_C;
  float rh = (float )p_humidity;
  float t = (float )p_temperature;

#line 163
  t_C = t * 0.01 - 40;
  t_C = t * 0.01 - 40;
  rh_lin = C3 * rh * rh + C2 * rh + C1;
  rh_true = (t_C - 25) * (T1 + T2 * rh) + rh_lin;
  if (rh_true > 100) {
#line 167
    rh_true = 100;
    }
#line 168
  if (rh_true < 0.1) {
#line 168
    rh_true = 0.1;
    }
#line 169
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 169
    MotionDetectorM$myTemp = (uint16_t )t_C;
#line 169
    __nesc_atomic_end(__nesc_atomic); }
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 170
    MotionDetectorM$myHumi = (uint16_t )rh_true;
#line 170
    __nesc_atomic_end(__nesc_atomic); }
}

# 55 "/opt/tinyos-2.x/tos/interfaces/Read.nc"
inline static  error_t /*MotionDetectorC.VoltageC.ADC_ShiftM*/ADC_ShiftM$2$subRead$read(void){
#line 55
  unsigned char result;
#line 55

#line 55
  result = /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$Read$read(/*MotionDetectorC.VoltageC.VoltageProC.AdcReadClientC*/AdcReadClientC$2$ID);
#line 55

#line 55
  return result;
#line 55
}
#line 55
# 33 "/opt/tinyos-2.x/tos/sensorboards/homenet_sensor/ADC_ShiftM.nc"
static inline  error_t /*MotionDetectorC.VoltageC.ADC_ShiftM*/ADC_ShiftM$2$Read$read(void)
#line 33
{
  return /*MotionDetectorC.VoltageC.ADC_ShiftM*/ADC_ShiftM$2$subRead$read();
}

# 55 "/opt/tinyos-2.x/tos/interfaces/Read.nc"
inline static  error_t MotionDetectorM$Read_Voltage$read(void){
#line 55
  unsigned char result;
#line 55

#line 55
  result = /*MotionDetectorC.VoltageC.ADC_ShiftM*/ADC_ShiftM$2$Read$read();
#line 55

#line 55
  return result;
#line 55
}
#line 55
# 101 "/opt/tinyos-2.x/tos/lib/power/PowerManagerP.nc"
static inline  void /*HplSensirionSht11C.SplitControlPowerManagerC.PowerManager*/PowerManagerP$0$SplitControl$stopDone(error_t error)
#line 101
{
  if (/*HplSensirionSht11C.SplitControlPowerManagerC.PowerManager*/PowerManagerP$0$requested == TRUE) {
      /*HplSensirionSht11C.SplitControlPowerManagerC.PowerManager*/PowerManagerP$0$StdControl$start();
      /*HplSensirionSht11C.SplitControlPowerManagerC.PowerManager*/PowerManagerP$0$SplitControl$start();
    }
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 106
    {
      /*HplSensirionSht11C.SplitControlPowerManagerC.PowerManager*/PowerManagerP$0$requested = FALSE;
      /*HplSensirionSht11C.SplitControlPowerManagerC.PowerManager*/PowerManagerP$0$stopping = FALSE;
    }
#line 109
    __nesc_atomic_end(__nesc_atomic); }
}

# 110 "/opt/tinyos-2.x/tos/interfaces/SplitControl.nc"
inline static  void HplSensirionSht11P$SplitControl$stopDone(error_t arg_0x7ee000f8){
#line 110
  /*HplSensirionSht11C.SplitControlPowerManagerC.PowerManager*/PowerManagerP$0$SplitControl$stopDone(arg_0x7ee000f8);
#line 110
}
#line 110
# 69 "/opt/tinyos-2.x/tos/sensorboards/homenet_sensor/sht11/HplSensirionSht11P.nc"
static inline  void HplSensirionSht11P$stopTask$runTask(void)
#line 69
{
  HplSensirionSht11P$SplitControl$stopDone(SUCCESS);
}

# 90 "/opt/tinyos-2.x/tos/sensorboards/homenet_sensor/sht11/SensirionSht11ReaderP.nc"
static inline  void /*MotionDetectorC.SensirionSht11C.SensirionSht11ReaderP*/SensirionSht11ReaderP$0$Sht11Temp$measureHumidityDone(error_t result, uint16_t val)
#line 90
{
}

#line 84
static inline  void /*MotionDetectorC.SensirionSht11C.SensirionSht11ReaderP*/SensirionSht11ReaderP$0$Sht11Hum$measureHumidityDone(error_t result, uint16_t val)
#line 84
{
  /*MotionDetectorC.SensirionSht11C.SensirionSht11ReaderP*/SensirionSht11ReaderP$0$HumResource$release();
  /*MotionDetectorC.SensirionSht11C.SensirionSht11ReaderP*/SensirionSht11ReaderP$0$Humidity$readDone(result, val);
}

# 408 "/opt/tinyos-2.x/tos/sensorboards/homenet_sensor/sht11/SensirionSht11LogicP.nc"
static inline   void /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$SensirionSht11$default$measureHumidityDone(uint8_t client, error_t result, uint16_t val)
#line 408
{
}

# 84 "/opt/tinyos-2.x/tos/sensorboards/homenet_sensor/sht11/SensirionSht11.nc"
inline static  void /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$SensirionSht11$measureHumidityDone(uint8_t arg_0x7e7c8200, error_t arg_0x7e806b70, uint16_t arg_0x7e806d00){
#line 84
  switch (arg_0x7e7c8200) {
#line 84
    case /*MotionDetectorC.SensirionSht11C*/SensirionSht11C$0$TEMP_KEY:
#line 84
      /*MotionDetectorC.SensirionSht11C.SensirionSht11ReaderP*/SensirionSht11ReaderP$0$Sht11Temp$measureHumidityDone(arg_0x7e806b70, arg_0x7e806d00);
#line 84
      break;
#line 84
    case /*MotionDetectorC.SensirionSht11C*/SensirionSht11C$0$HUM_KEY:
#line 84
      /*MotionDetectorC.SensirionSht11C.SensirionSht11ReaderP*/SensirionSht11ReaderP$0$Sht11Hum$measureHumidityDone(arg_0x7e806b70, arg_0x7e806d00);
#line 84
      break;
#line 84
    default:
#line 84
      /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$SensirionSht11$default$measureHumidityDone(arg_0x7e7c8200, arg_0x7e806b70, arg_0x7e806d00);
#line 84
      break;
#line 84
    }
#line 84
}
#line 84
# 95 "/opt/tinyos-2.x/tos/sensorboards/homenet_sensor/sht11/SensirionSht11ReaderP.nc"
static inline  void /*MotionDetectorC.SensirionSht11C.SensirionSht11ReaderP*/SensirionSht11ReaderP$0$Sht11Hum$measureTemperatureDone(error_t result, uint16_t val)
#line 95
{
}

# 407 "/opt/tinyos-2.x/tos/sensorboards/homenet_sensor/sht11/SensirionSht11LogicP.nc"
static inline   void /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$SensirionSht11$default$measureTemperatureDone(uint8_t client, error_t result, uint16_t val)
#line 407
{
}

# 69 "/opt/tinyos-2.x/tos/sensorboards/homenet_sensor/sht11/SensirionSht11.nc"
inline static  void /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$SensirionSht11$measureTemperatureDone(uint8_t arg_0x7e7c8200, error_t arg_0x7e8060f8, uint16_t arg_0x7e806288){
#line 69
  switch (arg_0x7e7c8200) {
#line 69
    case /*MotionDetectorC.SensirionSht11C*/SensirionSht11C$0$TEMP_KEY:
#line 69
      /*MotionDetectorC.SensirionSht11C.SensirionSht11ReaderP*/SensirionSht11ReaderP$0$Sht11Temp$measureTemperatureDone(arg_0x7e8060f8, arg_0x7e806288);
#line 69
      break;
#line 69
    case /*MotionDetectorC.SensirionSht11C*/SensirionSht11C$0$HUM_KEY:
#line 69
      /*MotionDetectorC.SensirionSht11C.SensirionSht11ReaderP*/SensirionSht11ReaderP$0$Sht11Hum$measureTemperatureDone(arg_0x7e8060f8, arg_0x7e806288);
#line 69
      break;
#line 69
    default:
#line 69
      /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$SensirionSht11$default$measureTemperatureDone(arg_0x7e7c8200, arg_0x7e8060f8, arg_0x7e806288);
#line 69
      break;
#line 69
    }
#line 69
}
#line 69
# 67 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static  void /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$Timer$stop(void){
#line 67
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$stop(2U);
#line 67
}
#line 67
# 320 "/opt/tinyos-2.x/tos/sensorboards/homenet_sensor/sht11/SensirionSht11LogicP.nc"
static inline  void /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$readSensor$runTask(void)
#line 320
{
  uint16_t data = 0;
  uint8_t crc = 0;

  if (/*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$busy == FALSE) {


      return;
    }

  /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$Timer$stop();

  data = /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$readByte() << 8;
  data |= /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$readByte();

  crc = /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$readByte();

  /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$endTransmission();

  switch (/*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$cmd) {
      case /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$CMD_MEASURE_TEMPERATURE: 
        /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$busy = FALSE;
      /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$SensirionSht11$measureTemperatureDone(/*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$currentClient, SUCCESS, data);
      break;

      case /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$CMD_MEASURE_HUMIDITY: 
        /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$busy = FALSE;
      /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$SensirionSht11$measureHumidityDone(/*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$currentClient, SUCCESS, data);
      break;

      default: 
        break;
    }
}

# 92 "/opt/tinyos-2.x/tos/sensorboards/homenet_sensor/sht11/SensirionSht11ReaderP.nc"
static inline  void /*MotionDetectorC.SensirionSht11C.SensirionSht11ReaderP*/SensirionSht11ReaderP$0$Sht11Temp$writeStatusRegDone(error_t result)
#line 92
{
}



static inline  void /*MotionDetectorC.SensirionSht11C.SensirionSht11ReaderP*/SensirionSht11ReaderP$0$Sht11Hum$writeStatusRegDone(error_t result)
#line 97
{
}

# 410 "/opt/tinyos-2.x/tos/sensorboards/homenet_sensor/sht11/SensirionSht11LogicP.nc"
static inline   void /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$SensirionSht11$default$writeStatusRegDone(uint8_t client, error_t result)
#line 410
{
}

# 116 "/opt/tinyos-2.x/tos/sensorboards/homenet_sensor/sht11/SensirionSht11.nc"
inline static  void /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$SensirionSht11$writeStatusRegDone(uint8_t arg_0x7e7c8200, error_t arg_0x7e8033a0){
#line 116
  switch (arg_0x7e7c8200) {
#line 116
    case /*MotionDetectorC.SensirionSht11C*/SensirionSht11C$0$TEMP_KEY:
#line 116
      /*MotionDetectorC.SensirionSht11C.SensirionSht11ReaderP*/SensirionSht11ReaderP$0$Sht11Temp$writeStatusRegDone(arg_0x7e8033a0);
#line 116
      break;
#line 116
    case /*MotionDetectorC.SensirionSht11C*/SensirionSht11C$0$HUM_KEY:
#line 116
      /*MotionDetectorC.SensirionSht11C.SensirionSht11ReaderP*/SensirionSht11ReaderP$0$Sht11Hum$writeStatusRegDone(arg_0x7e8033a0);
#line 116
      break;
#line 116
    default:
#line 116
      /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$SensirionSht11$default$writeStatusRegDone(arg_0x7e7c8200, arg_0x7e8033a0);
#line 116
      break;
#line 116
    }
#line 116
}
#line 116
# 91 "/opt/tinyos-2.x/tos/sensorboards/homenet_sensor/sht11/SensirionSht11ReaderP.nc"
static inline  void /*MotionDetectorC.SensirionSht11C.SensirionSht11ReaderP*/SensirionSht11ReaderP$0$Sht11Temp$readStatusRegDone(error_t result, uint8_t val)
#line 91
{
}



static inline  void /*MotionDetectorC.SensirionSht11C.SensirionSht11ReaderP*/SensirionSht11ReaderP$0$Sht11Hum$readStatusRegDone(error_t result, uint8_t val)
#line 96
{
}

# 409 "/opt/tinyos-2.x/tos/sensorboards/homenet_sensor/sht11/SensirionSht11LogicP.nc"
static inline   void /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$SensirionSht11$default$readStatusRegDone(uint8_t client, error_t result, uint8_t val)
#line 409
{
}

# 100 "/opt/tinyos-2.x/tos/sensorboards/homenet_sensor/sht11/SensirionSht11.nc"
inline static  void /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$SensirionSht11$readStatusRegDone(uint8_t arg_0x7e7c8200, error_t arg_0x7e805730, uint8_t arg_0x7e8058b8){
#line 100
  switch (arg_0x7e7c8200) {
#line 100
    case /*MotionDetectorC.SensirionSht11C*/SensirionSht11C$0$TEMP_KEY:
#line 100
      /*MotionDetectorC.SensirionSht11C.SensirionSht11ReaderP*/SensirionSht11ReaderP$0$Sht11Temp$readStatusRegDone(arg_0x7e805730, arg_0x7e8058b8);
#line 100
      break;
#line 100
    case /*MotionDetectorC.SensirionSht11C*/SensirionSht11C$0$HUM_KEY:
#line 100
      /*MotionDetectorC.SensirionSht11C.SensirionSht11ReaderP*/SensirionSht11ReaderP$0$Sht11Hum$readStatusRegDone(arg_0x7e805730, arg_0x7e8058b8);
#line 100
      break;
#line 100
    default:
#line 100
      /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$SensirionSht11$default$readStatusRegDone(arg_0x7e7c8200, arg_0x7e805730, arg_0x7e8058b8);
#line 100
      break;
#line 100
    }
#line 100
}
#line 100
# 388 "/opt/tinyos-2.x/tos/sensorboards/homenet_sensor/sht11/SensirionSht11LogicP.nc"
static inline  void /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$signalStatusDone$runTask(void)
#line 388
{
  bool _writeFail = /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$writeFail;

#line 390
  switch (/*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$cmd) {
      case /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$CMD_READ_STATUS: 
        /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$busy = FALSE;
      /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$SensirionSht11$readStatusRegDone(/*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$currentClient, SUCCESS, /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$status);
      break;
      case /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$CMD_WRITE_STATUS: 
        /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$busy = FALSE;
      /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$writeFail = FALSE;
      /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$SensirionSht11$writeStatusRegDone(/*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$currentClient, _writeFail ? FAIL : SUCCESS);
      break;
      default: 

        break;
    }
}

# 92 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static   void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$startAt(/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$size_type arg_0x7ea22350, /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$size_type arg_0x7ea224e0){
#line 92
  /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$Alarm$startAt(arg_0x7ea22350, arg_0x7ea224e0);
#line 92
}
#line 92
# 47 "/opt/tinyos-2.x/tos/lib/timer/AlarmToTimerC.nc"
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$start(uint32_t t0, uint32_t dt, bool oneshot)
{
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$m_dt = dt;
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$m_oneshot = oneshot;
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$startAt(t0, dt);
}

#line 82
static inline  void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$startOneShotAt(uint32_t t0, uint32_t dt)
{
#line 83
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$start(t0, dt, TRUE);
}

# 118 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static  void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$startOneShotAt(uint32_t arg_0x7ee609b8, uint32_t arg_0x7ee60b48){
#line 118
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$startOneShotAt(arg_0x7ee609b8, arg_0x7ee60b48);
#line 118
}
#line 118
# 132 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer0AsyncC.nc"
static inline   void HplAtm128Timer0AsyncC$Compare$stop(void)
#line 132
{
#line 132
  * (volatile uint8_t *)(0x37 + 0x20) &= ~(1 << 1);
}

# 59 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static   void /*AlarmCounterMilliP.MilliAlarm*/Atm128AlarmC$0$HplAtm128Compare$stop(void){
#line 59
  HplAtm128Timer0AsyncC$Compare$stop();
#line 59
}
#line 59
# 65 "/opt/tinyos-2.x/tos/chips/atm128/timer/Atm128AlarmC.nc"
static inline   void /*AlarmCounterMilliP.MilliAlarm*/Atm128AlarmC$0$Alarm$stop(void)
#line 65
{
  /*AlarmCounterMilliP.MilliAlarm*/Atm128AlarmC$0$HplAtm128Compare$stop();
}

# 62 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static   void /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$AlarmFrom$stop(void){
#line 62
  /*AlarmCounterMilliP.MilliAlarm*/Atm128AlarmC$0$Alarm$stop();
#line 62
}
#line 62
# 173 "/opt/tinyos-2.x/tos/lib/timer/TransformAlarmCounterC.nc"
static inline   void /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$Alarm$stop(void)
{
  /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$AlarmFrom$stop();
}

# 62 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static   void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$stop(void){
#line 62
  /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$Alarm$stop();
#line 62
}
#line 62
# 60 "/opt/tinyos-2.x/tos/lib/timer/AlarmToTimerC.nc"
static inline  void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$stop(void)
{
#line 61
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$stop();
}

# 67 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static  void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$stop(void){
#line 67
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$stop();
#line 67
}
#line 67
# 88 "/opt/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
static inline  void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$updateFromTimer$runTask(void)
{




  uint32_t now = /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$getNow();
  int32_t min_remaining = (1UL << 31) - 1;
  bool min_remaining_isset = FALSE;
  uint8_t num;

  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$stop();

  for (num = 0; num < /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$NUM_TIMERS; num++) 
    {
      /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer_t *timer = &/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$m_timers[num];

      if (timer->isrunning) 
        {
          uint32_t elapsed = now - timer->t0;
          int32_t remaining = timer->dt - elapsed;

          if (remaining < min_remaining) 
            {
              min_remaining = remaining;
              min_remaining_isset = TRUE;
            }
        }
    }

  if (min_remaining_isset) 
    {
      if (min_remaining <= 0) {
        /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$fireTimers(now);
        }
      else {
#line 123
        /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$startOneShotAt(now, min_remaining);
        }
    }
}

# 55 "/opt/tinyos-2.x/tos/interfaces/Read.nc"
inline static  error_t /*MotionDetectorC.PhotoSensorC.DemoChannel.ADC_ShiftM*/ADC_ShiftM$0$subRead$read(void){
#line 55
  unsigned char result;
#line 55

#line 55
  result = /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$Read$read(/*MotionDetectorC.PhotoSensorC.DemoChannel.PhotoProC.AdcReadClientC*/AdcReadClientC$0$ID);
#line 55

#line 55
  return result;
#line 55
}
#line 55
# 33 "/opt/tinyos-2.x/tos/sensorboards/homenet_sensor/ADC_ShiftM.nc"
static inline  error_t /*MotionDetectorC.PhotoSensorC.DemoChannel.ADC_ShiftM*/ADC_ShiftM$0$Read$read(void)
#line 33
{
  return /*MotionDetectorC.PhotoSensorC.DemoChannel.ADC_ShiftM*/ADC_ShiftM$0$subRead$read();
}

# 55 "/opt/tinyos-2.x/tos/interfaces/Read.nc"
inline static  error_t MotionDetectorM$Read_Photo$read(void){
#line 55
  unsigned char result;
#line 55

#line 55
  result = /*MotionDetectorC.PhotoSensorC.DemoChannel.ADC_ShiftM*/ADC_ShiftM$0$Read$read();
#line 55

#line 55
  return result;
#line 55
}
#line 55
# 54 "MotionDetectorM.nc"
static inline  void MotionDetectorM$Timer$fired(void)
#line 54
{
  MotionDetectorM$Read_Photo$read();
}

# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static   error_t /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP$0$grantedTask$postTask(void){
#line 56
  unsigned char result;
#line 56

#line 56
  result = SchedulerBasicP$TaskBasic$postTask(/*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP$0$grantedTask);
#line 56

#line 56
  return result;
#line 56
}
#line 56
# 125 "/opt/tinyos-2.x/tos/system/ArbiterP.nc"
static inline   error_t /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP$0$ResourceController$release(void)
#line 125
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 126
    {
      if (/*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP$0$resId == /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP$0$CONTROLLER_ID) {
          if (/*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP$0$state == /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP$0$RES_GRANTING) {
              /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP$0$grantedTask$postTask();
              {
                unsigned char __nesc_temp = 
#line 130
                SUCCESS;

                {
#line 130
                  __nesc_atomic_end(__nesc_atomic); 
#line 130
                  return __nesc_temp;
                }
              }
            }
          else {
#line 132
            if (/*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP$0$state == /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP$0$RES_IMM_GRANTING) {
                /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP$0$resId = /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP$0$reqResId;
                /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP$0$state = /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP$0$RES_BUSY;
                {
                  unsigned char __nesc_temp = 
#line 135
                  SUCCESS;

                  {
#line 135
                    __nesc_atomic_end(__nesc_atomic); 
#line 135
                    return __nesc_temp;
                  }
                }
              }
            }
        }
    }
#line 141
    __nesc_atomic_end(__nesc_atomic); }
#line 139
  return FAIL;
}

# 56 "/opt/tinyos-2.x/tos/interfaces/ResourceController.nc"
inline static   error_t /*HplSensirionSht11C.SplitControlPowerManagerC.PowerManager*/PowerManagerP$0$ResourceController$release(void){
#line 56
  unsigned char result;
#line 56

#line 56
  result = /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP$0$ResourceController$release();
#line 56

#line 56
  return result;
#line 56
}
#line 56
# 92 "/opt/tinyos-2.x/tos/lib/power/PowerManagerP.nc"
static inline  void /*HplSensirionSht11C.SplitControlPowerManagerC.PowerManager*/PowerManagerP$0$SplitControl$startDone(error_t error)
#line 92
{
  /*HplSensirionSht11C.SplitControlPowerManagerC.PowerManager*/PowerManagerP$0$ResourceController$release();
}

# 88 "/opt/tinyos-2.x/tos/interfaces/SplitControl.nc"
inline static  void HplSensirionSht11P$SplitControl$startDone(error_t arg_0x7ee01578){
#line 88
  /*HplSensirionSht11C.SplitControlPowerManagerC.PowerManager*/PowerManagerP$0$SplitControl$startDone(arg_0x7ee01578);
#line 88
}
#line 88
# 56 "/opt/tinyos-2.x/tos/sensorboards/homenet_sensor/sht11/HplSensirionSht11P.nc"
static inline  void HplSensirionSht11P$Timer$fired(void)
#line 56
{
  HplSensirionSht11P$SplitControl$startDone(SUCCESS);
}

# 89 "/opt/tinyos-2.x/tos/sensorboards/homenet_sensor/sht11/SensirionSht11ReaderP.nc"
static inline  void /*MotionDetectorC.SensirionSht11C.SensirionSht11ReaderP*/SensirionSht11ReaderP$0$Sht11Temp$resetDone(error_t result)
#line 89
{
}



static inline  void /*MotionDetectorC.SensirionSht11C.SensirionSht11ReaderP*/SensirionSht11ReaderP$0$Sht11Hum$resetDone(error_t result)
#line 94
{
}

# 406 "/opt/tinyos-2.x/tos/sensorboards/homenet_sensor/sht11/SensirionSht11LogicP.nc"
static inline   void /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$SensirionSht11$default$resetDone(uint8_t client, error_t result)
#line 406
{
}

# 54 "/opt/tinyos-2.x/tos/sensorboards/homenet_sensor/sht11/SensirionSht11.nc"
inline static  void /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$SensirionSht11$resetDone(uint8_t arg_0x7e7c8200, error_t arg_0x7e807820){
#line 54
  switch (arg_0x7e7c8200) {
#line 54
    case /*MotionDetectorC.SensirionSht11C*/SensirionSht11C$0$TEMP_KEY:
#line 54
      /*MotionDetectorC.SensirionSht11C.SensirionSht11ReaderP*/SensirionSht11ReaderP$0$Sht11Temp$resetDone(arg_0x7e807820);
#line 54
      break;
#line 54
    case /*MotionDetectorC.SensirionSht11C*/SensirionSht11C$0$HUM_KEY:
#line 54
      /*MotionDetectorC.SensirionSht11C.SensirionSht11ReaderP*/SensirionSht11ReaderP$0$Sht11Hum$resetDone(arg_0x7e807820);
#line 54
      break;
#line 54
    default:
#line 54
      /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$SensirionSht11$default$resetDone(arg_0x7e7c8200, arg_0x7e807820);
#line 54
      break;
#line 54
    }
#line 54
}
#line 54
# 287 "/opt/tinyos-2.x/tos/sensorboards/homenet_sensor/sht11/SensirionSht11LogicP.nc"
static inline  void /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$Timer$fired(void)
#line 287
{

  switch (/*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$cmd) {

      case /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$CMD_SOFT_RESET: 

        /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$busy = FALSE;
      /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$SensirionSht11$resetDone(/*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$currentClient, SUCCESS);
      break;

      case /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$CMD_MEASURE_TEMPERATURE: 

        /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$busy = FALSE;
      /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$SensirionSht11$measureTemperatureDone(/*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$currentClient, FAIL, 0);
      break;

      case /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$CMD_MEASURE_HUMIDITY: 

        /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$busy = FALSE;
      /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$SensirionSht11$measureHumidityDone(/*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$currentClient, FAIL, 0);
      break;

      default: 

        break;
    }
}

# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static   error_t CC2420CsmaP$startDone_task$postTask(void){
#line 56
  unsigned char result;
#line 56

#line 56
  result = SchedulerBasicP$TaskBasic$postTask(CC2420CsmaP$startDone_task);
#line 56

#line 56
  return result;
#line 56
}
#line 56
# 101 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
inline static   error_t CC2420ControlP$SpiResource$release(void){
#line 101
  unsigned char result;
#line 101

#line 101
  result = CC2420SpiImplP$Resource$release(/*CC2420ControlC.Spi*/CC2420SpiC$0$CLIENT_ID);
#line 101

#line 101
  return result;
#line 101
}
#line 101
# 113 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420ControlP.nc"
static inline   error_t CC2420ControlP$Resource$release(void)
#line 113
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 114
    {
      CC2420ControlP$CSN$set();
      {
        unsigned char __nesc_temp = 
#line 116
        CC2420ControlP$SpiResource$release();

        {
#line 116
          __nesc_atomic_end(__nesc_atomic); 
#line 116
          return __nesc_temp;
        }
      }
    }
#line 119
    __nesc_atomic_end(__nesc_atomic); }
}

# 101 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
inline static   error_t CC2420CsmaP$Resource$release(void){
#line 101
  unsigned char result;
#line 101

#line 101
  result = CC2420ControlP$Resource$release();
#line 101

#line 101
  return result;
#line 101
}
#line 101
# 45 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420Strobe.nc"
inline static   cc2420_status_t CC2420ControlP$SRXON$strobe(void){
#line 45
  unsigned char result;
#line 45

#line 45
  result = CC2420SpiImplP$Strobe$strobe(CC2420_SRXON);
#line 45

#line 45
  return result;
#line 45
}
#line 45
# 202 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420ControlP.nc"
static inline   error_t CC2420ControlP$CC2420Power$rxOn(void)
#line 202
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 203
    {
      if (CC2420ControlP$m_state != CC2420ControlP$S_XOSC_STARTED) 
        {
          unsigned char __nesc_temp = 
#line 205
          FAIL;

          {
#line 205
            __nesc_atomic_end(__nesc_atomic); 
#line 205
            return __nesc_temp;
          }
        }
#line 206
      CC2420ControlP$SRXON$strobe();
    }
#line 207
    __nesc_atomic_end(__nesc_atomic); }
  return SUCCESS;
}

# 90 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420Power.nc"
inline static   error_t CC2420CsmaP$CC2420Power$rxOn(void){
#line 90
  unsigned char result;
#line 90

#line 90
  result = CC2420ControlP$CC2420Power$rxOn();
#line 90

#line 90
  return result;
#line 90
}
#line 90
# 42 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static __inline   void /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP$6$Irq$enable(void)
#line 42
{
#line 42
  * (volatile uint8_t *)(0x39 + 0x20) |= 1 << 6;
}

# 35 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
inline static   void /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC$1$Atm128Interrupt$enable(void){
#line 35
  /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP$6$Irq$enable();
#line 35
}
#line 35
# 47 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static __inline   void /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP$6$Irq$edge(bool low_to_high)
#line 47
{
  * (volatile uint8_t *)90U |= 1 << 5;

  if (low_to_high) {
    * (volatile uint8_t *)90U |= 1 << 4;
    }
  else {
#line 53
    * (volatile uint8_t *)90U &= ~(1 << 4);
    }
}

# 59 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
inline static   void /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC$1$Atm128Interrupt$edge(bool arg_0x7e728c60){
#line 59
  /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP$6$Irq$edge(arg_0x7e728c60);
#line 59
}
#line 59
# 41 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static __inline   void /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP$6$Irq$clear(void)
#line 41
{
#line 41
  * (volatile uint8_t *)(0x38 + 0x20) = 1 << 6;
}

# 45 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
inline static   void /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC$1$Atm128Interrupt$clear(void){
#line 45
  /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP$6$Irq$clear();
#line 45
}
#line 45
# 43 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static __inline   void /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP$6$Irq$disable(void)
#line 43
{
#line 43
  * (volatile uint8_t *)(0x39 + 0x20) &= ~(1 << 6);
}

# 40 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
inline static   void /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC$1$Atm128Interrupt$disable(void){
#line 40
  /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP$6$Irq$disable();
#line 40
}
#line 40
# 15 "/opt/tinyos-2.x/tos/chips/atm128/pins/Atm128GpioInterruptC.nc"
static inline error_t /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC$1$enable(bool rising)
#line 15
{
  /* atomic removed: atomic calls only */
#line 16
  {
    /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC$1$Atm128Interrupt$disable();
    /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC$1$Atm128Interrupt$clear();
    /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC$1$Atm128Interrupt$edge(rising);
    /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC$1$Atm128Interrupt$enable();
  }
  return SUCCESS;
}





static inline   error_t /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC$1$Interrupt$enableFallingEdge(void)
#line 29
{
  return /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC$1$enable(FALSE);
}

# 43 "/opt/tinyos-2.x/tos/interfaces/GpioInterrupt.nc"
inline static   error_t CC2420ReceiveP$InterruptFIFOP$enableFallingEdge(void){
#line 43
  unsigned char result;
#line 43

#line 43
  result = /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC$1$Interrupt$enableFallingEdge();
#line 43

#line 43
  return result;
#line 43
}
#line 43
# 106 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420ReceiveP.nc"
static inline   error_t CC2420ReceiveP$AsyncStdControl$start(void)
#line 106
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 107
    {
      CC2420ReceiveP$reset_state();
      CC2420ReceiveP$m_state = CC2420ReceiveP$S_STARTED;
      CC2420ReceiveP$InterruptFIFOP$enableFallingEdge();
    }
#line 111
    __nesc_atomic_end(__nesc_atomic); }
  return SUCCESS;
}

# 52 "/opt/tinyos-2.x/tos/chips/atm128/timer/Atm128GpioCaptureC.nc"
static inline   error_t /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC$0$Capture$captureRisingEdge(void)
#line 52
{
  return /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC$0$enableCapture(TRUE);
}

# 42 "/opt/tinyos-2.x/tos/interfaces/GpioCapture.nc"
inline static   error_t CC2420TransmitP$CaptureSFD$captureRisingEdge(void){
#line 42
  unsigned char result;
#line 42

#line 42
  result = /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC$0$Capture$captureRisingEdge();
#line 42

#line 42
  return result;
#line 42
}
#line 42
# 136 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420TransmitP.nc"
static inline   error_t CC2420TransmitP$AsyncStdControl$start(void)
#line 136
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 137
    {
      CC2420TransmitP$CaptureSFD$captureRisingEdge();
      CC2420TransmitP$m_state = CC2420TransmitP$S_STARTED;
      CC2420TransmitP$m_receiving = FALSE;
      CC2420TransmitP$m_tx_power = 0;
    }
#line 142
    __nesc_atomic_end(__nesc_atomic); }
  return SUCCESS;
}

# 73 "/opt/tinyos-2.x/tos/interfaces/AsyncStdControl.nc"
inline static   error_t CC2420CsmaP$SubControl$start(void){
#line 73
  unsigned char result;
#line 73

#line 73
  result = CC2420TransmitP$AsyncStdControl$start();
#line 73
  result = ecombine(result, CC2420ReceiveP$AsyncStdControl$start());
#line 73

#line 73
  return result;
#line 73
}
#line 73
# 115 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420CsmaP.nc"
static inline   void CC2420CsmaP$CC2420Power$startOscillatorDone(void)
#line 115
{
  CC2420CsmaP$SubControl$start();
  CC2420CsmaP$CC2420Power$rxOn();
  CC2420CsmaP$Resource$release();
  CC2420CsmaP$startDone_task$postTask();
}

# 76 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420Power.nc"
inline static   void CC2420ControlP$CC2420Power$startOscillatorDone(void){
#line 76
  CC2420CsmaP$CC2420Power$startOscillatorDone();
#line 76
}
#line 76
# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static   error_t HplCC2420InterruptsP$stopTask$postTask(void){
#line 56
  unsigned char result;
#line 56

#line 56
  result = SchedulerBasicP$TaskBasic$postTask(HplCC2420InterruptsP$stopTask);
#line 56

#line 56
  return result;
#line 56
}
#line 56
# 120 "/opt/tinyos-2.x/tos/platforms/homenet/chips/cc2420/HplCC2420InterruptsP.nc"
static inline   error_t HplCC2420InterruptsP$CCA$disable(void)
#line 120
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 121
    HplCC2420InterruptsP$ccaTimerDisabled = TRUE;
#line 121
    __nesc_atomic_end(__nesc_atomic); }
  HplCC2420InterruptsP$stopTask$postTask();
  return SUCCESS;
}

# 50 "/opt/tinyos-2.x/tos/interfaces/GpioInterrupt.nc"
inline static   error_t CC2420ControlP$InterruptCCA$disable(void){
#line 50
  unsigned char result;
#line 50

#line 50
  result = HplCC2420InterruptsP$CCA$disable();
#line 50

#line 50
  return result;
#line 50
}
#line 50
# 179 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420ControlP.nc"
static inline   void CC2420ControlP$InterruptCCA$fired(void)
#line 179
{
  nxle_uint16_t id[2];

#line 181
  CC2420ControlP$m_state = CC2420ControlP$S_XOSC_STARTED;
  __nesc_hton_leuint16((unsigned char *)&id[0], CC2420ControlP$m_pan);
  __nesc_hton_leuint16((unsigned char *)&id[1], CC2420ControlP$m_short_addr);
  CC2420ControlP$InterruptCCA$disable();
  CC2420ControlP$IOCFG1$write(0);
  CC2420ControlP$PANID$write(0, (uint8_t *)&id, 4);
  CC2420ControlP$CSN$set();
  CC2420ControlP$CSN$clr();
  CC2420ControlP$CC2420Power$startOscillatorDone();
}

# 57 "/opt/tinyos-2.x/tos/interfaces/GpioInterrupt.nc"
inline static   void HplCC2420InterruptsP$CCA$fired(void){
#line 57
  CC2420ControlP$InterruptCCA$fired();
#line 57
}
#line 57
# 129 "/opt/tinyos-2.x/tos/platforms/homenet/chips/cc2420/HplCC2420InterruptsP.nc"
static inline  void HplCC2420InterruptsP$CCATimer$fired(void)
#line 129
{
  uint8_t CCAState;

#line 131
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 131
    {
      if (HplCC2420InterruptsP$ccaTimerDisabled) {
          {
#line 133
            __nesc_atomic_end(__nesc_atomic); 
#line 133
            return;
          }
        }
    }
#line 136
    __nesc_atomic_end(__nesc_atomic); }
  CCAState = HplCC2420InterruptsP$CC_CCA$get();

  if (HplCC2420InterruptsP$ccaLastState != HplCC2420InterruptsP$ccaWaitForState && CCAState == HplCC2420InterruptsP$ccaWaitForState) {
      HplCC2420InterruptsP$CCA$fired();
    }

  HplCC2420InterruptsP$ccaLastState = CCAState;
  HplCC2420InterruptsP$CCATask$postTask();
  return;
}

# 55 "/opt/tinyos-2.x/tos/interfaces/Read.nc"
inline static  error_t MotionDetectorM$Pir$read(void){
#line 55
  unsigned char result;
#line 55

#line 55
  result = /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$Read$read(/*MotionDetectorC.PirSensorC.DemoChannel.AdcReadClientC*/AdcReadClientC$3$ID);
#line 55

#line 55
  return result;
#line 55
}
#line 55
# 127 "MotionDetectorM.nc"
static inline  void MotionDetectorM$PirTimer$fired(void)
#line 127
{
  MotionDetectorM$Pir$read();
}

# 192 "/opt/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
static inline   void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$default$fired(uint8_t num)
{
}

# 72 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static  void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$fired(uint8_t arg_0x7e8863a0){
#line 72
  switch (arg_0x7e8863a0) {
#line 72
    case 0U:
#line 72
      MotionDetectorM$Timer$fired();
#line 72
      break;
#line 72
    case 1U:
#line 72
      HplSensirionSht11P$Timer$fired();
#line 72
      break;
#line 72
    case 2U:
#line 72
      /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$Timer$fired();
#line 72
      break;
#line 72
    case 3U:
#line 72
      HplCC2420InterruptsP$CCATimer$fired();
#line 72
      break;
#line 72
    case 4U:
#line 72
      MotionDetectorM$PirTimer$fired();
#line 72
      break;
#line 72
    default:
#line 72
      /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$default$fired(arg_0x7e8863a0);
#line 72
      break;
#line 72
    }
#line 72
}
#line 72
# 138 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer1P.nc"
static inline   void HplAtm128Timer1P$Capture$stop(void)
#line 138
{
#line 138
  * (volatile uint8_t *)(0x37 + 0x20) &= ~(1 << 5);
}

# 61 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Capture.nc"
inline static   void /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC$0$Atm128Capture$stop(void){
#line 61
  HplAtm128Timer1P$Capture$stop();
#line 61
}
#line 61
# 122 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer1P.nc"
static inline   void HplAtm128Timer1P$Capture$setEdge(bool up)
#line 122
{
#line 122
  if (up) {
#line 122
    * (volatile uint8_t *)(0x2E + 0x20) |= 1 << 6;
    }
  else {
#line 122
    * (volatile uint8_t *)(0x2E + 0x20) &= ~(1 << 6);
    }
}

# 79 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Capture.nc"
inline static   void /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC$0$Atm128Capture$setEdge(bool arg_0x7e377710){
#line 79
  HplAtm128Timer1P$Capture$setEdge(arg_0x7e377710);
#line 79
}
#line 79
# 132 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer1P.nc"
static inline   void HplAtm128Timer1P$Capture$start(void)
#line 132
{
#line 132
  * (volatile uint8_t *)(0x37 + 0x20) |= 1 << 5;
}

# 58 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Capture.nc"
inline static   void /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC$0$Atm128Capture$start(void){
#line 58
  HplAtm128Timer1P$Capture$start();
#line 58
}
#line 58
# 131 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer0AsyncC.nc"
static inline   void HplAtm128Timer0AsyncC$Compare$start(void)
#line 131
{
#line 131
  * (volatile uint8_t *)(0x37 + 0x20) |= 1 << 1;
}

# 56 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static   void /*AlarmCounterMilliP.MilliAlarm*/Atm128AlarmC$0$HplAtm128Compare$start(void){
#line 56
  HplAtm128Timer0AsyncC$Compare$start();
#line 56
}
#line 56
# 130 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer0AsyncC.nc"
static inline   void HplAtm128Timer0AsyncC$Compare$reset(void)
#line 130
{
#line 130
  * (volatile uint8_t *)(0x36 + 0x20) = 1 << 1;
}

# 53 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static   void /*AlarmCounterMilliP.MilliAlarm*/Atm128AlarmC$0$HplAtm128Compare$reset(void){
#line 53
  HplAtm128Timer0AsyncC$Compare$reset();
#line 53
}
#line 53
# 144 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer0AsyncC.nc"
static inline   void HplAtm128Timer0AsyncC$Compare$set(uint8_t t)
#line 144
{
  /* atomic removed: atomic calls only */
  {
    while (* (volatile uint8_t *)(0x30 + 0x20) & (1 << 1)) 
      ;
    * (volatile uint8_t *)(0x31 + 0x20) = t;
  }
}

# 45 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static   void /*AlarmCounterMilliP.MilliAlarm*/Atm128AlarmC$0$HplAtm128Compare$set(/*AlarmCounterMilliP.MilliAlarm*/Atm128AlarmC$0$HplAtm128Compare$size_type arg_0x7e9e2a20){
#line 45
  HplAtm128Timer0AsyncC$Compare$set(arg_0x7e9e2a20);
#line 45
}
#line 45
# 52 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static   /*AlarmCounterMilliP.MilliAlarm*/Atm128AlarmC$0$HplAtm128Timer$timer_size /*AlarmCounterMilliP.MilliAlarm*/Atm128AlarmC$0$HplAtm128Timer$get(void){
#line 52
  unsigned char result;
#line 52

#line 52
  result = HplAtm128Timer0AsyncC$Timer$get();
#line 52

#line 52
  return result;
#line 52
}
#line 52
# 74 "/opt/tinyos-2.x/tos/chips/atm128/timer/Atm128AlarmC.nc"
static inline   void /*AlarmCounterMilliP.MilliAlarm*/Atm128AlarmC$0$Alarm$startAt(/*AlarmCounterMilliP.MilliAlarm*/Atm128AlarmC$0$timer_size t0, /*AlarmCounterMilliP.MilliAlarm*/Atm128AlarmC$0$timer_size dt)
#line 74
{
  /* atomic removed: atomic calls only */






  {
    /*AlarmCounterMilliP.MilliAlarm*/Atm128AlarmC$0$timer_size now;
#line 83
    /*AlarmCounterMilliP.MilliAlarm*/Atm128AlarmC$0$timer_size elapsed;
#line 83
    /*AlarmCounterMilliP.MilliAlarm*/Atm128AlarmC$0$timer_size expires;

    ;


    now = /*AlarmCounterMilliP.MilliAlarm*/Atm128AlarmC$0$HplAtm128Timer$get();
    elapsed = now + 2 - t0;
    if (elapsed >= dt) {
      expires = now + 2;
      }
    else {
#line 93
      expires = t0 + dt;
      }



    if (expires == 0) {
      expires = 1;
      }



    /*AlarmCounterMilliP.MilliAlarm*/Atm128AlarmC$0$HplAtm128Compare$set(expires - 1);
    /*AlarmCounterMilliP.MilliAlarm*/Atm128AlarmC$0$HplAtm128Compare$reset();
    /*AlarmCounterMilliP.MilliAlarm*/Atm128AlarmC$0$HplAtm128Compare$start();
  }
}

# 92 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static   void /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$AlarmFrom$startAt(/*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$AlarmFrom$size_type arg_0x7ea22350, /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$AlarmFrom$size_type arg_0x7ea224e0){
#line 92
  /*AlarmCounterMilliP.MilliAlarm*/Atm128AlarmC$0$Alarm$startAt(arg_0x7ea22350, arg_0x7ea224e0);
#line 92
}
#line 92
# 127 "/opt/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
static inline  void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$fired(void)
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$fireTimers(/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$getNow());
}

# 72 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static  void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$fired(void){
#line 72
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$fired();
#line 72
}
#line 72
# 163 "/opt/tinyos-2.x/tos/lib/timer/TransformAlarmCounterC.nc"
static inline   /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$to_size_type /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$Alarm$getAlarm(void)
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 165
    {
      /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$to_size_type __nesc_temp = 
#line 165
      /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$m_t0 + /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$m_dt;

      {
#line 165
        __nesc_atomic_end(__nesc_atomic); 
#line 165
        return __nesc_temp;
      }
    }
#line 167
    __nesc_atomic_end(__nesc_atomic); }
}

# 105 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static   /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$size_type /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$getAlarm(void){
#line 105
  unsigned long result;
#line 105

#line 105
  result = /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$Alarm$getAlarm();
#line 105

#line 105
  return result;
#line 105
}
#line 105
# 63 "/opt/tinyos-2.x/tos/lib/timer/AlarmToTimerC.nc"
static inline  void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$fired$runTask(void)
{
  if (/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$m_oneshot == FALSE) {
    /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$start(/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$getAlarm(), /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$m_dt, FALSE);
    }
#line 67
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$fired();
}

# 89 "MotionDetectorM.nc"
static inline  void MotionDetectorM$SendSensorData$runTask(void)
#line 89
{
  sens_data_t sensorData;

#line 91
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 91
    {
      sensorData.uh.id = TOS_NODE_ID;
      sensorData.uh.cmd = COMM_GET;
      sensorData.uh.sub = COMM_GET_ALL;
      sensorData.uh.length = 10;
      sensorData.photo = MotionDetectorM$myPhoto;
      sensorData.temp = MotionDetectorM$Raw_Temp;
      sensorData.humi = MotionDetectorM$Raw_Humi;
      sensorData.infrared = MotionDetectorM$myUltrared;
      sensorData.battery = MotionDetectorM$myBattery;
    }
#line 101
    __nesc_atomic_end(__nesc_atomic); }
  memcpy(MotionDetectorM$AMSend$getPayload(&MotionDetectorM$SensorData), &sensorData, sizeof sensorData);
  MotionDetectorM$AMSend$send(AM_BROADCAST_ADDR, &MotionDetectorM$SensorData, sizeof sensorData);
}

# 83 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer0AsyncC.nc"
static inline   void HplAtm128Timer0AsyncC$TimerCtrl$setControl(Atm128TimerControl_t x)
#line 83
{
  while (* (volatile uint8_t *)(0x30 + 0x20) & (1 << 0)) 
    ;
  * (volatile uint8_t *)(0x33 + 0x20) = x.flat;
}

#line 78
static inline   Atm128TimerControl_t HplAtm128Timer0AsyncC$TimerCtrl$getControl(void)
#line 78
{
  return * (Atm128TimerControl_t *)& * (volatile uint8_t *)(0x33 + 0x20);
}

#line 71
static inline   void HplAtm128Timer0AsyncC$Timer$setScale(uint8_t s)
#line 71
{
  Atm128TimerControl_t x = HplAtm128Timer0AsyncC$TimerCtrl$getControl();

#line 73
  x.bits.cs = s;
  HplAtm128Timer0AsyncC$TimerCtrl$setControl(x);
}

# 95 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static   void /*AlarmCounterMilliP.MilliInit*/Atm128TimerInitC$0$Timer$setScale(uint8_t arg_0x7e9f5da8){
#line 95
  HplAtm128Timer0AsyncC$Timer$setScale(arg_0x7e9f5da8);
#line 95
}
#line 95
# 117 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer0AsyncC.nc"
static inline   void HplAtm128Timer0AsyncC$Timer$start(void)
#line 117
{
#line 117
  * (volatile uint8_t *)(0x37 + 0x20) |= 1 << 0;
}

# 69 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static   void /*AlarmCounterMilliP.MilliInit*/Atm128TimerInitC$0$Timer$start(void){
#line 69
  HplAtm128Timer0AsyncC$Timer$start();
#line 69
}
#line 69
# 58 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer0AsyncC.nc"
static inline   void HplAtm128Timer0AsyncC$Timer$set(uint8_t t)
#line 58
{
  while (* (volatile uint8_t *)(0x30 + 0x20) & (1 << 2)) 
    ;
  * (volatile uint8_t *)(0x32 + 0x20) = t;
}

# 58 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static   void /*AlarmCounterMilliP.MilliInit*/Atm128TimerInitC$0$Timer$set(/*AlarmCounterMilliP.MilliInit*/Atm128TimerInitC$0$Timer$timer_size arg_0x7ea00100){
#line 58
  HplAtm128Timer0AsyncC$Timer$set(arg_0x7ea00100);
#line 58
}
#line 58
# 42 "/opt/tinyos-2.x/tos/chips/atm128/timer/Atm128TimerInitC.nc"
static inline  error_t /*AlarmCounterMilliP.MilliInit*/Atm128TimerInitC$0$Init$init(void)
#line 42
{
  /* atomic removed: atomic calls only */
#line 43
  {
    /*AlarmCounterMilliP.MilliInit*/Atm128TimerInitC$0$Timer$set(0);
    /*AlarmCounterMilliP.MilliInit*/Atm128TimerInitC$0$Timer$start();
    /*AlarmCounterMilliP.MilliInit*/Atm128TimerInitC$0$Timer$setScale(3);
  }
  return SUCCESS;
}

# 45 "/opt/tinyos-2.x/tos/system/FcfsResourceQueueC.nc"
static inline  error_t /*HplSensirionSht11C.Arbiter.Queue*/FcfsResourceQueueC$0$Init$init(void)
#line 45
{
  memset(/*HplSensirionSht11C.Arbiter.Queue*/FcfsResourceQueueC$0$resQ, /*HplSensirionSht11C.Arbiter.Queue*/FcfsResourceQueueC$0$NO_ENTRY, sizeof /*HplSensirionSht11C.Arbiter.Queue*/FcfsResourceQueueC$0$resQ);
  return SUCCESS;
}

# 48 "/opt/tinyos-2.x/tos/system/RoundRobinResourceQueueC.nc"
static inline  error_t /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC$0$Init$init(void)
#line 48
{
  memset(/*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC$0$resQ, 0, sizeof /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC$0$resQ);
  return SUCCESS;
}

# 95 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420ReceiveP.nc"
static inline  error_t CC2420ReceiveP$Init$init(void)
#line 95
{
  CC2420ReceiveP$m_p_rx_buf = &CC2420ReceiveP$m_rx_buf;
  return SUCCESS;
}

# 50 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline   void /*HplAtm128GeneralIOC.PortD.Bit4*/HplAtm128GeneralIOPinP$28$IO$makeInput(void)
#line 50
{
#line 50
  * (volatile uint8_t *)49U &= ~(1 << 4);
}

# 33 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   void CC2420TransmitP$SFD$makeInput(void){
#line 33
  /*HplAtm128GeneralIOC.PortD.Bit4*/HplAtm128GeneralIOPinP$28$IO$makeInput();
#line 33
}
#line 33


inline static   void CC2420TransmitP$CSN$makeOutput(void){
#line 35
  /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP$8$IO$makeOutput();
#line 35
}
#line 35
# 50 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline   void /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP$30$IO$makeInput(void)
#line 50
{
#line 50
  * (volatile uint8_t *)49U &= ~(1 << 6);
}

# 33 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   void CC2420TransmitP$CCA$makeInput(void){
#line 33
  /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP$30$IO$makeInput();
#line 33
}
#line 33
# 129 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420TransmitP.nc"
static inline  error_t CC2420TransmitP$Init$init(void)
#line 129
{
  CC2420TransmitP$CCA$makeInput();
  CC2420TransmitP$CSN$makeOutput();
  CC2420TransmitP$SFD$makeInput();
  return SUCCESS;
}

# 22 "/opt/tinyos-2.x/tos/system/NoInitC.nc"
static inline  error_t NoInitC$Init$init(void)
#line 22
{
  return SUCCESS;
}

# 57 "/opt/tinyos-2.x/tos/interfaces/AMPacket.nc"
inline static  am_addr_t CC2420ControlP$AMPacket$address(void){
#line 57
  unsigned int result;
#line 57

#line 57
  result = CC2420ActiveMessageP$AMPacket$address();
#line 57

#line 57
  return result;
#line 57
}
#line 57
# 52 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline   void /*HplAtm128GeneralIOC.PortA.Bit5*/HplAtm128GeneralIOPinP$5$IO$makeOutput(void)
#line 52
{
#line 52
  * (volatile uint8_t *)58U |= 1 << 5;
}

# 35 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   void CC2420ControlP$VREN$makeOutput(void){
#line 35
  /*HplAtm128GeneralIOC.PortA.Bit5*/HplAtm128GeneralIOPinP$5$IO$makeOutput();
#line 35
}
#line 35
# 52 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline   void /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP$6$IO$makeOutput(void)
#line 52
{
#line 52
  * (volatile uint8_t *)58U |= 1 << 6;
}

# 35 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   void CC2420ControlP$RSTN$makeOutput(void){
#line 35
  /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP$6$IO$makeOutput();
#line 35
}
#line 35
inline static   void CC2420ControlP$CSN$makeOutput(void){
#line 35
  /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP$8$IO$makeOutput();
#line 35
}
#line 35
# 90 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420ControlP.nc"
static inline  error_t CC2420ControlP$Init$init(void)
#line 90
{
  CC2420ControlP$CSN$makeOutput();
  CC2420ControlP$RSTN$makeOutput();
  CC2420ControlP$VREN$makeOutput();
  CC2420ControlP$m_short_addr = CC2420ControlP$AMPacket$address();
  return SUCCESS;
}

# 82 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420CsmaP.nc"
static inline  error_t CC2420CsmaP$Init$init(void)
#line 82
{

  if (CC2420CsmaP$m_state != CC2420CsmaP$S_PREINIT) {
    return FAIL;
    }
  CC2420CsmaP$m_state = CC2420CsmaP$S_STOPPED;

  return SUCCESS;
}

# 45 "/opt/tinyos-2.x/tos/system/FcfsResourceQueueC.nc"
static inline  error_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$1$Init$init(void)
#line 45
{
  memset(/*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$1$resQ, /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$1$NO_ENTRY, sizeof /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$1$resQ);
  return SUCCESS;
}

# 44 "/opt/tinyos-2.x/tos/system/RandomMlcgP.nc"
static inline  error_t RandomMlcgP$Init$init(void)
#line 44
{
  /* atomic removed: atomic calls only */
#line 45
  RandomMlcgP$seed = (uint32_t )(TOS_NODE_ID + 1);

  return SUCCESS;
}

# 51 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
inline static  error_t RealMainP$SoftwareInit$init(void){
#line 51
  unsigned char result;
#line 51

#line 51
  result = RandomMlcgP$Init$init();
#line 51
  result = ecombine(result, /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$1$Init$init());
#line 51
  result = ecombine(result, CC2420CsmaP$Init$init());
#line 51
  result = ecombine(result, CC2420ControlP$Init$init());
#line 51
  result = ecombine(result, NoInitC$Init$init());
#line 51
  result = ecombine(result, CC2420TransmitP$Init$init());
#line 51
  result = ecombine(result, CC2420ReceiveP$Init$init());
#line 51
  result = ecombine(result, /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC$0$Init$init());
#line 51
  result = ecombine(result, /*HplSensirionSht11C.Arbiter.Queue*/FcfsResourceQueueC$0$Init$init());
#line 51
  result = ecombine(result, /*AlarmCounterMilliP.MilliInit*/Atm128TimerInitC$0$Init$init());
#line 51

#line 51
  return result;
#line 51
}
#line 51
# 53 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
inline static   /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$Counter$size_type /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$Counter$get(void){
#line 53
  unsigned long result;
#line 53

#line 53
  result = /*Counter32khz32C.Transform32*/TransformCounterC$0$Counter$get();
#line 53

#line 53
  return result;
#line 53
}
#line 53
# 75 "/opt/tinyos-2.x/tos/lib/timer/TransformAlarmC.nc"
static inline   /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$to_size_type /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$Alarm$getNow(void)
{
  return /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$Counter$get();
}

#line 146
static inline   void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$Alarm$start(/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$to_size_type dt)
{
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$Alarm$startAt(/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$Alarm$getNow(), dt);
}

# 55 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static   void CC2420ControlP$StartupTimer$start(CC2420ControlP$StartupTimer$size_type arg_0x7ea23220){
#line 55
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$Alarm$start(arg_0x7ea23220);
#line 55
}
#line 55
# 46 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline   void /*HplAtm128GeneralIOC.PortA.Bit5*/HplAtm128GeneralIOPinP$5$IO$set(void)
#line 46
{
#line 46
  * (volatile uint8_t *)59U |= 1 << 5;
}

# 29 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   void CC2420ControlP$VREN$set(void){
#line 29
  /*HplAtm128GeneralIOC.PortA.Bit5*/HplAtm128GeneralIOPinP$5$IO$set();
#line 29
}
#line 29
# 125 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420ControlP.nc"
static inline   error_t CC2420ControlP$CC2420Power$startVReg(void)
#line 125
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 126
    {
      if (CC2420ControlP$m_state != CC2420ControlP$S_VREG_STOPPED) 
        {
          unsigned char __nesc_temp = 
#line 128
          FAIL;

          {
#line 128
            __nesc_atomic_end(__nesc_atomic); 
#line 128
            return __nesc_temp;
          }
        }
#line 129
      CC2420ControlP$m_state = CC2420ControlP$S_VREG_STARTING;
    }
#line 130
    __nesc_atomic_end(__nesc_atomic); }
  CC2420ControlP$VREN$set();
  CC2420ControlP$StartupTimer$start(CC2420_TIME_VREN);
  return SUCCESS;
}

# 51 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420Power.nc"
inline static   error_t CC2420CsmaP$CC2420Power$startVReg(void){
#line 51
  unsigned char result;
#line 51

#line 51
  result = CC2420ControlP$CC2420Power$startVReg();
#line 51

#line 51
  return result;
#line 51
}
#line 51
# 93 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420CsmaP.nc"
static inline  error_t CC2420CsmaP$SplitControl$start(void)
#line 93
{

  if (CC2420CsmaP$m_state != CC2420CsmaP$S_STOPPED) {
    return FAIL;
    }
  CC2420CsmaP$m_state = CC2420CsmaP$S_STARTING;

  CC2420CsmaP$m_dsn = CC2420CsmaP$Random$rand16();
  CC2420CsmaP$CC2420Power$startVReg();

  return SUCCESS;
}

# 79 "/opt/tinyos-2.x/tos/interfaces/SplitControl.nc"
inline static  error_t MotionDetectorM$CommControl$start(void){
#line 79
  unsigned char result;
#line 79

#line 79
  result = CC2420CsmaP$SplitControl$start();
#line 79

#line 79
  return result;
#line 79
}
#line 79
# 142 "/opt/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
static inline  void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startPeriodic(uint8_t num, uint32_t dt)
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$startTimer(num, /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$getNow(), dt, FALSE);
}

# 53 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static  void MotionDetectorM$Timer$startPeriodic(uint32_t arg_0x7ee626d8){
#line 53
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startPeriodic(0U, arg_0x7ee626d8);
#line 53
}
#line 53
# 46 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline   void /*HplAtm128GeneralIOC.PortC.Bit3*/HplAtm128GeneralIOPinP$19$IO$set(void)
#line 46
{
#line 46
  * (volatile uint8_t *)53U |= 1 << 3;
}

# 29 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   void MotionDetectorM$PirPw$set(void){
#line 29
  /*HplAtm128GeneralIOC.PortC.Bit3*/HplAtm128GeneralIOPinP$19$IO$set();
#line 29
}
#line 29
# 34 "MotionDetectorM.nc"
static inline  void MotionDetectorM$Boot$booted(void)
#line 34
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 35
    {
      MotionDetectorM$myTemp = 0xFFFF;
      MotionDetectorM$myHumi = 0xFFFF;
      MotionDetectorM$myPhoto = 0xFFFF;
      MotionDetectorM$myUltrared = 0xFFFF;
      MotionDetectorM$Raw_Temp = 0xFFFF;
      MotionDetectorM$Raw_Humi = 0xFFFF;
      MotionDetectorM$myBattery = 0xFFFF;
    }
#line 43
    __nesc_atomic_end(__nesc_atomic); }
  MotionDetectorM$PirPw$set();
  MotionDetectorM$PirTimer$startOneShot(50);
  MotionDetectorM$Timer$startPeriodic(1000);
  MotionDetectorM$CommControl$start();
}

# 49 "/opt/tinyos-2.x/tos/interfaces/Boot.nc"
inline static  void RealMainP$Boot$booted(void){
#line 49
  MotionDetectorM$Boot$booted();
#line 49
}
#line 49
# 126 "/opt/tinyos-2.x/tos/chips/atm128/McuSleepC.nc"
static inline    mcu_power_t McuSleepC$McuPowerOverride$default$lowestState(void)
#line 126
{
  return ATM128_POWER_DOWN;
}

# 54 "/opt/tinyos-2.x/tos/interfaces/McuPowerOverride.nc"
inline static   mcu_power_t McuSleepC$McuPowerOverride$lowestState(void){
#line 54
  unsigned char result;
#line 54

#line 54
  result = McuSleepC$McuPowerOverride$default$lowestState();
#line 54

#line 54
  return result;
#line 54
}
#line 54
# 66 "/opt/tinyos-2.x/tos/chips/atm128/McuSleepC.nc"
static inline mcu_power_t McuSleepC$getPowerState(void)
#line 66
{
  uint8_t diff;





  if (* (volatile uint8_t *)(0x37 + 0x20) & ~((((1 << 1) | (1 << 0)) | (1 << 2)) | (1 << 6)) || 
  * (volatile uint8_t *)0x7D & ~(1 << 2)) {
      return ATM128_POWER_IDLE;
    }
  else {
    if (* (volatile uint8_t *)(uint16_t )& * (volatile uint8_t *)(0x0D + 0x20) & (1 << 7)) {
        return ATM128_POWER_IDLE;
      }
    else {
      if (* (volatile uint8_t *)(0x0A + 0x20) & ((1 << 6) | (1 << 7))) {
          return ATM128_POWER_IDLE;
        }
      else {
#line 85
        if (* (volatile uint8_t *)0x9A & ((1 << 6) | (1 << 7))) {
            return ATM128_POWER_IDLE;
          }
        else {
          if (* (volatile uint8_t *)(uint16_t )& * (volatile uint8_t *)(0x06 + 0x20) & (1 << 7)) {
              return ATM128_POWER_ADC_NR;
            }
          else {
            if (* (volatile uint8_t *)(0x37 + 0x20) & ((1 << 1) | (1 << 0))) {




                while (* (volatile uint8_t *)(0x30 + 0x20) & (((1 << 2) | (1 << 1)) | (1 << 0))) 
                  ;
                diff = * (volatile uint8_t *)(0x31 + 0x20) - * (volatile uint8_t *)(0x32 + 0x20);
                if (diff < EXT_STANDBY_T0_THRESHOLD || 
                * (volatile uint8_t *)(0x32 + 0x20) > 256 - EXT_STANDBY_T0_THRESHOLD) {
                  return ATM128_POWER_EXT_STANDBY;
                  }
#line 104
                return ATM128_POWER_SAVE;
              }
            else {
                return ATM128_POWER_DOWN;
              }
            }
          }
        }
      }
    }
}

# 128 "/opt/tinyos-2.x/tos/chips/atm128/atm128hardware.h"
static inline mcu_power_t mcombine(mcu_power_t m1, mcu_power_t m2)
#line 128
{
  return m1 < m2 ? m1 : m2;
}

# 111 "/opt/tinyos-2.x/tos/chips/atm128/McuSleepC.nc"
static inline   void McuSleepC$McuSleep$sleep(void)
#line 111
{
  uint8_t powerState;

  powerState = mcombine(McuSleepC$getPowerState(), McuSleepC$McuPowerOverride$lowestState());
  * (volatile uint8_t *)(0x35 + 0x20) = ((
  * (volatile uint8_t *)(0x35 + 0x20) & 0xe3) | (1 << 5)) | ({
#line 116
    uint16_t __addr16 = (uint16_t )(uint16_t )&McuSleepC$atm128PowerBits[powerState];
#line 116
    uint8_t __result;

#line 116
     __asm ("lpm %0, Z""\n\t" : "=r"(__result) : "z"(__addr16));__result;
  }
  );
#line 118
   __asm volatile ("sei");
   __asm volatile ("sleep");
   __asm volatile ("cli");}

# 59 "/opt/tinyos-2.x/tos/interfaces/McuSleep.nc"
inline static   void SchedulerBasicP$McuSleep$sleep(void){
#line 59
  McuSleepC$McuSleep$sleep();
#line 59
}
#line 59
# 67 "/opt/tinyos-2.x/tos/system/SchedulerBasicP.nc"
static __inline uint8_t SchedulerBasicP$popTask(void)
{
  if (SchedulerBasicP$m_head != SchedulerBasicP$NO_TASK) 
    {
      uint8_t id = SchedulerBasicP$m_head;

#line 72
      SchedulerBasicP$m_head = SchedulerBasicP$m_next[SchedulerBasicP$m_head];
      if (SchedulerBasicP$m_head == SchedulerBasicP$NO_TASK) 
        {
          SchedulerBasicP$m_tail = SchedulerBasicP$NO_TASK;
        }
      SchedulerBasicP$m_next[id] = SchedulerBasicP$NO_TASK;
      return id;
    }
  else 
    {
      return SchedulerBasicP$NO_TASK;
    }
}

#line 138
static inline  void SchedulerBasicP$Scheduler$taskLoop(void)
{
  for (; ; ) 
    {
      uint8_t nextTask;

      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
        {
          while ((nextTask = SchedulerBasicP$popTask()) == SchedulerBasicP$NO_TASK) 
            {
              SchedulerBasicP$McuSleep$sleep();
            }
        }
#line 150
        __nesc_atomic_end(__nesc_atomic); }
      SchedulerBasicP$TaskBasic$runTask(nextTask);
    }
}

# 61 "/opt/tinyos-2.x/tos/interfaces/Scheduler.nc"
inline static  void RealMainP$Scheduler$taskLoop(void){
#line 61
  SchedulerBasicP$Scheduler$taskLoop();
#line 61
}
#line 61
# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static   error_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$fired$postTask(void){
#line 56
  unsigned char result;
#line 56

#line 56
  result = SchedulerBasicP$TaskBasic$postTask(/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$fired);
#line 56

#line 56
  return result;
#line 56
}
#line 56
# 70 "/opt/tinyos-2.x/tos/lib/timer/AlarmToTimerC.nc"
static inline   void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$fired(void)
{
#line 71
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$fired$postTask();
}

# 67 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static   void /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$Alarm$fired(void){
#line 67
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$fired();
#line 67
}
#line 67
# 236 "/opt/tinyos-2.x/tos/lib/timer/TransformAlarmCounterC.nc"
static inline   void /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$AlarmFrom$fired(void)
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      if (/*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$m_dt == 0) 
        {
          /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$Alarm$fired();
        }
      else 
        {
          /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$set_alarm();
        }
    }
#line 248
    __nesc_atomic_end(__nesc_atomic); }
}

# 67 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static   void /*AlarmCounterMilliP.MilliAlarm*/Atm128AlarmC$0$Alarm$fired(void){
#line 67
  /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$AlarmFrom$fired();
#line 67
}
#line 67
# 78 "/opt/tinyos-2.x/tos/chips/atm128/atm128hardware.h"
static __inline void __nesc_enable_interrupt(void)
#line 78
{
   __asm volatile ("sei");}

# 110 "/opt/tinyos-2.x/tos/chips/atm128/timer/Atm128AlarmC.nc"
static inline   void /*AlarmCounterMilliP.MilliAlarm*/Atm128AlarmC$0$HplAtm128Compare$fired(void)
#line 110
{
  /*AlarmCounterMilliP.MilliAlarm*/Atm128AlarmC$0$HplAtm128Compare$stop();
  ;
  __nesc_enable_interrupt();
  /*AlarmCounterMilliP.MilliAlarm*/Atm128AlarmC$0$Alarm$fired();
}

# 49 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static   void HplAtm128Timer0AsyncC$Compare$fired(void){
#line 49
  /*AlarmCounterMilliP.MilliAlarm*/Atm128AlarmC$0$HplAtm128Compare$fired();
#line 49
}
#line 49
# 47 "/opt/tinyos-2.x/tos/lib/timer/CounterToLocalTimeC.nc"
static inline   void /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC$0$Counter$overflow(void)
{
}

# 71 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
inline static   void /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$Counter$overflow(void){
#line 71
  /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC$0$Counter$overflow();
#line 71
}
#line 71
# 145 "/opt/tinyos-2.x/tos/lib/timer/TransformAlarmCounterC.nc"
static inline   void /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$CounterFrom$overflow(void)
{
  /* atomic removed: atomic calls only */
  {
    /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$m_upper++;
    if ((/*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$m_upper & /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$OVERFLOW_MASK) == 0) {
      /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$Counter$overflow();
      }
    if (/*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$m_skip_overflows && ! --/*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$m_skip_overflows) {
      /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$set_alarm();
      }
  }
}

# 71 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
inline static   void /*AlarmCounterMilliP.MilliCounter*/Atm128CounterC$0$Counter$overflow(void){
#line 71
  /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$CounterFrom$overflow();
#line 71
}
#line 71
# 56 "/opt/tinyos-2.x/tos/chips/atm128/timer/Atm128CounterC.nc"
static inline   void /*AlarmCounterMilliP.MilliCounter*/Atm128CounterC$0$Timer$overflow(void)
{
  /*AlarmCounterMilliP.MilliCounter*/Atm128CounterC$0$Counter$overflow();
}

# 117 "/opt/tinyos-2.x/tos/chips/atm128/timer/Atm128AlarmC.nc"
static inline   void /*AlarmCounterMilliP.MilliAlarm*/Atm128AlarmC$0$HplAtm128Timer$overflow(void)
#line 117
{
}

# 51 "/opt/tinyos-2.x/tos/chips/atm128/timer/Atm128TimerInitC.nc"
static inline   void /*AlarmCounterMilliP.MilliInit*/Atm128TimerInitC$0$Timer$overflow(void)
#line 51
{
}

# 61 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static   void HplAtm128Timer0AsyncC$Timer$overflow(void){
#line 61
  /*AlarmCounterMilliP.MilliInit*/Atm128TimerInitC$0$Timer$overflow();
#line 61
  /*AlarmCounterMilliP.MilliAlarm*/Atm128AlarmC$0$HplAtm128Timer$overflow();
#line 61
  /*AlarmCounterMilliP.MilliCounter*/Atm128CounterC$0$Timer$overflow();
#line 61
}
#line 61
# 63 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline    void /*HplAtm128InterruptC.IntPin0*/HplAtm128InterruptPinP$0$Irq$default$fired(void)
#line 63
{
}

# 64 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
inline static   void /*HplAtm128InterruptC.IntPin0*/HplAtm128InterruptPinP$0$Irq$fired(void){
#line 64
  /*HplAtm128InterruptC.IntPin0*/HplAtm128InterruptPinP$0$Irq$default$fired();
#line 64
}
#line 64
# 61 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline   void /*HplAtm128InterruptC.IntPin0*/HplAtm128InterruptPinP$0$IrqSignal$fired(void)
#line 61
{
#line 61
  /*HplAtm128InterruptC.IntPin0*/HplAtm128InterruptPinP$0$Irq$fired();
}

# 41 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptSig.nc"
inline static   void HplAtm128InterruptSigP$IntSig0$fired(void){
#line 41
  /*HplAtm128InterruptC.IntPin0*/HplAtm128InterruptPinP$0$IrqSignal$fired();
#line 41
}
#line 41
# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static   error_t /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$readSensor$postTask(void){
#line 56
  unsigned char result;
#line 56

#line 56
  result = SchedulerBasicP$TaskBasic$postTask(/*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$readSensor);
#line 56

#line 56
  return result;
#line 56
}
#line 56
# 315 "/opt/tinyos-2.x/tos/sensorboards/homenet_sensor/sht11/SensirionSht11LogicP.nc"
static inline   void /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$InterruptDATA$fired(void)
#line 315
{
  /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$InterruptDATA$disable();
  /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$readSensor$postTask();
}

# 57 "/opt/tinyos-2.x/tos/interfaces/GpioInterrupt.nc"
inline static   void /*HplSensirionSht11C.InterruptDATAC*/Atm128GpioInterruptC$0$Interrupt$fired(void){
#line 57
  /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$InterruptDATA$fired();
#line 57
}
#line 57
# 38 "/opt/tinyos-2.x/tos/chips/atm128/pins/Atm128GpioInterruptC.nc"
static inline   void /*HplSensirionSht11C.InterruptDATAC*/Atm128GpioInterruptC$0$Atm128Interrupt$fired(void)
#line 38
{
  /*HplSensirionSht11C.InterruptDATAC*/Atm128GpioInterruptC$0$Interrupt$fired();
}

# 64 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
inline static   void /*HplAtm128InterruptC.IntPin1*/HplAtm128InterruptPinP$1$Irq$fired(void){
#line 64
  /*HplSensirionSht11C.InterruptDATAC*/Atm128GpioInterruptC$0$Atm128Interrupt$fired();
#line 64
}
#line 64
# 61 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline   void /*HplAtm128InterruptC.IntPin1*/HplAtm128InterruptPinP$1$IrqSignal$fired(void)
#line 61
{
#line 61
  /*HplAtm128InterruptC.IntPin1*/HplAtm128InterruptPinP$1$Irq$fired();
}

# 41 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptSig.nc"
inline static   void HplAtm128InterruptSigP$IntSig1$fired(void){
#line 41
  /*HplAtm128InterruptC.IntPin1*/HplAtm128InterruptPinP$1$IrqSignal$fired();
#line 41
}
#line 41
# 63 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline    void /*HplAtm128InterruptC.IntPin2*/HplAtm128InterruptPinP$2$Irq$default$fired(void)
#line 63
{
}

# 64 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
inline static   void /*HplAtm128InterruptC.IntPin2*/HplAtm128InterruptPinP$2$Irq$fired(void){
#line 64
  /*HplAtm128InterruptC.IntPin2*/HplAtm128InterruptPinP$2$Irq$default$fired();
#line 64
}
#line 64
# 61 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline   void /*HplAtm128InterruptC.IntPin2*/HplAtm128InterruptPinP$2$IrqSignal$fired(void)
#line 61
{
#line 61
  /*HplAtm128InterruptC.IntPin2*/HplAtm128InterruptPinP$2$Irq$fired();
}

# 41 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptSig.nc"
inline static   void HplAtm128InterruptSigP$IntSig2$fired(void){
#line 41
  /*HplAtm128InterruptC.IntPin2*/HplAtm128InterruptPinP$2$IrqSignal$fired();
#line 41
}
#line 41
# 63 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline    void /*HplAtm128InterruptC.IntPin3*/HplAtm128InterruptPinP$3$Irq$default$fired(void)
#line 63
{
}

# 64 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
inline static   void /*HplAtm128InterruptC.IntPin3*/HplAtm128InterruptPinP$3$Irq$fired(void){
#line 64
  /*HplAtm128InterruptC.IntPin3*/HplAtm128InterruptPinP$3$Irq$default$fired();
#line 64
}
#line 64
# 61 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline   void /*HplAtm128InterruptC.IntPin3*/HplAtm128InterruptPinP$3$IrqSignal$fired(void)
#line 61
{
#line 61
  /*HplAtm128InterruptC.IntPin3*/HplAtm128InterruptPinP$3$Irq$fired();
}

# 41 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptSig.nc"
inline static   void HplAtm128InterruptSigP$IntSig3$fired(void){
#line 41
  /*HplAtm128InterruptC.IntPin3*/HplAtm128InterruptPinP$3$IrqSignal$fired();
#line 41
}
#line 41
# 63 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline    void /*HplAtm128InterruptC.IntPin4*/HplAtm128InterruptPinP$4$Irq$default$fired(void)
#line 63
{
}

# 64 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
inline static   void /*HplAtm128InterruptC.IntPin4*/HplAtm128InterruptPinP$4$Irq$fired(void){
#line 64
  /*HplAtm128InterruptC.IntPin4*/HplAtm128InterruptPinP$4$Irq$default$fired();
#line 64
}
#line 64
# 61 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline   void /*HplAtm128InterruptC.IntPin4*/HplAtm128InterruptPinP$4$IrqSignal$fired(void)
#line 61
{
#line 61
  /*HplAtm128InterruptC.IntPin4*/HplAtm128InterruptPinP$4$Irq$fired();
}

# 41 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptSig.nc"
inline static   void HplAtm128InterruptSigP$IntSig4$fired(void){
#line 41
  /*HplAtm128InterruptC.IntPin4*/HplAtm128InterruptPinP$4$IrqSignal$fired();
#line 41
}
#line 41
# 63 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline    void /*HplAtm128InterruptC.IntPin5*/HplAtm128InterruptPinP$5$Irq$default$fired(void)
#line 63
{
}

# 64 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
inline static   void /*HplAtm128InterruptC.IntPin5*/HplAtm128InterruptPinP$5$Irq$fired(void){
#line 64
  /*HplAtm128InterruptC.IntPin5*/HplAtm128InterruptPinP$5$Irq$default$fired();
#line 64
}
#line 64
# 61 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline   void /*HplAtm128InterruptC.IntPin5*/HplAtm128InterruptPinP$5$IrqSignal$fired(void)
#line 61
{
#line 61
  /*HplAtm128InterruptC.IntPin5*/HplAtm128InterruptPinP$5$Irq$fired();
}

# 41 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptSig.nc"
inline static   void HplAtm128InterruptSigP$IntSig5$fired(void){
#line 41
  /*HplAtm128InterruptC.IntPin5*/HplAtm128InterruptPinP$5$IrqSignal$fired();
#line 41
}
#line 41
# 137 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420ReceiveP.nc"
static inline   void CC2420ReceiveP$InterruptFIFOP$fired(void)
#line 137
{
  if (CC2420ReceiveP$m_state == CC2420ReceiveP$S_STARTED) {
    CC2420ReceiveP$beginReceive();
    }
  else {
#line 141
    CC2420ReceiveP$m_missed_packets++;
    }
}

# 57 "/opt/tinyos-2.x/tos/interfaces/GpioInterrupt.nc"
inline static   void /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC$1$Interrupt$fired(void){
#line 57
  CC2420ReceiveP$InterruptFIFOP$fired();
#line 57
}
#line 57
# 38 "/opt/tinyos-2.x/tos/chips/atm128/pins/Atm128GpioInterruptC.nc"
static inline   void /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC$1$Atm128Interrupt$fired(void)
#line 38
{
  /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC$1$Interrupt$fired();
}

# 64 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
inline static   void /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP$6$Irq$fired(void){
#line 64
  /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC$1$Atm128Interrupt$fired();
#line 64
}
#line 64
# 61 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline   void /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP$6$IrqSignal$fired(void)
#line 61
{
#line 61
  /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP$6$Irq$fired();
}

# 41 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptSig.nc"
inline static   void HplAtm128InterruptSigP$IntSig6$fired(void){
#line 41
  /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP$6$IrqSignal$fired();
#line 41
}
#line 41
# 63 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline    void /*HplAtm128InterruptC.IntPin7*/HplAtm128InterruptPinP$7$Irq$default$fired(void)
#line 63
{
}

# 64 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
inline static   void /*HplAtm128InterruptC.IntPin7*/HplAtm128InterruptPinP$7$Irq$fired(void){
#line 64
  /*HplAtm128InterruptC.IntPin7*/HplAtm128InterruptPinP$7$Irq$default$fired();
#line 64
}
#line 64
# 61 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline   void /*HplAtm128InterruptC.IntPin7*/HplAtm128InterruptPinP$7$IrqSignal$fired(void)
#line 61
{
#line 61
  /*HplAtm128InterruptC.IntPin7*/HplAtm128InterruptPinP$7$Irq$fired();
}

# 41 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptSig.nc"
inline static   void HplAtm128InterruptSigP$IntSig7$fired(void){
#line 41
  /*HplAtm128InterruptC.IntPin7*/HplAtm128InterruptPinP$7$IrqSignal$fired();
#line 41
}
#line 41
# 47 "/opt/tinyos-2.x/tos/chips/atm128/adc/HplAtm128AdcP.nc"
static inline   uint16_t HplAtm128AdcP$HplAtm128Adc$getValue(void)
#line 47
{
  return * (volatile uint16_t *)(0x04 + 0x20);
}

#line 44
static inline   Atm128Adcsra_t HplAtm128AdcP$HplAtm128Adc$getAdcsra(void)
#line 44
{
  return * (Atm128Adcsra_t *)& * (volatile uint8_t *)(0x06 + 0x20);
}

#line 110
static inline   bool HplAtm128AdcP$HplAtm128Adc$cancel(void)
#line 110
{
  /* atomic removed: atomic calls only */

  {
    Atm128Adcsra_t oldSr = HplAtm128AdcP$HplAtm128Adc$getAdcsra();
#line 114
    Atm128Adcsra_t newSr;





    newSr = oldSr;
    newSr.aden = FALSE;
    newSr.adif = TRUE;
    newSr.adie = FALSE;

    HplAtm128AdcP$HplAtm128Adc$setAdcsra(newSr);
    newSr.adsc = FALSE;
    HplAtm128AdcP$HplAtm128Adc$setAdcsra(newSr);
    newSr.aden = TRUE;
    HplAtm128AdcP$HplAtm128Adc$setAdcsra(newSr);

    {
      unsigned char __nesc_temp = 
#line 131
      oldSr.adif || oldSr.adsc;

#line 131
      return __nesc_temp;
    }
  }
}

# 141 "/opt/tinyos-2.x/tos/chips/atm128/adc/HplAtm128Adc.nc"
inline static   bool Atm128AdcP$HplAtm128Adc$cancel(void){
#line 141
  unsigned char result;
#line 141

#line 141
  result = HplAtm128AdcP$HplAtm128Adc$cancel();
#line 141

#line 141
  return result;
#line 141
}
#line 141
# 242 "/opt/tinyos-2.x/tos/chips/atm128/adc/Atm128AdcP.nc"
static inline    bool Atm128AdcP$Atm128AdcMultiple$default$dataReady(uint16_t data, bool precise, uint8_t channel, 
uint8_t *newChannel, uint8_t *newRefVoltage)
#line 243
{
  return FALSE;
}

# 110 "/opt/tinyos-2.x/tos/chips/atm128/adc/Atm128AdcMultiple.nc"
inline static   bool Atm128AdcP$Atm128AdcMultiple$dataReady(uint16_t arg_0x7e5d0a68, bool arg_0x7e5d0bf0, uint8_t arg_0x7e5d0d78, uint8_t *arg_0x7e5cb010, uint8_t *arg_0x7e5cb1c0){
#line 110
  unsigned char result;
#line 110

#line 110
  result = Atm128AdcP$Atm128AdcMultiple$default$dataReady(arg_0x7e5d0a68, arg_0x7e5d0bf0, arg_0x7e5d0d78, arg_0x7e5cb010, arg_0x7e5cb1c0);
#line 110

#line 110
  return result;
#line 110
}
#line 110
# 150 "/opt/tinyos-2.x/tos/chips/atm128/adc/AdcP.nc"
static inline    void AdcP$ReadNow$default$readDone(uint8_t c, error_t e, uint16_t d)
#line 150
{
}

# 65 "/opt/tinyos-2.x/tos/interfaces/ReadNow.nc"
inline static   void AdcP$ReadNow$readDone(uint8_t arg_0x7e52a628, error_t arg_0x7e5e6b10, AdcP$ReadNow$val_t arg_0x7e5e6c98){
#line 65
    AdcP$ReadNow$default$readDone(arg_0x7e52a628, arg_0x7e5e6b10, arg_0x7e5e6c98);
#line 65
}
#line 65
# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static   error_t AdcP$acquiredData$postTask(void){
#line 56
  unsigned char result;
#line 56

#line 56
  result = SchedulerBasicP$TaskBasic$postTask(AdcP$acquiredData);
#line 56

#line 56
  return result;
#line 56
}
#line 56
# 108 "/opt/tinyos-2.x/tos/chips/atm128/adc/AdcP.nc"
static inline   void AdcP$Atm128AdcSingle$dataReady(uint16_t data, bool precise)
#line 108
{
  switch (AdcP$state) 
    {
      case AdcP$ACQUIRE_DATA: 
        if (!precise) {
          AdcP$sample();
          }
        else {
            AdcP$val = data;
            AdcP$acquiredData$postTask();
          }
      break;

      case AdcP$ACQUIRE_DATA_NOW: 
        if (!precise) {
          AdcP$sample();
          }
        else {
            AdcP$state = AdcP$IDLE;
            AdcP$ReadNow$readDone(AdcP$client, SUCCESS, data);
          }
      break;

      default: 
        break;
    }
}

# 72 "/opt/tinyos-2.x/tos/chips/atm128/adc/Atm128AdcSingle.nc"
inline static   void Atm128AdcP$Atm128AdcSingle$dataReady(uint16_t arg_0x7e5d68b8, bool arg_0x7e5d6a40){
#line 72
  AdcP$Atm128AdcSingle$dataReady(arg_0x7e5d68b8, arg_0x7e5d6a40);
#line 72
}
#line 72
# 80 "/opt/tinyos-2.x/tos/chips/atm128/adc/HplAtm128AdcP.nc"
static inline   void HplAtm128AdcP$HplAtm128Adc$disableInterruption(void)
#line 80
{
#line 80
  * (volatile uint8_t *)(0x06 + 0x20) &= ~(1 << 3);
}

# 86 "/opt/tinyos-2.x/tos/chips/atm128/adc/HplAtm128Adc.nc"
inline static   void Atm128AdcP$HplAtm128Adc$disableInterruption(void){
#line 86
  HplAtm128AdcP$HplAtm128Adc$disableInterruption();
#line 86
}
#line 86
# 124 "/opt/tinyos-2.x/tos/chips/atm128/adc/Atm128AdcP.nc"
static inline   void Atm128AdcP$HplAtm128Adc$dataReady(uint16_t data)
#line 124
{
  bool precise;
#line 125
  bool multiple;
  uint8_t channel;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      channel = Atm128AdcP$f.channel;
      precise = Atm128AdcP$f.precise;
      multiple = Atm128AdcP$f.multiple;
    }
#line 133
    __nesc_atomic_end(__nesc_atomic); }

  if (!multiple) 
    {


      Atm128AdcP$HplAtm128Adc$disableInterruption();
      Atm128AdcP$Atm128AdcSingle$dataReady(data, precise);
    }
  else 
    {







      bool cont;
      uint8_t nextChannel;
#line 152
      uint8_t nextVoltage;
      Atm128Admux_t admux;

      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
        {
          admux = Atm128AdcP$HplAtm128Adc$getAdmux();
          nextVoltage = admux.refs;
          nextChannel = admux.mux;
        }
#line 160
        __nesc_atomic_end(__nesc_atomic); }

      cont = Atm128AdcP$Atm128AdcMultiple$dataReady(data, precise, channel, 
      &nextChannel, &nextVoltage);
      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
        if (cont) 
          {



            admux.refs = nextVoltage;
            admux.mux = nextChannel;
            Atm128AdcP$HplAtm128Adc$setAdmux(admux);

            Atm128AdcP$f = Atm128AdcP$nextF;
            Atm128AdcP$nextF.channel = nextChannel;
            Atm128AdcP$nextF.precise = Atm128AdcP$isPrecise(admux, nextChannel, nextVoltage);
          }
        else {
          Atm128AdcP$HplAtm128Adc$cancel();
          }
#line 180
        __nesc_atomic_end(__nesc_atomic); }
    }
}

# 147 "/opt/tinyos-2.x/tos/chips/atm128/adc/HplAtm128Adc.nc"
inline static   void HplAtm128AdcP$HplAtm128Adc$dataReady(uint16_t arg_0x7e5b5120){
#line 147
  Atm128AdcP$HplAtm128Adc$dataReady(arg_0x7e5b5120);
#line 147
}
#line 147
# 78 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
inline static   error_t CC2420ControlP$SpiResource$request(void){
#line 78
  unsigned char result;
#line 78

#line 78
  result = CC2420SpiImplP$Resource$request(/*CC2420ControlC.Spi*/CC2420SpiC$0$CLIENT_ID);
#line 78

#line 78
  return result;
#line 78
}
#line 78
# 105 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420ControlP.nc"
static inline   error_t CC2420ControlP$Resource$request(void)
#line 105
{
  return CC2420ControlP$SpiResource$request();
}

# 78 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
inline static   error_t CC2420CsmaP$Resource$request(void){
#line 78
  unsigned char result;
#line 78

#line 78
  result = CC2420ControlP$Resource$request();
#line 78

#line 78
  return result;
#line 78
}
#line 78
# 107 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420CsmaP.nc"
static inline   void CC2420CsmaP$CC2420Power$startVRegDone(void)
#line 107
{
  CC2420CsmaP$Resource$request();
}

# 56 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420Power.nc"
inline static   void CC2420ControlP$CC2420Power$startVRegDone(void){
#line 56
  CC2420CsmaP$CC2420Power$startVRegDone();
#line 56
}
#line 56
# 46 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline   void /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP$6$IO$set(void)
#line 46
{
#line 46
  * (volatile uint8_t *)59U |= 1 << 6;
}

# 29 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   void CC2420ControlP$RSTN$set(void){
#line 29
  /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP$6$IO$set();
#line 29
}
#line 29
# 47 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline   void /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP$6$IO$clr(void)
#line 47
{
#line 47
  * (volatile uint8_t *)59U &= ~(1 << 6);
}

# 30 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   void CC2420ControlP$RSTN$clr(void){
#line 30
  /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP$6$IO$clr();
#line 30
}
#line 30
# 136 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420ControlP.nc"
static inline   void CC2420ControlP$StartupTimer$fired(void)
#line 136
{
  if (CC2420ControlP$m_state == CC2420ControlP$S_VREG_STARTING) {
      CC2420ControlP$m_state = CC2420ControlP$S_VREG_STARTED;
      CC2420ControlP$RSTN$clr();
      CC2420ControlP$RSTN$set();
      CC2420ControlP$CC2420Power$startVRegDone();
    }
}

# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static   error_t CC2420CsmaP$sendDone_task$postTask(void){
#line 56
  unsigned char result;
#line 56

#line 56
  result = SchedulerBasicP$TaskBasic$postTask(CC2420CsmaP$sendDone_task);
#line 56

#line 56
  return result;
#line 56
}
#line 56
# 198 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420CsmaP.nc"
static inline   void CC2420CsmaP$CC2420Transmit$sendDone(message_t *p_msg, error_t err)
#line 198
{
  /* atomic removed: atomic calls only */
#line 199
  CC2420CsmaP$sendErr = err;
  CC2420CsmaP$sendDone_task$postTask();
}

# 85 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420Transmit.nc"
inline static   void CC2420TransmitP$Send$sendDone(message_t *arg_0x7e413010, error_t arg_0x7e413198){
#line 85
  CC2420CsmaP$CC2420Transmit$sendDone(arg_0x7e413010, arg_0x7e413198);
#line 85
}
#line 85
# 124 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420TransmitP.nc"
static inline void CC2420TransmitP$signalDone(error_t err)
#line 124
{
  /* atomic removed: atomic calls only */
#line 125
  CC2420TransmitP$m_state = CC2420TransmitP$S_STARTED;
  CC2420TransmitP$Send$sendDone(CC2420TransmitP$m_msg, err);
}

# 55 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static   void CC2420TransmitP$BackoffTimer$start(CC2420TransmitP$BackoffTimer$size_type arg_0x7ea23220){
#line 55
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$Alarm$start(arg_0x7ea23220);
#line 55
}
#line 55
# 105 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420TransmitP.nc"
static inline void CC2420TransmitP$startBackoffTimer(uint16_t time)
#line 105
{
  CC2420TransmitP$BackoffTimer$start(time);
}

# 32 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   bool CC2420TransmitP$CCA$get(void){
#line 32
  unsigned char result;
#line 32

#line 32
  result = /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP$30$IO$get();
#line 32

#line 32
  return result;
#line 32
}
#line 32
# 277 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420TransmitP.nc"
static inline   void CC2420TransmitP$BackoffTimer$fired(void)
#line 277
{
  /* atomic removed: atomic calls only */
  {
    switch (CC2420TransmitP$m_state) {

        case CC2420TransmitP$S_SAMPLE_CCA: 


          if (CC2420TransmitP$CCA$get()) {
              CC2420TransmitP$m_state = CC2420TransmitP$S_BEGIN_TRANSMIT;
              CC2420TransmitP$startBackoffTimer(CC2420_TIME_ACK_TURNAROUND);
            }
          else {
              CC2420TransmitP$congestionBackoff();
            }
        break;

        case CC2420TransmitP$S_BEGIN_TRANSMIT: 
          if (CC2420TransmitP$acquireSpiResource() == SUCCESS) {
            CC2420TransmitP$attemptSend();
            }
#line 297
        break;

        case CC2420TransmitP$S_ACK_WAIT: 
          CC2420TransmitP$signalDone(SUCCESS);
        break;
#line 313
        default: 
          break;
      }
  }
}

# 67 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static   void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$Alarm$fired(void){
#line 67
  CC2420TransmitP$BackoffTimer$fired();
#line 67
  CC2420ControlP$StartupTimer$fired();
#line 67
}
#line 67
# 151 "/opt/tinyos-2.x/tos/lib/timer/TransformAlarmC.nc"
static inline   void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$AlarmFrom$fired(void)
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      if (/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$m_dt == 0) 
        {
          /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$Alarm$fired();
        }
      else 
        {
          /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$set_alarm();
        }
    }
#line 163
    __nesc_atomic_end(__nesc_atomic); }
}

# 67 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static   void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$1$Alarm$fired(void){
#line 67
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$AlarmFrom$fired();
#line 67
}
#line 67
# 139 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer1P.nc"
static inline   void HplAtm128Timer1P$CompareA$stop(void)
#line 139
{
#line 139
  * (volatile uint8_t *)(0x37 + 0x20) &= ~(1 << 4);
}

# 59 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static   void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$1$HplAtm128Compare$stop(void){
#line 59
  HplAtm128Timer1P$CompareA$stop();
#line 59
}
#line 59
# 110 "/opt/tinyos-2.x/tos/chips/atm128/timer/Atm128AlarmC.nc"
static inline   void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$1$HplAtm128Compare$fired(void)
#line 110
{
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$1$HplAtm128Compare$stop();
  ;
  __nesc_enable_interrupt();
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$1$Alarm$fired();
}

# 49 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static   void HplAtm128Timer1P$CompareA$fired(void){
#line 49
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$1$HplAtm128Compare$fired();
#line 49
}
#line 49
# 198 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer1P.nc"
static inline    void HplAtm128Timer1P$CompareB$default$fired(void)
#line 198
{
}

# 49 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static   void HplAtm128Timer1P$CompareB$fired(void){
#line 49
  HplAtm128Timer1P$CompareB$default$fired();
#line 49
}
#line 49
# 202 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer1P.nc"
static inline    void HplAtm128Timer1P$CompareC$default$fired(void)
#line 202
{
}

# 49 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static   void HplAtm128Timer1P$CompareC$fired(void){
#line 49
  HplAtm128Timer1P$CompareC$default$fired();
#line 49
}
#line 49
# 132 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420ReceiveP.nc"
static inline   void CC2420ReceiveP$CC2420Receive$sfd_dropped(void)
#line 132
{
  if (CC2420ReceiveP$m_timestamp_size) {
    CC2420ReceiveP$m_timestamp_size--;
    }
}

# 53 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420Receive.nc"
inline static   void CC2420TransmitP$CC2420Receive$sfd_dropped(void){
#line 53
  CC2420ReceiveP$CC2420Receive$sfd_dropped();
#line 53
}
#line 53
# 45 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline   bool /*HplAtm128GeneralIOC.PortD.Bit4*/HplAtm128GeneralIOPinP$28$IO$get(void)
#line 45
{
#line 45
  return (* (volatile uint8_t *)48U & (1 << 4)) != 0;
}

# 32 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   bool CC2420TransmitP$SFD$get(void){
#line 32
  unsigned char result;
#line 32

#line 32
  result = /*HplAtm128GeneralIOC.PortD.Bit4*/HplAtm128GeneralIOPinP$28$IO$get();
#line 32

#line 32
  return result;
#line 32
}
#line 32
# 123 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420ReceiveP.nc"
static inline   void CC2420ReceiveP$CC2420Receive$sfd(uint16_t time)
#line 123
{
  if (CC2420ReceiveP$m_timestamp_size < CC2420ReceiveP$TIMESTAMP_QUEUE_SIZE) {
      uint8_t tail = (CC2420ReceiveP$m_timestamp_head + CC2420ReceiveP$m_timestamp_size) % 
      CC2420ReceiveP$TIMESTAMP_QUEUE_SIZE;

#line 127
      CC2420ReceiveP$m_timestamp_queue[tail] = time;
      CC2420ReceiveP$m_timestamp_size++;
    }
}

# 47 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420Receive.nc"
inline static   void CC2420TransmitP$CC2420Receive$sfd(uint16_t arg_0x7dffb750){
#line 47
  CC2420ReceiveP$CC2420Receive$sfd(arg_0x7dffb750);
#line 47
}
#line 47
# 448 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420TransmitP.nc"
static inline    void CC2420TransmitP$TimeStamp$default$receivedSFD(uint16_t time)
#line 448
{
}

# 50 "/opt/tinyos-2.x/tos/interfaces/RadioTimeStamping.nc"
inline static   void CC2420TransmitP$TimeStamp$receivedSFD(uint16_t arg_0x7e016710){
#line 50
  CC2420TransmitP$TimeStamp$default$receivedSFD(arg_0x7e016710);
#line 50
}
#line 50
# 56 "/opt/tinyos-2.x/tos/chips/atm128/timer/Atm128GpioCaptureC.nc"
static inline   error_t /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC$0$Capture$captureFallingEdge(void)
#line 56
{
  return /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC$0$enableCapture(FALSE);
}

# 43 "/opt/tinyos-2.x/tos/interfaces/GpioCapture.nc"
inline static   error_t CC2420TransmitP$CaptureSFD$captureFallingEdge(void){
#line 43
  unsigned char result;
#line 43

#line 43
  result = /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC$0$Capture$captureFallingEdge();
#line 43

#line 43
  return result;
#line 43
}
#line 43
# 97 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420TransmitP.nc"
static inline cc2420_header_t *CC2420TransmitP$getHeader(message_t *msg)
#line 97
{
  return (cc2420_header_t *)(msg->data - sizeof(cc2420_header_t ));
}

static inline cc2420_metadata_t *CC2420TransmitP$getMetadata(message_t *msg)
#line 101
{
  return (cc2420_metadata_t *)msg->metadata;
}

# 65 "/opt/tinyos-2.x/tos/chips/atm128/timer/Atm128AlarmC.nc"
static inline   void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$1$Alarm$stop(void)
#line 65
{
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$1$HplAtm128Compare$stop();
}

# 62 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static   void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$AlarmFrom$stop(void){
#line 62
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$1$Alarm$stop();
#line 62
}
#line 62
# 91 "/opt/tinyos-2.x/tos/lib/timer/TransformAlarmC.nc"
static inline   void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$Alarm$stop(void)
{
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$AlarmFrom$stop();
}

# 62 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static   void CC2420TransmitP$BackoffTimer$stop(void){
#line 62
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$Alarm$stop();
#line 62
}
#line 62
# 109 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420TransmitP.nc"
static inline void CC2420TransmitP$stopBackoffTimer(void)
#line 109
{
  CC2420TransmitP$BackoffTimer$stop();
}

#line 447
static inline    void CC2420TransmitP$TimeStamp$default$transmittedSFD(uint16_t time, message_t *p_msg)
#line 447
{
}

# 39 "/opt/tinyos-2.x/tos/interfaces/RadioTimeStamping.nc"
inline static   void CC2420TransmitP$TimeStamp$transmittedSFD(uint16_t arg_0x7e016030, message_t *arg_0x7e0161e0){
#line 39
  CC2420TransmitP$TimeStamp$default$transmittedSFD(arg_0x7e016030, arg_0x7e0161e0);
#line 39
}
#line 39
# 357 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420TransmitP.nc"
static inline   void CC2420TransmitP$CaptureSFD$captured(uint16_t time)
#line 357
{

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 359
    {
      switch (CC2420TransmitP$m_state) {

          case CC2420TransmitP$S_SFD: 
            CC2420TransmitP$CaptureSFD$captureFallingEdge();
          CC2420TransmitP$TimeStamp$transmittedSFD(time, CC2420TransmitP$m_msg);
          CC2420TransmitP$releaseSpiResource();
          CC2420TransmitP$stopBackoffTimer();
          CC2420TransmitP$m_state = CC2420TransmitP$S_EFD;
          if (((__nesc_ntoh_leuint16((unsigned char *)&CC2420TransmitP$getHeader(CC2420TransmitP$m_msg)->fcf) >> IEEE154_FCF_FRAME_TYPE) & 7) == 
          IEEE154_TYPE_DATA) {
            __nesc_hton_uint16((unsigned char *)&CC2420TransmitP$getMetadata(CC2420TransmitP$m_msg)->time, time);
            }
#line 371
          if (CC2420TransmitP$SFD$get()) {
            break;
            }
          case CC2420TransmitP$S_EFD: 
            CC2420TransmitP$CaptureSFD$captureRisingEdge();
          if (__nesc_ntoh_leuint16((unsigned char *)&CC2420TransmitP$getHeader(CC2420TransmitP$m_msg)->fcf) & (1 << IEEE154_FCF_ACK_REQ)) {
              CC2420TransmitP$m_state = CC2420TransmitP$S_ACK_WAIT;
              CC2420TransmitP$startBackoffTimer(CC2420_ACK_WAIT_DELAY);
            }
          else {
              CC2420TransmitP$signalDone(SUCCESS);
            }
          if (!CC2420TransmitP$SFD$get()) {
            break;
            }
          default: 
            if (!CC2420TransmitP$m_receiving) {
                CC2420TransmitP$CaptureSFD$captureFallingEdge();
                CC2420TransmitP$TimeStamp$receivedSFD(time);
                CC2420TransmitP$CC2420Receive$sfd(time);
                CC2420TransmitP$m_receiving = TRUE;
                CC2420TransmitP$m_prev_time = time;
                if (CC2420TransmitP$SFD$get()) {
                  {
#line 394
                    __nesc_atomic_end(__nesc_atomic); 
#line 394
                    return;
                  }
                  }
              }
#line 396
          if (CC2420TransmitP$m_receiving) {
              CC2420TransmitP$CaptureSFD$captureRisingEdge();
              CC2420TransmitP$m_receiving = FALSE;
              if (time - CC2420TransmitP$m_prev_time < 10) {
                CC2420TransmitP$CC2420Receive$sfd_dropped();
                }
            }
#line 402
          break;
        }
    }
#line 404
    __nesc_atomic_end(__nesc_atomic); }
}

# 50 "/opt/tinyos-2.x/tos/interfaces/GpioCapture.nc"
inline static   void /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC$0$Capture$captured(uint16_t arg_0x7e2017f8){
#line 50
  CC2420TransmitP$CaptureSFD$captured(arg_0x7e2017f8);
#line 50
}
#line 50
# 126 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer1P.nc"
static inline   void HplAtm128Timer1P$Capture$reset(void)
#line 126
{
#line 126
  * (volatile uint8_t *)(0x36 + 0x20) = 1 << 5;
}

# 55 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Capture.nc"
inline static   void /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC$0$Atm128Capture$reset(void){
#line 55
  HplAtm128Timer1P$Capture$reset();
#line 55
}
#line 55
# 64 "/opt/tinyos-2.x/tos/chips/atm128/timer/Atm128GpioCaptureC.nc"
static inline   void /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC$0$Atm128Capture$captured(uint16_t time)
#line 64
{
  /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC$0$Atm128Capture$reset();
  /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC$0$Capture$captured(time);
}

# 51 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Capture.nc"
inline static   void HplAtm128Timer1P$Capture$captured(HplAtm128Timer1P$Capture$size_type arg_0x7e378120){
#line 51
  /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC$0$Atm128Capture$captured(arg_0x7e378120);
#line 51
}
#line 51
# 117 "/opt/tinyos-2.x/tos/chips/atm128/timer/Atm128AlarmC.nc"
static inline   void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$1$HplAtm128Timer$overflow(void)
#line 117
{
}

# 51 "/opt/tinyos-2.x/tos/chips/atm128/timer/Atm128TimerInitC.nc"
static inline   void /*InitOneP.InitOne*/Atm128TimerInitC$1$Timer$overflow(void)
#line 51
{
}

# 166 "/opt/tinyos-2.x/tos/lib/timer/TransformAlarmC.nc"
static inline   void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$Counter$overflow(void)
{
}

# 71 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
inline static   void /*Counter32khz32C.Transform32*/TransformCounterC$0$Counter$overflow(void){
#line 71
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$Counter$overflow();
#line 71
}
#line 71
# 122 "/opt/tinyos-2.x/tos/lib/timer/TransformCounterC.nc"
static inline   void /*Counter32khz32C.Transform32*/TransformCounterC$0$CounterFrom$overflow(void)
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      /*Counter32khz32C.Transform32*/TransformCounterC$0$m_upper++;
      if ((/*Counter32khz32C.Transform32*/TransformCounterC$0$m_upper & /*Counter32khz32C.Transform32*/TransformCounterC$0$OVERFLOW_MASK) == 0) {
        /*Counter32khz32C.Transform32*/TransformCounterC$0$Counter$overflow();
        }
    }
#line 130
    __nesc_atomic_end(__nesc_atomic); }
}

# 71 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
inline static   void /*CounterOne16C.NCounter*/Atm128CounterC$1$Counter$overflow(void){
#line 71
  /*Counter32khz32C.Transform32*/TransformCounterC$0$CounterFrom$overflow();
#line 71
}
#line 71
# 56 "/opt/tinyos-2.x/tos/chips/atm128/timer/Atm128CounterC.nc"
static inline   void /*CounterOne16C.NCounter*/Atm128CounterC$1$Timer$overflow(void)
{
  /*CounterOne16C.NCounter*/Atm128CounterC$1$Counter$overflow();
}

# 61 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static   void HplAtm128Timer1P$Timer$overflow(void){
#line 61
  /*CounterOne16C.NCounter*/Atm128CounterC$1$Timer$overflow();
#line 61
  /*InitOneP.InitOne*/Atm128TimerInitC$1$Timer$overflow();
#line 61
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$1$HplAtm128Timer$overflow();
#line 61
}
#line 61
# 190 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420CsmaP.nc"
static inline   uint16_t CC2420CsmaP$CsmaBackoff$initial(message_t *m)
#line 190
{
  return (CC2420CsmaP$Random$rand16() & 0x1f) + 1;
}

# 36 "/opt/tinyos-2.x/tos/interfaces/CsmaBackoff.nc"
inline static   uint16_t CC2420TransmitP$CsmaBackoff$initial(message_t *arg_0x7e40e560){
#line 36
  unsigned int result;
#line 36

#line 36
  result = CC2420CsmaP$CsmaBackoff$initial(arg_0x7e40e560);
#line 36

#line 36
  return result;
#line 36
}
#line 36
# 29 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   void CC2420TransmitP$CSN$set(void){
#line 29
  /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP$8$IO$set();
#line 29
}
#line 29
# 246 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420TransmitP.nc"
static inline   void CC2420TransmitP$TXFIFO$writeDone(uint8_t *tx_buf, uint8_t tx_len, 
error_t error)
#line 247
{

  CC2420TransmitP$CSN$set();

  if (CC2420TransmitP$m_state == CC2420TransmitP$S_CANCEL) {
      CC2420TransmitP$m_state = CC2420TransmitP$S_STARTED;
    }
  else {
#line 254
    if (!CC2420TransmitP$m_cca) {
        CC2420TransmitP$m_state = CC2420TransmitP$S_BEGIN_TRANSMIT;
        CC2420TransmitP$attemptSend();
      }
    else {
        CC2420TransmitP$releaseSpiResource();
        CC2420TransmitP$m_state = CC2420TransmitP$S_SAMPLE_CCA;
        CC2420TransmitP$startBackoffTimer(CC2420TransmitP$CsmaBackoff$initial(CC2420TransmitP$m_msg) * 
        CC2420_BACKOFF_PERIOD);
      }
    }
}

# 277 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420ReceiveP.nc"
static inline   void CC2420ReceiveP$RXFIFO$writeDone(uint8_t *tx_buf, uint8_t tx_len, error_t error)
#line 277
{
}

# 231 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420SpiImplP.nc"
static inline    void CC2420SpiImplP$Fifo$default$writeDone(uint8_t addr, uint8_t *tx_buf, uint8_t tx_len, error_t error)
#line 231
{
}

# 91 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420Fifo.nc"
inline static   void CC2420SpiImplP$Fifo$writeDone(uint8_t arg_0x7e195068, uint8_t *arg_0x7e1a1610, uint8_t arg_0x7e1a1798, error_t arg_0x7e1a1920){
#line 91
  switch (arg_0x7e195068) {
#line 91
    case CC2420_TXFIFO:
#line 91
      CC2420TransmitP$TXFIFO$writeDone(arg_0x7e1a1610, arg_0x7e1a1798, arg_0x7e1a1920);
#line 91
      break;
#line 91
    case CC2420_RXFIFO:
#line 91
      CC2420ReceiveP$RXFIFO$writeDone(arg_0x7e1a1610, arg_0x7e1a1798, arg_0x7e1a1920);
#line 91
      break;
#line 91
    default:
#line 91
      CC2420SpiImplP$Fifo$default$writeDone(arg_0x7e195068, arg_0x7e1a1610, arg_0x7e1a1798, arg_0x7e1a1920);
#line 91
      break;
#line 91
    }
#line 91
}
#line 91
# 445 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420TransmitP.nc"
static inline   void CC2420TransmitP$TXFIFO$readDone(uint8_t *tx_buf, uint8_t tx_len, error_t error)
#line 445
{
}

# 101 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
inline static   error_t CC2420ReceiveP$SpiResource$release(void){
#line 101
  unsigned char result;
#line 101

#line 101
  result = CC2420SpiImplP$Resource$release(/*CC2420ReceiveC.Spi*/CC2420SpiC$3$CLIENT_ID);
#line 101

#line 101
  return result;
#line 101
}
#line 101
# 29 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   void CC2420ReceiveP$CSN$set(void){
#line 29
  /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP$8$IO$set();
#line 29
}
#line 29
# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static   error_t CC2420ReceiveP$receiveDone_task$postTask(void){
#line 56
  unsigned char result;
#line 56

#line 56
  result = SchedulerBasicP$TaskBasic$postTask(CC2420ReceiveP$receiveDone_task);
#line 56

#line 56
  return result;
#line 56
}
#line 56
# 408 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420TransmitP.nc"
static inline   void CC2420TransmitP$CC2420Receive$receive(uint8_t type, message_t *ack_msg)
#line 408
{

  if (type == IEEE154_TYPE_ACK) {
      cc2420_header_t *ack_header = CC2420TransmitP$getHeader(ack_msg);
      cc2420_header_t *msg_header = CC2420TransmitP$getHeader(CC2420TransmitP$m_msg);
      cc2420_metadata_t *msg_metadata = CC2420TransmitP$getMetadata(CC2420TransmitP$m_msg);
      uint8_t *ack_buf = (uint8_t *)ack_header;
      uint8_t length = __nesc_ntoh_leuint8((unsigned char *)&ack_header->length);

      if (CC2420TransmitP$m_state == CC2420TransmitP$S_ACK_WAIT && __nesc_ntoh_leuint8((unsigned char *)&
      msg_header->dsn) == __nesc_ntoh_leuint8((unsigned char *)&ack_header->dsn)) {
          CC2420TransmitP$stopBackoffTimer();
          __nesc_hton_int8((unsigned char *)&msg_metadata->ack, TRUE);
          __nesc_hton_uint8((unsigned char *)&msg_metadata->rssi, ack_buf[length - 1]);
          __nesc_hton_uint8((unsigned char *)&msg_metadata->lqi, ack_buf[length] & 0x7f);
          CC2420TransmitP$signalDone(SUCCESS);
        }
    }
}

# 61 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420Receive.nc"
inline static   void CC2420ReceiveP$CC2420Receive$receive(uint8_t arg_0x7dffa068, message_t *arg_0x7dffa218){
#line 61
  CC2420TransmitP$CC2420Receive$receive(arg_0x7dffa068, arg_0x7dffa218);
#line 61
}
#line 61
# 62 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420Fifo.nc"
inline static   error_t CC2420ReceiveP$RXFIFO$continueRead(uint8_t *arg_0x7e1b2d00, uint8_t arg_0x7e1b2e88){
#line 62
  unsigned char result;
#line 62

#line 62
  result = CC2420SpiImplP$Fifo$continueRead(CC2420_RXFIFO, arg_0x7e1b2d00, arg_0x7e1b2e88);
#line 62

#line 62
  return result;
#line 62
}
#line 62
# 45 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline   bool /*HplAtm128GeneralIOC.PortE.Bit6*/HplAtm128GeneralIOPinP$38$IO$get(void)
#line 45
{
#line 45
  return (* (volatile uint8_t *)33U & (1 << 6)) != 0;
}

# 32 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   bool CC2420ReceiveP$FIFOP$get(void){
#line 32
  unsigned char result;
#line 32

#line 32
  result = /*HplAtm128GeneralIOC.PortE.Bit6*/HplAtm128GeneralIOPinP$38$IO$get();
#line 32

#line 32
  return result;
#line 32
}
#line 32
# 45 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline   bool /*HplAtm128GeneralIOC.PortB.Bit7*/HplAtm128GeneralIOPinP$15$IO$get(void)
#line 45
{
#line 45
  return (* (volatile uint8_t *)54U & (1 << 7)) != 0;
}

# 32 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   bool CC2420ReceiveP$FIFO$get(void){
#line 32
  unsigned char result;
#line 32

#line 32
  result = /*HplAtm128GeneralIOC.PortB.Bit7*/HplAtm128GeneralIOPinP$15$IO$get();
#line 32

#line 32
  return result;
#line 32
}
#line 32
# 45 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420Strobe.nc"
inline static   cc2420_status_t CC2420ReceiveP$SFLUSHRX$strobe(void){
#line 45
  unsigned char result;
#line 45

#line 45
  result = CC2420SpiImplP$Strobe$strobe(CC2420_SFLUSHRX);
#line 45

#line 45
  return result;
#line 45
}
#line 45
# 30 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   void CC2420ReceiveP$CSN$clr(void){
#line 30
  /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP$8$IO$clr();
#line 30
}
#line 30
# 161 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420ReceiveP.nc"
static inline   void CC2420ReceiveP$RXFIFO$readDone(uint8_t *rx_buf, uint8_t rx_len, 
error_t error)
#line 162
{

  cc2420_header_t *header = CC2420ReceiveP$getHeader(CC2420ReceiveP$m_p_rx_buf);
  cc2420_metadata_t *metadata = CC2420ReceiveP$getMetadata(CC2420ReceiveP$m_p_rx_buf);
  uint8_t *buf = (uint8_t *)header;
  uint8_t length = buf[0];

  switch (CC2420ReceiveP$m_state) {

      case CC2420ReceiveP$S_RX_HEADER: 
        CC2420ReceiveP$m_state = CC2420ReceiveP$S_RX_PAYLOAD;
      if (length + 1 > CC2420ReceiveP$m_bytes_left) {
          CC2420ReceiveP$reset_state();
          CC2420ReceiveP$CSN$set();
          CC2420ReceiveP$CSN$clr();
          CC2420ReceiveP$SFLUSHRX$strobe();
          CC2420ReceiveP$SFLUSHRX$strobe();
          CC2420ReceiveP$CSN$set();
          CC2420ReceiveP$SpiResource$release();
          CC2420ReceiveP$waitForNextPacket();
        }
      else {
          if (!CC2420ReceiveP$FIFO$get() && !CC2420ReceiveP$FIFOP$get()) {
            CC2420ReceiveP$m_bytes_left -= length + 1;
            }
#line 186
          CC2420ReceiveP$RXFIFO$continueRead(length <= MAC_PACKET_SIZE ? buf + 1 : (void *)0, 
          length);
        }
      break;

      case CC2420ReceiveP$S_RX_PAYLOAD: 

        CC2420ReceiveP$CSN$set();
      CC2420ReceiveP$SpiResource$release();

      if (CC2420ReceiveP$m_timestamp_size) {
          if (length > 10) {
              __nesc_hton_uint16((unsigned char *)&metadata->time, CC2420ReceiveP$m_timestamp_queue[CC2420ReceiveP$m_timestamp_head]);
              CC2420ReceiveP$m_timestamp_head = (CC2420ReceiveP$m_timestamp_head + 1) % CC2420ReceiveP$TIMESTAMP_QUEUE_SIZE;
              CC2420ReceiveP$m_timestamp_size--;
            }
        }
      else {
          __nesc_hton_uint16((unsigned char *)&metadata->time, 0xffff);
        }


      if (buf[length] >> 7 && rx_buf) {
          uint8_t type = (__nesc_ntoh_leuint16((unsigned char *)&header->fcf) >> IEEE154_FCF_FRAME_TYPE) & 7;

#line 210
          CC2420ReceiveP$CC2420Receive$receive(type, CC2420ReceiveP$m_p_rx_buf);
          if (type == IEEE154_TYPE_DATA) {
              CC2420ReceiveP$receiveDone_task$postTask();
              return;
            }
        }

      CC2420ReceiveP$waitForNextPacket();
      break;

      default: 
        CC2420ReceiveP$CSN$set();
      CC2420ReceiveP$SpiResource$release();
      break;
    }
}

# 230 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420SpiImplP.nc"
static inline    void CC2420SpiImplP$Fifo$default$readDone(uint8_t addr, uint8_t *rx_buf, uint8_t rx_len, error_t error)
#line 230
{
}

# 71 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420Fifo.nc"
inline static   void CC2420SpiImplP$Fifo$readDone(uint8_t arg_0x7e195068, uint8_t *arg_0x7e1b04f8, uint8_t arg_0x7e1b0680, error_t arg_0x7e1b0808){
#line 71
  switch (arg_0x7e195068) {
#line 71
    case CC2420_TXFIFO:
#line 71
      CC2420TransmitP$TXFIFO$readDone(arg_0x7e1b04f8, arg_0x7e1b0680, arg_0x7e1b0808);
#line 71
      break;
#line 71
    case CC2420_RXFIFO:
#line 71
      CC2420ReceiveP$RXFIFO$readDone(arg_0x7e1b04f8, arg_0x7e1b0680, arg_0x7e1b0808);
#line 71
      break;
#line 71
    default:
#line 71
      CC2420SpiImplP$Fifo$default$readDone(arg_0x7e195068, arg_0x7e1b04f8, arg_0x7e1b0680, arg_0x7e1b0808);
#line 71
      break;
#line 71
    }
#line 71
}
#line 71
# 181 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420SpiImplP.nc"
static inline   void CC2420SpiImplP$SpiPacket$sendDone(uint8_t *tx_buf, uint8_t *rx_buf, 
uint16_t len, error_t error)
#line 182
{
  if (CC2420SpiImplP$m_addr & 0x40) {
    CC2420SpiImplP$Fifo$readDone(CC2420SpiImplP$m_addr & ~0x40, rx_buf, len, error);
    }
  else {
#line 186
    CC2420SpiImplP$Fifo$writeDone(CC2420SpiImplP$m_addr, tx_buf, len, error);
    }
}

# 71 "/opt/tinyos-2.x/tos/interfaces/SpiPacket.nc"
inline static   void Atm128SpiP$SpiPacket$sendDone(uint8_t *arg_0x7e17e290, uint8_t *arg_0x7e17e438, uint16_t arg_0x7e17e5c8, error_t arg_0x7e17e760){
#line 71
  CC2420SpiImplP$SpiPacket$sendDone(arg_0x7e17e290, arg_0x7e17e438, arg_0x7e17e5c8, arg_0x7e17e760);
#line 71
}
#line 71
# 99 "/opt/tinyos-2.x/tos/chips/atm128/spi/HplAtm128SpiP.nc"
static inline   uint8_t HplAtm128SpiP$SPI$read(void)
#line 99
{
#line 99
  return * (volatile uint8_t *)(0x0F + 0x20);
}

# 80 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128Spi.nc"
inline static   uint8_t Atm128SpiP$Spi$read(void){
#line 80
  unsigned char result;
#line 80

#line 80
  result = HplAtm128SpiP$SPI$read();
#line 80

#line 80
  return result;
#line 80
}
#line 80
#line 96
inline static   void Atm128SpiP$Spi$enableInterrupt(bool arg_0x7e11c478){
#line 96
  HplAtm128SpiP$SPI$enableInterrupt(arg_0x7e11c478);
#line 96
}
#line 96
# 237 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
static inline   void Atm128SpiP$Spi$dataReady(uint8_t data)
#line 237
{
  bool again;

  /* atomic removed: atomic calls only */
#line 240
  {
    if (Atm128SpiP$rxBuffer != (void *)0) {
        Atm128SpiP$rxBuffer[Atm128SpiP$pos] = data;
      }

    Atm128SpiP$pos++;
  }
  Atm128SpiP$Spi$enableInterrupt(FALSE);
  /* atomic removed: atomic calls only */
  {
    again = Atm128SpiP$pos < Atm128SpiP$len;
  }

  if (again) {
      Atm128SpiP$sendNextPart();
    }
  else {
      uint8_t *rx;
      uint8_t *tx;
      uint16_t myLen;
      uint8_t discard;

      /* atomic removed: atomic calls only */
#line 262
      {
        rx = Atm128SpiP$rxBuffer;
        tx = Atm128SpiP$txBuffer;
        myLen = Atm128SpiP$len;
        Atm128SpiP$rxBuffer = (void *)0;
        Atm128SpiP$txBuffer = (void *)0;
        Atm128SpiP$len = 0;
        Atm128SpiP$pos = 0;
      }
      discard = Atm128SpiP$Spi$read();

      Atm128SpiP$SpiPacket$sendDone(tx, rx, myLen, SUCCESS);
    }
}

# 92 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128Spi.nc"
inline static   void HplAtm128SpiP$SPI$dataReady(uint8_t arg_0x7e11df08){
#line 92
  Atm128SpiP$Spi$dataReady(arg_0x7e11df08);
#line 92
}
#line 92
# 52 "/opt/tinyos-2.x/tos/system/RealMainP.nc"
  int main(void)
#line 52
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {






      RealMainP$Scheduler$init();





      RealMainP$PlatformInit$init();
      while (RealMainP$Scheduler$runNextTask()) ;





      RealMainP$SoftwareInit$init();
      while (RealMainP$Scheduler$runNextTask()) ;
    }
#line 76
    __nesc_atomic_end(__nesc_atomic); }


  __nesc_enable_interrupt();

  RealMainP$Boot$booted();


  RealMainP$Scheduler$taskLoop();




  return -1;
}

# 123 "/opt/tinyos-2.x/tos/system/SchedulerBasicP.nc"
static  bool SchedulerBasicP$Scheduler$runNextTask(void)
{
  uint8_t nextTask;

  /* atomic removed: atomic calls only */
#line 127
  {
    nextTask = SchedulerBasicP$popTask();
    if (nextTask == SchedulerBasicP$NO_TASK) 
      {
        {
          unsigned char __nesc_temp = 
#line 131
          FALSE;

#line 131
          return __nesc_temp;
        }
      }
  }
#line 134
  SchedulerBasicP$TaskBasic$runTask(nextTask);
  return TRUE;
}

#line 164
static   void SchedulerBasicP$TaskBasic$default$runTask(uint8_t id)
{
}

# 64 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static  void SchedulerBasicP$TaskBasic$runTask(uint8_t arg_0x7f062030){
#line 64
  switch (arg_0x7f062030) {
#line 64
    case MotionDetectorM$SendSensorData:
#line 64
      MotionDetectorM$SendSensorData$runTask();
#line 64
      break;
#line 64
    case /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$fired:
#line 64
      /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$fired$runTask();
#line 64
      break;
#line 64
    case /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$updateFromTimer:
#line 64
      /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$updateFromTimer$runTask();
#line 64
      break;
#line 64
    case /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$readSensor:
#line 64
      /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$readSensor$runTask();
#line 64
      break;
#line 64
    case /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$signalStatusDone:
#line 64
      /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$signalStatusDone$runTask();
#line 64
      break;
#line 64
    case HplSensirionSht11P$stopTask:
#line 64
      HplSensirionSht11P$stopTask$runTask();
#line 64
      break;
#line 64
    case /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP$0$grantedTask:
#line 64
      /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP$0$grantedTask$runTask();
#line 64
      break;
#line 64
    case /*HplSensirionSht11C.SplitControlPowerManagerC.PowerManager*/PowerManagerP$0$startTask:
#line 64
      /*HplSensirionSht11C.SplitControlPowerManagerC.PowerManager*/PowerManagerP$0$startTask$runTask();
#line 64
      break;
#line 64
    case /*HplSensirionSht11C.SplitControlPowerManagerC.PowerManager*/PowerManagerP$0$stopTask:
#line 64
      /*HplSensirionSht11C.SplitControlPowerManagerC.PowerManager*/PowerManagerP$0$stopTask$runTask();
#line 64
      break;
#line 64
    case /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$1$grantedTask:
#line 64
      /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$1$grantedTask$runTask();
#line 64
      break;
#line 64
    case AdcP$acquiredData:
#line 64
      AdcP$acquiredData$runTask();
#line 64
      break;
#line 64
    case CC2420CsmaP$startDone_task:
#line 64
      CC2420CsmaP$startDone_task$runTask();
#line 64
      break;
#line 64
    case CC2420CsmaP$stopDone_task:
#line 64
      CC2420CsmaP$stopDone_task$runTask();
#line 64
      break;
#line 64
    case CC2420CsmaP$sendDone_task:
#line 64
      CC2420CsmaP$sendDone_task$runTask();
#line 64
      break;
#line 64
    case CC2420ControlP$syncDone_task:
#line 64
      CC2420ControlP$syncDone_task$runTask();
#line 64
      break;
#line 64
    case HplCC2420InterruptsP$CCATask:
#line 64
      HplCC2420InterruptsP$CCATask$runTask();
#line 64
      break;
#line 64
    case HplCC2420InterruptsP$stopTask:
#line 64
      HplCC2420InterruptsP$stopTask$runTask();
#line 64
      break;
#line 64
    case /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$grantedTask:
#line 64
      /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$grantedTask$runTask();
#line 64
      break;
#line 64
    case CC2420ReceiveP$receiveDone_task:
#line 64
      CC2420ReceiveP$receiveDone_task$runTask();
#line 64
      break;
#line 64
    case /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$errorTask:
#line 64
      /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$errorTask$runTask();
#line 64
      break;
#line 64
    default:
#line 64
      SchedulerBasicP$TaskBasic$default$runTask(arg_0x7f062030);
#line 64
      break;
#line 64
    }
#line 64
}
#line 64
# 48 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static   void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP$0$IO$toggle(void)
#line 48
{
#line 48
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 48
    * (volatile uint8_t *)59U ^= 1 << 0;
#line 48
    __nesc_atomic_end(__nesc_atomic); }
}

# 151 "/opt/tinyos-2.x/tos/system/AMQueueImplP.nc"
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$tryToSend(void)
#line 151
{
  /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$nextPacket();
  if (/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current != /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$QUEUE_EMPTY) {
      error_t nextErr;
      message_t *nextMsg = /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue[/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current].msg;
      am_id_t nextId = /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMPacket$type(nextMsg);
      am_addr_t nextDest = /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMPacket$destination(nextMsg);
      uint8_t len = /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Packet$payloadLength(nextMsg);

#line 159
      nextErr = /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMSend$send(nextId, nextDest, nextMsg, len);
      if (nextErr != SUCCESS) {
          /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$errorTask$postTask();
        }
    }
}

# 117 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static  am_addr_t CC2420ActiveMessageP$AMPacket$destination(message_t *amsg)
#line 117
{
  cc2420_header_t *header = CC2420ActiveMessageP$getHeader(amsg);

#line 119
  return __nesc_ntoh_leuint16((unsigned char *)&header->dest);
}

#line 167
static  uint8_t CC2420ActiveMessageP$Packet$payloadLength(message_t *msg)
#line 167
{
  return __nesc_ntoh_leuint8((unsigned char *)&CC2420ActiveMessageP$getHeader(msg)->length) - CC2420ActiveMessageP$CC2420_SIZE;
}

#line 59
static  error_t CC2420ActiveMessageP$AMSend$send(am_id_t id, am_addr_t addr, 
message_t *msg, 
uint8_t len)
#line 61
{
  cc2420_header_t *header = CC2420ActiveMessageP$getHeader(msg);

#line 63
  __nesc_hton_leuint8((unsigned char *)&header->type, id);
  __nesc_hton_leuint16((unsigned char *)&header->dest, addr);
  __nesc_hton_leuint16((unsigned char *)&header->destpan, TOS_AM_GROUP);

  return CC2420ActiveMessageP$SubSend$send(msg, len + CC2420ActiveMessageP$CC2420_SIZE);
}

# 113 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420TransmitP.nc"
static error_t CC2420TransmitP$acquireSpiResource(void)
#line 113
{
  error_t error = CC2420TransmitP$SpiResource$immediateRequest();

#line 115
  if (error != SUCCESS) {
    CC2420TransmitP$SpiResource$request();
    }
#line 117
  return error;
}

# 80 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420SpiImplP.nc"
static   error_t CC2420SpiImplP$Resource$immediateRequest(uint8_t id)
#line 80
{
  error_t error;

#line 82
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 82
    {
      if (CC2420SpiImplP$m_resource_busy) 
        {
          unsigned char __nesc_temp = 
#line 84
          EBUSY;

          {
#line 84
            __nesc_atomic_end(__nesc_atomic); 
#line 84
            return __nesc_temp;
          }
        }
#line 85
      error = CC2420SpiImplP$SpiResource$immediateRequest();
      if (error == SUCCESS) {
          CC2420SpiImplP$m_holder = id;
          CC2420SpiImplP$m_resource_busy = TRUE;
        }
    }
#line 90
    __nesc_atomic_end(__nesc_atomic); }
  return error;
}

# 106 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
static void Atm128SpiP$startSpi(void)
#line 106
{
  Atm128SpiP$Spi$enableSpi(FALSE);
  /* atomic removed: atomic calls only */
#line 108
  {
    Atm128SpiP$Spi$initMaster();
    Atm128SpiP$Spi$enableInterrupt(FALSE);
    Atm128SpiP$Spi$setMasterDoubleSpeed(TRUE);
    Atm128SpiP$Spi$setClockPolarity(FALSE);
    Atm128SpiP$Spi$setClockPhase(FALSE);
    Atm128SpiP$Spi$setClock(0);
    Atm128SpiP$Spi$enableSpi(TRUE);
  }
  Atm128SpiP$McuPowerState$update();
}

# 131 "/opt/tinyos-2.x/tos/chips/atm128/spi/HplAtm128SpiP.nc"
static   void HplAtm128SpiP$SPI$enableSpi(bool enabled)
#line 131
{
  if (enabled) {
      * (volatile uint8_t *)(0x0D + 0x20) |= 1 << 6;
      HplAtm128SpiP$Mcu$update();
    }
  else {
      * (volatile uint8_t *)(0x0D + 0x20) &= ~(1 << 6);
      HplAtm128SpiP$Mcu$update();
    }
}

#line 116
static   void HplAtm128SpiP$SPI$enableInterrupt(bool enabled)
#line 116
{
  if (enabled) {
      * (volatile uint8_t *)(0x0D + 0x20) |= 1 << 7;
      HplAtm128SpiP$Mcu$update();
    }
  else {
      * (volatile uint8_t *)(0x0D + 0x20) &= ~(1 << 7);
      HplAtm128SpiP$Mcu$update();
    }
}

# 67 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420SpiImplP.nc"
static   error_t CC2420SpiImplP$Resource$request(uint8_t id)
#line 67
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 68
    {
      if (CC2420SpiImplP$m_resource_busy) {
        CC2420SpiImplP$m_requests |= 1 << id;
        }
      else 
#line 71
        {
          CC2420SpiImplP$m_holder = id;
          CC2420SpiImplP$m_resource_busy = TRUE;
          CC2420SpiImplP$SpiResource$request();
        }
    }
#line 76
    __nesc_atomic_end(__nesc_atomic); }
  return SUCCESS;
}

# 285 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
static   error_t Atm128SpiP$Resource$request(uint8_t id)
#line 285
{
  /* atomic removed: atomic calls only */
#line 286
  {
    if (!Atm128SpiP$ArbiterInfo$inUse()) {
        Atm128SpiP$startSpi();
      }
  }
  return Atm128SpiP$ResourceArbiter$request(id);
}

# 125 "/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
static   bool /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ArbiterInfo$inUse(void)
#line 125
{
  /* atomic removed: atomic calls only */
#line 126
  {
    if (/*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$state == /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$RES_IDLE) 
      {
        unsigned char __nesc_temp = 
#line 128
        FALSE;

#line 128
        return __nesc_temp;
      }
  }
#line 130
  return TRUE;
}

# 159 "/opt/tinyos-2.x/tos/system/SchedulerBasicP.nc"
static   error_t SchedulerBasicP$TaskBasic$postTask(uint8_t id)
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 161
    {
#line 161
      {
        unsigned char __nesc_temp = 
#line 161
        SchedulerBasicP$pushTask(id) ? SUCCESS : EBUSY;

        {
#line 161
          __nesc_atomic_end(__nesc_atomic); 
#line 161
          return __nesc_temp;
        }
      }
    }
#line 164
    __nesc_atomic_end(__nesc_atomic); }
}

# 231 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420TransmitP.nc"
static void CC2420TransmitP$loadTXFIFO(void)
#line 231
{
  cc2420_header_t *header = CC2420TransmitP$getHeader(CC2420TransmitP$m_msg);
  uint8_t tx_power = __nesc_ntoh_uint8((unsigned char *)&CC2420TransmitP$getMetadata(CC2420TransmitP$m_msg)->tx_power);

#line 234
  if (!tx_power) {
    tx_power = 31;
    }
#line 236
  CC2420TransmitP$CSN$clr();
  if (CC2420TransmitP$m_tx_power != tx_power) {
    CC2420TransmitP$TXCTRL$write((((2 << CC2420_TXCTRL_TXMIXBUF_CUR) | (
    3 << CC2420_TXCTRL_PA_CURRENT)) | (
    1 << CC2420_TXCTRL_RESERVED)) | (
    tx_power << CC2420_TXCTRL_PA_LEVEL));
    }
#line 242
  CC2420TransmitP$m_tx_power = tx_power;
  CC2420TransmitP$TXFIFO$write((uint8_t *)header, __nesc_ntoh_leuint8((unsigned char *)&header->length) - 1);
}

# 218 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420SpiImplP.nc"
static   cc2420_status_t CC2420SpiImplP$Reg$write(uint8_t addr, uint16_t data)
#line 218
{

  CC2420SpiImplP$SpiByte$write(addr);
  CC2420SpiImplP$SpiByte$write(data >> 8);
  return CC2420SpiImplP$SpiByte$write(data & 0xff);
}

# 129 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
static   uint8_t Atm128SpiP$SpiByte$write(uint8_t tx)
#line 129
{
  Atm128SpiP$Spi$write(tx);
  while (!(* (volatile uint8_t *)(0x0E + 0x20) & 0x80)) ;
  return Atm128SpiP$Spi$read();
}

#line 217
static   error_t Atm128SpiP$SpiPacket$send(uint8_t *writeBuf, 
uint8_t *readBuf, 
uint16_t bufLen)
#line 219
{
  uint8_t discard;

#line 221
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 221
    {
      Atm128SpiP$txBuffer = writeBuf;
      Atm128SpiP$rxBuffer = readBuf;
      Atm128SpiP$len = bufLen;
      Atm128SpiP$pos = 0;
    }
#line 226
    __nesc_atomic_end(__nesc_atomic); }

  discard = Atm128SpiP$Spi$read();

  return Atm128SpiP$sendNextPart();
}

#line 162
static error_t Atm128SpiP$sendNextPart(void)
#line 162
{
  uint16_t end;
  uint16_t tmpPos;
  uint8_t *tx;
  uint8_t *rx;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 168
    {
      tx = Atm128SpiP$txBuffer;
      rx = Atm128SpiP$rxBuffer;
      tmpPos = Atm128SpiP$pos;
      end = Atm128SpiP$pos + Atm128SpiP$SPI_ATOMIC_SIZE;
      end = end > Atm128SpiP$len ? Atm128SpiP$len : end;
    }
#line 174
    __nesc_atomic_end(__nesc_atomic); }

  for (; tmpPos < end - 1; tmpPos++) {
      uint8_t val;

#line 178
      if (tx != (void *)0) {
        val = Atm128SpiP$SpiByte$write(tx[tmpPos]);
        }
      else {
#line 181
        val = Atm128SpiP$SpiByte$write(0);
        }
      if (rx != (void *)0) {
          rx[tmpPos] = val;
        }
    }



  Atm128SpiP$Spi$enableInterrupt(TRUE);
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 191
    {
      if (tx != (void *)0) {
        Atm128SpiP$Spi$write(tx[tmpPos]);
        }
      else {
#line 195
        Atm128SpiP$Spi$write(0);
        }
      Atm128SpiP$pos = tmpPos;
    }
#line 198
    __nesc_atomic_end(__nesc_atomic); }


  return SUCCESS;
}

# 246 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420ReceiveP.nc"
static void CC2420ReceiveP$waitForNextPacket(void)
#line 246
{

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 248
    {
      if (CC2420ReceiveP$m_state == CC2420ReceiveP$S_STOPPED) {
        {
#line 250
          __nesc_atomic_end(__nesc_atomic); 
#line 250
          return;
        }
        }
#line 252
      if ((CC2420ReceiveP$m_missed_packets && CC2420ReceiveP$FIFO$get()) || !CC2420ReceiveP$FIFOP$get()) {
          if (CC2420ReceiveP$m_missed_packets) {
            CC2420ReceiveP$m_missed_packets--;
            }
#line 255
          CC2420ReceiveP$beginReceive();
        }
      else {
          CC2420ReceiveP$m_state = CC2420ReceiveP$S_STARTED;
          CC2420ReceiveP$m_missed_packets = 0;
        }
    }
#line 261
    __nesc_atomic_end(__nesc_atomic); }
}

#line 144
static void CC2420ReceiveP$beginReceive(void)
#line 144
{
  CC2420ReceiveP$m_state = CC2420ReceiveP$S_RX_HEADER;
  if (CC2420ReceiveP$SpiResource$immediateRequest() == SUCCESS) {
    CC2420ReceiveP$receive();
    }
  else {
#line 149
    CC2420ReceiveP$SpiResource$request();
    }
}




static void CC2420ReceiveP$receive(void)
#line 156
{
  CC2420ReceiveP$CSN$clr();
  CC2420ReceiveP$RXFIFO$beginRead((uint8_t *)CC2420ReceiveP$getHeader(CC2420ReceiveP$m_p_rx_buf), 1);
}

# 320 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420TransmitP.nc"
static void CC2420TransmitP$attemptSend(void)
#line 320
{

  uint8_t status;
  bool congestion = TRUE;

  CC2420TransmitP$CSN$clr();

  status = CC2420TransmitP$m_cca ? CC2420TransmitP$STXONCCA$strobe() : CC2420TransmitP$STXON$strobe();
  if (!(status & CC2420_STATUS_TX_ACTIVE)) {
      status = CC2420TransmitP$SNOP$strobe();
      if (status & CC2420_STATUS_TX_ACTIVE) {
        congestion = FALSE;
        }
    }
#line 333
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 333
    CC2420TransmitP$m_state = congestion ? CC2420TransmitP$S_SAMPLE_CCA : CC2420TransmitP$S_SFD;
#line 333
    __nesc_atomic_end(__nesc_atomic); }

  CC2420TransmitP$CSN$set();

  if (congestion) {
      CC2420TransmitP$releaseSpiResource();
      CC2420TransmitP$congestionBackoff();
    }
}

# 94 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420SpiImplP.nc"
static   error_t CC2420SpiImplP$Resource$release(uint8_t id)
#line 94
{
  uint8_t i;

#line 96
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 96
    {
      if (CC2420SpiImplP$m_holder != id) 
        {
          unsigned char __nesc_temp = 
#line 98
          FAIL;

          {
#line 98
            __nesc_atomic_end(__nesc_atomic); 
#line 98
            return __nesc_temp;
          }
        }
#line 99
      CC2420SpiImplP$m_holder = CC2420SpiImplP$NO_HOLDER;
      CC2420SpiImplP$SpiResource$release();
      if (!CC2420SpiImplP$m_requests) {
          CC2420SpiImplP$m_resource_busy = FALSE;
        }
      else {
          for (i = CC2420SpiImplP$m_holder + 1; ; i++) {
              if (i >= CC2420SpiImplP$RESOURCE_COUNT) {
                i = 0;
                }
#line 108
              if (CC2420SpiImplP$m_requests & (1 << i)) {
                  CC2420SpiImplP$m_holder = i;
                  CC2420SpiImplP$m_requests &= ~(1 << i);
                  CC2420SpiImplP$SpiResource$request();
                  {
                    unsigned char __nesc_temp = 
#line 112
                    SUCCESS;

                    {
#line 112
                      __nesc_atomic_end(__nesc_atomic); 
#line 112
                      return __nesc_temp;
                    }
                  }
                }
            }
        }
#line 116
      {
        unsigned char __nesc_temp = 
#line 116
        SUCCESS;

        {
#line 116
          __nesc_atomic_end(__nesc_atomic); 
#line 116
          return __nesc_temp;
        }
      }
    }
#line 119
    __nesc_atomic_end(__nesc_atomic); }
}

# 267 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420TransmitP.nc"
static void CC2420TransmitP$congestionBackoff(void)
#line 267
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 268
    {
      uint16_t time = CC2420TransmitP$CsmaBackoff$congestion(CC2420TransmitP$m_msg);

#line 270
      if (time) {
        CC2420TransmitP$startBackoffTimer(time * CC2420_BACKOFF_PERIOD);
        }
      else {
#line 273
        CC2420TransmitP$m_state = CC2420TransmitP$S_STARTED;
        }
    }
#line 275
    __nesc_atomic_end(__nesc_atomic); }
}

# 58 "/opt/tinyos-2.x/tos/system/RandomMlcgP.nc"
static   uint32_t RandomMlcgP$Random$rand32(void)
#line 58
{
  uint32_t mlcg;
#line 59
  uint32_t p;
#line 59
  uint32_t q;
  uint64_t tmpseed;

#line 61
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      tmpseed = (uint64_t )33614U * (uint64_t )RandomMlcgP$seed;
      q = tmpseed;
      q = q >> 1;
      p = tmpseed >> 32;
      mlcg = p + q;
      if (mlcg & 0x80000000) {
          mlcg = mlcg & 0x7FFFFFFF;
          mlcg++;
        }
      RandomMlcgP$seed = mlcg;
    }
#line 73
    __nesc_atomic_end(__nesc_atomic); }
  return mlcg;
}

# 136 "/opt/tinyos-2.x/tos/lib/timer/TransformAlarmC.nc"
static   void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$Alarm$startAt(/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$to_size_type t0, /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$to_size_type dt)
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$m_t0 = t0;
      /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$m_dt = dt;
      /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$set_alarm();
    }
#line 143
    __nesc_atomic_end(__nesc_atomic); }
}

#line 96
static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$set_alarm(void)
{
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$to_size_type now = /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$Counter$get();
#line 98
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$to_size_type expires;
#line 98
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$to_size_type remaining;




  expires = /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$m_t0 + /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$m_dt;


  remaining = (/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$to_size_type )(expires - now);


  if (/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$m_t0 <= now) 
    {
      if (expires >= /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$m_t0 && 
      expires <= now) {
        remaining = 0;
        }
    }
  else {
      if (expires >= /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$m_t0 || 
      expires <= now) {
        remaining = 0;
        }
    }
#line 121
  if (remaining > /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$MAX_DELAY) 
    {
      /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$m_t0 = now + /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$MAX_DELAY;
      /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$m_dt = remaining - /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$MAX_DELAY;
      remaining = /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$MAX_DELAY;
    }
  else 
    {
      /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$m_t0 += /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$m_dt;
      /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$m_dt = 0;
    }
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$AlarmFrom$startAt((/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$from_size_type )now << 0, 
  (/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$from_size_type )remaining << 0);
}

# 69 "/opt/tinyos-2.x/tos/lib/timer/TransformCounterC.nc"
static   /*Counter32khz32C.Transform32*/TransformCounterC$0$to_size_type /*Counter32khz32C.Transform32*/TransformCounterC$0$Counter$get(void)
{
  /*Counter32khz32C.Transform32*/TransformCounterC$0$to_size_type rv = 0;

#line 72
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      /*Counter32khz32C.Transform32*/TransformCounterC$0$upper_count_type high = /*Counter32khz32C.Transform32*/TransformCounterC$0$m_upper;
      /*Counter32khz32C.Transform32*/TransformCounterC$0$from_size_type low = /*Counter32khz32C.Transform32*/TransformCounterC$0$CounterFrom$get();

#line 76
      if (/*Counter32khz32C.Transform32*/TransformCounterC$0$CounterFrom$isOverflowPending()) 
        {






          high++;
          low = /*Counter32khz32C.Transform32*/TransformCounterC$0$CounterFrom$get();
        }
      {
        /*Counter32khz32C.Transform32*/TransformCounterC$0$to_size_type high_to = high;
        /*Counter32khz32C.Transform32*/TransformCounterC$0$to_size_type low_to = low >> /*Counter32khz32C.Transform32*/TransformCounterC$0$LOW_SHIFT_RIGHT;

#line 90
        rv = (high_to << /*Counter32khz32C.Transform32*/TransformCounterC$0$HIGH_SHIFT_LEFT) | low_to;
      }
    }
#line 92
    __nesc_atomic_end(__nesc_atomic); }
  return rv;
}

# 189 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420SpiImplP.nc"
static   cc2420_status_t CC2420SpiImplP$Ram$write(uint16_t addr, uint8_t offset, 
uint8_t *data, 
uint8_t len)
#line 191
{

  cc2420_status_t status = 0;

  addr += offset;

  CC2420SpiImplP$SpiByte$write(addr | 0x80);
  CC2420SpiImplP$SpiByte$write((addr >> 1) & 0xc0);
  for (; len; len--) 
    status = CC2420SpiImplP$SpiByte$write(* data++);

  return status;
}

# 132 "/opt/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$startTimer(uint8_t num, uint32_t t0, uint32_t dt, bool isoneshot)
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer_t *timer = &/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$m_timers[num];

#line 135
  timer->t0 = t0;
  timer->dt = dt;
  timer->isoneshot = isoneshot;
  timer->isrunning = TRUE;
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$updateFromTimer$postTask();
}

# 92 "/opt/tinyos-2.x/tos/lib/timer/TransformAlarmCounterC.nc"
static   /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$to_size_type /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$Counter$get(void)
{
  /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$to_size_type rv = 0;

#line 95
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$upper_count_type high = /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$m_upper;
      /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$from_size_type low = /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$CounterFrom$get();

#line 99
      if (/*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$CounterFrom$isOverflowPending()) 
        {






          high++;
          low = /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$CounterFrom$get();
        }
      {
        /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$to_size_type high_to = high;
        /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$to_size_type low_to = low >> /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$LOW_SHIFT_RIGHT;

#line 113
        rv = (high_to << /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$HIGH_SHIFT_LEFT) | low_to;
      }
    }
#line 115
    __nesc_atomic_end(__nesc_atomic); }
  return rv;
}

# 106 "/opt/tinyos-2.x/tos/system/ArbiterP.nc"
static   error_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$1$Resource$release(uint8_t id)
#line 106
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 107
    {
      if (/*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$1$state == /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$1$RES_BUSY && /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$1$resId == id) {
          if (/*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$1$Queue$isEmpty() == FALSE) {
              /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$1$reqResId = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$1$Queue$dequeue();
              /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$1$state = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$1$RES_GRANTING;
              /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$1$grantedTask$postTask();
            }
          else {
              /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$1$resId = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$1$CONTROLLER_ID;
              /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$1$state = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$1$RES_CONTROLLED;
              /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$1$ResourceController$granted();
            }
          /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$1$ResourceConfigure$unconfigure(id);
        }
    }
#line 121
    __nesc_atomic_end(__nesc_atomic); }
  return FAIL;
}

# 62 "/opt/tinyos-2.x/tos/system/RoundRobinResourceQueueC.nc"
static   bool /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC$0$RoundRobinQueue$isEnqueued(resource_client_id_t id)
#line 62
{
  return /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC$0$resQ[id / 8] & (1 << id % 8);
}

# 180 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static  void *CC2420ActiveMessageP$Packet$getPayload(message_t *msg, uint8_t *len)
#line 180
{
  if (len != (void *)0) {
      *len = CC2420ActiveMessageP$Packet$payloadLength(msg);
    }
  return msg->data;
}

# 45 "/opt/tinyos-2.x/tos/system/AMQueueEntryP.nc"
static  error_t /*MotionDetectorC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$0$AMSend$send(am_addr_t dest, 
message_t *msg, 
uint8_t len)
#line 47
{
  /*MotionDetectorC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$0$AMPacket$setDestination(msg, dest);
  /*MotionDetectorC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$0$AMPacket$setType(msg, 9);
  return /*MotionDetectorC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$0$Send$send(msg, len);
}

# 62 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
static  void MotionDetectorM$PirTimer$startOneShot(uint32_t arg_0x7ee62ca8){
#line 62
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startOneShot(4U, arg_0x7ee62ca8);
#line 62
}
#line 62
# 75 "/opt/tinyos-2.x/tos/system/ArbiterP.nc"
static   error_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$1$Resource$request(uint8_t id)
#line 75
{
  /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$1$ResourceRequested$requested(/*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$1$resId);
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 77
    {
      if (/*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$1$state == /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$1$RES_CONTROLLED) {
          /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$1$state = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$1$RES_GRANTING;
          /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$1$reqResId = id;
        }
      else {
          unsigned char __nesc_temp = 
#line 82
          /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$1$Queue$enqueue(id);

          {
#line 82
            __nesc_atomic_end(__nesc_atomic); 
#line 82
            return __nesc_temp;
          }
        }
    }
#line 85
    __nesc_atomic_end(__nesc_atomic); }
#line 84
  /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$1$ResourceController$requested();
  return SUCCESS;
}

#line 75
static   error_t /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP$0$Resource$request(uint8_t id)
#line 75
{
  /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP$0$ResourceRequested$requested(/*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP$0$resId);
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 77
    {
      if (/*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP$0$state == /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP$0$RES_CONTROLLED) {
          /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP$0$state = /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP$0$RES_GRANTING;
          /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP$0$reqResId = id;
        }
      else {
          unsigned char __nesc_temp = 
#line 82
          /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP$0$Queue$enqueue(id);

          {
#line 82
            __nesc_atomic_end(__nesc_atomic); 
#line 82
            return __nesc_temp;
          }
        }
    }
#line 85
    __nesc_atomic_end(__nesc_atomic); }
#line 84
  /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP$0$ResourceController$requested();
  return SUCCESS;
}

# 82 "/opt/tinyos-2.x/tos/chips/atm128/adc/AdcP.nc"
static void AdcP$sample(void)
#line 82
{
  AdcP$Atm128AdcSingle$getData(AdcP$channel(), AdcP$refVoltage(), TRUE, AdcP$prescaler());
}

# 62 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
static  void HplSensirionSht11P$Timer$startOneShot(uint32_t arg_0x7ee62ca8){
#line 62
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startOneShot(1U, arg_0x7ee62ca8);
#line 62
}
#line 62
# 149 "/opt/tinyos-2.x/tos/sensorboards/homenet_sensor/sht11/SensirionSht11LogicP.nc"
static error_t /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$performCommand(void)
#line 149
{

  /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$initPins();
  /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$resetDevice();
  /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$transmissionStart();
  /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$cmd &= 0x1F;
  /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$sendCommand(/*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$cmd);

  if (/*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$waitForResponse() != SUCCESS) {
      /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$busy = FALSE;
      return FAIL;
    }

  switch (/*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$cmd) {

      case /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$CMD_SOFT_RESET: 
        /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$Timer$startOneShot(/*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$TIMEOUT_RESET);
      break;

      case /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$CMD_MEASURE_TEMPERATURE: 
        /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$enableInterrupt();

      if (/*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$status & SHT11_STATUS_LOW_RES_BIT) {
          /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$Timer$startOneShot(/*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$TIMEOUT_12BIT);
        }
      else 
#line 173
        {
          /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$Timer$startOneShot(/*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$TIMEOUT_14BIT);
        }

      break;

      case /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$CMD_MEASURE_HUMIDITY: 
        /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$enableInterrupt();

      if (/*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$status & SHT11_STATUS_LOW_RES_BIT) {
          /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$Timer$startOneShot(/*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$TIMEOUT_8BIT);
        }
      else 
#line 184
        {
          /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$Timer$startOneShot(/*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$TIMEOUT_12BIT);
        }

      break;

      case /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$CMD_READ_STATUS: 
        {
          uint8_t tempStatus;
          uint8_t crc;

          tempStatus = /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$readByte();
          crc = /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$readByte();
          /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$endTransmission();

          /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$status = tempStatus;

          /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$signalStatusDone$postTask();
        }

      case /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$CMD_WRITE_STATUS: 
        /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$writeByte(/*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$newStatus);

      if (/*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$waitForResponse() != SUCCESS) {
          /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$writeFail = TRUE;
        }
      else 
#line 209
        {
          /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$status = /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$newStatus;
        }

      /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$signalStatusDone$postTask();
    }


  return SUCCESS;
}

#line 255
static void /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$writeByte(uint8_t byte)
#line 255
{
  uint8_t i;

#line 257
  for (i = 0; i < 8; i++) {
      if (byte & 0x80) {
        /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$DATA$set();
        }
      else {
#line 261
        /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$DATA$clr();
        }
#line 262
      byte = byte << 1;
      /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$CLOCK$set();
      /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$CLOCK$clr();
    }
}

static error_t /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$waitForResponse(void)
#line 268
{
  /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$DATA$makeInput();
  /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$DATA$set();
  /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$CLOCK$set();
  if (/*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$DATA$get()) {


      return FAIL;
    }
  /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$CLOCK$clr();
  return SUCCESS;
}

# 62 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
static  void /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$Timer$startOneShot(uint32_t arg_0x7ee62ca8){
#line 62
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startOneShot(2U, arg_0x7ee62ca8);
#line 62
}
#line 62
# 15 "/opt/tinyos-2.x/tos/chips/atm128/pins/Atm128GpioInterruptC.nc"
static error_t /*HplSensirionSht11C.InterruptDATAC*/Atm128GpioInterruptC$0$enable(bool rising)
#line 15
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 16
    {
      /*HplSensirionSht11C.InterruptDATAC*/Atm128GpioInterruptC$0$Atm128Interrupt$disable();
      /*HplSensirionSht11C.InterruptDATAC*/Atm128GpioInterruptC$0$Atm128Interrupt$clear();
      /*HplSensirionSht11C.InterruptDATAC*/Atm128GpioInterruptC$0$Atm128Interrupt$edge(rising);
      /*HplSensirionSht11C.InterruptDATAC*/Atm128GpioInterruptC$0$Atm128Interrupt$enable();
    }
#line 21
    __nesc_atomic_end(__nesc_atomic); }
  return SUCCESS;
}

# 355 "/opt/tinyos-2.x/tos/sensorboards/homenet_sensor/sht11/SensirionSht11LogicP.nc"
static uint8_t /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$readByte(void)
#line 355
{
  uint8_t byte = 0;
  uint8_t i;

  for (i = 0; i < 8; i++) {
      /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$CLOCK$set();
      if (/*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$DATA$get()) {
        byte |= 1;
        }
#line 363
      if (i != 7) {
        byte = byte << 1;
        }
#line 365
      /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$CLOCK$clr();
    }

  /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$ack();
  return byte;
}










static void /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$endTransmission(void)
#line 381
{
  /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$DATA$makeOutput();
  /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$DATA$set();
  /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$CLOCK$set();
  /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$CLOCK$clr();
}

# 106 "/opt/tinyos-2.x/tos/system/ArbiterP.nc"
static   error_t /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP$0$Resource$release(uint8_t id)
#line 106
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 107
    {
      if (/*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP$0$state == /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP$0$RES_BUSY && /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP$0$resId == id) {
          if (/*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP$0$Queue$isEmpty() == FALSE) {
              /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP$0$reqResId = /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP$0$Queue$dequeue();
              /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP$0$state = /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP$0$RES_GRANTING;
              /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP$0$grantedTask$postTask();
            }
          else {
              /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP$0$resId = /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP$0$CONTROLLER_ID;
              /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP$0$state = /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP$0$RES_CONTROLLED;
              /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP$0$ResourceController$granted();
            }
          /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP$0$ResourceConfigure$unconfigure(id);
        }
    }
#line 121
    __nesc_atomic_end(__nesc_atomic); }
  return FAIL;
}

# 70 "MotionDetectorM.nc"
static  void MotionDetectorM$Read_Humi$readDone(error_t err, uint16_t val)
#line 70
{
  if (err == SUCCESS && MotionDetectorM$Raw_Temp != 0xFFFF) {
      MotionDetectorM$Raw_Humi = val;
      MotionDetectorM$calc_SHT_(MotionDetectorM$Raw_Humi, MotionDetectorM$Raw_Temp);
    }
  MotionDetectorM$Read_Voltage$read();
}

# 66 "/opt/tinyos-2.x/tos/sensorboards/homenet_sensor/sht11/SensirionSht11ReaderP.nc"
static  void /*MotionDetectorC.SensirionSht11C.SensirionSht11ReaderP*/SensirionSht11ReaderP$0$Sht11Temp$measureTemperatureDone(error_t result, uint16_t val)
#line 66
{
  /*MotionDetectorC.SensirionSht11C.SensirionSht11ReaderP*/SensirionSht11ReaderP$0$TempResource$release();
  /*MotionDetectorC.SensirionSht11C.SensirionSht11ReaderP*/SensirionSht11ReaderP$0$Temperature$readDone(result, val);
}

# 62 "/opt/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$fireTimers(uint32_t now)
{
  uint8_t num;

  for (num = 0; num < /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$NUM_TIMERS; num++) 
    {
      /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer_t *timer = &/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$m_timers[num];

      if (timer->isrunning) 
        {
          uint32_t elapsed = now - timer->t0;

          if (elapsed >= timer->dt) 
            {
              if (timer->isoneshot) {
                timer->isrunning = FALSE;
                }
              else {
#line 79
                timer->t0 += timer->dt;
                }
              /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$fired(num);
            }
        }
    }
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$updateFromTimer$postTask();
}

# 42 "/opt/tinyos-2.x/tos/chips/atm128/timer/Atm128GpioCaptureC.nc"
static error_t /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC$0$enableCapture(uint8_t mode)
#line 42
{
  /* atomic removed: atomic calls only */
#line 43
  {
    /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC$0$Atm128Capture$stop();
    /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC$0$Atm128Capture$reset();
    /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC$0$Atm128Capture$setEdge(mode);
    /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC$0$Atm128Capture$start();
  }
  return SUCCESS;
}

# 100 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420ReceiveP.nc"
static void CC2420ReceiveP$reset_state(void)
#line 100
{
  CC2420ReceiveP$m_bytes_left = CC2420ReceiveP$RXFIFO_SIZE;
  CC2420ReceiveP$m_timestamp_head = CC2420ReceiveP$m_timestamp_size = 0;
  CC2420ReceiveP$m_missed_packets = 0;
}

# 221 "/opt/tinyos-2.x/tos/lib/timer/TransformAlarmCounterC.nc"
static   void /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$Alarm$startAt(/*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$to_size_type t0, /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$to_size_type dt)
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$m_t0 = t0;
      /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$m_dt = dt;
      /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$set_alarm();
    }
#line 228
    __nesc_atomic_end(__nesc_atomic); }
}

#line 178
static void /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$set_alarm(void)
{
  /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$to_size_type now = /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$Counter$get();
#line 180
  /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$to_size_type elapsed = now - /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$m_t0;
#line 180
  /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$to_size_type remaining;

  /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$m_skip_overflows = 0;
  if (elapsed >= /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$m_dt) 
    {
      remaining = 0;
      /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$m_t0 += /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$m_dt;
      /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$m_dt = 0;
    }
  else 
    {
      remaining = /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$m_dt - elapsed;




      if (remaining > /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$MAX_DELAY * 2) 
        {
          if (remaining >= /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$MAX_DELAY * 2 * (/*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$to_size_type )256) {
            /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$m_skip_overflows = 255;
            }
          else {
#line 201
            /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$m_skip_overflows = remaining / (/*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$MAX_DELAY * 2);
            }
#line 202
          return;
        }

      if (remaining > /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$MAX_DELAY) 
        {
          /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$m_t0 = now + /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$MAX_DELAY;
          /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$m_dt = remaining - /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$MAX_DELAY;
          remaining = /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$MAX_DELAY;
        }
      else 
        {
          /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$m_t0 += /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$m_dt;
          /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$m_dt = 0;
        }
    }
  /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$AlarmFrom$startAt((/*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$from_size_type )now << 0, 
  (/*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$from_size_type )remaining << 0);
}

# 161 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer0AsyncC.nc"
__attribute((signal))   void __vector_15(void)
#line 161
{
  HplAtm128Timer0AsyncC$stabiliseTimer0();
  HplAtm128Timer0AsyncC$Compare$fired();
}

#line 154
static void HplAtm128Timer0AsyncC$stabiliseTimer0(void)
#line 154
{
  * (volatile uint8_t *)(0x33 + 0x20) = * (volatile uint8_t *)(0x33 + 0x20);
  while (* (volatile uint8_t *)(0x30 + 0x20) & (1 << 0)) 
    ;
}








__attribute((signal))   void __vector_16(void)
#line 167
{
  HplAtm128Timer0AsyncC$stabiliseTimer0();
  HplAtm128Timer0AsyncC$Timer$overflow();
}

# 46 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptSigP.nc"
__attribute((signal))   void __vector_1(void)
#line 46
{
  HplAtm128InterruptSigP$IntSig0$fired();
}


__attribute((signal))   void __vector_2(void)
#line 51
{
  HplAtm128InterruptSigP$IntSig1$fired();
}


__attribute((signal))   void __vector_3(void)
#line 56
{
  HplAtm128InterruptSigP$IntSig2$fired();
}


__attribute((signal))   void __vector_4(void)
#line 61
{
  HplAtm128InterruptSigP$IntSig3$fired();
}


__attribute((signal))   void __vector_5(void)
#line 66
{
  HplAtm128InterruptSigP$IntSig4$fired();
}


__attribute((signal))   void __vector_6(void)
#line 71
{
  HplAtm128InterruptSigP$IntSig5$fired();
}


__attribute((signal))   void __vector_7(void)
#line 76
{
  HplAtm128InterruptSigP$IntSig6$fired();
}


__attribute((signal))   void __vector_8(void)
#line 81
{
  HplAtm128InterruptSigP$IntSig7$fired();
}

# 101 "/opt/tinyos-2.x/tos/chips/atm128/adc/HplAtm128AdcP.nc"
__attribute((signal))   void __vector_21(void)
#line 101
{
  uint16_t data = HplAtm128AdcP$HplAtm128Adc$getValue();

  __nesc_enable_interrupt();
  HplAtm128AdcP$HplAtm128Adc$dataReady(data);
}

# 195 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer1P.nc"
__attribute((interrupt))   void __vector_12(void)
#line 195
{
  HplAtm128Timer1P$CompareA$fired();
}

__attribute((interrupt))   void __vector_13(void)
#line 199
{
  HplAtm128Timer1P$CompareB$fired();
}

__attribute((interrupt))   void __vector_24(void)
#line 203
{
  HplAtm128Timer1P$CompareC$fired();
}

__attribute((interrupt))   void __vector_11(void)
#line 207
{
  HplAtm128Timer1P$Capture$captured(HplAtm128Timer1P$Timer$get());
}

__attribute((interrupt))   void __vector_14(void)
#line 211
{
  HplAtm128Timer1P$Timer$overflow();
}

# 103 "/opt/tinyos-2.x/tos/chips/atm128/spi/HplAtm128SpiP.nc"
__attribute((signal))   void __vector_17(void)
#line 103
{
  HplAtm128SpiP$SPI$dataReady(HplAtm128SpiP$SPI$read());
}

