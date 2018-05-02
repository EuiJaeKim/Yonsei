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






static __inline uint16_t __nesc_ntoh_uint16(const void *source);




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
# 69 "/usr/lib/gcc/avr/3.4.3/../../../../avr/include/string.h"
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
# 6 "/opt/tinyos-2.x/tos/types/AM.h"
typedef nx_uint8_t nx_am_id_t;
typedef nx_uint8_t nx_am_group_t;
typedef nx_uint16_t nx_am_addr_t;

typedef uint8_t am_id_t;
typedef uint8_t am_group_t;
typedef uint16_t am_addr_t;

enum __nesc_unnamed4296 {
  AM_BROADCAST_ADDR = 0xffff
};









enum __nesc_unnamed4297 {
  TOS_AM_GROUP = 50, 
  TOS_AM_ADDRESS = 1
};
# 72 "/opt/tinyos-2.x/tos/lib/serial/Serial.h"
typedef uint8_t uart_id_t;



enum __nesc_unnamed4298 {
  HDLC_FLAG_BYTE = 0x7e, 
  HDLC_CTLESC_BYTE = 0x7d
};



enum __nesc_unnamed4299 {
  TOS_SERIAL_ACTIVE_MESSAGE_ID = 0, 
  TOS_SERIAL_CC1000_ID = 1, 
  TOS_SERIAL_802_15_4_ID = 2, 
  TOS_SERIAL_UNKNOWN_ID = 255
};


enum __nesc_unnamed4300 {
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
enum __nesc_unnamed4301 {

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
# 30 "/opt/tinyos-2.x/tos/types/Leds.h"
enum __nesc_unnamed4302 {
  LEDS_LED0 = 1 << 0, 
  LEDS_LED1 = 1 << 1, 
  LEDS_LED2 = 1 << 2, 
  LEDS_LED3 = 1 << 3, 
  LEDS_LED4 = 1 << 4, 
  LEDS_LED5 = 1 << 5, 
  LEDS_LED6 = 1 << 6, 
  LEDS_LED7 = 1 << 7
};
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
enum __nesc_unnamed4303 {
  ATM128_SPI_CLK_DIVIDE_4 = 0, 
  ATM128_SPI_CLK_DIVIDE_16 = 1, 
  ATM128_SPI_CLK_DIVIDE_64 = 2, 
  ATM128_SPI_CLK_DIVIDE_128 = 3
};
#line 49
#line 40
typedef struct __nesc_unnamed4304 {
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
typedef union __nesc_unnamed4305 {
  uint8_t flat;
  Atm128SPIControl_s bits;
} Atm128SPIControl_t;

typedef Atm128SPIControl_t Atm128_SPCR_t;








#line 58
typedef struct __nesc_unnamed4306 {
  uint8_t spif : 1;
  uint8_t wcol : 1;
  uint8_t rsvd : 5;
  uint8_t spi2x : 1;
} 
Atm128SPIStatus_s;



#line 65
typedef union __nesc_unnamed4307 {
  uint8_t flat;
  Atm128SPIStatus_s bits;
} Atm128SPIStatus_t;

typedef Atm128SPIStatus_t Atm128_SPSR_t;

typedef uint8_t Atm128_SPDR_t;
# 33 "/opt/tinyos-2.x/tos/types/Resource.h"
typedef uint8_t resource_client_id_t;
# 39 "/opt/tinyos-2.x/tos/chips/atm128/crc.h"
uint16_t crcTable[256] __attribute((__progmem__))  = { 
0x0000, 0x1021, 0x2042, 0x3063, 0x4084, 0x50a5, 0x60c6, 0x70e7, 
0x8108, 0x9129, 0xa14a, 0xb16b, 0xc18c, 0xd1ad, 0xe1ce, 0xf1ef, 
0x1231, 0x0210, 0x3273, 0x2252, 0x52b5, 0x4294, 0x72f7, 0x62d6, 
0x9339, 0x8318, 0xb37b, 0xa35a, 0xd3bd, 0xc39c, 0xf3ff, 0xe3de, 
0x2462, 0x3443, 0x0420, 0x1401, 0x64e6, 0x74c7, 0x44a4, 0x5485, 
0xa56a, 0xb54b, 0x8528, 0x9509, 0xe5ee, 0xf5cf, 0xc5ac, 0xd58d, 
0x3653, 0x2672, 0x1611, 0x0630, 0x76d7, 0x66f6, 0x5695, 0x46b4, 
0xb75b, 0xa77a, 0x9719, 0x8738, 0xf7df, 0xe7fe, 0xd79d, 0xc7bc, 
0x48c4, 0x58e5, 0x6886, 0x78a7, 0x0840, 0x1861, 0x2802, 0x3823, 
0xc9cc, 0xd9ed, 0xe98e, 0xf9af, 0x8948, 0x9969, 0xa90a, 0xb92b, 
0x5af5, 0x4ad4, 0x7ab7, 0x6a96, 0x1a71, 0x0a50, 0x3a33, 0x2a12, 
0xdbfd, 0xcbdc, 0xfbbf, 0xeb9e, 0x9b79, 0x8b58, 0xbb3b, 0xab1a, 
0x6ca6, 0x7c87, 0x4ce4, 0x5cc5, 0x2c22, 0x3c03, 0x0c60, 0x1c41, 
0xedae, 0xfd8f, 0xcdec, 0xddcd, 0xad2a, 0xbd0b, 0x8d68, 0x9d49, 
0x7e97, 0x6eb6, 0x5ed5, 0x4ef4, 0x3e13, 0x2e32, 0x1e51, 0x0e70, 
0xff9f, 0xefbe, 0xdfdd, 0xcffc, 0xbf1b, 0xaf3a, 0x9f59, 0x8f78, 
0x9188, 0x81a9, 0xb1ca, 0xa1eb, 0xd10c, 0xc12d, 0xf14e, 0xe16f, 
0x1080, 0x00a1, 0x30c2, 0x20e3, 0x5004, 0x4025, 0x7046, 0x6067, 
0x83b9, 0x9398, 0xa3fb, 0xb3da, 0xc33d, 0xd31c, 0xe37f, 0xf35e, 
0x02b1, 0x1290, 0x22f3, 0x32d2, 0x4235, 0x5214, 0x6277, 0x7256, 
0xb5ea, 0xa5cb, 0x95a8, 0x8589, 0xf56e, 0xe54f, 0xd52c, 0xc50d, 
0x34e2, 0x24c3, 0x14a0, 0x0481, 0x7466, 0x6447, 0x5424, 0x4405, 
0xa7db, 0xb7fa, 0x8799, 0x97b8, 0xe75f, 0xf77e, 0xc71d, 0xd73c, 
0x26d3, 0x36f2, 0x0691, 0x16b0, 0x6657, 0x7676, 0x4615, 0x5634, 
0xd94c, 0xc96d, 0xf90e, 0xe92f, 0x99c8, 0x89e9, 0xb98a, 0xa9ab, 
0x5844, 0x4865, 0x7806, 0x6827, 0x18c0, 0x08e1, 0x3882, 0x28a3, 
0xcb7d, 0xdb5c, 0xeb3f, 0xfb1e, 0x8bf9, 0x9bd8, 0xabbb, 0xbb9a, 
0x4a75, 0x5a54, 0x6a37, 0x7a16, 0x0af1, 0x1ad0, 0x2ab3, 0x3a92, 
0xfd2e, 0xed0f, 0xdd6c, 0xcd4d, 0xbdaa, 0xad8b, 0x9de8, 0x8dc9, 
0x7c26, 0x6c07, 0x5c64, 0x4c45, 0x3ca2, 0x2c83, 0x1ce0, 0x0cc1, 
0xef1f, 0xff3e, 0xcf5d, 0xdf7c, 0xaf9b, 0xbfba, 0x8fd9, 0x9ff8, 
0x6e17, 0x7e36, 0x4e55, 0x5e74, 0x2e93, 0x3eb2, 0x0ed1, 0x1ef0 };









static uint16_t crcByte(uint16_t oldCrc, uint8_t byte) __attribute((noinline)) ;
# 32 "/opt/tinyos-2.x/tos/chips/atm128/Atm128Uart.h"
typedef uint8_t Atm128_UDR0_t;
typedef uint8_t Atm128_UDR1_t;
#line 48
#line 36
typedef union __nesc_unnamed4308 {
  struct Atm128_UCSRA_t {
    uint8_t mpcm : 1;
    uint8_t u2x : 1;
    uint8_t upe : 1;
    uint8_t dor : 1;
    uint8_t fe : 1;
    uint8_t udre : 1;
    uint8_t txc : 1;
    uint8_t rxc : 1;
  } bits;
  uint8_t flat;
} Atm128UartStatus_t;

typedef Atm128UartStatus_t Atm128_UCSR0A_t;
typedef Atm128UartStatus_t Atm128_UCSR1A_t;
#line 66
#line 54
typedef union __nesc_unnamed4309 {
  struct Atm128_UCSRB_t {
    uint8_t txb8 : 1;
    uint8_t rxb8 : 1;
    uint8_t ucsz2 : 1;
    uint8_t txen : 1;
    uint8_t rxen : 1;
    uint8_t udrie : 1;
    uint8_t txcie : 1;
    uint8_t rxcie : 1;
  } bits;
  uint8_t flat;
} Atm128UartControl_t;

typedef Atm128UartControl_t Atm128_UCSR0B_t;
typedef Atm128UartControl_t Atm128_UCSR1B_t;

enum __nesc_unnamed4310 {
  ATM128_UART_DATA_SIZE_5_BITS = 0, 
  ATM128_UART_DATA_SIZE_6_BITS = 1, 
  ATM128_UART_DATA_SIZE_7_BITS = 2, 
  ATM128_UART_DATA_SIZE_8_BITS = 3
};
#line 89
#line 79
typedef union __nesc_unnamed4311 {
  uint8_t flat;
  struct Atm128_UCSRC_t {
    uint8_t ucpol : 1;
    uint8_t ucsz : 2;
    uint8_t usbs : 1;
    uint8_t upm : 2;
    uint8_t umsel : 1;
    uint8_t rsvd : 1;
  } bits;
} Atm128UartMode_t;

typedef Atm128UartMode_t Atm128_UCSR0C_t;
typedef Atm128UartMode_t Atm128_UCSR1C_t;





enum __nesc_unnamed4312 {
  ATM128_19200_BAUD_4MHZ = 12, 
  ATM128_38400_BAUD_4MHZ = 6, 
  ATM128_57600_BAUD_4MHZ = 3, 

  ATM128_19200_BAUD_4MHZ_2X = 25, 
  ATM128_38400_BAUD_4MHZ_2X = 12, 
  ATM128_57600_BAUD_4MHZ_2X = 8, 

  ATM128_19200_BAUD_7MHZ = 23, 
  ATM128_38400_BAUD_7MHZ = 11, 
  ATM128_57600_BAUD_7MHZ = 7, 

  ATM128_19200_BAUD_7MHZ_2X = 47, 
  ATM128_38400_BAUD_7MHZ_2X = 23, 
  ATM128_57600_BAUD_7MHZ_2X = 15, 

  ATM128_19200_BAUD_8MHZ = 25, 
  ATM128_38400_BAUD_8MHZ = 12, 
  ATM128_57600_BAUD_8MHZ = 8, 

  ATM128_19200_BAUD_8MHZ_2X = 51, 
  ATM128_38400_BAUD_8MHZ_2X = 34, 
  ATM128_57600_BAUD_8MHZ_2X = 11
};

typedef uint8_t Atm128_UBRR0L_t;
typedef uint8_t Atm128_UBRR0H_t;

typedef uint8_t Atm128_UBRR1L_t;
typedef uint8_t Atm128_UBRR1H_t;
typedef T32khz CC2420ControlP$StartupTimer$precision_tag;
typedef uint32_t CC2420ControlP$StartupTimer$size_type;
typedef uint8_t HplAtm128Timer0AsyncC$Compare$size_type;
typedef uint8_t HplAtm128Timer0AsyncC$Timer$timer_size;
typedef uint16_t HplAtm128Timer1P$CompareA$size_type;
typedef uint16_t HplAtm128Timer1P$Capture$size_type;
typedef uint16_t HplAtm128Timer1P$CompareB$size_type;
typedef uint16_t HplAtm128Timer1P$CompareC$size_type;
typedef uint16_t HplAtm128Timer1P$Timer$timer_size;
typedef uint16_t /*InitOneP.InitOne*/Atm128TimerInitC$0$timer_size;
typedef /*InitOneP.InitOne*/Atm128TimerInitC$0$timer_size /*InitOneP.InitOne*/Atm128TimerInitC$0$Timer$timer_size;
typedef TOne /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$1$frequency_tag;
typedef uint16_t /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$1$timer_size;
typedef /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$1$frequency_tag /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$1$Alarm$precision_tag;
typedef /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$1$timer_size /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$1$Alarm$size_type;
typedef /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$1$timer_size /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$1$HplAtm128Compare$size_type;
typedef /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$1$timer_size /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$1$HplAtm128Timer$timer_size;
enum /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16*/AlarmOne16C$0$__nesc_unnamed4313 {
  AlarmOne16C$0$COMPARE_ID = 0U
};
typedef TOne /*CounterOne16C.NCounter*/Atm128CounterC$0$frequency_tag;
typedef uint16_t /*CounterOne16C.NCounter*/Atm128CounterC$0$timer_size;
typedef /*CounterOne16C.NCounter*/Atm128CounterC$0$frequency_tag /*CounterOne16C.NCounter*/Atm128CounterC$0$Counter$precision_tag;
typedef /*CounterOne16C.NCounter*/Atm128CounterC$0$timer_size /*CounterOne16C.NCounter*/Atm128CounterC$0$Counter$size_type;
typedef /*CounterOne16C.NCounter*/Atm128CounterC$0$timer_size /*CounterOne16C.NCounter*/Atm128CounterC$0$Timer$timer_size;
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
enum HilTimerMilliC$__nesc_unnamed4314 {
  HilTimerMilliC$TIMER_COUNT = 1U
};
typedef uint8_t /*AlarmCounterMilliP.MilliInit*/Atm128TimerInitC$1$timer_size;
typedef /*AlarmCounterMilliP.MilliInit*/Atm128TimerInitC$1$timer_size /*AlarmCounterMilliP.MilliInit*/Atm128TimerInitC$1$Timer$timer_size;
typedef TMilli /*AlarmCounterMilliP.MilliAlarm*/Atm128AlarmC$0$frequency_tag;
typedef uint8_t /*AlarmCounterMilliP.MilliAlarm*/Atm128AlarmC$0$timer_size;
typedef /*AlarmCounterMilliP.MilliAlarm*/Atm128AlarmC$0$frequency_tag /*AlarmCounterMilliP.MilliAlarm*/Atm128AlarmC$0$Alarm$precision_tag;
typedef /*AlarmCounterMilliP.MilliAlarm*/Atm128AlarmC$0$timer_size /*AlarmCounterMilliP.MilliAlarm*/Atm128AlarmC$0$Alarm$size_type;
typedef /*AlarmCounterMilliP.MilliAlarm*/Atm128AlarmC$0$timer_size /*AlarmCounterMilliP.MilliAlarm*/Atm128AlarmC$0$HplAtm128Compare$size_type;
typedef /*AlarmCounterMilliP.MilliAlarm*/Atm128AlarmC$0$timer_size /*AlarmCounterMilliP.MilliAlarm*/Atm128AlarmC$0$HplAtm128Timer$timer_size;
typedef TMilli /*AlarmCounterMilliP.MilliCounter*/Atm128CounterC$1$frequency_tag;
typedef uint8_t /*AlarmCounterMilliP.MilliCounter*/Atm128CounterC$1$timer_size;
typedef /*AlarmCounterMilliP.MilliCounter*/Atm128CounterC$1$frequency_tag /*AlarmCounterMilliP.MilliCounter*/Atm128CounterC$1$Counter$precision_tag;
typedef /*AlarmCounterMilliP.MilliCounter*/Atm128CounterC$1$timer_size /*AlarmCounterMilliP.MilliCounter*/Atm128CounterC$1$Counter$size_type;
typedef /*AlarmCounterMilliP.MilliCounter*/Atm128CounterC$1$timer_size /*AlarmCounterMilliP.MilliCounter*/Atm128CounterC$1$Timer$timer_size;
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
enum /*CC2420ControlC.Spi*/CC2420SpiC$0$__nesc_unnamed4315 {
  CC2420SpiC$0$CLIENT_ID = 0U
};
enum /*CC2420ControlC.SyncSpiC*/CC2420SpiC$1$__nesc_unnamed4316 {
  CC2420SpiC$1$CLIENT_ID = 1U
};
typedef T32khz CC2420TransmitP$BackoffTimer$precision_tag;
typedef uint32_t CC2420TransmitP$BackoffTimer$size_type;
enum /*CC2420TransmitC.Spi*/CC2420SpiC$2$__nesc_unnamed4317 {
  CC2420SpiC$2$CLIENT_ID = 2U
};
enum /*CC2420ReceiveC.Spi*/CC2420SpiC$3$__nesc_unnamed4318 {
  CC2420SpiC$3$CLIENT_ID = 3U
};
typedef uint16_t RandomMlcgP$SeedInit$parameter;
typedef TMicro /*Atm128Uart0C.UartP*/Atm128UartP$0$Counter$precision_tag;
typedef uint32_t /*Atm128Uart0C.UartP*/Atm128UartP$0$Counter$size_type;
typedef uint16_t HplAtm128Timer3P$CompareA$size_type;
typedef uint16_t HplAtm128Timer3P$Capture$size_type;
typedef uint16_t HplAtm128Timer3P$CompareB$size_type;
typedef uint16_t HplAtm128Timer3P$CompareC$size_type;
typedef uint16_t HplAtm128Timer3P$Timer$timer_size;
typedef uint16_t /*InitThreeP.InitThree*/Atm128TimerInitC$2$timer_size;
typedef /*InitThreeP.InitThree*/Atm128TimerInitC$2$timer_size /*InitThreeP.InitThree*/Atm128TimerInitC$2$Timer$timer_size;
typedef TThree /*CounterThree16C.NCounter*/Atm128CounterC$2$frequency_tag;
typedef uint16_t /*CounterThree16C.NCounter*/Atm128CounterC$2$timer_size;
typedef /*CounterThree16C.NCounter*/Atm128CounterC$2$frequency_tag /*CounterThree16C.NCounter*/Atm128CounterC$2$Counter$precision_tag;
typedef /*CounterThree16C.NCounter*/Atm128CounterC$2$timer_size /*CounterThree16C.NCounter*/Atm128CounterC$2$Counter$size_type;
typedef /*CounterThree16C.NCounter*/Atm128CounterC$2$timer_size /*CounterThree16C.NCounter*/Atm128CounterC$2$Timer$timer_size;
typedef TMicro /*CounterMicro32C.Transform32*/TransformCounterC$1$to_precision_tag;
typedef uint32_t /*CounterMicro32C.Transform32*/TransformCounterC$1$to_size_type;
typedef TThree /*CounterMicro32C.Transform32*/TransformCounterC$1$from_precision_tag;
typedef uint16_t /*CounterMicro32C.Transform32*/TransformCounterC$1$from_size_type;
typedef counter_three_overflow_t /*CounterMicro32C.Transform32*/TransformCounterC$1$upper_count_type;
typedef /*CounterMicro32C.Transform32*/TransformCounterC$1$from_precision_tag /*CounterMicro32C.Transform32*/TransformCounterC$1$CounterFrom$precision_tag;
typedef /*CounterMicro32C.Transform32*/TransformCounterC$1$from_size_type /*CounterMicro32C.Transform32*/TransformCounterC$1$CounterFrom$size_type;
typedef /*CounterMicro32C.Transform32*/TransformCounterC$1$to_precision_tag /*CounterMicro32C.Transform32*/TransformCounterC$1$Counter$precision_tag;
typedef /*CounterMicro32C.Transform32*/TransformCounterC$1$to_size_type /*CounterMicro32C.Transform32*/TransformCounterC$1$Counter$size_type;
# 51 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static  error_t PlatformP$Init$init(void);
#line 51
static  error_t MotePlatformP$PlatformInit$init(void);
#line 51
static  error_t MeasureClockC$Init$init(void);
# 60 "/opt/tinyos-2.x/tos/chips/atm128/timer/Atm128Calibrate.nc"
static   uint16_t MeasureClockC$Atm128Calibrate$baudrateRegister(uint32_t arg_0x7ef52570);
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
static  void BaseP$Boot$booted(void);
# 88 "/opt/tinyos-2.x/tos/interfaces/SplitControl.nc"
static  void BaseP$SerialControl$startDone(error_t arg_0x7ee80b78);
#line 110
static  void BaseP$SerialControl$stopDone(error_t arg_0x7ee736e0);
# 67 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
static  message_t *BaseP$UartReceive$receive(
# 56 "BaseP.nc"
am_id_t arg_0x7ede0b28, 
# 67 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
message_t *arg_0x7ede1010, void *arg_0x7ede11b0, uint8_t arg_0x7ede1338);
# 64 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static  void BaseP$uartSendTask$runTask(void);
# 88 "/opt/tinyos-2.x/tos/interfaces/SplitControl.nc"
static  void BaseP$RadioControl$startDone(error_t arg_0x7ee80b78);
#line 110
static  void BaseP$RadioControl$stopDone(error_t arg_0x7ee736e0);
# 67 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
static  message_t *BaseP$RadioReceive$receive(
# 61 "BaseP.nc"
am_id_t arg_0x7edd3f28, 
# 67 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
message_t *arg_0x7ede1010, void *arg_0x7ede11b0, uint8_t arg_0x7ede1338);
# 64 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static  void BaseP$radioSendTask$runTask(void);
# 99 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
static  void BaseP$RadioSend$sendDone(
# 60 "BaseP.nc"
am_id_t arg_0x7edd35c8, 
# 99 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
message_t *arg_0x7edf3eb8, error_t arg_0x7edf2068);
#line 99
static  void BaseP$UartSend$sendDone(
# 55 "BaseP.nc"
am_id_t arg_0x7ee72198, 
# 99 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
message_t *arg_0x7edf3eb8, error_t arg_0x7edf2068);
# 51 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static  error_t LedsP$Init$init(void);
# 56 "/opt/tinyos-2.x/tos/interfaces/Leds.nc"
static   void LedsP$Leds$led0Toggle(void);
#line 72
static   void LedsP$Leds$led1Toggle(void);
#line 89
static   void LedsP$Leds$led2Toggle(void);
# 31 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static   void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP$0$IO$toggle(void);



static   void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP$0$IO$makeOutput(void);
#line 29
static   void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP$0$IO$set(void);

static   void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP$1$IO$toggle(void);



static   void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP$1$IO$makeOutput(void);
#line 29
static   void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP$1$IO$set(void);

static   void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP$2$IO$toggle(void);



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
static   void /*HplAtm128GeneralIOC.PortD.Bit4*/HplAtm128GeneralIOPinP$28$IO$makeInput(void);
#line 32
static   bool /*HplAtm128GeneralIOC.PortD.Bit4*/HplAtm128GeneralIOPinP$28$IO$get(void);
static   void /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP$30$IO$makeInput(void);
#line 32
static   bool /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP$30$IO$get(void);
#line 32
static   bool /*HplAtm128GeneralIOC.PortE.Bit6*/HplAtm128GeneralIOPinP$38$IO$get(void);
# 89 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
static  void CC2420ActiveMessageP$SubSend$sendDone(message_t *arg_0x7ea42598, error_t arg_0x7ea42720);
# 67 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
static  message_t *CC2420ActiveMessageP$SubReceive$receive(message_t *arg_0x7ede1010, void *arg_0x7ede11b0, uint8_t arg_0x7ede1338);
# 69 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
static  error_t CC2420ActiveMessageP$AMSend$send(
# 37 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
am_id_t arg_0x7ea54808, 
# 69 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
am_addr_t arg_0x7ee009a0, message_t *arg_0x7ee00b50, uint8_t arg_0x7ee00cd8);
# 67 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
static  message_t *CC2420ActiveMessageP$Snoop$default$receive(
# 39 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
am_id_t arg_0x7ea53900, 
# 67 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
message_t *arg_0x7ede1010, void *arg_0x7ede11b0, uint8_t arg_0x7ede1338);
# 67 "/opt/tinyos-2.x/tos/interfaces/Packet.nc"
static  uint8_t CC2420ActiveMessageP$Packet$payloadLength(message_t *arg_0x7edd2938);
# 57 "/opt/tinyos-2.x/tos/interfaces/AMPacket.nc"
static  am_addr_t CC2420ActiveMessageP$AMPacket$address(void);









static  am_addr_t CC2420ActiveMessageP$AMPacket$destination(message_t *arg_0x7edc1888);
#line 136
static  am_id_t CC2420ActiveMessageP$AMPacket$type(message_t *arg_0x7edb3da0);
#line 125
static  bool CC2420ActiveMessageP$AMPacket$isForMe(message_t *arg_0x7edb3670);
# 79 "/opt/tinyos-2.x/tos/interfaces/SplitControl.nc"
static  error_t CC2420CsmaP$SplitControl$start(void);
# 85 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420Transmit.nc"
static   void CC2420CsmaP$CC2420Transmit$sendDone(message_t *arg_0x7e9a4770, error_t arg_0x7e9a48f8);
# 64 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
static  error_t CC2420CsmaP$Send$send(message_t *arg_0x7ea434c0, uint8_t arg_0x7ea43648);
# 51 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static  error_t CC2420CsmaP$Init$init(void);
# 76 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420Power.nc"
static   void CC2420CsmaP$CC2420Power$startOscillatorDone(void);
#line 56
static   void CC2420CsmaP$CC2420Power$startVRegDone(void);
# 92 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static  void CC2420CsmaP$Resource$granted(void);
# 43 "/opt/tinyos-2.x/tos/interfaces/CsmaBackoff.nc"
static   uint16_t CC2420CsmaP$CsmaBackoff$congestion(message_t *arg_0x7e9972a8);
#line 36
static   uint16_t CC2420CsmaP$CsmaBackoff$initial(message_t *arg_0x7e9a6cd0);
# 64 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static  void CC2420CsmaP$sendDone_task$runTask(void);
#line 64
static  void CC2420CsmaP$stopDone_task$runTask(void);
#line 64
static  void CC2420CsmaP$startDone_task$runTask(void);
# 53 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420Config.nc"
static  void CC2420ControlP$CC2420Config$default$syncDone(error_t arg_0x7e947b98);
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
# 36 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128TimerCtrl8.nc"
static   Atm128TimerControl_t HplAtm128Timer0AsyncC$TimerCtrl$getControl(void);







static   Atm128_TIFR_t HplAtm128Timer0AsyncC$TimerCtrl$getInterruptFlag(void);
#line 37
static   void HplAtm128Timer0AsyncC$TimerCtrl$setControl(Atm128TimerControl_t arg_0x7e840dc8);
# 51 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static  error_t HplAtm128Timer0AsyncC$Init$init(void);
# 53 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
static   void HplAtm128Timer0AsyncC$Compare$reset(void);
#line 45
static   void HplAtm128Timer0AsyncC$Compare$set(HplAtm128Timer0AsyncC$Compare$size_type arg_0x7e855ef0);










static   void HplAtm128Timer0AsyncC$Compare$start(void);


static   void HplAtm128Timer0AsyncC$Compare$stop(void);
# 78 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
static   bool HplAtm128Timer0AsyncC$Timer$test(void);
#line 52
static   HplAtm128Timer0AsyncC$Timer$timer_size HplAtm128Timer0AsyncC$Timer$get(void);
#line 95
static   void HplAtm128Timer0AsyncC$Timer$setScale(uint8_t arg_0x7e875250);
#line 58
static   void HplAtm128Timer0AsyncC$Timer$set(HplAtm128Timer0AsyncC$Timer$timer_size arg_0x7e8785b8);










static   void HplAtm128Timer0AsyncC$Timer$start(void);
# 41 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128TimerCtrl16.nc"
static   void HplAtm128Timer1P$TimerCtrl$setCtrlCapture(Atm128TimerCtrlCapture_t arg_0x7e8689a0);
#line 37
static   Atm128TimerCtrlCapture_t HplAtm128Timer1P$TimerCtrl$getCtrlCapture(void);
# 53 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
static   void HplAtm128Timer1P$CompareA$reset(void);
#line 45
static   void HplAtm128Timer1P$CompareA$set(HplAtm128Timer1P$CompareA$size_type arg_0x7e855ef0);










static   void HplAtm128Timer1P$CompareA$start(void);


static   void HplAtm128Timer1P$CompareA$stop(void);
# 79 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Capture.nc"
static   void HplAtm128Timer1P$Capture$setEdge(bool arg_0x7e861c88);
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
static   void HplAtm128Timer1P$Timer$setScale(uint8_t arg_0x7e875250);
#line 58
static   void HplAtm128Timer1P$Timer$set(HplAtm128Timer1P$Timer$timer_size arg_0x7e8785b8);










static   void HplAtm128Timer1P$Timer$start(void);
# 51 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static  error_t /*InitOneP.InitOne*/Atm128TimerInitC$0$Init$init(void);
# 61 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
static   void /*InitOneP.InitOne*/Atm128TimerInitC$0$Timer$overflow(void);
# 92 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
static   void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$1$Alarm$startAt(/*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$1$Alarm$size_type arg_0x7e931b80, /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$1$Alarm$size_type arg_0x7e931d10);
#line 62
static   void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$1$Alarm$stop(void);
# 49 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
static   void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$1$HplAtm128Compare$fired(void);
# 61 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
static   void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$1$HplAtm128Timer$overflow(void);
# 53 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
static   /*CounterOne16C.NCounter*/Atm128CounterC$0$Counter$size_type /*CounterOne16C.NCounter*/Atm128CounterC$0$Counter$get(void);






static   bool /*CounterOne16C.NCounter*/Atm128CounterC$0$Counter$isOverflowPending(void);
# 61 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
static   void /*CounterOne16C.NCounter*/Atm128CounterC$0$Timer$overflow(void);
# 71 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
static   void /*Counter32khz32C.Transform32*/TransformCounterC$0$CounterFrom$overflow(void);
#line 53
static   /*Counter32khz32C.Transform32*/TransformCounterC$0$Counter$size_type /*Counter32khz32C.Transform32*/TransformCounterC$0$Counter$get(void);
# 98 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
static   /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$Alarm$size_type /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$Alarm$getNow(void);
#line 92
static   void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$Alarm$startAt(/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$Alarm$size_type arg_0x7e931b80, /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$Alarm$size_type arg_0x7e931d10);
#line 55
static   void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$Alarm$start(/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$Alarm$size_type arg_0x7e932a00);






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
static   void /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC$0$Atm128Capture$captured(/*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC$0$Atm128Capture$size_type arg_0x7e8626a0);
# 64 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static   void /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC$0$Atm128Interrupt$fired(void);
# 43 "/opt/tinyos-2.x/tos/interfaces/GpioInterrupt.nc"
static   error_t /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC$0$Interrupt$enableFallingEdge(void);
# 64 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static   void /*HplAtm128InterruptC.IntPin0*/HplAtm128InterruptPinP$0$Irq$default$fired(void);
# 41 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptSig.nc"
static   void /*HplAtm128InterruptC.IntPin0*/HplAtm128InterruptPinP$0$IrqSignal$fired(void);
# 64 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static   void /*HplAtm128InterruptC.IntPin1*/HplAtm128InterruptPinP$1$Irq$default$fired(void);
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
static   void /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP$6$Irq$edge(bool arg_0x7e666120);
#line 35
static   void /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP$6$Irq$enable(void);
# 41 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptSig.nc"
static   void /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP$6$IrqSignal$fired(void);
# 64 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static   void /*HplAtm128InterruptC.IntPin7*/HplAtm128InterruptPinP$7$Irq$default$fired(void);
# 41 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptSig.nc"
static   void /*HplAtm128InterruptC.IntPin7*/HplAtm128InterruptPinP$7$IrqSignal$fired(void);
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
# 51 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static  error_t /*AlarmCounterMilliP.MilliInit*/Atm128TimerInitC$1$Init$init(void);
# 61 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
static   void /*AlarmCounterMilliP.MilliInit*/Atm128TimerInitC$1$Timer$overflow(void);
# 92 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
static   void /*AlarmCounterMilliP.MilliAlarm*/Atm128AlarmC$0$Alarm$startAt(/*AlarmCounterMilliP.MilliAlarm*/Atm128AlarmC$0$Alarm$size_type arg_0x7e931b80, /*AlarmCounterMilliP.MilliAlarm*/Atm128AlarmC$0$Alarm$size_type arg_0x7e931d10);
#line 62
static   void /*AlarmCounterMilliP.MilliAlarm*/Atm128AlarmC$0$Alarm$stop(void);
# 49 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
static   void /*AlarmCounterMilliP.MilliAlarm*/Atm128AlarmC$0$HplAtm128Compare$fired(void);
# 61 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
static   void /*AlarmCounterMilliP.MilliAlarm*/Atm128AlarmC$0$HplAtm128Timer$overflow(void);
# 53 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
static   /*AlarmCounterMilliP.MilliCounter*/Atm128CounterC$1$Counter$size_type /*AlarmCounterMilliP.MilliCounter*/Atm128CounterC$1$Counter$get(void);






static   bool /*AlarmCounterMilliP.MilliCounter*/Atm128CounterC$1$Counter$isOverflowPending(void);
# 61 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
static   void /*AlarmCounterMilliP.MilliCounter*/Atm128CounterC$1$Timer$overflow(void);
# 98 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
static   /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$Alarm$size_type /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$Alarm$getNow(void);
#line 92
static   void /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$Alarm$startAt(/*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$Alarm$size_type arg_0x7e931b80, /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$Alarm$size_type arg_0x7e931d10);
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
static  void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$startOneShotAt(uint32_t arg_0x7e601738, uint32_t arg_0x7e6018c8);
#line 67
static  void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$stop(void);
# 64 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static  void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$updateFromTimer$runTask(void);
# 72 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
static  void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$fired(void);
#line 72
static  void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$default$fired(
# 37 "/opt/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x7e549010);
# 62 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
static  void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startOneShot(
# 37 "/opt/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x7e549010, 
# 62 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
uint32_t arg_0x7e6049f0);




static  void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$stop(
# 37 "/opt/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x7e549010);
# 71 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
static   void /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC$0$Counter$overflow(void);
# 71 "/opt/tinyos-2.x/tos/interfaces/SpiPacket.nc"
static   void CC2420SpiImplP$SpiPacket$sendDone(uint8_t *arg_0x7e4e0030, uint8_t *arg_0x7e4e01d8, uint16_t arg_0x7e4e0368, 
error_t arg_0x7e4e0500);
# 62 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420Fifo.nc"
static   error_t CC2420SpiImplP$Fifo$continueRead(
# 40 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420SpiImplP.nc"
uint8_t arg_0x7e4ecd50, 
# 62 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420Fifo.nc"
uint8_t *arg_0x7e4fba70, uint8_t arg_0x7e4fbbf8);
#line 91
static   void CC2420SpiImplP$Fifo$default$writeDone(
# 40 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420SpiImplP.nc"
uint8_t arg_0x7e4ecd50, 
# 91 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420Fifo.nc"
uint8_t *arg_0x7e4f9370, uint8_t arg_0x7e4f94f8, error_t arg_0x7e4f9680);
#line 82
static   cc2420_status_t CC2420SpiImplP$Fifo$write(
# 40 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420SpiImplP.nc"
uint8_t arg_0x7e4ecd50, 
# 82 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420Fifo.nc"
uint8_t *arg_0x7e4fab18, uint8_t arg_0x7e4faca0);
#line 51
static   cc2420_status_t CC2420SpiImplP$Fifo$beginRead(
# 40 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420SpiImplP.nc"
uint8_t arg_0x7e4ecd50, 
# 51 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420Fifo.nc"
uint8_t *arg_0x7e4fb2d8, uint8_t arg_0x7e4fb460);
#line 71
static   void CC2420SpiImplP$Fifo$default$readDone(
# 40 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420SpiImplP.nc"
uint8_t arg_0x7e4ecd50, 
# 71 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420Fifo.nc"
uint8_t *arg_0x7e4fa240, uint8_t arg_0x7e4fa3c8, error_t arg_0x7e4fa550);
# 92 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static  void CC2420SpiImplP$SpiResource$granted(void);
# 63 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420Ram.nc"
static   cc2420_status_t CC2420SpiImplP$Ram$write(
# 41 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420SpiImplP.nc"
uint16_t arg_0x7e4ea710, 
# 63 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420Ram.nc"
uint8_t arg_0x7e915610, uint8_t *arg_0x7e9157b8, uint8_t arg_0x7e915940);
# 55 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420Register.nc"
static   cc2420_status_t CC2420SpiImplP$Reg$write(
# 42 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420SpiImplP.nc"
uint8_t arg_0x7e4eadf0, 
# 55 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420Register.nc"
uint16_t arg_0x7e911c00);
# 101 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static   error_t CC2420SpiImplP$Resource$release(
# 39 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420SpiImplP.nc"
uint8_t arg_0x7e4ec3d0);
# 87 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static   error_t CC2420SpiImplP$Resource$immediateRequest(
# 39 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420SpiImplP.nc"
uint8_t arg_0x7e4ec3d0);
# 78 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static   error_t CC2420SpiImplP$Resource$request(
# 39 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420SpiImplP.nc"
uint8_t arg_0x7e4ec3d0);
# 92 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static  void CC2420SpiImplP$Resource$default$granted(
# 39 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420SpiImplP.nc"
uint8_t arg_0x7e4ec3d0);
# 45 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420Strobe.nc"
static   cc2420_status_t CC2420SpiImplP$Strobe$strobe(
# 43 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420SpiImplP.nc"
uint8_t arg_0x7e4e94f8);
# 59 "/opt/tinyos-2.x/tos/interfaces/SpiPacket.nc"
static   error_t Atm128SpiP$SpiPacket$send(uint8_t *arg_0x7e4e25a0, uint8_t *arg_0x7e4e2748, uint16_t arg_0x7e4e28d8);
# 92 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static  void Atm128SpiP$ResourceArbiter$granted(
# 84 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
uint8_t arg_0x7e4a5410);
# 34 "/opt/tinyos-2.x/tos/interfaces/SpiByte.nc"
static   uint8_t Atm128SpiP$SpiByte$write(uint8_t arg_0x7e4e8d78);
# 92 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128Spi.nc"
static   void Atm128SpiP$Spi$dataReady(uint8_t arg_0x7e49df08);
# 101 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static   error_t Atm128SpiP$Resource$release(
# 80 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
uint8_t arg_0x7e4a8010);
# 87 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static   error_t Atm128SpiP$Resource$immediateRequest(
# 80 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
uint8_t arg_0x7e4a8010);
# 78 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static   error_t Atm128SpiP$Resource$request(
# 80 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
uint8_t arg_0x7e4a8010);
# 92 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static  void Atm128SpiP$Resource$default$granted(
# 80 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
uint8_t arg_0x7e4a8010);
# 72 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128Spi.nc"
static   void HplAtm128SpiP$SPI$sleep(void);
#line 66
static   void HplAtm128SpiP$SPI$initMaster(void);
#line 105
static   void HplAtm128SpiP$SPI$setMasterBit(bool arg_0x7e49ac08);
#line 96
static   void HplAtm128SpiP$SPI$enableInterrupt(bool arg_0x7e49b478);
#line 80
static   uint8_t HplAtm128SpiP$SPI$read(void);
#line 125
static   void HplAtm128SpiP$SPI$setMasterDoubleSpeed(bool arg_0x7e496680);
#line 114
static   void HplAtm128SpiP$SPI$setClock(uint8_t arg_0x7e497480);
#line 108
static   void HplAtm128SpiP$SPI$setClockPolarity(bool arg_0x7e499490);
#line 86
static   void HplAtm128SpiP$SPI$write(uint8_t arg_0x7e49d9f8);
#line 99
static   void HplAtm128SpiP$SPI$enableSpi(bool arg_0x7e49bc48);
#line 111
static   void HplAtm128SpiP$SPI$setClockPhase(bool arg_0x7e499c70);
# 51 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static  error_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$Init$init(void);
# 69 "/opt/tinyos-2.x/tos/interfaces/ResourceQueue.nc"
static   error_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$FcfsQueue$enqueue(resource_client_id_t arg_0x7e4269f8);
#line 43
static   bool /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$FcfsQueue$isEmpty(void);








static   bool /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$FcfsQueue$isEnqueued(resource_client_id_t arg_0x7e426010);







static   resource_client_id_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$FcfsQueue$dequeue(void);
# 43 "/opt/tinyos-2.x/tos/interfaces/ResourceRequested.nc"
static   void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceRequested$default$requested(
# 54 "/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x7e419c20);
# 51 "/opt/tinyos-2.x/tos/interfaces/ResourceRequested.nc"
static   void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceRequested$default$immediateRequested(
# 54 "/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x7e419c20);
# 55 "/opt/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
static   void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceConfigure$default$unconfigure(
# 58 "/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x7e418750);
# 49 "/opt/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
static   void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceConfigure$default$configure(
# 58 "/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x7e418750);
# 101 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static   error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$Resource$release(
# 53 "/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x7e4192e0);
# 87 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static   error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$Resource$immediateRequest(
# 53 "/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x7e4192e0);
# 78 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static   error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$Resource$request(
# 53 "/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x7e4192e0);
# 80 "/opt/tinyos-2.x/tos/interfaces/ArbiterInfo.nc"
static   bool /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ArbiterInfo$inUse(void);
# 64 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static  void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$grantedTask$runTask(void);
# 50 "/opt/tinyos-2.x/tos/interfaces/GpioCapture.nc"
static   void CC2420TransmitP$CaptureSFD$captured(uint16_t arg_0x7e6887f8);
# 67 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
static   void CC2420TransmitP$BackoffTimer$fired(void);
# 48 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420Transmit.nc"
static   error_t CC2420TransmitP$Send$sendCCA(message_t *arg_0x7e9a5120);
# 61 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420Receive.nc"
static   void CC2420TransmitP$CC2420Receive$receive(uint8_t arg_0x7e3c4068, message_t *arg_0x7e3c4218);
# 51 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static  error_t CC2420TransmitP$Init$init(void);
# 92 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static  void CC2420TransmitP$SpiResource$granted(void);
# 73 "/opt/tinyos-2.x/tos/interfaces/AsyncStdControl.nc"
static   error_t CC2420TransmitP$AsyncStdControl$start(void);
# 39 "/opt/tinyos-2.x/tos/interfaces/RadioTimeStamping.nc"
static   void CC2420TransmitP$TimeStamp$default$transmittedSFD(uint16_t arg_0x7e3d4030, message_t *arg_0x7e3d41e0);










static   void CC2420TransmitP$TimeStamp$default$receivedSFD(uint16_t arg_0x7e3d4710);
# 91 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420Fifo.nc"
static   void CC2420TransmitP$TXFIFO$writeDone(uint8_t *arg_0x7e4f9370, uint8_t arg_0x7e4f94f8, error_t arg_0x7e4f9680);
#line 71
static   void CC2420TransmitP$TXFIFO$readDone(uint8_t *arg_0x7e4fa240, uint8_t arg_0x7e4fa3c8, error_t arg_0x7e4fa550);
# 64 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static  void CC2420ReceiveP$receiveDone_task$runTask(void);
# 53 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420Receive.nc"
static   void CC2420ReceiveP$CC2420Receive$sfd_dropped(void);
#line 47
static   void CC2420ReceiveP$CC2420Receive$sfd(uint16_t arg_0x7e3c5750);
# 51 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static  error_t CC2420ReceiveP$Init$init(void);
# 92 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static  void CC2420ReceiveP$SpiResource$granted(void);
# 91 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420Fifo.nc"
static   void CC2420ReceiveP$RXFIFO$writeDone(uint8_t *arg_0x7e4f9370, uint8_t arg_0x7e4f94f8, error_t arg_0x7e4f9680);
#line 71
static   void CC2420ReceiveP$RXFIFO$readDone(uint8_t *arg_0x7e4fa240, uint8_t arg_0x7e4fa3c8, error_t arg_0x7e4fa550);
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
# 89 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
static  void /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$SubSend$sendDone(message_t *arg_0x7ea42598, error_t arg_0x7ea42720);
# 67 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
static  message_t */*SerialActiveMessageC.AM*/SerialActiveMessageP$0$SubReceive$receive(message_t *arg_0x7ede1010, void *arg_0x7ede11b0, uint8_t arg_0x7ede1338);
# 69 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
static  error_t /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$AMSend$send(
# 36 "/opt/tinyos-2.x/tos/lib/serial/SerialActiveMessageP.nc"
am_id_t arg_0x7e2c3a00, 
# 69 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
am_addr_t arg_0x7ee009a0, message_t *arg_0x7ee00b50, uint8_t arg_0x7ee00cd8);
# 67 "/opt/tinyos-2.x/tos/interfaces/Packet.nc"
static  uint8_t /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$Packet$payloadLength(message_t *arg_0x7edd2938);
# 67 "/opt/tinyos-2.x/tos/interfaces/AMPacket.nc"
static  am_addr_t /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$AMPacket$destination(message_t *arg_0x7edc1888);
#line 136
static  am_id_t /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$AMPacket$type(message_t *arg_0x7edb3da0);
# 79 "/opt/tinyos-2.x/tos/interfaces/SplitControl.nc"
static  error_t SerialP$SplitControl$start(void);
# 64 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static  void SerialP$stopDoneTask$runTask(void);
#line 64
static  void SerialP$RunTx$runTask(void);
# 51 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static  error_t SerialP$Init$init(void);
# 64 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static  void SerialP$startDoneTask$runTask(void);
# 83 "/opt/tinyos-2.x/tos/lib/serial/SerialFrameComm.nc"
static   void SerialP$SerialFrameComm$dataReceived(uint8_t arg_0x7e220758);





static   void SerialP$SerialFrameComm$putDone(void);
#line 74
static   void SerialP$SerialFrameComm$delimiterReceived(void);
# 60 "/opt/tinyos-2.x/tos/lib/serial/SendBytePacket.nc"
static   error_t SerialP$SendBytePacket$completeSend(void);
#line 51
static   error_t SerialP$SendBytePacket$startSend(uint8_t arg_0x7e229030);
# 64 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static  void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveTask$runTask(void);
# 64 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
static  error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$Send$send(
# 40 "/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x7e172ef8, 
# 64 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
message_t *arg_0x7ea434c0, uint8_t arg_0x7ea43648);
#line 89
static  void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$Send$default$sendDone(
# 40 "/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x7e172ef8, 
# 89 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
message_t *arg_0x7ea42598, error_t arg_0x7ea42720);
# 64 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static  void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$signalSendDone$runTask(void);
# 67 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
static  message_t */*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$Receive$default$receive(
# 39 "/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x7e172780, 
# 67 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
message_t *arg_0x7ede1010, void *arg_0x7ede11b0, uint8_t arg_0x7ede1338);
# 31 "/opt/tinyos-2.x/tos/lib/serial/SerialPacketInfo.nc"
static   uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$PacketInfo$default$upperLength(
# 43 "/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x7e1718d8, 
# 31 "/opt/tinyos-2.x/tos/lib/serial/SerialPacketInfo.nc"
message_t *arg_0x7e251068, uint8_t arg_0x7e2511f8);
#line 15
static   uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$PacketInfo$default$offset(
# 43 "/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x7e1718d8);
# 23 "/opt/tinyos-2.x/tos/lib/serial/SerialPacketInfo.nc"
static   uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$PacketInfo$default$dataLinkLength(
# 43 "/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x7e1718d8, 
# 23 "/opt/tinyos-2.x/tos/lib/serial/SerialPacketInfo.nc"
message_t *arg_0x7e260860, uint8_t arg_0x7e2609f0);
# 70 "/opt/tinyos-2.x/tos/lib/serial/SendBytePacket.nc"
static   uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$SendBytePacket$nextByte(void);









static   void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$SendBytePacket$sendCompleted(error_t arg_0x7e228068);
# 51 "/opt/tinyos-2.x/tos/lib/serial/ReceiveBytePacket.nc"
static   error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$ReceiveBytePacket$startPacket(void);






static   void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$ReceiveBytePacket$byteReceived(uint8_t arg_0x7e225010);










static   void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$ReceiveBytePacket$endPacket(error_t arg_0x7e2255e0);
# 79 "/opt/tinyos-2.x/tos/interfaces/UartStream.nc"
static   void HdlcTranslateC$UartStream$receivedByte(uint8_t arg_0x7e10a3f8);
#line 99
static   void HdlcTranslateC$UartStream$receiveDone(uint8_t *arg_0x7e108118, uint16_t arg_0x7e1082a8, error_t arg_0x7e108430);
#line 57
static   void HdlcTranslateC$UartStream$sendDone(uint8_t *arg_0x7e10b370, uint16_t arg_0x7e10b500, error_t arg_0x7e10b688);
# 45 "/opt/tinyos-2.x/tos/lib/serial/SerialFrameComm.nc"
static   error_t HdlcTranslateC$SerialFrameComm$putDelimiter(void);
#line 68
static   void HdlcTranslateC$SerialFrameComm$resetReceive(void);
#line 54
static   error_t HdlcTranslateC$SerialFrameComm$putData(uint8_t arg_0x7e221508);
# 51 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static  error_t /*Atm128Uart0C.UartP*/Atm128UartP$0$Init$init(void);
# 48 "/opt/tinyos-2.x/tos/interfaces/UartStream.nc"
static   error_t /*Atm128Uart0C.UartP*/Atm128UartP$0$UartStream$send(uint8_t *arg_0x7e10eb20, uint16_t arg_0x7e10ecb0);
# 71 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
static   void /*Atm128Uart0C.UartP*/Atm128UartP$0$Counter$overflow(void);
# 49 "/opt/tinyos-2.x/tos/chips/atm128/HplAtm128Uart.nc"
static   void /*Atm128Uart0C.UartP*/Atm128UartP$0$HplUart$rxDone(uint8_t arg_0x7e0c8010);
#line 47
static   void /*Atm128Uart0C.UartP*/Atm128UartP$0$HplUart$txDone(void);
# 73 "/opt/tinyos-2.x/tos/interfaces/StdControl.nc"
static  error_t /*Atm128Uart0C.UartP*/Atm128UartP$0$StdControl$start(void);








static  error_t /*Atm128Uart0C.UartP*/Atm128UartP$0$StdControl$stop(void);
# 51 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static  error_t HplAtm128UartP$Uart0Init$init(void);
# 46 "/opt/tinyos-2.x/tos/chips/atm128/HplAtm128Uart.nc"
static   void HplAtm128UartP$HplUart0$tx(uint8_t arg_0x7e0ca4f0);
# 51 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static  error_t HplAtm128UartP$Uart1Init$init(void);
# 49 "/opt/tinyos-2.x/tos/chips/atm128/HplAtm128Uart.nc"
static   void HplAtm128UartP$HplUart1$default$rxDone(uint8_t arg_0x7e0c8010);
#line 47
static   void HplAtm128UartP$HplUart1$default$txDone(void);
# 73 "/opt/tinyos-2.x/tos/interfaces/StdControl.nc"
static  error_t HplAtm128UartP$Uart0RxControl$start(void);








static  error_t HplAtm128UartP$Uart0RxControl$stop(void);
#line 73
static  error_t HplAtm128UartP$Uart0TxControl$start(void);








static  error_t HplAtm128UartP$Uart0TxControl$stop(void);
# 41 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128TimerCtrl16.nc"
static   void HplAtm128Timer3P$TimerCtrl$setCtrlCapture(Atm128TimerCtrlCapture_t arg_0x7e8689a0);
#line 37
static   Atm128TimerCtrlCapture_t HplAtm128Timer3P$TimerCtrl$getCtrlCapture(void);
# 49 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
static   void HplAtm128Timer3P$CompareA$default$fired(void);
# 51 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Capture.nc"
static   void HplAtm128Timer3P$Capture$default$captured(HplAtm128Timer3P$Capture$size_type arg_0x7e8626a0);
# 49 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
static   void HplAtm128Timer3P$CompareB$default$fired(void);
#line 49
static   void HplAtm128Timer3P$CompareC$default$fired(void);
# 52 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
static   HplAtm128Timer3P$Timer$timer_size HplAtm128Timer3P$Timer$get(void);
#line 95
static   void HplAtm128Timer3P$Timer$setScale(uint8_t arg_0x7e875250);
#line 58
static   void HplAtm128Timer3P$Timer$set(HplAtm128Timer3P$Timer$timer_size arg_0x7e8785b8);










static   void HplAtm128Timer3P$Timer$start(void);
# 51 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static  error_t /*InitThreeP.InitThree*/Atm128TimerInitC$2$Init$init(void);
# 61 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
static   void /*InitThreeP.InitThree*/Atm128TimerInitC$2$Timer$overflow(void);
#line 61
static   void /*CounterThree16C.NCounter*/Atm128CounterC$2$Timer$overflow(void);
# 71 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
static   void /*CounterMicro32C.Transform32*/TransformCounterC$1$CounterFrom$overflow(void);
# 31 "/opt/tinyos-2.x/tos/lib/serial/SerialPacketInfo.nc"
static   uint8_t SerialPacketInfoActiveMessageP$Info$upperLength(message_t *arg_0x7e251068, uint8_t arg_0x7e2511f8);
#line 15
static   uint8_t SerialPacketInfoActiveMessageP$Info$offset(void);







static   uint8_t SerialPacketInfoActiveMessageP$Info$dataLinkLength(message_t *arg_0x7e260860, uint8_t arg_0x7e2609f0);
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
enum MeasureClockC$__nesc_unnamed4319 {


  MeasureClockC$MAGIC = 488 / (16 / PLATFORM_MHZ)
};

uint16_t MeasureClockC$cycles;

static inline  error_t MeasureClockC$Init$init(void);
#line 120
static inline   uint16_t MeasureClockC$Atm128Calibrate$baudrateRegister(uint32_t baudrate);
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
enum SchedulerBasicP$__nesc_unnamed4320 {

  SchedulerBasicP$NUM_TASKS = 17U, 
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
# 79 "/opt/tinyos-2.x/tos/interfaces/SplitControl.nc"
static  error_t BaseP$SerialControl$start(void);
# 67 "/opt/tinyos-2.x/tos/interfaces/AMPacket.nc"
static  am_addr_t BaseP$RadioAMPacket$destination(message_t *arg_0x7edc1888);
#line 136
static  am_id_t BaseP$RadioAMPacket$type(message_t *arg_0x7edb3da0);
# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static   error_t BaseP$uartSendTask$postTask(void);
# 79 "/opt/tinyos-2.x/tos/interfaces/SplitControl.nc"
static  error_t BaseP$RadioControl$start(void);
# 67 "/opt/tinyos-2.x/tos/interfaces/Packet.nc"
static  uint8_t BaseP$RadioPacket$payloadLength(message_t *arg_0x7edd2938);
# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static   error_t BaseP$radioSendTask$postTask(void);
# 56 "/opt/tinyos-2.x/tos/interfaces/Leds.nc"
static   void BaseP$Leds$led0Toggle(void);
#line 72
static   void BaseP$Leds$led1Toggle(void);
#line 89
static   void BaseP$Leds$led2Toggle(void);
# 67 "/opt/tinyos-2.x/tos/interfaces/Packet.nc"
static  uint8_t BaseP$UartPacket$payloadLength(message_t *arg_0x7edd2938);
# 69 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
static  error_t BaseP$RadioSend$send(
# 60 "BaseP.nc"
am_id_t arg_0x7edd35c8, 
# 69 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
am_addr_t arg_0x7ee009a0, message_t *arg_0x7ee00b50, uint8_t arg_0x7ee00cd8);
#line 69
static  error_t BaseP$UartSend$send(
# 55 "BaseP.nc"
am_id_t arg_0x7ee72198, 
# 69 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
am_addr_t arg_0x7ee009a0, message_t *arg_0x7ee00b50, uint8_t arg_0x7ee00cd8);
# 67 "/opt/tinyos-2.x/tos/interfaces/AMPacket.nc"
static  am_addr_t BaseP$UartAMPacket$destination(message_t *arg_0x7edc1888);
#line 136
static  am_id_t BaseP$UartAMPacket$type(message_t *arg_0x7edb3da0);
# 86 "BaseP.nc"
enum BaseP$__nesc_unnamed4321 {
#line 86
  BaseP$uartSendTask = 0U
};
#line 86
typedef int BaseP$__nesc_sillytask_uartSendTask[BaseP$uartSendTask];
enum BaseP$__nesc_unnamed4322 {
#line 87
  BaseP$radioSendTask = 1U
};
#line 87
typedef int BaseP$__nesc_sillytask_radioSendTask[BaseP$radioSendTask];
#line 71
enum BaseP$__nesc_unnamed4323 {
  BaseP$UART_QUEUE_LEN = 12, 
  BaseP$RADIO_QUEUE_LEN = 12
};

message_t BaseP$uartQueueBufs[BaseP$UART_QUEUE_LEN];
message_t *BaseP$uartQueue[BaseP$UART_QUEUE_LEN];
uint8_t BaseP$uartIn;
#line 78
uint8_t BaseP$uartOut;
bool BaseP$uartBusy;
#line 79
bool BaseP$uartFull;

message_t BaseP$radioQueueBufs[BaseP$RADIO_QUEUE_LEN];
message_t *BaseP$radioQueue[BaseP$RADIO_QUEUE_LEN];
uint8_t BaseP$radioIn;
#line 83
uint8_t BaseP$radioOut;
bool BaseP$radioBusy;
#line 84
bool BaseP$radioFull;




static inline void BaseP$dropBlink(void);



static inline void BaseP$failBlink(void);



static inline  void BaseP$Boot$booted(void);
#line 116
static inline  void BaseP$RadioControl$startDone(error_t error);





static inline  void BaseP$SerialControl$startDone(error_t error);





static inline  void BaseP$SerialControl$stopDone(error_t error);
static inline  void BaseP$RadioControl$stopDone(error_t error);


static inline  message_t *BaseP$RadioReceive$receive(am_id_t id, message_t *msg, 
void *payload, 
uint8_t len);
#line 161
uint8_t BaseP$tmpLen;

static inline  void BaseP$uartSendTask$runTask(void);
#line 189
static inline  void BaseP$UartSend$sendDone(am_id_t id, message_t *msg, error_t error);
#line 204
static inline  message_t *BaseP$UartReceive$receive(am_id_t id, message_t *msg, 
void *payload, 
uint8_t len);
#line 237
static inline  void BaseP$radioSendTask$runTask(void);
#line 263
static inline  void BaseP$RadioSend$sendDone(am_id_t id, message_t *msg, error_t error);
# 31 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static   void LedsP$Led0$toggle(void);



static   void LedsP$Led0$makeOutput(void);
#line 29
static   void LedsP$Led0$set(void);

static   void LedsP$Led1$toggle(void);



static   void LedsP$Led1$makeOutput(void);
#line 29
static   void LedsP$Led1$set(void);

static   void LedsP$Led2$toggle(void);



static   void LedsP$Led2$makeOutput(void);
#line 29
static   void LedsP$Led2$set(void);
# 45 "/opt/tinyos-2.x/tos/system/LedsP.nc"
static inline  error_t LedsP$Init$init(void);
#line 73
static inline   void LedsP$Leds$led0Toggle(void);
#line 88
static inline   void LedsP$Leds$led1Toggle(void);
#line 103
static inline   void LedsP$Leds$led2Toggle(void);
# 46 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline   void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP$0$IO$set(void);

static   void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP$0$IO$toggle(void);



static __inline   void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP$0$IO$makeOutput(void);
#line 46
static __inline   void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP$1$IO$set(void);

static inline   void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP$1$IO$toggle(void);



static __inline   void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP$1$IO$makeOutput(void);
#line 46
static __inline   void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP$2$IO$set(void);

static inline   void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP$2$IO$toggle(void);



static __inline   void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP$2$IO$makeOutput(void);
#line 46
static __inline   void /*HplAtm128GeneralIOC.PortA.Bit5*/HplAtm128GeneralIOPinP$5$IO$set(void);





static __inline   void /*HplAtm128GeneralIOC.PortA.Bit5*/HplAtm128GeneralIOPinP$5$IO$makeOutput(void);
#line 46
static __inline   void /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP$6$IO$set(void);
static __inline   void /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP$6$IO$clr(void);




static __inline   void /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP$6$IO$makeOutput(void);
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
#line 45
static __inline   bool /*HplAtm128GeneralIOC.PortD.Bit4*/HplAtm128GeneralIOPinP$28$IO$get(void);




static __inline   void /*HplAtm128GeneralIOC.PortD.Bit4*/HplAtm128GeneralIOPinP$28$IO$makeInput(void);
#line 45
static __inline   bool /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP$30$IO$get(void);




static __inline   void /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP$30$IO$makeInput(void);
#line 45
static __inline   bool /*HplAtm128GeneralIOC.PortE.Bit6*/HplAtm128GeneralIOPinP$38$IO$get(void);
# 64 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
static  error_t CC2420ActiveMessageP$SubSend$send(message_t *arg_0x7ea434c0, uint8_t arg_0x7ea43648);
# 46 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static  am_addr_t CC2420ActiveMessageP$amAddress(void);
# 99 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
static  void CC2420ActiveMessageP$AMSend$sendDone(
# 37 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
am_id_t arg_0x7ea54808, 
# 99 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
message_t *arg_0x7edf3eb8, error_t arg_0x7edf2068);
# 67 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
static  message_t *CC2420ActiveMessageP$Snoop$receive(
# 39 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
am_id_t arg_0x7ea53900, 
# 67 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
message_t *arg_0x7ede1010, void *arg_0x7ede11b0, uint8_t arg_0x7ede1338);
#line 67
static  message_t *CC2420ActiveMessageP$Receive$receive(
# 38 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
am_id_t arg_0x7ea53168, 
# 67 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
message_t *arg_0x7ede1010, void *arg_0x7ede11b0, uint8_t arg_0x7ede1338);
# 51 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
enum CC2420ActiveMessageP$__nesc_unnamed4324 {
  CC2420ActiveMessageP$CC2420_SIZE = MAC_HEADER_SIZE + MAC_FOOTER_SIZE
};

static inline cc2420_header_t *CC2420ActiveMessageP$getHeader(message_t *msg);



static inline  error_t CC2420ActiveMessageP$AMSend$send(am_id_t id, am_addr_t addr, 
message_t *msg, 
uint8_t len);
#line 98
static inline  void CC2420ActiveMessageP$SubSend$sendDone(message_t *msg, error_t result);





static inline  message_t *CC2420ActiveMessageP$SubReceive$receive(message_t *msg, void *payload, uint8_t len);








static inline  am_addr_t CC2420ActiveMessageP$AMPacket$address(void);



static inline  am_addr_t CC2420ActiveMessageP$AMPacket$destination(message_t *amsg);
#line 137
static inline  bool CC2420ActiveMessageP$AMPacket$isForMe(message_t *amsg);




static  am_id_t CC2420ActiveMessageP$AMPacket$type(message_t *amsg);
#line 156
static inline   message_t *CC2420ActiveMessageP$Snoop$default$receive(am_id_t id, message_t *msg, void *payload, uint8_t len);










static inline  uint8_t CC2420ActiveMessageP$Packet$payloadLength(message_t *msg);
# 88 "/opt/tinyos-2.x/tos/interfaces/SplitControl.nc"
static  void CC2420CsmaP$SplitControl$startDone(error_t arg_0x7ee80b78);
#line 110
static  void CC2420CsmaP$SplitControl$stopDone(error_t arg_0x7ee736e0);
# 48 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420Transmit.nc"
static   error_t CC2420CsmaP$CC2420Transmit$sendCCA(message_t *arg_0x7e9a5120);
# 89 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
static  void CC2420CsmaP$Send$sendDone(message_t *arg_0x7ea42598, error_t arg_0x7ea42720);
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
enum CC2420CsmaP$__nesc_unnamed4325 {
#line 70
  CC2420CsmaP$startDone_task = 2U
};
#line 70
typedef int CC2420CsmaP$__nesc_sillytask_startDone_task[CC2420CsmaP$startDone_task];
enum CC2420CsmaP$__nesc_unnamed4326 {
#line 71
  CC2420CsmaP$stopDone_task = 3U
};
#line 71
typedef int CC2420CsmaP$__nesc_sillytask_stopDone_task[CC2420CsmaP$stopDone_task];
enum CC2420CsmaP$__nesc_unnamed4327 {
#line 72
  CC2420CsmaP$sendDone_task = 4U
};
#line 72
typedef int CC2420CsmaP$__nesc_sillytask_sendDone_task[CC2420CsmaP$sendDone_task];
#line 56
enum CC2420CsmaP$__nesc_unnamed4328 {
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
static  void CC2420ControlP$CC2420Config$syncDone(error_t arg_0x7e947b98);
# 55 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
static   void CC2420ControlP$StartupTimer$start(CC2420ControlP$StartupTimer$size_type arg_0x7e932a00);
# 55 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420Register.nc"
static   cc2420_status_t CC2420ControlP$MDMCTRL0$write(uint16_t arg_0x7e911c00);
# 35 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static   void CC2420ControlP$RSTN$makeOutput(void);
#line 29
static   void CC2420ControlP$RSTN$set(void);
static   void CC2420ControlP$RSTN$clr(void);
# 55 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420Register.nc"
static   cc2420_status_t CC2420ControlP$IOCFG0$write(uint16_t arg_0x7e911c00);
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
static   cc2420_status_t CC2420ControlP$FSCTRL$write(uint16_t arg_0x7e911c00);
#line 55
static   cc2420_status_t CC2420ControlP$IOCFG1$write(uint16_t arg_0x7e911c00);
# 92 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static  void CC2420ControlP$Resource$granted(void);
# 63 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420Ram.nc"
static   cc2420_status_t CC2420ControlP$PANID$write(uint8_t arg_0x7e915610, uint8_t *arg_0x7e9157b8, uint8_t arg_0x7e915940);
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
enum CC2420ControlP$__nesc_unnamed4329 {
#line 86
  CC2420ControlP$syncDone_task = 5U
};
#line 86
typedef int CC2420ControlP$__nesc_sillytask_syncDone_task[CC2420ControlP$syncDone_task];
#line 79
#line 73
typedef enum CC2420ControlP$__nesc_unnamed4330 {
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
# 44 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128TimerCtrl8.nc"
static   Atm128_TIFR_t HplAtm128Timer1P$Timer0Ctrl$getInterruptFlag(void);
# 49 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
static   void HplAtm128Timer1P$CompareA$fired(void);
# 51 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Capture.nc"
static   void HplAtm128Timer1P$Capture$captured(HplAtm128Timer1P$Capture$size_type arg_0x7e8626a0);
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
static   void /*InitOneP.InitOne*/Atm128TimerInitC$0$Timer$setScale(uint8_t arg_0x7e875250);
#line 58
static   void /*InitOneP.InitOne*/Atm128TimerInitC$0$Timer$set(/*InitOneP.InitOne*/Atm128TimerInitC$0$Timer$timer_size arg_0x7e8785b8);










static   void /*InitOneP.InitOne*/Atm128TimerInitC$0$Timer$start(void);
# 42 "/opt/tinyos-2.x/tos/chips/atm128/timer/Atm128TimerInitC.nc"
static inline  error_t /*InitOneP.InitOne*/Atm128TimerInitC$0$Init$init(void);








static inline   void /*InitOneP.InitOne*/Atm128TimerInitC$0$Timer$overflow(void);
# 67 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
static   void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$1$Alarm$fired(void);
# 53 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
static   void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$1$HplAtm128Compare$reset(void);
#line 45
static   void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$1$HplAtm128Compare$set(/*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$1$HplAtm128Compare$size_type arg_0x7e855ef0);










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
static   void /*CounterOne16C.NCounter*/Atm128CounterC$0$Counter$overflow(void);
# 78 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
static   bool /*CounterOne16C.NCounter*/Atm128CounterC$0$Timer$test(void);
#line 52
static   /*CounterOne16C.NCounter*/Atm128CounterC$0$Timer$timer_size /*CounterOne16C.NCounter*/Atm128CounterC$0$Timer$get(void);
# 41 "/opt/tinyos-2.x/tos/chips/atm128/timer/Atm128CounterC.nc"
static inline   /*CounterOne16C.NCounter*/Atm128CounterC$0$timer_size /*CounterOne16C.NCounter*/Atm128CounterC$0$Counter$get(void);




static inline   bool /*CounterOne16C.NCounter*/Atm128CounterC$0$Counter$isOverflowPending(void);









static inline   void /*CounterOne16C.NCounter*/Atm128CounterC$0$Timer$overflow(void);
# 53 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
static   /*Counter32khz32C.Transform32*/TransformCounterC$0$CounterFrom$size_type /*Counter32khz32C.Transform32*/TransformCounterC$0$CounterFrom$get(void);






static   bool /*Counter32khz32C.Transform32*/TransformCounterC$0$CounterFrom$isOverflowPending(void);










static   void /*Counter32khz32C.Transform32*/TransformCounterC$0$Counter$overflow(void);
# 56 "/opt/tinyos-2.x/tos/lib/timer/TransformCounterC.nc"
/*Counter32khz32C.Transform32*/TransformCounterC$0$upper_count_type /*Counter32khz32C.Transform32*/TransformCounterC$0$m_upper;

enum /*Counter32khz32C.Transform32*/TransformCounterC$0$__nesc_unnamed4331 {

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
static   void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$AlarmFrom$startAt(/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$AlarmFrom$size_type arg_0x7e931b80, /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$AlarmFrom$size_type arg_0x7e931d10);
#line 62
static   void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$AlarmFrom$stop(void);
# 53 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
static   /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$Counter$size_type /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$Counter$get(void);
# 66 "/opt/tinyos-2.x/tos/lib/timer/TransformAlarmC.nc"
/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$to_size_type /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$m_t0;
/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$to_size_type /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$m_dt;

enum /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$__nesc_unnamed4332 {

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
static   void /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC$0$Capture$captured(uint16_t arg_0x7e6887f8);
# 79 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Capture.nc"
static   void /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC$0$Atm128Capture$setEdge(bool arg_0x7e861c88);
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
static   void /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC$0$Atm128Interrupt$clear(void);
#line 40
static   void /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC$0$Atm128Interrupt$disable(void);
#line 59
static   void /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC$0$Atm128Interrupt$edge(bool arg_0x7e666120);
#line 35
static   void /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC$0$Atm128Interrupt$enable(void);
# 57 "/opt/tinyos-2.x/tos/interfaces/GpioInterrupt.nc"
static   void /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC$0$Interrupt$fired(void);
# 15 "/opt/tinyos-2.x/tos/chips/atm128/pins/Atm128GpioInterruptC.nc"
static inline error_t /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC$0$enable(bool rising);
#line 29
static inline   error_t /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC$0$Interrupt$enableFallingEdge(void);








static inline   void /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC$0$Atm128Interrupt$fired(void);
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
# 61 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline   void /*HplAtm128InterruptC.IntPin1*/HplAtm128InterruptPinP$1$IrqSignal$fired(void);

static inline    void /*HplAtm128InterruptC.IntPin1*/HplAtm128InterruptPinP$1$Irq$default$fired(void);
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
# 62 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
static  void HplCC2420InterruptsP$CCATimer$startOneShot(uint32_t arg_0x7e6049f0);




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
enum HplCC2420InterruptsP$__nesc_unnamed4333 {
#line 87
  HplCC2420InterruptsP$CCATask = 6U
};
#line 87
typedef int HplCC2420InterruptsP$__nesc_sillytask_CCATask[HplCC2420InterruptsP$CCATask];
#line 113
enum HplCC2420InterruptsP$__nesc_unnamed4334 {
#line 113
  HplCC2420InterruptsP$stopTask = 7U
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
# 95 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
static   void /*AlarmCounterMilliP.MilliInit*/Atm128TimerInitC$1$Timer$setScale(uint8_t arg_0x7e875250);
#line 58
static   void /*AlarmCounterMilliP.MilliInit*/Atm128TimerInitC$1$Timer$set(/*AlarmCounterMilliP.MilliInit*/Atm128TimerInitC$1$Timer$timer_size arg_0x7e8785b8);










static   void /*AlarmCounterMilliP.MilliInit*/Atm128TimerInitC$1$Timer$start(void);
# 42 "/opt/tinyos-2.x/tos/chips/atm128/timer/Atm128TimerInitC.nc"
static inline  error_t /*AlarmCounterMilliP.MilliInit*/Atm128TimerInitC$1$Init$init(void);








static inline   void /*AlarmCounterMilliP.MilliInit*/Atm128TimerInitC$1$Timer$overflow(void);
# 67 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
static   void /*AlarmCounterMilliP.MilliAlarm*/Atm128AlarmC$0$Alarm$fired(void);
# 53 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
static   void /*AlarmCounterMilliP.MilliAlarm*/Atm128AlarmC$0$HplAtm128Compare$reset(void);
#line 45
static   void /*AlarmCounterMilliP.MilliAlarm*/Atm128AlarmC$0$HplAtm128Compare$set(/*AlarmCounterMilliP.MilliAlarm*/Atm128AlarmC$0$HplAtm128Compare$size_type arg_0x7e855ef0);










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
static   void /*AlarmCounterMilliP.MilliCounter*/Atm128CounterC$1$Counter$overflow(void);
# 78 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
static   bool /*AlarmCounterMilliP.MilliCounter*/Atm128CounterC$1$Timer$test(void);
#line 52
static   /*AlarmCounterMilliP.MilliCounter*/Atm128CounterC$1$Timer$timer_size /*AlarmCounterMilliP.MilliCounter*/Atm128CounterC$1$Timer$get(void);
# 41 "/opt/tinyos-2.x/tos/chips/atm128/timer/Atm128CounterC.nc"
static inline   /*AlarmCounterMilliP.MilliCounter*/Atm128CounterC$1$timer_size /*AlarmCounterMilliP.MilliCounter*/Atm128CounterC$1$Counter$get(void);




static inline   bool /*AlarmCounterMilliP.MilliCounter*/Atm128CounterC$1$Counter$isOverflowPending(void);









static inline   void /*AlarmCounterMilliP.MilliCounter*/Atm128CounterC$1$Timer$overflow(void);
# 67 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
static   void /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$Alarm$fired(void);
# 53 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
static   /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$CounterFrom$size_type /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$CounterFrom$get(void);






static   bool /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$CounterFrom$isOverflowPending(void);










static   void /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$Counter$overflow(void);
# 92 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
static   void /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$AlarmFrom$startAt(/*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$AlarmFrom$size_type arg_0x7e931b80, /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$AlarmFrom$size_type arg_0x7e931d10);
#line 62
static   void /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$AlarmFrom$stop(void);
# 68 "/opt/tinyos-2.x/tos/lib/timer/TransformAlarmCounterC.nc"
/*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$upper_count_type /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$m_upper;
/*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$to_size_type /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$m_t0;
/*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$to_size_type /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$m_dt;
uint8_t /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$m_skip_overflows;

enum /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$__nesc_unnamed4335 {

  TransformAlarmCounterC$0$MAX_DELAY_LOG2 = 8 * sizeof(/*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$from_size_type ) - 1 - 0, 
  TransformAlarmCounterC$0$MAX_DELAY = (/*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$to_size_type )1 << /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$MAX_DELAY_LOG2
};

enum /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$__nesc_unnamed4336 {

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
static   void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$startAt(/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$size_type arg_0x7e931b80, /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$size_type arg_0x7e931d10);
#line 105
static   /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$size_type /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$getAlarm(void);
#line 62
static   void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$stop(void);
# 72 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
static  void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$fired(void);
# 63 "/opt/tinyos-2.x/tos/lib/timer/AlarmToTimerC.nc"
enum /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$__nesc_unnamed4337 {
#line 63
  AlarmToTimerC$0$fired = 8U
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
static  void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$startOneShotAt(uint32_t arg_0x7e601738, uint32_t arg_0x7e6018c8);
#line 67
static  void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$stop(void);




static  void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$fired(
# 37 "/opt/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x7e549010);
#line 60
enum /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$__nesc_unnamed4338 {
#line 60
  VirtualizeTimerC$0$updateFromTimer = 9U
};
#line 60
typedef int /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$__nesc_sillytask_updateFromTimer[/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$updateFromTimer];
#line 42
enum /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$__nesc_unnamed4339 {

  VirtualizeTimerC$0$NUM_TIMERS = 1, 
  VirtualizeTimerC$0$END_OF_LIST = 255
};








#line 48
typedef struct /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$__nesc_unnamed4340 {

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




static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$startTimer(uint8_t num, uint32_t t0, uint32_t dt, bool isoneshot);
#line 147
static inline  void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startOneShot(uint8_t num, uint32_t dt);




static inline  void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$stop(uint8_t num);
#line 192
static inline   void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$default$fired(uint8_t num);
# 47 "/opt/tinyos-2.x/tos/lib/timer/CounterToLocalTimeC.nc"
static inline   void /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC$0$Counter$overflow(void);
# 59 "/opt/tinyos-2.x/tos/interfaces/SpiPacket.nc"
static   error_t CC2420SpiImplP$SpiPacket$send(uint8_t *arg_0x7e4e25a0, uint8_t *arg_0x7e4e2748, uint16_t arg_0x7e4e28d8);
# 91 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420Fifo.nc"
static   void CC2420SpiImplP$Fifo$writeDone(
# 40 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420SpiImplP.nc"
uint8_t arg_0x7e4ecd50, 
# 91 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420Fifo.nc"
uint8_t *arg_0x7e4f9370, uint8_t arg_0x7e4f94f8, error_t arg_0x7e4f9680);
#line 71
static   void CC2420SpiImplP$Fifo$readDone(
# 40 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420SpiImplP.nc"
uint8_t arg_0x7e4ecd50, 
# 71 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420Fifo.nc"
uint8_t *arg_0x7e4fa240, uint8_t arg_0x7e4fa3c8, error_t arg_0x7e4fa550);
# 34 "/opt/tinyos-2.x/tos/interfaces/SpiByte.nc"
static   uint8_t CC2420SpiImplP$SpiByte$write(uint8_t arg_0x7e4e8d78);
# 101 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static   error_t CC2420SpiImplP$SpiResource$release(void);
#line 87
static   error_t CC2420SpiImplP$SpiResource$immediateRequest(void);
#line 78
static   error_t CC2420SpiImplP$SpiResource$request(void);
#line 92
static  void CC2420SpiImplP$Resource$granted(
# 39 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420SpiImplP.nc"
uint8_t arg_0x7e4ec3d0);
#line 54
enum CC2420SpiImplP$__nesc_unnamed4341 {
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
static   void Atm128SpiP$SpiPacket$sendDone(uint8_t *arg_0x7e4e0030, uint8_t *arg_0x7e4e01d8, uint16_t arg_0x7e4e0368, 
error_t arg_0x7e4e0500);
# 101 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static   error_t Atm128SpiP$ResourceArbiter$release(
# 84 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
uint8_t arg_0x7e4a5410);
# 87 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static   error_t Atm128SpiP$ResourceArbiter$immediateRequest(
# 84 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
uint8_t arg_0x7e4a5410);
# 78 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static   error_t Atm128SpiP$ResourceArbiter$request(
# 84 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
uint8_t arg_0x7e4a5410);
# 72 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128Spi.nc"
static   void Atm128SpiP$Spi$sleep(void);
#line 66
static   void Atm128SpiP$Spi$initMaster(void);
#line 96
static   void Atm128SpiP$Spi$enableInterrupt(bool arg_0x7e49b478);
#line 80
static   uint8_t Atm128SpiP$Spi$read(void);
#line 125
static   void Atm128SpiP$Spi$setMasterDoubleSpeed(bool arg_0x7e496680);
#line 114
static   void Atm128SpiP$Spi$setClock(uint8_t arg_0x7e497480);
#line 108
static   void Atm128SpiP$Spi$setClockPolarity(bool arg_0x7e499490);
#line 86
static   void Atm128SpiP$Spi$write(uint8_t arg_0x7e49d9f8);
#line 99
static   void Atm128SpiP$Spi$enableSpi(bool arg_0x7e49bc48);
#line 111
static   void Atm128SpiP$Spi$setClockPhase(bool arg_0x7e499c70);
# 92 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static  void Atm128SpiP$Resource$granted(
# 80 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
uint8_t arg_0x7e4a8010);
# 44 "/opt/tinyos-2.x/tos/interfaces/McuPowerState.nc"
static   void Atm128SpiP$McuPowerState$update(void);
# 80 "/opt/tinyos-2.x/tos/interfaces/ArbiterInfo.nc"
static   bool Atm128SpiP$ArbiterInfo$inUse(void);
# 90 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
uint8_t *Atm128SpiP$txBuffer;
uint8_t *Atm128SpiP$rxBuffer;
uint16_t Atm128SpiP$len;
uint16_t Atm128SpiP$pos;

enum Atm128SpiP$__nesc_unnamed4342 {
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
static   void HplAtm128SpiP$SPI$dataReady(uint8_t arg_0x7e49df08);
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
enum /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$__nesc_unnamed4343 {
#line 39
  FcfsResourceQueueC$0$NO_ENTRY = 0xFF
};
uint8_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$resQ[1U];
uint8_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$qHead = /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$NO_ENTRY;
uint8_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$qTail = /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$NO_ENTRY;

static inline  error_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$Init$init(void);




static inline   bool /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$FcfsQueue$isEmpty(void);



static inline   bool /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$FcfsQueue$isEnqueued(resource_client_id_t id);



static inline   resource_client_id_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$FcfsQueue$dequeue(void);
#line 72
static inline   error_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$FcfsQueue$enqueue(resource_client_id_t id);
# 43 "/opt/tinyos-2.x/tos/interfaces/ResourceRequested.nc"
static   void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceRequested$requested(
# 54 "/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x7e419c20);
# 51 "/opt/tinyos-2.x/tos/interfaces/ResourceRequested.nc"
static   void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceRequested$immediateRequested(
# 54 "/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x7e419c20);
# 55 "/opt/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
static   void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceConfigure$unconfigure(
# 58 "/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x7e418750);
# 49 "/opt/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
static   void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceConfigure$configure(
# 58 "/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x7e418750);
# 69 "/opt/tinyos-2.x/tos/interfaces/ResourceQueue.nc"
static   error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$Queue$enqueue(resource_client_id_t arg_0x7e4269f8);
#line 43
static   bool /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$Queue$isEmpty(void);
#line 60
static   resource_client_id_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$Queue$dequeue(void);
# 92 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static  void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$Resource$granted(
# 53 "/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x7e4192e0);
# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static   error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$grantedTask$postTask(void);
# 71 "/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
enum /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$__nesc_unnamed4344 {
#line 71
  SimpleArbiterP$0$grantedTask = 10U
};
#line 71
typedef int /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$__nesc_sillytask_grantedTask[/*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$grantedTask];
#line 64
enum /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$__nesc_unnamed4345 {
#line 64
  SimpleArbiterP$0$RES_IDLE = 0, SimpleArbiterP$0$RES_GRANTING = 1, SimpleArbiterP$0$RES_BUSY = 2
};
#line 65
enum /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$__nesc_unnamed4346 {
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
static   void CC2420TransmitP$BackoffTimer$start(CC2420TransmitP$BackoffTimer$size_type arg_0x7e932a00);






static   void CC2420TransmitP$BackoffTimer$stop(void);
# 85 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420Transmit.nc"
static   void CC2420TransmitP$Send$sendDone(message_t *arg_0x7e9a4770, error_t arg_0x7e9a48f8);
# 55 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420Register.nc"
static   cc2420_status_t CC2420TransmitP$TXCTRL$write(uint16_t arg_0x7e911c00);
# 35 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static   void CC2420TransmitP$CSN$makeOutput(void);
#line 29
static   void CC2420TransmitP$CSN$set(void);
static   void CC2420TransmitP$CSN$clr(void);
# 53 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420Receive.nc"
static   void CC2420TransmitP$CC2420Receive$sfd_dropped(void);
#line 47
static   void CC2420TransmitP$CC2420Receive$sfd(uint16_t arg_0x7e3c5750);
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
static   uint16_t CC2420TransmitP$CsmaBackoff$congestion(message_t *arg_0x7e9972a8);
#line 36
static   uint16_t CC2420TransmitP$CsmaBackoff$initial(message_t *arg_0x7e9a6cd0);
# 39 "/opt/tinyos-2.x/tos/interfaces/RadioTimeStamping.nc"
static   void CC2420TransmitP$TimeStamp$transmittedSFD(uint16_t arg_0x7e3d4030, message_t *arg_0x7e3d41e0);










static   void CC2420TransmitP$TimeStamp$receivedSFD(uint16_t arg_0x7e3d4710);
# 82 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420Fifo.nc"
static   cc2420_status_t CC2420TransmitP$TXFIFO$write(uint8_t *arg_0x7e4fab18, uint8_t arg_0x7e4faca0);
# 45 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420Strobe.nc"
static   cc2420_status_t CC2420TransmitP$STXON$strobe(void);
# 77 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420TransmitP.nc"
#line 67
typedef enum CC2420TransmitP$__nesc_unnamed4347 {
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





enum CC2420TransmitP$__nesc_unnamed4348 {
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
static   void CC2420ReceiveP$CC2420Receive$receive(uint8_t arg_0x7e3c4068, message_t *arg_0x7e3c4218);
# 29 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static   void CC2420ReceiveP$CSN$set(void);
static   void CC2420ReceiveP$CSN$clr(void);
# 67 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
static  message_t *CC2420ReceiveP$Receive$receive(message_t *arg_0x7ede1010, void *arg_0x7ede11b0, uint8_t arg_0x7ede1338);
# 101 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static   error_t CC2420ReceiveP$SpiResource$release(void);
#line 87
static   error_t CC2420ReceiveP$SpiResource$immediateRequest(void);
#line 78
static   error_t CC2420ReceiveP$SpiResource$request(void);
# 62 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420Fifo.nc"
static   error_t CC2420ReceiveP$RXFIFO$continueRead(uint8_t *arg_0x7e4fba70, uint8_t arg_0x7e4fbbf8);
#line 51
static   cc2420_status_t CC2420ReceiveP$RXFIFO$beginRead(uint8_t *arg_0x7e4fb2d8, uint8_t arg_0x7e4fb460);
# 43 "/opt/tinyos-2.x/tos/interfaces/GpioInterrupt.nc"
static   error_t CC2420ReceiveP$InterruptFIFOP$enableFallingEdge(void);
# 45 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420Strobe.nc"
static   cc2420_status_t CC2420ReceiveP$SFLUSHRX$strobe(void);
# 85 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420ReceiveP.nc"
enum CC2420ReceiveP$__nesc_unnamed4349 {
#line 85
  CC2420ReceiveP$receiveDone_task = 11U
};
#line 85
typedef int CC2420ReceiveP$__nesc_sillytask_receiveDone_task[CC2420ReceiveP$receiveDone_task];
#line 65
#line 60
typedef enum CC2420ReceiveP$__nesc_unnamed4350 {
  CC2420ReceiveP$S_STOPPED, 
  CC2420ReceiveP$S_STARTED, 
  CC2420ReceiveP$S_RX_HEADER, 
  CC2420ReceiveP$S_RX_PAYLOAD
} CC2420ReceiveP$cc2420_receive_state_t;

enum CC2420ReceiveP$__nesc_unnamed4351 {
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
# 64 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
static  error_t /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$SubSend$send(message_t *arg_0x7ea434c0, uint8_t arg_0x7ea43648);
# 99 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
static  void /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$AMSend$sendDone(
# 36 "/opt/tinyos-2.x/tos/lib/serial/SerialActiveMessageP.nc"
am_id_t arg_0x7e2c3a00, 
# 99 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
message_t *arg_0x7edf3eb8, error_t arg_0x7edf2068);
# 67 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
static  message_t */*SerialActiveMessageC.AM*/SerialActiveMessageP$0$Receive$receive(
# 37 "/opt/tinyos-2.x/tos/lib/serial/SerialActiveMessageP.nc"
am_id_t arg_0x7e2c13d8, 
# 67 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
message_t *arg_0x7ede1010, void *arg_0x7ede11b0, uint8_t arg_0x7ede1338);
# 49 "/opt/tinyos-2.x/tos/lib/serial/SerialActiveMessageP.nc"
static inline serial_header_t */*SerialActiveMessageC.AM*/SerialActiveMessageP$0$getHeader(message_t *msg);



static inline  error_t /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$AMSend$send(am_id_t id, am_addr_t dest, 
message_t *msg, 
uint8_t len);
#line 81
static inline  void /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$SubSend$sendDone(message_t *msg, error_t result);
#line 102
static inline  message_t */*SerialActiveMessageC.AM*/SerialActiveMessageP$0$SubReceive$receive(message_t *msg, void *payload, uint8_t len);







static inline  uint8_t /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$Packet$payloadLength(message_t *msg);
#line 134
static inline  am_addr_t /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$AMPacket$destination(message_t *amsg);
#line 158
static inline  am_id_t /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$AMPacket$type(message_t *amsg);
# 88 "/opt/tinyos-2.x/tos/interfaces/SplitControl.nc"
static  void SerialP$SplitControl$startDone(error_t arg_0x7ee80b78);
#line 110
static  void SerialP$SplitControl$stopDone(error_t arg_0x7ee736e0);
# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static   error_t SerialP$stopDoneTask$postTask(void);
# 73 "/opt/tinyos-2.x/tos/interfaces/StdControl.nc"
static  error_t SerialP$SerialControl$start(void);








static  error_t SerialP$SerialControl$stop(void);
# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static   error_t SerialP$RunTx$postTask(void);
#line 56
static   error_t SerialP$startDoneTask$postTask(void);
# 45 "/opt/tinyos-2.x/tos/lib/serial/SerialFrameComm.nc"
static   error_t SerialP$SerialFrameComm$putDelimiter(void);
#line 68
static   void SerialP$SerialFrameComm$resetReceive(void);
#line 54
static   error_t SerialP$SerialFrameComm$putData(uint8_t arg_0x7e221508);
# 70 "/opt/tinyos-2.x/tos/lib/serial/SendBytePacket.nc"
static   uint8_t SerialP$SendBytePacket$nextByte(void);









static   void SerialP$SendBytePacket$sendCompleted(error_t arg_0x7e228068);
# 51 "/opt/tinyos-2.x/tos/lib/serial/ReceiveBytePacket.nc"
static   error_t SerialP$ReceiveBytePacket$startPacket(void);






static   void SerialP$ReceiveBytePacket$byteReceived(uint8_t arg_0x7e225010);










static   void SerialP$ReceiveBytePacket$endPacket(error_t arg_0x7e2255e0);
# 188 "/opt/tinyos-2.x/tos/lib/serial/SerialP.nc"
enum SerialP$__nesc_unnamed4352 {
#line 188
  SerialP$RunTx = 12U
};
#line 188
typedef int SerialP$__nesc_sillytask_RunTx[SerialP$RunTx];
#line 319
enum SerialP$__nesc_unnamed4353 {
#line 319
  SerialP$startDoneTask = 13U
};
#line 319
typedef int SerialP$__nesc_sillytask_startDoneTask[SerialP$startDoneTask];




enum SerialP$__nesc_unnamed4354 {
#line 324
  SerialP$stopDoneTask = 14U
};
#line 324
typedef int SerialP$__nesc_sillytask_stopDoneTask[SerialP$stopDoneTask];
#line 78
enum SerialP$__nesc_unnamed4355 {
  SerialP$RX_DATA_BUFFER_SIZE = 2, 
  SerialP$TX_DATA_BUFFER_SIZE = 4, 
  SerialP$SERIAL_MTU = 255, 
  SerialP$SERIAL_VERSION = 1, 
  SerialP$ACK_QUEUE_SIZE = 5
};

enum SerialP$__nesc_unnamed4356 {
  SerialP$RXSTATE_NOSYNC, 
  SerialP$RXSTATE_PROTO, 
  SerialP$RXSTATE_TOKEN, 
  SerialP$RXSTATE_INFO, 
  SerialP$RXSTATE_INACTIVE
};

enum SerialP$__nesc_unnamed4357 {
  SerialP$TXSTATE_IDLE, 
  SerialP$TXSTATE_PROTO, 
  SerialP$TXSTATE_SEQNO, 
  SerialP$TXSTATE_INFO, 
  SerialP$TXSTATE_FCS1, 
  SerialP$TXSTATE_FCS2, 
  SerialP$TXSTATE_ENDFLAG, 
  SerialP$TXSTATE_ENDWAIT, 
  SerialP$TXSTATE_FINISH, 
  SerialP$TXSTATE_ERROR, 
  SerialP$TXSTATE_INACTIVE
};





#line 108
typedef enum SerialP$__nesc_unnamed4358 {
  SerialP$BUFFER_AVAILABLE, 
  SerialP$BUFFER_FILLING, 
  SerialP$BUFFER_COMPLETE
} SerialP$tx_data_buffer_states_t;

enum SerialP$__nesc_unnamed4359 {
  SerialP$TX_ACK_INDEX = 0, 
  SerialP$TX_DATA_INDEX = 1, 
  SerialP$TX_BUFFER_COUNT = 2
};






#line 121
typedef struct SerialP$__nesc_unnamed4360 {
  uint8_t writePtr;
  uint8_t readPtr;
  uint8_t buf[SerialP$RX_DATA_BUFFER_SIZE + 1];
} SerialP$rx_buf_t;




#line 127
typedef struct SerialP$__nesc_unnamed4361 {
  uint8_t state;
  uint8_t buf;
} SerialP$tx_buf_t;





#line 132
typedef struct SerialP$__nesc_unnamed4362 {
  uint8_t writePtr;
  uint8_t readPtr;
  uint8_t buf[SerialP$ACK_QUEUE_SIZE + 1];
} SerialP$ack_queue_t;



SerialP$rx_buf_t SerialP$rxBuf;
SerialP$tx_buf_t SerialP$txBuf[SerialP$TX_BUFFER_COUNT];



uint8_t SerialP$rxState;
uint8_t SerialP$rxByteCnt;
uint8_t SerialP$rxProto;
uint8_t SerialP$rxSeqno;
uint16_t SerialP$rxCRC;



 uint8_t SerialP$txState;
 uint8_t SerialP$txByteCnt;
 uint8_t SerialP$txProto;
 uint8_t SerialP$txSeqno;
 uint16_t SerialP$txCRC;
uint8_t SerialP$txPending;
 uint8_t SerialP$txIndex;


SerialP$ack_queue_t SerialP$ackQ;

bool SerialP$offPending = FALSE;



static __inline void SerialP$txInit(void);
static __inline void SerialP$rxInit(void);
static __inline void SerialP$ackInit(void);

static __inline bool SerialP$ack_queue_is_full(void);
static __inline bool SerialP$ack_queue_is_empty(void);
static __inline void SerialP$ack_queue_push(uint8_t token);
static __inline uint8_t SerialP$ack_queue_top(void);
static inline uint8_t SerialP$ack_queue_pop(void);




static __inline void SerialP$rx_buffer_push(uint8_t data);
static __inline uint8_t SerialP$rx_buffer_top(void);
static __inline uint8_t SerialP$rx_buffer_pop(void);
static __inline uint16_t SerialP$rx_current_crc(void);

static void SerialP$rx_state_machine(bool isDelimeter, uint8_t data);
static void SerialP$MaybeScheduleTx(void);




static __inline void SerialP$txInit(void);
#line 204
static __inline void SerialP$rxInit(void);








static __inline void SerialP$ackInit(void);



static inline  error_t SerialP$Init$init(void);
#line 231
static __inline bool SerialP$ack_queue_is_full(void);









static __inline bool SerialP$ack_queue_is_empty(void);





static __inline void SerialP$ack_queue_push(uint8_t token);









static __inline uint8_t SerialP$ack_queue_top(void);









static inline uint8_t SerialP$ack_queue_pop(void);
#line 294
static __inline void SerialP$rx_buffer_push(uint8_t data);



static __inline uint8_t SerialP$rx_buffer_top(void);



static __inline uint8_t SerialP$rx_buffer_pop(void);





static __inline uint16_t SerialP$rx_current_crc(void);










static inline  void SerialP$startDoneTask$runTask(void);




static inline  void SerialP$stopDoneTask$runTask(void);




static inline  error_t SerialP$SplitControl$start(void);




static void SerialP$testOff(void);
#line 371
static inline   void SerialP$SerialFrameComm$delimiterReceived(void);


static inline   void SerialP$SerialFrameComm$dataReceived(uint8_t data);



static inline bool SerialP$valid_rx_proto(uint8_t proto);










static void SerialP$rx_state_machine(bool isDelimeter, uint8_t data);
#line 489
static void SerialP$MaybeScheduleTx(void);










static inline   error_t SerialP$SendBytePacket$completeSend(void);








static inline   error_t SerialP$SendBytePacket$startSend(uint8_t b);
#line 526
static inline  void SerialP$RunTx$runTask(void);
#line 629
static inline   void SerialP$SerialFrameComm$putDone(void);
# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static   error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveTask$postTask(void);
# 89 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
static  void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$Send$sendDone(
# 40 "/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x7e172ef8, 
# 89 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
message_t *arg_0x7ea42598, error_t arg_0x7ea42720);
# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static   error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$signalSendDone$postTask(void);
# 67 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
static  message_t */*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$Receive$receive(
# 39 "/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x7e172780, 
# 67 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
message_t *arg_0x7ede1010, void *arg_0x7ede11b0, uint8_t arg_0x7ede1338);
# 31 "/opt/tinyos-2.x/tos/lib/serial/SerialPacketInfo.nc"
static   uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$PacketInfo$upperLength(
# 43 "/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x7e1718d8, 
# 31 "/opt/tinyos-2.x/tos/lib/serial/SerialPacketInfo.nc"
message_t *arg_0x7e251068, uint8_t arg_0x7e2511f8);
#line 15
static   uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$PacketInfo$offset(
# 43 "/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x7e1718d8);
# 23 "/opt/tinyos-2.x/tos/lib/serial/SerialPacketInfo.nc"
static   uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$PacketInfo$dataLinkLength(
# 43 "/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x7e1718d8, 
# 23 "/opt/tinyos-2.x/tos/lib/serial/SerialPacketInfo.nc"
message_t *arg_0x7e260860, uint8_t arg_0x7e2609f0);
# 60 "/opt/tinyos-2.x/tos/lib/serial/SendBytePacket.nc"
static   error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$SendBytePacket$completeSend(void);
#line 51
static   error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$SendBytePacket$startSend(uint8_t arg_0x7e229030);
# 144 "/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
enum /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$__nesc_unnamed4363 {
#line 144
  SerialDispatcherP$0$signalSendDone = 15U
};
#line 144
typedef int /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$__nesc_sillytask_signalSendDone[/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$signalSendDone];
#line 261
enum /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$__nesc_unnamed4364 {
#line 261
  SerialDispatcherP$0$receiveTask = 16U
};
#line 261
typedef int /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$__nesc_sillytask_receiveTask[/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveTask];
#line 55
#line 51
typedef enum /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$__nesc_unnamed4365 {
  SerialDispatcherP$0$SEND_STATE_IDLE = 0, 
  SerialDispatcherP$0$SEND_STATE_BEGIN = 1, 
  SerialDispatcherP$0$SEND_STATE_DATA = 2
} /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$send_state_t;

enum /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$__nesc_unnamed4366 {
  SerialDispatcherP$0$RECV_STATE_IDLE = 0, 
  SerialDispatcherP$0$RECV_STATE_BEGIN = 1, 
  SerialDispatcherP$0$RECV_STATE_DATA = 2
};






#line 63
typedef struct /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$__nesc_unnamed4367 {
  uint8_t which : 1;
  uint8_t bufZeroLocked : 1;
  uint8_t bufOneLocked : 1;
  uint8_t state : 2;
} /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$recv_state_t;



/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$recv_state_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveState = { 0, 0, 0, /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$RECV_STATE_IDLE };
uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$recvType = TOS_SERIAL_UNKNOWN_ID;
uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$recvIndex = 0;


message_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$messages[2];
message_t */*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$messagePtrs[2] = { &/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$messages[0], &/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$messages[1] };




uint8_t */*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveBuffer = (uint8_t *)&/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$messages[0];

uint8_t */*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$sendBuffer = (void *)0;
/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$send_state_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$sendState = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$SEND_STATE_IDLE;
uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$sendLen = 0;
uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$sendIndex = 0;
 error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$sendError = SUCCESS;
bool /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$sendCancelled = FALSE;
uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$sendId = 0;


uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveTaskPending = FALSE;
uart_id_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveTaskType = 0;
uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveTaskWhich;
message_t */*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveTaskBuf = (void *)0;
uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveTaskSize = 0;

static inline  error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$Send$send(uint8_t id, message_t *msg, uint8_t len);
#line 144
static inline  void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$signalSendDone$runTask(void);
#line 164
static inline   uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$SendBytePacket$nextByte(void);
#line 180
static inline   void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$SendBytePacket$sendCompleted(error_t error);




static inline bool /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$isCurrentBufferLocked(void);



static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$lockCurrentBuffer(void);








static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$unlockBuffer(uint8_t which);








static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveBufferSwap(void);




static inline   error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$ReceiveBytePacket$startPacket(void);
#line 230
static inline   void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$ReceiveBytePacket$byteReceived(uint8_t b);
#line 261
static inline  void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveTask$runTask(void);
#line 282
static   void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$ReceiveBytePacket$endPacket(error_t result);
#line 341
static inline    uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$PacketInfo$default$offset(uart_id_t id);


static inline    uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$PacketInfo$default$dataLinkLength(uart_id_t id, message_t *msg, 
uint8_t upperLen);


static inline    uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$PacketInfo$default$upperLength(uart_id_t id, message_t *msg, 
uint8_t dataLinkLen);




static inline   message_t */*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$Receive$default$receive(uart_id_t idxxx, message_t *msg, 
void *payload, 
uint8_t len);


static inline   void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$Send$default$sendDone(uart_id_t idxxx, message_t *msg, error_t error);
# 48 "/opt/tinyos-2.x/tos/interfaces/UartStream.nc"
static   error_t HdlcTranslateC$UartStream$send(uint8_t *arg_0x7e10eb20, uint16_t arg_0x7e10ecb0);
# 83 "/opt/tinyos-2.x/tos/lib/serial/SerialFrameComm.nc"
static   void HdlcTranslateC$SerialFrameComm$dataReceived(uint8_t arg_0x7e220758);





static   void HdlcTranslateC$SerialFrameComm$putDone(void);
#line 74
static   void HdlcTranslateC$SerialFrameComm$delimiterReceived(void);
# 47 "/opt/tinyos-2.x/tos/lib/serial/HdlcTranslateC.nc"
#line 44
typedef struct HdlcTranslateC$__nesc_unnamed4368 {
  uint8_t sendEscape : 1;
  uint8_t receiveEscape : 1;
} HdlcTranslateC$HdlcState;


 HdlcTranslateC$HdlcState HdlcTranslateC$state = { 0, 0 };
 uint8_t HdlcTranslateC$txTemp;
 uint8_t HdlcTranslateC$m_data;


static inline   void HdlcTranslateC$SerialFrameComm$resetReceive(void);





static inline   void HdlcTranslateC$UartStream$receivedByte(uint8_t data);
#line 86
static   error_t HdlcTranslateC$SerialFrameComm$putDelimiter(void);





static   error_t HdlcTranslateC$SerialFrameComm$putData(uint8_t data);
#line 104
static inline   void HdlcTranslateC$UartStream$sendDone(uint8_t *buf, uint16_t len, 
error_t error);










static inline   void HdlcTranslateC$UartStream$receiveDone(uint8_t *buf, uint16_t len, error_t error);
# 73 "/opt/tinyos-2.x/tos/interfaces/StdControl.nc"
static  error_t /*Atm128Uart0C.UartP*/Atm128UartP$0$HplUartTxControl$start(void);








static  error_t /*Atm128Uart0C.UartP*/Atm128UartP$0$HplUartTxControl$stop(void);
# 79 "/opt/tinyos-2.x/tos/interfaces/UartStream.nc"
static   void /*Atm128Uart0C.UartP*/Atm128UartP$0$UartStream$receivedByte(uint8_t arg_0x7e10a3f8);
#line 99
static   void /*Atm128Uart0C.UartP*/Atm128UartP$0$UartStream$receiveDone(uint8_t *arg_0x7e108118, uint16_t arg_0x7e1082a8, error_t arg_0x7e108430);
#line 57
static   void /*Atm128Uart0C.UartP*/Atm128UartP$0$UartStream$sendDone(uint8_t *arg_0x7e10b370, uint16_t arg_0x7e10b500, error_t arg_0x7e10b688);
# 46 "/opt/tinyos-2.x/tos/chips/atm128/HplAtm128Uart.nc"
static   void /*Atm128Uart0C.UartP*/Atm128UartP$0$HplUart$tx(uint8_t arg_0x7e0ca4f0);
# 73 "/opt/tinyos-2.x/tos/interfaces/StdControl.nc"
static  error_t /*Atm128Uart0C.UartP*/Atm128UartP$0$HplUartRxControl$start(void);








static  error_t /*Atm128Uart0C.UartP*/Atm128UartP$0$HplUartRxControl$stop(void);
# 56 "/opt/tinyos-2.x/tos/chips/atm128/Atm128UartP.nc"
 uint8_t */*Atm128Uart0C.UartP*/Atm128UartP$0$m_tx_buf;
#line 56
 uint8_t */*Atm128Uart0C.UartP*/Atm128UartP$0$m_rx_buf;
 uint16_t /*Atm128Uart0C.UartP*/Atm128UartP$0$m_tx_len;
#line 57
 uint16_t /*Atm128Uart0C.UartP*/Atm128UartP$0$m_rx_len;
 uint16_t /*Atm128Uart0C.UartP*/Atm128UartP$0$m_tx_pos;
#line 58
 uint16_t /*Atm128Uart0C.UartP*/Atm128UartP$0$m_rx_pos;
 uint16_t /*Atm128Uart0C.UartP*/Atm128UartP$0$m_byte_time;

static inline  error_t /*Atm128Uart0C.UartP*/Atm128UartP$0$Init$init(void);







static inline  error_t /*Atm128Uart0C.UartP*/Atm128UartP$0$StdControl$start(void);





static inline  error_t /*Atm128Uart0C.UartP*/Atm128UartP$0$StdControl$stop(void);
#line 107
static inline   void /*Atm128Uart0C.UartP*/Atm128UartP$0$HplUart$rxDone(uint8_t data);
#line 123
static   error_t /*Atm128Uart0C.UartP*/Atm128UartP$0$UartStream$send(uint8_t *buf, uint16_t len);
#line 139
static inline   void /*Atm128Uart0C.UartP*/Atm128UartP$0$HplUart$txDone(void);
#line 174
static inline   void /*Atm128Uart0C.UartP*/Atm128UartP$0$Counter$overflow(void);
# 49 "/opt/tinyos-2.x/tos/chips/atm128/HplAtm128Uart.nc"
static   void HplAtm128UartP$HplUart0$rxDone(uint8_t arg_0x7e0c8010);
#line 47
static   void HplAtm128UartP$HplUart0$txDone(void);

static   void HplAtm128UartP$HplUart1$rxDone(uint8_t arg_0x7e0c8010);
#line 47
static   void HplAtm128UartP$HplUart1$txDone(void);
# 60 "/opt/tinyos-2.x/tos/chips/atm128/timer/Atm128Calibrate.nc"
static   uint16_t HplAtm128UartP$Atm128Calibrate$baudrateRegister(uint32_t arg_0x7ef52570);
# 44 "/opt/tinyos-2.x/tos/interfaces/McuPowerState.nc"
static   void HplAtm128UartP$McuPowerState$update(void);
# 87 "/opt/tinyos-2.x/tos/chips/atm128/HplAtm128UartP.nc"
static inline  error_t HplAtm128UartP$Uart0Init$init(void);
#line 107
static inline  error_t HplAtm128UartP$Uart0TxControl$start(void);






static inline  error_t HplAtm128UartP$Uart0TxControl$stop(void);






static inline  error_t HplAtm128UartP$Uart0RxControl$start(void);






static inline  error_t HplAtm128UartP$Uart0RxControl$stop(void);
#line 167
static   void HplAtm128UartP$HplUart0$tx(uint8_t data);






void __vector_18(void) __attribute((signal))   ;





void __vector_20(void) __attribute((interrupt))   ;



static inline  error_t HplAtm128UartP$Uart1Init$init(void);
#line 271
void __vector_30(void) __attribute((signal))   ;




void __vector_32(void) __attribute((interrupt))   ;





static inline    void HplAtm128UartP$HplUart1$default$txDone(void);
static inline    void HplAtm128UartP$HplUart1$default$rxDone(uint8_t data);
# 49 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
static   void HplAtm128Timer3P$CompareA$fired(void);
# 51 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Capture.nc"
static   void HplAtm128Timer3P$Capture$captured(HplAtm128Timer3P$Capture$size_type arg_0x7e8626a0);
# 49 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
static   void HplAtm128Timer3P$CompareB$fired(void);
#line 49
static   void HplAtm128Timer3P$CompareC$fired(void);
# 61 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
static   void HplAtm128Timer3P$Timer$overflow(void);
# 47 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer3P.nc"
static inline   uint16_t HplAtm128Timer3P$Timer$get(void);


static inline   void HplAtm128Timer3P$Timer$set(uint16_t t);








static inline   void HplAtm128Timer3P$Timer$setScale(uint8_t s);









static inline   Atm128TimerCtrlCapture_t HplAtm128Timer3P$TimerCtrl$getCtrlCapture(void);









static inline uint16_t HplAtm128Timer3P$TimerCtrlCapture2int(Atm128TimerCtrlCapture_t x);






static inline   void HplAtm128Timer3P$TimerCtrl$setCtrlCapture(Atm128_TCCR3B_t x);
#line 127
static inline   void HplAtm128Timer3P$Timer$start(void);
#line 188
static inline    void HplAtm128Timer3P$CompareA$default$fired(void);
void __vector_26(void) __attribute((interrupt))   ;


static inline    void HplAtm128Timer3P$CompareB$default$fired(void);
void __vector_27(void) __attribute((interrupt))   ;


static inline    void HplAtm128Timer3P$CompareC$default$fired(void);
void __vector_28(void) __attribute((interrupt))   ;


static inline    void HplAtm128Timer3P$Capture$default$captured(uint16_t time);
void __vector_25(void) __attribute((interrupt))   ;



void __vector_29(void) __attribute((interrupt))   ;
# 95 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
static   void /*InitThreeP.InitThree*/Atm128TimerInitC$2$Timer$setScale(uint8_t arg_0x7e875250);
#line 58
static   void /*InitThreeP.InitThree*/Atm128TimerInitC$2$Timer$set(/*InitThreeP.InitThree*/Atm128TimerInitC$2$Timer$timer_size arg_0x7e8785b8);










static   void /*InitThreeP.InitThree*/Atm128TimerInitC$2$Timer$start(void);
# 42 "/opt/tinyos-2.x/tos/chips/atm128/timer/Atm128TimerInitC.nc"
static inline  error_t /*InitThreeP.InitThree*/Atm128TimerInitC$2$Init$init(void);








static inline   void /*InitThreeP.InitThree*/Atm128TimerInitC$2$Timer$overflow(void);
# 71 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
static   void /*CounterThree16C.NCounter*/Atm128CounterC$2$Counter$overflow(void);
# 56 "/opt/tinyos-2.x/tos/chips/atm128/timer/Atm128CounterC.nc"
static inline   void /*CounterThree16C.NCounter*/Atm128CounterC$2$Timer$overflow(void);
# 71 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
static   void /*CounterMicro32C.Transform32*/TransformCounterC$1$Counter$overflow(void);
# 56 "/opt/tinyos-2.x/tos/lib/timer/TransformCounterC.nc"
/*CounterMicro32C.Transform32*/TransformCounterC$1$upper_count_type /*CounterMicro32C.Transform32*/TransformCounterC$1$m_upper;

enum /*CounterMicro32C.Transform32*/TransformCounterC$1$__nesc_unnamed4369 {

  TransformCounterC$1$LOW_SHIFT_RIGHT = 0, 
  TransformCounterC$1$HIGH_SHIFT_LEFT = 8 * sizeof(/*CounterMicro32C.Transform32*/TransformCounterC$1$from_size_type ) - /*CounterMicro32C.Transform32*/TransformCounterC$1$LOW_SHIFT_RIGHT, 
  TransformCounterC$1$NUM_UPPER_BITS = 8 * sizeof(/*CounterMicro32C.Transform32*/TransformCounterC$1$to_size_type ) - 8 * sizeof(/*CounterMicro32C.Transform32*/TransformCounterC$1$from_size_type ) + 0, 



  TransformCounterC$1$OVERFLOW_MASK = /*CounterMicro32C.Transform32*/TransformCounterC$1$NUM_UPPER_BITS ? ((/*CounterMicro32C.Transform32*/TransformCounterC$1$upper_count_type )2 << (/*CounterMicro32C.Transform32*/TransformCounterC$1$NUM_UPPER_BITS - 1)) - 1 : 0
};
#line 122
static inline   void /*CounterMicro32C.Transform32*/TransformCounterC$1$CounterFrom$overflow(void);
# 40 "/opt/tinyos-2.x/tos/lib/serial/SerialPacketInfoActiveMessageP.nc"
static inline   uint8_t SerialPacketInfoActiveMessageP$Info$offset(void);


static inline   uint8_t SerialPacketInfoActiveMessageP$Info$dataLinkLength(message_t *msg, uint8_t upperLen);


static inline   uint8_t SerialPacketInfoActiveMessageP$Info$upperLength(message_t *msg, uint8_t dataLinkLen);
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

# 81 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer1P.nc"
static inline uint16_t HplAtm128Timer1P$TimerCtrlCapture2int(Atm128TimerCtrlCapture_t x)
#line 81
{
#line 81
  union __nesc_unnamed4370 {
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
inline static   void /*InitOneP.InitOne*/Atm128TimerInitC$0$Timer$setScale(uint8_t arg_0x7e875250){
#line 95
  HplAtm128Timer1P$Timer$setScale(arg_0x7e875250);
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
inline static   void /*InitOneP.InitOne*/Atm128TimerInitC$0$Timer$start(void){
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
inline static   void /*InitOneP.InitOne*/Atm128TimerInitC$0$Timer$set(/*InitOneP.InitOne*/Atm128TimerInitC$0$Timer$timer_size arg_0x7e8785b8){
#line 58
  HplAtm128Timer1P$Timer$set(arg_0x7e8785b8);
#line 58
}
#line 58
# 42 "/opt/tinyos-2.x/tos/chips/atm128/timer/Atm128TimerInitC.nc"
static inline  error_t /*InitOneP.InitOne*/Atm128TimerInitC$0$Init$init(void)
#line 42
{
  /* atomic removed: atomic calls only */
#line 43
  {
    /*InitOneP.InitOne*/Atm128TimerInitC$0$Timer$set(0);
    /*InitOneP.InitOne*/Atm128TimerInitC$0$Timer$start();
    /*InitOneP.InitOne*/Atm128TimerInitC$0$Timer$setScale(4);
  }
  return SUCCESS;
}

# 49 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer0AsyncC.nc"
static inline  error_t HplAtm128Timer0AsyncC$Init$init(void)
#line 49
{
  * (volatile uint8_t *)(0x30 + 0x20) |= 1 << 3;
  return SUCCESS;
}

# 79 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer3P.nc"
static inline uint16_t HplAtm128Timer3P$TimerCtrlCapture2int(Atm128TimerCtrlCapture_t x)
#line 79
{
#line 79
  union __nesc_unnamed4371 {
#line 79
    Atm128TimerCtrlCapture_t f;
#line 79
    uint16_t t;
  } 
#line 79
  c = { .f = x };

#line 79
  return c.t;
}





static inline   void HplAtm128Timer3P$TimerCtrl$setCtrlCapture(Atm128_TCCR3B_t x)
#line 86
{
  * (volatile uint8_t *)0x8A = HplAtm128Timer3P$TimerCtrlCapture2int(x);
}

#line 69
static inline   Atm128TimerCtrlCapture_t HplAtm128Timer3P$TimerCtrl$getCtrlCapture(void)
#line 69
{
  return * (Atm128TimerCtrlCapture_t *)& * (volatile uint8_t *)0x8A;
}

#line 59
static inline   void HplAtm128Timer3P$Timer$setScale(uint8_t s)
#line 59
{
  Atm128TimerCtrlCapture_t x = HplAtm128Timer3P$TimerCtrl$getCtrlCapture();

#line 61
  x.bits.cs = s;
  HplAtm128Timer3P$TimerCtrl$setCtrlCapture(x);
}

# 95 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static   void /*InitThreeP.InitThree*/Atm128TimerInitC$2$Timer$setScale(uint8_t arg_0x7e875250){
#line 95
  HplAtm128Timer3P$Timer$setScale(arg_0x7e875250);
#line 95
}
#line 95
# 127 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer3P.nc"
static inline   void HplAtm128Timer3P$Timer$start(void)
#line 127
{
#line 127
  * (volatile uint8_t *)0x7D |= 1 << 2;
}

# 69 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static   void /*InitThreeP.InitThree*/Atm128TimerInitC$2$Timer$start(void){
#line 69
  HplAtm128Timer3P$Timer$start();
#line 69
}
#line 69
# 50 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer3P.nc"
static inline   void HplAtm128Timer3P$Timer$set(uint16_t t)
#line 50
{
#line 50
  * (volatile uint16_t *)0x88 = t;
}

# 58 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static   void /*InitThreeP.InitThree*/Atm128TimerInitC$2$Timer$set(/*InitThreeP.InitThree*/Atm128TimerInitC$2$Timer$timer_size arg_0x7e8785b8){
#line 58
  HplAtm128Timer3P$Timer$set(arg_0x7e8785b8);
#line 58
}
#line 58
# 42 "/opt/tinyos-2.x/tos/chips/atm128/timer/Atm128TimerInitC.nc"
static inline  error_t /*InitThreeP.InitThree*/Atm128TimerInitC$2$Init$init(void)
#line 42
{
  /* atomic removed: atomic calls only */
#line 43
  {
    /*InitThreeP.InitThree*/Atm128TimerInitC$2$Timer$set(0);
    /*InitThreeP.InitThree*/Atm128TimerInitC$2$Timer$start();
    /*InitThreeP.InitThree*/Atm128TimerInitC$2$Timer$setScale(2);
  }
  return SUCCESS;
}

# 51 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
inline static  error_t MotePlatformP$SubInit$init(void){
#line 51
  unsigned char result;
#line 51

#line 51
  result = /*InitThreeP.InitThree*/Atm128TimerInitC$2$Init$init();
#line 51
  result = ecombine(result, HplAtm128Timer0AsyncC$Init$init());
#line 51
  result = ecombine(result, /*InitOneP.InitOne*/Atm128TimerInitC$0$Init$init());
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
# 235 "/usr/lib/ncc/nesc_nx.h"
static __inline uint8_t __nesc_ntoh_uint8(const void *source)
#line 235
{
  const uint8_t *base = source;

#line 237
  return base[0];
}

# 49 "/opt/tinyos-2.x/tos/lib/serial/SerialActiveMessageP.nc"
static inline serial_header_t */*SerialActiveMessageC.AM*/SerialActiveMessageP$0$getHeader(message_t *msg)
#line 49
{
  return (serial_header_t *)(msg->data - sizeof(serial_header_t ));
}

#line 158
static inline  am_id_t /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$AMPacket$type(message_t *amsg)
#line 158
{
  serial_header_t *header = /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$getHeader(amsg);

#line 160
  return __nesc_ntoh_uint8((unsigned char *)&header->type);
}

# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static   error_t BaseP$uartSendTask$postTask(void){
#line 56
  unsigned char result;
#line 56

#line 56
  result = SchedulerBasicP$TaskBasic$postTask(BaseP$uartSendTask);
#line 56

#line 56
  return result;
#line 56
}
#line 56
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
inline static   void BaseP$Leds$led2Toggle(void){
#line 89
  LedsP$Leds$led2Toggle();
#line 89
}
#line 89
# 93 "BaseP.nc"
static inline void BaseP$failBlink(void)
#line 93
{
  BaseP$Leds$led2Toggle();
}

#line 189
static inline  void BaseP$UartSend$sendDone(am_id_t id, message_t *msg, error_t error)
#line 189
{
  if (error != SUCCESS) {
    BaseP$failBlink();
    }
  else {
#line 193
    { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
      if (msg == BaseP$uartQueue[BaseP$uartOut]) 
        {
          if (++BaseP$uartOut >= BaseP$UART_QUEUE_LEN) {
            BaseP$uartOut = 0;
            }
#line 198
          if (BaseP$uartFull) {
            BaseP$uartFull = FALSE;
            }
        }
#line 201
      __nesc_atomic_end(__nesc_atomic); }
    }
#line 201
  BaseP$uartSendTask$postTask();
}

# 99 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
inline static  void /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$AMSend$sendDone(am_id_t arg_0x7e2c3a00, message_t *arg_0x7edf3eb8, error_t arg_0x7edf2068){
#line 99
  BaseP$UartSend$sendDone(arg_0x7e2c3a00, arg_0x7edf3eb8, arg_0x7edf2068);
#line 99
}
#line 99
# 81 "/opt/tinyos-2.x/tos/lib/serial/SerialActiveMessageP.nc"
static inline  void /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$SubSend$sendDone(message_t *msg, error_t result)
#line 81
{
  /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$AMSend$sendDone(/*SerialActiveMessageC.AM*/SerialActiveMessageP$0$AMPacket$type(msg), msg, result);
}

# 359 "/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
static inline   void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$Send$default$sendDone(uart_id_t idxxx, message_t *msg, error_t error)
#line 359
{
  return;
}

# 89 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
inline static  void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$Send$sendDone(uart_id_t arg_0x7e172ef8, message_t *arg_0x7ea42598, error_t arg_0x7ea42720){
#line 89
  switch (arg_0x7e172ef8) {
#line 89
    case TOS_SERIAL_ACTIVE_MESSAGE_ID:
#line 89
      /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$SubSend$sendDone(arg_0x7ea42598, arg_0x7ea42720);
#line 89
      break;
#line 89
    default:
#line 89
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$Send$default$sendDone(arg_0x7e172ef8, arg_0x7ea42598, arg_0x7ea42720);
#line 89
      break;
#line 89
    }
#line 89
}
#line 89
# 144 "/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
static inline  void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$signalSendDone$runTask(void)
#line 144
{
  error_t error;

  /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$sendState = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$SEND_STATE_IDLE;
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 148
    error = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$sendError;
#line 148
    __nesc_atomic_end(__nesc_atomic); }

  if (/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$sendCancelled) {
#line 150
    error = ECANCEL;
    }
#line 151
  /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$Send$sendDone(/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$sendId, (message_t *)/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$sendBuffer, error);
}

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

# 198 "/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$unlockBuffer(uint8_t which)
#line 198
{
  if (which) {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveState.bufOneLocked = 0;
    }
  else {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveState.bufZeroLocked = 0;
    }
}

# 89 "BaseP.nc"
static inline void BaseP$dropBlink(void)
#line 89
{
  BaseP$Leds$led2Toggle();
}

# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static   error_t BaseP$radioSendTask$postTask(void){
#line 56
  unsigned char result;
#line 56

#line 56
  result = SchedulerBasicP$TaskBasic$postTask(BaseP$radioSendTask);
#line 56

#line 56
  return result;
#line 56
}
#line 56
# 204 "BaseP.nc"
static inline  message_t *BaseP$UartReceive$receive(am_id_t id, message_t *msg, 
void *payload, 
uint8_t len)
#line 206
{
  message_t *ret = msg;
  bool reflectToken = FALSE;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    if (!BaseP$radioFull) 
      {
        reflectToken = TRUE;
        ret = BaseP$radioQueue[BaseP$radioIn];
        BaseP$radioQueue[BaseP$radioIn] = msg;
        if (++BaseP$radioIn >= BaseP$RADIO_QUEUE_LEN) {
          BaseP$radioIn = 0;
          }
#line 218
        if (BaseP$radioIn == BaseP$radioOut) {
          BaseP$radioFull = TRUE;
          }
        if (!BaseP$radioBusy) 
          {
            BaseP$radioSendTask$postTask();
            BaseP$radioBusy = TRUE;
          }
      }
    else {
      BaseP$dropBlink();
      }
#line 229
    __nesc_atomic_end(__nesc_atomic); }
  if (reflectToken) {
    }


  return ret;
}

# 67 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
inline static  message_t */*SerialActiveMessageC.AM*/SerialActiveMessageP$0$Receive$receive(am_id_t arg_0x7e2c13d8, message_t *arg_0x7ede1010, void *arg_0x7ede11b0, uint8_t arg_0x7ede1338){
#line 67
  nx_struct message_t *result;
#line 67

#line 67
  result = BaseP$UartReceive$receive(arg_0x7e2c13d8, arg_0x7ede1010, arg_0x7ede11b0, arg_0x7ede1338);
#line 67

#line 67
  return result;
#line 67
}
#line 67
# 102 "/opt/tinyos-2.x/tos/lib/serial/SerialActiveMessageP.nc"
static inline  message_t */*SerialActiveMessageC.AM*/SerialActiveMessageP$0$SubReceive$receive(message_t *msg, void *payload, uint8_t len)
#line 102
{
  return /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$Receive$receive(/*SerialActiveMessageC.AM*/SerialActiveMessageP$0$AMPacket$type(msg), msg, msg->data, len);
}

# 354 "/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
static inline   message_t */*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$Receive$default$receive(uart_id_t idxxx, message_t *msg, 
void *payload, 
uint8_t len)
#line 356
{
  return msg;
}

# 67 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
inline static  message_t */*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$Receive$receive(uart_id_t arg_0x7e172780, message_t *arg_0x7ede1010, void *arg_0x7ede11b0, uint8_t arg_0x7ede1338){
#line 67
  nx_struct message_t *result;
#line 67

#line 67
  switch (arg_0x7e172780) {
#line 67
    case TOS_SERIAL_ACTIVE_MESSAGE_ID:
#line 67
      result = /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$SubReceive$receive(arg_0x7ede1010, arg_0x7ede11b0, arg_0x7ede1338);
#line 67
      break;
#line 67
    default:
#line 67
      result = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$Receive$default$receive(arg_0x7e172780, arg_0x7ede1010, arg_0x7ede11b0, arg_0x7ede1338);
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
# 46 "/opt/tinyos-2.x/tos/lib/serial/SerialPacketInfoActiveMessageP.nc"
static inline   uint8_t SerialPacketInfoActiveMessageP$Info$upperLength(message_t *msg, uint8_t dataLinkLen)
#line 46
{
  return dataLinkLen - sizeof(serial_header_t );
}

# 348 "/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
static inline    uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$PacketInfo$default$upperLength(uart_id_t id, message_t *msg, 
uint8_t dataLinkLen)
#line 349
{
  return 0;
}

# 31 "/opt/tinyos-2.x/tos/lib/serial/SerialPacketInfo.nc"
inline static   uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$PacketInfo$upperLength(uart_id_t arg_0x7e1718d8, message_t *arg_0x7e251068, uint8_t arg_0x7e2511f8){
#line 31
  unsigned char result;
#line 31

#line 31
  switch (arg_0x7e1718d8) {
#line 31
    case TOS_SERIAL_ACTIVE_MESSAGE_ID:
#line 31
      result = SerialPacketInfoActiveMessageP$Info$upperLength(arg_0x7e251068, arg_0x7e2511f8);
#line 31
      break;
#line 31
    default:
#line 31
      result = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$PacketInfo$default$upperLength(arg_0x7e1718d8, arg_0x7e251068, arg_0x7e2511f8);
#line 31
      break;
#line 31
    }
#line 31

#line 31
  return result;
#line 31
}
#line 31
# 40 "/opt/tinyos-2.x/tos/lib/serial/SerialPacketInfoActiveMessageP.nc"
static inline   uint8_t SerialPacketInfoActiveMessageP$Info$offset(void)
#line 40
{
  return (uint8_t )(sizeof(message_header_t ) - sizeof(serial_header_t ));
}

# 341 "/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
static inline    uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$PacketInfo$default$offset(uart_id_t id)
#line 341
{
  return 0;
}

# 15 "/opt/tinyos-2.x/tos/lib/serial/SerialPacketInfo.nc"
inline static   uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$PacketInfo$offset(uart_id_t arg_0x7e1718d8){
#line 15
  unsigned char result;
#line 15

#line 15
  switch (arg_0x7e1718d8) {
#line 15
    case TOS_SERIAL_ACTIVE_MESSAGE_ID:
#line 15
      result = SerialPacketInfoActiveMessageP$Info$offset();
#line 15
      break;
#line 15
    default:
#line 15
      result = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$PacketInfo$default$offset(arg_0x7e1718d8);
#line 15
      break;
#line 15
    }
#line 15

#line 15
  return result;
#line 15
}
#line 15
# 261 "/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
static inline  void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveTask$runTask(void)
#line 261
{
  uart_id_t myType;
  message_t *myBuf;
  uint8_t mySize;
  uint8_t myWhich;

#line 266
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 266
    {
      myType = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveTaskType;
      myBuf = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveTaskBuf;
      mySize = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveTaskSize;
      myWhich = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveTaskWhich;
    }
#line 271
    __nesc_atomic_end(__nesc_atomic); }
  mySize -= /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$PacketInfo$offset(myType);
  mySize = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$PacketInfo$upperLength(myType, myBuf, mySize);
  myBuf = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$Receive$receive(myType, myBuf, myBuf, mySize);
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 275
    {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$messagePtrs[myWhich] = myBuf;
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$unlockBuffer(myWhich);
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveTaskPending = FALSE;
    }
#line 279
    __nesc_atomic_end(__nesc_atomic); }
}

# 128 "BaseP.nc"
static inline  void BaseP$SerialControl$stopDone(error_t error)
#line 128
{
}

# 110 "/opt/tinyos-2.x/tos/interfaces/SplitControl.nc"
inline static  void SerialP$SplitControl$stopDone(error_t arg_0x7ee736e0){
#line 110
  BaseP$SerialControl$stopDone(arg_0x7ee736e0);
#line 110
}
#line 110
# 123 "/opt/tinyos-2.x/tos/chips/atm128/McuSleepC.nc"
static inline   void McuSleepC$McuPowerState$update(void)
#line 123
{
}

# 44 "/opt/tinyos-2.x/tos/interfaces/McuPowerState.nc"
inline static   void HplAtm128UartP$McuPowerState$update(void){
#line 44
  McuSleepC$McuPowerState$update();
#line 44
}
#line 44
# 128 "/opt/tinyos-2.x/tos/chips/atm128/HplAtm128UartP.nc"
static inline  error_t HplAtm128UartP$Uart0RxControl$stop(void)
#line 128
{
  * (volatile uint8_t *)(0x0A + 0x20) &= ~(1 << 7);
  * (volatile uint8_t *)(0x0A + 0x20) &= ~(1 << 4);
  HplAtm128UartP$McuPowerState$update();
  return SUCCESS;
}

# 82 "/opt/tinyos-2.x/tos/interfaces/StdControl.nc"
inline static  error_t /*Atm128Uart0C.UartP*/Atm128UartP$0$HplUartRxControl$stop(void){
#line 82
  unsigned char result;
#line 82

#line 82
  result = HplAtm128UartP$Uart0RxControl$stop();
#line 82

#line 82
  return result;
#line 82
}
#line 82
# 114 "/opt/tinyos-2.x/tos/chips/atm128/HplAtm128UartP.nc"
static inline  error_t HplAtm128UartP$Uart0TxControl$stop(void)
#line 114
{
  * (volatile uint8_t *)(0x0A + 0x20) &= ~(1 << 6);
  * (volatile uint8_t *)(0x0A + 0x20) &= ~(1 << 3);
  HplAtm128UartP$McuPowerState$update();
  return SUCCESS;
}

# 82 "/opt/tinyos-2.x/tos/interfaces/StdControl.nc"
inline static  error_t /*Atm128Uart0C.UartP*/Atm128UartP$0$HplUartTxControl$stop(void){
#line 82
  unsigned char result;
#line 82

#line 82
  result = HplAtm128UartP$Uart0TxControl$stop();
#line 82

#line 82
  return result;
#line 82
}
#line 82
# 75 "/opt/tinyos-2.x/tos/chips/atm128/Atm128UartP.nc"
static inline  error_t /*Atm128Uart0C.UartP*/Atm128UartP$0$StdControl$stop(void)
#line 75
{
  /*Atm128Uart0C.UartP*/Atm128UartP$0$HplUartTxControl$stop();
  /*Atm128Uart0C.UartP*/Atm128UartP$0$HplUartRxControl$stop();
  return SUCCESS;
}

# 82 "/opt/tinyos-2.x/tos/interfaces/StdControl.nc"
inline static  error_t SerialP$SerialControl$stop(void){
#line 82
  unsigned char result;
#line 82

#line 82
  result = /*Atm128Uart0C.UartP*/Atm128UartP$0$StdControl$stop();
#line 82

#line 82
  return result;
#line 82
}
#line 82
# 324 "/opt/tinyos-2.x/tos/lib/serial/SerialP.nc"
static inline  void SerialP$stopDoneTask$runTask(void)
#line 324
{
  SerialP$SerialControl$stop();
  SerialP$SplitControl$stopDone(SUCCESS);
}

# 122 "BaseP.nc"
static inline  void BaseP$SerialControl$startDone(error_t error)
#line 122
{
  if (error == SUCCESS) {
      BaseP$uartFull = FALSE;
    }
}

# 88 "/opt/tinyos-2.x/tos/interfaces/SplitControl.nc"
inline static  void SerialP$SplitControl$startDone(error_t arg_0x7ee80b78){
#line 88
  BaseP$SerialControl$startDone(arg_0x7ee80b78);
#line 88
}
#line 88
# 121 "/opt/tinyos-2.x/tos/chips/atm128/HplAtm128UartP.nc"
static inline  error_t HplAtm128UartP$Uart0RxControl$start(void)
#line 121
{
  * (volatile uint8_t *)(0x0A + 0x20) |= 1 << 7;
  * (volatile uint8_t *)(0x0A + 0x20) |= 1 << 4;
  HplAtm128UartP$McuPowerState$update();
  return SUCCESS;
}

# 73 "/opt/tinyos-2.x/tos/interfaces/StdControl.nc"
inline static  error_t /*Atm128Uart0C.UartP*/Atm128UartP$0$HplUartRxControl$start(void){
#line 73
  unsigned char result;
#line 73

#line 73
  result = HplAtm128UartP$Uart0RxControl$start();
#line 73

#line 73
  return result;
#line 73
}
#line 73
# 107 "/opt/tinyos-2.x/tos/chips/atm128/HplAtm128UartP.nc"
static inline  error_t HplAtm128UartP$Uart0TxControl$start(void)
#line 107
{
  * (volatile uint8_t *)(0x0A + 0x20) |= 1 << 6;
  * (volatile uint8_t *)(0x0A + 0x20) |= 1 << 3;
  HplAtm128UartP$McuPowerState$update();
  return SUCCESS;
}

# 73 "/opt/tinyos-2.x/tos/interfaces/StdControl.nc"
inline static  error_t /*Atm128Uart0C.UartP*/Atm128UartP$0$HplUartTxControl$start(void){
#line 73
  unsigned char result;
#line 73

#line 73
  result = HplAtm128UartP$Uart0TxControl$start();
#line 73

#line 73
  return result;
#line 73
}
#line 73
# 69 "/opt/tinyos-2.x/tos/chips/atm128/Atm128UartP.nc"
static inline  error_t /*Atm128Uart0C.UartP*/Atm128UartP$0$StdControl$start(void)
#line 69
{
  /*Atm128Uart0C.UartP*/Atm128UartP$0$HplUartTxControl$start();
  /*Atm128Uart0C.UartP*/Atm128UartP$0$HplUartRxControl$start();
  return SUCCESS;
}

# 73 "/opt/tinyos-2.x/tos/interfaces/StdControl.nc"
inline static  error_t SerialP$SerialControl$start(void){
#line 73
  unsigned char result;
#line 73

#line 73
  result = /*Atm128Uart0C.UartP*/Atm128UartP$0$StdControl$start();
#line 73

#line 73
  return result;
#line 73
}
#line 73
# 319 "/opt/tinyos-2.x/tos/lib/serial/SerialP.nc"
static inline  void SerialP$startDoneTask$runTask(void)
#line 319
{
  SerialP$SerialControl$start();
  SerialP$SplitControl$startDone(SUCCESS);
}

# 45 "/opt/tinyos-2.x/tos/lib/serial/SerialFrameComm.nc"
inline static   error_t SerialP$SerialFrameComm$putDelimiter(void){
#line 45
  unsigned char result;
#line 45

#line 45
  result = HdlcTranslateC$SerialFrameComm$putDelimiter();
#line 45

#line 45
  return result;
#line 45
}
#line 45
# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static   error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$signalSendDone$postTask(void){
#line 56
  unsigned char result;
#line 56

#line 56
  result = SchedulerBasicP$TaskBasic$postTask(/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$signalSendDone);
#line 56

#line 56
  return result;
#line 56
}
#line 56
# 180 "/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
static inline   void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$SendBytePacket$sendCompleted(error_t error)
#line 180
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 181
    /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$sendError = error;
#line 181
    __nesc_atomic_end(__nesc_atomic); }
  /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$signalSendDone$postTask();
}

# 80 "/opt/tinyos-2.x/tos/lib/serial/SendBytePacket.nc"
inline static   void SerialP$SendBytePacket$sendCompleted(error_t arg_0x7e228068){
#line 80
  /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$SendBytePacket$sendCompleted(arg_0x7e228068);
#line 80
}
#line 80
# 241 "/opt/tinyos-2.x/tos/lib/serial/SerialP.nc"
static __inline bool SerialP$ack_queue_is_empty(void)
#line 241
{
  bool ret;

#line 243
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 243
    ret = SerialP$ackQ.writePtr == SerialP$ackQ.readPtr;
#line 243
    __nesc_atomic_end(__nesc_atomic); }
  return ret;
}











static __inline uint8_t SerialP$ack_queue_top(void)
#line 257
{
  uint8_t tmp = 0;

  /* atomic removed: atomic calls only */
#line 259
  {
    if (!SerialP$ack_queue_is_empty()) {
        tmp = SerialP$ackQ.buf[SerialP$ackQ.readPtr];
      }
  }
  return tmp;
}

static inline uint8_t SerialP$ack_queue_pop(void)
#line 267
{
  uint8_t retval = 0;

#line 269
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 269
    {
      if (SerialP$ackQ.writePtr != SerialP$ackQ.readPtr) {
          retval = SerialP$ackQ.buf[SerialP$ackQ.readPtr];
          if (++ SerialP$ackQ.readPtr > SerialP$ACK_QUEUE_SIZE) {
#line 272
            SerialP$ackQ.readPtr = 0;
            }
        }
    }
#line 275
    __nesc_atomic_end(__nesc_atomic); }
#line 275
  return retval;
}

#line 526
static inline  void SerialP$RunTx$runTask(void)
#line 526
{
  uint8_t idle;
  uint8_t done;
  uint8_t fail;









  error_t result = SUCCESS;
  bool send_completed = FALSE;
  bool start_it = FALSE;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 543
    {
      SerialP$txPending = 0;
      idle = SerialP$txState == SerialP$TXSTATE_IDLE;
      done = SerialP$txState == SerialP$TXSTATE_FINISH;
      fail = SerialP$txState == SerialP$TXSTATE_ERROR;
      if (done || fail) {
          SerialP$txState = SerialP$TXSTATE_IDLE;
          SerialP$txBuf[SerialP$txIndex].state = SerialP$BUFFER_AVAILABLE;
        }
    }
#line 552
    __nesc_atomic_end(__nesc_atomic); }


  if (done || fail) {
      SerialP$txSeqno++;
      if (SerialP$txProto == SERIAL_PROTO_ACK) {
          SerialP$ack_queue_pop();
        }
      else {
          result = done ? SUCCESS : FAIL;
          send_completed = TRUE;
        }
      idle = TRUE;
    }


  if (idle) {
      bool goInactive;

#line 570
      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 570
        goInactive = SerialP$offPending;
#line 570
        __nesc_atomic_end(__nesc_atomic); }
      if (goInactive) {
          { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 572
            SerialP$txState = SerialP$TXSTATE_INACTIVE;
#line 572
            __nesc_atomic_end(__nesc_atomic); }
        }
      else {

          uint8_t myAckState;
          uint8_t myDataState;

#line 578
          { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 578
            {
              myAckState = SerialP$txBuf[SerialP$TX_ACK_INDEX].state;
              myDataState = SerialP$txBuf[SerialP$TX_DATA_INDEX].state;
            }
#line 581
            __nesc_atomic_end(__nesc_atomic); }
          if (!SerialP$ack_queue_is_empty() && myAckState == SerialP$BUFFER_AVAILABLE) {
              { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 583
                {
                  SerialP$txBuf[SerialP$TX_ACK_INDEX].state = SerialP$BUFFER_COMPLETE;
                  SerialP$txBuf[SerialP$TX_ACK_INDEX].buf = SerialP$ack_queue_top();
                }
#line 586
                __nesc_atomic_end(__nesc_atomic); }
              SerialP$txProto = SERIAL_PROTO_ACK;
              SerialP$txIndex = SerialP$TX_ACK_INDEX;
              start_it = TRUE;
            }
          else {
#line 591
            if (myDataState == SerialP$BUFFER_FILLING || myDataState == SerialP$BUFFER_COMPLETE) {
                SerialP$txProto = SERIAL_PROTO_PACKET_NOACK;
                SerialP$txIndex = SerialP$TX_DATA_INDEX;
                start_it = TRUE;
              }
            else {
              }
            }
        }
    }
  else {
    }


  if (send_completed) {
      SerialP$SendBytePacket$sendCompleted(result);
    }

  if (SerialP$txState == SerialP$TXSTATE_INACTIVE) {
      SerialP$testOff();
      return;
    }

  if (start_it) {

      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 616
        {
          SerialP$txCRC = 0;
          SerialP$txByteCnt = 0;
          SerialP$txState = SerialP$TXSTATE_PROTO;
        }
#line 620
        __nesc_atomic_end(__nesc_atomic); }
      if (SerialP$SerialFrameComm$putDelimiter() != SUCCESS) {
          { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 622
            SerialP$txState = SerialP$TXSTATE_ERROR;
#line 622
            __nesc_atomic_end(__nesc_atomic); }
          SerialP$MaybeScheduleTx();
        }
    }
}

# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static   error_t SerialP$stopDoneTask$postTask(void){
#line 56
  unsigned char result;
#line 56

#line 56
  result = SchedulerBasicP$TaskBasic$postTask(SerialP$stopDoneTask);
#line 56

#line 56
  return result;
#line 56
}
#line 56
inline static   error_t SerialP$RunTx$postTask(void){
#line 56
  unsigned char result;
#line 56

#line 56
  result = SchedulerBasicP$TaskBasic$postTask(SerialP$RunTx);
#line 56

#line 56
  return result;
#line 56
}
#line 56
# 240 "/usr/lib/ncc/nesc_nx.h"
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

# 156 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static inline   message_t *CC2420ActiveMessageP$Snoop$default$receive(am_id_t id, message_t *msg, void *payload, uint8_t len)
#line 156
{
  return msg;
}

# 67 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
inline static  message_t *CC2420ActiveMessageP$Snoop$receive(am_id_t arg_0x7ea53900, message_t *arg_0x7ede1010, void *arg_0x7ede11b0, uint8_t arg_0x7ede1338){
#line 67
  nx_struct message_t *result;
#line 67

#line 67
    result = CC2420ActiveMessageP$Snoop$default$receive(arg_0x7ea53900, arg_0x7ede1010, arg_0x7ede11b0, arg_0x7ede1338);
#line 67

#line 67
  return result;
#line 67
}
#line 67
# 132 "BaseP.nc"
static inline  message_t *BaseP$RadioReceive$receive(am_id_t id, message_t *msg, 
void *payload, 
uint8_t len)
#line 134
{
  message_t *ret = msg;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 137
    {
      if (!BaseP$uartFull) 
        {
          ret = BaseP$uartQueue[BaseP$uartIn];
          BaseP$uartQueue[BaseP$uartIn] = msg;

          BaseP$uartIn = (BaseP$uartIn + 1) % BaseP$UART_QUEUE_LEN;

          if (BaseP$uartIn == BaseP$uartOut) {
            BaseP$uartFull = TRUE;
            }
          if (!BaseP$uartBusy) 
            {
              BaseP$uartSendTask$postTask();
              BaseP$uartBusy = TRUE;
            }
        }
      else {
        BaseP$dropBlink();
        }
    }
#line 157
    __nesc_atomic_end(__nesc_atomic); }
  return ret;
}

# 67 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
inline static  message_t *CC2420ActiveMessageP$Receive$receive(am_id_t arg_0x7ea53168, message_t *arg_0x7ede1010, void *arg_0x7ede11b0, uint8_t arg_0x7ede1338){
#line 67
  nx_struct message_t *result;
#line 67

#line 67
  result = BaseP$RadioReceive$receive(arg_0x7ea53168, arg_0x7ede1010, arg_0x7ede11b0, arg_0x7ede1338);
#line 67

#line 67
  return result;
#line 67
}
#line 67
# 276 "/usr/lib/ncc/nesc_nx.h"
static __inline uint16_t __nesc_ntoh_leuint16(const void *source)
#line 276
{
  const uint8_t *base = source;

#line 278
  return ((uint16_t )base[1] << 8) | base[0];
}

# 55 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static inline cc2420_header_t *CC2420ActiveMessageP$getHeader(message_t *msg)
#line 55
{
  return (cc2420_header_t *)(msg->data - sizeof(cc2420_header_t ));
}

#line 117
static inline  am_addr_t CC2420ActiveMessageP$AMPacket$destination(message_t *amsg)
#line 117
{
  cc2420_header_t *header = CC2420ActiveMessageP$getHeader(amsg);

#line 119
  return __nesc_ntoh_leuint16((unsigned char *)&header->dest);
}

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

#line 137
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
inline static  message_t *CC2420ReceiveP$Receive$receive(message_t *arg_0x7ede1010, void *arg_0x7ede11b0, uint8_t arg_0x7ede1338){
#line 67
  nx_struct message_t *result;
#line 67

#line 67
  result = CC2420ActiveMessageP$SubReceive$receive(arg_0x7ede1010, arg_0x7ede11b0, arg_0x7ede1338);
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
# 168 "/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
static inline    void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceConfigure$default$configure(uint8_t id)
#line 168
{
}

# 49 "/opt/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
inline static   void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceConfigure$configure(uint8_t arg_0x7e418750){
#line 49
    /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceConfigure$default$configure(arg_0x7e418750);
#line 49
}
#line 49
# 166 "/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
static inline    void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceRequested$default$immediateRequested(uint8_t id)
#line 166
{
}

# 51 "/opt/tinyos-2.x/tos/interfaces/ResourceRequested.nc"
inline static   void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceRequested$immediateRequested(uint8_t arg_0x7e419c20){
#line 51
    /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceRequested$default$immediateRequested(arg_0x7e419c20);
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
inline static   error_t Atm128SpiP$ResourceArbiter$immediateRequest(uint8_t arg_0x7e4a5410){
#line 87
  unsigned char result;
#line 87

#line 87
  result = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$Resource$immediateRequest(arg_0x7e4a5410);
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
inline static   void Atm128SpiP$Spi$setMasterDoubleSpeed(bool arg_0x7e496680){
#line 125
  HplAtm128SpiP$SPI$setMasterDoubleSpeed(arg_0x7e496680);
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
inline static   void Atm128SpiP$Spi$setClockPolarity(bool arg_0x7e499490){
#line 108
  HplAtm128SpiP$SPI$setClockPolarity(arg_0x7e499490);
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
inline static   void Atm128SpiP$Spi$setClockPhase(bool arg_0x7e499c70){
#line 111
  HplAtm128SpiP$SPI$setClockPhase(arg_0x7e499c70);
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
inline static   void Atm128SpiP$Spi$setClock(uint8_t arg_0x7e497480){
#line 114
  HplAtm128SpiP$SPI$setClock(arg_0x7e497480);
#line 114
}
#line 114
# 59 "/opt/tinyos-2.x/tos/interfaces/SpiPacket.nc"
inline static   error_t CC2420SpiImplP$SpiPacket$send(uint8_t *arg_0x7e4e25a0, uint8_t *arg_0x7e4e2748, uint16_t arg_0x7e4e28d8){
#line 59
  unsigned char result;
#line 59

#line 59
  result = Atm128SpiP$SpiPacket$send(arg_0x7e4e25a0, arg_0x7e4e2748, arg_0x7e4e28d8);
#line 59

#line 59
  return result;
#line 59
}
#line 59
# 144 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420SpiImplP.nc"
static inline   error_t CC2420SpiImplP$Fifo$continueRead(uint8_t addr, uint8_t *data, 
uint8_t len)
#line 145
{
  CC2420SpiImplP$SpiPacket$send((void *)0, data, len);
  return SUCCESS;
}

# 34 "/opt/tinyos-2.x/tos/interfaces/SpiByte.nc"
inline static   uint8_t CC2420SpiImplP$SpiByte$write(uint8_t arg_0x7e4e8d78){
#line 34
  unsigned char result;
#line 34

#line 34
  result = Atm128SpiP$SpiByte$write(arg_0x7e4e8d78);
#line 34

#line 34
  return result;
#line 34
}
#line 34
# 130 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420SpiImplP.nc"
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
inline static   cc2420_status_t CC2420ReceiveP$RXFIFO$beginRead(uint8_t *arg_0x7e4fb2d8, uint8_t arg_0x7e4fb460){
#line 51
  unsigned char result;
#line 51

#line 51
  result = CC2420SpiImplP$Fifo$beginRead(CC2420_RXFIFO, arg_0x7e4fb2d8, arg_0x7e4fb460);
#line 51

#line 51
  return result;
#line 51
}
#line 51
# 100 "/opt/tinyos-2.x/tos/chips/atm128/spi/HplAtm128SpiP.nc"
static inline   void HplAtm128SpiP$SPI$write(uint8_t d)
#line 100
{
#line 100
  * (volatile uint8_t *)(0x0F + 0x20) = d;
}

# 86 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128Spi.nc"
inline static   void Atm128SpiP$Spi$write(uint8_t arg_0x7e49d9f8){
#line 86
  HplAtm128SpiP$SPI$write(arg_0x7e49d9f8);
#line 86
}
#line 86
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
static inline   bool /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$FcfsQueue$isEnqueued(resource_client_id_t id)
#line 54
{
  return /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$resQ[id] != /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$NO_ENTRY || /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$qTail == id;
}

#line 72
static inline   error_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$FcfsQueue$enqueue(resource_client_id_t id)
#line 72
{
  /* atomic removed: atomic calls only */
#line 73
  {
    if (!/*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$FcfsQueue$isEnqueued(id)) {
        if (/*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$qHead == /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$NO_ENTRY) {
          /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$qHead = id;
          }
        else {
#line 78
          /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$resQ[/*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$qTail] = id;
          }
#line 79
        /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$qTail = id;
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
inline static   error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$Queue$enqueue(resource_client_id_t arg_0x7e4269f8){
#line 69
  unsigned char result;
#line 69

#line 69
  result = /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$FcfsQueue$enqueue(arg_0x7e4269f8);
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
inline static   void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceRequested$requested(uint8_t arg_0x7e419c20){
#line 43
    /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceRequested$default$requested(arg_0x7e419c20);
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
inline static   error_t Atm128SpiP$ResourceArbiter$request(uint8_t arg_0x7e4a5410){
#line 78
  unsigned char result;
#line 78

#line 78
  result = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$Resource$request(arg_0x7e4a5410);
#line 78

#line 78
  return result;
#line 78
}
#line 78
# 55 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420Register.nc"
inline static   cc2420_status_t CC2420ControlP$MDMCTRL0$write(uint16_t arg_0x7e911c00){
#line 55
  unsigned char result;
#line 55

#line 55
  result = CC2420SpiImplP$Reg$write(CC2420_MDMCTRL0, arg_0x7e911c00);
#line 55

#line 55
  return result;
#line 55
}
#line 55
inline static   cc2420_status_t CC2420ControlP$FSCTRL$write(uint16_t arg_0x7e911c00){
#line 55
  unsigned char result;
#line 55

#line 55
  result = CC2420SpiImplP$Reg$write(CC2420_FSCTRL, arg_0x7e911c00);
#line 55

#line 55
  return result;
#line 55
}
#line 55
inline static   cc2420_status_t CC2420ControlP$IOCFG0$write(uint16_t arg_0x7e911c00){
#line 55
  unsigned char result;
#line 55

#line 55
  result = CC2420SpiImplP$Reg$write(CC2420_IOCFG0, arg_0x7e911c00);
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
inline static   cc2420_status_t CC2420ControlP$IOCFG1$write(uint16_t arg_0x7e911c00){
#line 55
  unsigned char result;
#line 55

#line 55
  result = CC2420SpiImplP$Reg$write(CC2420_IOCFG1, arg_0x7e911c00);
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

# 281 "/usr/lib/ncc/nesc_nx.h"
static __inline uint16_t __nesc_hton_leuint16(void *target, uint16_t value)
#line 281
{
  uint8_t *base = target;

#line 283
  base[0] = value;
  base[1] = value >> 8;
  return value;
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
inline static   cc2420_status_t CC2420ControlP$PANID$write(uint8_t arg_0x7e915610, uint8_t *arg_0x7e9157b8, uint8_t arg_0x7e915940){
#line 63
  unsigned char result;
#line 63

#line 63
  result = CC2420SpiImplP$Ram$write(CC2420_RAM_PANID, arg_0x7e915610, arg_0x7e9157b8, arg_0x7e915940);
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
inline static  void CC2420SpiImplP$Resource$granted(uint8_t arg_0x7e4ec3d0){
#line 92
  switch (arg_0x7e4ec3d0) {
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
      CC2420SpiImplP$Resource$default$granted(arg_0x7e4ec3d0);
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
inline static  void Atm128SpiP$Resource$granted(uint8_t arg_0x7e4a8010){
#line 92
  switch (arg_0x7e4a8010) {
#line 92
    case 0U:
#line 92
      CC2420SpiImplP$SpiResource$granted();
#line 92
      break;
#line 92
    default:
#line 92
      Atm128SpiP$Resource$default$granted(arg_0x7e4a8010);
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
inline static  void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$Resource$granted(uint8_t arg_0x7e4192e0){
#line 92
  Atm128SpiP$ResourceArbiter$granted(arg_0x7e4192e0);
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

# 30 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   void CC2420TransmitP$CSN$clr(void){
#line 30
  /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP$8$IO$clr();
#line 30
}
#line 30
# 55 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420Register.nc"
inline static   cc2420_status_t CC2420TransmitP$TXCTRL$write(uint16_t arg_0x7e911c00){
#line 55
  unsigned char result;
#line 55

#line 55
  result = CC2420SpiImplP$Reg$write(CC2420_TXCTRL, arg_0x7e911c00);
#line 55

#line 55
  return result;
#line 55
}
#line 55
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
inline static   cc2420_status_t CC2420TransmitP$TXFIFO$write(uint8_t *arg_0x7e4fab18, uint8_t arg_0x7e4faca0){
#line 82
  unsigned char result;
#line 82

#line 82
  result = CC2420SpiImplP$Fifo$write(CC2420_TXFIFO, arg_0x7e4fab18, arg_0x7e4faca0);
#line 82

#line 82
  return result;
#line 82
}
#line 82
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
inline static   void Atm128SpiP$Spi$enableSpi(bool arg_0x7e49bc48){
#line 99
  HplAtm128SpiP$SPI$enableSpi(arg_0x7e49bc48);
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
inline static   void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceConfigure$unconfigure(uint8_t arg_0x7e418750){
#line 55
    /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceConfigure$default$unconfigure(arg_0x7e418750);
#line 55
}
#line 55
# 58 "/opt/tinyos-2.x/tos/system/FcfsResourceQueueC.nc"
static inline   resource_client_id_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$FcfsQueue$dequeue(void)
#line 58
{
  /* atomic removed: atomic calls only */
#line 59
  {
    if (/*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$qHead != /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$NO_ENTRY) {
        uint8_t id = /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$qHead;

#line 62
        /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$qHead = /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$resQ[/*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$qHead];
        if (/*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$qHead == /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$NO_ENTRY) {
          /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$qTail = /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$NO_ENTRY;
          }
#line 65
        /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$resQ[id] = /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$NO_ENTRY;
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
      /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$NO_ENTRY;

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
  result = /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$FcfsQueue$dequeue();
#line 60

#line 60
  return result;
#line 60
}
#line 60
# 50 "/opt/tinyos-2.x/tos/system/FcfsResourceQueueC.nc"
static inline   bool /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$FcfsQueue$isEmpty(void)
#line 50
{
  return /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$qHead == /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$NO_ENTRY;
}

# 43 "/opt/tinyos-2.x/tos/interfaces/ResourceQueue.nc"
inline static   bool /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$Queue$isEmpty(void){
#line 43
  unsigned char result;
#line 43

#line 43
  result = /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$FcfsQueue$isEmpty();
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
inline static   error_t Atm128SpiP$ResourceArbiter$release(uint8_t arg_0x7e4a5410){
#line 101
  unsigned char result;
#line 101

#line 101
  result = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$Resource$release(arg_0x7e4a5410);
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
inline static   uint16_t CC2420TransmitP$CsmaBackoff$congestion(message_t *arg_0x7e9972a8){
#line 43
  unsigned int result;
#line 43

#line 43
  result = CC2420CsmaP$CsmaBackoff$congestion(arg_0x7e9972a8);
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
inline static   /*CounterOne16C.NCounter*/Atm128CounterC$0$Timer$timer_size /*CounterOne16C.NCounter*/Atm128CounterC$0$Timer$get(void){
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
static inline   /*CounterOne16C.NCounter*/Atm128CounterC$0$timer_size /*CounterOne16C.NCounter*/Atm128CounterC$0$Counter$get(void)
{
  return /*CounterOne16C.NCounter*/Atm128CounterC$0$Timer$get();
}

# 53 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
inline static   /*Counter32khz32C.Transform32*/TransformCounterC$0$CounterFrom$size_type /*Counter32khz32C.Transform32*/TransformCounterC$0$CounterFrom$get(void){
#line 53
  unsigned int result;
#line 53

#line 53
  result = /*CounterOne16C.NCounter*/Atm128CounterC$0$Counter$get();
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
inline static   bool /*CounterOne16C.NCounter*/Atm128CounterC$0$Timer$test(void){
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
static inline   bool /*CounterOne16C.NCounter*/Atm128CounterC$0$Counter$isOverflowPending(void)
{
  return /*CounterOne16C.NCounter*/Atm128CounterC$0$Timer$test();
}

# 60 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
inline static   bool /*Counter32khz32C.Transform32*/TransformCounterC$0$CounterFrom$isOverflowPending(void){
#line 60
  unsigned char result;
#line 60

#line 60
  result = /*CounterOne16C.NCounter*/Atm128CounterC$0$Counter$isOverflowPending();
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
inline static   void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$1$HplAtm128Compare$set(/*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$1$HplAtm128Compare$size_type arg_0x7e855ef0){
#line 45
  HplAtm128Timer1P$CompareA$set(arg_0x7e855ef0);
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
inline static   void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$AlarmFrom$startAt(/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$AlarmFrom$size_type arg_0x7e931b80, /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$AlarmFrom$size_type arg_0x7e931d10){
#line 92
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$1$Alarm$startAt(arg_0x7e931b80, arg_0x7e931d10);
#line 92
}
#line 92
inline static   void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$startAt(/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$size_type arg_0x7e931b80, /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$size_type arg_0x7e931d10){
#line 92
  /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$Alarm$startAt(arg_0x7e931b80, arg_0x7e931d10);
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
inline static  void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$startOneShotAt(uint32_t arg_0x7e601738, uint32_t arg_0x7e6018c8){
#line 118
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$startOneShotAt(arg_0x7e601738, arg_0x7e6018c8);
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

# 55 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer0AsyncC.nc"
static inline   uint8_t HplAtm128Timer0AsyncC$Timer$get(void)
#line 55
{
#line 55
  return * (volatile uint8_t *)(0x32 + 0x20);
}

# 52 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static   /*AlarmCounterMilliP.MilliCounter*/Atm128CounterC$1$Timer$timer_size /*AlarmCounterMilliP.MilliCounter*/Atm128CounterC$1$Timer$get(void){
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
static inline   /*AlarmCounterMilliP.MilliCounter*/Atm128CounterC$1$timer_size /*AlarmCounterMilliP.MilliCounter*/Atm128CounterC$1$Counter$get(void)
{
  return /*AlarmCounterMilliP.MilliCounter*/Atm128CounterC$1$Timer$get();
}

# 53 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
inline static   /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$CounterFrom$size_type /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$CounterFrom$get(void){
#line 53
  unsigned char result;
#line 53

#line 53
  result = /*AlarmCounterMilliP.MilliCounter*/Atm128CounterC$1$Counter$get();
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
inline static   bool /*AlarmCounterMilliP.MilliCounter*/Atm128CounterC$1$Timer$test(void){
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
static inline   bool /*AlarmCounterMilliP.MilliCounter*/Atm128CounterC$1$Counter$isOverflowPending(void)
{
  return /*AlarmCounterMilliP.MilliCounter*/Atm128CounterC$1$Timer$test();
}

# 60 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
inline static   bool /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$CounterFrom$isOverflowPending(void){
#line 60
  unsigned char result;
#line 60

#line 60
  result = /*AlarmCounterMilliP.MilliCounter*/Atm128CounterC$1$Counter$isOverflowPending();
#line 60

#line 60
  return result;
#line 60
}
#line 60
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
inline static   void /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC$0$Atm128Interrupt$enable(void){
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
inline static   void /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC$0$Atm128Interrupt$edge(bool arg_0x7e666120){
#line 59
  /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP$6$Irq$edge(arg_0x7e666120);
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
inline static   void /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC$0$Atm128Interrupt$clear(void){
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
inline static   void /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC$0$Atm128Interrupt$disable(void){
#line 40
  /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP$6$Irq$disable();
#line 40
}
#line 40
# 15 "/opt/tinyos-2.x/tos/chips/atm128/pins/Atm128GpioInterruptC.nc"
static inline error_t /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC$0$enable(bool rising)
#line 15
{
  /* atomic removed: atomic calls only */
#line 16
  {
    /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC$0$Atm128Interrupt$disable();
    /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC$0$Atm128Interrupt$clear();
    /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC$0$Atm128Interrupt$edge(rising);
    /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC$0$Atm128Interrupt$enable();
  }
  return SUCCESS;
}





static inline   error_t /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC$0$Interrupt$enableFallingEdge(void)
#line 29
{
  return /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC$0$enable(FALSE);
}

# 43 "/opt/tinyos-2.x/tos/interfaces/GpioInterrupt.nc"
inline static   error_t CC2420ReceiveP$InterruptFIFOP$enableFallingEdge(void){
#line 43
  unsigned char result;
#line 43

#line 43
  result = /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC$0$Interrupt$enableFallingEdge();
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

# 192 "/opt/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
static inline   void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$default$fired(uint8_t num)
{
}

# 72 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static  void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$fired(uint8_t arg_0x7e549010){
#line 72
  switch (arg_0x7e549010) {
#line 72
    case 0U:
#line 72
      HplCC2420InterruptsP$CCATimer$fired();
#line 72
      break;
#line 72
    default:
#line 72
      /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$default$fired(arg_0x7e549010);
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
inline static   void /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC$0$Atm128Capture$setEdge(bool arg_0x7e861c88){
#line 79
  HplAtm128Timer1P$Capture$setEdge(arg_0x7e861c88);
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
inline static   void /*AlarmCounterMilliP.MilliAlarm*/Atm128AlarmC$0$HplAtm128Compare$set(/*AlarmCounterMilliP.MilliAlarm*/Atm128AlarmC$0$HplAtm128Compare$size_type arg_0x7e855ef0){
#line 45
  HplAtm128Timer0AsyncC$Compare$set(arg_0x7e855ef0);
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
inline static   void /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$AlarmFrom$startAt(/*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$AlarmFrom$size_type arg_0x7e931b80, /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$AlarmFrom$size_type arg_0x7e931d10){
#line 92
  /*AlarmCounterMilliP.MilliAlarm*/Atm128AlarmC$0$Alarm$startAt(arg_0x7e931b80, arg_0x7e931d10);
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

# 152 "/opt/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
static inline  void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$stop(uint8_t num)
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$m_timers[num].isrunning = FALSE;
}

# 67 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static  void HplCC2420InterruptsP$CCATimer$stop(void){
#line 67
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$stop(0U);
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
# 132 "/opt/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$startTimer(uint8_t num, uint32_t t0, uint32_t dt, bool isoneshot)
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer_t *timer = &/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$m_timers[num];

#line 135
  timer->t0 = t0;
  timer->dt = dt;
  timer->isoneshot = isoneshot;
  timer->isrunning = TRUE;
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$updateFromTimer$postTask();
}






static inline  void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startOneShot(uint8_t num, uint32_t dt)
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$startTimer(num, /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$getNow(), dt, TRUE);
}

# 62 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static  void HplCC2420InterruptsP$CCATimer$startOneShot(uint32_t arg_0x7e6049f0){
#line 62
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startOneShot(0U, arg_0x7e6049f0);
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

# 284 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420ControlP.nc"
static inline   void CC2420ControlP$CC2420Config$default$syncDone(error_t error)
#line 284
{
}

# 53 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420Config.nc"
inline static  void CC2420ControlP$CC2420Config$syncDone(error_t arg_0x7e947b98){
#line 53
  CC2420ControlP$CC2420Config$default$syncDone(arg_0x7e947b98);
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

# 263 "BaseP.nc"
static inline  void BaseP$RadioSend$sendDone(am_id_t id, message_t *msg, error_t error)
#line 263
{
  if (error != SUCCESS) {
    BaseP$failBlink();
    }
  else {
#line 267
    { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
      if (msg == BaseP$radioQueue[BaseP$radioOut]) 
        {
          if (++BaseP$radioOut >= BaseP$RADIO_QUEUE_LEN) {
            BaseP$radioOut = 0;
            }
#line 272
          if (BaseP$radioFull) {
            BaseP$radioFull = FALSE;
            }
        }
#line 275
      __nesc_atomic_end(__nesc_atomic); }
    }
#line 276
  BaseP$radioSendTask$postTask();
}

# 99 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
inline static  void CC2420ActiveMessageP$AMSend$sendDone(am_id_t arg_0x7ea54808, message_t *arg_0x7edf3eb8, error_t arg_0x7edf2068){
#line 99
  BaseP$RadioSend$sendDone(arg_0x7ea54808, arg_0x7edf3eb8, arg_0x7edf2068);
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
inline static  void CC2420CsmaP$Send$sendDone(message_t *arg_0x7ea42598, error_t arg_0x7ea42720){
#line 89
  CC2420ActiveMessageP$SubSend$sendDone(arg_0x7ea42598, arg_0x7ea42720);
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

# 129 "BaseP.nc"
static inline  void BaseP$RadioControl$stopDone(error_t error)
#line 129
{
}

# 110 "/opt/tinyos-2.x/tos/interfaces/SplitControl.nc"
inline static  void CC2420CsmaP$SplitControl$stopDone(error_t arg_0x7ee736e0){
#line 110
  BaseP$RadioControl$stopDone(arg_0x7ee736e0);
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

# 116 "BaseP.nc"
static inline  void BaseP$RadioControl$startDone(error_t error)
#line 116
{
  if (error == SUCCESS) {
      BaseP$radioFull = FALSE;
    }
}

# 88 "/opt/tinyos-2.x/tos/interfaces/SplitControl.nc"
inline static  void CC2420CsmaP$SplitControl$startDone(error_t arg_0x7ee80b78){
#line 88
  BaseP$RadioControl$startDone(arg_0x7ee80b78);
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

# 48 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static inline   void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP$2$IO$toggle(void)
#line 48
{
#line 48
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 48
    * (volatile uint8_t *)59U ^= 1 << 2;
#line 48
    __nesc_atomic_end(__nesc_atomic); }
}

# 31 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   void LedsP$Led0$toggle(void){
#line 31
  /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP$2$IO$toggle();
#line 31
}
#line 31
# 73 "/opt/tinyos-2.x/tos/system/LedsP.nc"
static inline   void LedsP$Leds$led0Toggle(void)
#line 73
{
  LedsP$Led0$toggle();
  ;
#line 75
  ;
}

# 56 "/opt/tinyos-2.x/tos/interfaces/Leds.nc"
inline static   void BaseP$Leds$led0Toggle(void){
#line 56
  LedsP$Leds$led0Toggle();
#line 56
}
#line 56
# 251 "/usr/lib/ncc/nesc_nx.h"
static __inline uint8_t __nesc_hton_leuint8(void *target, uint8_t value)
#line 251
{
  uint8_t *base = target;

#line 253
  base[0] = value;
  return value;
}

#line 269
static __inline uint16_t __nesc_hton_uint16(void *target, uint16_t value)
#line 269
{
  uint8_t *base = target;

#line 271
  base[1] = value;
  base[0] = value >> 8;
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
inline static   error_t CC2420CsmaP$CC2420Transmit$sendCCA(message_t *arg_0x7e9a5120){
#line 48
  unsigned char result;
#line 48

#line 48
  result = CC2420TransmitP$Send$sendCCA(arg_0x7e9a5120);
#line 48

#line 48
  return result;
#line 48
}
#line 48
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
inline static  error_t CC2420ActiveMessageP$SubSend$send(message_t *arg_0x7ea434c0, uint8_t arg_0x7ea43648){
#line 64
  unsigned char result;
#line 64

#line 64
  result = CC2420CsmaP$Send$send(arg_0x7ea434c0, arg_0x7ea43648);
#line 64

#line 64
  return result;
#line 64
}
#line 64
# 59 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static inline  error_t CC2420ActiveMessageP$AMSend$send(am_id_t id, am_addr_t addr, 
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

# 69 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
inline static  error_t BaseP$RadioSend$send(am_id_t arg_0x7edd35c8, am_addr_t arg_0x7ee009a0, message_t *arg_0x7ee00b50, uint8_t arg_0x7ee00cd8){
#line 69
  unsigned char result;
#line 69

#line 69
  result = CC2420ActiveMessageP$AMSend$send(arg_0x7edd35c8, arg_0x7ee009a0, arg_0x7ee00b50, arg_0x7ee00cd8);
#line 69

#line 69
  return result;
#line 69
}
#line 69
# 136 "/opt/tinyos-2.x/tos/interfaces/AMPacket.nc"
inline static  am_id_t BaseP$UartAMPacket$type(message_t *arg_0x7edb3da0){
#line 136
  unsigned char result;
#line 136

#line 136
  result = /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$AMPacket$type(arg_0x7edb3da0);
#line 136

#line 136
  return result;
#line 136
}
#line 136
# 264 "/usr/lib/ncc/nesc_nx.h"
static __inline uint16_t __nesc_ntoh_uint16(const void *source)
#line 264
{
  const uint8_t *base = source;

#line 266
  return ((uint16_t )base[0] << 8) | base[1];
}

# 134 "/opt/tinyos-2.x/tos/lib/serial/SerialActiveMessageP.nc"
static inline  am_addr_t /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$AMPacket$destination(message_t *amsg)
#line 134
{
  serial_header_t *header = /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$getHeader(amsg);

#line 136
  return __nesc_ntoh_uint16((unsigned char *)&header->dest);
}

# 67 "/opt/tinyos-2.x/tos/interfaces/AMPacket.nc"
inline static  am_addr_t BaseP$UartAMPacket$destination(message_t *arg_0x7edc1888){
#line 67
  unsigned int result;
#line 67

#line 67
  result = /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$AMPacket$destination(arg_0x7edc1888);
#line 67

#line 67
  return result;
#line 67
}
#line 67
# 110 "/opt/tinyos-2.x/tos/lib/serial/SerialActiveMessageP.nc"
static inline  uint8_t /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$Packet$payloadLength(message_t *msg)
#line 110
{
  serial_header_t *header = /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$getHeader(msg);

#line 112
  return __nesc_ntoh_uint8((unsigned char *)&header->length);
}

# 67 "/opt/tinyos-2.x/tos/interfaces/Packet.nc"
inline static  uint8_t BaseP$UartPacket$payloadLength(message_t *arg_0x7edd2938){
#line 67
  unsigned char result;
#line 67

#line 67
  result = /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$Packet$payloadLength(arg_0x7edd2938);
#line 67

#line 67
  return result;
#line 67
}
#line 67
# 237 "BaseP.nc"
static inline  void BaseP$radioSendTask$runTask(void)
#line 237
{
  uint8_t len;
  am_id_t id;
  am_addr_t addr;
  message_t *msg;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    if (BaseP$radioIn == BaseP$radioOut && !BaseP$radioFull) 
      {
        BaseP$radioBusy = FALSE;
        {
#line 247
          __nesc_atomic_end(__nesc_atomic); 
#line 247
          return;
        }
      }
#line 249
    __nesc_atomic_end(__nesc_atomic); }
  msg = BaseP$radioQueue[BaseP$radioOut];
  len = BaseP$UartPacket$payloadLength(msg);
  addr = BaseP$UartAMPacket$destination(msg);
  id = BaseP$UartAMPacket$type(msg);
  if (BaseP$RadioSend$send(id, addr, msg, len) == SUCCESS) {
    BaseP$Leds$led0Toggle();
    }
  else {
      BaseP$failBlink();
      BaseP$radioSendTask$postTask();
    }
}

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
#line 78
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
# 48 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static inline   void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP$1$IO$toggle(void)
#line 48
{
#line 48
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 48
    * (volatile uint8_t *)59U ^= 1 << 1;
#line 48
    __nesc_atomic_end(__nesc_atomic); }
}

# 31 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   void LedsP$Led1$toggle(void){
#line 31
  /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP$1$IO$toggle();
#line 31
}
#line 31
# 88 "/opt/tinyos-2.x/tos/system/LedsP.nc"
static inline   void LedsP$Leds$led1Toggle(void)
#line 88
{
  LedsP$Led1$toggle();
  ;
#line 90
  ;
}

# 72 "/opt/tinyos-2.x/tos/interfaces/Leds.nc"
inline static   void BaseP$Leds$led1Toggle(void){
#line 72
  LedsP$Leds$led1Toggle();
#line 72
}
#line 72
# 509 "/opt/tinyos-2.x/tos/lib/serial/SerialP.nc"
static inline   error_t SerialP$SendBytePacket$startSend(uint8_t b)
#line 509
{
  bool not_busy = FALSE;

#line 511
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 511
    {
      if (SerialP$txBuf[SerialP$TX_DATA_INDEX].state == SerialP$BUFFER_AVAILABLE) {
          SerialP$txBuf[SerialP$TX_DATA_INDEX].state = SerialP$BUFFER_FILLING;
          SerialP$txBuf[SerialP$TX_DATA_INDEX].buf = b;
          not_busy = TRUE;
        }
    }
#line 517
    __nesc_atomic_end(__nesc_atomic); }
  if (not_busy) {
      SerialP$MaybeScheduleTx();
      return SUCCESS;
    }
  return EBUSY;
}

# 51 "/opt/tinyos-2.x/tos/lib/serial/SendBytePacket.nc"
inline static   error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$SendBytePacket$startSend(uint8_t arg_0x7e229030){
#line 51
  unsigned char result;
#line 51

#line 51
  result = SerialP$SendBytePacket$startSend(arg_0x7e229030);
#line 51

#line 51
  return result;
#line 51
}
#line 51
# 43 "/opt/tinyos-2.x/tos/lib/serial/SerialPacketInfoActiveMessageP.nc"
static inline   uint8_t SerialPacketInfoActiveMessageP$Info$dataLinkLength(message_t *msg, uint8_t upperLen)
#line 43
{
  return upperLen + sizeof(serial_header_t );
}

# 344 "/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
static inline    uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$PacketInfo$default$dataLinkLength(uart_id_t id, message_t *msg, 
uint8_t upperLen)
#line 345
{
  return 0;
}

# 23 "/opt/tinyos-2.x/tos/lib/serial/SerialPacketInfo.nc"
inline static   uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$PacketInfo$dataLinkLength(uart_id_t arg_0x7e1718d8, message_t *arg_0x7e260860, uint8_t arg_0x7e2609f0){
#line 23
  unsigned char result;
#line 23

#line 23
  switch (arg_0x7e1718d8) {
#line 23
    case TOS_SERIAL_ACTIVE_MESSAGE_ID:
#line 23
      result = SerialPacketInfoActiveMessageP$Info$dataLinkLength(arg_0x7e260860, arg_0x7e2609f0);
#line 23
      break;
#line 23
    default:
#line 23
      result = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$PacketInfo$default$dataLinkLength(arg_0x7e1718d8, arg_0x7e260860, arg_0x7e2609f0);
#line 23
      break;
#line 23
    }
#line 23

#line 23
  return result;
#line 23
}
#line 23
# 100 "/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
static inline  error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$Send$send(uint8_t id, message_t *msg, uint8_t len)
#line 100
{
  if (/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$sendState != /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$SEND_STATE_IDLE) {
      return EBUSY;
    }

  /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$sendState = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$SEND_STATE_DATA;
  /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$sendId = id;
  /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$sendCancelled = FALSE;
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 108
    {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$sendError = SUCCESS;
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$sendBuffer = (uint8_t *)msg;
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$sendIndex = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$PacketInfo$offset(id);


      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$sendLen = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$PacketInfo$dataLinkLength(id, msg, len) + /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$sendIndex;
    }
#line 115
    __nesc_atomic_end(__nesc_atomic); }
  if (/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$SendBytePacket$startSend(id) == SUCCESS) {
      return SUCCESS;
    }
  else {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$sendState = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$SEND_STATE_IDLE;
      return FAIL;
    }
}

# 64 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
inline static  error_t /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$SubSend$send(message_t *arg_0x7ea434c0, uint8_t arg_0x7ea43648){
#line 64
  unsigned char result;
#line 64

#line 64
  result = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$Send$send(TOS_SERIAL_ACTIVE_MESSAGE_ID, arg_0x7ea434c0, arg_0x7ea43648);
#line 64

#line 64
  return result;
#line 64
}
#line 64
# 53 "/opt/tinyos-2.x/tos/lib/serial/SerialActiveMessageP.nc"
static inline  error_t /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$AMSend$send(am_id_t id, am_addr_t dest, 
message_t *msg, 
uint8_t len)
#line 55
{
  serial_header_t *header = /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$getHeader(msg);

#line 57
  __nesc_hton_uint16((unsigned char *)&header->dest, dest);





  __nesc_hton_uint8((unsigned char *)&header->type, id);
  __nesc_hton_uint8((unsigned char *)&header->length, len);

  return /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$SubSend$send(msg, len);
}

# 69 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
inline static  error_t BaseP$UartSend$send(am_id_t arg_0x7ee72198, am_addr_t arg_0x7ee009a0, message_t *arg_0x7ee00b50, uint8_t arg_0x7ee00cd8){
#line 69
  unsigned char result;
#line 69

#line 69
  result = /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$AMSend$send(arg_0x7ee72198, arg_0x7ee009a0, arg_0x7ee00b50, arg_0x7ee00cd8);
#line 69

#line 69
  return result;
#line 69
}
#line 69
# 67 "/opt/tinyos-2.x/tos/interfaces/AMPacket.nc"
inline static  am_addr_t BaseP$RadioAMPacket$destination(message_t *arg_0x7edc1888){
#line 67
  unsigned int result;
#line 67

#line 67
  result = CC2420ActiveMessageP$AMPacket$destination(arg_0x7edc1888);
#line 67

#line 67
  return result;
#line 67
}
#line 67
#line 136
inline static  am_id_t BaseP$RadioAMPacket$type(message_t *arg_0x7edb3da0){
#line 136
  unsigned char result;
#line 136

#line 136
  result = CC2420ActiveMessageP$AMPacket$type(arg_0x7edb3da0);
#line 136

#line 136
  return result;
#line 136
}
#line 136
# 246 "/usr/lib/ncc/nesc_nx.h"
static __inline uint8_t __nesc_ntoh_leuint8(const void *source)
#line 246
{
  const uint8_t *base = source;

#line 248
  return base[0];
}

# 167 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static inline  uint8_t CC2420ActiveMessageP$Packet$payloadLength(message_t *msg)
#line 167
{
  return __nesc_ntoh_leuint8((unsigned char *)&CC2420ActiveMessageP$getHeader(msg)->length) - CC2420ActiveMessageP$CC2420_SIZE;
}

# 67 "/opt/tinyos-2.x/tos/interfaces/Packet.nc"
inline static  uint8_t BaseP$RadioPacket$payloadLength(message_t *arg_0x7edd2938){
#line 67
  unsigned char result;
#line 67

#line 67
  result = CC2420ActiveMessageP$Packet$payloadLength(arg_0x7edd2938);
#line 67

#line 67
  return result;
#line 67
}
#line 67
# 163 "BaseP.nc"
static inline  void BaseP$uartSendTask$runTask(void)
#line 163
{
  uint8_t len;
  am_id_t id;
  am_addr_t addr;
  message_t *msg;

#line 168
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    if (BaseP$uartIn == BaseP$uartOut && !BaseP$uartFull) 
      {
        BaseP$uartBusy = FALSE;
        {
#line 172
          __nesc_atomic_end(__nesc_atomic); 
#line 172
          return;
        }
      }
#line 174
    __nesc_atomic_end(__nesc_atomic); }
  msg = BaseP$uartQueue[BaseP$uartOut];
  BaseP$tmpLen = len = BaseP$RadioPacket$payloadLength(msg);
  id = BaseP$RadioAMPacket$type(msg);
  addr = BaseP$RadioAMPacket$destination(msg);

  if (BaseP$UartSend$send(id, addr, BaseP$uartQueue[BaseP$uartOut], len) == SUCCESS) {
    BaseP$Leds$led1Toggle();
    }
  else {
      BaseP$failBlink();
      BaseP$uartSendTask$postTask();
    }
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
inline static   void /*AlarmCounterMilliP.MilliInit*/Atm128TimerInitC$1$Timer$setScale(uint8_t arg_0x7e875250){
#line 95
  HplAtm128Timer0AsyncC$Timer$setScale(arg_0x7e875250);
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
inline static   void /*AlarmCounterMilliP.MilliInit*/Atm128TimerInitC$1$Timer$start(void){
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
inline static   void /*AlarmCounterMilliP.MilliInit*/Atm128TimerInitC$1$Timer$set(/*AlarmCounterMilliP.MilliInit*/Atm128TimerInitC$1$Timer$timer_size arg_0x7e8785b8){
#line 58
  HplAtm128Timer0AsyncC$Timer$set(arg_0x7e8785b8);
#line 58
}
#line 58
# 42 "/opt/tinyos-2.x/tos/chips/atm128/timer/Atm128TimerInitC.nc"
static inline  error_t /*AlarmCounterMilliP.MilliInit*/Atm128TimerInitC$1$Init$init(void)
#line 42
{
  /* atomic removed: atomic calls only */
#line 43
  {
    /*AlarmCounterMilliP.MilliInit*/Atm128TimerInitC$1$Timer$set(0);
    /*AlarmCounterMilliP.MilliInit*/Atm128TimerInitC$1$Timer$start();
    /*AlarmCounterMilliP.MilliInit*/Atm128TimerInitC$1$Timer$setScale(3);
  }
  return SUCCESS;
}

# 45 "/opt/tinyos-2.x/tos/system/FcfsResourceQueueC.nc"
static inline  error_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$Init$init(void)
#line 45
{
  memset(/*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$resQ, /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$NO_ENTRY, sizeof /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$resQ);
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

# 213 "/opt/tinyos-2.x/tos/lib/serial/SerialP.nc"
static __inline void SerialP$ackInit(void)
#line 213
{
  SerialP$ackQ.writePtr = SerialP$ackQ.readPtr = 0;
}

#line 204
static __inline void SerialP$rxInit(void)
#line 204
{
  SerialP$rxBuf.writePtr = SerialP$rxBuf.readPtr = 0;
  SerialP$rxState = SerialP$RXSTATE_NOSYNC;
  SerialP$rxByteCnt = 0;
  SerialP$rxProto = 0;
  SerialP$rxSeqno = 0;
  SerialP$rxCRC = 0;
}

#line 192
static __inline void SerialP$txInit(void)
#line 192
{
  uint8_t i;

  /* atomic removed: atomic calls only */
#line 194
  for (i = 0; i < SerialP$TX_BUFFER_COUNT; i++) SerialP$txBuf[i].state = SerialP$BUFFER_AVAILABLE;
  SerialP$txState = SerialP$TXSTATE_IDLE;
  SerialP$txByteCnt = 0;
  SerialP$txProto = 0;
  SerialP$txSeqno = 0;
  SerialP$txCRC = 0;
  SerialP$txPending = FALSE;
  SerialP$txIndex = 0;
}

#line 217
static inline  error_t SerialP$Init$init(void)
#line 217
{

  SerialP$txInit();
  SerialP$rxInit();
  SerialP$ackInit();

  return SUCCESS;
}

# 61 "/opt/tinyos-2.x/tos/chips/atm128/Atm128UartP.nc"
static inline  error_t /*Atm128Uart0C.UartP*/Atm128UartP$0$Init$init(void)
#line 61
{
  if (PLATFORM_BAUDRATE == 19200UL) {
    /*Atm128Uart0C.UartP*/Atm128UartP$0$m_byte_time = 200;
    }
  else {
#line 64
    if (PLATFORM_BAUDRATE == 57600UL) {
      /*Atm128Uart0C.UartP*/Atm128UartP$0$m_byte_time = 68;
      }
    }
#line 66
  return SUCCESS;
}

# 120 "/opt/tinyos-2.x/tos/platforms/mica/MeasureClockC.nc"
static inline   uint16_t MeasureClockC$Atm128Calibrate$baudrateRegister(uint32_t baudrate)
#line 120
{

  return ((uint32_t )MeasureClockC$cycles << 12) / baudrate - 1;
}

# 60 "/opt/tinyos-2.x/tos/chips/atm128/timer/Atm128Calibrate.nc"
inline static   uint16_t HplAtm128UartP$Atm128Calibrate$baudrateRegister(uint32_t arg_0x7ef52570){
#line 60
  unsigned int result;
#line 60

#line 60
  result = MeasureClockC$Atm128Calibrate$baudrateRegister(arg_0x7ef52570);
#line 60

#line 60
  return result;
#line 60
}
#line 60
# 184 "/opt/tinyos-2.x/tos/chips/atm128/HplAtm128UartP.nc"
static inline  error_t HplAtm128UartP$Uart1Init$init(void)
#line 184
{
  Atm128UartMode_t mode;
  Atm128UartStatus_t stts;
  Atm128UartControl_t ctrl;
  uint16_t ubrr1;

  ctrl.bits = (struct Atm128_UCSRB_t ){ .rxcie = 0, .txcie = 0, .rxen = 0, .txen = 0 };
  stts.bits = (struct Atm128_UCSRA_t ){ .u2x = 1 };
  mode.bits = (struct Atm128_UCSRC_t ){ .ucsz = ATM128_UART_DATA_SIZE_8_BITS };

  ubrr1 = HplAtm128UartP$Atm128Calibrate$baudrateRegister(PLATFORM_BAUDRATE);
  * (volatile uint8_t *)0x99 = ubrr1;
  * (volatile uint8_t *)0x98 = ubrr1 >> 8;
  * (volatile uint8_t *)0x9B = stts.flat;
  * (volatile uint8_t *)0x9D = mode.flat;
  * (volatile uint8_t *)0x9A = ctrl.flat;

  return SUCCESS;
}

#line 87
static inline  error_t HplAtm128UartP$Uart0Init$init(void)
#line 87
{
  Atm128UartMode_t mode;
  Atm128UartStatus_t stts;
  Atm128UartControl_t ctrl;
  uint16_t ubrr0;

  ctrl.bits = (struct Atm128_UCSRB_t ){ .rxcie = 0, .txcie = 0, .rxen = 0, .txen = 0 };
  stts.bits = (struct Atm128_UCSRA_t ){ .u2x = 1 };
  mode.bits = (struct Atm128_UCSRC_t ){ .ucsz = ATM128_UART_DATA_SIZE_8_BITS };

  ubrr0 = HplAtm128UartP$Atm128Calibrate$baudrateRegister(PLATFORM_BAUDRATE);
  * (volatile uint8_t *)(0x09 + 0x20) = ubrr0;
  * (volatile uint8_t *)0x90 = ubrr0 >> 8;
  * (volatile uint8_t *)(0x0B + 0x20) = stts.flat;
  * (volatile uint8_t *)0x95 = mode.flat;
  * (volatile uint8_t *)(0x0A + 0x20) = ctrl.flat;

  return SUCCESS;
}

# 51 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
inline static  error_t RealMainP$SoftwareInit$init(void){
#line 51
  unsigned char result;
#line 51

#line 51
  result = HplAtm128UartP$Uart0Init$init();
#line 51
  result = ecombine(result, HplAtm128UartP$Uart1Init$init());
#line 51
  result = ecombine(result, /*Atm128Uart0C.UartP*/Atm128UartP$0$Init$init());
#line 51
  result = ecombine(result, SerialP$Init$init());
#line 51
  result = ecombine(result, RandomMlcgP$Init$init());
#line 51
  result = ecombine(result, /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$Init$init());
#line 51
  result = ecombine(result, /*AlarmCounterMilliP.MilliInit*/Atm128TimerInitC$1$Init$init());
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

#line 51
  return result;
#line 51
}
#line 51
# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static   error_t SerialP$startDoneTask$postTask(void){
#line 56
  unsigned char result;
#line 56

#line 56
  result = SchedulerBasicP$TaskBasic$postTask(SerialP$startDoneTask);
#line 56

#line 56
  return result;
#line 56
}
#line 56
# 329 "/opt/tinyos-2.x/tos/lib/serial/SerialP.nc"
static inline  error_t SerialP$SplitControl$start(void)
#line 329
{
  SerialP$startDoneTask$postTask();
  return SUCCESS;
}

# 79 "/opt/tinyos-2.x/tos/interfaces/SplitControl.nc"
inline static  error_t BaseP$SerialControl$start(void){
#line 79
  unsigned char result;
#line 79

#line 79
  result = SerialP$SplitControl$start();
#line 79

#line 79
  return result;
#line 79
}
#line 79
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
inline static   void CC2420ControlP$StartupTimer$start(CC2420ControlP$StartupTimer$size_type arg_0x7e932a00){
#line 55
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$Alarm$start(arg_0x7e932a00);
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
inline static  error_t BaseP$RadioControl$start(void){
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
# 97 "BaseP.nc"
static inline  void BaseP$Boot$booted(void)
#line 97
{
  uint8_t i;

  for (i = 0; i < BaseP$UART_QUEUE_LEN; i++) 
    BaseP$uartQueue[i] = &BaseP$uartQueueBufs[i];
  BaseP$uartIn = BaseP$uartOut = 0;
  BaseP$uartBusy = FALSE;
  BaseP$uartFull = TRUE;

  for (i = 0; i < BaseP$RADIO_QUEUE_LEN; i++) 
    BaseP$radioQueue[i] = &BaseP$radioQueueBufs[i];
  BaseP$radioIn = BaseP$radioOut = 0;
  BaseP$radioBusy = FALSE;
  BaseP$radioFull = TRUE;

  BaseP$RadioControl$start();
  BaseP$SerialControl$start();
}

# 49 "/opt/tinyos-2.x/tos/interfaces/Boot.nc"
inline static  void RealMainP$Boot$booted(void){
#line 49
  BaseP$Boot$booted();
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
inline static   void /*AlarmCounterMilliP.MilliCounter*/Atm128CounterC$1$Counter$overflow(void){
#line 71
  /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$CounterFrom$overflow();
#line 71
}
#line 71
# 56 "/opt/tinyos-2.x/tos/chips/atm128/timer/Atm128CounterC.nc"
static inline   void /*AlarmCounterMilliP.MilliCounter*/Atm128CounterC$1$Timer$overflow(void)
{
  /*AlarmCounterMilliP.MilliCounter*/Atm128CounterC$1$Counter$overflow();
}

# 117 "/opt/tinyos-2.x/tos/chips/atm128/timer/Atm128AlarmC.nc"
static inline   void /*AlarmCounterMilliP.MilliAlarm*/Atm128AlarmC$0$HplAtm128Timer$overflow(void)
#line 117
{
}

# 51 "/opt/tinyos-2.x/tos/chips/atm128/timer/Atm128TimerInitC.nc"
static inline   void /*AlarmCounterMilliP.MilliInit*/Atm128TimerInitC$1$Timer$overflow(void)
#line 51
{
}

# 61 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static   void HplAtm128Timer0AsyncC$Timer$overflow(void){
#line 61
  /*AlarmCounterMilliP.MilliInit*/Atm128TimerInitC$1$Timer$overflow();
#line 61
  /*AlarmCounterMilliP.MilliAlarm*/Atm128AlarmC$0$HplAtm128Timer$overflow();
#line 61
  /*AlarmCounterMilliP.MilliCounter*/Atm128CounterC$1$Timer$overflow();
#line 61
}
#line 61
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
inline static   void CC2420TransmitP$Send$sendDone(message_t *arg_0x7e9a4770, error_t arg_0x7e9a48f8){
#line 85
  CC2420CsmaP$CC2420Transmit$sendDone(arg_0x7e9a4770, arg_0x7e9a48f8);
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
inline static   void CC2420TransmitP$BackoffTimer$start(CC2420TransmitP$BackoffTimer$size_type arg_0x7e932a00){
#line 55
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$Alarm$start(arg_0x7e932a00);
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
inline static   void CC2420TransmitP$CC2420Receive$sfd(uint16_t arg_0x7e3c5750){
#line 47
  CC2420ReceiveP$CC2420Receive$sfd(arg_0x7e3c5750);
#line 47
}
#line 47
# 448 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420TransmitP.nc"
static inline    void CC2420TransmitP$TimeStamp$default$receivedSFD(uint16_t time)
#line 448
{
}

# 50 "/opt/tinyos-2.x/tos/interfaces/RadioTimeStamping.nc"
inline static   void CC2420TransmitP$TimeStamp$receivedSFD(uint16_t arg_0x7e3d4710){
#line 50
  CC2420TransmitP$TimeStamp$default$receivedSFD(arg_0x7e3d4710);
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
inline static   void CC2420TransmitP$TimeStamp$transmittedSFD(uint16_t arg_0x7e3d4030, message_t *arg_0x7e3d41e0){
#line 39
  CC2420TransmitP$TimeStamp$default$transmittedSFD(arg_0x7e3d4030, arg_0x7e3d41e0);
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
inline static   void /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC$0$Capture$captured(uint16_t arg_0x7e6887f8){
#line 50
  CC2420TransmitP$CaptureSFD$captured(arg_0x7e6887f8);
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
inline static   void HplAtm128Timer1P$Capture$captured(HplAtm128Timer1P$Capture$size_type arg_0x7e8626a0){
#line 51
  /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC$0$Atm128Capture$captured(arg_0x7e8626a0);
#line 51
}
#line 51
# 117 "/opt/tinyos-2.x/tos/chips/atm128/timer/Atm128AlarmC.nc"
static inline   void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$1$HplAtm128Timer$overflow(void)
#line 117
{
}

# 51 "/opt/tinyos-2.x/tos/chips/atm128/timer/Atm128TimerInitC.nc"
static inline   void /*InitOneP.InitOne*/Atm128TimerInitC$0$Timer$overflow(void)
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
inline static   void /*CounterOne16C.NCounter*/Atm128CounterC$0$Counter$overflow(void){
#line 71
  /*Counter32khz32C.Transform32*/TransformCounterC$0$CounterFrom$overflow();
#line 71
}
#line 71
# 56 "/opt/tinyos-2.x/tos/chips/atm128/timer/Atm128CounterC.nc"
static inline   void /*CounterOne16C.NCounter*/Atm128CounterC$0$Timer$overflow(void)
{
  /*CounterOne16C.NCounter*/Atm128CounterC$0$Counter$overflow();
}

# 61 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static   void HplAtm128Timer1P$Timer$overflow(void){
#line 61
  /*CounterOne16C.NCounter*/Atm128CounterC$0$Timer$overflow();
#line 61
  /*InitOneP.InitOne*/Atm128TimerInitC$0$Timer$overflow();
#line 61
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$1$HplAtm128Timer$overflow();
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
# 63 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline    void /*HplAtm128InterruptC.IntPin1*/HplAtm128InterruptPinP$1$Irq$default$fired(void)
#line 63
{
}

# 64 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
inline static   void /*HplAtm128InterruptC.IntPin1*/HplAtm128InterruptPinP$1$Irq$fired(void){
#line 64
  /*HplAtm128InterruptC.IntPin1*/HplAtm128InterruptPinP$1$Irq$default$fired();
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
inline static   void /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC$0$Interrupt$fired(void){
#line 57
  CC2420ReceiveP$InterruptFIFOP$fired();
#line 57
}
#line 57
# 38 "/opt/tinyos-2.x/tos/chips/atm128/pins/Atm128GpioInterruptC.nc"
static inline   void /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC$0$Atm128Interrupt$fired(void)
#line 38
{
  /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC$0$Interrupt$fired();
}

# 64 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
inline static   void /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP$6$Irq$fired(void){
#line 64
  /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC$0$Atm128Interrupt$fired();
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
# 190 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420CsmaP.nc"
static inline   uint16_t CC2420CsmaP$CsmaBackoff$initial(message_t *m)
#line 190
{
  return (CC2420CsmaP$Random$rand16() & 0x1f) + 1;
}

# 36 "/opt/tinyos-2.x/tos/interfaces/CsmaBackoff.nc"
inline static   uint16_t CC2420TransmitP$CsmaBackoff$initial(message_t *arg_0x7e9a6cd0){
#line 36
  unsigned int result;
#line 36

#line 36
  result = CC2420CsmaP$CsmaBackoff$initial(arg_0x7e9a6cd0);
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
inline static   void CC2420SpiImplP$Fifo$writeDone(uint8_t arg_0x7e4ecd50, uint8_t *arg_0x7e4f9370, uint8_t arg_0x7e4f94f8, error_t arg_0x7e4f9680){
#line 91
  switch (arg_0x7e4ecd50) {
#line 91
    case CC2420_TXFIFO:
#line 91
      CC2420TransmitP$TXFIFO$writeDone(arg_0x7e4f9370, arg_0x7e4f94f8, arg_0x7e4f9680);
#line 91
      break;
#line 91
    case CC2420_RXFIFO:
#line 91
      CC2420ReceiveP$RXFIFO$writeDone(arg_0x7e4f9370, arg_0x7e4f94f8, arg_0x7e4f9680);
#line 91
      break;
#line 91
    default:
#line 91
      CC2420SpiImplP$Fifo$default$writeDone(arg_0x7e4ecd50, arg_0x7e4f9370, arg_0x7e4f94f8, arg_0x7e4f9680);
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
inline static   void CC2420ReceiveP$CC2420Receive$receive(uint8_t arg_0x7e3c4068, message_t *arg_0x7e3c4218){
#line 61
  CC2420TransmitP$CC2420Receive$receive(arg_0x7e3c4068, arg_0x7e3c4218);
#line 61
}
#line 61
# 62 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420Fifo.nc"
inline static   error_t CC2420ReceiveP$RXFIFO$continueRead(uint8_t *arg_0x7e4fba70, uint8_t arg_0x7e4fbbf8){
#line 62
  unsigned char result;
#line 62

#line 62
  result = CC2420SpiImplP$Fifo$continueRead(CC2420_RXFIFO, arg_0x7e4fba70, arg_0x7e4fbbf8);
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
inline static   void CC2420SpiImplP$Fifo$readDone(uint8_t arg_0x7e4ecd50, uint8_t *arg_0x7e4fa240, uint8_t arg_0x7e4fa3c8, error_t arg_0x7e4fa550){
#line 71
  switch (arg_0x7e4ecd50) {
#line 71
    case CC2420_TXFIFO:
#line 71
      CC2420TransmitP$TXFIFO$readDone(arg_0x7e4fa240, arg_0x7e4fa3c8, arg_0x7e4fa550);
#line 71
      break;
#line 71
    case CC2420_RXFIFO:
#line 71
      CC2420ReceiveP$RXFIFO$readDone(arg_0x7e4fa240, arg_0x7e4fa3c8, arg_0x7e4fa550);
#line 71
      break;
#line 71
    default:
#line 71
      CC2420SpiImplP$Fifo$default$readDone(arg_0x7e4ecd50, arg_0x7e4fa240, arg_0x7e4fa3c8, arg_0x7e4fa550);
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
inline static   void Atm128SpiP$SpiPacket$sendDone(uint8_t *arg_0x7e4e0030, uint8_t *arg_0x7e4e01d8, uint16_t arg_0x7e4e0368, error_t arg_0x7e4e0500){
#line 71
  CC2420SpiImplP$SpiPacket$sendDone(arg_0x7e4e0030, arg_0x7e4e01d8, arg_0x7e4e0368, arg_0x7e4e0500);
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
inline static   void Atm128SpiP$Spi$enableInterrupt(bool arg_0x7e49b478){
#line 96
  HplAtm128SpiP$SPI$enableInterrupt(arg_0x7e49b478);
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
inline static   void HplAtm128SpiP$SPI$dataReady(uint8_t arg_0x7e49df08){
#line 92
  Atm128SpiP$Spi$dataReady(arg_0x7e49df08);
#line 92
}
#line 92
# 374 "/opt/tinyos-2.x/tos/lib/serial/SerialP.nc"
static inline   void SerialP$SerialFrameComm$dataReceived(uint8_t data)
#line 374
{
  SerialP$rx_state_machine(FALSE, data);
}

# 83 "/opt/tinyos-2.x/tos/lib/serial/SerialFrameComm.nc"
inline static   void HdlcTranslateC$SerialFrameComm$dataReceived(uint8_t arg_0x7e220758){
#line 83
  SerialP$SerialFrameComm$dataReceived(arg_0x7e220758);
#line 83
}
#line 83
# 371 "/opt/tinyos-2.x/tos/lib/serial/SerialP.nc"
static inline   void SerialP$SerialFrameComm$delimiterReceived(void)
#line 371
{
  SerialP$rx_state_machine(TRUE, 0);
}

# 74 "/opt/tinyos-2.x/tos/lib/serial/SerialFrameComm.nc"
inline static   void HdlcTranslateC$SerialFrameComm$delimiterReceived(void){
#line 74
  SerialP$SerialFrameComm$delimiterReceived();
#line 74
}
#line 74
# 61 "/opt/tinyos-2.x/tos/lib/serial/HdlcTranslateC.nc"
static inline   void HdlcTranslateC$UartStream$receivedByte(uint8_t data)
#line 61
{






  if (data == HDLC_FLAG_BYTE) {

      HdlcTranslateC$SerialFrameComm$delimiterReceived();
      return;
    }
  else {
#line 73
    if (data == HDLC_CTLESC_BYTE) {

        HdlcTranslateC$state.receiveEscape = 1;
        return;
      }
    else {
#line 78
      if (HdlcTranslateC$state.receiveEscape) {

          HdlcTranslateC$state.receiveEscape = 0;
          data = data ^ 0x20;
        }
      }
    }
#line 83
  HdlcTranslateC$SerialFrameComm$dataReceived(data);
}

# 79 "/opt/tinyos-2.x/tos/interfaces/UartStream.nc"
inline static   void /*Atm128Uart0C.UartP*/Atm128UartP$0$UartStream$receivedByte(uint8_t arg_0x7e10a3f8){
#line 79
  HdlcTranslateC$UartStream$receivedByte(arg_0x7e10a3f8);
#line 79
}
#line 79
# 116 "/opt/tinyos-2.x/tos/lib/serial/HdlcTranslateC.nc"
static inline   void HdlcTranslateC$UartStream$receiveDone(uint8_t *buf, uint16_t len, error_t error)
#line 116
{
}

# 99 "/opt/tinyos-2.x/tos/interfaces/UartStream.nc"
inline static   void /*Atm128Uart0C.UartP*/Atm128UartP$0$UartStream$receiveDone(uint8_t *arg_0x7e108118, uint16_t arg_0x7e1082a8, error_t arg_0x7e108430){
#line 99
  HdlcTranslateC$UartStream$receiveDone(arg_0x7e108118, arg_0x7e1082a8, arg_0x7e108430);
#line 99
}
#line 99
# 107 "/opt/tinyos-2.x/tos/chips/atm128/Atm128UartP.nc"
static inline   void /*Atm128Uart0C.UartP*/Atm128UartP$0$HplUart$rxDone(uint8_t data)
#line 107
{

  if (/*Atm128Uart0C.UartP*/Atm128UartP$0$m_rx_buf) {
      /*Atm128Uart0C.UartP*/Atm128UartP$0$m_rx_buf[/*Atm128Uart0C.UartP*/Atm128UartP$0$m_rx_pos++] = data;
      if (/*Atm128Uart0C.UartP*/Atm128UartP$0$m_rx_pos >= /*Atm128Uart0C.UartP*/Atm128UartP$0$m_rx_len) {
          uint8_t *buf = /*Atm128Uart0C.UartP*/Atm128UartP$0$m_rx_buf;

#line 113
          /*Atm128Uart0C.UartP*/Atm128UartP$0$m_rx_buf = (void *)0;
          /*Atm128Uart0C.UartP*/Atm128UartP$0$UartStream$receiveDone(buf, /*Atm128Uart0C.UartP*/Atm128UartP$0$m_rx_len, SUCCESS);
        }
    }
  else {
      /*Atm128Uart0C.UartP*/Atm128UartP$0$UartStream$receivedByte(data);
    }
}

# 49 "/opt/tinyos-2.x/tos/chips/atm128/HplAtm128Uart.nc"
inline static   void HplAtm128UartP$HplUart0$rxDone(uint8_t arg_0x7e0c8010){
#line 49
  /*Atm128Uart0C.UartP*/Atm128UartP$0$HplUart$rxDone(arg_0x7e0c8010);
#line 49
}
#line 49
# 378 "/opt/tinyos-2.x/tos/lib/serial/SerialP.nc"
static inline bool SerialP$valid_rx_proto(uint8_t proto)
#line 378
{
  switch (proto) {
      case SERIAL_PROTO_PACKET_ACK: 
        return TRUE;
      case SERIAL_PROTO_ACK: 
        case SERIAL_PROTO_PACKET_NOACK: 
          default: 
            return FALSE;
    }
}

# 189 "/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$lockCurrentBuffer(void)
#line 189
{
  if (/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveState.which) {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveState.bufOneLocked = 1;
    }
  else {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveState.bufZeroLocked = 1;
    }
}

#line 185
static inline bool /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$isCurrentBufferLocked(void)
#line 185
{
  return /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveState.which ? /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveState.bufZeroLocked : /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveState.bufOneLocked;
}

#line 212
static inline   error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$ReceiveBytePacket$startPacket(void)
#line 212
{
  error_t result = SUCCESS;

  /* atomic removed: atomic calls only */
#line 214
  {
    if (!/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$isCurrentBufferLocked()) {


        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$lockCurrentBuffer();
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveState.state = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$RECV_STATE_BEGIN;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$recvIndex = 0;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$recvType = TOS_SERIAL_UNKNOWN_ID;
      }
    else {
        result = EBUSY;
      }
  }
  return result;
}

# 51 "/opt/tinyos-2.x/tos/lib/serial/ReceiveBytePacket.nc"
inline static   error_t SerialP$ReceiveBytePacket$startPacket(void){
#line 51
  unsigned char result;
#line 51

#line 51
  result = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$ReceiveBytePacket$startPacket();
#line 51

#line 51
  return result;
#line 51
}
#line 51
# 308 "/opt/tinyos-2.x/tos/lib/serial/SerialP.nc"
static __inline uint16_t SerialP$rx_current_crc(void)
#line 308
{
  uint16_t crc;
  uint8_t tmp = SerialP$rxBuf.writePtr;

#line 311
  tmp = tmp == 0 ? SerialP$RX_DATA_BUFFER_SIZE : tmp - 1;
  crc = SerialP$rxBuf.buf[tmp] & 0x00ff;
  crc = (crc << 8) & 0xFF00;
  tmp = tmp == 0 ? SerialP$RX_DATA_BUFFER_SIZE : tmp - 1;
  crc |= SerialP$rxBuf.buf[tmp] & 0x00FF;
  return crc;
}

# 69 "/opt/tinyos-2.x/tos/lib/serial/ReceiveBytePacket.nc"
inline static   void SerialP$ReceiveBytePacket$endPacket(error_t arg_0x7e2255e0){
#line 69
  /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$ReceiveBytePacket$endPacket(arg_0x7e2255e0);
#line 69
}
#line 69
# 207 "/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveBufferSwap(void)
#line 207
{
  /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveState.which = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveState.which ? 0 : 1;
  /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveBuffer = (uint8_t *)/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$messagePtrs[/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveState.which];
}

# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static   error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveTask$postTask(void){
#line 56
  unsigned char result;
#line 56

#line 56
  result = SchedulerBasicP$TaskBasic$postTask(/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveTask);
#line 56

#line 56
  return result;
#line 56
}
#line 56
# 231 "/opt/tinyos-2.x/tos/lib/serial/SerialP.nc"
static __inline bool SerialP$ack_queue_is_full(void)
#line 231
{
  uint8_t tmp;
#line 232
  uint8_t tmp2;

  /* atomic removed: atomic calls only */
#line 233
  {
    tmp = SerialP$ackQ.writePtr;
    tmp2 = SerialP$ackQ.readPtr;
  }
  if (++tmp > SerialP$ACK_QUEUE_SIZE) {
#line 237
    tmp = 0;
    }
#line 238
  return tmp == tmp2;
}







static __inline void SerialP$ack_queue_push(uint8_t token)
#line 247
{
  if (!SerialP$ack_queue_is_full()) {
      /* atomic removed: atomic calls only */
#line 249
      {
        SerialP$ackQ.buf[SerialP$ackQ.writePtr] = token;
        if (++ SerialP$ackQ.writePtr > SerialP$ACK_QUEUE_SIZE) {
#line 251
          SerialP$ackQ.writePtr = 0;
          }
      }
#line 253
      SerialP$MaybeScheduleTx();
    }
}

# 230 "/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
static inline   void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$ReceiveBytePacket$byteReceived(uint8_t b)
#line 230
{
  /* atomic removed: atomic calls only */
#line 231
  {
    switch (/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveState.state) {
        case /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$RECV_STATE_BEGIN: 
          /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveState.state = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$RECV_STATE_DATA;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$recvIndex = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$PacketInfo$offset(b);
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$recvType = b;
        break;

        case /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$RECV_STATE_DATA: 
          if (/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$recvIndex < sizeof(message_t )) {
              /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveBuffer[/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$recvIndex] = b;
              /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$recvIndex++;
            }
          else {
            }




        break;

        case /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$RECV_STATE_IDLE: 
          default: 
#line 252
            ;
      }
  }
}

# 58 "/opt/tinyos-2.x/tos/lib/serial/ReceiveBytePacket.nc"
inline static   void SerialP$ReceiveBytePacket$byteReceived(uint8_t arg_0x7e225010){
#line 58
  /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$ReceiveBytePacket$byteReceived(arg_0x7e225010);
#line 58
}
#line 58
# 298 "/opt/tinyos-2.x/tos/lib/serial/SerialP.nc"
static __inline uint8_t SerialP$rx_buffer_top(void)
#line 298
{
  uint8_t tmp = SerialP$rxBuf.buf[SerialP$rxBuf.readPtr];

#line 300
  return tmp;
}

#line 302
static __inline uint8_t SerialP$rx_buffer_pop(void)
#line 302
{
  uint8_t tmp = SerialP$rxBuf.buf[SerialP$rxBuf.readPtr];

#line 304
  if (++ SerialP$rxBuf.readPtr > SerialP$RX_DATA_BUFFER_SIZE) {
#line 304
    SerialP$rxBuf.readPtr = 0;
    }
#line 305
  return tmp;
}

#line 294
static __inline void SerialP$rx_buffer_push(uint8_t data)
#line 294
{
  SerialP$rxBuf.buf[SerialP$rxBuf.writePtr] = data;
  if (++ SerialP$rxBuf.writePtr > SerialP$RX_DATA_BUFFER_SIZE) {
#line 296
    SerialP$rxBuf.writePtr = 0;
    }
}

# 55 "/opt/tinyos-2.x/tos/lib/serial/HdlcTranslateC.nc"
static inline   void HdlcTranslateC$SerialFrameComm$resetReceive(void)
#line 55
{
  HdlcTranslateC$state.receiveEscape = 0;
}

# 68 "/opt/tinyos-2.x/tos/lib/serial/SerialFrameComm.nc"
inline static   void SerialP$SerialFrameComm$resetReceive(void){
#line 68
  HdlcTranslateC$SerialFrameComm$resetReceive();
#line 68
}
#line 68
#line 54
inline static   error_t SerialP$SerialFrameComm$putData(uint8_t arg_0x7e221508){
#line 54
  unsigned char result;
#line 54

#line 54
  result = HdlcTranslateC$SerialFrameComm$putData(arg_0x7e221508);
#line 54

#line 54
  return result;
#line 54
}
#line 54
# 500 "/opt/tinyos-2.x/tos/lib/serial/SerialP.nc"
static inline   error_t SerialP$SendBytePacket$completeSend(void)
#line 500
{
  bool ret = FAIL;

  /* atomic removed: atomic calls only */
#line 502
  {
    SerialP$txBuf[SerialP$TX_DATA_INDEX].state = SerialP$BUFFER_COMPLETE;
    ret = SUCCESS;
  }
  return ret;
}

# 60 "/opt/tinyos-2.x/tos/lib/serial/SendBytePacket.nc"
inline static   error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$SendBytePacket$completeSend(void){
#line 60
  unsigned char result;
#line 60

#line 60
  result = SerialP$SendBytePacket$completeSend();
#line 60

#line 60
  return result;
#line 60
}
#line 60
# 164 "/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
static inline   uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$SendBytePacket$nextByte(void)
#line 164
{
  uint8_t b;
  uint8_t indx;

  /* atomic removed: atomic calls only */
#line 167
  {
    b = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$sendBuffer[/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$sendIndex];
    /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$sendIndex++;
    indx = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$sendIndex;
  }
  if (indx > /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$sendLen) {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$SendBytePacket$completeSend();
      return 0;
    }
  else {
      return b;
    }
}

# 70 "/opt/tinyos-2.x/tos/lib/serial/SendBytePacket.nc"
inline static   uint8_t SerialP$SendBytePacket$nextByte(void){
#line 70
  unsigned char result;
#line 70

#line 70
  result = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$SendBytePacket$nextByte();
#line 70

#line 70
  return result;
#line 70
}
#line 70
# 629 "/opt/tinyos-2.x/tos/lib/serial/SerialP.nc"
static inline   void SerialP$SerialFrameComm$putDone(void)
#line 629
{
  {
    error_t txResult = SUCCESS;

    switch (SerialP$txState) {

        case SerialP$TXSTATE_PROTO: 

          txResult = SerialP$SerialFrameComm$putData(SerialP$txProto);

        SerialP$txState = SerialP$TXSTATE_INFO;



        SerialP$txCRC = crcByte(SerialP$txCRC, SerialP$txProto);
        break;

        case SerialP$TXSTATE_SEQNO: 
          txResult = SerialP$SerialFrameComm$putData(SerialP$txSeqno);
        SerialP$txState = SerialP$TXSTATE_INFO;
        SerialP$txCRC = crcByte(SerialP$txCRC, SerialP$txSeqno);
        break;

        case SerialP$TXSTATE_INFO: 
          { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 653
            {
              txResult = SerialP$SerialFrameComm$putData(SerialP$txBuf[SerialP$txIndex].buf);
              SerialP$txCRC = crcByte(SerialP$txCRC, SerialP$txBuf[SerialP$txIndex].buf);
              ++SerialP$txByteCnt;

              if (SerialP$txIndex == SerialP$TX_DATA_INDEX) {
                  uint8_t nextByte;

#line 660
                  nextByte = SerialP$SendBytePacket$nextByte();
                  if (SerialP$txBuf[SerialP$txIndex].state == SerialP$BUFFER_COMPLETE || SerialP$txByteCnt >= SerialP$SERIAL_MTU) {
                      SerialP$txState = SerialP$TXSTATE_FCS1;
                    }
                  else {
                      SerialP$txBuf[SerialP$txIndex].buf = nextByte;
                    }
                }
              else {
                  SerialP$txState = SerialP$TXSTATE_FCS1;
                }
            }
#line 671
            __nesc_atomic_end(__nesc_atomic); }
        break;

        case SerialP$TXSTATE_FCS1: 
          txResult = SerialP$SerialFrameComm$putData(SerialP$txCRC & 0xff);
        SerialP$txState = SerialP$TXSTATE_FCS2;
        break;

        case SerialP$TXSTATE_FCS2: 
          txResult = SerialP$SerialFrameComm$putData((SerialP$txCRC >> 8) & 0xff);
        SerialP$txState = SerialP$TXSTATE_ENDFLAG;
        break;

        case SerialP$TXSTATE_ENDFLAG: 
          txResult = SerialP$SerialFrameComm$putDelimiter();
        SerialP$txState = SerialP$TXSTATE_ENDWAIT;
        break;

        case SerialP$TXSTATE_ENDWAIT: 
          SerialP$txState = SerialP$TXSTATE_FINISH;
        case SerialP$TXSTATE_FINISH: 
          SerialP$MaybeScheduleTx();
        break;
        case SerialP$TXSTATE_ERROR: 
          default: 
            txResult = FAIL;
        break;
      }

    if (txResult != SUCCESS) {
        SerialP$txState = SerialP$TXSTATE_ERROR;
        SerialP$MaybeScheduleTx();
      }
  }
}

# 89 "/opt/tinyos-2.x/tos/lib/serial/SerialFrameComm.nc"
inline static   void HdlcTranslateC$SerialFrameComm$putDone(void){
#line 89
  SerialP$SerialFrameComm$putDone();
#line 89
}
#line 89
# 48 "/opt/tinyos-2.x/tos/interfaces/UartStream.nc"
inline static   error_t HdlcTranslateC$UartStream$send(uint8_t *arg_0x7e10eb20, uint16_t arg_0x7e10ecb0){
#line 48
  unsigned char result;
#line 48

#line 48
  result = /*Atm128Uart0C.UartP*/Atm128UartP$0$UartStream$send(arg_0x7e10eb20, arg_0x7e10ecb0);
#line 48

#line 48
  return result;
#line 48
}
#line 48
# 104 "/opt/tinyos-2.x/tos/lib/serial/HdlcTranslateC.nc"
static inline   void HdlcTranslateC$UartStream$sendDone(uint8_t *buf, uint16_t len, 
error_t error)
#line 105
{
  if (HdlcTranslateC$state.sendEscape) {
      HdlcTranslateC$state.sendEscape = 0;
      HdlcTranslateC$m_data = HdlcTranslateC$txTemp;
      HdlcTranslateC$UartStream$send(&HdlcTranslateC$m_data, 1);
    }
  else {
      HdlcTranslateC$SerialFrameComm$putDone();
    }
}

# 57 "/opt/tinyos-2.x/tos/interfaces/UartStream.nc"
inline static   void /*Atm128Uart0C.UartP*/Atm128UartP$0$UartStream$sendDone(uint8_t *arg_0x7e10b370, uint16_t arg_0x7e10b500, error_t arg_0x7e10b688){
#line 57
  HdlcTranslateC$UartStream$sendDone(arg_0x7e10b370, arg_0x7e10b500, arg_0x7e10b688);
#line 57
}
#line 57
# 46 "/opt/tinyos-2.x/tos/chips/atm128/HplAtm128Uart.nc"
inline static   void /*Atm128Uart0C.UartP*/Atm128UartP$0$HplUart$tx(uint8_t arg_0x7e0ca4f0){
#line 46
  HplAtm128UartP$HplUart0$tx(arg_0x7e0ca4f0);
#line 46
}
#line 46
# 139 "/opt/tinyos-2.x/tos/chips/atm128/Atm128UartP.nc"
static inline   void /*Atm128Uart0C.UartP*/Atm128UartP$0$HplUart$txDone(void)
#line 139
{

  if (/*Atm128Uart0C.UartP*/Atm128UartP$0$m_tx_pos < /*Atm128Uart0C.UartP*/Atm128UartP$0$m_tx_len) {
      /*Atm128Uart0C.UartP*/Atm128UartP$0$HplUart$tx(/*Atm128Uart0C.UartP*/Atm128UartP$0$m_tx_buf[/*Atm128Uart0C.UartP*/Atm128UartP$0$m_tx_pos++]);
    }
  else {
      uint8_t *buf = /*Atm128Uart0C.UartP*/Atm128UartP$0$m_tx_buf;

#line 146
      /*Atm128Uart0C.UartP*/Atm128UartP$0$m_tx_buf = (void *)0;
      /*Atm128Uart0C.UartP*/Atm128UartP$0$UartStream$sendDone(buf, /*Atm128Uart0C.UartP*/Atm128UartP$0$m_tx_len, SUCCESS);
    }
}

# 47 "/opt/tinyos-2.x/tos/chips/atm128/HplAtm128Uart.nc"
inline static   void HplAtm128UartP$HplUart0$txDone(void){
#line 47
  /*Atm128Uart0C.UartP*/Atm128UartP$0$HplUart$txDone();
#line 47
}
#line 47
# 283 "/opt/tinyos-2.x/tos/chips/atm128/HplAtm128UartP.nc"
static inline    void HplAtm128UartP$HplUart1$default$rxDone(uint8_t data)
#line 283
{
}

# 49 "/opt/tinyos-2.x/tos/chips/atm128/HplAtm128Uart.nc"
inline static   void HplAtm128UartP$HplUart1$rxDone(uint8_t arg_0x7e0c8010){
#line 49
  HplAtm128UartP$HplUart1$default$rxDone(arg_0x7e0c8010);
#line 49
}
#line 49
# 282 "/opt/tinyos-2.x/tos/chips/atm128/HplAtm128UartP.nc"
static inline    void HplAtm128UartP$HplUart1$default$txDone(void)
#line 282
{
}

# 47 "/opt/tinyos-2.x/tos/chips/atm128/HplAtm128Uart.nc"
inline static   void HplAtm128UartP$HplUart1$txDone(void){
#line 47
  HplAtm128UartP$HplUart1$default$txDone();
#line 47
}
#line 47
# 188 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer3P.nc"
static inline    void HplAtm128Timer3P$CompareA$default$fired(void)
#line 188
{
}

# 49 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static   void HplAtm128Timer3P$CompareA$fired(void){
#line 49
  HplAtm128Timer3P$CompareA$default$fired();
#line 49
}
#line 49
# 192 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer3P.nc"
static inline    void HplAtm128Timer3P$CompareB$default$fired(void)
#line 192
{
}

# 49 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static   void HplAtm128Timer3P$CompareB$fired(void){
#line 49
  HplAtm128Timer3P$CompareB$default$fired();
#line 49
}
#line 49
# 196 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer3P.nc"
static inline    void HplAtm128Timer3P$CompareC$default$fired(void)
#line 196
{
}

# 49 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static   void HplAtm128Timer3P$CompareC$fired(void){
#line 49
  HplAtm128Timer3P$CompareC$default$fired();
#line 49
}
#line 49
# 200 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer3P.nc"
static inline    void HplAtm128Timer3P$Capture$default$captured(uint16_t time)
#line 200
{
}

# 51 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Capture.nc"
inline static   void HplAtm128Timer3P$Capture$captured(HplAtm128Timer3P$Capture$size_type arg_0x7e8626a0){
#line 51
  HplAtm128Timer3P$Capture$default$captured(arg_0x7e8626a0);
#line 51
}
#line 51
# 47 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer3P.nc"
static inline   uint16_t HplAtm128Timer3P$Timer$get(void)
#line 47
{
#line 47
  return * (volatile uint16_t *)0x88;
}

# 174 "/opt/tinyos-2.x/tos/chips/atm128/Atm128UartP.nc"
static inline   void /*Atm128Uart0C.UartP*/Atm128UartP$0$Counter$overflow(void)
#line 174
{
}

# 71 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
inline static   void /*CounterMicro32C.Transform32*/TransformCounterC$1$Counter$overflow(void){
#line 71
  /*Atm128Uart0C.UartP*/Atm128UartP$0$Counter$overflow();
#line 71
}
#line 71
# 122 "/opt/tinyos-2.x/tos/lib/timer/TransformCounterC.nc"
static inline   void /*CounterMicro32C.Transform32*/TransformCounterC$1$CounterFrom$overflow(void)
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      /*CounterMicro32C.Transform32*/TransformCounterC$1$m_upper++;
      if ((/*CounterMicro32C.Transform32*/TransformCounterC$1$m_upper & /*CounterMicro32C.Transform32*/TransformCounterC$1$OVERFLOW_MASK) == 0) {
        /*CounterMicro32C.Transform32*/TransformCounterC$1$Counter$overflow();
        }
    }
#line 130
    __nesc_atomic_end(__nesc_atomic); }
}

# 71 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
inline static   void /*CounterThree16C.NCounter*/Atm128CounterC$2$Counter$overflow(void){
#line 71
  /*CounterMicro32C.Transform32*/TransformCounterC$1$CounterFrom$overflow();
#line 71
}
#line 71
# 56 "/opt/tinyos-2.x/tos/chips/atm128/timer/Atm128CounterC.nc"
static inline   void /*CounterThree16C.NCounter*/Atm128CounterC$2$Timer$overflow(void)
{
  /*CounterThree16C.NCounter*/Atm128CounterC$2$Counter$overflow();
}

# 51 "/opt/tinyos-2.x/tos/chips/atm128/timer/Atm128TimerInitC.nc"
static inline   void /*InitThreeP.InitThree*/Atm128TimerInitC$2$Timer$overflow(void)
#line 51
{
}

# 61 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static   void HplAtm128Timer3P$Timer$overflow(void){
#line 61
  /*InitThreeP.InitThree*/Atm128TimerInitC$2$Timer$overflow();
#line 61
  /*CounterThree16C.NCounter*/Atm128CounterC$2$Timer$overflow();
#line 61
}
#line 61
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
    case BaseP$uartSendTask:
#line 64
      BaseP$uartSendTask$runTask();
#line 64
      break;
#line 64
    case BaseP$radioSendTask:
#line 64
      BaseP$radioSendTask$runTask();
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
    case SerialP$RunTx:
#line 64
      SerialP$RunTx$runTask();
#line 64
      break;
#line 64
    case SerialP$startDoneTask:
#line 64
      SerialP$startDoneTask$runTask();
#line 64
      break;
#line 64
    case SerialP$stopDoneTask:
#line 64
      SerialP$stopDoneTask$runTask();
#line 64
      break;
#line 64
    case /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$signalSendDone:
#line 64
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$signalSendDone$runTask();
#line 64
      break;
#line 64
    case /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveTask:
#line 64
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveTask$runTask();
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

# 334 "/opt/tinyos-2.x/tos/lib/serial/SerialP.nc"
static void SerialP$testOff(void)
#line 334
{
  bool turnOff = FALSE;

#line 336
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 336
    {
      if (SerialP$txState == SerialP$TXSTATE_INACTIVE && 
      SerialP$rxState == SerialP$RXSTATE_INACTIVE) {
          turnOff = TRUE;
        }
    }
#line 341
    __nesc_atomic_end(__nesc_atomic); }
  if (turnOff) {
      SerialP$stopDoneTask$postTask();
      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 344
        SerialP$offPending = FALSE;
#line 344
        __nesc_atomic_end(__nesc_atomic); }
    }
  else {
      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 347
        SerialP$offPending = TRUE;
#line 347
        __nesc_atomic_end(__nesc_atomic); }
    }
}

# 86 "/opt/tinyos-2.x/tos/lib/serial/HdlcTranslateC.nc"
static   error_t HdlcTranslateC$SerialFrameComm$putDelimiter(void)
#line 86
{
  HdlcTranslateC$state.sendEscape = 0;
  HdlcTranslateC$m_data = HDLC_FLAG_BYTE;
  return HdlcTranslateC$UartStream$send(&HdlcTranslateC$m_data, 1);
}

# 123 "/opt/tinyos-2.x/tos/chips/atm128/Atm128UartP.nc"
static   error_t /*Atm128Uart0C.UartP*/Atm128UartP$0$UartStream$send(uint8_t *buf, uint16_t len)
#line 123
{

  if (len == 0) {
    return FAIL;
    }
  else {
#line 127
    if (/*Atm128Uart0C.UartP*/Atm128UartP$0$m_tx_buf) {
      return EBUSY;
      }
    }
#line 130
  /*Atm128Uart0C.UartP*/Atm128UartP$0$m_tx_buf = buf;
  /*Atm128Uart0C.UartP*/Atm128UartP$0$m_tx_len = len;
  /*Atm128Uart0C.UartP*/Atm128UartP$0$m_tx_pos = 0;
  /*Atm128Uart0C.UartP*/Atm128UartP$0$HplUart$tx(buf[/*Atm128Uart0C.UartP*/Atm128UartP$0$m_tx_pos++]);

  return SUCCESS;
}

# 167 "/opt/tinyos-2.x/tos/chips/atm128/HplAtm128UartP.nc"
static   void HplAtm128UartP$HplUart0$tx(uint8_t data)
#line 167
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 168
    {
      * (volatile uint8_t *)(0x0C + 0x20) = data;
      * (volatile uint8_t *)(0x0B + 0x20) |= 1 << 6;
    }
#line 171
    __nesc_atomic_end(__nesc_atomic); }
}

# 489 "/opt/tinyos-2.x/tos/lib/serial/SerialP.nc"
static void SerialP$MaybeScheduleTx(void)
#line 489
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 490
    {
      if (SerialP$txPending == 0) {
          if (SerialP$RunTx$postTask() == SUCCESS) {
              SerialP$txPending = 1;
            }
        }
    }
#line 496
    __nesc_atomic_end(__nesc_atomic); }
}

# 142 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static  am_id_t CC2420ActiveMessageP$AMPacket$type(message_t *amsg)
#line 142
{
  cc2420_header_t *header = CC2420ActiveMessageP$getHeader(amsg);

#line 144
  return __nesc_ntoh_leuint8((unsigned char *)&header->type);
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

# 156 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420ReceiveP.nc"
static void CC2420ReceiveP$receive(void)
#line 156
{
  CC2420ReceiveP$CSN$clr();
  CC2420ReceiveP$RXFIFO$beginRead((uint8_t *)CC2420ReceiveP$getHeader(CC2420ReceiveP$m_p_rx_buf), 1);
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

# 103 "/opt/tinyos-2.x/tos/chips/atm128/spi/HplAtm128SpiP.nc"
__attribute((signal))   void __vector_17(void)
#line 103
{
  HplAtm128SpiP$SPI$dataReady(HplAtm128SpiP$SPI$read());
}

# 174 "/opt/tinyos-2.x/tos/chips/atm128/HplAtm128UartP.nc"
__attribute((signal))   void __vector_18(void)
#line 174
{
  if ((* (volatile uint8_t *)(0x0B + 0x20) & (1 << 7)) != 0) {
      HplAtm128UartP$HplUart0$rxDone(* (volatile uint8_t *)(0x0C + 0x20));
    }
}

# 389 "/opt/tinyos-2.x/tos/lib/serial/SerialP.nc"
static void SerialP$rx_state_machine(bool isDelimeter, uint8_t data)
#line 389
{

  switch (SerialP$rxState) {

      case SerialP$RXSTATE_NOSYNC: 
        if (isDelimeter) {
            SerialP$rxInit();
            SerialP$rxState = SerialP$RXSTATE_PROTO;
          }
      break;

      case SerialP$RXSTATE_PROTO: 
        if (!isDelimeter) {
            SerialP$rxCRC = crcByte(SerialP$rxCRC, data);
            SerialP$rxState = SerialP$RXSTATE_TOKEN;
            SerialP$rxProto = data;
            if (!SerialP$valid_rx_proto(SerialP$rxProto)) {
              goto nosync;
              }
            if (SerialP$rxProto != SERIAL_PROTO_PACKET_ACK) {
                goto nosync;
              }
            if (SerialP$ReceiveBytePacket$startPacket() != SUCCESS) {
                goto nosync;
              }
          }
      break;

      case SerialP$RXSTATE_TOKEN: 
        if (isDelimeter) {
            goto nosync;
          }
        else {
            SerialP$rxSeqno = data;
            SerialP$rxCRC = crcByte(SerialP$rxCRC, SerialP$rxSeqno);
            SerialP$rxState = SerialP$RXSTATE_INFO;
          }
      break;

      case SerialP$RXSTATE_INFO: 
        if (SerialP$rxByteCnt < SerialP$SERIAL_MTU) {
            if (isDelimeter) {
                if (SerialP$rxByteCnt >= 2) {
                    if (SerialP$rx_current_crc() == SerialP$rxCRC) {
                        SerialP$ReceiveBytePacket$endPacket(SUCCESS);
                        SerialP$ack_queue_push(SerialP$rxSeqno);
                        goto nosync;
                      }
                    else {
                        goto nosync;
                      }
                  }
                else {
                    goto nosync;
                  }
              }
            else {
                if (SerialP$rxByteCnt >= 2) {
                    SerialP$ReceiveBytePacket$byteReceived(SerialP$rx_buffer_top());
                    SerialP$rxCRC = crcByte(SerialP$rxCRC, SerialP$rx_buffer_pop());
                  }
                SerialP$rx_buffer_push(data);
                SerialP$rxByteCnt++;
              }
          }
        else 

          {
            goto nosync;
          }
      break;

      default: 
        goto nosync;
    }
  goto done;

  nosync: 

    SerialP$rxInit();
  SerialP$SerialFrameComm$resetReceive();
  SerialP$ReceiveBytePacket$endPacket(FAIL);
  if (SerialP$offPending) {
      SerialP$rxState = SerialP$RXSTATE_INACTIVE;
      SerialP$testOff();
    }
  else {
    if (isDelimeter) {
        SerialP$rxState = SerialP$RXSTATE_PROTO;
      }
    }
  done: ;
}

# 81 "/opt/tinyos-2.x/tos/chips/atm128/crc.h"
static __attribute((noinline)) uint16_t crcByte(uint16_t oldCrc, uint8_t byte)
{

  uint16_t *table = crcTable;
  uint16_t newCrc;

   __asm ("eor %1,%B3\n"
  "\tlsl %1\n"
  "\tadc %B2, __zero_reg__\n"
  "\tadd %A2, %1\n"
  "\tadc %B2, __zero_reg__\n"
  "\tlpm\n"
  "\tmov %B0, %A3\n"
  "\tmov %A0, r0\n"
  "\tadiw r30,1\n"
  "\tlpm\n"
  "\teor %B0, r0" : 
  "=r"(newCrc), "+r"(byte), "+z"(table) : "r"(oldCrc));
  return newCrc;
}

# 282 "/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
static   void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$ReceiveBytePacket$endPacket(error_t result)
#line 282
{
  uint8_t postsignalreceive = FALSE;

  /* atomic removed: atomic calls only */
#line 284
  {
    if (!/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveTaskPending && result == SUCCESS) {
        postsignalreceive = TRUE;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveTaskPending = TRUE;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveTaskType = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$recvType;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveTaskWhich = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveState.which;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveTaskBuf = (message_t *)/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveBuffer;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveTaskSize = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$recvIndex;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveBufferSwap();
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveState.state = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$RECV_STATE_IDLE;
      }
  }
  if (postsignalreceive) {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveTask$postTask();
    }
}

# 180 "/opt/tinyos-2.x/tos/chips/atm128/HplAtm128UartP.nc"
__attribute((interrupt))   void __vector_20(void)
#line 180
{
  HplAtm128UartP$HplUart0$txDone();
}

# 92 "/opt/tinyos-2.x/tos/lib/serial/HdlcTranslateC.nc"
static   error_t HdlcTranslateC$SerialFrameComm$putData(uint8_t data)
#line 92
{
  if (data == HDLC_CTLESC_BYTE || data == HDLC_FLAG_BYTE) {
      HdlcTranslateC$state.sendEscape = 1;
      HdlcTranslateC$txTemp = data ^ 0x20;
      HdlcTranslateC$m_data = HDLC_CTLESC_BYTE;
    }
  else {
      HdlcTranslateC$m_data = data;
    }
  return HdlcTranslateC$UartStream$send(&HdlcTranslateC$m_data, 1);
}

# 271 "/opt/tinyos-2.x/tos/chips/atm128/HplAtm128UartP.nc"
__attribute((signal))   void __vector_30(void)
#line 271
{
  if ((* (volatile uint8_t *)0x9B & (1 << 7)) != 0) {
    HplAtm128UartP$HplUart1$rxDone(* (volatile uint8_t *)0x9C);
    }
}

#line 276
__attribute((interrupt))   void __vector_32(void)
#line 276
{
  HplAtm128UartP$HplUart1$txDone();
}

# 189 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer3P.nc"
__attribute((interrupt))   void __vector_26(void)
#line 189
{
  HplAtm128Timer3P$CompareA$fired();
}

__attribute((interrupt))   void __vector_27(void)
#line 193
{
  HplAtm128Timer3P$CompareB$fired();
}

__attribute((interrupt))   void __vector_28(void)
#line 197
{
  HplAtm128Timer3P$CompareC$fired();
}

__attribute((interrupt))   void __vector_25(void)
#line 201
{
  HplAtm128Timer3P$Capture$captured(HplAtm128Timer3P$Timer$get());
}

__attribute((interrupt))   void __vector_29(void)
#line 205
{
  HplAtm128Timer3P$Timer$overflow();
}

