
#ifndef	_HTC_H_
#warning Header file pic16f1503.h included directly. Use #include <htc.h> instead.
#endif

/* header file for the MICROCHIP PIC microcontroller
 *  16F1503
 */


#ifndef __PIC16F1503_H
#define __PIC16F1503_H

//
// Configuration mask definitions
//


// Config Register: CONFIG1
#define CONFIG1              0x8007
// Oscillator Selection Bits
// ECH, External Clock, High Power Mode (4-20 MHz): device clock supplied to CLKIN pin
#define FOSC_ECH             0xFFFF
// ECM, External Clock, Medium Power Mode (0.5-4 MHz): device clock supplied to CLKIN pin
#define FOSC_ECM             0xFFFE
// ECL, External Clock, Low Power Mode (0-0.5 MHz): device clock supplied to CLKIN pin
#define FOSC_ECL             0xFFFD
// INTOSC oscillator: I/O function on CLKIN pin
#define FOSC_INTOSC          0xFFFC
// Watchdog Timer Enable
// WDT enabled
#define WDTE_ON              0xFFFF
// WDT enabled while running and disabled in Sleep
#define WDTE_NSLEEP          0xFFF7
// WDT controlled by the SWDTEN bit in the WDTCON register
#define WDTE_SWDTEN          0xFFEF
// WDT disabled
#define WDTE_OFF             0xFFE7
// Power-up Timer Enable
// PWRT disabled
#define PWRTE_OFF            0xFFFF
// PWRT enabled
#define PWRTE_ON             0xFFDF
// MCLR Pin Function Select
// MCLR/VPP pin function is MCLR
#define MCLRE_ON             0xFFFF
// MCLR/VPP pin function is digital input
#define MCLRE_OFF            0xFFBF
// Flash Program Memory Code Protection
// Program memory code protection is disabled
#define CP_OFF               0xFFFF
// Program memory code protection is enabled
#define CP_ON                0xFF7F
// Brown-out Reset Enable
// Brown-out Reset enabled
#define BOREN_ON             0xFFFF
// Brown-out Reset enabled while running and disabled in Sleep
#define BOREN_NSLEEP         0xFDFF
// Brown-out Reset controlled by the SBOREN bit in the BORCON register
#define BOREN_SBODEN         0xFBFF
// Brown-out Reset disabled
#define BOREN_OFF            0xF9FF
// Clock Out Enable
// CLKOUT function is disabled. I/O or oscillator function on the CLKOUT pin
#define CLKOUTEN_OFF         0xFFFF
// CLKOUT function is enabled on the CLKOUT pin
#define CLKOUTEN_ON          0xF7FF


// Config Register: CONFIG2
#define CONFIG2              0x8008
// Flash Memory Self-Write Protection
// Write protection off
#define WRT_OFF              0xFFFF
// 000h to 1FFh write protected, 200h to 1FFFh may be modified by EECON control
#define WRT_BOOT             0xFFFE
// 000h to FFFh write protected, 1000h to 1FFFh may be modified by EECON control
#define WRT_HALF             0xFFFD
// 000h to 1FFFh write protected, no addresses may be modified by EECON control
#define WRT_ALL              0xFFFC
// Stack Overflow/Underflow Reset Enable
// Stack Overflow or Underflow will cause a Reset
#define STVREN_ON            0xFFFF
// Stack Overflow or Underflow will not cause a Reset
#define STVREN_OFF           0xFDFF
// Brown-out Reset Voltage Selection
// Brown-out Reset Voltage (VBOR) set to 1.9 V
#define BORV_19              0xFFFF
// Brown-out Reset Voltage (VBOR) set to 2.5 V
#define BORV_25              0xFBFF
// Low-Power Brown Out Reset
// Low-Power BOR is disabled
#define LPBOR_OFF            0xFFFF
// Low-Power BOR is enabled
#define LPBOR_ON             0xF7FF
// Low-Voltage Programming Enable
// Low-voltage programming enabled
#define LVP_ON               0xFFFF
// High-voltage on MCLR/VPP must be used for programming
#define LVP_OFF              0xDFFF


//
// Special function register definitions
//


// Register: INDF0
volatile unsigned char           INDF0               @ 0x000;
// bit and bitfield definitions

// Register: INDF1
volatile unsigned char           INDF1               @ 0x001;
// bit and bitfield definitions

// Register: PCL
volatile unsigned char           PCL                 @ 0x002;
// bit and bitfield definitions

// Register: STATUS
volatile unsigned char           STATUS              @ 0x003;
// bit and bitfield definitions
volatile bit CARRY               @ ((unsigned)&STATUS*8)+0;
volatile bit DC                  @ ((unsigned)&STATUS*8)+1;
volatile bit ZERO                @ ((unsigned)&STATUS*8)+2;
volatile bit nPD                 @ ((unsigned)&STATUS*8)+3;
volatile bit nTO                 @ ((unsigned)&STATUS*8)+4;
#ifndef _LIB_BUILD
volatile union {
    struct {
        unsigned	C                   : 1;
        unsigned	DC                  : 1;
        unsigned	Z                   : 1;
        unsigned	nPD                 : 1;
        unsigned	nTO                 : 1;
        unsigned	                    : 2;
        unsigned	: 1;
    };
} STATUSbits @ 0x003;
#endif
// bit and bitfield definitions

// Register: FSR0L
volatile unsigned char           FSR0L               @ 0x004;
// bit and bitfield definitions

// Register: FSR0H
volatile unsigned char           FSR0H               @ 0x005;
// bit and bitfield definitions

// Register: FSR0
volatile unsigned int            FSR0                @ 0x004;
// bit and bitfield definitions

// Register: FSR1L
volatile unsigned char           FSR1L               @ 0x006;
// bit and bitfield definitions

// Register: FSR1H
volatile unsigned char           FSR1H               @ 0x007;
// bit and bitfield definitions

// Register: FSR1
volatile unsigned int            FSR1                @ 0x006;

// Register: BSR
volatile unsigned char           BSR                 @ 0x008;
// bit and bitfield definitions
volatile bit BSR0                @ ((unsigned)&BSR*8)+0;
volatile bit BSR1                @ ((unsigned)&BSR*8)+1;
volatile bit BSR2                @ ((unsigned)&BSR*8)+2;
volatile bit BSR3                @ ((unsigned)&BSR*8)+3;
volatile bit BSR4                @ ((unsigned)&BSR*8)+4;
#ifndef _LIB_BUILD
volatile union {
    struct {
        unsigned	BSR                 : 5;
    };
    struct {
        unsigned	BSR0                : 1;
        unsigned	BSR1                : 1;
        unsigned	BSR2                : 1;
        unsigned	BSR3                : 1;
        unsigned	BSR4                : 1;
    };
} BSRbits @ 0x008;
#endif

// Register: WREG
volatile unsigned char           WREG                @ 0x009;
// bit and bitfield definitions

// Register: PCLATH
volatile unsigned char           PCLATH              @ 0x00A;
// bit and bitfield definitions
#ifndef _LIB_BUILD
volatile union {
    struct {
        unsigned	PCLATH              : 7;
    };
} PCLATHbits @ 0x00A;
#endif

// Register: INTCON
volatile unsigned char           INTCON              @ 0x00B;
// bit and bitfield definitions
volatile bit IOCIF               @ ((unsigned)&INTCON*8)+0;
volatile bit INTF                @ ((unsigned)&INTCON*8)+1;
volatile bit TMR0IF              @ ((unsigned)&INTCON*8)+2;
volatile bit IOCIE               @ ((unsigned)&INTCON*8)+3;
volatile bit INTE                @ ((unsigned)&INTCON*8)+4;
volatile bit TMR0IE              @ ((unsigned)&INTCON*8)+5;
volatile bit PEIE                @ ((unsigned)&INTCON*8)+6;
volatile bit GIE                 @ ((unsigned)&INTCON*8)+7;
volatile bit T0IF                @ ((unsigned)&INTCON*8)+2;
volatile bit T0IE                @ ((unsigned)&INTCON*8)+5;
#ifndef _LIB_BUILD
volatile union {
    struct {
        unsigned	IOCIF               : 1;
        unsigned	INTF                : 1;
        unsigned	TMR0IF              : 1;
        unsigned	IOCIE               : 1;
        unsigned	INTE                : 1;
        unsigned	TMR0IE              : 1;
        unsigned	PEIE                : 1;
        unsigned	GIE                 : 1;
    };
    struct {
        unsigned	                    : 2;
        unsigned	T0IF                : 1;
        unsigned	: 2;
        unsigned	T0IE                : 1;
    };
} INTCONbits @ 0x00B;
#endif

// Register: PORTA
volatile unsigned char           PORTA               @ 0x00C;
// bit and bitfield definitions
volatile bit RA0                 @ ((unsigned)&PORTA*8)+0;
volatile bit RA1                 @ ((unsigned)&PORTA*8)+1;
volatile bit RA2                 @ ((unsigned)&PORTA*8)+2;
volatile bit RA3                 @ ((unsigned)&PORTA*8)+3;
volatile bit RA4                 @ ((unsigned)&PORTA*8)+4;
volatile bit RA5                 @ ((unsigned)&PORTA*8)+5;
#ifndef _LIB_BUILD
volatile union {
    struct {
        unsigned	RA0                 : 1;
        unsigned	RA1                 : 1;
        unsigned	RA2                 : 1;
        unsigned	RA3                 : 1;
        unsigned	RA4                 : 1;
        unsigned	RA5                 : 1;
        unsigned	                    : 1;
        unsigned	: 1;
    };
} PORTAbits @ 0x00C;
#endif

// Register: PORTC
volatile unsigned char           PORTC               @ 0x00E;
// bit and bitfield definitions
volatile bit RC0                 @ ((unsigned)&PORTC*8)+0;
volatile bit RC1                 @ ((unsigned)&PORTC*8)+1;
volatile bit RC2                 @ ((unsigned)&PORTC*8)+2;
volatile bit RC3                 @ ((unsigned)&PORTC*8)+3;
volatile bit RC4                 @ ((unsigned)&PORTC*8)+4;
volatile bit RC5                 @ ((unsigned)&PORTC*8)+5;
#ifndef _LIB_BUILD
volatile union {
    struct {
        unsigned	RC0                 : 1;
        unsigned	RC1                 : 1;
        unsigned	RC2                 : 1;
        unsigned	RC3                 : 1;
        unsigned	RC4                 : 1;
        unsigned	RC5                 : 1;
        unsigned	                    : 1;
        unsigned	: 1;
    };
} PORTCbits @ 0x00E;
#endif

// Register: PIR1
volatile unsigned char           PIR1                @ 0x011;
// bit and bitfield definitions
// TMR1 Overflow Interrupt Flag bit
volatile bit TMR1IF              @ ((unsigned)&PIR1*8)+0;
// TMR2 to PR2 Match Interrupt Flag bit
volatile bit TMR2IF              @ ((unsigned)&PIR1*8)+1;
volatile bit SSP1IF              @ ((unsigned)&PIR1*8)+3;
// A/D Converter Interrupt Flag bit
volatile bit ADIF                @ ((unsigned)&PIR1*8)+6;
// Timer1 Gate Interrupt Flag bit
volatile bit TMR1GIF             @ ((unsigned)&PIR1*8)+7;
#ifndef _LIB_BUILD
volatile union {
    struct {
        unsigned	TMR1IF              : 1;
        unsigned	TMR2IF              : 1;
        unsigned	: 1;
        unsigned	SSP1IF              : 1;
        unsigned	: 1;
        unsigned	: 1;
        unsigned	ADIF                : 1;
        unsigned	TMR1GIF             : 1;
    };
} PIR1bits @ 0x011;
#endif

// Register: PIR2
volatile unsigned char           PIR2                @ 0x012;
// bit and bitfield definitions
volatile bit NCO1IF              @ ((unsigned)&PIR2*8)+2;
volatile bit BCL1IF              @ ((unsigned)&PIR2*8)+3;
volatile bit C1IF                @ ((unsigned)&PIR2*8)+5;
volatile bit C2IF                @ ((unsigned)&PIR2*8)+6;
#ifndef _LIB_BUILD
volatile union {
    struct {
        unsigned	: 1;
        unsigned	: 1;
        unsigned	NCO1IF              : 1;
        unsigned	BCL1IF              : 1;
        unsigned	: 1;
        unsigned	C1IF                : 1;
        unsigned	C2IF                : 1;
        unsigned	: 1;
    };
} PIR2bits @ 0x012;
#endif

// Register: PIR3
volatile unsigned char           PIR3                @ 0x013;
// bit and bitfield definitions
volatile bit CLC1IF              @ ((unsigned)&PIR3*8)+0;
volatile bit CLC2IF              @ ((unsigned)&PIR3*8)+1;
#ifndef _LIB_BUILD
volatile union {
    struct {
        unsigned	CLC1IF              : 1;
        unsigned	CLC2IF              : 1;
    };
} PIR3bits @ 0x013;
#endif

// Register: TMR0
volatile unsigned char           TMR0                @ 0x015;
// bit and bitfield definitions
// bit and bitfield definitions

// Register: TMR1L
volatile unsigned char           TMR1L               @ 0x016;
// bit and bitfield definitions

// Register: TMR1H
volatile unsigned char           TMR1H               @ 0x017;
// bit and bitfield definitions

// Register: TMR1
volatile unsigned int            TMR1                @ 0x016;

// Register: T1CON
volatile unsigned char           T1CON               @ 0x018;
// bit and bitfield definitions
volatile bit TMR1ON              @ ((unsigned)&T1CON*8)+0;
volatile bit nT1SYNC             @ ((unsigned)&T1CON*8)+2;
volatile bit T1OSCEN             @ ((unsigned)&T1CON*8)+3;
volatile bit T1CKPS0             @ ((unsigned)&T1CON*8)+4;
volatile bit T1CKPS1             @ ((unsigned)&T1CON*8)+5;
volatile bit TMR1CS0             @ ((unsigned)&T1CON*8)+6;
volatile bit TMR1CS1             @ ((unsigned)&T1CON*8)+7;
#ifndef _LIB_BUILD
volatile union {
    struct {
        unsigned	TMR1ON              : 1;
        unsigned	                    : 1;
        unsigned	nT1SYNC             : 1;
        unsigned	T1OSCEN             : 1;
        unsigned	T1CKPS              : 2;
        unsigned	TMR1CS              : 2;
    };
    struct {
        unsigned	: 4;
        unsigned	T1CKPS0             : 1;
        unsigned	T1CKPS1             : 1;
        unsigned	TMR1CS0             : 1;
        unsigned	TMR1CS1             : 1;
    };
} T1CONbits @ 0x018;
#endif

// Register: T1GCON
volatile unsigned char           T1GCON              @ 0x019;
// bit and bitfield definitions
volatile bit T1GVAL              @ ((unsigned)&T1GCON*8)+2;
volatile bit T1GGO_nDONE         @ ((unsigned)&T1GCON*8)+3;
volatile bit T1GSPM              @ ((unsigned)&T1GCON*8)+4;
volatile bit T1GTM               @ ((unsigned)&T1GCON*8)+5;
volatile bit T1GPOL              @ ((unsigned)&T1GCON*8)+6;
volatile bit TMR1GE              @ ((unsigned)&T1GCON*8)+7;
volatile bit T1GSS0              @ ((unsigned)&T1GCON*8)+0;
volatile bit T1GSS1              @ ((unsigned)&T1GCON*8)+1;
#ifndef _LIB_BUILD
volatile union {
    struct {
        unsigned	T1GSS               : 2;
        unsigned	T1GVAL              : 1;
        unsigned	T1GGO_nDONE         : 1;
        unsigned	T1GSPM              : 1;
        unsigned	T1GTM               : 1;
        unsigned	T1GPOL              : 1;
        unsigned	TMR1GE              : 1;
    };
    struct {
        unsigned	T1GSS0              : 1;
        unsigned	T1GSS1              : 1;
    };
} T1GCONbits @ 0x019;
#endif

// Register: TMR2
volatile unsigned char           TMR2                @ 0x01A;
// bit and bitfield definitions

// Register: PR2
volatile unsigned char           PR2                 @ 0x01B;
// bit and bitfield definitions

// Register: T2CON
volatile unsigned char           T2CON               @ 0x01C;
// bit and bitfield definitions
volatile bit TMR2ON              @ ((unsigned)&T2CON*8)+2;
volatile bit T2CKPS0             @ ((unsigned)&T2CON*8)+0;
volatile bit T2CKPS1             @ ((unsigned)&T2CON*8)+1;
volatile bit TOUTPS0             @ ((unsigned)&T2CON*8)+3;
volatile bit TOUTPS1             @ ((unsigned)&T2CON*8)+4;
volatile bit TOUTPS2             @ ((unsigned)&T2CON*8)+5;
volatile bit TOUTPS3             @ ((unsigned)&T2CON*8)+6;
#ifndef _LIB_BUILD
volatile union {
    struct {
        unsigned	T2CKPS              : 2;
        unsigned	TMR2ON              : 1;
        unsigned	T2OUTPS             : 4;
    };
    struct {
        unsigned	T2CKPS0             : 1;
        unsigned	T2CKPS1             : 1;
        unsigned	                    : 1;
        unsigned	TOUTPS0             : 1;
        unsigned	TOUTPS1             : 1;
        unsigned	TOUTPS2             : 1;
        unsigned	TOUTPS3             : 1;
    };
} T2CONbits @ 0x01C;
#endif

//
// Special function register definitions: Bank 1
//


// Register: TRISA
// PORTA Data Direction Control Register
volatile unsigned char           TRISA               @ 0x08C;
// bit and bitfield definitions
volatile bit TRISA0              @ ((unsigned)&TRISA*8)+0;
volatile bit TRISA1              @ ((unsigned)&TRISA*8)+1;
volatile bit TRISA2              @ ((unsigned)&TRISA*8)+2;
volatile bit TRISA3              @ ((unsigned)&TRISA*8)+3;
volatile bit TRISA4              @ ((unsigned)&TRISA*8)+4;
volatile bit TRISA5              @ ((unsigned)&TRISA*8)+5;
#ifndef _LIB_BUILD
volatile union {
    struct {
        unsigned	TRISA0              : 1;
        unsigned	TRISA1              : 1;
        unsigned	TRISA2              : 1;
        unsigned	TRISA3              : 1;
        unsigned	TRISA4              : 1;
        unsigned	TRISA5              : 1;
        unsigned	                    : 1;
        unsigned	: 1;
    };
} TRISAbits @ 0x08C;
#endif

// Register: TRISC
// PORTC Data Direction Control Register
volatile unsigned char           TRISC               @ 0x08E;
// bit and bitfield definitions
volatile bit TRISC0              @ ((unsigned)&TRISC*8)+0;
volatile bit TRISC1              @ ((unsigned)&TRISC*8)+1;
volatile bit TRISC2              @ ((unsigned)&TRISC*8)+2;
volatile bit TRISC3              @ ((unsigned)&TRISC*8)+3;
volatile bit TRISC4              @ ((unsigned)&TRISC*8)+4;
volatile bit TRISC5              @ ((unsigned)&TRISC*8)+5;
#ifndef _LIB_BUILD
volatile union {
    struct {
        unsigned	TRISC0              : 1;
        unsigned	TRISC1              : 1;
        unsigned	TRISC2              : 1;
        unsigned	TRISC3              : 1;
        unsigned	TRISC4              : 1;
        unsigned	TRISC5              : 1;
        unsigned	                    : 1;
        unsigned	: 1;
    };
} TRISCbits @ 0x08E;
#endif

// Register: PIE1
// Peripheral Interrupt Enable Register 1
volatile unsigned char           PIE1                @ 0x091;
// bit and bitfield definitions
// TMR1 Overflow Interrupt Enable bit
volatile bit TMR1IE              @ ((unsigned)&PIE1*8)+0;
// TMR2 to PR2 Match Interrupt Enable bit
volatile bit TMR2IE              @ ((unsigned)&PIE1*8)+1;
volatile bit SSP1IE              @ ((unsigned)&PIE1*8)+3;
// A/D Converter Interrupt Enable bit
volatile bit ADIE                @ ((unsigned)&PIE1*8)+6;
// Timer1 Gate Interrupt Enable bit
volatile bit TMR1GIE             @ ((unsigned)&PIE1*8)+7;
#ifndef _LIB_BUILD
volatile union {
    struct {
        unsigned	TMR1IE              : 1;
        unsigned	TMR2IE              : 1;
        unsigned	: 1;
        unsigned	SSP1IE              : 1;
        unsigned	: 1;
        unsigned	: 1;
        unsigned	ADIE                : 1;
        unsigned	TMR1GIE             : 1;
    };
} PIE1bits @ 0x091;
#endif

// Register: PIE2
// Peripheral Interrupt Enable Register 2
volatile unsigned char           PIE2                @ 0x092;
// bit and bitfield definitions
volatile bit NCO1IE              @ ((unsigned)&PIE2*8)+2;
volatile bit BCL1IE              @ ((unsigned)&PIE2*8)+3;
volatile bit C1IE                @ ((unsigned)&PIE2*8)+5;
volatile bit C2IE                @ ((unsigned)&PIE2*8)+6;
#ifndef _LIB_BUILD
volatile union {
    struct {
        unsigned	                    : 1;
        unsigned	: 1;
        unsigned	NCO1IE              : 1;
        unsigned	BCL1IE              : 1;
        unsigned	: 1;
        unsigned	C1IE                : 1;
        unsigned	C2IE                : 1;
        unsigned	: 1;
    };
} PIE2bits @ 0x092;
#endif

// Register: PIE3
// Peripheral Interrupt Enable Register 3
volatile unsigned char           PIE3                @ 0x093;
// bit and bitfield definitions
volatile bit CLC1E               @ ((unsigned)&PIE3*8)+0;
volatile bit CLC2IE              @ ((unsigned)&PIE3*8)+1;
#ifndef _LIB_BUILD
volatile union {
    struct {
        unsigned	CLC1E               : 1;
        unsigned	CLC2IE              : 1;
    };
} PIE3bits @ 0x093;
#endif

// Register: OPTION_REG
// Option Register
volatile unsigned char           OPTION_REG          @ 0x095;
// bit and bitfield definitions
// Prescaler Active bit
volatile bit PSA                 @ ((unsigned)&OPTION_REG*8)+3;
// TMR0 Source Edge Select bit
volatile bit TMR0SE              @ ((unsigned)&OPTION_REG*8)+4;
volatile bit TMR0CS              @ ((unsigned)&OPTION_REG*8)+5;
// Interrupt Edge Select bit
volatile bit INTEDG              @ ((unsigned)&OPTION_REG*8)+6;
// Weak Pull-up Enable bit
volatile bit nWPUEN              @ ((unsigned)&OPTION_REG*8)+7;
volatile bit PS0                 @ ((unsigned)&OPTION_REG*8)+0;
volatile bit PS1                 @ ((unsigned)&OPTION_REG*8)+1;
volatile bit PS2                 @ ((unsigned)&OPTION_REG*8)+2;
volatile bit T0SE                @ ((unsigned)&OPTION_REG*8)+4;
volatile bit T0CS                @ ((unsigned)&OPTION_REG*8)+5;
#ifndef _LIB_BUILD
volatile union {
    struct {
        unsigned	PS                  : 3;
        unsigned	PSA                 : 1;
        unsigned	TMR0SE              : 1;
        unsigned	TMR0CS              : 1;
        unsigned	INTEDG              : 1;
        unsigned	nWPUEN              : 1;
    };
    struct {
        unsigned	PS0                 : 1;
        unsigned	PS1                 : 1;
        unsigned	PS2                 : 1;
        unsigned	                    : 1;
        unsigned	T0SE                : 1;
        unsigned	T0CS                : 1;
    };
} OPTION_REGbits @ 0x095;
#endif

// Register: PCON
// Power Control Register
volatile unsigned char           PCON                @ 0x096;
// bit and bitfield definitions
// Brown-out Reset Status bit
volatile bit nBOR                @ ((unsigned)&PCON*8)+0;
// Power-on Reset Status bit
volatile bit nPOR                @ ((unsigned)&PCON*8)+1;
// RESET Instruction Flag bit
volatile bit nRI                 @ ((unsigned)&PCON*8)+2;
// MCLR Reset Flag bit
volatile bit nRMCLR              @ ((unsigned)&PCON*8)+3;
volatile bit nRWDT               @ ((unsigned)&PCON*8)+4;
// Stack Underflow Flag bit
volatile bit STKUNF              @ ((unsigned)&PCON*8)+6;
// Stack Overflow Flag bit
volatile bit STKOVF              @ ((unsigned)&PCON*8)+7;
#ifndef _LIB_BUILD
volatile union {
    struct {
        unsigned	nBOR                : 1;
        unsigned	nPOR                : 1;
        unsigned	nRI                 : 1;
        unsigned	nRMCLR              : 1;
        unsigned	nRWDT               : 1;
        unsigned	                    : 1;
        unsigned	STKUNF              : 1;
        unsigned	STKOVF              : 1;
    };
} PCONbits @ 0x096;
#endif

// Register: WDTCON
// Watchdog Timer Control Register
volatile unsigned char           WDTCON              @ 0x097;
// bit and bitfield definitions
// Software Enable/Disable for Watch Dog Timer bit
volatile bit SWDTEN              @ ((unsigned)&WDTCON*8)+0;
volatile bit WDTPS0              @ ((unsigned)&WDTCON*8)+1;
volatile bit WDTPS1              @ ((unsigned)&WDTCON*8)+2;
volatile bit WDTPS2              @ ((unsigned)&WDTCON*8)+3;
volatile bit WDTPS3              @ ((unsigned)&WDTCON*8)+4;
volatile bit WDTPS4              @ ((unsigned)&WDTCON*8)+5;
#ifndef _LIB_BUILD
volatile union {
    struct {
        unsigned	SWDTEN              : 1;
        unsigned	WDTPS               : 5;
    };
    struct {
        unsigned	                    : 1;
        unsigned	WDTPS0              : 1;
        unsigned	WDTPS1              : 1;
        unsigned	WDTPS2              : 1;
        unsigned	WDTPS3              : 1;
        unsigned	WDTPS4              : 1;
    };
} WDTCONbits @ 0x097;
#endif

// Register: OSCCON
// Oscillator Control Register
volatile unsigned char           OSCCON              @ 0x099;
// bit and bitfield definitions
volatile bit SCS0                @ ((unsigned)&OSCCON*8)+0;
volatile bit SCS1                @ ((unsigned)&OSCCON*8)+1;
volatile bit IRCF0               @ ((unsigned)&OSCCON*8)+3;
volatile bit IRCF1               @ ((unsigned)&OSCCON*8)+4;
volatile bit IRCF2               @ ((unsigned)&OSCCON*8)+5;
volatile bit IRCF3               @ ((unsigned)&OSCCON*8)+6;
#ifndef _LIB_BUILD
volatile union {
    struct {
        unsigned	SCS                 : 2;
        unsigned	                    : 1;
        unsigned	IRCF                : 4;
        unsigned	: 1;
    };
    struct {
        unsigned	SCS0                : 1;
        unsigned	SCS1                : 1;
        unsigned	: 1;
        unsigned	IRCF0               : 1;
        unsigned	IRCF1               : 1;
        unsigned	IRCF2               : 1;
        unsigned	IRCF3               : 1;
    };
} OSCCONbits @ 0x099;
#endif

// Register: OSCSTAT
// Oscillator Status Register
volatile unsigned char           OSCSTAT             @ 0x09A;
// bit and bitfield definitions
// Low Freqency Internal Oscillator Ready bit
volatile bit HFIOFS              @ ((unsigned)&OSCSTAT*8)+0;
// Low Freqency Internal Oscillator Ready bit
volatile bit LFIOFR              @ ((unsigned)&OSCSTAT*8)+1;
volatile bit HFIOFR              @ ((unsigned)&OSCSTAT*8)+4;
// Oscillator Start-up Time-out Status bit
volatile bit OSTS                @ ((unsigned)&OSCSTAT*8)+5;
volatile bit SOSCR               @ ((unsigned)&OSCSTAT*8)+7;
#ifndef _LIB_BUILD
volatile union {
    struct {
        unsigned	HFIOFS              : 1;
        unsigned	LFIOFR              : 1;
        unsigned	                    : 1;
        unsigned	: 1;
        unsigned	HFIOFR              : 1;
        unsigned	OSTS                : 1;
        unsigned	: 1;
        unsigned	SOSCR               : 1;
    };
    struct {
        unsigned	: 7;
        unsigned	: 1;
    };
} OSCSTATbits @ 0x09A;
#endif
// bit and bitfield definitions

// Register: ADRESL
// A/D Result Register LSB
volatile unsigned char           ADRESL              @ 0x09B;
// bit and bitfield definitions

// Register: ADRESH
// A/D Result Register MSB
volatile unsigned char           ADRESH              @ 0x09C;
// bit and bitfield definitions

// Register: ADRES
volatile unsigned int            ADRES               @ 0x09B;

// Register: ADCON0
// Analog-to-Digital Control Register 0
volatile unsigned char           ADCON0              @ 0x09D;
// bit and bitfield definitions
// A/D Module Enable bit
volatile bit ADON                @ ((unsigned)&ADCON0*8)+0;
// A/D Conversion Status bit
volatile bit GO_nDONE            @ ((unsigned)&ADCON0*8)+1;
// A/D Conversion Status bit
volatile bit ADGO                @ ((unsigned)&ADCON0*8)+1;
volatile bit CHS0                @ ((unsigned)&ADCON0*8)+2;
volatile bit CHS1                @ ((unsigned)&ADCON0*8)+3;
volatile bit CHS2                @ ((unsigned)&ADCON0*8)+4;
volatile bit CHS3                @ ((unsigned)&ADCON0*8)+5;
volatile bit CHS4                @ ((unsigned)&ADCON0*8)+6;
// A/D Conversion Status bit
volatile bit GO                  @ ((unsigned)&ADCON0*8)+1;
#ifndef _LIB_BUILD
volatile union {
    struct {
        unsigned	ADON                : 1;
        unsigned	GO_nDONE            : 1;
        unsigned	CHS                 : 5;
        unsigned	                    : 1;
    };
    struct {
        unsigned	: 1;
        unsigned	ADGO                : 1;
        unsigned	CHS0                : 1;
        unsigned	CHS1                : 1;
        unsigned	CHS2                : 1;
        unsigned	CHS3                : 1;
        unsigned	CHS4                : 1;
    };
    struct {
        unsigned	: 1;
        unsigned	GO                  : 1;
    };
} ADCON0bits @ 0x09D;
#endif

// Register: ADCON1
// Analog-to-Digital Control Register 1
volatile unsigned char           ADCON1              @ 0x09E;
// bit and bitfield definitions
// A/D Result Format Select bit
volatile bit ADFM                @ ((unsigned)&ADCON1*8)+7;
volatile bit ADPREF0             @ ((unsigned)&ADCON1*8)+0;
volatile bit ADPREF1             @ ((unsigned)&ADCON1*8)+1;
#ifndef _LIB_BUILD
volatile union {
    struct {
        unsigned	ADPREF              : 2;
        unsigned	                    : 1;
        unsigned	: 1;
        unsigned	ADCS                : 3;
        unsigned	ADFM                : 1;
    };
    struct {
        unsigned	ADPREF0             : 1;
        unsigned	ADPREF1             : 1;
        unsigned	: 2;
        unsigned	: 3;
    };
} ADCON1bits @ 0x09E;
#endif

// Register: ADCON2
// Analog-to-Digital Control Register 2
volatile unsigned char           ADCON2              @ 0x09F;
// bit and bitfield definitions
volatile bit TRIGSEL0            @ ((unsigned)&ADCON2*8)+4;
volatile bit TRIGSEL1            @ ((unsigned)&ADCON2*8)+5;
volatile bit TRIGSEL2            @ ((unsigned)&ADCON2*8)+6;
volatile bit TRIGSEL3            @ ((unsigned)&ADCON2*8)+7;
#ifndef _LIB_BUILD
volatile union {
    struct {
        unsigned	                    : 4;
        unsigned	TRIGSEL             : 4;
    };
    struct {
        unsigned	: 4;
        unsigned	TRIGSEL0            : 1;
        unsigned	TRIGSEL1            : 1;
        unsigned	TRIGSEL2            : 1;
        unsigned	TRIGSEL3            : 1;
    };
} ADCON2bits @ 0x09F;
#endif

//
// Special function register definitions: Bank 2
//


// Register: LATA
volatile unsigned char           LATA                @ 0x10C;
// bit and bitfield definitions
volatile bit LATA0               @ ((unsigned)&LATA*8)+0;
volatile bit LATA1               @ ((unsigned)&LATA*8)+1;
volatile bit LATA2               @ ((unsigned)&LATA*8)+2;
volatile bit LATA4               @ ((unsigned)&LATA*8)+4;
volatile bit LATA5               @ ((unsigned)&LATA*8)+5;
#ifndef _LIB_BUILD
volatile union {
    struct {
        unsigned	LATA0               : 1;
        unsigned	LATA1               : 1;
        unsigned	LATA2               : 1;
        unsigned	                    : 1;
        unsigned	LATA4               : 1;
        unsigned	LATA5               : 1;
        unsigned	: 1;
        unsigned	: 1;
    };
} LATAbits @ 0x10C;
#endif

// Register: LATC
volatile unsigned char           LATC                @ 0x10E;
// bit and bitfield definitions
volatile bit LATC0               @ ((unsigned)&LATC*8)+0;
volatile bit LATC1               @ ((unsigned)&LATC*8)+1;
volatile bit LATC2               @ ((unsigned)&LATC*8)+2;
volatile bit LATC3               @ ((unsigned)&LATC*8)+3;
volatile bit LATC4               @ ((unsigned)&LATC*8)+4;
volatile bit LATC5               @ ((unsigned)&LATC*8)+5;
#ifndef _LIB_BUILD
volatile union {
    struct {
        unsigned	LATC0               : 1;
        unsigned	LATC1               : 1;
        unsigned	LATC2               : 1;
        unsigned	LATC3               : 1;
        unsigned	LATC4               : 1;
        unsigned	LATC5               : 1;
        unsigned	                    : 1;
        unsigned	: 1;
    };
} LATCbits @ 0x10E;
#endif

// Register: CM1CON0
volatile unsigned char           CM1CON0             @ 0x111;
// bit and bitfield definitions
// Comparator Output Synchronous Mode bit
volatile bit C1SYNC              @ ((unsigned)&CM1CON0*8)+0;
// Comparator Hysteresis Enable bit
volatile bit C1HYS               @ ((unsigned)&CM1CON0*8)+1;
// Comparator Speed/Power Select bit
volatile bit C1SP                @ ((unsigned)&CM1CON0*8)+2;
// Comparator Output Polarity Select bit
volatile bit C1POL               @ ((unsigned)&CM1CON0*8)+4;
// Comparator Output Enable bit
volatile bit C1OE                @ ((unsigned)&CM1CON0*8)+5;
// Comparator Output bit
volatile bit C1OUT               @ ((unsigned)&CM1CON0*8)+6;
// Comparator Enable bit
volatile bit C1ON                @ ((unsigned)&CM1CON0*8)+7;
#ifndef _LIB_BUILD
volatile union {
    struct {
        unsigned	C1SYNC              : 1;
        unsigned	C1HYS               : 1;
        unsigned	C1SP                : 1;
        unsigned	                    : 1;
        unsigned	C1POL               : 1;
        unsigned	C1OE                : 1;
        unsigned	C1OUT               : 1;
        unsigned	C1ON                : 1;
    };
} CM1CON0bits @ 0x111;
#endif

// Register: CM1CON1
volatile unsigned char           CM1CON1             @ 0x112;
// bit and bitfield definitions
// Comparator Negative Input Channel Select bits
volatile bit C1NCH0              @ ((unsigned)&CM1CON1*8)+0;
// Comparator Negative Input Channel Select bits
volatile bit C1NCH1              @ ((unsigned)&CM1CON1*8)+1;
// Comparator Positive Input Channel Select bits
volatile bit C1PCH0              @ ((unsigned)&CM1CON1*8)+4;
// Comparator Positive Input Channel Select bits
volatile bit C1PCH1              @ ((unsigned)&CM1CON1*8)+5;
// Comparator Interrupt on Negative going edge Enable bits
volatile bit C1INTN              @ ((unsigned)&CM1CON1*8)+6;
// Comparator Interrupt on Positive going edge Enable bits
volatile bit C1INTP              @ ((unsigned)&CM1CON1*8)+7;
#ifndef _LIB_BUILD
volatile union {
    struct {
        unsigned	C1NCH0              : 1;
        unsigned	C1NCH1              : 1;
        unsigned	                    : 2;
        unsigned	C1PCH0              : 1;
        unsigned	C1PCH1              : 1;
        unsigned	C1INTN              : 1;
        unsigned	C1INTP              : 1;
    };
    struct {
        unsigned	C1NCH               : 2;
        unsigned	: 2;
        unsigned	C1PCH               : 2;
    };
} CM1CON1bits @ 0x112;
#endif

// Register: CM2CON0
volatile unsigned char           CM2CON0             @ 0x113;
// bit and bitfield definitions
volatile bit C2SYNC              @ ((unsigned)&CM2CON0*8)+0;
volatile bit C2HYS               @ ((unsigned)&CM2CON0*8)+1;
volatile bit C2SP                @ ((unsigned)&CM2CON0*8)+2;
volatile bit C2POL               @ ((unsigned)&CM2CON0*8)+4;
volatile bit C2OE                @ ((unsigned)&CM2CON0*8)+5;
volatile bit C2OUT               @ ((unsigned)&CM2CON0*8)+6;
volatile bit C2ON                @ ((unsigned)&CM2CON0*8)+7;
#ifndef _LIB_BUILD
volatile union {
    struct {
        unsigned	C2SYNC              : 1;
        unsigned	C2HYS               : 1;
        unsigned	C2SP                : 1;
        unsigned	                    : 1;
        unsigned	C2POL               : 1;
        unsigned	C2OE                : 1;
        unsigned	C2OUT               : 1;
        unsigned	C2ON                : 1;
    };
} CM2CON0bits @ 0x113;
#endif

// Register: CM2CON1
volatile unsigned char           CM2CON1             @ 0x114;
// bit and bitfield definitions
// Comparator Negative Input Channel Select bits
volatile bit C2NCH0              @ ((unsigned)&CM2CON1*8)+0;
// Comparator Negative Input Channel Select bits
volatile bit C2NCH1              @ ((unsigned)&CM2CON1*8)+1;
// Comparator Positive Input Channel Select bits
volatile bit C2PCH0              @ ((unsigned)&CM2CON1*8)+4;
// Comparator Positive Input Channel Select bits
volatile bit C2PCH1              @ ((unsigned)&CM2CON1*8)+5;
// Comparator Interrupt on Negative going edge Enable bits
volatile bit C2INTN              @ ((unsigned)&CM2CON1*8)+6;
// Comparator Interrupt on Positive going edge Enable bits
volatile bit C2INTP              @ ((unsigned)&CM2CON1*8)+7;
#ifndef _LIB_BUILD
volatile union {
    struct {
        unsigned	C2NCH0              : 1;
        unsigned	C2NCH1              : 1;
        unsigned	                    : 2;
        unsigned	C2PCH0              : 1;
        unsigned	C2PCH1              : 1;
        unsigned	C2INTN              : 1;
        unsigned	C2INTP              : 1;
    };
    struct {
        unsigned	C2NCH               : 2;
        unsigned	: 2;
        unsigned	C2PCH               : 2;
    };
} CM2CON1bits @ 0x114;
#endif

// Register: CMOUT
// Comparator Output Register
volatile unsigned char           CMOUT               @ 0x115;
// bit and bitfield definitions
volatile bit MC1OUT              @ ((unsigned)&CMOUT*8)+0;
volatile bit MC2OUT              @ ((unsigned)&CMOUT*8)+1;
#ifndef _LIB_BUILD
volatile union {
    struct {
        unsigned	MC1OUT              : 1;
        unsigned	MC2OUT              : 1;
    };
} CMOUTbits @ 0x115;
#endif

// Register: BORCON
// Brown-out Reset Control Register
volatile unsigned char           BORCON              @ 0x116;
// bit and bitfield definitions
// Brown-out Reset Circuit Ready Status bit
volatile bit BORRDY              @ ((unsigned)&BORCON*8)+0;
volatile bit BORFS               @ ((unsigned)&BORCON*8)+6;
// Software Brown Out Reset Enable bit
volatile bit SBOREN              @ ((unsigned)&BORCON*8)+7;
#ifndef _LIB_BUILD
volatile union {
    struct {
        unsigned	BORRDY              : 1;
        unsigned	                    : 5;
        unsigned	BORFS               : 1;
        unsigned	SBOREN              : 1;
    };
} BORCONbits @ 0x116;
#endif

// Register: FVRCON
// Voltage Reference Control Register 0
volatile unsigned char           FVRCON              @ 0x117;
// bit and bitfield definitions
// Fixed Voltage Reference Ready Flag
volatile bit FVRRDY              @ ((unsigned)&FVRCON*8)+6;
// Fixed Voltage Reference Enable
volatile bit FVREN               @ ((unsigned)&FVRCON*8)+7;
// A/D Converter Fixed Voltage Reference Selection
volatile bit ADFVR0              @ ((unsigned)&FVRCON*8)+0;
// A/D Converter Fixed Voltage Reference Selection
volatile bit ADFVR1              @ ((unsigned)&FVRCON*8)+1;
#ifndef _LIB_BUILD
volatile union {
    struct {
        unsigned	ADFVR               : 2;
        unsigned	                    : 2;
        unsigned	: 1;
        unsigned	: 1;
        unsigned	FVRRDY              : 1;
        unsigned	FVREN               : 1;
    };
    struct {
        unsigned	ADFVR0              : 1;
        unsigned	ADFVR1              : 1;
    };
} FVRCONbits @ 0x117;
#endif

#if 0
// Register: DACCON0
// Voltage Reference Control Register 0
volatile unsigned char           DACCON0             @ 0x118;
// bit and bitfield definitions
// DAC1 Negative Source Select bits
volatile bit DACNSS              @ ((unsigned)&DACCON0*8)+0;
// DAC1 Positive Source Select bits
volatile bit DACPSS0             @ ((unsigned)&DACCON0*8)+2;
// DAC1 Positive Source Select bits
volatile bit DACPSS1             @ ((unsigned)&DACCON0*8)+3;
// DAC1 Voltage Output Enable bit
volatile bit DACOE               @ ((unsigned)&DACCON0*8)+5;
// DAC 1 Low Power Voltage State Select bit
volatile bit DACLPS              @ ((unsigned)&DACCON0*8)+6;
// DAC 1 Enable bit
volatile bit DACEN               @ ((unsigned)&DACCON0*8)+7;
#ifndef _LIB_BUILD
volatile union {
    struct {
        unsigned	DACNSS              : 1;
        unsigned	                    : 1;
        unsigned	DACPSS0             : 1;
        unsigned	DACPSS1             : 1;
        unsigned	: 1;
        unsigned	DACOE               : 1;
        unsigned	DACLPS              : 1;
        unsigned	DACEN               : 1;
    };
    struct {
        unsigned	: 2;
        unsigned	DACPSS              : 2;
    };
} DACCON0bits @ 0x118;
#endif
#else
#warning "Using customized header file!!!"

// Register: DACCON0
// Voltage Reference Control Register 0
volatile unsigned char           DACCON0             @ 0x118;
// bit and bitfield definitions
// DAC Positive Source Select bit
volatile bit DACPSS              @ ((unsigned)&DACCON0*8)+2;
// DAC2 Voltage Output Enable bit
volatile bit DACOE2              @ ((unsigned)&DACCON0*8)+4;
// DAC1 Volatege Output Enable bit
volatile bit DACOE1		 @ ((unsigned)&DACCON0*8)+5;
// DAC Enable bit
volatile bit DACEN               @ ((unsigned)&DACCON0*8)+7;
#ifndef _LIB_BUILD
volatile union {
    struct {
        unsigned			    : 1;
        unsigned	                    : 1;
        unsigned	DACPSS              : 1;
        unsigned			    : 1;
        unsigned	DACOE2		    : 1;
        unsigned	DACOE1              : 1;
        unsigned			    : 1;
        unsigned	DACEN               : 1;
    };
} DACCON0bits @ 0x118;
#endif

#endif

// Register: DACCON1
// Voltage Reference Control Register 1
volatile unsigned char           DACCON1             @ 0x119;
// bit and bitfield definitions
// DAC1 Voltage Output Select bits
volatile bit DACR0               @ ((unsigned)&DACCON1*8)+0;
// DAC1 Voltage Output Select bits
volatile bit DACR1               @ ((unsigned)&DACCON1*8)+1;
// DAC1 Voltage Output Select bits
volatile bit DACR2               @ ((unsigned)&DACCON1*8)+2;
// DAC1 Voltage Output Select bits
volatile bit DACR3               @ ((unsigned)&DACCON1*8)+3;
// DAC1 Voltage Output Select bits
volatile bit DACR4               @ ((unsigned)&DACCON1*8)+4;
#ifndef _LIB_BUILD
volatile union {
    struct {
        unsigned	DACR0               : 1;
        unsigned	DACR1               : 1;
        unsigned	DACR2               : 1;
        unsigned	DACR3               : 1;
        unsigned	DACR4               : 1;
        unsigned	                    : 1;
    };
    struct {
        unsigned	DACR                : 5;
    };
} DACCON1bits @ 0x119;
#endif

// Register: APFCON
// Alternate Pin Function Control Register
volatile unsigned char           APFCON              @ 0x11D;
// bit and bitfield definitions
volatile bit NCOSEL              @ ((unsigned)&APFCON*8)+0;
volatile bit CLC1SEL             @ ((unsigned)&APFCON*8)+1;
volatile bit T1GSEL              @ ((unsigned)&APFCON*8)+3;
volatile bit SSSEL               @ ((unsigned)&APFCON*8)+4;
volatile bit SDOSEL              @ ((unsigned)&APFCON*8)+5;
#ifndef _LIB_BUILD
volatile union {
    struct {
        unsigned	NCOSEL              : 1;
        unsigned	CLC1SEL             : 1;
        unsigned	                    : 1;
        unsigned	T1GSEL              : 1;
        unsigned	SSSEL               : 1;
        unsigned	SDOSEL              : 1;
        unsigned	: 1;
    };
} APFCONbits @ 0x11D;
#endif

//
// Special function register definitions: Bank 3
//


// Register: ANSELA
volatile unsigned char           ANSELA              @ 0x18C;
// bit and bitfield definitions
volatile bit ANSA0               @ ((unsigned)&ANSELA*8)+0;
volatile bit ANSA1               @ ((unsigned)&ANSELA*8)+1;
volatile bit ANSA2               @ ((unsigned)&ANSELA*8)+2;
volatile bit ANSA4               @ ((unsigned)&ANSELA*8)+4;
#ifndef _LIB_BUILD
volatile union {
    struct {
        unsigned	ANSA0               : 1;
        unsigned	ANSA1               : 1;
        unsigned	ANSA2               : 1;
        unsigned	                    : 1;
        unsigned	ANSA4               : 1;
        unsigned	: 1;
        unsigned	: 1;
        unsigned	: 1;
    };
    struct {
        unsigned	ANSELA              : 6;
    };
} ANSELAbits @ 0x18C;
#endif

// Register: ANSELC
volatile unsigned char           ANSELC              @ 0x18E;
// bit and bitfield definitions
volatile bit ANSC0               @ ((unsigned)&ANSELC*8)+0;
volatile bit ANSC1               @ ((unsigned)&ANSELC*8)+1;
volatile bit ANSC2               @ ((unsigned)&ANSELC*8)+2;
volatile bit ANSC3               @ ((unsigned)&ANSELC*8)+3;
#ifndef _LIB_BUILD
volatile union {
    struct {
        unsigned	ANSC0               : 1;
        unsigned	ANSC1               : 1;
        unsigned	ANSC2               : 1;
        unsigned	ANSC3               : 1;
        unsigned	                    : 1;
        unsigned	: 1;
        unsigned	: 1;
        unsigned	: 1;
    };
} ANSELCbits @ 0x18E;
#endif
// bit and bitfield definitions

// Register: PMADRL
volatile unsigned char           PMADRL              @ 0x191;
// bit and bitfield definitions

// Register: PMADRH
volatile unsigned char           PMADRH              @ 0x192;
// bit and bitfield definitions
#ifndef _LIB_BUILD
volatile union {
    struct {
        unsigned	PMADRH              : 7;
    };
} PMADRHbits @ 0x192;
#endif

// Register: PMADR
volatile unsigned int            PMADR               @ 0x191;
// bit and bitfield definitions

// Register: PMDATL
volatile unsigned char           PMDATL              @ 0x193;
// bit and bitfield definitions

// Register: PMDATH
volatile unsigned char           PMDATH              @ 0x194;
// bit and bitfield definitions
#ifndef _LIB_BUILD
volatile union {
    struct {
        unsigned	PMDATH              : 6;
    };
} PMDATHbits @ 0x194;
#endif

// Register: PMDAT
volatile unsigned int            PMDAT               @ 0x193;

// Register: PMCON1
volatile unsigned char           PMCON1              @ 0x195;
// bit and bitfield definitions
// Read Control bit
volatile bit RD                  @ ((unsigned)&PMCON1*8)+0;
// Write Control bit
volatile bit WR                  @ ((unsigned)&PMCON1*8)+1;
// Program/Erase Enable bit
volatile bit WREN                @ ((unsigned)&PMCON1*8)+2;
// Sequence Error Flag bit
volatile bit WRERR               @ ((unsigned)&PMCON1*8)+3;
// Program FLASH Erase Enable bit
volatile bit FREE                @ ((unsigned)&PMCON1*8)+4;
// Load Write Latches Only bit
volatile bit LWLO                @ ((unsigned)&PMCON1*8)+5;
// FLASH Program / Data EEPROM or Configuration Select bit
volatile bit CFGS                @ ((unsigned)&PMCON1*8)+6;
volatile bit EEPGD               @ ((unsigned)&PMCON1*8)+7;
#ifndef _LIB_BUILD
volatile union {
    struct {
        unsigned	RD                  : 1;
        unsigned	WR                  : 1;
        unsigned	WREN                : 1;
        unsigned	WRERR               : 1;
        unsigned	FREE                : 1;
        unsigned	LWLO                : 1;
        unsigned	CFGS                : 1;
        unsigned	EEPGD               : 1;
    };
} PMCON1bits @ 0x195;
#endif

// Register: PMCON2
volatile unsigned char           PMCON2              @ 0x196;
// bit and bitfield definitions

// Register: VREGCON
volatile unsigned char           VREGCON             @ 0x197;
// bit and bitfield definitions
volatile bit VREGPM0             @ ((unsigned)&VREGCON*8)+0;
volatile bit VREGPM1             @ ((unsigned)&VREGCON*8)+1;
#ifndef _LIB_BUILD
volatile union {
    struct {
        unsigned	VREGPM              : 2;
    };
    struct {
        unsigned	VREGPM0             : 1;
        unsigned	VREGPM1             : 1;
    };
} VREGCONbits @ 0x197;
#endif

//
// Special function register definitions: Bank 4
//


// Register: WPUA
volatile unsigned char           WPUA                @ 0x20C;
// bit and bitfield definitions
volatile bit WPUA0               @ ((unsigned)&WPUA*8)+0;
volatile bit WPUA1               @ ((unsigned)&WPUA*8)+1;
volatile bit WPUA2               @ ((unsigned)&WPUA*8)+2;
volatile bit WPUA3               @ ((unsigned)&WPUA*8)+3;
volatile bit WPUA4               @ ((unsigned)&WPUA*8)+4;
volatile bit WPUA5               @ ((unsigned)&WPUA*8)+5;
#ifndef _LIB_BUILD
volatile union {
    struct {
        unsigned	WPUA0               : 1;
        unsigned	WPUA1               : 1;
        unsigned	WPUA2               : 1;
        unsigned	WPUA3               : 1;
        unsigned	WPUA4               : 1;
        unsigned	WPUA5               : 1;
    };
    struct {
        unsigned	WPUA                : 6;
    };
} WPUAbits @ 0x20C;
#endif

// Register: WPUC
volatile unsigned char           WPUC                @ 0x20E;
// bit and bitfield definitions
volatile bit WPUC0               @ ((unsigned)&WPUC*8)+0;
volatile bit WPUC1               @ ((unsigned)&WPUC*8)+1;
volatile bit WPUC2               @ ((unsigned)&WPUC*8)+2;
volatile bit WPUC3               @ ((unsigned)&WPUC*8)+3;
volatile bit WPUC4               @ ((unsigned)&WPUC*8)+4;
volatile bit WPUC5               @ ((unsigned)&WPUC*8)+5;
#ifndef _LIB_BUILD
volatile union {
    struct {
        unsigned	WPUC0               : 1;
        unsigned	WPUC1               : 1;
        unsigned	WPUC2               : 1;
        unsigned	WPUC3               : 1;
        unsigned	WPUC4               : 1;
        unsigned	WPUC5               : 1;
    };
    struct {
        unsigned	WPUC                : 6;
    };
} WPUCbits @ 0x20E;
#endif

// Register: SSPBUF
volatile unsigned char           SSPBUF              @ 0x211;
volatile unsigned char           SSPBUF              @ 0x211;
// bit and bitfield definitions

// Register: SSPADD
volatile unsigned char           SSPADD              @ 0x212;
volatile unsigned char           SSPADD              @ 0x212;
// bit and bitfield definitions

// Register: SSPMSK
volatile unsigned char           SSPMSK              @ 0x213;
volatile unsigned char           SSPMSK              @ 0x213;
// bit and bitfield definitions

// Register: SSPSTAT
volatile unsigned char           SSPSTAT             @ 0x214;
volatile unsigned char           SSPSTAT             @ 0x214;
// bit and bitfield definitions
volatile bit BF                  @ ((unsigned)&SSPSTAT*8)+0;
volatile bit UA                  @ ((unsigned)&SSPSTAT*8)+1;
volatile bit R_nW                @ ((unsigned)&SSPSTAT*8)+2;
volatile bit S                   @ ((unsigned)&SSPSTAT*8)+3;
volatile bit P                   @ ((unsigned)&SSPSTAT*8)+4;
volatile bit D_nA                @ ((unsigned)&SSPSTAT*8)+5;
volatile bit CKE                 @ ((unsigned)&SSPSTAT*8)+6;
volatile bit SMP                 @ ((unsigned)&SSPSTAT*8)+7;
#ifndef _LIB_BUILD
volatile union {
    struct {
        unsigned	BF                  : 1;
        unsigned	UA                  : 1;
        unsigned	R_nW                : 1;
        unsigned	S                   : 1;
        unsigned	P                   : 1;
        unsigned	D_nA                : 1;
        unsigned	CKE                 : 1;
        unsigned	SMP                 : 1;
    };
} SSPSTATbits @ 0x214;
#endif

// Register: SSPCON1
volatile unsigned char           SSPCON1             @ 0x215;
volatile unsigned char           SSPCON1             @ 0x215;
volatile unsigned char           SSPCON              @ 0x215;
// bit and bitfield definitions
volatile bit SSPM0               @ ((unsigned)&SSPCON1*8)+0;
volatile bit SSPM1               @ ((unsigned)&SSPCON1*8)+1;
volatile bit SSPM2               @ ((unsigned)&SSPCON1*8)+2;
volatile bit SSPM3               @ ((unsigned)&SSPCON1*8)+3;
volatile bit CKP                 @ ((unsigned)&SSPCON1*8)+4;
volatile bit SSPEN               @ ((unsigned)&SSPCON1*8)+5;
volatile bit SSPOV               @ ((unsigned)&SSPCON1*8)+6;
volatile bit WCOL                @ ((unsigned)&SSPCON1*8)+7;
#ifndef _LIB_BUILD
volatile union {
    struct {
        unsigned	SSPM0               : 1;
        unsigned	SSPM1               : 1;
        unsigned	SSPM2               : 1;
        unsigned	SSPM3               : 1;
        unsigned	CKP                 : 1;
        unsigned	SSPEN               : 1;
        unsigned	SSPOV               : 1;
        unsigned	WCOL                : 1;
    };
    struct {
        unsigned	SSPM                : 4;
    };
} SSPCON1bits @ 0x215;
#endif

// Register: SSPCON2
volatile unsigned char           SSPCON2             @ 0x216;
volatile unsigned char           SSPCON2             @ 0x216;
// bit and bitfield definitions
volatile bit SEN                 @ ((unsigned)&SSPCON2*8)+0;
volatile bit RSEN                @ ((unsigned)&SSPCON2*8)+1;
volatile bit PEN                 @ ((unsigned)&SSPCON2*8)+2;
volatile bit RCEN                @ ((unsigned)&SSPCON2*8)+3;
volatile bit ACKEN               @ ((unsigned)&SSPCON2*8)+4;
volatile bit ACKDT               @ ((unsigned)&SSPCON2*8)+5;
volatile bit ACKSTAT             @ ((unsigned)&SSPCON2*8)+6;
volatile bit GCEN                @ ((unsigned)&SSPCON2*8)+7;
#ifndef _LIB_BUILD
volatile union {
    struct {
        unsigned	SEN                 : 1;
        unsigned	RSEN                : 1;
        unsigned	PEN                 : 1;
        unsigned	RCEN                : 1;
        unsigned	ACKEN               : 1;
        unsigned	ACKDT               : 1;
        unsigned	ACKSTAT             : 1;
        unsigned	GCEN                : 1;
    };
} SSPCON2bits @ 0x216;
#endif

// Register: SSPCON3
volatile unsigned char           SSPCON3             @ 0x217;
volatile unsigned char           SSPCON3             @ 0x217;
// bit and bitfield definitions
volatile bit DHEN                @ ((unsigned)&SSPCON3*8)+0;
volatile bit AHEN                @ ((unsigned)&SSPCON3*8)+1;
volatile bit SBCDE               @ ((unsigned)&SSPCON3*8)+2;
volatile bit SDAHT               @ ((unsigned)&SSPCON3*8)+3;
volatile bit BOEN                @ ((unsigned)&SSPCON3*8)+4;
volatile bit SCIE                @ ((unsigned)&SSPCON3*8)+5;
volatile bit PCIE                @ ((unsigned)&SSPCON3*8)+6;
volatile bit ACKTIM              @ ((unsigned)&SSPCON3*8)+7;
#ifndef _LIB_BUILD
volatile union {
    struct {
        unsigned	DHEN                : 1;
        unsigned	AHEN                : 1;
        unsigned	SBCDE               : 1;
        unsigned	SDAHT               : 1;
        unsigned	BOEN                : 1;
        unsigned	SCIE                : 1;
        unsigned	PCIE                : 1;
        unsigned	ACKTIM              : 1;
    };
} SSPCON3bits @ 0x217;
#endif

//
// Special function register definitions: Bank 7
//


// Register: IOCAP
volatile unsigned char           IOCAP               @ 0x391;
// bit and bitfield definitions
volatile bit IOCAP0              @ ((unsigned)&IOCAP*8)+0;
volatile bit IOCAP1              @ ((unsigned)&IOCAP*8)+1;
volatile bit IOCAP2              @ ((unsigned)&IOCAP*8)+2;
volatile bit IOCAP3              @ ((unsigned)&IOCAP*8)+3;
volatile bit IOCAP4              @ ((unsigned)&IOCAP*8)+4;
volatile bit IOCAP5              @ ((unsigned)&IOCAP*8)+5;
#ifndef _LIB_BUILD
volatile union {
    struct {
        unsigned	IOCAP0              : 1;
        unsigned	IOCAP1              : 1;
        unsigned	IOCAP2              : 1;
        unsigned	IOCAP3              : 1;
        unsigned	IOCAP4              : 1;
        unsigned	IOCAP5              : 1;
    };
    struct {
        unsigned	IOCAP               : 6;
    };
} IOCAPbits @ 0x391;
#endif

// Register: IOCAN
volatile unsigned char           IOCAN               @ 0x392;
// bit and bitfield definitions
volatile bit IOCAN0              @ ((unsigned)&IOCAN*8)+0;
volatile bit IOCAN1              @ ((unsigned)&IOCAN*8)+1;
volatile bit IOCAN2              @ ((unsigned)&IOCAN*8)+2;
volatile bit IOCAN3              @ ((unsigned)&IOCAN*8)+3;
volatile bit IOCAN4              @ ((unsigned)&IOCAN*8)+4;
volatile bit IOCAN5              @ ((unsigned)&IOCAN*8)+5;
#ifndef _LIB_BUILD
volatile union {
    struct {
        unsigned	IOCAN0              : 1;
        unsigned	IOCAN1              : 1;
        unsigned	IOCAN2              : 1;
        unsigned	IOCAN3              : 1;
        unsigned	IOCAN4              : 1;
        unsigned	IOCAN5              : 1;
    };
    struct {
        unsigned	IOCAN               : 6;
    };
} IOCANbits @ 0x392;
#endif

// Register: IOCAF
volatile unsigned char           IOCAF               @ 0x393;
// bit and bitfield definitions
volatile bit IOCAF0              @ ((unsigned)&IOCAF*8)+0;
volatile bit IOCAF1              @ ((unsigned)&IOCAF*8)+1;
volatile bit IOCAF2              @ ((unsigned)&IOCAF*8)+2;
volatile bit IOCAF3              @ ((unsigned)&IOCAF*8)+3;
volatile bit IOCAF4              @ ((unsigned)&IOCAF*8)+4;
volatile bit IOCAF5              @ ((unsigned)&IOCAF*8)+5;
#ifndef _LIB_BUILD
volatile union {
    struct {
        unsigned	IOCAF0              : 1;
        unsigned	IOCAF1              : 1;
        unsigned	IOCAF2              : 1;
        unsigned	IOCAF3              : 1;
        unsigned	IOCAF4              : 1;
        unsigned	IOCAF5              : 1;
    };
    struct {
        unsigned	IOCAF               : 6;
    };
} IOCAFbits @ 0x393;
#endif

//
// Special function register definitions: Bank 9
//


// bit and bitfield definitions

// Register: NCO1ACCL
volatile unsigned char           NCO1ACCL            @ 0x498;
// bit and bitfield definitions
volatile bit NCO1ACC0            @ ((unsigned)&NCO1ACCL*8)+0;
volatile bit NCO1ACC1            @ ((unsigned)&NCO1ACCL*8)+1;
volatile bit NCO1ACC2            @ ((unsigned)&NCO1ACCL*8)+2;
volatile bit NCO1ACC3            @ ((unsigned)&NCO1ACCL*8)+3;
volatile bit NCO1ACC4            @ ((unsigned)&NCO1ACCL*8)+4;
volatile bit NCO1ACC5            @ ((unsigned)&NCO1ACCL*8)+5;
volatile bit NCO1ACC6            @ ((unsigned)&NCO1ACCL*8)+6;
volatile bit NCO1ACC7            @ ((unsigned)&NCO1ACCL*8)+7;
#ifndef _LIB_BUILD
volatile union {
    struct {
        unsigned	NCO1ACC0            : 1;
        unsigned	NCO1ACC1            : 1;
        unsigned	NCO1ACC2            : 1;
        unsigned	NCO1ACC3            : 1;
        unsigned	NCO1ACC4            : 1;
        unsigned	NCO1ACC5            : 1;
        unsigned	NCO1ACC6            : 1;
        unsigned	NCO1ACC7            : 1;
    };
} NCO1ACCLbits @ 0x498;
#endif

// Register: NCO1ACCH
volatile unsigned char           NCO1ACCH            @ 0x499;
// bit and bitfield definitions
volatile bit NCO1ACC8            @ ((unsigned)&NCO1ACCH*8)+0;
volatile bit NCO1ACC9            @ ((unsigned)&NCO1ACCH*8)+1;
volatile bit NCO1ACC10           @ ((unsigned)&NCO1ACCH*8)+2;
volatile bit NCO1ACC11           @ ((unsigned)&NCO1ACCH*8)+3;
volatile bit NCO1ACC12           @ ((unsigned)&NCO1ACCH*8)+4;
volatile bit NCO1ACC13           @ ((unsigned)&NCO1ACCH*8)+5;
volatile bit NCO1ACC14           @ ((unsigned)&NCO1ACCH*8)+6;
volatile bit NCO1ACC15           @ ((unsigned)&NCO1ACCH*8)+7;
#ifndef _LIB_BUILD
volatile union {
    struct {
        unsigned	NCO1ACC8            : 1;
        unsigned	NCO1ACC9            : 1;
        unsigned	NCO1ACC10           : 1;
        unsigned	NCO1ACC11           : 1;
        unsigned	NCO1ACC12           : 1;
        unsigned	NCO1ACC13           : 1;
        unsigned	NCO1ACC14           : 1;
        unsigned	NCO1ACC15           : 1;
    };
} NCO1ACCHbits @ 0x499;
#endif

// Register: NCO1ACCU
volatile unsigned char           NCO1ACCU            @ 0x49A;
// bit and bitfield definitions
volatile bit NCO1ACC16           @ ((unsigned)&NCO1ACCU*8)+0;
volatile bit NCO1ACC17           @ ((unsigned)&NCO1ACCU*8)+1;
volatile bit NCO1ACC18           @ ((unsigned)&NCO1ACCU*8)+2;
volatile bit NCO1ACC19           @ ((unsigned)&NCO1ACCU*8)+3;
#ifndef _LIB_BUILD
volatile union {
    struct {
        unsigned	NCO1ACC16           : 1;
        unsigned	NCO1ACC17           : 1;
        unsigned	NCO1ACC18           : 1;
        unsigned	NCO1ACC19           : 1;
        unsigned	                    : 1;
        unsigned	: 1;
        unsigned	: 1;
        unsigned	: 1;
    };
} NCO1ACCUbits @ 0x49A;
#endif

// Register: NCO1ACC
volatile unsigned short long int NCO1ACC             @ 0x498;
// bit and bitfield definitions

// Register: NCO1INCL
volatile unsigned char           NCO1INCL            @ 0x49B;
// bit and bitfield definitions
volatile bit NCO1INC0            @ ((unsigned)&NCO1INCL*8)+0;
volatile bit NCO1INC1            @ ((unsigned)&NCO1INCL*8)+1;
volatile bit NCO1INC2            @ ((unsigned)&NCO1INCL*8)+2;
volatile bit NCO1INC3            @ ((unsigned)&NCO1INCL*8)+3;
volatile bit NCO1INC4            @ ((unsigned)&NCO1INCL*8)+4;
volatile bit NCO1INC5            @ ((unsigned)&NCO1INCL*8)+5;
volatile bit NCO1INC6            @ ((unsigned)&NCO1INCL*8)+6;
volatile bit NCO1INC7            @ ((unsigned)&NCO1INCL*8)+7;
#ifndef _LIB_BUILD
volatile union {
    struct {
        unsigned	NCO1INC0            : 1;
        unsigned	NCO1INC1            : 1;
        unsigned	NCO1INC2            : 1;
        unsigned	NCO1INC3            : 1;
        unsigned	NCO1INC4            : 1;
        unsigned	NCO1INC5            : 1;
        unsigned	NCO1INC6            : 1;
        unsigned	NCO1INC7            : 1;
    };
} NCO1INCLbits @ 0x49B;
#endif

// Register: NCO1INCH
volatile unsigned char           NCO1INCH            @ 0x49C;
// bit and bitfield definitions
volatile bit NCO1INC8            @ ((unsigned)&NCO1INCH*8)+0;
volatile bit NCO1INC9            @ ((unsigned)&NCO1INCH*8)+1;
volatile bit NCO1INC10           @ ((unsigned)&NCO1INCH*8)+2;
volatile bit NCO1INC11           @ ((unsigned)&NCO1INCH*8)+3;
volatile bit NCO1INC12           @ ((unsigned)&NCO1INCH*8)+4;
volatile bit NCO1INC13           @ ((unsigned)&NCO1INCH*8)+5;
volatile bit NCO1INC14           @ ((unsigned)&NCO1INCH*8)+6;
volatile bit NCO1INC15           @ ((unsigned)&NCO1INCH*8)+7;
#ifndef _LIB_BUILD
volatile union {
    struct {
        unsigned	NCO1INC8            : 1;
        unsigned	NCO1INC9            : 1;
        unsigned	NCO1INC10           : 1;
        unsigned	NCO1INC11           : 1;
        unsigned	NCO1INC12           : 1;
        unsigned	NCO1INC13           : 1;
        unsigned	NCO1INC14           : 1;
        unsigned	NCO1INC15           : 1;
    };
} NCO1INCHbits @ 0x49C;
#endif

// Register: NCO1INCU
volatile unsigned char           NCO1INCU            @ 0x49D;
// bit and bitfield definitions
#ifndef _LIB_BUILD
volatile union {
    struct {
        unsigned	                    : 1;
        unsigned	: 1;
        unsigned	: 1;
        unsigned	: 1;
        unsigned	: 1;
        unsigned	: 1;
        unsigned	: 1;
        unsigned	: 1;
    };
} NCO1INCUbits @ 0x49D;
#endif

// Register: NCO1INC
volatile unsigned short long int NCO1INC             @ 0x49B;

// Register: NCO1CON
// Configurable logic cell control
volatile unsigned char           NCO1CON             @ 0x49E;
// bit and bitfield definitions
volatile bit N1PFM               @ ((unsigned)&NCO1CON*8)+0;
volatile bit N1POL               @ ((unsigned)&NCO1CON*8)+4;
volatile bit N1OUT               @ ((unsigned)&NCO1CON*8)+5;
volatile bit N1OE                @ ((unsigned)&NCO1CON*8)+6;
volatile bit N1EN                @ ((unsigned)&NCO1CON*8)+7;
#ifndef _LIB_BUILD
volatile union {
    struct {
        unsigned	N1PFM               : 1;
        unsigned	                    : 1;
        unsigned	: 1;
        unsigned	: 1;
        unsigned	N1POL               : 1;
        unsigned	N1OUT               : 1;
        unsigned	N1OE                : 1;
        unsigned	N1EN                : 1;
    };
} NCO1CONbits @ 0x49E;
#endif

// Register: NCO1CLK
volatile unsigned char           NCO1CLK             @ 0x49F;

// bit and bitfield definitions
volatile bit N1CKS0              @ ((unsigned)&NCO1CLK*8)+0;
volatile bit N1CKS1              @ ((unsigned)&NCO1CLK*8)+1;
volatile bit N1PWS0              @ ((unsigned)&NCO1CLK*8)+5;
volatile bit N1PWS1              @ ((unsigned)&NCO1CLK*8)+6;
volatile bit N1PWS2              @ ((unsigned)&NCO1CLK*8)+7;
#ifndef _LIB_BUILD
volatile union {
    struct {
        unsigned	N1CKS0              : 1;
        unsigned	N1CKS1              : 1;
        unsigned	                    : 1;
        unsigned	: 1;
        unsigned	: 1;
        unsigned	N1PWS0              : 1;
        unsigned	N1PWS1              : 1;
        unsigned	N1PWS2              : 1;
    };
    struct {
        unsigned	N1CKS               : 4;
        unsigned	: 1;
        unsigned	N1PWS               : 3;
    };
} NCO1CLKbits @ 0x49F;
#endif

//
// Special function register definitions: Bank 12
//


// Register: PWM1DCL
volatile unsigned char           PWM1DCL             @ 0x611;
// bit and bitfield definitions
volatile bit PWM1DCL0            @ ((unsigned)&PWM1DCL*8)+6;
volatile bit PWM1DCL1            @ ((unsigned)&PWM1DCL*8)+7;
#ifndef _LIB_BUILD
volatile union {
    struct {
        unsigned	                    : 1;
        unsigned	: 1;
        unsigned	: 1;
        unsigned	: 1;
        unsigned	: 1;
        unsigned	: 1;
        unsigned	PWM1DCL             : 2;
    };
    struct {
        unsigned	: 1;
        unsigned	: 1;
        unsigned	: 1;
        unsigned	: 1;
        unsigned	: 1;
        unsigned	: 1;
        unsigned	PWM1DCL0            : 1;
        unsigned	PWM1DCL1            : 1;
    };
} PWM1DCLbits @ 0x611;
#endif

// Register: PWM1DCH
volatile unsigned char           PWM1DCH             @ 0x612;
// bit and bitfield definitions
volatile bit PWM1DCH0            @ ((unsigned)&PWM1DCH*8)+0;
volatile bit PWM1DCH1            @ ((unsigned)&PWM1DCH*8)+1;
volatile bit PWM1DCH2            @ ((unsigned)&PWM1DCH*8)+2;
volatile bit PWM1DCH3            @ ((unsigned)&PWM1DCH*8)+3;
volatile bit PWM1DCH4            @ ((unsigned)&PWM1DCH*8)+4;
volatile bit PWM1DCH5            @ ((unsigned)&PWM1DCH*8)+5;
volatile bit PWM1DCH6            @ ((unsigned)&PWM1DCH*8)+6;
volatile bit PWM1DCH7            @ ((unsigned)&PWM1DCH*8)+7;
#ifndef _LIB_BUILD
volatile union {
    struct {
        unsigned	PWM1DCH0            : 1;
        unsigned	PWM1DCH1            : 1;
        unsigned	PWM1DCH2            : 1;
        unsigned	PWM1DCH3            : 1;
        unsigned	PWM1DCH4            : 1;
        unsigned	PWM1DCH5            : 1;
        unsigned	PWM1DCH6            : 1;
        unsigned	PWM1DCH7            : 1;
    };
} PWM1DCHbits @ 0x612;
#endif

// Register: PWM1CON
// Configurable logic cell control
volatile unsigned char           PWM1CON             @ 0x613;
volatile unsigned char           PWM1CON0            @ 0x613;
// bit and bitfield definitions
volatile bit PWM1POL             @ ((unsigned)&PWM1CON*8)+4;
volatile bit PWM1OUT             @ ((unsigned)&PWM1CON*8)+5;
volatile bit PWM1OE              @ ((unsigned)&PWM1CON*8)+6;
volatile bit PWM1EN              @ ((unsigned)&PWM1CON*8)+7;
#ifndef _LIB_BUILD
volatile union {
    struct {
        unsigned	                    : 1;
        unsigned	: 1;
        unsigned	: 1;
        unsigned	: 1;
        unsigned	PWM1POL             : 1;
        unsigned	PWM1OUT             : 1;
        unsigned	PWM1OE              : 1;
        unsigned	PWM1EN              : 1;
    };
} PWM1CONbits @ 0x613;
#endif

// Register: PWM2DCL
volatile unsigned char           PWM2DCL             @ 0x614;
// bit and bitfield definitions
volatile bit PWM2DCL0            @ ((unsigned)&PWM2DCL*8)+6;
volatile bit PWM2DCL1            @ ((unsigned)&PWM2DCL*8)+7;
#ifndef _LIB_BUILD
volatile union {
    struct {
        unsigned	                    : 1;
        unsigned	: 1;
        unsigned	: 1;
        unsigned	: 1;
        unsigned	: 1;
        unsigned	: 1;
        unsigned	PWM2DCL             : 2;
    };
    struct {
        unsigned	: 1;
        unsigned	: 1;
        unsigned	: 1;
        unsigned	: 1;
        unsigned	: 1;
        unsigned	: 1;
        unsigned	PWM2DCL0            : 1;
        unsigned	PWM2DCL1            : 1;
    };
} PWM2DCLbits @ 0x614;
#endif

// Register: PWM2DCH
volatile unsigned char           PWM2DCH             @ 0x615;
// bit and bitfield definitions
volatile bit PWM2DCH0            @ ((unsigned)&PWM2DCH*8)+0;
volatile bit PWM2DCH1            @ ((unsigned)&PWM2DCH*8)+1;
volatile bit PWM2DCH2            @ ((unsigned)&PWM2DCH*8)+2;
volatile bit PWM2DCH3            @ ((unsigned)&PWM2DCH*8)+3;
volatile bit PWM2DCH4            @ ((unsigned)&PWM2DCH*8)+4;
volatile bit PWM2DCH5            @ ((unsigned)&PWM2DCH*8)+5;
volatile bit PWM2DCH6            @ ((unsigned)&PWM2DCH*8)+6;
volatile bit PWM2DCH7            @ ((unsigned)&PWM2DCH*8)+7;
#ifndef _LIB_BUILD
volatile union {
    struct {
        unsigned	PWM2DCH0            : 1;
        unsigned	PWM2DCH1            : 1;
        unsigned	PWM2DCH2            : 1;
        unsigned	PWM2DCH3            : 1;
        unsigned	PWM2DCH4            : 1;
        unsigned	PWM2DCH5            : 1;
        unsigned	PWM2DCH6            : 1;
        unsigned	PWM2DCH7            : 1;
    };
} PWM2DCHbits @ 0x615;
#endif

// Register: PWM2CON
// Configurable logic cell control
volatile unsigned char           PWM2CON             @ 0x616;
volatile unsigned char           PWM2CON0            @ 0x616;
// bit and bitfield definitions
volatile bit PWM2POL             @ ((unsigned)&PWM2CON*8)+4;
volatile bit PWM2OUT             @ ((unsigned)&PWM2CON*8)+5;
volatile bit PWM2OE              @ ((unsigned)&PWM2CON*8)+6;
volatile bit PWM2EN              @ ((unsigned)&PWM2CON*8)+7;
#ifndef _LIB_BUILD
volatile union {
    struct {
        unsigned	                    : 1;
        unsigned	: 1;
        unsigned	: 1;
        unsigned	: 1;
        unsigned	PWM2POL             : 1;
        unsigned	PWM2OUT             : 1;
        unsigned	PWM2OE              : 1;
        unsigned	PWM2EN              : 1;
    };
} PWM2CONbits @ 0x616;
#endif

// Register: PWM3DCL
volatile unsigned char           PWM3DCL             @ 0x617;
// bit and bitfield definitions
volatile bit PWM3DCL0            @ ((unsigned)&PWM3DCL*8)+6;
volatile bit PWM3DCL1            @ ((unsigned)&PWM3DCL*8)+7;
#ifndef _LIB_BUILD
volatile union {
    struct {
        unsigned	                    : 1;
        unsigned	: 1;
        unsigned	: 1;
        unsigned	: 1;
        unsigned	: 1;
        unsigned	: 1;
        unsigned	PWM3DCL             : 2;
    };
    struct {
        unsigned	: 1;
        unsigned	: 1;
        unsigned	: 1;
        unsigned	: 1;
        unsigned	: 1;
        unsigned	: 1;
        unsigned	PWM3DCL0            : 1;
        unsigned	PWM3DCL1            : 1;
    };
} PWM3DCLbits @ 0x617;
#endif

// Register: PWM3DCH
volatile unsigned char           PWM3DCH             @ 0x618;
// bit and bitfield definitions
volatile bit PWM3DCH0            @ ((unsigned)&PWM3DCH*8)+0;
volatile bit PWM3DCH1            @ ((unsigned)&PWM3DCH*8)+1;
volatile bit PWM3DCH2            @ ((unsigned)&PWM3DCH*8)+2;
volatile bit PWM3DCH3            @ ((unsigned)&PWM3DCH*8)+3;
volatile bit PWM3DCH4            @ ((unsigned)&PWM3DCH*8)+4;
volatile bit PWM3DCH5            @ ((unsigned)&PWM3DCH*8)+5;
volatile bit PWM3DCH6            @ ((unsigned)&PWM3DCH*8)+6;
volatile bit PWM3DCH7            @ ((unsigned)&PWM3DCH*8)+7;
#ifndef _LIB_BUILD
volatile union {
    struct {
        unsigned	PWM3DCH0            : 1;
        unsigned	PWM3DCH1            : 1;
        unsigned	PWM3DCH2            : 1;
        unsigned	PWM3DCH3            : 1;
        unsigned	PWM3DCH4            : 1;
        unsigned	PWM3DCH5            : 1;
        unsigned	PWM3DCH6            : 1;
        unsigned	PWM3DCH7            : 1;
    };
} PWM3DCHbits @ 0x618;
#endif

// Register: PWM3CON
// Configurable logic cell control
volatile unsigned char           PWM3CON             @ 0x619;
volatile unsigned char           PWM3CON0            @ 0x619;
// bit and bitfield definitions
volatile bit PWM3POL             @ ((unsigned)&PWM3CON*8)+4;
volatile bit PWM3OUT             @ ((unsigned)&PWM3CON*8)+5;
volatile bit PWM3OE              @ ((unsigned)&PWM3CON*8)+6;
volatile bit PWM3EN              @ ((unsigned)&PWM3CON*8)+7;
#ifndef _LIB_BUILD
volatile union {
    struct {
        unsigned	                    : 1;
        unsigned	: 1;
        unsigned	: 1;
        unsigned	: 1;
        unsigned	PWM3POL             : 1;
        unsigned	PWM3OUT             : 1;
        unsigned	PWM3OE              : 1;
        unsigned	PWM3EN              : 1;
    };
} PWM3CONbits @ 0x619;
#endif

// Register: PWM4DCL
volatile unsigned char           PWM4DCL             @ 0x61A;
// bit and bitfield definitions
volatile bit PWM4DCL0            @ ((unsigned)&PWM4DCL*8)+6;
volatile bit PWM4DCL1            @ ((unsigned)&PWM4DCL*8)+7;
#ifndef _LIB_BUILD
volatile union {
    struct {
        unsigned	                    : 1;
        unsigned	: 1;
        unsigned	: 1;
        unsigned	: 1;
        unsigned	: 1;
        unsigned	: 1;
        unsigned	PWM4DCL             : 2;
    };
    struct {
        unsigned	: 1;
        unsigned	: 1;
        unsigned	: 1;
        unsigned	: 1;
        unsigned	: 1;
        unsigned	: 1;
        unsigned	PWM4DCL0            : 1;
        unsigned	PWM4DCL1            : 1;
    };
} PWM4DCLbits @ 0x61A;
#endif

// Register: PWM4DCH
volatile unsigned char           PWM4DCH             @ 0x61B;
// bit and bitfield definitions
volatile bit PWM4DCH0            @ ((unsigned)&PWM4DCH*8)+0;
volatile bit PWM4DCH1            @ ((unsigned)&PWM4DCH*8)+1;
volatile bit PWM4DCH2            @ ((unsigned)&PWM4DCH*8)+2;
volatile bit PWM4DCH3            @ ((unsigned)&PWM4DCH*8)+3;
volatile bit PWM4DCH4            @ ((unsigned)&PWM4DCH*8)+4;
volatile bit PWM4DCH5            @ ((unsigned)&PWM4DCH*8)+5;
volatile bit PWM4DCH6            @ ((unsigned)&PWM4DCH*8)+6;
volatile bit PWM4DCH7            @ ((unsigned)&PWM4DCH*8)+7;
#ifndef _LIB_BUILD
volatile union {
    struct {
        unsigned	PWM4DCH0            : 1;
        unsigned	PWM4DCH1            : 1;
        unsigned	PWM4DCH2            : 1;
        unsigned	PWM4DCH3            : 1;
        unsigned	PWM4DCH4            : 1;
        unsigned	PWM4DCH5            : 1;
        unsigned	PWM4DCH6            : 1;
        unsigned	PWM4DCH7            : 1;
    };
} PWM4DCHbits @ 0x61B;
#endif

// Register: PWM4CON
// Configurable logic cell control
volatile unsigned char           PWM4CON             @ 0x61C;
volatile unsigned char           PWM4CON0            @ 0x61C;
// bit and bitfield definitions
volatile bit PWM4POL             @ ((unsigned)&PWM4CON*8)+4;
volatile bit PWM4OUT             @ ((unsigned)&PWM4CON*8)+5;
volatile bit PWM4OE              @ ((unsigned)&PWM4CON*8)+6;
volatile bit PWM4EN              @ ((unsigned)&PWM4CON*8)+7;
#ifndef _LIB_BUILD
volatile union {
    struct {
        unsigned	                    : 1;
        unsigned	: 1;
        unsigned	: 1;
        unsigned	: 1;
        unsigned	PWM4POL             : 1;
        unsigned	PWM4OUT             : 1;
        unsigned	PWM4OE              : 1;
        unsigned	PWM4EN              : 1;
    };
} PWM4CONbits @ 0x61C;
#endif

//
// Special function register definitions: Bank 13
//


// Register: CWG1DBR
volatile unsigned char           CWG1DBR             @ 0x691;
// bit and bitfield definitions
volatile bit CWG1DBR0            @ ((unsigned)&CWG1DBR*8)+0;
volatile bit CWG1DBR1            @ ((unsigned)&CWG1DBR*8)+1;
volatile bit CWG1DBR2            @ ((unsigned)&CWG1DBR*8)+2;
volatile bit CWG1DBR3            @ ((unsigned)&CWG1DBR*8)+3;
volatile bit CWG1DBR4            @ ((unsigned)&CWG1DBR*8)+4;
volatile bit CWG1DBR5            @ ((unsigned)&CWG1DBR*8)+5;
#ifndef _LIB_BUILD
volatile union {
    struct {
        unsigned	CWG1DBR             : 6;
    };
    struct {
        unsigned	CWG1DBR0            : 1;
        unsigned	CWG1DBR1            : 1;
        unsigned	CWG1DBR2            : 1;
        unsigned	CWG1DBR3            : 1;
        unsigned	CWG1DBR4            : 1;
        unsigned	CWG1DBR5            : 1;
    };
} CWG1DBRbits @ 0x691;
#endif

// Register: CWG1DBF
volatile unsigned char           CWG1DBF             @ 0x692;
// bit and bitfield definitions
volatile bit CWG1DBF0            @ ((unsigned)&CWG1DBF*8)+0;
volatile bit CWG1DBF1            @ ((unsigned)&CWG1DBF*8)+1;
volatile bit CWG1DBF2            @ ((unsigned)&CWG1DBF*8)+2;
volatile bit CWG1DBF3            @ ((unsigned)&CWG1DBF*8)+3;
volatile bit CWG1DBF4            @ ((unsigned)&CWG1DBF*8)+4;
volatile bit CWG1DBF5            @ ((unsigned)&CWG1DBF*8)+5;
#ifndef _LIB_BUILD
volatile union {
    struct {
        unsigned	CWG1DBF             : 6;
    };
    struct {
        unsigned	CWG1DBF0            : 1;
        unsigned	CWG1DBF1            : 1;
        unsigned	CWG1DBF2            : 1;
        unsigned	CWG1DBF3            : 1;
        unsigned	CWG1DBF4            : 1;
        unsigned	CWG1DBF5            : 1;
    };
} CWG1DBFbits @ 0x692;
#endif

// Register: CWG1CON0
// Configurable logic cell control
volatile unsigned char           CWG1CON0            @ 0x693;
// bit and bitfield definitions
volatile bit G1CS0               @ ((unsigned)&CWG1CON0*8)+0;
volatile bit G1POLA              @ ((unsigned)&CWG1CON0*8)+3;
volatile bit G1POLB              @ ((unsigned)&CWG1CON0*8)+4;
volatile bit G1OEA               @ ((unsigned)&CWG1CON0*8)+5;
volatile bit G1OEB               @ ((unsigned)&CWG1CON0*8)+6;
volatile bit G1EN                @ ((unsigned)&CWG1CON0*8)+7;
#ifndef _LIB_BUILD
volatile union {
    struct {
        unsigned	G1CS0               : 1;
        unsigned	                    : 1;
        unsigned	: 1;
        unsigned	G1POLA              : 1;
        unsigned	G1POLB              : 1;
        unsigned	G1OEA               : 1;
        unsigned	G1OEB               : 1;
        unsigned	G1EN                : 1;
    };
    struct {
        unsigned	G1CS                : 2;
    };
} CWG1CON0bits @ 0x693;
#endif

// Register: CWG1CON1
volatile unsigned char           CWG1CON1            @ 0x694;

// bit and bitfield definitions
volatile bit G1IS0               @ ((unsigned)&CWG1CON1*8)+0;
volatile bit G1IS1               @ ((unsigned)&CWG1CON1*8)+1;
volatile bit G1IS2               @ ((unsigned)&CWG1CON1*8)+2;
volatile bit G1ASDLA0            @ ((unsigned)&CWG1CON1*8)+4;
volatile bit G1ASDLA1            @ ((unsigned)&CWG1CON1*8)+5;
volatile bit G1ASDLB0            @ ((unsigned)&CWG1CON1*8)+6;
volatile bit G1ASDLB1            @ ((unsigned)&CWG1CON1*8)+7;
#ifndef _LIB_BUILD
volatile union {
    struct {
        unsigned	G1IS0               : 1;
        unsigned	G1IS1               : 1;
        unsigned	G1IS2               : 1;
        unsigned	                    : 1;
        unsigned	G1ASDLA             : 2;
        unsigned	G1ASDLB             : 2;
    };
    struct {
        unsigned	G1IS                : 4;
        unsigned	G1ASDLA0            : 1;
        unsigned	G1ASDLA1            : 1;
        unsigned	G1ASDLB0            : 1;
        unsigned	G1ASDLB1            : 1;
    };
} CWG1CON1bits @ 0x694;
#endif

// Register: CWG1CON2
volatile unsigned char           CWG1CON2            @ 0x695;
// bit and bitfield definitions
volatile bit G1ASDSCLC2          @ ((unsigned)&CWG1CON2*8)+0;
volatile bit G1ASDSFLT           @ ((unsigned)&CWG1CON2*8)+1;
volatile bit G1ASDSC1            @ ((unsigned)&CWG1CON2*8)+2;
volatile bit G1ASDSC2            @ ((unsigned)&CWG1CON2*8)+3;
volatile bit G1ARSEN             @ ((unsigned)&CWG1CON2*8)+6;
volatile bit G1ASE               @ ((unsigned)&CWG1CON2*8)+7;
#ifndef _LIB_BUILD
volatile union {
    struct {
        unsigned	G1ASDSCLC2          : 1;
        unsigned	G1ASDSFLT           : 1;
        unsigned	G1ASDSC1            : 1;
        unsigned	G1ASDSC2            : 1;
        unsigned	                    : 2;
        unsigned	G1ARSEN             : 1;
        unsigned	G1ASE               : 1;
    };
} CWG1CON2bits @ 0x695;
#endif

//
// Special function register definitions: Bank 30
//


// Register: CLCDATA
volatile unsigned char           CLCDATA             @ 0xF0F;
// bit and bitfield definitions
volatile bit MCLC1OUT            @ ((unsigned)&CLCDATA*8)+0;
volatile bit MCLC2OUT            @ ((unsigned)&CLCDATA*8)+1;
#ifndef _LIB_BUILD
volatile union {
    struct {
        unsigned	MCLC1OUT            : 1;
        unsigned	MCLC2OUT            : 1;
    };
} CLCDATAbits @ 0xF0F;
#endif

// Register: CLC1CON
// Configurable logic cell control
volatile unsigned char           CLC1CON             @ 0xF10;
// bit and bitfield definitions
volatile bit LC1MODE0            @ ((unsigned)&CLC1CON*8)+0;
volatile bit LC1MODE1            @ ((unsigned)&CLC1CON*8)+1;
volatile bit LC1MODE2            @ ((unsigned)&CLC1CON*8)+2;
volatile bit LC1INTN             @ ((unsigned)&CLC1CON*8)+3;
volatile bit LC1INTP             @ ((unsigned)&CLC1CON*8)+4;
volatile bit LC1OUT              @ ((unsigned)&CLC1CON*8)+5;
volatile bit LC1OE               @ ((unsigned)&CLC1CON*8)+6;
volatile bit LC1EN               @ ((unsigned)&CLC1CON*8)+7;
// volatile bit LCMODE0             @ ((unsigned)&CLC1CON*8)+0;
// volatile bit LCMODE1             @ ((unsigned)&CLC1CON*8)+1;
// volatile bit LCMODE2             @ ((unsigned)&CLC1CON*8)+2;
// volatile bit LCINTN              @ ((unsigned)&CLC1CON*8)+3;
// volatile bit LCINTP              @ ((unsigned)&CLC1CON*8)+4;
// volatile bit LCOUT               @ ((unsigned)&CLC1CON*8)+5;
// volatile bit LCOE                @ ((unsigned)&CLC1CON*8)+6;
// volatile bit LCEN                @ ((unsigned)&CLC1CON*8)+7;
#ifndef _LIB_BUILD
volatile union {
    struct {
        unsigned	LC1MODE0            : 1;
        unsigned	LC1MODE1            : 1;
        unsigned	LC1MODE2            : 1;
        unsigned	LC1INTN             : 1;
        unsigned	LC1INTP             : 1;
        unsigned	LC1OUT              : 1;
        unsigned	LC1OE               : 1;
        unsigned	LC1EN               : 1;
    };
    struct {
        unsigned	LCMODE0             : 1;
        unsigned	LCMODE1             : 1;
        unsigned	LCMODE2             : 1;
        unsigned	LCINTN              : 1;
        unsigned	LCINTP              : 1;
        unsigned	LCOUT               : 1;
        unsigned	LCOE                : 1;
        unsigned	LCEN                : 1;
    };
    struct {
        unsigned	LC1MODE             : 3;
    };
} CLC1CONbits @ 0xF10;
#endif

// Register: CLC1POL
// Polarity control
volatile unsigned char           CLC1POL             @ 0xF11;
// bit and bitfield definitions
volatile bit LC1G1POL            @ ((unsigned)&CLC1POL*8)+0;
volatile bit LC1G2POL            @ ((unsigned)&CLC1POL*8)+1;
volatile bit LC1G3POL            @ ((unsigned)&CLC1POL*8)+2;
volatile bit LC1G4POL            @ ((unsigned)&CLC1POL*8)+3;
volatile bit LC1POL              @ ((unsigned)&CLC1POL*8)+7;
// volatile bit G1POL               @ ((unsigned)&CLC1POL*8)+0;
// volatile bit G2POL               @ ((unsigned)&CLC1POL*8)+1;
// volatile bit G3POL               @ ((unsigned)&CLC1POL*8)+2;
// volatile bit G4POL               @ ((unsigned)&CLC1POL*8)+3;
// volatile bit POL                 @ ((unsigned)&CLC1POL*8)+7;
#ifndef _LIB_BUILD
volatile union {
    struct {
        unsigned	LC1G1POL            : 1;
        unsigned	LC1G2POL            : 1;
        unsigned	LC1G3POL            : 1;
        unsigned	LC1G4POL            : 1;
        unsigned	                    : 3;
        unsigned	LC1POL              : 1;
    };
    struct {
        unsigned	G1POL               : 1;
        unsigned	G2POL               : 1;
        unsigned	G3POL               : 1;
        unsigned	G4POL               : 1;
        unsigned	: 3;
        unsigned	POL                 : 1;
    };
} CLC1POLbits @ 0xF11;
#endif

// Register: CLC1SEL0
// Input select register 0
volatile unsigned char           CLC1SEL0            @ 0xF12;
// bit and bitfield definitions
volatile bit LC1D1S0             @ ((unsigned)&CLC1SEL0*8)+0;
volatile bit LC1D1S1             @ ((unsigned)&CLC1SEL0*8)+1;
volatile bit LC1D1S2             @ ((unsigned)&CLC1SEL0*8)+2;
volatile bit LC1D2S0             @ ((unsigned)&CLC1SEL0*8)+4;
volatile bit LC1D2S1             @ ((unsigned)&CLC1SEL0*8)+5;
volatile bit LC1D2S2             @ ((unsigned)&CLC1SEL0*8)+6;
// volatile bit D1S0                @ ((unsigned)&CLC1SEL0*8)+0;
// volatile bit D1S1                @ ((unsigned)&CLC1SEL0*8)+1;
// volatile bit D1S2                @ ((unsigned)&CLC1SEL0*8)+2;
// volatile bit D2S0                @ ((unsigned)&CLC1SEL0*8)+4;
// volatile bit D2S1                @ ((unsigned)&CLC1SEL0*8)+5;
// volatile bit D2S2                @ ((unsigned)&CLC1SEL0*8)+6;
#ifndef _LIB_BUILD
volatile union {
    struct {
        unsigned	LC1D1S0             : 1;
        unsigned	LC1D1S1             : 1;
        unsigned	LC1D1S2             : 1;
        unsigned	                    : 1;
        unsigned	LC1D2S0             : 1;
        unsigned	LC1D2S1             : 1;
        unsigned	LC1D2S2             : 1;
        unsigned	: 1;
    };
    struct {
        unsigned	D1S0                : 1;
        unsigned	D1S1                : 1;
        unsigned	D1S2                : 1;
        unsigned	: 1;
        unsigned	D2S0                : 1;
        unsigned	D2S1                : 1;
        unsigned	D2S2                : 1;
        unsigned	: 1;
    };
    struct {
        unsigned	LC1D1S              : 3;
        unsigned	: 1;
        unsigned	LC1D2S              : 3;
        unsigned	: 1;
    };
} CLC1SEL0bits @ 0xF12;
#endif

// Register: CLC1SEL1
// Input select register 1
volatile unsigned char           CLC1SEL1            @ 0xF13;
// bit and bitfield definitions
volatile bit LC1D3S0             @ ((unsigned)&CLC1SEL1*8)+0;
volatile bit LC1D3S1             @ ((unsigned)&CLC1SEL1*8)+1;
volatile bit LC1D3S2             @ ((unsigned)&CLC1SEL1*8)+2;
volatile bit LC1D4S0             @ ((unsigned)&CLC1SEL1*8)+4;
volatile bit LC1D4S1             @ ((unsigned)&CLC1SEL1*8)+5;
volatile bit LC1D4S2             @ ((unsigned)&CLC1SEL1*8)+6;
// volatile bit D3S0                @ ((unsigned)&CLC1SEL1*8)+0;
// volatile bit D3S1                @ ((unsigned)&CLC1SEL1*8)+1;
// volatile bit D3S2                @ ((unsigned)&CLC1SEL1*8)+2;
// volatile bit D4S0                @ ((unsigned)&CLC1SEL1*8)+4;
// volatile bit D4S1                @ ((unsigned)&CLC1SEL1*8)+5;
// volatile bit D4S2                @ ((unsigned)&CLC1SEL1*8)+6;
#ifndef _LIB_BUILD
volatile union {
    struct {
        unsigned	LC1D3S0             : 1;
        unsigned	LC1D3S1             : 1;
        unsigned	LC1D3S2             : 1;
        unsigned	                    : 1;
        unsigned	LC1D4S0             : 1;
        unsigned	LC1D4S1             : 1;
        unsigned	LC1D4S2             : 1;
    };
    struct {
        unsigned	D3S0                : 1;
        unsigned	D3S1                : 1;
        unsigned	D3S2                : 1;
        unsigned	: 1;
        unsigned	D4S0                : 1;
        unsigned	D4S1                : 1;
        unsigned	D4S2                : 1;
    };
    struct {
        unsigned	LC1D3S              : 3;
        unsigned	: 1;
        unsigned	LC1D4S              : 3;
    };
} CLC1SEL1bits @ 0xF13;
#endif

// Register: CLC1GLS0
// Gate logic select register 0
volatile unsigned char           CLC1GLS0            @ 0xF14;
// bit and bitfield definitions
volatile bit LC1G1D1N            @ ((unsigned)&CLC1GLS0*8)+0;
volatile bit LC1G1D1T            @ ((unsigned)&CLC1GLS0*8)+1;
volatile bit LC1G1D2N            @ ((unsigned)&CLC1GLS0*8)+2;
volatile bit LC1G1D2T            @ ((unsigned)&CLC1GLS0*8)+3;
volatile bit LC1G1D3N            @ ((unsigned)&CLC1GLS0*8)+4;
volatile bit LC1G1D3T            @ ((unsigned)&CLC1GLS0*8)+5;
volatile bit LC1G1D4N            @ ((unsigned)&CLC1GLS0*8)+6;
volatile bit LC1G1D4T            @ ((unsigned)&CLC1GLS0*8)+7;
// volatile bit D1N                 @ ((unsigned)&CLC1GLS0*8)+0;
// volatile bit D1T                 @ ((unsigned)&CLC1GLS0*8)+1;
// volatile bit D2N                 @ ((unsigned)&CLC1GLS0*8)+2;
// volatile bit D2T                 @ ((unsigned)&CLC1GLS0*8)+3;
// volatile bit D3N                 @ ((unsigned)&CLC1GLS0*8)+4;
// volatile bit D3T                 @ ((unsigned)&CLC1GLS0*8)+5;
// volatile bit D4N                 @ ((unsigned)&CLC1GLS0*8)+6;
// volatile bit D4T                 @ ((unsigned)&CLC1GLS0*8)+7;
#ifndef _LIB_BUILD
volatile union {
    struct {
        unsigned	LC1G1D1N            : 1;
        unsigned	LC1G1D1T            : 1;
        unsigned	LC1G1D2N            : 1;
        unsigned	LC1G1D2T            : 1;
        unsigned	LC1G1D3N            : 1;
        unsigned	LC1G1D3T            : 1;
        unsigned	LC1G1D4N            : 1;
        unsigned	LC1G1D4T            : 1;
    };
    struct {
        unsigned	D1N                 : 1;
        unsigned	D1T                 : 1;
        unsigned	D2N                 : 1;
        unsigned	D2T                 : 1;
        unsigned	D3N                 : 1;
        unsigned	D3T                 : 1;
        unsigned	D4N                 : 1;
        unsigned	D4T                 : 1;
    };
} CLC1GLS0bits @ 0xF14;
#endif

// Register: CLC1GLS1
// Gate logic select register 1
volatile unsigned char           CLC1GLS1            @ 0xF15;
// bit and bitfield definitions
volatile bit LC1G2D1N            @ ((unsigned)&CLC1GLS1*8)+0;
volatile bit LC1G2D1T            @ ((unsigned)&CLC1GLS1*8)+1;
volatile bit LC1G2D2N            @ ((unsigned)&CLC1GLS1*8)+2;
volatile bit LC1G2D2T            @ ((unsigned)&CLC1GLS1*8)+3;
volatile bit LC1G2D3N            @ ((unsigned)&CLC1GLS1*8)+4;
volatile bit LC1G2D3T            @ ((unsigned)&CLC1GLS1*8)+5;
volatile bit LC1G2D4N            @ ((unsigned)&CLC1GLS1*8)+6;
volatile bit LC1G2D4T            @ ((unsigned)&CLC1GLS1*8)+7;
// volatile bit D1N                 @ ((unsigned)&CLC1GLS1*8)+0;
// volatile bit D1T                 @ ((unsigned)&CLC1GLS1*8)+1;
// volatile bit D2N                 @ ((unsigned)&CLC1GLS1*8)+2;
// volatile bit D2T                 @ ((unsigned)&CLC1GLS1*8)+3;
// volatile bit D3N                 @ ((unsigned)&CLC1GLS1*8)+4;
// volatile bit D3T                 @ ((unsigned)&CLC1GLS1*8)+5;
// volatile bit D4N                 @ ((unsigned)&CLC1GLS1*8)+6;
// volatile bit D4T                 @ ((unsigned)&CLC1GLS1*8)+7;
#ifndef _LIB_BUILD
volatile union {
    struct {
        unsigned	LC1G2D1N            : 1;
        unsigned	LC1G2D1T            : 1;
        unsigned	LC1G2D2N            : 1;
        unsigned	LC1G2D2T            : 1;
        unsigned	LC1G2D3N            : 1;
        unsigned	LC1G2D3T            : 1;
        unsigned	LC1G2D4N            : 1;
        unsigned	LC1G2D4T            : 1;
    };
    struct {
        unsigned	D1N                 : 1;
        unsigned	D1T                 : 1;
        unsigned	D2N                 : 1;
        unsigned	D2T                 : 1;
        unsigned	D3N                 : 1;
        unsigned	D3T                 : 1;
        unsigned	D4N                 : 1;
        unsigned	D4T                 : 1;
    };
} CLC1GLS1bits @ 0xF15;
#endif

// Register: CLC1GLS2
// Gate logic select register 2
volatile unsigned char           CLC1GLS2            @ 0xF16;
// bit and bitfield definitions
volatile bit LC1G3D1N            @ ((unsigned)&CLC1GLS2*8)+0;
volatile bit LC1G3D1T            @ ((unsigned)&CLC1GLS2*8)+1;
volatile bit LC1G3D2N            @ ((unsigned)&CLC1GLS2*8)+2;
volatile bit LC1G3D2T            @ ((unsigned)&CLC1GLS2*8)+3;
volatile bit LC1G3D3N            @ ((unsigned)&CLC1GLS2*8)+4;
volatile bit LC1G3D3T            @ ((unsigned)&CLC1GLS2*8)+5;
volatile bit LC1G3D4N            @ ((unsigned)&CLC1GLS2*8)+6;
volatile bit LC1G3D4T            @ ((unsigned)&CLC1GLS2*8)+7;
// volatile bit D1N                 @ ((unsigned)&CLC1GLS2*8)+0;
// volatile bit D1T                 @ ((unsigned)&CLC1GLS2*8)+1;
// volatile bit D2N                 @ ((unsigned)&CLC1GLS2*8)+2;
// volatile bit D2T                 @ ((unsigned)&CLC1GLS2*8)+3;
// volatile bit D3N                 @ ((unsigned)&CLC1GLS2*8)+4;
// volatile bit D3T                 @ ((unsigned)&CLC1GLS2*8)+5;
// volatile bit D4N                 @ ((unsigned)&CLC1GLS2*8)+6;
// volatile bit D4T                 @ ((unsigned)&CLC1GLS2*8)+7;
#ifndef _LIB_BUILD
volatile union {
    struct {
        unsigned	LC1G3D1N            : 1;
        unsigned	LC1G3D1T            : 1;
        unsigned	LC1G3D2N            : 1;
        unsigned	LC1G3D2T            : 1;
        unsigned	LC1G3D3N            : 1;
        unsigned	LC1G3D3T            : 1;
        unsigned	LC1G3D4N            : 1;
        unsigned	LC1G3D4T            : 1;
    };
    struct {
        unsigned	D1N                 : 1;
        unsigned	D1T                 : 1;
        unsigned	D2N                 : 1;
        unsigned	D2T                 : 1;
        unsigned	D3N                 : 1;
        unsigned	D3T                 : 1;
        unsigned	D4N                 : 1;
        unsigned	D4T                 : 1;
    };
} CLC1GLS2bits @ 0xF16;
#endif

// Register: CLC1GLS3
// Gate logic select register 3
volatile unsigned char           CLC1GLS3            @ 0xF17;
// bit and bitfield definitions
volatile bit LC1G4D1N            @ ((unsigned)&CLC1GLS3*8)+0;
volatile bit LC1G4D1T            @ ((unsigned)&CLC1GLS3*8)+1;
volatile bit LC1G4D2N            @ ((unsigned)&CLC1GLS3*8)+2;
volatile bit LC1G4D2T            @ ((unsigned)&CLC1GLS3*8)+3;
volatile bit LC1G4D3N            @ ((unsigned)&CLC1GLS3*8)+4;
volatile bit LC1G4D3T            @ ((unsigned)&CLC1GLS3*8)+5;
volatile bit LC1G4D4N            @ ((unsigned)&CLC1GLS3*8)+6;
volatile bit LC1G4D4T            @ ((unsigned)&CLC1GLS3*8)+7;
// volatile bit G4D1N               @ ((unsigned)&CLC1GLS3*8)+0;
// volatile bit G4D1T               @ ((unsigned)&CLC1GLS3*8)+1;
// volatile bit G4D2N               @ ((unsigned)&CLC1GLS3*8)+2;
// volatile bit G4D2T               @ ((unsigned)&CLC1GLS3*8)+3;
// volatile bit G4D3N               @ ((unsigned)&CLC1GLS3*8)+4;
// volatile bit G4D3T               @ ((unsigned)&CLC1GLS3*8)+5;
// volatile bit G4D4N               @ ((unsigned)&CLC1GLS3*8)+6;
// volatile bit G4D4T               @ ((unsigned)&CLC1GLS3*8)+7;
#ifndef _LIB_BUILD
volatile union {
    struct {
        unsigned	LC1G4D1N            : 1;
        unsigned	LC1G4D1T            : 1;
        unsigned	LC1G4D2N            : 1;
        unsigned	LC1G4D2T            : 1;
        unsigned	LC1G4D3N            : 1;
        unsigned	LC1G4D3T            : 1;
        unsigned	LC1G4D4N            : 1;
        unsigned	LC1G4D4T            : 1;
    };
    struct {
        unsigned	G4D1N               : 1;
        unsigned	G4D1T               : 1;
        unsigned	G4D2N               : 1;
        unsigned	G4D2T               : 1;
        unsigned	G4D3N               : 1;
        unsigned	G4D3T               : 1;
        unsigned	G4D4N               : 1;
        unsigned	G4D4T               : 1;
    };
} CLC1GLS3bits @ 0xF17;
#endif

// Register: CLC2CON
// Configurable logic cell control
volatile unsigned char           CLC2CON             @ 0xF18;
// bit and bitfield definitions
volatile bit LC2MODE0            @ ((unsigned)&CLC2CON*8)+0;
volatile bit LC2MODE1            @ ((unsigned)&CLC2CON*8)+1;
volatile bit LC2MODE2            @ ((unsigned)&CLC2CON*8)+2;
volatile bit LC2INTN             @ ((unsigned)&CLC2CON*8)+3;
volatile bit LC2INTP             @ ((unsigned)&CLC2CON*8)+4;
volatile bit LC2OUT              @ ((unsigned)&CLC2CON*8)+5;
volatile bit LC2OE               @ ((unsigned)&CLC2CON*8)+6;
volatile bit LC2EN               @ ((unsigned)&CLC2CON*8)+7;
// volatile bit LCMODE0             @ ((unsigned)&CLC2CON*8)+0;
// volatile bit LCMODE1             @ ((unsigned)&CLC2CON*8)+1;
// volatile bit LCMODE2             @ ((unsigned)&CLC2CON*8)+2;
// volatile bit LCINTN              @ ((unsigned)&CLC2CON*8)+3;
// volatile bit LCINTP              @ ((unsigned)&CLC2CON*8)+4;
// volatile bit LCOUT               @ ((unsigned)&CLC2CON*8)+5;
// volatile bit LCOE                @ ((unsigned)&CLC2CON*8)+6;
// volatile bit LCEN                @ ((unsigned)&CLC2CON*8)+7;
#ifndef _LIB_BUILD
volatile union {
    struct {
        unsigned	LC2MODE0            : 1;
        unsigned	LC2MODE1            : 1;
        unsigned	LC2MODE2            : 1;
        unsigned	LC2INTN             : 1;
        unsigned	LC2INTP             : 1;
        unsigned	LC2OUT              : 1;
        unsigned	LC2OE               : 1;
        unsigned	LC2EN               : 1;
    };
    struct {
        unsigned	LCMODE0             : 1;
        unsigned	LCMODE1             : 1;
        unsigned	LCMODE2             : 1;
        unsigned	LCINTN              : 1;
        unsigned	LCINTP              : 1;
        unsigned	LCOUT               : 1;
        unsigned	LCOE                : 1;
        unsigned	LCEN                : 1;
    };
    struct {
        unsigned	LC2MODE             : 3;
    };
} CLC2CONbits @ 0xF18;
#endif

// Register: CLC2POL
// Polarity control
volatile unsigned char           CLC2POL             @ 0xF19;
// bit and bitfield definitions
volatile bit LC2G1POL            @ ((unsigned)&CLC2POL*8)+0;
volatile bit LC2G2POL            @ ((unsigned)&CLC2POL*8)+1;
volatile bit LC2G3POL            @ ((unsigned)&CLC2POL*8)+2;
volatile bit LC2G4POL            @ ((unsigned)&CLC2POL*8)+3;
volatile bit LC2POL              @ ((unsigned)&CLC2POL*8)+7;
// volatile bit G1POL               @ ((unsigned)&CLC2POL*8)+0;
// volatile bit G2POL               @ ((unsigned)&CLC2POL*8)+1;
// volatile bit G3POL               @ ((unsigned)&CLC2POL*8)+2;
// volatile bit G4POL               @ ((unsigned)&CLC2POL*8)+3;
// volatile bit POL                 @ ((unsigned)&CLC2POL*8)+7;
#ifndef _LIB_BUILD
volatile union {
    struct {
        unsigned	LC2G1POL            : 1;
        unsigned	LC2G2POL            : 1;
        unsigned	LC2G3POL            : 1;
        unsigned	LC2G4POL            : 1;
        unsigned	                    : 3;
        unsigned	LC2POL              : 1;
    };
    struct {
        unsigned	G1POL               : 1;
        unsigned	G2POL               : 1;
        unsigned	G3POL               : 1;
        unsigned	G4POL               : 1;
        unsigned	: 3;
        unsigned	POL                 : 1;
    };
} CLC2POLbits @ 0xF19;
#endif

// Register: CLC2SEL0
// Input select register 0
volatile unsigned char           CLC2SEL0            @ 0xF1A;
// bit and bitfield definitions
volatile bit LC2D1S0             @ ((unsigned)&CLC2SEL0*8)+0;
volatile bit LC2D1S1             @ ((unsigned)&CLC2SEL0*8)+1;
volatile bit LC2D1S2             @ ((unsigned)&CLC2SEL0*8)+2;
volatile bit LC2D2S0             @ ((unsigned)&CLC2SEL0*8)+4;
volatile bit LC2D2S1             @ ((unsigned)&CLC2SEL0*8)+5;
volatile bit LC2D2S2             @ ((unsigned)&CLC2SEL0*8)+6;
// volatile bit D1S0                @ ((unsigned)&CLC2SEL0*8)+0;
// volatile bit D1S1                @ ((unsigned)&CLC2SEL0*8)+1;
// volatile bit D1S2                @ ((unsigned)&CLC2SEL0*8)+2;
// volatile bit D2S0                @ ((unsigned)&CLC2SEL0*8)+4;
// volatile bit D2S1                @ ((unsigned)&CLC2SEL0*8)+5;
// volatile bit D2S2                @ ((unsigned)&CLC2SEL0*8)+6;
#ifndef _LIB_BUILD
volatile union {
    struct {
        unsigned	LC2D1S0             : 1;
        unsigned	LC2D1S1             : 1;
        unsigned	LC2D1S2             : 1;
        unsigned	                    : 1;
        unsigned	LC2D2S0             : 1;
        unsigned	LC2D2S1             : 1;
        unsigned	LC2D2S2             : 1;
        unsigned	: 1;
    };
    struct {
        unsigned	D1S0                : 1;
        unsigned	D1S1                : 1;
        unsigned	D1S2                : 1;
        unsigned	: 1;
        unsigned	D2S0                : 1;
        unsigned	D2S1                : 1;
        unsigned	D2S2                : 1;
        unsigned	: 1;
    };
    struct {
        unsigned	LC2D1S              : 3;
        unsigned	: 1;
        unsigned	LC2D2S              : 3;
        unsigned	: 1;
    };
} CLC2SEL0bits @ 0xF1A;
#endif

// Register: CLC2SEL1
// Input select register 1
volatile unsigned char           CLC2SEL1            @ 0xF1B;
// bit and bitfield definitions
volatile bit LC2D3S0             @ ((unsigned)&CLC2SEL1*8)+0;
volatile bit LC2D3S1             @ ((unsigned)&CLC2SEL1*8)+1;
volatile bit LC2D3S2             @ ((unsigned)&CLC2SEL1*8)+2;
volatile bit LC2D4S0             @ ((unsigned)&CLC2SEL1*8)+4;
volatile bit LC2D4S1             @ ((unsigned)&CLC2SEL1*8)+5;
volatile bit LC2D4S2             @ ((unsigned)&CLC2SEL1*8)+6;
// volatile bit D3S0                @ ((unsigned)&CLC2SEL1*8)+0;
// volatile bit D3S1                @ ((unsigned)&CLC2SEL1*8)+1;
// volatile bit D3S2                @ ((unsigned)&CLC2SEL1*8)+2;
// volatile bit D4S0                @ ((unsigned)&CLC2SEL1*8)+4;
// volatile bit D4S1                @ ((unsigned)&CLC2SEL1*8)+5;
// volatile bit D4S2                @ ((unsigned)&CLC2SEL1*8)+6;
#ifndef _LIB_BUILD
volatile union {
    struct {
        unsigned	LC2D3S0             : 1;
        unsigned	LC2D3S1             : 1;
        unsigned	LC2D3S2             : 1;
        unsigned	                    : 1;
        unsigned	LC2D4S0             : 1;
        unsigned	LC2D4S1             : 1;
        unsigned	LC2D4S2             : 1;
    };
    struct {
        unsigned	D3S0                : 1;
        unsigned	D3S1                : 1;
        unsigned	D3S2                : 1;
        unsigned	: 1;
        unsigned	D4S0                : 1;
        unsigned	D4S1                : 1;
        unsigned	D4S2                : 1;
    };
    struct {
        unsigned	LC2D3S              : 3;
        unsigned	: 1;
        unsigned	LC2D4S              : 3;
    };
} CLC2SEL1bits @ 0xF1B;
#endif

// Register: CLC2GLS0
// Gate logic select register 0
volatile unsigned char           CLC2GLS0            @ 0xF1C;
// bit and bitfield definitions
volatile bit LC2G1D1N            @ ((unsigned)&CLC2GLS0*8)+0;
volatile bit LC2G1D1T            @ ((unsigned)&CLC2GLS0*8)+1;
volatile bit LC2G1D2N            @ ((unsigned)&CLC2GLS0*8)+2;
volatile bit LC2G1D2T            @ ((unsigned)&CLC2GLS0*8)+3;
volatile bit LC2G1D3N            @ ((unsigned)&CLC2GLS0*8)+4;
volatile bit LC2G1D3T            @ ((unsigned)&CLC2GLS0*8)+5;
volatile bit LC2G1D4N            @ ((unsigned)&CLC2GLS0*8)+6;
volatile bit LC2G1D4T            @ ((unsigned)&CLC2GLS0*8)+7;
// volatile bit D1N                 @ ((unsigned)&CLC2GLS0*8)+0;
// volatile bit D1T                 @ ((unsigned)&CLC2GLS0*8)+1;
// volatile bit D2N                 @ ((unsigned)&CLC2GLS0*8)+2;
// volatile bit D2T                 @ ((unsigned)&CLC2GLS0*8)+3;
// volatile bit D3N                 @ ((unsigned)&CLC2GLS0*8)+4;
// volatile bit D3T                 @ ((unsigned)&CLC2GLS0*8)+5;
// volatile bit D4N                 @ ((unsigned)&CLC2GLS0*8)+6;
// volatile bit D4T                 @ ((unsigned)&CLC2GLS0*8)+7;
#ifndef _LIB_BUILD
volatile union {
    struct {
        unsigned	LC2G1D1N            : 1;
        unsigned	LC2G1D1T            : 1;
        unsigned	LC2G1D2N            : 1;
        unsigned	LC2G1D2T            : 1;
        unsigned	LC2G1D3N            : 1;
        unsigned	LC2G1D3T            : 1;
        unsigned	LC2G1D4N            : 1;
        unsigned	LC2G1D4T            : 1;
    };
    struct {
        unsigned	D1N                 : 1;
        unsigned	D1T                 : 1;
        unsigned	D2N                 : 1;
        unsigned	D2T                 : 1;
        unsigned	D3N                 : 1;
        unsigned	D3T                 : 1;
        unsigned	D4N                 : 1;
        unsigned	D4T                 : 1;
    };
} CLC2GLS0bits @ 0xF1C;
#endif

// Register: CLC2GLS1
// Gate logic select register 1
volatile unsigned char           CLC2GLS1            @ 0xF1D;
// bit and bitfield definitions
volatile bit LC2G2D1N            @ ((unsigned)&CLC2GLS1*8)+0;
volatile bit LC2G2D1T            @ ((unsigned)&CLC2GLS1*8)+1;
volatile bit LC2G2D2N            @ ((unsigned)&CLC2GLS1*8)+2;
volatile bit LC2G2D2T            @ ((unsigned)&CLC2GLS1*8)+3;
volatile bit LC2G2D3N            @ ((unsigned)&CLC2GLS1*8)+4;
volatile bit LC2G2D3T            @ ((unsigned)&CLC2GLS1*8)+5;
volatile bit LC2G2D4N            @ ((unsigned)&CLC2GLS1*8)+6;
volatile bit LC2G2D4T            @ ((unsigned)&CLC2GLS1*8)+7;
// volatile bit D1N                 @ ((unsigned)&CLC2GLS1*8)+0;
// volatile bit D1T                 @ ((unsigned)&CLC2GLS1*8)+1;
// volatile bit D2N                 @ ((unsigned)&CLC2GLS1*8)+2;
// volatile bit D2T                 @ ((unsigned)&CLC2GLS1*8)+3;
// volatile bit D3N                 @ ((unsigned)&CLC2GLS1*8)+4;
// volatile bit D3T                 @ ((unsigned)&CLC2GLS1*8)+5;
// volatile bit D4N                 @ ((unsigned)&CLC2GLS1*8)+6;
// volatile bit D4T                 @ ((unsigned)&CLC2GLS1*8)+7;
#ifndef _LIB_BUILD
volatile union {
    struct {
        unsigned	LC2G2D1N            : 1;
        unsigned	LC2G2D1T            : 1;
        unsigned	LC2G2D2N            : 1;
        unsigned	LC2G2D2T            : 1;
        unsigned	LC2G2D3N            : 1;
        unsigned	LC2G2D3T            : 1;
        unsigned	LC2G2D4N            : 1;
        unsigned	LC2G2D4T            : 1;
    };
    struct {
        unsigned	D1N                 : 1;
        unsigned	D1T                 : 1;
        unsigned	D2N                 : 1;
        unsigned	D2T                 : 1;
        unsigned	D3N                 : 1;
        unsigned	D3T                 : 1;
        unsigned	D4N                 : 1;
        unsigned	D4T                 : 1;
    };
} CLC2GLS1bits @ 0xF1D;
#endif

// Register: CLC2GLS2
// Gate logic select register 2
volatile unsigned char           CLC2GLS2            @ 0xF1E;
// bit and bitfield definitions
volatile bit LC2G3D1N            @ ((unsigned)&CLC2GLS2*8)+0;
volatile bit LC2G3D1T            @ ((unsigned)&CLC2GLS2*8)+1;
volatile bit LC2G3D2N            @ ((unsigned)&CLC2GLS2*8)+2;
volatile bit LC2G3D2T            @ ((unsigned)&CLC2GLS2*8)+3;
volatile bit LC2G3D3N            @ ((unsigned)&CLC2GLS2*8)+4;
volatile bit LC2G3D3T            @ ((unsigned)&CLC2GLS2*8)+5;
volatile bit LC2G3D4N            @ ((unsigned)&CLC2GLS2*8)+6;
volatile bit LC2G3D4T            @ ((unsigned)&CLC2GLS2*8)+7;
// volatile bit D1N                 @ ((unsigned)&CLC2GLS2*8)+0;
// volatile bit D1T                 @ ((unsigned)&CLC2GLS2*8)+1;
// volatile bit D2N                 @ ((unsigned)&CLC2GLS2*8)+2;
// volatile bit D2T                 @ ((unsigned)&CLC2GLS2*8)+3;
// volatile bit D3N                 @ ((unsigned)&CLC2GLS2*8)+4;
// volatile bit D3T                 @ ((unsigned)&CLC2GLS2*8)+5;
// volatile bit D4N                 @ ((unsigned)&CLC2GLS2*8)+6;
// volatile bit D4T                 @ ((unsigned)&CLC2GLS2*8)+7;
#ifndef _LIB_BUILD
volatile union {
    struct {
        unsigned	LC2G3D1N            : 1;
        unsigned	LC2G3D1T            : 1;
        unsigned	LC2G3D2N            : 1;
        unsigned	LC2G3D2T            : 1;
        unsigned	LC2G3D3N            : 1;
        unsigned	LC2G3D3T            : 1;
        unsigned	LC2G3D4N            : 1;
        unsigned	LC2G3D4T            : 1;
    };
    struct {
        unsigned	D1N                 : 1;
        unsigned	D1T                 : 1;
        unsigned	D2N                 : 1;
        unsigned	D2T                 : 1;
        unsigned	D3N                 : 1;
        unsigned	D3T                 : 1;
        unsigned	D4N                 : 1;
        unsigned	D4T                 : 1;
    };
} CLC2GLS2bits @ 0xF1E;
#endif

// Register: CLC2GLS3
// Gate logic select register 3
volatile unsigned char           CLC2GLS3            @ 0xF1F;
// bit and bitfield definitions
volatile bit LC2G4D1N            @ ((unsigned)&CLC2GLS3*8)+0;
volatile bit LC2G4D1T            @ ((unsigned)&CLC2GLS3*8)+1;
volatile bit LC2G4D2N            @ ((unsigned)&CLC2GLS3*8)+2;
volatile bit LC2G4D2T            @ ((unsigned)&CLC2GLS3*8)+3;
volatile bit LC2G4D3N            @ ((unsigned)&CLC2GLS3*8)+4;
volatile bit LC2G4D3T            @ ((unsigned)&CLC2GLS3*8)+5;
volatile bit LC2G4D4N            @ ((unsigned)&CLC2GLS3*8)+6;
volatile bit LC2G4D4T            @ ((unsigned)&CLC2GLS3*8)+7;
// volatile bit G4D1N               @ ((unsigned)&CLC2GLS3*8)+0;
// volatile bit G4D1T               @ ((unsigned)&CLC2GLS3*8)+1;
// volatile bit G4D2N               @ ((unsigned)&CLC2GLS3*8)+2;
// volatile bit G4D2T               @ ((unsigned)&CLC2GLS3*8)+3;
// volatile bit G4D3N               @ ((unsigned)&CLC2GLS3*8)+4;
// volatile bit G4D3T               @ ((unsigned)&CLC2GLS3*8)+5;
// volatile bit G4D4N               @ ((unsigned)&CLC2GLS3*8)+6;
// volatile bit G4D4T               @ ((unsigned)&CLC2GLS3*8)+7;
#ifndef _LIB_BUILD
volatile union {
    struct {
        unsigned	LC2G4D1N            : 1;
        unsigned	LC2G4D1T            : 1;
        unsigned	LC2G4D2N            : 1;
        unsigned	LC2G4D2T            : 1;
        unsigned	LC2G4D3N            : 1;
        unsigned	LC2G4D3T            : 1;
        unsigned	LC2G4D4N            : 1;
        unsigned	LC2G4D4T            : 1;
    };
    struct {
        unsigned	G4D1N               : 1;
        unsigned	G4D1T               : 1;
        unsigned	G4D2N               : 1;
        unsigned	G4D2T               : 1;
        unsigned	G4D3N               : 1;
        unsigned	G4D3T               : 1;
        unsigned	G4D4N               : 1;
        unsigned	G4D4T               : 1;
    };
} CLC2GLS3bits @ 0xF1F;
#endif
//
// Special function register definitions: Bank 31
//


// Register: BSR_ICDSHAD
volatile unsigned char           BSR_ICDSHAD         @ 0xFE3;
// bit and bitfield definitions
#ifndef _LIB_BUILD
volatile union {
    struct {
        unsigned	BSR_ICDSHAD         : 5;
    };
} BSR_ICDSHADbits @ 0xFE3;
#endif

// Register: STATUS_SHAD
volatile unsigned char           STATUS_SHAD         @ 0xFE4;
// bit and bitfield definitions
volatile bit C_SHAD              @ ((unsigned)&STATUS_SHAD*8)+0;
volatile bit DC_SHAD             @ ((unsigned)&STATUS_SHAD*8)+1;
volatile bit Z_SHAD              @ ((unsigned)&STATUS_SHAD*8)+2;
#ifndef _LIB_BUILD
volatile union {
    struct {
        unsigned	C_SHAD              : 1;
        unsigned	DC_SHAD             : 1;
        unsigned	Z_SHAD              : 1;
    };
} STATUS_SHADbits @ 0xFE4;
#endif

// Register: WREG_SHAD
volatile unsigned char           WREG_SHAD           @ 0xFE5;
// bit and bitfield definitions

// Register: BSR_SHAD
volatile unsigned char           BSR_SHAD            @ 0xFE6;
// bit and bitfield definitions
#ifndef _LIB_BUILD
volatile union {
    struct {
        unsigned	BSR_SHAD            : 5;
    };
} BSR_SHADbits @ 0xFE6;
#endif

// Register: PCLATH_SHAD
volatile unsigned char           PCLATH_SHAD         @ 0xFE7;
// bit and bitfield definitions
#ifndef _LIB_BUILD
volatile union {
    struct {
        unsigned	PCLATH_SHAD         : 7;
    };
} PCLATH_SHADbits @ 0xFE7;
#endif

// Register: FSR0L_SHAD
volatile unsigned char           FSR0L_SHAD          @ 0xFE8;
// bit and bitfield definitions

// Register: FSR0H_SHAD
volatile unsigned char           FSR0H_SHAD          @ 0xFE9;
// bit and bitfield definitions

// Register: FSR1L_SHAD
volatile unsigned char           FSR1L_SHAD          @ 0xFEA;
// bit and bitfield definitions

// Register: FSR1H_SHAD
volatile unsigned char           FSR1H_SHAD          @ 0xFEB;
// bit and bitfield definitions

// Register: STKPTR
// Current Stack pointer
volatile unsigned char           STKPTR              @ 0xFED;
// bit and bitfield definitions
#ifndef _LIB_BUILD
volatile union {
    struct {
        unsigned	STKPTR              : 5;
    };
} STKPTRbits @ 0xFED;
#endif

// Register: TOSL
// Top of Stack Low byte
volatile unsigned char           TOSL                @ 0xFEE;
// bit and bitfield definitions

// Register: TOSH
// Top of Stack High byte
volatile unsigned char           TOSH                @ 0xFEF;
// bit and bitfield definitions
#ifndef _LIB_BUILD
volatile union {
    struct {
        unsigned	TOSH                : 7;
    };
} TOSHbits @ 0xFEF;
#endif

#endif