// Version 2.32
// Generated 02/02/2021 GMT

/*
 * Copyright © 2021, Microchip Technology Inc. and its subsidiaries ("Microchip")
 * All rights reserved.
 * 
 * This software is developed by Microchip Technology Inc. and its subsidiaries ("Microchip").
 * 
 * Redistribution and use in source and binary forms, with or without modification, are
 * permitted provided that the following conditions are met:
 * 
 *     1. Redistributions of source code must retain the above copyright notice, this list of
 *        conditions and the following disclaimer.
 * 
 *     2. Redistributions in binary form must reproduce the above copyright notice, this list
 *        of conditions and the following disclaimer in the documentation and/or other
 *        materials provided with the distribution. Publication is not required when
 *        this file is used in an embedded application.
 * 
 *     3. Microchip's name may not be used to endorse or promote products derived from this
 *        software without specific prior written permission.
 * 
 * THIS SOFTWARE IS PROVIDED BY MICROCHIP "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES,
 * INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
 * PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL MICROCHIP BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING BUT NOT LIMITED TO
 * PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWSOEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF
 * THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#ifndef _PIC16F785_H_
#define _PIC16F785_H_

/*
 * C Header file for the Microchip PIC Microcontroller
 * PIC16F785
 */
#ifndef __XC8
#warning Header file pic16f785.h included directly. Use #include <xc.h> instead.
#endif

#include <__at.h>

/*
 * Register Definitions
 */

// Register: INDF
#define INDF INDF
extern volatile unsigned char           INDF                __at(0x000);
#ifndef _LIB_BUILD
asm("INDF equ 00h");
#endif

// Register: TMR0
#define TMR0 TMR0
extern volatile unsigned char           TMR0                __at(0x001);
#ifndef _LIB_BUILD
asm("TMR0 equ 01h");
#endif

// Register: PCL
#define PCL PCL
extern volatile unsigned char           PCL                 __at(0x002);
#ifndef _LIB_BUILD
asm("PCL equ 02h");
#endif

// Register: STATUS
#define STATUS STATUS
extern volatile unsigned char           STATUS              __at(0x003);
#ifndef _LIB_BUILD
asm("STATUS equ 03h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned C                      :1;
        unsigned DC                     :1;
        unsigned Z                      :1;
        unsigned nPD                    :1;
        unsigned nTO                    :1;
        unsigned RP                     :2;
        unsigned IRP                    :1;
    };
    struct {
        unsigned                        :5;
        unsigned RP0                    :1;
        unsigned RP1                    :1;
    };
    struct {
        unsigned CARRY                  :1;
        unsigned                        :1;
        unsigned ZERO                   :1;
    };
} STATUSbits_t;
extern volatile STATUSbits_t STATUSbits __at(0x003);
// bitfield macros
#define _STATUS_C_POSN                                      0x0
#define _STATUS_C_POSITION                                  0x0
#define _STATUS_C_SIZE                                      0x1
#define _STATUS_C_LENGTH                                    0x1
#define _STATUS_C_MASK                                      0x1
#define _STATUS_DC_POSN                                     0x1
#define _STATUS_DC_POSITION                                 0x1
#define _STATUS_DC_SIZE                                     0x1
#define _STATUS_DC_LENGTH                                   0x1
#define _STATUS_DC_MASK                                     0x2
#define _STATUS_Z_POSN                                      0x2
#define _STATUS_Z_POSITION                                  0x2
#define _STATUS_Z_SIZE                                      0x1
#define _STATUS_Z_LENGTH                                    0x1
#define _STATUS_Z_MASK                                      0x4
#define _STATUS_nPD_POSN                                    0x3
#define _STATUS_nPD_POSITION                                0x3
#define _STATUS_nPD_SIZE                                    0x1
#define _STATUS_nPD_LENGTH                                  0x1
#define _STATUS_nPD_MASK                                    0x8
#define _STATUS_nTO_POSN                                    0x4
#define _STATUS_nTO_POSITION                                0x4
#define _STATUS_nTO_SIZE                                    0x1
#define _STATUS_nTO_LENGTH                                  0x1
#define _STATUS_nTO_MASK                                    0x10
#define _STATUS_RP_POSN                                     0x5
#define _STATUS_RP_POSITION                                 0x5
#define _STATUS_RP_SIZE                                     0x2
#define _STATUS_RP_LENGTH                                   0x2
#define _STATUS_RP_MASK                                     0x60
#define _STATUS_IRP_POSN                                    0x7
#define _STATUS_IRP_POSITION                                0x7
#define _STATUS_IRP_SIZE                                    0x1
#define _STATUS_IRP_LENGTH                                  0x1
#define _STATUS_IRP_MASK                                    0x80
#define _STATUS_RP0_POSN                                    0x5
#define _STATUS_RP0_POSITION                                0x5
#define _STATUS_RP0_SIZE                                    0x1
#define _STATUS_RP0_LENGTH                                  0x1
#define _STATUS_RP0_MASK                                    0x20
#define _STATUS_RP1_POSN                                    0x6
#define _STATUS_RP1_POSITION                                0x6
#define _STATUS_RP1_SIZE                                    0x1
#define _STATUS_RP1_LENGTH                                  0x1
#define _STATUS_RP1_MASK                                    0x40
#define _STATUS_CARRY_POSN                                  0x0
#define _STATUS_CARRY_POSITION                              0x0
#define _STATUS_CARRY_SIZE                                  0x1
#define _STATUS_CARRY_LENGTH                                0x1
#define _STATUS_CARRY_MASK                                  0x1
#define _STATUS_ZERO_POSN                                   0x2
#define _STATUS_ZERO_POSITION                               0x2
#define _STATUS_ZERO_SIZE                                   0x1
#define _STATUS_ZERO_LENGTH                                 0x1
#define _STATUS_ZERO_MASK                                   0x4

// Register: FSR
#define FSR FSR
extern volatile unsigned char           FSR                 __at(0x004);
#ifndef _LIB_BUILD
asm("FSR equ 04h");
#endif

// Register: PORTA
#define PORTA PORTA
extern volatile unsigned char           PORTA               __at(0x005);
#ifndef _LIB_BUILD
asm("PORTA equ 05h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned RA0                    :1;
        unsigned RA1                    :1;
        unsigned RA2                    :1;
        unsigned RA3                    :1;
        unsigned RA4                    :1;
        unsigned RA5                    :1;
    };
} PORTAbits_t;
extern volatile PORTAbits_t PORTAbits __at(0x005);
// bitfield macros
#define _PORTA_RA0_POSN                                     0x0
#define _PORTA_RA0_POSITION                                 0x0
#define _PORTA_RA0_SIZE                                     0x1
#define _PORTA_RA0_LENGTH                                   0x1
#define _PORTA_RA0_MASK                                     0x1
#define _PORTA_RA1_POSN                                     0x1
#define _PORTA_RA1_POSITION                                 0x1
#define _PORTA_RA1_SIZE                                     0x1
#define _PORTA_RA1_LENGTH                                   0x1
#define _PORTA_RA1_MASK                                     0x2
#define _PORTA_RA2_POSN                                     0x2
#define _PORTA_RA2_POSITION                                 0x2
#define _PORTA_RA2_SIZE                                     0x1
#define _PORTA_RA2_LENGTH                                   0x1
#define _PORTA_RA2_MASK                                     0x4
#define _PORTA_RA3_POSN                                     0x3
#define _PORTA_RA3_POSITION                                 0x3
#define _PORTA_RA3_SIZE                                     0x1
#define _PORTA_RA3_LENGTH                                   0x1
#define _PORTA_RA3_MASK                                     0x8
#define _PORTA_RA4_POSN                                     0x4
#define _PORTA_RA4_POSITION                                 0x4
#define _PORTA_RA4_SIZE                                     0x1
#define _PORTA_RA4_LENGTH                                   0x1
#define _PORTA_RA4_MASK                                     0x10
#define _PORTA_RA5_POSN                                     0x5
#define _PORTA_RA5_POSITION                                 0x5
#define _PORTA_RA5_SIZE                                     0x1
#define _PORTA_RA5_LENGTH                                   0x1
#define _PORTA_RA5_MASK                                     0x20

// Register: PORTB
#define PORTB PORTB
extern volatile unsigned char           PORTB               __at(0x006);
#ifndef _LIB_BUILD
asm("PORTB equ 06h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :4;
        unsigned RB4                    :1;
        unsigned RB5                    :1;
        unsigned RB6                    :1;
        unsigned RB7                    :1;
    };
} PORTBbits_t;
extern volatile PORTBbits_t PORTBbits __at(0x006);
// bitfield macros
#define _PORTB_RB4_POSN                                     0x4
#define _PORTB_RB4_POSITION                                 0x4
#define _PORTB_RB4_SIZE                                     0x1
#define _PORTB_RB4_LENGTH                                   0x1
#define _PORTB_RB4_MASK                                     0x10
#define _PORTB_RB5_POSN                                     0x5
#define _PORTB_RB5_POSITION                                 0x5
#define _PORTB_RB5_SIZE                                     0x1
#define _PORTB_RB5_LENGTH                                   0x1
#define _PORTB_RB5_MASK                                     0x20
#define _PORTB_RB6_POSN                                     0x6
#define _PORTB_RB6_POSITION                                 0x6
#define _PORTB_RB6_SIZE                                     0x1
#define _PORTB_RB6_LENGTH                                   0x1
#define _PORTB_RB6_MASK                                     0x40
#define _PORTB_RB7_POSN                                     0x7
#define _PORTB_RB7_POSITION                                 0x7
#define _PORTB_RB7_SIZE                                     0x1
#define _PORTB_RB7_LENGTH                                   0x1
#define _PORTB_RB7_MASK                                     0x80

// Register: PORTC
#define PORTC PORTC
extern volatile unsigned char           PORTC               __at(0x007);
#ifndef _LIB_BUILD
asm("PORTC equ 07h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned RC0                    :1;
        unsigned RC1                    :1;
        unsigned RC2                    :1;
        unsigned RC3                    :1;
        unsigned RC4                    :1;
        unsigned RC5                    :1;
        unsigned RC6                    :1;
        unsigned RC7                    :1;
    };
} PORTCbits_t;
extern volatile PORTCbits_t PORTCbits __at(0x007);
// bitfield macros
#define _PORTC_RC0_POSN                                     0x0
#define _PORTC_RC0_POSITION                                 0x0
#define _PORTC_RC0_SIZE                                     0x1
#define _PORTC_RC0_LENGTH                                   0x1
#define _PORTC_RC0_MASK                                     0x1
#define _PORTC_RC1_POSN                                     0x1
#define _PORTC_RC1_POSITION                                 0x1
#define _PORTC_RC1_SIZE                                     0x1
#define _PORTC_RC1_LENGTH                                   0x1
#define _PORTC_RC1_MASK                                     0x2
#define _PORTC_RC2_POSN                                     0x2
#define _PORTC_RC2_POSITION                                 0x2
#define _PORTC_RC2_SIZE                                     0x1
#define _PORTC_RC2_LENGTH                                   0x1
#define _PORTC_RC2_MASK                                     0x4
#define _PORTC_RC3_POSN                                     0x3
#define _PORTC_RC3_POSITION                                 0x3
#define _PORTC_RC3_SIZE                                     0x1
#define _PORTC_RC3_LENGTH                                   0x1
#define _PORTC_RC3_MASK                                     0x8
#define _PORTC_RC4_POSN                                     0x4
#define _PORTC_RC4_POSITION                                 0x4
#define _PORTC_RC4_SIZE                                     0x1
#define _PORTC_RC4_LENGTH                                   0x1
#define _PORTC_RC4_MASK                                     0x10
#define _PORTC_RC5_POSN                                     0x5
#define _PORTC_RC5_POSITION                                 0x5
#define _PORTC_RC5_SIZE                                     0x1
#define _PORTC_RC5_LENGTH                                   0x1
#define _PORTC_RC5_MASK                                     0x20
#define _PORTC_RC6_POSN                                     0x6
#define _PORTC_RC6_POSITION                                 0x6
#define _PORTC_RC6_SIZE                                     0x1
#define _PORTC_RC6_LENGTH                                   0x1
#define _PORTC_RC6_MASK                                     0x40
#define _PORTC_RC7_POSN                                     0x7
#define _PORTC_RC7_POSITION                                 0x7
#define _PORTC_RC7_SIZE                                     0x1
#define _PORTC_RC7_LENGTH                                   0x1
#define _PORTC_RC7_MASK                                     0x80

// Register: PCLATH
#define PCLATH PCLATH
extern volatile unsigned char           PCLATH              __at(0x00A);
#ifndef _LIB_BUILD
asm("PCLATH equ 0Ah");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned PCLATH                 :5;
    };
} PCLATHbits_t;
extern volatile PCLATHbits_t PCLATHbits __at(0x00A);
// bitfield macros
#define _PCLATH_PCLATH_POSN                                 0x0
#define _PCLATH_PCLATH_POSITION                             0x0
#define _PCLATH_PCLATH_SIZE                                 0x5
#define _PCLATH_PCLATH_LENGTH                               0x5
#define _PCLATH_PCLATH_MASK                                 0x1F

// Register: INTCON
#define INTCON INTCON
extern volatile unsigned char           INTCON              __at(0x00B);
#ifndef _LIB_BUILD
asm("INTCON equ 0Bh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned RAIF                   :1;
        unsigned INTF                   :1;
        unsigned T0IF                   :1;
        unsigned RAIE                   :1;
        unsigned INTE                   :1;
        unsigned T0IE                   :1;
        unsigned PEIE                   :1;
        unsigned GIE                    :1;
    };
    struct {
        unsigned                        :2;
        unsigned TMR0IF                 :1;
        unsigned                        :2;
        unsigned TMR0IE                 :1;
    };
} INTCONbits_t;
extern volatile INTCONbits_t INTCONbits __at(0x00B);
// bitfield macros
#define _INTCON_RAIF_POSN                                   0x0
#define _INTCON_RAIF_POSITION                               0x0
#define _INTCON_RAIF_SIZE                                   0x1
#define _INTCON_RAIF_LENGTH                                 0x1
#define _INTCON_RAIF_MASK                                   0x1
#define _INTCON_INTF_POSN                                   0x1
#define _INTCON_INTF_POSITION                               0x1
#define _INTCON_INTF_SIZE                                   0x1
#define _INTCON_INTF_LENGTH                                 0x1
#define _INTCON_INTF_MASK                                   0x2
#define _INTCON_T0IF_POSN                                   0x2
#define _INTCON_T0IF_POSITION                               0x2
#define _INTCON_T0IF_SIZE                                   0x1
#define _INTCON_T0IF_LENGTH                                 0x1
#define _INTCON_T0IF_MASK                                   0x4
#define _INTCON_RAIE_POSN                                   0x3
#define _INTCON_RAIE_POSITION                               0x3
#define _INTCON_RAIE_SIZE                                   0x1
#define _INTCON_RAIE_LENGTH                                 0x1
#define _INTCON_RAIE_MASK                                   0x8
#define _INTCON_INTE_POSN                                   0x4
#define _INTCON_INTE_POSITION                               0x4
#define _INTCON_INTE_SIZE                                   0x1
#define _INTCON_INTE_LENGTH                                 0x1
#define _INTCON_INTE_MASK                                   0x10
#define _INTCON_T0IE_POSN                                   0x5
#define _INTCON_T0IE_POSITION                               0x5
#define _INTCON_T0IE_SIZE                                   0x1
#define _INTCON_T0IE_LENGTH                                 0x1
#define _INTCON_T0IE_MASK                                   0x20
#define _INTCON_PEIE_POSN                                   0x6
#define _INTCON_PEIE_POSITION                               0x6
#define _INTCON_PEIE_SIZE                                   0x1
#define _INTCON_PEIE_LENGTH                                 0x1
#define _INTCON_PEIE_MASK                                   0x40
#define _INTCON_GIE_POSN                                    0x7
#define _INTCON_GIE_POSITION                                0x7
#define _INTCON_GIE_SIZE                                    0x1
#define _INTCON_GIE_LENGTH                                  0x1
#define _INTCON_GIE_MASK                                    0x80
#define _INTCON_TMR0IF_POSN                                 0x2
#define _INTCON_TMR0IF_POSITION                             0x2
#define _INTCON_TMR0IF_SIZE                                 0x1
#define _INTCON_TMR0IF_LENGTH                               0x1
#define _INTCON_TMR0IF_MASK                                 0x4
#define _INTCON_TMR0IE_POSN                                 0x5
#define _INTCON_TMR0IE_POSITION                             0x5
#define _INTCON_TMR0IE_SIZE                                 0x1
#define _INTCON_TMR0IE_LENGTH                               0x1
#define _INTCON_TMR0IE_MASK                                 0x20

// Register: PIR1
#define PIR1 PIR1
extern volatile unsigned char           PIR1                __at(0x00C);
#ifndef _LIB_BUILD
asm("PIR1 equ 0Ch");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned TMR1IF                 :1;
        unsigned TMR2IF                 :1;
        unsigned OSFIF                  :1;
        unsigned C1IF                   :1;
        unsigned C2IF                   :1;
        unsigned CCP1IF                 :1;
        unsigned ADIF                   :1;
        unsigned EEIF                   :1;
    };
    struct {
        unsigned T1IF                   :1;
        unsigned T2IF                   :1;
    };
} PIR1bits_t;
extern volatile PIR1bits_t PIR1bits __at(0x00C);
// bitfield macros
#define _PIR1_TMR1IF_POSN                                   0x0
#define _PIR1_TMR1IF_POSITION                               0x0
#define _PIR1_TMR1IF_SIZE                                   0x1
#define _PIR1_TMR1IF_LENGTH                                 0x1
#define _PIR1_TMR1IF_MASK                                   0x1
#define _PIR1_TMR2IF_POSN                                   0x1
#define _PIR1_TMR2IF_POSITION                               0x1
#define _PIR1_TMR2IF_SIZE                                   0x1
#define _PIR1_TMR2IF_LENGTH                                 0x1
#define _PIR1_TMR2IF_MASK                                   0x2
#define _PIR1_OSFIF_POSN                                    0x2
#define _PIR1_OSFIF_POSITION                                0x2
#define _PIR1_OSFIF_SIZE                                    0x1
#define _PIR1_OSFIF_LENGTH                                  0x1
#define _PIR1_OSFIF_MASK                                    0x4
#define _PIR1_C1IF_POSN                                     0x3
#define _PIR1_C1IF_POSITION                                 0x3
#define _PIR1_C1IF_SIZE                                     0x1
#define _PIR1_C1IF_LENGTH                                   0x1
#define _PIR1_C1IF_MASK                                     0x8
#define _PIR1_C2IF_POSN                                     0x4
#define _PIR1_C2IF_POSITION                                 0x4
#define _PIR1_C2IF_SIZE                                     0x1
#define _PIR1_C2IF_LENGTH                                   0x1
#define _PIR1_C2IF_MASK                                     0x10
#define _PIR1_CCP1IF_POSN                                   0x5
#define _PIR1_CCP1IF_POSITION                               0x5
#define _PIR1_CCP1IF_SIZE                                   0x1
#define _PIR1_CCP1IF_LENGTH                                 0x1
#define _PIR1_CCP1IF_MASK                                   0x20
#define _PIR1_ADIF_POSN                                     0x6
#define _PIR1_ADIF_POSITION                                 0x6
#define _PIR1_ADIF_SIZE                                     0x1
#define _PIR1_ADIF_LENGTH                                   0x1
#define _PIR1_ADIF_MASK                                     0x40
#define _PIR1_EEIF_POSN                                     0x7
#define _PIR1_EEIF_POSITION                                 0x7
#define _PIR1_EEIF_SIZE                                     0x1
#define _PIR1_EEIF_LENGTH                                   0x1
#define _PIR1_EEIF_MASK                                     0x80
#define _PIR1_T1IF_POSN                                     0x0
#define _PIR1_T1IF_POSITION                                 0x0
#define _PIR1_T1IF_SIZE                                     0x1
#define _PIR1_T1IF_LENGTH                                   0x1
#define _PIR1_T1IF_MASK                                     0x1
#define _PIR1_T2IF_POSN                                     0x1
#define _PIR1_T2IF_POSITION                                 0x1
#define _PIR1_T2IF_SIZE                                     0x1
#define _PIR1_T2IF_LENGTH                                   0x1
#define _PIR1_T2IF_MASK                                     0x2

// Register: TMR1
#define TMR1 TMR1
extern volatile unsigned short          TMR1                __at(0x00E);
#ifndef _LIB_BUILD
asm("TMR1 equ 0Eh");
#endif

// Register: TMR1L
#define TMR1L TMR1L
extern volatile unsigned char           TMR1L               __at(0x00E);
#ifndef _LIB_BUILD
asm("TMR1L equ 0Eh");
#endif

// Register: TMR1H
#define TMR1H TMR1H
extern volatile unsigned char           TMR1H               __at(0x00F);
#ifndef _LIB_BUILD
asm("TMR1H equ 0Fh");
#endif

// Register: T1CON
#define T1CON T1CON
extern volatile unsigned char           T1CON               __at(0x010);
#ifndef _LIB_BUILD
asm("T1CON equ 010h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned TMR1ON                 :1;
        unsigned TMR1CS                 :1;
        unsigned nT1SYNC                :1;
        unsigned T1OSCEN                :1;
        unsigned T1CKPS                 :2;
        unsigned TMR1GE                 :1;
        unsigned T1GINV                 :1;
    };
    struct {
        unsigned                        :4;
        unsigned T1CKPS0                :1;
        unsigned T1CKPS1                :1;
        unsigned T1GE                   :1;
    };
} T1CONbits_t;
extern volatile T1CONbits_t T1CONbits __at(0x010);
// bitfield macros
#define _T1CON_TMR1ON_POSN                                  0x0
#define _T1CON_TMR1ON_POSITION                              0x0
#define _T1CON_TMR1ON_SIZE                                  0x1
#define _T1CON_TMR1ON_LENGTH                                0x1
#define _T1CON_TMR1ON_MASK                                  0x1
#define _T1CON_TMR1CS_POSN                                  0x1
#define _T1CON_TMR1CS_POSITION                              0x1
#define _T1CON_TMR1CS_SIZE                                  0x1
#define _T1CON_TMR1CS_LENGTH                                0x1
#define _T1CON_TMR1CS_MASK                                  0x2
#define _T1CON_nT1SYNC_POSN                                 0x2
#define _T1CON_nT1SYNC_POSITION                             0x2
#define _T1CON_nT1SYNC_SIZE                                 0x1
#define _T1CON_nT1SYNC_LENGTH                               0x1
#define _T1CON_nT1SYNC_MASK                                 0x4
#define _T1CON_T1OSCEN_POSN                                 0x3
#define _T1CON_T1OSCEN_POSITION                             0x3
#define _T1CON_T1OSCEN_SIZE                                 0x1
#define _T1CON_T1OSCEN_LENGTH                               0x1
#define _T1CON_T1OSCEN_MASK                                 0x8
#define _T1CON_T1CKPS_POSN                                  0x4
#define _T1CON_T1CKPS_POSITION                              0x4
#define _T1CON_T1CKPS_SIZE                                  0x2
#define _T1CON_T1CKPS_LENGTH                                0x2
#define _T1CON_T1CKPS_MASK                                  0x30
#define _T1CON_TMR1GE_POSN                                  0x6
#define _T1CON_TMR1GE_POSITION                              0x6
#define _T1CON_TMR1GE_SIZE                                  0x1
#define _T1CON_TMR1GE_LENGTH                                0x1
#define _T1CON_TMR1GE_MASK                                  0x40
#define _T1CON_T1GINV_POSN                                  0x7
#define _T1CON_T1GINV_POSITION                              0x7
#define _T1CON_T1GINV_SIZE                                  0x1
#define _T1CON_T1GINV_LENGTH                                0x1
#define _T1CON_T1GINV_MASK                                  0x80
#define _T1CON_T1CKPS0_POSN                                 0x4
#define _T1CON_T1CKPS0_POSITION                             0x4
#define _T1CON_T1CKPS0_SIZE                                 0x1
#define _T1CON_T1CKPS0_LENGTH                               0x1
#define _T1CON_T1CKPS0_MASK                                 0x10
#define _T1CON_T1CKPS1_POSN                                 0x5
#define _T1CON_T1CKPS1_POSITION                             0x5
#define _T1CON_T1CKPS1_SIZE                                 0x1
#define _T1CON_T1CKPS1_LENGTH                               0x1
#define _T1CON_T1CKPS1_MASK                                 0x20
#define _T1CON_T1GE_POSN                                    0x6
#define _T1CON_T1GE_POSITION                                0x6
#define _T1CON_T1GE_SIZE                                    0x1
#define _T1CON_T1GE_LENGTH                                  0x1
#define _T1CON_T1GE_MASK                                    0x40

// Register: TMR2
#define TMR2 TMR2
extern volatile unsigned char           TMR2                __at(0x011);
#ifndef _LIB_BUILD
asm("TMR2 equ 011h");
#endif

// Register: T2CON
#define T2CON T2CON
extern volatile unsigned char           T2CON               __at(0x012);
#ifndef _LIB_BUILD
asm("T2CON equ 012h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned T2CKPS                 :2;
        unsigned TMR2ON                 :1;
        unsigned TOUTPS                 :4;
    };
    struct {
        unsigned T2CKPS0                :1;
        unsigned T2CKPS1                :1;
        unsigned                        :1;
        unsigned TOUTPS0                :1;
        unsigned TOUTPS1                :1;
        unsigned TOUTPS2                :1;
        unsigned TOUTPS3                :1;
    };
} T2CONbits_t;
extern volatile T2CONbits_t T2CONbits __at(0x012);
// bitfield macros
#define _T2CON_T2CKPS_POSN                                  0x0
#define _T2CON_T2CKPS_POSITION                              0x0
#define _T2CON_T2CKPS_SIZE                                  0x2
#define _T2CON_T2CKPS_LENGTH                                0x2
#define _T2CON_T2CKPS_MASK                                  0x3
#define _T2CON_TMR2ON_POSN                                  0x2
#define _T2CON_TMR2ON_POSITION                              0x2
#define _T2CON_TMR2ON_SIZE                                  0x1
#define _T2CON_TMR2ON_LENGTH                                0x1
#define _T2CON_TMR2ON_MASK                                  0x4
#define _T2CON_TOUTPS_POSN                                  0x3
#define _T2CON_TOUTPS_POSITION                              0x3
#define _T2CON_TOUTPS_SIZE                                  0x4
#define _T2CON_TOUTPS_LENGTH                                0x4
#define _T2CON_TOUTPS_MASK                                  0x78
#define _T2CON_T2CKPS0_POSN                                 0x0
#define _T2CON_T2CKPS0_POSITION                             0x0
#define _T2CON_T2CKPS0_SIZE                                 0x1
#define _T2CON_T2CKPS0_LENGTH                               0x1
#define _T2CON_T2CKPS0_MASK                                 0x1
#define _T2CON_T2CKPS1_POSN                                 0x1
#define _T2CON_T2CKPS1_POSITION                             0x1
#define _T2CON_T2CKPS1_SIZE                                 0x1
#define _T2CON_T2CKPS1_LENGTH                               0x1
#define _T2CON_T2CKPS1_MASK                                 0x2
#define _T2CON_TOUTPS0_POSN                                 0x3
#define _T2CON_TOUTPS0_POSITION                             0x3
#define _T2CON_TOUTPS0_SIZE                                 0x1
#define _T2CON_TOUTPS0_LENGTH                               0x1
#define _T2CON_TOUTPS0_MASK                                 0x8
#define _T2CON_TOUTPS1_POSN                                 0x4
#define _T2CON_TOUTPS1_POSITION                             0x4
#define _T2CON_TOUTPS1_SIZE                                 0x1
#define _T2CON_TOUTPS1_LENGTH                               0x1
#define _T2CON_TOUTPS1_MASK                                 0x10
#define _T2CON_TOUTPS2_POSN                                 0x5
#define _T2CON_TOUTPS2_POSITION                             0x5
#define _T2CON_TOUTPS2_SIZE                                 0x1
#define _T2CON_TOUTPS2_LENGTH                               0x1
#define _T2CON_TOUTPS2_MASK                                 0x20
#define _T2CON_TOUTPS3_POSN                                 0x6
#define _T2CON_TOUTPS3_POSITION                             0x6
#define _T2CON_TOUTPS3_SIZE                                 0x1
#define _T2CON_TOUTPS3_LENGTH                               0x1
#define _T2CON_TOUTPS3_MASK                                 0x40

// Register: CCPR
#define CCPR CCPR
extern volatile unsigned short          CCPR                __at(0x013);
#ifndef _LIB_BUILD
asm("CCPR equ 013h");
#endif

// Register: CCPR1L
#define CCPR1L CCPR1L
extern volatile unsigned char           CCPR1L              __at(0x013);
#ifndef _LIB_BUILD
asm("CCPR1L equ 013h");
#endif

// Register: CCPR1H
#define CCPR1H CCPR1H
extern volatile unsigned char           CCPR1H              __at(0x014);
#ifndef _LIB_BUILD
asm("CCPR1H equ 014h");
#endif

// Register: CCP1CON
#define CCP1CON CCP1CON
extern volatile unsigned char           CCP1CON             __at(0x015);
#ifndef _LIB_BUILD
asm("CCP1CON equ 015h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned CCP1M                  :4;
        unsigned DCB                    :2;
    };
    struct {
        unsigned CCP1M0                 :1;
        unsigned CCP1M1                 :1;
        unsigned CCP1M2                 :1;
        unsigned CCP1M3                 :1;
        unsigned DC1B0                  :1;
        unsigned DC1B1                  :1;
    };
} CCP1CONbits_t;
extern volatile CCP1CONbits_t CCP1CONbits __at(0x015);
// bitfield macros
#define _CCP1CON_CCP1M_POSN                                 0x0
#define _CCP1CON_CCP1M_POSITION                             0x0
#define _CCP1CON_CCP1M_SIZE                                 0x4
#define _CCP1CON_CCP1M_LENGTH                               0x4
#define _CCP1CON_CCP1M_MASK                                 0xF
#define _CCP1CON_DCB_POSN                                   0x4
#define _CCP1CON_DCB_POSITION                               0x4
#define _CCP1CON_DCB_SIZE                                   0x2
#define _CCP1CON_DCB_LENGTH                                 0x2
#define _CCP1CON_DCB_MASK                                   0x30
#define _CCP1CON_CCP1M0_POSN                                0x0
#define _CCP1CON_CCP1M0_POSITION                            0x0
#define _CCP1CON_CCP1M0_SIZE                                0x1
#define _CCP1CON_CCP1M0_LENGTH                              0x1
#define _CCP1CON_CCP1M0_MASK                                0x1
#define _CCP1CON_CCP1M1_POSN                                0x1
#define _CCP1CON_CCP1M1_POSITION                            0x1
#define _CCP1CON_CCP1M1_SIZE                                0x1
#define _CCP1CON_CCP1M1_LENGTH                              0x1
#define _CCP1CON_CCP1M1_MASK                                0x2
#define _CCP1CON_CCP1M2_POSN                                0x2
#define _CCP1CON_CCP1M2_POSITION                            0x2
#define _CCP1CON_CCP1M2_SIZE                                0x1
#define _CCP1CON_CCP1M2_LENGTH                              0x1
#define _CCP1CON_CCP1M2_MASK                                0x4
#define _CCP1CON_CCP1M3_POSN                                0x3
#define _CCP1CON_CCP1M3_POSITION                            0x3
#define _CCP1CON_CCP1M3_SIZE                                0x1
#define _CCP1CON_CCP1M3_LENGTH                              0x1
#define _CCP1CON_CCP1M3_MASK                                0x8
#define _CCP1CON_DC1B0_POSN                                 0x4
#define _CCP1CON_DC1B0_POSITION                             0x4
#define _CCP1CON_DC1B0_SIZE                                 0x1
#define _CCP1CON_DC1B0_LENGTH                               0x1
#define _CCP1CON_DC1B0_MASK                                 0x10
#define _CCP1CON_DC1B1_POSN                                 0x5
#define _CCP1CON_DC1B1_POSITION                             0x5
#define _CCP1CON_DC1B1_SIZE                                 0x1
#define _CCP1CON_DC1B1_LENGTH                               0x1
#define _CCP1CON_DC1B1_MASK                                 0x20

// Register: WDTCON
#define WDTCON WDTCON
extern volatile unsigned char           WDTCON              __at(0x018);
#ifndef _LIB_BUILD
asm("WDTCON equ 018h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned SWDTEN                 :1;
        unsigned WDTPS                  :4;
    };
    struct {
        unsigned                        :1;
        unsigned WDTPS0                 :1;
        unsigned WDTPS1                 :1;
        unsigned WDTPS2                 :1;
        unsigned WDTPS3                 :1;
    };
} WDTCONbits_t;
extern volatile WDTCONbits_t WDTCONbits __at(0x018);
// bitfield macros
#define _WDTCON_SWDTEN_POSN                                 0x0
#define _WDTCON_SWDTEN_POSITION                             0x0
#define _WDTCON_SWDTEN_SIZE                                 0x1
#define _WDTCON_SWDTEN_LENGTH                               0x1
#define _WDTCON_SWDTEN_MASK                                 0x1
#define _WDTCON_WDTPS_POSN                                  0x1
#define _WDTCON_WDTPS_POSITION                              0x1
#define _WDTCON_WDTPS_SIZE                                  0x4
#define _WDTCON_WDTPS_LENGTH                                0x4
#define _WDTCON_WDTPS_MASK                                  0x1E
#define _WDTCON_WDTPS0_POSN                                 0x1
#define _WDTCON_WDTPS0_POSITION                             0x1
#define _WDTCON_WDTPS0_SIZE                                 0x1
#define _WDTCON_WDTPS0_LENGTH                               0x1
#define _WDTCON_WDTPS0_MASK                                 0x2
#define _WDTCON_WDTPS1_POSN                                 0x2
#define _WDTCON_WDTPS1_POSITION                             0x2
#define _WDTCON_WDTPS1_SIZE                                 0x1
#define _WDTCON_WDTPS1_LENGTH                               0x1
#define _WDTCON_WDTPS1_MASK                                 0x4
#define _WDTCON_WDTPS2_POSN                                 0x3
#define _WDTCON_WDTPS2_POSITION                             0x3
#define _WDTCON_WDTPS2_SIZE                                 0x1
#define _WDTCON_WDTPS2_LENGTH                               0x1
#define _WDTCON_WDTPS2_MASK                                 0x8
#define _WDTCON_WDTPS3_POSN                                 0x4
#define _WDTCON_WDTPS3_POSITION                             0x4
#define _WDTCON_WDTPS3_SIZE                                 0x1
#define _WDTCON_WDTPS3_LENGTH                               0x1
#define _WDTCON_WDTPS3_MASK                                 0x10

// Register: ADRESH
#define ADRESH ADRESH
extern volatile unsigned char           ADRESH              __at(0x01E);
#ifndef _LIB_BUILD
asm("ADRESH equ 01Eh");
#endif

// Register: ADCON0
#define ADCON0 ADCON0
extern volatile unsigned char           ADCON0              __at(0x01F);
#ifndef _LIB_BUILD
asm("ADCON0 equ 01Fh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned ADON                   :1;
        unsigned GO_nDONE               :1;
        unsigned CHS                    :4;
        unsigned VCFG                   :1;
        unsigned ADFM                   :1;
    };
    struct {
        unsigned                        :1;
        unsigned GO                     :1;
        unsigned CHS0                   :1;
        unsigned CHS1                   :1;
        unsigned CHS2                   :1;
        unsigned CHS3                   :1;
    };
    struct {
        unsigned                        :1;
        unsigned nDONE                  :1;
    };
    struct {
        unsigned                        :1;
        unsigned GO_DONE                :1;
    };
} ADCON0bits_t;
extern volatile ADCON0bits_t ADCON0bits __at(0x01F);
// bitfield macros
#define _ADCON0_ADON_POSN                                   0x0
#define _ADCON0_ADON_POSITION                               0x0
#define _ADCON0_ADON_SIZE                                   0x1
#define _ADCON0_ADON_LENGTH                                 0x1
#define _ADCON0_ADON_MASK                                   0x1
#define _ADCON0_GO_nDONE_POSN                               0x1
#define _ADCON0_GO_nDONE_POSITION                           0x1
#define _ADCON0_GO_nDONE_SIZE                               0x1
#define _ADCON0_GO_nDONE_LENGTH                             0x1
#define _ADCON0_GO_nDONE_MASK                               0x2
#define _ADCON0_CHS_POSN                                    0x2
#define _ADCON0_CHS_POSITION                                0x2
#define _ADCON0_CHS_SIZE                                    0x4
#define _ADCON0_CHS_LENGTH                                  0x4
#define _ADCON0_CHS_MASK                                    0x3C
#define _ADCON0_VCFG_POSN                                   0x6
#define _ADCON0_VCFG_POSITION                               0x6
#define _ADCON0_VCFG_SIZE                                   0x1
#define _ADCON0_VCFG_LENGTH                                 0x1
#define _ADCON0_VCFG_MASK                                   0x40
#define _ADCON0_ADFM_POSN                                   0x7
#define _ADCON0_ADFM_POSITION                               0x7
#define _ADCON0_ADFM_SIZE                                   0x1
#define _ADCON0_ADFM_LENGTH                                 0x1
#define _ADCON0_ADFM_MASK                                   0x80
#define _ADCON0_GO_POSN                                     0x1
#define _ADCON0_GO_POSITION                                 0x1
#define _ADCON0_GO_SIZE                                     0x1
#define _ADCON0_GO_LENGTH                                   0x1
#define _ADCON0_GO_MASK                                     0x2
#define _ADCON0_CHS0_POSN                                   0x2
#define _ADCON0_CHS0_POSITION                               0x2
#define _ADCON0_CHS0_SIZE                                   0x1
#define _ADCON0_CHS0_LENGTH                                 0x1
#define _ADCON0_CHS0_MASK                                   0x4
#define _ADCON0_CHS1_POSN                                   0x3
#define _ADCON0_CHS1_POSITION                               0x3
#define _ADCON0_CHS1_SIZE                                   0x1
#define _ADCON0_CHS1_LENGTH                                 0x1
#define _ADCON0_CHS1_MASK                                   0x8
#define _ADCON0_CHS2_POSN                                   0x4
#define _ADCON0_CHS2_POSITION                               0x4
#define _ADCON0_CHS2_SIZE                                   0x1
#define _ADCON0_CHS2_LENGTH                                 0x1
#define _ADCON0_CHS2_MASK                                   0x10
#define _ADCON0_CHS3_POSN                                   0x5
#define _ADCON0_CHS3_POSITION                               0x5
#define _ADCON0_CHS3_SIZE                                   0x1
#define _ADCON0_CHS3_LENGTH                                 0x1
#define _ADCON0_CHS3_MASK                                   0x20
#define _ADCON0_nDONE_POSN                                  0x1
#define _ADCON0_nDONE_POSITION                              0x1
#define _ADCON0_nDONE_SIZE                                  0x1
#define _ADCON0_nDONE_LENGTH                                0x1
#define _ADCON0_nDONE_MASK                                  0x2
#define _ADCON0_GO_DONE_POSN                                0x1
#define _ADCON0_GO_DONE_POSITION                            0x1
#define _ADCON0_GO_DONE_SIZE                                0x1
#define _ADCON0_GO_DONE_LENGTH                              0x1
#define _ADCON0_GO_DONE_MASK                                0x2

// Register: OPTION_REG
#define OPTION_REG OPTION_REG
extern volatile unsigned char           OPTION_REG          __at(0x081);
#ifndef _LIB_BUILD
asm("OPTION_REG equ 081h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned PS                     :3;
        unsigned PSA                    :1;
        unsigned T0SE                   :1;
        unsigned T0CS                   :1;
        unsigned INTEDG                 :1;
        unsigned nRAPU                  :1;
    };
    struct {
        unsigned PS0                    :1;
        unsigned PS1                    :1;
        unsigned PS2                    :1;
    };
} OPTION_REGbits_t;
extern volatile OPTION_REGbits_t OPTION_REGbits __at(0x081);
// bitfield macros
#define _OPTION_REG_PS_POSN                                 0x0
#define _OPTION_REG_PS_POSITION                             0x0
#define _OPTION_REG_PS_SIZE                                 0x3
#define _OPTION_REG_PS_LENGTH                               0x3
#define _OPTION_REG_PS_MASK                                 0x7
#define _OPTION_REG_PSA_POSN                                0x3
#define _OPTION_REG_PSA_POSITION                            0x3
#define _OPTION_REG_PSA_SIZE                                0x1
#define _OPTION_REG_PSA_LENGTH                              0x1
#define _OPTION_REG_PSA_MASK                                0x8
#define _OPTION_REG_T0SE_POSN                               0x4
#define _OPTION_REG_T0SE_POSITION                           0x4
#define _OPTION_REG_T0SE_SIZE                               0x1
#define _OPTION_REG_T0SE_LENGTH                             0x1
#define _OPTION_REG_T0SE_MASK                               0x10
#define _OPTION_REG_T0CS_POSN                               0x5
#define _OPTION_REG_T0CS_POSITION                           0x5
#define _OPTION_REG_T0CS_SIZE                               0x1
#define _OPTION_REG_T0CS_LENGTH                             0x1
#define _OPTION_REG_T0CS_MASK                               0x20
#define _OPTION_REG_INTEDG_POSN                             0x6
#define _OPTION_REG_INTEDG_POSITION                         0x6
#define _OPTION_REG_INTEDG_SIZE                             0x1
#define _OPTION_REG_INTEDG_LENGTH                           0x1
#define _OPTION_REG_INTEDG_MASK                             0x40
#define _OPTION_REG_nRAPU_POSN                              0x7
#define _OPTION_REG_nRAPU_POSITION                          0x7
#define _OPTION_REG_nRAPU_SIZE                              0x1
#define _OPTION_REG_nRAPU_LENGTH                            0x1
#define _OPTION_REG_nRAPU_MASK                              0x80
#define _OPTION_REG_PS0_POSN                                0x0
#define _OPTION_REG_PS0_POSITION                            0x0
#define _OPTION_REG_PS0_SIZE                                0x1
#define _OPTION_REG_PS0_LENGTH                              0x1
#define _OPTION_REG_PS0_MASK                                0x1
#define _OPTION_REG_PS1_POSN                                0x1
#define _OPTION_REG_PS1_POSITION                            0x1
#define _OPTION_REG_PS1_SIZE                                0x1
#define _OPTION_REG_PS1_LENGTH                              0x1
#define _OPTION_REG_PS1_MASK                                0x2
#define _OPTION_REG_PS2_POSN                                0x2
#define _OPTION_REG_PS2_POSITION                            0x2
#define _OPTION_REG_PS2_SIZE                                0x1
#define _OPTION_REG_PS2_LENGTH                              0x1
#define _OPTION_REG_PS2_MASK                                0x4

// Register: TRISA
#define TRISA TRISA
extern volatile unsigned char           TRISA               __at(0x085);
#ifndef _LIB_BUILD
asm("TRISA equ 085h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned TRISA0                 :1;
        unsigned TRISA1                 :1;
        unsigned TRISA2                 :1;
        unsigned TRISA3                 :1;
        unsigned TRISA4                 :1;
        unsigned TRISA5                 :1;
    };
} TRISAbits_t;
extern volatile TRISAbits_t TRISAbits __at(0x085);
// bitfield macros
#define _TRISA_TRISA0_POSN                                  0x0
#define _TRISA_TRISA0_POSITION                              0x0
#define _TRISA_TRISA0_SIZE                                  0x1
#define _TRISA_TRISA0_LENGTH                                0x1
#define _TRISA_TRISA0_MASK                                  0x1
#define _TRISA_TRISA1_POSN                                  0x1
#define _TRISA_TRISA1_POSITION                              0x1
#define _TRISA_TRISA1_SIZE                                  0x1
#define _TRISA_TRISA1_LENGTH                                0x1
#define _TRISA_TRISA1_MASK                                  0x2
#define _TRISA_TRISA2_POSN                                  0x2
#define _TRISA_TRISA2_POSITION                              0x2
#define _TRISA_TRISA2_SIZE                                  0x1
#define _TRISA_TRISA2_LENGTH                                0x1
#define _TRISA_TRISA2_MASK                                  0x4
#define _TRISA_TRISA3_POSN                                  0x3
#define _TRISA_TRISA3_POSITION                              0x3
#define _TRISA_TRISA3_SIZE                                  0x1
#define _TRISA_TRISA3_LENGTH                                0x1
#define _TRISA_TRISA3_MASK                                  0x8
#define _TRISA_TRISA4_POSN                                  0x4
#define _TRISA_TRISA4_POSITION                              0x4
#define _TRISA_TRISA4_SIZE                                  0x1
#define _TRISA_TRISA4_LENGTH                                0x1
#define _TRISA_TRISA4_MASK                                  0x10
#define _TRISA_TRISA5_POSN                                  0x5
#define _TRISA_TRISA5_POSITION                              0x5
#define _TRISA_TRISA5_SIZE                                  0x1
#define _TRISA_TRISA5_LENGTH                                0x1
#define _TRISA_TRISA5_MASK                                  0x20

// Register: TRISB
#define TRISB TRISB
extern volatile unsigned char           TRISB               __at(0x086);
#ifndef _LIB_BUILD
asm("TRISB equ 086h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :4;
        unsigned TRISB4                 :1;
        unsigned TRISB5                 :1;
        unsigned TRISB6                 :1;
        unsigned TRISB7                 :1;
    };
} TRISBbits_t;
extern volatile TRISBbits_t TRISBbits __at(0x086);
// bitfield macros
#define _TRISB_TRISB4_POSN                                  0x4
#define _TRISB_TRISB4_POSITION                              0x4
#define _TRISB_TRISB4_SIZE                                  0x1
#define _TRISB_TRISB4_LENGTH                                0x1
#define _TRISB_TRISB4_MASK                                  0x10
#define _TRISB_TRISB5_POSN                                  0x5
#define _TRISB_TRISB5_POSITION                              0x5
#define _TRISB_TRISB5_SIZE                                  0x1
#define _TRISB_TRISB5_LENGTH                                0x1
#define _TRISB_TRISB5_MASK                                  0x20
#define _TRISB_TRISB6_POSN                                  0x6
#define _TRISB_TRISB6_POSITION                              0x6
#define _TRISB_TRISB6_SIZE                                  0x1
#define _TRISB_TRISB6_LENGTH                                0x1
#define _TRISB_TRISB6_MASK                                  0x40
#define _TRISB_TRISB7_POSN                                  0x7
#define _TRISB_TRISB7_POSITION                              0x7
#define _TRISB_TRISB7_SIZE                                  0x1
#define _TRISB_TRISB7_LENGTH                                0x1
#define _TRISB_TRISB7_MASK                                  0x80

// Register: TRISC
#define TRISC TRISC
extern volatile unsigned char           TRISC               __at(0x087);
#ifndef _LIB_BUILD
asm("TRISC equ 087h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned TRISC0                 :1;
        unsigned TRISC1                 :1;
        unsigned TRISC2                 :1;
        unsigned TRISC3                 :1;
        unsigned TRISC4                 :1;
        unsigned TRISC5                 :1;
        unsigned TRISC6                 :1;
        unsigned TRISC7                 :1;
    };
} TRISCbits_t;
extern volatile TRISCbits_t TRISCbits __at(0x087);
// bitfield macros
#define _TRISC_TRISC0_POSN                                  0x0
#define _TRISC_TRISC0_POSITION                              0x0
#define _TRISC_TRISC0_SIZE                                  0x1
#define _TRISC_TRISC0_LENGTH                                0x1
#define _TRISC_TRISC0_MASK                                  0x1
#define _TRISC_TRISC1_POSN                                  0x1
#define _TRISC_TRISC1_POSITION                              0x1
#define _TRISC_TRISC1_SIZE                                  0x1
#define _TRISC_TRISC1_LENGTH                                0x1
#define _TRISC_TRISC1_MASK                                  0x2
#define _TRISC_TRISC2_POSN                                  0x2
#define _TRISC_TRISC2_POSITION                              0x2
#define _TRISC_TRISC2_SIZE                                  0x1
#define _TRISC_TRISC2_LENGTH                                0x1
#define _TRISC_TRISC2_MASK                                  0x4
#define _TRISC_TRISC3_POSN                                  0x3
#define _TRISC_TRISC3_POSITION                              0x3
#define _TRISC_TRISC3_SIZE                                  0x1
#define _TRISC_TRISC3_LENGTH                                0x1
#define _TRISC_TRISC3_MASK                                  0x8
#define _TRISC_TRISC4_POSN                                  0x4
#define _TRISC_TRISC4_POSITION                              0x4
#define _TRISC_TRISC4_SIZE                                  0x1
#define _TRISC_TRISC4_LENGTH                                0x1
#define _TRISC_TRISC4_MASK                                  0x10
#define _TRISC_TRISC5_POSN                                  0x5
#define _TRISC_TRISC5_POSITION                              0x5
#define _TRISC_TRISC5_SIZE                                  0x1
#define _TRISC_TRISC5_LENGTH                                0x1
#define _TRISC_TRISC5_MASK                                  0x20
#define _TRISC_TRISC6_POSN                                  0x6
#define _TRISC_TRISC6_POSITION                              0x6
#define _TRISC_TRISC6_SIZE                                  0x1
#define _TRISC_TRISC6_LENGTH                                0x1
#define _TRISC_TRISC6_MASK                                  0x40
#define _TRISC_TRISC7_POSN                                  0x7
#define _TRISC_TRISC7_POSITION                              0x7
#define _TRISC_TRISC7_SIZE                                  0x1
#define _TRISC_TRISC7_LENGTH                                0x1
#define _TRISC_TRISC7_MASK                                  0x80

// Register: PIE1
#define PIE1 PIE1
extern volatile unsigned char           PIE1                __at(0x08C);
#ifndef _LIB_BUILD
asm("PIE1 equ 08Ch");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned TMR1IE                 :1;
        unsigned TMR2IE                 :1;
        unsigned OSFIE                  :1;
        unsigned C1IE                   :1;
        unsigned C2IE                   :1;
        unsigned CCP1IE                 :1;
        unsigned ADIE                   :1;
        unsigned EEIE                   :1;
    };
    struct {
        unsigned T1IE                   :1;
        unsigned T2IE                   :1;
    };
} PIE1bits_t;
extern volatile PIE1bits_t PIE1bits __at(0x08C);
// bitfield macros
#define _PIE1_TMR1IE_POSN                                   0x0
#define _PIE1_TMR1IE_POSITION                               0x0
#define _PIE1_TMR1IE_SIZE                                   0x1
#define _PIE1_TMR1IE_LENGTH                                 0x1
#define _PIE1_TMR1IE_MASK                                   0x1
#define _PIE1_TMR2IE_POSN                                   0x1
#define _PIE1_TMR2IE_POSITION                               0x1
#define _PIE1_TMR2IE_SIZE                                   0x1
#define _PIE1_TMR2IE_LENGTH                                 0x1
#define _PIE1_TMR2IE_MASK                                   0x2
#define _PIE1_OSFIE_POSN                                    0x2
#define _PIE1_OSFIE_POSITION                                0x2
#define _PIE1_OSFIE_SIZE                                    0x1
#define _PIE1_OSFIE_LENGTH                                  0x1
#define _PIE1_OSFIE_MASK                                    0x4
#define _PIE1_C1IE_POSN                                     0x3
#define _PIE1_C1IE_POSITION                                 0x3
#define _PIE1_C1IE_SIZE                                     0x1
#define _PIE1_C1IE_LENGTH                                   0x1
#define _PIE1_C1IE_MASK                                     0x8
#define _PIE1_C2IE_POSN                                     0x4
#define _PIE1_C2IE_POSITION                                 0x4
#define _PIE1_C2IE_SIZE                                     0x1
#define _PIE1_C2IE_LENGTH                                   0x1
#define _PIE1_C2IE_MASK                                     0x10
#define _PIE1_CCP1IE_POSN                                   0x5
#define _PIE1_CCP1IE_POSITION                               0x5
#define _PIE1_CCP1IE_SIZE                                   0x1
#define _PIE1_CCP1IE_LENGTH                                 0x1
#define _PIE1_CCP1IE_MASK                                   0x20
#define _PIE1_ADIE_POSN                                     0x6
#define _PIE1_ADIE_POSITION                                 0x6
#define _PIE1_ADIE_SIZE                                     0x1
#define _PIE1_ADIE_LENGTH                                   0x1
#define _PIE1_ADIE_MASK                                     0x40
#define _PIE1_EEIE_POSN                                     0x7
#define _PIE1_EEIE_POSITION                                 0x7
#define _PIE1_EEIE_SIZE                                     0x1
#define _PIE1_EEIE_LENGTH                                   0x1
#define _PIE1_EEIE_MASK                                     0x80
#define _PIE1_T1IE_POSN                                     0x0
#define _PIE1_T1IE_POSITION                                 0x0
#define _PIE1_T1IE_SIZE                                     0x1
#define _PIE1_T1IE_LENGTH                                   0x1
#define _PIE1_T1IE_MASK                                     0x1
#define _PIE1_T2IE_POSN                                     0x1
#define _PIE1_T2IE_POSITION                                 0x1
#define _PIE1_T2IE_SIZE                                     0x1
#define _PIE1_T2IE_LENGTH                                   0x1
#define _PIE1_T2IE_MASK                                     0x2

// Register: PCON
#define PCON PCON
extern volatile unsigned char           PCON                __at(0x08E);
#ifndef _LIB_BUILD
asm("PCON equ 08Eh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned nBOR                   :1;
        unsigned nPOR                   :1;
        unsigned                        :2;
        unsigned SBOREN                 :1;
    };
    struct {
        unsigned nBOD                   :1;
        unsigned                        :3;
        unsigned SBODEN                 :1;
    };
} PCONbits_t;
extern volatile PCONbits_t PCONbits __at(0x08E);
// bitfield macros
#define _PCON_nBOR_POSN                                     0x0
#define _PCON_nBOR_POSITION                                 0x0
#define _PCON_nBOR_SIZE                                     0x1
#define _PCON_nBOR_LENGTH                                   0x1
#define _PCON_nBOR_MASK                                     0x1
#define _PCON_nPOR_POSN                                     0x1
#define _PCON_nPOR_POSITION                                 0x1
#define _PCON_nPOR_SIZE                                     0x1
#define _PCON_nPOR_LENGTH                                   0x1
#define _PCON_nPOR_MASK                                     0x2
#define _PCON_SBOREN_POSN                                   0x4
#define _PCON_SBOREN_POSITION                               0x4
#define _PCON_SBOREN_SIZE                                   0x1
#define _PCON_SBOREN_LENGTH                                 0x1
#define _PCON_SBOREN_MASK                                   0x10
#define _PCON_nBOD_POSN                                     0x0
#define _PCON_nBOD_POSITION                                 0x0
#define _PCON_nBOD_SIZE                                     0x1
#define _PCON_nBOD_LENGTH                                   0x1
#define _PCON_nBOD_MASK                                     0x1
#define _PCON_SBODEN_POSN                                   0x4
#define _PCON_SBODEN_POSITION                               0x4
#define _PCON_SBODEN_SIZE                                   0x1
#define _PCON_SBODEN_LENGTH                                 0x1
#define _PCON_SBODEN_MASK                                   0x10

// Register: OSCCON
#define OSCCON OSCCON
extern volatile unsigned char           OSCCON              __at(0x08F);
#ifndef _LIB_BUILD
asm("OSCCON equ 08Fh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned SCS                    :1;
        unsigned LTS                    :1;
        unsigned HTS                    :1;
        unsigned OSTS                   :1;
        unsigned IRCF                   :3;
    };
    struct {
        unsigned                        :4;
        unsigned IRCF0                  :1;
        unsigned IRCF1                  :1;
        unsigned IRCF2                  :1;
    };
} OSCCONbits_t;
extern volatile OSCCONbits_t OSCCONbits __at(0x08F);
// bitfield macros
#define _OSCCON_SCS_POSN                                    0x0
#define _OSCCON_SCS_POSITION                                0x0
#define _OSCCON_SCS_SIZE                                    0x1
#define _OSCCON_SCS_LENGTH                                  0x1
#define _OSCCON_SCS_MASK                                    0x1
#define _OSCCON_LTS_POSN                                    0x1
#define _OSCCON_LTS_POSITION                                0x1
#define _OSCCON_LTS_SIZE                                    0x1
#define _OSCCON_LTS_LENGTH                                  0x1
#define _OSCCON_LTS_MASK                                    0x2
#define _OSCCON_HTS_POSN                                    0x2
#define _OSCCON_HTS_POSITION                                0x2
#define _OSCCON_HTS_SIZE                                    0x1
#define _OSCCON_HTS_LENGTH                                  0x1
#define _OSCCON_HTS_MASK                                    0x4
#define _OSCCON_OSTS_POSN                                   0x3
#define _OSCCON_OSTS_POSITION                               0x3
#define _OSCCON_OSTS_SIZE                                   0x1
#define _OSCCON_OSTS_LENGTH                                 0x1
#define _OSCCON_OSTS_MASK                                   0x8
#define _OSCCON_IRCF_POSN                                   0x4
#define _OSCCON_IRCF_POSITION                               0x4
#define _OSCCON_IRCF_SIZE                                   0x3
#define _OSCCON_IRCF_LENGTH                                 0x3
#define _OSCCON_IRCF_MASK                                   0x70
#define _OSCCON_IRCF0_POSN                                  0x4
#define _OSCCON_IRCF0_POSITION                              0x4
#define _OSCCON_IRCF0_SIZE                                  0x1
#define _OSCCON_IRCF0_LENGTH                                0x1
#define _OSCCON_IRCF0_MASK                                  0x10
#define _OSCCON_IRCF1_POSN                                  0x5
#define _OSCCON_IRCF1_POSITION                              0x5
#define _OSCCON_IRCF1_SIZE                                  0x1
#define _OSCCON_IRCF1_LENGTH                                0x1
#define _OSCCON_IRCF1_MASK                                  0x20
#define _OSCCON_IRCF2_POSN                                  0x6
#define _OSCCON_IRCF2_POSITION                              0x6
#define _OSCCON_IRCF2_SIZE                                  0x1
#define _OSCCON_IRCF2_LENGTH                                0x1
#define _OSCCON_IRCF2_MASK                                  0x40

// Register: OSCTUNE
#define OSCTUNE OSCTUNE
extern volatile unsigned char           OSCTUNE             __at(0x090);
#ifndef _LIB_BUILD
asm("OSCTUNE equ 090h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned TUN                    :5;
    };
    struct {
        unsigned TUN0                   :1;
        unsigned TUN1                   :1;
        unsigned TUN2                   :1;
        unsigned TUN3                   :1;
        unsigned TUN4                   :1;
    };
} OSCTUNEbits_t;
extern volatile OSCTUNEbits_t OSCTUNEbits __at(0x090);
// bitfield macros
#define _OSCTUNE_TUN_POSN                                   0x0
#define _OSCTUNE_TUN_POSITION                               0x0
#define _OSCTUNE_TUN_SIZE                                   0x5
#define _OSCTUNE_TUN_LENGTH                                 0x5
#define _OSCTUNE_TUN_MASK                                   0x1F
#define _OSCTUNE_TUN0_POSN                                  0x0
#define _OSCTUNE_TUN0_POSITION                              0x0
#define _OSCTUNE_TUN0_SIZE                                  0x1
#define _OSCTUNE_TUN0_LENGTH                                0x1
#define _OSCTUNE_TUN0_MASK                                  0x1
#define _OSCTUNE_TUN1_POSN                                  0x1
#define _OSCTUNE_TUN1_POSITION                              0x1
#define _OSCTUNE_TUN1_SIZE                                  0x1
#define _OSCTUNE_TUN1_LENGTH                                0x1
#define _OSCTUNE_TUN1_MASK                                  0x2
#define _OSCTUNE_TUN2_POSN                                  0x2
#define _OSCTUNE_TUN2_POSITION                              0x2
#define _OSCTUNE_TUN2_SIZE                                  0x1
#define _OSCTUNE_TUN2_LENGTH                                0x1
#define _OSCTUNE_TUN2_MASK                                  0x4
#define _OSCTUNE_TUN3_POSN                                  0x3
#define _OSCTUNE_TUN3_POSITION                              0x3
#define _OSCTUNE_TUN3_SIZE                                  0x1
#define _OSCTUNE_TUN3_LENGTH                                0x1
#define _OSCTUNE_TUN3_MASK                                  0x8
#define _OSCTUNE_TUN4_POSN                                  0x4
#define _OSCTUNE_TUN4_POSITION                              0x4
#define _OSCTUNE_TUN4_SIZE                                  0x1
#define _OSCTUNE_TUN4_LENGTH                                0x1
#define _OSCTUNE_TUN4_MASK                                  0x10

// Register: ANSEL0
#define ANSEL0 ANSEL0
extern volatile unsigned char           ANSEL0              __at(0x091);
#ifndef _LIB_BUILD
asm("ANSEL0 equ 091h");
#endif
// aliases
extern volatile unsigned char           ANSEL               __at(0x091);
#ifndef _LIB_BUILD
asm("ANSEL equ 091h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned ANS0                   :1;
        unsigned ANS1                   :1;
        unsigned ANS2                   :1;
        unsigned ANS3                   :1;
        unsigned ANS4                   :1;
        unsigned ANS5                   :1;
        unsigned ANS6                   :1;
        unsigned ANS7                   :1;
    };
} ANSEL0bits_t;
extern volatile ANSEL0bits_t ANSEL0bits __at(0x091);
// bitfield macros
#define _ANSEL0_ANS0_POSN                                   0x0
#define _ANSEL0_ANS0_POSITION                               0x0
#define _ANSEL0_ANS0_SIZE                                   0x1
#define _ANSEL0_ANS0_LENGTH                                 0x1
#define _ANSEL0_ANS0_MASK                                   0x1
#define _ANSEL0_ANS1_POSN                                   0x1
#define _ANSEL0_ANS1_POSITION                               0x1
#define _ANSEL0_ANS1_SIZE                                   0x1
#define _ANSEL0_ANS1_LENGTH                                 0x1
#define _ANSEL0_ANS1_MASK                                   0x2
#define _ANSEL0_ANS2_POSN                                   0x2
#define _ANSEL0_ANS2_POSITION                               0x2
#define _ANSEL0_ANS2_SIZE                                   0x1
#define _ANSEL0_ANS2_LENGTH                                 0x1
#define _ANSEL0_ANS2_MASK                                   0x4
#define _ANSEL0_ANS3_POSN                                   0x3
#define _ANSEL0_ANS3_POSITION                               0x3
#define _ANSEL0_ANS3_SIZE                                   0x1
#define _ANSEL0_ANS3_LENGTH                                 0x1
#define _ANSEL0_ANS3_MASK                                   0x8
#define _ANSEL0_ANS4_POSN                                   0x4
#define _ANSEL0_ANS4_POSITION                               0x4
#define _ANSEL0_ANS4_SIZE                                   0x1
#define _ANSEL0_ANS4_LENGTH                                 0x1
#define _ANSEL0_ANS4_MASK                                   0x10
#define _ANSEL0_ANS5_POSN                                   0x5
#define _ANSEL0_ANS5_POSITION                               0x5
#define _ANSEL0_ANS5_SIZE                                   0x1
#define _ANSEL0_ANS5_LENGTH                                 0x1
#define _ANSEL0_ANS5_MASK                                   0x20
#define _ANSEL0_ANS6_POSN                                   0x6
#define _ANSEL0_ANS6_POSITION                               0x6
#define _ANSEL0_ANS6_SIZE                                   0x1
#define _ANSEL0_ANS6_LENGTH                                 0x1
#define _ANSEL0_ANS6_MASK                                   0x40
#define _ANSEL0_ANS7_POSN                                   0x7
#define _ANSEL0_ANS7_POSITION                               0x7
#define _ANSEL0_ANS7_SIZE                                   0x1
#define _ANSEL0_ANS7_LENGTH                                 0x1
#define _ANSEL0_ANS7_MASK                                   0x80
// alias bitfield definitions
typedef union {
    struct {
        unsigned ANS0                   :1;
        unsigned ANS1                   :1;
        unsigned ANS2                   :1;
        unsigned ANS3                   :1;
        unsigned ANS4                   :1;
        unsigned ANS5                   :1;
        unsigned ANS6                   :1;
        unsigned ANS7                   :1;
    };
} ANSELbits_t;
extern volatile ANSELbits_t ANSELbits __at(0x091);
// bitfield macros
#define _ANSEL_ANS0_POSN                                    0x0
#define _ANSEL_ANS0_POSITION                                0x0
#define _ANSEL_ANS0_SIZE                                    0x1
#define _ANSEL_ANS0_LENGTH                                  0x1
#define _ANSEL_ANS0_MASK                                    0x1
#define _ANSEL_ANS1_POSN                                    0x1
#define _ANSEL_ANS1_POSITION                                0x1
#define _ANSEL_ANS1_SIZE                                    0x1
#define _ANSEL_ANS1_LENGTH                                  0x1
#define _ANSEL_ANS1_MASK                                    0x2
#define _ANSEL_ANS2_POSN                                    0x2
#define _ANSEL_ANS2_POSITION                                0x2
#define _ANSEL_ANS2_SIZE                                    0x1
#define _ANSEL_ANS2_LENGTH                                  0x1
#define _ANSEL_ANS2_MASK                                    0x4
#define _ANSEL_ANS3_POSN                                    0x3
#define _ANSEL_ANS3_POSITION                                0x3
#define _ANSEL_ANS3_SIZE                                    0x1
#define _ANSEL_ANS3_LENGTH                                  0x1
#define _ANSEL_ANS3_MASK                                    0x8
#define _ANSEL_ANS4_POSN                                    0x4
#define _ANSEL_ANS4_POSITION                                0x4
#define _ANSEL_ANS4_SIZE                                    0x1
#define _ANSEL_ANS4_LENGTH                                  0x1
#define _ANSEL_ANS4_MASK                                    0x10
#define _ANSEL_ANS5_POSN                                    0x5
#define _ANSEL_ANS5_POSITION                                0x5
#define _ANSEL_ANS5_SIZE                                    0x1
#define _ANSEL_ANS5_LENGTH                                  0x1
#define _ANSEL_ANS5_MASK                                    0x20
#define _ANSEL_ANS6_POSN                                    0x6
#define _ANSEL_ANS6_POSITION                                0x6
#define _ANSEL_ANS6_SIZE                                    0x1
#define _ANSEL_ANS6_LENGTH                                  0x1
#define _ANSEL_ANS6_MASK                                    0x40
#define _ANSEL_ANS7_POSN                                    0x7
#define _ANSEL_ANS7_POSITION                                0x7
#define _ANSEL_ANS7_SIZE                                    0x1
#define _ANSEL_ANS7_LENGTH                                  0x1
#define _ANSEL_ANS7_MASK                                    0x80

// Register: PR2
#define PR2 PR2
extern volatile unsigned char           PR2                 __at(0x092);
#ifndef _LIB_BUILD
asm("PR2 equ 092h");
#endif

// Register: ANSEL1
#define ANSEL1 ANSEL1
extern volatile unsigned char           ANSEL1              __at(0x093);
#ifndef _LIB_BUILD
asm("ANSEL1 equ 093h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned ANS8                   :1;
        unsigned ANS9                   :1;
        unsigned ANS10                  :1;
        unsigned ANS11                  :1;
    };
} ANSEL1bits_t;
extern volatile ANSEL1bits_t ANSEL1bits __at(0x093);
// bitfield macros
#define _ANSEL1_ANS8_POSN                                   0x0
#define _ANSEL1_ANS8_POSITION                               0x0
#define _ANSEL1_ANS8_SIZE                                   0x1
#define _ANSEL1_ANS8_LENGTH                                 0x1
#define _ANSEL1_ANS8_MASK                                   0x1
#define _ANSEL1_ANS9_POSN                                   0x1
#define _ANSEL1_ANS9_POSITION                               0x1
#define _ANSEL1_ANS9_SIZE                                   0x1
#define _ANSEL1_ANS9_LENGTH                                 0x1
#define _ANSEL1_ANS9_MASK                                   0x2
#define _ANSEL1_ANS10_POSN                                  0x2
#define _ANSEL1_ANS10_POSITION                              0x2
#define _ANSEL1_ANS10_SIZE                                  0x1
#define _ANSEL1_ANS10_LENGTH                                0x1
#define _ANSEL1_ANS10_MASK                                  0x4
#define _ANSEL1_ANS11_POSN                                  0x3
#define _ANSEL1_ANS11_POSITION                              0x3
#define _ANSEL1_ANS11_SIZE                                  0x1
#define _ANSEL1_ANS11_LENGTH                                0x1
#define _ANSEL1_ANS11_MASK                                  0x8

// Register: WPUA
#define WPUA WPUA
extern volatile unsigned char           WPUA                __at(0x095);
#ifndef _LIB_BUILD
asm("WPUA equ 095h");
#endif
// aliases
extern volatile unsigned char           WPU                 __at(0x095);
#ifndef _LIB_BUILD
asm("WPU equ 095h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned WPUA0                  :1;
        unsigned WPUA1                  :1;
        unsigned WPUA2                  :1;
        unsigned WPUA3                  :1;
        unsigned WPUA4                  :1;
        unsigned WPUA5                  :1;
    };
    struct {
        unsigned WPU0                   :1;
        unsigned WPU1                   :1;
        unsigned WPU2                   :1;
        unsigned WPU3                   :1;
        unsigned WPU4                   :1;
        unsigned WPU5                   :1;
    };
} WPUAbits_t;
extern volatile WPUAbits_t WPUAbits __at(0x095);
// bitfield macros
#define _WPUA_WPUA0_POSN                                    0x0
#define _WPUA_WPUA0_POSITION                                0x0
#define _WPUA_WPUA0_SIZE                                    0x1
#define _WPUA_WPUA0_LENGTH                                  0x1
#define _WPUA_WPUA0_MASK                                    0x1
#define _WPUA_WPUA1_POSN                                    0x1
#define _WPUA_WPUA1_POSITION                                0x1
#define _WPUA_WPUA1_SIZE                                    0x1
#define _WPUA_WPUA1_LENGTH                                  0x1
#define _WPUA_WPUA1_MASK                                    0x2
#define _WPUA_WPUA2_POSN                                    0x2
#define _WPUA_WPUA2_POSITION                                0x2
#define _WPUA_WPUA2_SIZE                                    0x1
#define _WPUA_WPUA2_LENGTH                                  0x1
#define _WPUA_WPUA2_MASK                                    0x4
#define _WPUA_WPUA3_POSN                                    0x3
#define _WPUA_WPUA3_POSITION                                0x3
#define _WPUA_WPUA3_SIZE                                    0x1
#define _WPUA_WPUA3_LENGTH                                  0x1
#define _WPUA_WPUA3_MASK                                    0x8
#define _WPUA_WPUA4_POSN                                    0x4
#define _WPUA_WPUA4_POSITION                                0x4
#define _WPUA_WPUA4_SIZE                                    0x1
#define _WPUA_WPUA4_LENGTH                                  0x1
#define _WPUA_WPUA4_MASK                                    0x10
#define _WPUA_WPUA5_POSN                                    0x5
#define _WPUA_WPUA5_POSITION                                0x5
#define _WPUA_WPUA5_SIZE                                    0x1
#define _WPUA_WPUA5_LENGTH                                  0x1
#define _WPUA_WPUA5_MASK                                    0x20
#define _WPUA_WPU0_POSN                                     0x0
#define _WPUA_WPU0_POSITION                                 0x0
#define _WPUA_WPU0_SIZE                                     0x1
#define _WPUA_WPU0_LENGTH                                   0x1
#define _WPUA_WPU0_MASK                                     0x1
#define _WPUA_WPU1_POSN                                     0x1
#define _WPUA_WPU1_POSITION                                 0x1
#define _WPUA_WPU1_SIZE                                     0x1
#define _WPUA_WPU1_LENGTH                                   0x1
#define _WPUA_WPU1_MASK                                     0x2
#define _WPUA_WPU2_POSN                                     0x2
#define _WPUA_WPU2_POSITION                                 0x2
#define _WPUA_WPU2_SIZE                                     0x1
#define _WPUA_WPU2_LENGTH                                   0x1
#define _WPUA_WPU2_MASK                                     0x4
#define _WPUA_WPU3_POSN                                     0x3
#define _WPUA_WPU3_POSITION                                 0x3
#define _WPUA_WPU3_SIZE                                     0x1
#define _WPUA_WPU3_LENGTH                                   0x1
#define _WPUA_WPU3_MASK                                     0x8
#define _WPUA_WPU4_POSN                                     0x4
#define _WPUA_WPU4_POSITION                                 0x4
#define _WPUA_WPU4_SIZE                                     0x1
#define _WPUA_WPU4_LENGTH                                   0x1
#define _WPUA_WPU4_MASK                                     0x10
#define _WPUA_WPU5_POSN                                     0x5
#define _WPUA_WPU5_POSITION                                 0x5
#define _WPUA_WPU5_SIZE                                     0x1
#define _WPUA_WPU5_LENGTH                                   0x1
#define _WPUA_WPU5_MASK                                     0x20
// alias bitfield definitions
typedef union {
    struct {
        unsigned WPUA0                  :1;
        unsigned WPUA1                  :1;
        unsigned WPUA2                  :1;
        unsigned WPUA3                  :1;
        unsigned WPUA4                  :1;
        unsigned WPUA5                  :1;
    };
    struct {
        unsigned WPU0                   :1;
        unsigned WPU1                   :1;
        unsigned WPU2                   :1;
        unsigned WPU3                   :1;
        unsigned WPU4                   :1;
        unsigned WPU5                   :1;
    };
} WPUbits_t;
extern volatile WPUbits_t WPUbits __at(0x095);
// bitfield macros
#define _WPU_WPUA0_POSN                                     0x0
#define _WPU_WPUA0_POSITION                                 0x0
#define _WPU_WPUA0_SIZE                                     0x1
#define _WPU_WPUA0_LENGTH                                   0x1
#define _WPU_WPUA0_MASK                                     0x1
#define _WPU_WPUA1_POSN                                     0x1
#define _WPU_WPUA1_POSITION                                 0x1
#define _WPU_WPUA1_SIZE                                     0x1
#define _WPU_WPUA1_LENGTH                                   0x1
#define _WPU_WPUA1_MASK                                     0x2
#define _WPU_WPUA2_POSN                                     0x2
#define _WPU_WPUA2_POSITION                                 0x2
#define _WPU_WPUA2_SIZE                                     0x1
#define _WPU_WPUA2_LENGTH                                   0x1
#define _WPU_WPUA2_MASK                                     0x4
#define _WPU_WPUA3_POSN                                     0x3
#define _WPU_WPUA3_POSITION                                 0x3
#define _WPU_WPUA3_SIZE                                     0x1
#define _WPU_WPUA3_LENGTH                                   0x1
#define _WPU_WPUA3_MASK                                     0x8
#define _WPU_WPUA4_POSN                                     0x4
#define _WPU_WPUA4_POSITION                                 0x4
#define _WPU_WPUA4_SIZE                                     0x1
#define _WPU_WPUA4_LENGTH                                   0x1
#define _WPU_WPUA4_MASK                                     0x10
#define _WPU_WPUA5_POSN                                     0x5
#define _WPU_WPUA5_POSITION                                 0x5
#define _WPU_WPUA5_SIZE                                     0x1
#define _WPU_WPUA5_LENGTH                                   0x1
#define _WPU_WPUA5_MASK                                     0x20
#define _WPU_WPU0_POSN                                      0x0
#define _WPU_WPU0_POSITION                                  0x0
#define _WPU_WPU0_SIZE                                      0x1
#define _WPU_WPU0_LENGTH                                    0x1
#define _WPU_WPU0_MASK                                      0x1
#define _WPU_WPU1_POSN                                      0x1
#define _WPU_WPU1_POSITION                                  0x1
#define _WPU_WPU1_SIZE                                      0x1
#define _WPU_WPU1_LENGTH                                    0x1
#define _WPU_WPU1_MASK                                      0x2
#define _WPU_WPU2_POSN                                      0x2
#define _WPU_WPU2_POSITION                                  0x2
#define _WPU_WPU2_SIZE                                      0x1
#define _WPU_WPU2_LENGTH                                    0x1
#define _WPU_WPU2_MASK                                      0x4
#define _WPU_WPU3_POSN                                      0x3
#define _WPU_WPU3_POSITION                                  0x3
#define _WPU_WPU3_SIZE                                      0x1
#define _WPU_WPU3_LENGTH                                    0x1
#define _WPU_WPU3_MASK                                      0x8
#define _WPU_WPU4_POSN                                      0x4
#define _WPU_WPU4_POSITION                                  0x4
#define _WPU_WPU4_SIZE                                      0x1
#define _WPU_WPU4_LENGTH                                    0x1
#define _WPU_WPU4_MASK                                      0x10
#define _WPU_WPU5_POSN                                      0x5
#define _WPU_WPU5_POSITION                                  0x5
#define _WPU_WPU5_SIZE                                      0x1
#define _WPU_WPU5_LENGTH                                    0x1
#define _WPU_WPU5_MASK                                      0x20

// Register: IOCA
#define IOCA IOCA
extern volatile unsigned char           IOCA                __at(0x096);
#ifndef _LIB_BUILD
asm("IOCA equ 096h");
#endif
// aliases
extern volatile unsigned char           IOC                 __at(0x096);
#ifndef _LIB_BUILD
asm("IOC equ 096h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned IOCA0                  :1;
        unsigned IOCA1                  :1;
        unsigned IOCA2                  :1;
        unsigned IOCA3                  :1;
        unsigned IOCA4                  :1;
        unsigned IOCA5                  :1;
    };
    struct {
        unsigned IOC0                   :1;
        unsigned IOC1                   :1;
        unsigned IOC2                   :1;
        unsigned IOC3                   :1;
        unsigned IOC4                   :1;
        unsigned IOC5                   :1;
    };
} IOCAbits_t;
extern volatile IOCAbits_t IOCAbits __at(0x096);
// bitfield macros
#define _IOCA_IOCA0_POSN                                    0x0
#define _IOCA_IOCA0_POSITION                                0x0
#define _IOCA_IOCA0_SIZE                                    0x1
#define _IOCA_IOCA0_LENGTH                                  0x1
#define _IOCA_IOCA0_MASK                                    0x1
#define _IOCA_IOCA1_POSN                                    0x1
#define _IOCA_IOCA1_POSITION                                0x1
#define _IOCA_IOCA1_SIZE                                    0x1
#define _IOCA_IOCA1_LENGTH                                  0x1
#define _IOCA_IOCA1_MASK                                    0x2
#define _IOCA_IOCA2_POSN                                    0x2
#define _IOCA_IOCA2_POSITION                                0x2
#define _IOCA_IOCA2_SIZE                                    0x1
#define _IOCA_IOCA2_LENGTH                                  0x1
#define _IOCA_IOCA2_MASK                                    0x4
#define _IOCA_IOCA3_POSN                                    0x3
#define _IOCA_IOCA3_POSITION                                0x3
#define _IOCA_IOCA3_SIZE                                    0x1
#define _IOCA_IOCA3_LENGTH                                  0x1
#define _IOCA_IOCA3_MASK                                    0x8
#define _IOCA_IOCA4_POSN                                    0x4
#define _IOCA_IOCA4_POSITION                                0x4
#define _IOCA_IOCA4_SIZE                                    0x1
#define _IOCA_IOCA4_LENGTH                                  0x1
#define _IOCA_IOCA4_MASK                                    0x10
#define _IOCA_IOCA5_POSN                                    0x5
#define _IOCA_IOCA5_POSITION                                0x5
#define _IOCA_IOCA5_SIZE                                    0x1
#define _IOCA_IOCA5_LENGTH                                  0x1
#define _IOCA_IOCA5_MASK                                    0x20
#define _IOCA_IOC0_POSN                                     0x0
#define _IOCA_IOC0_POSITION                                 0x0
#define _IOCA_IOC0_SIZE                                     0x1
#define _IOCA_IOC0_LENGTH                                   0x1
#define _IOCA_IOC0_MASK                                     0x1
#define _IOCA_IOC1_POSN                                     0x1
#define _IOCA_IOC1_POSITION                                 0x1
#define _IOCA_IOC1_SIZE                                     0x1
#define _IOCA_IOC1_LENGTH                                   0x1
#define _IOCA_IOC1_MASK                                     0x2
#define _IOCA_IOC2_POSN                                     0x2
#define _IOCA_IOC2_POSITION                                 0x2
#define _IOCA_IOC2_SIZE                                     0x1
#define _IOCA_IOC2_LENGTH                                   0x1
#define _IOCA_IOC2_MASK                                     0x4
#define _IOCA_IOC3_POSN                                     0x3
#define _IOCA_IOC3_POSITION                                 0x3
#define _IOCA_IOC3_SIZE                                     0x1
#define _IOCA_IOC3_LENGTH                                   0x1
#define _IOCA_IOC3_MASK                                     0x8
#define _IOCA_IOC4_POSN                                     0x4
#define _IOCA_IOC4_POSITION                                 0x4
#define _IOCA_IOC4_SIZE                                     0x1
#define _IOCA_IOC4_LENGTH                                   0x1
#define _IOCA_IOC4_MASK                                     0x10
#define _IOCA_IOC5_POSN                                     0x5
#define _IOCA_IOC5_POSITION                                 0x5
#define _IOCA_IOC5_SIZE                                     0x1
#define _IOCA_IOC5_LENGTH                                   0x1
#define _IOCA_IOC5_MASK                                     0x20
// alias bitfield definitions
typedef union {
    struct {
        unsigned IOCA0                  :1;
        unsigned IOCA1                  :1;
        unsigned IOCA2                  :1;
        unsigned IOCA3                  :1;
        unsigned IOCA4                  :1;
        unsigned IOCA5                  :1;
    };
    struct {
        unsigned IOC0                   :1;
        unsigned IOC1                   :1;
        unsigned IOC2                   :1;
        unsigned IOC3                   :1;
        unsigned IOC4                   :1;
        unsigned IOC5                   :1;
    };
} IOCbits_t;
extern volatile IOCbits_t IOCbits __at(0x096);
// bitfield macros
#define _IOC_IOCA0_POSN                                     0x0
#define _IOC_IOCA0_POSITION                                 0x0
#define _IOC_IOCA0_SIZE                                     0x1
#define _IOC_IOCA0_LENGTH                                   0x1
#define _IOC_IOCA0_MASK                                     0x1
#define _IOC_IOCA1_POSN                                     0x1
#define _IOC_IOCA1_POSITION                                 0x1
#define _IOC_IOCA1_SIZE                                     0x1
#define _IOC_IOCA1_LENGTH                                   0x1
#define _IOC_IOCA1_MASK                                     0x2
#define _IOC_IOCA2_POSN                                     0x2
#define _IOC_IOCA2_POSITION                                 0x2
#define _IOC_IOCA2_SIZE                                     0x1
#define _IOC_IOCA2_LENGTH                                   0x1
#define _IOC_IOCA2_MASK                                     0x4
#define _IOC_IOCA3_POSN                                     0x3
#define _IOC_IOCA3_POSITION                                 0x3
#define _IOC_IOCA3_SIZE                                     0x1
#define _IOC_IOCA3_LENGTH                                   0x1
#define _IOC_IOCA3_MASK                                     0x8
#define _IOC_IOCA4_POSN                                     0x4
#define _IOC_IOCA4_POSITION                                 0x4
#define _IOC_IOCA4_SIZE                                     0x1
#define _IOC_IOCA4_LENGTH                                   0x1
#define _IOC_IOCA4_MASK                                     0x10
#define _IOC_IOCA5_POSN                                     0x5
#define _IOC_IOCA5_POSITION                                 0x5
#define _IOC_IOCA5_SIZE                                     0x1
#define _IOC_IOCA5_LENGTH                                   0x1
#define _IOC_IOCA5_MASK                                     0x20
#define _IOC_IOC0_POSN                                      0x0
#define _IOC_IOC0_POSITION                                  0x0
#define _IOC_IOC0_SIZE                                      0x1
#define _IOC_IOC0_LENGTH                                    0x1
#define _IOC_IOC0_MASK                                      0x1
#define _IOC_IOC1_POSN                                      0x1
#define _IOC_IOC1_POSITION                                  0x1
#define _IOC_IOC1_SIZE                                      0x1
#define _IOC_IOC1_LENGTH                                    0x1
#define _IOC_IOC1_MASK                                      0x2
#define _IOC_IOC2_POSN                                      0x2
#define _IOC_IOC2_POSITION                                  0x2
#define _IOC_IOC2_SIZE                                      0x1
#define _IOC_IOC2_LENGTH                                    0x1
#define _IOC_IOC2_MASK                                      0x4
#define _IOC_IOC3_POSN                                      0x3
#define _IOC_IOC3_POSITION                                  0x3
#define _IOC_IOC3_SIZE                                      0x1
#define _IOC_IOC3_LENGTH                                    0x1
#define _IOC_IOC3_MASK                                      0x8
#define _IOC_IOC4_POSN                                      0x4
#define _IOC_IOC4_POSITION                                  0x4
#define _IOC_IOC4_SIZE                                      0x1
#define _IOC_IOC4_LENGTH                                    0x1
#define _IOC_IOC4_MASK                                      0x10
#define _IOC_IOC5_POSN                                      0x5
#define _IOC_IOC5_POSITION                                  0x5
#define _IOC_IOC5_SIZE                                      0x1
#define _IOC_IOC5_LENGTH                                    0x1
#define _IOC_IOC5_MASK                                      0x20

// Register: REFCON
#define REFCON REFCON
extern volatile unsigned char           REFCON              __at(0x098);
#ifndef _LIB_BUILD
asm("REFCON equ 098h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :1;
        unsigned CVROE                  :1;
        unsigned VROE                   :1;
        unsigned VREN                   :1;
        unsigned VRBB                   :1;
        unsigned BGST                   :1;
    };
} REFCONbits_t;
extern volatile REFCONbits_t REFCONbits __at(0x098);
// bitfield macros
#define _REFCON_CVROE_POSN                                  0x1
#define _REFCON_CVROE_POSITION                              0x1
#define _REFCON_CVROE_SIZE                                  0x1
#define _REFCON_CVROE_LENGTH                                0x1
#define _REFCON_CVROE_MASK                                  0x2
#define _REFCON_VROE_POSN                                   0x2
#define _REFCON_VROE_POSITION                               0x2
#define _REFCON_VROE_SIZE                                   0x1
#define _REFCON_VROE_LENGTH                                 0x1
#define _REFCON_VROE_MASK                                   0x4
#define _REFCON_VREN_POSN                                   0x3
#define _REFCON_VREN_POSITION                               0x3
#define _REFCON_VREN_SIZE                                   0x1
#define _REFCON_VREN_LENGTH                                 0x1
#define _REFCON_VREN_MASK                                   0x8
#define _REFCON_VRBB_POSN                                   0x4
#define _REFCON_VRBB_POSITION                               0x4
#define _REFCON_VRBB_SIZE                                   0x1
#define _REFCON_VRBB_LENGTH                                 0x1
#define _REFCON_VRBB_MASK                                   0x10
#define _REFCON_BGST_POSN                                   0x5
#define _REFCON_BGST_POSITION                               0x5
#define _REFCON_BGST_SIZE                                   0x1
#define _REFCON_BGST_LENGTH                                 0x1
#define _REFCON_BGST_MASK                                   0x20

// Register: VRCON
#define VRCON VRCON
extern volatile unsigned char           VRCON               __at(0x099);
#ifndef _LIB_BUILD
asm("VRCON equ 099h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned VR0                    :1;
        unsigned VR1                    :1;
        unsigned VR2                    :1;
        unsigned VR3                    :1;
        unsigned                        :1;
        unsigned VRR                    :1;
        unsigned C2VREN                 :1;
        unsigned C1VREN                 :1;
    };
} VRCONbits_t;
extern volatile VRCONbits_t VRCONbits __at(0x099);
// bitfield macros
#define _VRCON_VR0_POSN                                     0x0
#define _VRCON_VR0_POSITION                                 0x0
#define _VRCON_VR0_SIZE                                     0x1
#define _VRCON_VR0_LENGTH                                   0x1
#define _VRCON_VR0_MASK                                     0x1
#define _VRCON_VR1_POSN                                     0x1
#define _VRCON_VR1_POSITION                                 0x1
#define _VRCON_VR1_SIZE                                     0x1
#define _VRCON_VR1_LENGTH                                   0x1
#define _VRCON_VR1_MASK                                     0x2
#define _VRCON_VR2_POSN                                     0x2
#define _VRCON_VR2_POSITION                                 0x2
#define _VRCON_VR2_SIZE                                     0x1
#define _VRCON_VR2_LENGTH                                   0x1
#define _VRCON_VR2_MASK                                     0x4
#define _VRCON_VR3_POSN                                     0x3
#define _VRCON_VR3_POSITION                                 0x3
#define _VRCON_VR3_SIZE                                     0x1
#define _VRCON_VR3_LENGTH                                   0x1
#define _VRCON_VR3_MASK                                     0x8
#define _VRCON_VRR_POSN                                     0x5
#define _VRCON_VRR_POSITION                                 0x5
#define _VRCON_VRR_SIZE                                     0x1
#define _VRCON_VRR_LENGTH                                   0x1
#define _VRCON_VRR_MASK                                     0x20
#define _VRCON_C2VREN_POSN                                  0x6
#define _VRCON_C2VREN_POSITION                              0x6
#define _VRCON_C2VREN_SIZE                                  0x1
#define _VRCON_C2VREN_LENGTH                                0x1
#define _VRCON_C2VREN_MASK                                  0x40
#define _VRCON_C1VREN_POSN                                  0x7
#define _VRCON_C1VREN_POSITION                              0x7
#define _VRCON_C1VREN_SIZE                                  0x1
#define _VRCON_C1VREN_LENGTH                                0x1
#define _VRCON_C1VREN_MASK                                  0x80

// Register: EEDATA
#define EEDATA EEDATA
extern volatile unsigned char           EEDATA              __at(0x09A);
#ifndef _LIB_BUILD
asm("EEDATA equ 09Ah");
#endif
// aliases
extern volatile unsigned char           EEDAT               __at(0x09A);
#ifndef _LIB_BUILD
asm("EEDAT equ 09Ah");
#endif

// Register: EEADR
#define EEADR EEADR
extern volatile unsigned char           EEADR               __at(0x09B);
#ifndef _LIB_BUILD
asm("EEADR equ 09Bh");
#endif

// Register: EECON1
#define EECON1 EECON1
extern volatile unsigned char           EECON1              __at(0x09C);
#ifndef _LIB_BUILD
asm("EECON1 equ 09Ch");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned RD                     :1;
        unsigned WR                     :1;
        unsigned WREN                   :1;
        unsigned WRERR                  :1;
    };
} EECON1bits_t;
extern volatile EECON1bits_t EECON1bits __at(0x09C);
// bitfield macros
#define _EECON1_RD_POSN                                     0x0
#define _EECON1_RD_POSITION                                 0x0
#define _EECON1_RD_SIZE                                     0x1
#define _EECON1_RD_LENGTH                                   0x1
#define _EECON1_RD_MASK                                     0x1
#define _EECON1_WR_POSN                                     0x1
#define _EECON1_WR_POSITION                                 0x1
#define _EECON1_WR_SIZE                                     0x1
#define _EECON1_WR_LENGTH                                   0x1
#define _EECON1_WR_MASK                                     0x2
#define _EECON1_WREN_POSN                                   0x2
#define _EECON1_WREN_POSITION                               0x2
#define _EECON1_WREN_SIZE                                   0x1
#define _EECON1_WREN_LENGTH                                 0x1
#define _EECON1_WREN_MASK                                   0x4
#define _EECON1_WRERR_POSN                                  0x3
#define _EECON1_WRERR_POSITION                              0x3
#define _EECON1_WRERR_SIZE                                  0x1
#define _EECON1_WRERR_LENGTH                                0x1
#define _EECON1_WRERR_MASK                                  0x8

// Register: EECON2
#define EECON2 EECON2
extern volatile unsigned char           EECON2              __at(0x09D);
#ifndef _LIB_BUILD
asm("EECON2 equ 09Dh");
#endif

// Register: ADRESL
#define ADRESL ADRESL
extern volatile unsigned char           ADRESL              __at(0x09E);
#ifndef _LIB_BUILD
asm("ADRESL equ 09Eh");
#endif

// Register: ADCON1
#define ADCON1 ADCON1
extern volatile unsigned char           ADCON1              __at(0x09F);
#ifndef _LIB_BUILD
asm("ADCON1 equ 09Fh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :4;
        unsigned ADCS                   :3;
    };
    struct {
        unsigned                        :4;
        unsigned ADCS0                  :1;
        unsigned ADCS1                  :1;
        unsigned ADCS2                  :1;
    };
} ADCON1bits_t;
extern volatile ADCON1bits_t ADCON1bits __at(0x09F);
// bitfield macros
#define _ADCON1_ADCS_POSN                                   0x4
#define _ADCON1_ADCS_POSITION                               0x4
#define _ADCON1_ADCS_SIZE                                   0x3
#define _ADCON1_ADCS_LENGTH                                 0x3
#define _ADCON1_ADCS_MASK                                   0x70
#define _ADCON1_ADCS0_POSN                                  0x4
#define _ADCON1_ADCS0_POSITION                              0x4
#define _ADCON1_ADCS0_SIZE                                  0x1
#define _ADCON1_ADCS0_LENGTH                                0x1
#define _ADCON1_ADCS0_MASK                                  0x10
#define _ADCON1_ADCS1_POSN                                  0x5
#define _ADCON1_ADCS1_POSITION                              0x5
#define _ADCON1_ADCS1_SIZE                                  0x1
#define _ADCON1_ADCS1_LENGTH                                0x1
#define _ADCON1_ADCS1_MASK                                  0x20
#define _ADCON1_ADCS2_POSN                                  0x6
#define _ADCON1_ADCS2_POSITION                              0x6
#define _ADCON1_ADCS2_SIZE                                  0x1
#define _ADCON1_ADCS2_LENGTH                                0x1
#define _ADCON1_ADCS2_MASK                                  0x40

// Register: PWMCON1
#define PWMCON1 PWMCON1
extern volatile unsigned char           PWMCON1             __at(0x110);
#ifndef _LIB_BUILD
asm("PWMCON1 equ 0110h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned CMDLY                  :5;
        unsigned COMOD                  :2;
        unsigned OVRLP                  :1;
    };
    struct {
        unsigned CMDLY0                 :1;
        unsigned CMDLY1                 :1;
        unsigned CMDLY2                 :1;
        unsigned CMDLY3                 :1;
        unsigned CMDLY4                 :1;
        unsigned COMOD0                 :1;
        unsigned COMOD1                 :1;
    };
} PWMCON1bits_t;
extern volatile PWMCON1bits_t PWMCON1bits __at(0x110);
// bitfield macros
#define _PWMCON1_CMDLY_POSN                                 0x0
#define _PWMCON1_CMDLY_POSITION                             0x0
#define _PWMCON1_CMDLY_SIZE                                 0x5
#define _PWMCON1_CMDLY_LENGTH                               0x5
#define _PWMCON1_CMDLY_MASK                                 0x1F
#define _PWMCON1_COMOD_POSN                                 0x5
#define _PWMCON1_COMOD_POSITION                             0x5
#define _PWMCON1_COMOD_SIZE                                 0x2
#define _PWMCON1_COMOD_LENGTH                               0x2
#define _PWMCON1_COMOD_MASK                                 0x60
#define _PWMCON1_OVRLP_POSN                                 0x7
#define _PWMCON1_OVRLP_POSITION                             0x7
#define _PWMCON1_OVRLP_SIZE                                 0x1
#define _PWMCON1_OVRLP_LENGTH                               0x1
#define _PWMCON1_OVRLP_MASK                                 0x80
#define _PWMCON1_CMDLY0_POSN                                0x0
#define _PWMCON1_CMDLY0_POSITION                            0x0
#define _PWMCON1_CMDLY0_SIZE                                0x1
#define _PWMCON1_CMDLY0_LENGTH                              0x1
#define _PWMCON1_CMDLY0_MASK                                0x1
#define _PWMCON1_CMDLY1_POSN                                0x1
#define _PWMCON1_CMDLY1_POSITION                            0x1
#define _PWMCON1_CMDLY1_SIZE                                0x1
#define _PWMCON1_CMDLY1_LENGTH                              0x1
#define _PWMCON1_CMDLY1_MASK                                0x2
#define _PWMCON1_CMDLY2_POSN                                0x2
#define _PWMCON1_CMDLY2_POSITION                            0x2
#define _PWMCON1_CMDLY2_SIZE                                0x1
#define _PWMCON1_CMDLY2_LENGTH                              0x1
#define _PWMCON1_CMDLY2_MASK                                0x4
#define _PWMCON1_CMDLY3_POSN                                0x3
#define _PWMCON1_CMDLY3_POSITION                            0x3
#define _PWMCON1_CMDLY3_SIZE                                0x1
#define _PWMCON1_CMDLY3_LENGTH                              0x1
#define _PWMCON1_CMDLY3_MASK                                0x8
#define _PWMCON1_CMDLY4_POSN                                0x4
#define _PWMCON1_CMDLY4_POSITION                            0x4
#define _PWMCON1_CMDLY4_SIZE                                0x1
#define _PWMCON1_CMDLY4_LENGTH                              0x1
#define _PWMCON1_CMDLY4_MASK                                0x10
#define _PWMCON1_COMOD0_POSN                                0x5
#define _PWMCON1_COMOD0_POSITION                            0x5
#define _PWMCON1_COMOD0_SIZE                                0x1
#define _PWMCON1_COMOD0_LENGTH                              0x1
#define _PWMCON1_COMOD0_MASK                                0x20
#define _PWMCON1_COMOD1_POSN                                0x6
#define _PWMCON1_COMOD1_POSITION                            0x6
#define _PWMCON1_COMOD1_SIZE                                0x1
#define _PWMCON1_COMOD1_LENGTH                              0x1
#define _PWMCON1_COMOD1_MASK                                0x40

// Register: PWMCON0
#define PWMCON0 PWMCON0
extern volatile unsigned char           PWMCON0             __at(0x111);
#ifndef _LIB_BUILD
asm("PWMCON0 equ 0111h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned PH1EN                  :1;
        unsigned PH2EN                  :1;
        unsigned SYNC                   :2;
        unsigned BLANK1                 :1;
        unsigned BLANK2                 :1;
        unsigned PASEN                  :1;
        unsigned PRSEN                  :1;
    };
    struct {
        unsigned                        :2;
        unsigned SYNC0                  :1;
        unsigned SYNC1                  :1;
    };
} PWMCON0bits_t;
extern volatile PWMCON0bits_t PWMCON0bits __at(0x111);
// bitfield macros
#define _PWMCON0_PH1EN_POSN                                 0x0
#define _PWMCON0_PH1EN_POSITION                             0x0
#define _PWMCON0_PH1EN_SIZE                                 0x1
#define _PWMCON0_PH1EN_LENGTH                               0x1
#define _PWMCON0_PH1EN_MASK                                 0x1
#define _PWMCON0_PH2EN_POSN                                 0x1
#define _PWMCON0_PH2EN_POSITION                             0x1
#define _PWMCON0_PH2EN_SIZE                                 0x1
#define _PWMCON0_PH2EN_LENGTH                               0x1
#define _PWMCON0_PH2EN_MASK                                 0x2
#define _PWMCON0_SYNC_POSN                                  0x2
#define _PWMCON0_SYNC_POSITION                              0x2
#define _PWMCON0_SYNC_SIZE                                  0x2
#define _PWMCON0_SYNC_LENGTH                                0x2
#define _PWMCON0_SYNC_MASK                                  0xC
#define _PWMCON0_BLANK1_POSN                                0x4
#define _PWMCON0_BLANK1_POSITION                            0x4
#define _PWMCON0_BLANK1_SIZE                                0x1
#define _PWMCON0_BLANK1_LENGTH                              0x1
#define _PWMCON0_BLANK1_MASK                                0x10
#define _PWMCON0_BLANK2_POSN                                0x5
#define _PWMCON0_BLANK2_POSITION                            0x5
#define _PWMCON0_BLANK2_SIZE                                0x1
#define _PWMCON0_BLANK2_LENGTH                              0x1
#define _PWMCON0_BLANK2_MASK                                0x20
#define _PWMCON0_PASEN_POSN                                 0x6
#define _PWMCON0_PASEN_POSITION                             0x6
#define _PWMCON0_PASEN_SIZE                                 0x1
#define _PWMCON0_PASEN_LENGTH                               0x1
#define _PWMCON0_PASEN_MASK                                 0x40
#define _PWMCON0_PRSEN_POSN                                 0x7
#define _PWMCON0_PRSEN_POSITION                             0x7
#define _PWMCON0_PRSEN_SIZE                                 0x1
#define _PWMCON0_PRSEN_LENGTH                               0x1
#define _PWMCON0_PRSEN_MASK                                 0x80
#define _PWMCON0_SYNC0_POSN                                 0x2
#define _PWMCON0_SYNC0_POSITION                             0x2
#define _PWMCON0_SYNC0_SIZE                                 0x1
#define _PWMCON0_SYNC0_LENGTH                               0x1
#define _PWMCON0_SYNC0_MASK                                 0x4
#define _PWMCON0_SYNC1_POSN                                 0x3
#define _PWMCON0_SYNC1_POSITION                             0x3
#define _PWMCON0_SYNC1_SIZE                                 0x1
#define _PWMCON0_SYNC1_LENGTH                               0x1
#define _PWMCON0_SYNC1_MASK                                 0x8

// Register: PWMCLK
#define PWMCLK PWMCLK
extern volatile unsigned char           PWMCLK              __at(0x112);
#ifndef _LIB_BUILD
asm("PWMCLK equ 0112h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned PER                    :5;
        unsigned PWMP                   :2;
        unsigned PWMASE                 :1;
    };
    struct {
        unsigned PER0                   :1;
        unsigned PER1                   :1;
        unsigned PER2                   :1;
        unsigned PER3                   :1;
        unsigned PER4                   :1;
        unsigned PWMP0                  :1;
        unsigned PWMP1                  :1;
    };
} PWMCLKbits_t;
extern volatile PWMCLKbits_t PWMCLKbits __at(0x112);
// bitfield macros
#define _PWMCLK_PER_POSN                                    0x0
#define _PWMCLK_PER_POSITION                                0x0
#define _PWMCLK_PER_SIZE                                    0x5
#define _PWMCLK_PER_LENGTH                                  0x5
#define _PWMCLK_PER_MASK                                    0x1F
#define _PWMCLK_PWMP_POSN                                   0x5
#define _PWMCLK_PWMP_POSITION                               0x5
#define _PWMCLK_PWMP_SIZE                                   0x2
#define _PWMCLK_PWMP_LENGTH                                 0x2
#define _PWMCLK_PWMP_MASK                                   0x60
#define _PWMCLK_PWMASE_POSN                                 0x7
#define _PWMCLK_PWMASE_POSITION                             0x7
#define _PWMCLK_PWMASE_SIZE                                 0x1
#define _PWMCLK_PWMASE_LENGTH                               0x1
#define _PWMCLK_PWMASE_MASK                                 0x80
#define _PWMCLK_PER0_POSN                                   0x0
#define _PWMCLK_PER0_POSITION                               0x0
#define _PWMCLK_PER0_SIZE                                   0x1
#define _PWMCLK_PER0_LENGTH                                 0x1
#define _PWMCLK_PER0_MASK                                   0x1
#define _PWMCLK_PER1_POSN                                   0x1
#define _PWMCLK_PER1_POSITION                               0x1
#define _PWMCLK_PER1_SIZE                                   0x1
#define _PWMCLK_PER1_LENGTH                                 0x1
#define _PWMCLK_PER1_MASK                                   0x2
#define _PWMCLK_PER2_POSN                                   0x2
#define _PWMCLK_PER2_POSITION                               0x2
#define _PWMCLK_PER2_SIZE                                   0x1
#define _PWMCLK_PER2_LENGTH                                 0x1
#define _PWMCLK_PER2_MASK                                   0x4
#define _PWMCLK_PER3_POSN                                   0x3
#define _PWMCLK_PER3_POSITION                               0x3
#define _PWMCLK_PER3_SIZE                                   0x1
#define _PWMCLK_PER3_LENGTH                                 0x1
#define _PWMCLK_PER3_MASK                                   0x8
#define _PWMCLK_PER4_POSN                                   0x4
#define _PWMCLK_PER4_POSITION                               0x4
#define _PWMCLK_PER4_SIZE                                   0x1
#define _PWMCLK_PER4_LENGTH                                 0x1
#define _PWMCLK_PER4_MASK                                   0x10
#define _PWMCLK_PWMP0_POSN                                  0x5
#define _PWMCLK_PWMP0_POSITION                              0x5
#define _PWMCLK_PWMP0_SIZE                                  0x1
#define _PWMCLK_PWMP0_LENGTH                                0x1
#define _PWMCLK_PWMP0_MASK                                  0x20
#define _PWMCLK_PWMP1_POSN                                  0x6
#define _PWMCLK_PWMP1_POSITION                              0x6
#define _PWMCLK_PWMP1_SIZE                                  0x1
#define _PWMCLK_PWMP1_LENGTH                                0x1
#define _PWMCLK_PWMP1_MASK                                  0x40

// Register: PWMPH1
#define PWMPH1 PWMPH1
extern volatile unsigned char           PWMPH1              __at(0x113);
#ifndef _LIB_BUILD
asm("PWMPH1 equ 0113h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned PH                     :5;
        unsigned C1EN                   :1;
        unsigned C2EN                   :1;
        unsigned POL                    :1;
    };
    struct {
        unsigned PH0                    :1;
        unsigned PH1                    :1;
        unsigned PH2                    :1;
        unsigned PH3                    :1;
        unsigned PH4                    :1;
    };
} PWMPH1bits_t;
extern volatile PWMPH1bits_t PWMPH1bits __at(0x113);
// bitfield macros
#define _PWMPH1_PH_POSN                                     0x0
#define _PWMPH1_PH_POSITION                                 0x0
#define _PWMPH1_PH_SIZE                                     0x5
#define _PWMPH1_PH_LENGTH                                   0x5
#define _PWMPH1_PH_MASK                                     0x1F
#define _PWMPH1_C1EN_POSN                                   0x5
#define _PWMPH1_C1EN_POSITION                               0x5
#define _PWMPH1_C1EN_SIZE                                   0x1
#define _PWMPH1_C1EN_LENGTH                                 0x1
#define _PWMPH1_C1EN_MASK                                   0x20
#define _PWMPH1_C2EN_POSN                                   0x6
#define _PWMPH1_C2EN_POSITION                               0x6
#define _PWMPH1_C2EN_SIZE                                   0x1
#define _PWMPH1_C2EN_LENGTH                                 0x1
#define _PWMPH1_C2EN_MASK                                   0x40
#define _PWMPH1_POL_POSN                                    0x7
#define _PWMPH1_POL_POSITION                                0x7
#define _PWMPH1_POL_SIZE                                    0x1
#define _PWMPH1_POL_LENGTH                                  0x1
#define _PWMPH1_POL_MASK                                    0x80
#define _PWMPH1_PH0_POSN                                    0x0
#define _PWMPH1_PH0_POSITION                                0x0
#define _PWMPH1_PH0_SIZE                                    0x1
#define _PWMPH1_PH0_LENGTH                                  0x1
#define _PWMPH1_PH0_MASK                                    0x1
#define _PWMPH1_PH1_POSN                                    0x1
#define _PWMPH1_PH1_POSITION                                0x1
#define _PWMPH1_PH1_SIZE                                    0x1
#define _PWMPH1_PH1_LENGTH                                  0x1
#define _PWMPH1_PH1_MASK                                    0x2
#define _PWMPH1_PH2_POSN                                    0x2
#define _PWMPH1_PH2_POSITION                                0x2
#define _PWMPH1_PH2_SIZE                                    0x1
#define _PWMPH1_PH2_LENGTH                                  0x1
#define _PWMPH1_PH2_MASK                                    0x4
#define _PWMPH1_PH3_POSN                                    0x3
#define _PWMPH1_PH3_POSITION                                0x3
#define _PWMPH1_PH3_SIZE                                    0x1
#define _PWMPH1_PH3_LENGTH                                  0x1
#define _PWMPH1_PH3_MASK                                    0x8
#define _PWMPH1_PH4_POSN                                    0x4
#define _PWMPH1_PH4_POSITION                                0x4
#define _PWMPH1_PH4_SIZE                                    0x1
#define _PWMPH1_PH4_LENGTH                                  0x1
#define _PWMPH1_PH4_MASK                                    0x10

// Register: PWMPH2
#define PWMPH2 PWMPH2
extern volatile unsigned char           PWMPH2              __at(0x114);
#ifndef _LIB_BUILD
asm("PWMPH2 equ 0114h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned PH                     :5;
        unsigned C1EN                   :1;
        unsigned C2EN                   :1;
        unsigned POL                    :1;
    };
    struct {
        unsigned PH0                    :1;
        unsigned PH1                    :1;
        unsigned PH2                    :1;
        unsigned PH3                    :1;
        unsigned PH4                    :1;
    };
} PWMPH2bits_t;
extern volatile PWMPH2bits_t PWMPH2bits __at(0x114);
// bitfield macros
#define _PWMPH2_PH_POSN                                     0x0
#define _PWMPH2_PH_POSITION                                 0x0
#define _PWMPH2_PH_SIZE                                     0x5
#define _PWMPH2_PH_LENGTH                                   0x5
#define _PWMPH2_PH_MASK                                     0x1F
#define _PWMPH2_C1EN_POSN                                   0x5
#define _PWMPH2_C1EN_POSITION                               0x5
#define _PWMPH2_C1EN_SIZE                                   0x1
#define _PWMPH2_C1EN_LENGTH                                 0x1
#define _PWMPH2_C1EN_MASK                                   0x20
#define _PWMPH2_C2EN_POSN                                   0x6
#define _PWMPH2_C2EN_POSITION                               0x6
#define _PWMPH2_C2EN_SIZE                                   0x1
#define _PWMPH2_C2EN_LENGTH                                 0x1
#define _PWMPH2_C2EN_MASK                                   0x40
#define _PWMPH2_POL_POSN                                    0x7
#define _PWMPH2_POL_POSITION                                0x7
#define _PWMPH2_POL_SIZE                                    0x1
#define _PWMPH2_POL_LENGTH                                  0x1
#define _PWMPH2_POL_MASK                                    0x80
#define _PWMPH2_PH0_POSN                                    0x0
#define _PWMPH2_PH0_POSITION                                0x0
#define _PWMPH2_PH0_SIZE                                    0x1
#define _PWMPH2_PH0_LENGTH                                  0x1
#define _PWMPH2_PH0_MASK                                    0x1
#define _PWMPH2_PH1_POSN                                    0x1
#define _PWMPH2_PH1_POSITION                                0x1
#define _PWMPH2_PH1_SIZE                                    0x1
#define _PWMPH2_PH1_LENGTH                                  0x1
#define _PWMPH2_PH1_MASK                                    0x2
#define _PWMPH2_PH2_POSN                                    0x2
#define _PWMPH2_PH2_POSITION                                0x2
#define _PWMPH2_PH2_SIZE                                    0x1
#define _PWMPH2_PH2_LENGTH                                  0x1
#define _PWMPH2_PH2_MASK                                    0x4
#define _PWMPH2_PH3_POSN                                    0x3
#define _PWMPH2_PH3_POSITION                                0x3
#define _PWMPH2_PH3_SIZE                                    0x1
#define _PWMPH2_PH3_LENGTH                                  0x1
#define _PWMPH2_PH3_MASK                                    0x8
#define _PWMPH2_PH4_POSN                                    0x4
#define _PWMPH2_PH4_POSITION                                0x4
#define _PWMPH2_PH4_SIZE                                    0x1
#define _PWMPH2_PH4_LENGTH                                  0x1
#define _PWMPH2_PH4_MASK                                    0x10

// Register: CM1CON0
#define CM1CON0 CM1CON0
extern volatile unsigned char           CM1CON0             __at(0x119);
#ifndef _LIB_BUILD
asm("CM1CON0 equ 0119h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned C1CH                   :2;
        unsigned C1R                    :1;
        unsigned C1SP                   :1;
        unsigned C1POL                  :1;
        unsigned C1OE                   :1;
        unsigned C1OUT                  :1;
        unsigned C1ON                   :1;
    };
    struct {
        unsigned C1CH0                  :1;
        unsigned C1CH1                  :1;
    };
} CM1CON0bits_t;
extern volatile CM1CON0bits_t CM1CON0bits __at(0x119);
// bitfield macros
#define _CM1CON0_C1CH_POSN                                  0x0
#define _CM1CON0_C1CH_POSITION                              0x0
#define _CM1CON0_C1CH_SIZE                                  0x2
#define _CM1CON0_C1CH_LENGTH                                0x2
#define _CM1CON0_C1CH_MASK                                  0x3
#define _CM1CON0_C1R_POSN                                   0x2
#define _CM1CON0_C1R_POSITION                               0x2
#define _CM1CON0_C1R_SIZE                                   0x1
#define _CM1CON0_C1R_LENGTH                                 0x1
#define _CM1CON0_C1R_MASK                                   0x4
#define _CM1CON0_C1SP_POSN                                  0x3
#define _CM1CON0_C1SP_POSITION                              0x3
#define _CM1CON0_C1SP_SIZE                                  0x1
#define _CM1CON0_C1SP_LENGTH                                0x1
#define _CM1CON0_C1SP_MASK                                  0x8
#define _CM1CON0_C1POL_POSN                                 0x4
#define _CM1CON0_C1POL_POSITION                             0x4
#define _CM1CON0_C1POL_SIZE                                 0x1
#define _CM1CON0_C1POL_LENGTH                               0x1
#define _CM1CON0_C1POL_MASK                                 0x10
#define _CM1CON0_C1OE_POSN                                  0x5
#define _CM1CON0_C1OE_POSITION                              0x5
#define _CM1CON0_C1OE_SIZE                                  0x1
#define _CM1CON0_C1OE_LENGTH                                0x1
#define _CM1CON0_C1OE_MASK                                  0x20
#define _CM1CON0_C1OUT_POSN                                 0x6
#define _CM1CON0_C1OUT_POSITION                             0x6
#define _CM1CON0_C1OUT_SIZE                                 0x1
#define _CM1CON0_C1OUT_LENGTH                               0x1
#define _CM1CON0_C1OUT_MASK                                 0x40
#define _CM1CON0_C1ON_POSN                                  0x7
#define _CM1CON0_C1ON_POSITION                              0x7
#define _CM1CON0_C1ON_SIZE                                  0x1
#define _CM1CON0_C1ON_LENGTH                                0x1
#define _CM1CON0_C1ON_MASK                                  0x80
#define _CM1CON0_C1CH0_POSN                                 0x0
#define _CM1CON0_C1CH0_POSITION                             0x0
#define _CM1CON0_C1CH0_SIZE                                 0x1
#define _CM1CON0_C1CH0_LENGTH                               0x1
#define _CM1CON0_C1CH0_MASK                                 0x1
#define _CM1CON0_C1CH1_POSN                                 0x1
#define _CM1CON0_C1CH1_POSITION                             0x1
#define _CM1CON0_C1CH1_SIZE                                 0x1
#define _CM1CON0_C1CH1_LENGTH                               0x1
#define _CM1CON0_C1CH1_MASK                                 0x2

// Register: CM2CON0
#define CM2CON0 CM2CON0
extern volatile unsigned char           CM2CON0             __at(0x11A);
#ifndef _LIB_BUILD
asm("CM2CON0 equ 011Ah");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned C2CH                   :2;
        unsigned C2R                    :1;
        unsigned C2SP                   :1;
        unsigned C2POL                  :1;
        unsigned C2OE                   :1;
        unsigned C2OUT                  :1;
        unsigned C2ON                   :1;
    };
    struct {
        unsigned C2CH0                  :1;
        unsigned C2CH1                  :1;
    };
} CM2CON0bits_t;
extern volatile CM2CON0bits_t CM2CON0bits __at(0x11A);
// bitfield macros
#define _CM2CON0_C2CH_POSN                                  0x0
#define _CM2CON0_C2CH_POSITION                              0x0
#define _CM2CON0_C2CH_SIZE                                  0x2
#define _CM2CON0_C2CH_LENGTH                                0x2
#define _CM2CON0_C2CH_MASK                                  0x3
#define _CM2CON0_C2R_POSN                                   0x2
#define _CM2CON0_C2R_POSITION                               0x2
#define _CM2CON0_C2R_SIZE                                   0x1
#define _CM2CON0_C2R_LENGTH                                 0x1
#define _CM2CON0_C2R_MASK                                   0x4
#define _CM2CON0_C2SP_POSN                                  0x3
#define _CM2CON0_C2SP_POSITION                              0x3
#define _CM2CON0_C2SP_SIZE                                  0x1
#define _CM2CON0_C2SP_LENGTH                                0x1
#define _CM2CON0_C2SP_MASK                                  0x8
#define _CM2CON0_C2POL_POSN                                 0x4
#define _CM2CON0_C2POL_POSITION                             0x4
#define _CM2CON0_C2POL_SIZE                                 0x1
#define _CM2CON0_C2POL_LENGTH                               0x1
#define _CM2CON0_C2POL_MASK                                 0x10
#define _CM2CON0_C2OE_POSN                                  0x5
#define _CM2CON0_C2OE_POSITION                              0x5
#define _CM2CON0_C2OE_SIZE                                  0x1
#define _CM2CON0_C2OE_LENGTH                                0x1
#define _CM2CON0_C2OE_MASK                                  0x20
#define _CM2CON0_C2OUT_POSN                                 0x6
#define _CM2CON0_C2OUT_POSITION                             0x6
#define _CM2CON0_C2OUT_SIZE                                 0x1
#define _CM2CON0_C2OUT_LENGTH                               0x1
#define _CM2CON0_C2OUT_MASK                                 0x40
#define _CM2CON0_C2ON_POSN                                  0x7
#define _CM2CON0_C2ON_POSITION                              0x7
#define _CM2CON0_C2ON_SIZE                                  0x1
#define _CM2CON0_C2ON_LENGTH                                0x1
#define _CM2CON0_C2ON_MASK                                  0x80
#define _CM2CON0_C2CH0_POSN                                 0x0
#define _CM2CON0_C2CH0_POSITION                             0x0
#define _CM2CON0_C2CH0_SIZE                                 0x1
#define _CM2CON0_C2CH0_LENGTH                               0x1
#define _CM2CON0_C2CH0_MASK                                 0x1
#define _CM2CON0_C2CH1_POSN                                 0x1
#define _CM2CON0_C2CH1_POSITION                             0x1
#define _CM2CON0_C2CH1_SIZE                                 0x1
#define _CM2CON0_C2CH1_LENGTH                               0x1
#define _CM2CON0_C2CH1_MASK                                 0x2

// Register: CM2CON1
#define CM2CON1 CM2CON1
extern volatile unsigned char           CM2CON1             __at(0x11B);
#ifndef _LIB_BUILD
asm("CM2CON1 equ 011Bh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned C2SYNC                 :1;
        unsigned T1GSS                  :1;
        unsigned                        :4;
        unsigned MC2OUT                 :1;
        unsigned MC1OUT                 :1;
    };
} CM2CON1bits_t;
extern volatile CM2CON1bits_t CM2CON1bits __at(0x11B);
// bitfield macros
#define _CM2CON1_C2SYNC_POSN                                0x0
#define _CM2CON1_C2SYNC_POSITION                            0x0
#define _CM2CON1_C2SYNC_SIZE                                0x1
#define _CM2CON1_C2SYNC_LENGTH                              0x1
#define _CM2CON1_C2SYNC_MASK                                0x1
#define _CM2CON1_T1GSS_POSN                                 0x1
#define _CM2CON1_T1GSS_POSITION                             0x1
#define _CM2CON1_T1GSS_SIZE                                 0x1
#define _CM2CON1_T1GSS_LENGTH                               0x1
#define _CM2CON1_T1GSS_MASK                                 0x2
#define _CM2CON1_MC2OUT_POSN                                0x6
#define _CM2CON1_MC2OUT_POSITION                            0x6
#define _CM2CON1_MC2OUT_SIZE                                0x1
#define _CM2CON1_MC2OUT_LENGTH                              0x1
#define _CM2CON1_MC2OUT_MASK                                0x40
#define _CM2CON1_MC1OUT_POSN                                0x7
#define _CM2CON1_MC1OUT_POSITION                            0x7
#define _CM2CON1_MC1OUT_SIZE                                0x1
#define _CM2CON1_MC1OUT_LENGTH                              0x1
#define _CM2CON1_MC1OUT_MASK                                0x80

// Register: OPA1CON
#define OPA1CON OPA1CON
extern volatile unsigned char           OPA1CON             __at(0x11C);
#ifndef _LIB_BUILD
asm("OPA1CON equ 011Ch");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :7;
        unsigned OPAON                  :1;
    };
} OPA1CONbits_t;
extern volatile OPA1CONbits_t OPA1CONbits __at(0x11C);
// bitfield macros
#define _OPA1CON_OPAON_POSN                                 0x7
#define _OPA1CON_OPAON_POSITION                             0x7
#define _OPA1CON_OPAON_SIZE                                 0x1
#define _OPA1CON_OPAON_LENGTH                               0x1
#define _OPA1CON_OPAON_MASK                                 0x80

// Register: OPA2CON
#define OPA2CON OPA2CON
extern volatile unsigned char           OPA2CON             __at(0x11D);
#ifndef _LIB_BUILD
asm("OPA2CON equ 011Dh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :7;
        unsigned OPAON                  :1;
    };
} OPA2CONbits_t;
extern volatile OPA2CONbits_t OPA2CONbits __at(0x11D);
// bitfield macros
#define _OPA2CON_OPAON_POSN                                 0x7
#define _OPA2CON_OPAON_POSITION                             0x7
#define _OPA2CON_OPAON_SIZE                                 0x1
#define _OPA2CON_OPAON_LENGTH                               0x1
#define _OPA2CON_OPAON_MASK                                 0x80

/*
 * Bit Definitions
 */
#define _DEPRECATED __attribute__((__deprecated__))
#ifndef BANKMASK
#define BANKMASK(addr) ((addr)&07Fh)
#endif
// ADCON1<ADCS0>
extern volatile __bit                   ADCS0               __at(0x4FC);	// @ (0x9F * 8 + 4)
#define                                 ADCS0_bit           BANKMASK(ADCON1), 4
// ADCON1<ADCS1>
extern volatile __bit                   ADCS1               __at(0x4FD);	// @ (0x9F * 8 + 5)
#define                                 ADCS1_bit           BANKMASK(ADCON1), 5
// ADCON1<ADCS2>
extern volatile __bit                   ADCS2               __at(0x4FE);	// @ (0x9F * 8 + 6)
#define                                 ADCS2_bit           BANKMASK(ADCON1), 6
// ADCON0<ADFM>
extern volatile __bit                   ADFM                __at(0xFF);	// @ (0x1F * 8 + 7)
#define                                 ADFM_bit            BANKMASK(ADCON0), 7
// PIE1<ADIE>
extern volatile __bit                   ADIE                __at(0x466);	// @ (0x8C * 8 + 6)
#define                                 ADIE_bit            BANKMASK(PIE1), 6
// PIR1<ADIF>
extern volatile __bit                   ADIF                __at(0x66);	// @ (0xC * 8 + 6)
#define                                 ADIF_bit            BANKMASK(PIR1), 6
// ADCON0<ADON>
extern volatile __bit                   ADON                __at(0xF8);	// @ (0x1F * 8 + 0)
#define                                 ADON_bit            BANKMASK(ADCON0), 0
// ANSEL0<ANS0>
extern volatile __bit                   ANS0                __at(0x488);	// @ (0x91 * 8 + 0)
#define                                 ANS0_bit            BANKMASK(ANSEL0), 0
// ANSEL0<ANS1>
extern volatile __bit                   ANS1                __at(0x489);	// @ (0x91 * 8 + 1)
#define                                 ANS1_bit            BANKMASK(ANSEL0), 1
// ANSEL1<ANS10>
extern volatile __bit                   ANS10               __at(0x49A);	// @ (0x93 * 8 + 2)
#define                                 ANS10_bit           BANKMASK(ANSEL1), 2
// ANSEL1<ANS11>
extern volatile __bit                   ANS11               __at(0x49B);	// @ (0x93 * 8 + 3)
#define                                 ANS11_bit           BANKMASK(ANSEL1), 3
// ANSEL0<ANS2>
extern volatile __bit                   ANS2                __at(0x48A);	// @ (0x91 * 8 + 2)
#define                                 ANS2_bit            BANKMASK(ANSEL0), 2
// ANSEL0<ANS3>
extern volatile __bit                   ANS3                __at(0x48B);	// @ (0x91 * 8 + 3)
#define                                 ANS3_bit            BANKMASK(ANSEL0), 3
// ANSEL0<ANS4>
extern volatile __bit                   ANS4                __at(0x48C);	// @ (0x91 * 8 + 4)
#define                                 ANS4_bit            BANKMASK(ANSEL0), 4
// ANSEL0<ANS5>
extern volatile __bit                   ANS5                __at(0x48D);	// @ (0x91 * 8 + 5)
#define                                 ANS5_bit            BANKMASK(ANSEL0), 5
// ANSEL0<ANS6>
extern volatile __bit                   ANS6                __at(0x48E);	// @ (0x91 * 8 + 6)
#define                                 ANS6_bit            BANKMASK(ANSEL0), 6
// ANSEL0<ANS7>
extern volatile __bit                   ANS7                __at(0x48F);	// @ (0x91 * 8 + 7)
#define                                 ANS7_bit            BANKMASK(ANSEL0), 7
// ANSEL1<ANS8>
extern volatile __bit                   ANS8                __at(0x498);	// @ (0x93 * 8 + 0)
#define                                 ANS8_bit            BANKMASK(ANSEL1), 0
// ANSEL1<ANS9>
extern volatile __bit                   ANS9                __at(0x499);	// @ (0x93 * 8 + 1)
#define                                 ANS9_bit            BANKMASK(ANSEL1), 1
// REFCON<BGST>
extern volatile __bit                   BGST                __at(0x4C5);	// @ (0x98 * 8 + 5)
#define                                 BGST_bit            BANKMASK(REFCON), 5
// PWMCON0<BLANK1>
extern volatile __bit                   BLANK1              __at(0x88C);	// @ (0x111 * 8 + 4)
#define                                 BLANK1_bit          BANKMASK(PWMCON0), 4
// PWMCON0<BLANK2>
extern volatile __bit                   BLANK2              __at(0x88D);	// @ (0x111 * 8 + 5)
#define                                 BLANK2_bit          BANKMASK(PWMCON0), 5
// CM1CON0<C1CH0>
extern volatile __bit                   C1CH0               __at(0x8C8);	// @ (0x119 * 8 + 0)
#define                                 C1CH0_bit           BANKMASK(CM1CON0), 0
// CM1CON0<C1CH1>
extern volatile __bit                   C1CH1               __at(0x8C9);	// @ (0x119 * 8 + 1)
#define                                 C1CH1_bit           BANKMASK(CM1CON0), 1
// PIE1<C1IE>
extern volatile __bit                   C1IE                __at(0x463);	// @ (0x8C * 8 + 3)
#define                                 C1IE_bit            BANKMASK(PIE1), 3
// PIR1<C1IF>
extern volatile __bit                   C1IF                __at(0x63);	// @ (0xC * 8 + 3)
#define                                 C1IF_bit            BANKMASK(PIR1), 3
// CM1CON0<C1OE>
extern volatile __bit                   C1OE                __at(0x8CD);	// @ (0x119 * 8 + 5)
#define                                 C1OE_bit            BANKMASK(CM1CON0), 5
// CM1CON0<C1ON>
extern volatile __bit                   C1ON                __at(0x8CF);	// @ (0x119 * 8 + 7)
#define                                 C1ON_bit            BANKMASK(CM1CON0), 7
// CM1CON0<C1OUT>
extern volatile __bit                   C1OUT               __at(0x8CE);	// @ (0x119 * 8 + 6)
#define                                 C1OUT_bit           BANKMASK(CM1CON0), 6
// CM1CON0<C1POL>
extern volatile __bit                   C1POL               __at(0x8CC);	// @ (0x119 * 8 + 4)
#define                                 C1POL_bit           BANKMASK(CM1CON0), 4
// CM1CON0<C1R>
extern volatile __bit                   C1R                 __at(0x8CA);	// @ (0x119 * 8 + 2)
#define                                 C1R_bit             BANKMASK(CM1CON0), 2
// CM1CON0<C1SP>
extern volatile __bit                   C1SP                __at(0x8CB);	// @ (0x119 * 8 + 3)
#define                                 C1SP_bit            BANKMASK(CM1CON0), 3
// VRCON<C1VREN>
extern volatile __bit                   C1VREN              __at(0x4CF);	// @ (0x99 * 8 + 7)
#define                                 C1VREN_bit          BANKMASK(VRCON), 7
// CM2CON0<C2CH0>
extern volatile __bit                   C2CH0               __at(0x8D0);	// @ (0x11A * 8 + 0)
#define                                 C2CH0_bit           BANKMASK(CM2CON0), 0
// CM2CON0<C2CH1>
extern volatile __bit                   C2CH1               __at(0x8D1);	// @ (0x11A * 8 + 1)
#define                                 C2CH1_bit           BANKMASK(CM2CON0), 1
// PIE1<C2IE>
extern volatile __bit                   C2IE                __at(0x464);	// @ (0x8C * 8 + 4)
#define                                 C2IE_bit            BANKMASK(PIE1), 4
// PIR1<C2IF>
extern volatile __bit                   C2IF                __at(0x64);	// @ (0xC * 8 + 4)
#define                                 C2IF_bit            BANKMASK(PIR1), 4
// CM2CON0<C2OE>
extern volatile __bit                   C2OE                __at(0x8D5);	// @ (0x11A * 8 + 5)
#define                                 C2OE_bit            BANKMASK(CM2CON0), 5
// CM2CON0<C2ON>
extern volatile __bit                   C2ON                __at(0x8D7);	// @ (0x11A * 8 + 7)
#define                                 C2ON_bit            BANKMASK(CM2CON0), 7
// CM2CON0<C2OUT>
extern volatile __bit                   C2OUT               __at(0x8D6);	// @ (0x11A * 8 + 6)
#define                                 C2OUT_bit           BANKMASK(CM2CON0), 6
// CM2CON0<C2POL>
extern volatile __bit                   C2POL               __at(0x8D4);	// @ (0x11A * 8 + 4)
#define                                 C2POL_bit           BANKMASK(CM2CON0), 4
// CM2CON0<C2R>
extern volatile __bit                   C2R                 __at(0x8D2);	// @ (0x11A * 8 + 2)
#define                                 C2R_bit             BANKMASK(CM2CON0), 2
// CM2CON0<C2SP>
extern volatile __bit                   C2SP                __at(0x8D3);	// @ (0x11A * 8 + 3)
#define                                 C2SP_bit            BANKMASK(CM2CON0), 3
// CM2CON1<C2SYNC>
extern volatile __bit                   C2SYNC              __at(0x8D8);	// @ (0x11B * 8 + 0)
#define                                 C2SYNC_bit          BANKMASK(CM2CON1), 0
// VRCON<C2VREN>
extern volatile __bit                   C2VREN              __at(0x4CE);	// @ (0x99 * 8 + 6)
#define                                 C2VREN_bit          BANKMASK(VRCON), 6
// STATUS<CARRY>
extern volatile __bit                   CARRY               __at(0x18);	// @ (0x3 * 8 + 0)
#define                                 CARRY_bit           BANKMASK(STATUS), 0
// PIE1<CCP1IE>
extern volatile __bit                   CCP1IE              __at(0x465);	// @ (0x8C * 8 + 5)
#define                                 CCP1IE_bit          BANKMASK(PIE1), 5
// PIR1<CCP1IF>
extern volatile __bit                   CCP1IF              __at(0x65);	// @ (0xC * 8 + 5)
#define                                 CCP1IF_bit          BANKMASK(PIR1), 5
// CCP1CON<CCP1M0>
extern volatile __bit                   CCP1M0              __at(0xA8);	// @ (0x15 * 8 + 0)
#define                                 CCP1M0_bit          BANKMASK(CCP1CON), 0
// CCP1CON<CCP1M1>
extern volatile __bit                   CCP1M1              __at(0xA9);	// @ (0x15 * 8 + 1)
#define                                 CCP1M1_bit          BANKMASK(CCP1CON), 1
// CCP1CON<CCP1M2>
extern volatile __bit                   CCP1M2              __at(0xAA);	// @ (0x15 * 8 + 2)
#define                                 CCP1M2_bit          BANKMASK(CCP1CON), 2
// CCP1CON<CCP1M3>
extern volatile __bit                   CCP1M3              __at(0xAB);	// @ (0x15 * 8 + 3)
#define                                 CCP1M3_bit          BANKMASK(CCP1CON), 3
// ADCON0<CHS0>
extern volatile __bit                   CHS0                __at(0xFA);	// @ (0x1F * 8 + 2)
#define                                 CHS0_bit            BANKMASK(ADCON0), 2
// ADCON0<CHS1>
extern volatile __bit                   CHS1                __at(0xFB);	// @ (0x1F * 8 + 3)
#define                                 CHS1_bit            BANKMASK(ADCON0), 3
// ADCON0<CHS2>
extern volatile __bit                   CHS2                __at(0xFC);	// @ (0x1F * 8 + 4)
#define                                 CHS2_bit            BANKMASK(ADCON0), 4
// ADCON0<CHS3>
extern volatile __bit                   CHS3                __at(0xFD);	// @ (0x1F * 8 + 5)
#define                                 CHS3_bit            BANKMASK(ADCON0), 5
// PWMCON1<CMDLY0>
extern volatile __bit                   CMDLY0              __at(0x880);	// @ (0x110 * 8 + 0)
#define                                 CMDLY0_bit          BANKMASK(PWMCON1), 0
// PWMCON1<CMDLY1>
extern volatile __bit                   CMDLY1              __at(0x881);	// @ (0x110 * 8 + 1)
#define                                 CMDLY1_bit          BANKMASK(PWMCON1), 1
// PWMCON1<CMDLY2>
extern volatile __bit                   CMDLY2              __at(0x882);	// @ (0x110 * 8 + 2)
#define                                 CMDLY2_bit          BANKMASK(PWMCON1), 2
// PWMCON1<CMDLY3>
extern volatile __bit                   CMDLY3              __at(0x883);	// @ (0x110 * 8 + 3)
#define                                 CMDLY3_bit          BANKMASK(PWMCON1), 3
// PWMCON1<CMDLY4>
extern volatile __bit                   CMDLY4              __at(0x884);	// @ (0x110 * 8 + 4)
#define                                 CMDLY4_bit          BANKMASK(PWMCON1), 4
// PWMCON1<COMOD0>
extern volatile __bit                   COMOD0              __at(0x885);	// @ (0x110 * 8 + 5)
#define                                 COMOD0_bit          BANKMASK(PWMCON1), 5
// PWMCON1<COMOD1>
extern volatile __bit                   COMOD1              __at(0x886);	// @ (0x110 * 8 + 6)
#define                                 COMOD1_bit          BANKMASK(PWMCON1), 6
// REFCON<CVROE>
extern volatile __bit                   CVROE               __at(0x4C1);	// @ (0x98 * 8 + 1)
#define                                 CVROE_bit           BANKMASK(REFCON), 1
// STATUS<DC>
extern volatile __bit                   DC                  __at(0x19);	// @ (0x3 * 8 + 1)
#define                                 DC_bit              BANKMASK(STATUS), 1
// CCP1CON<DC1B0>
extern volatile __bit                   DC1B0               __at(0xAC);	// @ (0x15 * 8 + 4)
#define                                 DC1B0_bit           BANKMASK(CCP1CON), 4
// CCP1CON<DC1B1>
extern volatile __bit                   DC1B1               __at(0xAD);	// @ (0x15 * 8 + 5)
#define                                 DC1B1_bit           BANKMASK(CCP1CON), 5
// PIE1<EEIE>
extern volatile __bit                   EEIE                __at(0x467);	// @ (0x8C * 8 + 7)
#define                                 EEIE_bit            BANKMASK(PIE1), 7
// PIR1<EEIF>
extern volatile __bit                   EEIF                __at(0x67);	// @ (0xC * 8 + 7)
#define                                 EEIF_bit            BANKMASK(PIR1), 7
// INTCON<GIE>
extern volatile __bit                   GIE                 __at(0x5F);	// @ (0xB * 8 + 7)
#define                                 GIE_bit             BANKMASK(INTCON), 7
// ADCON0<GO>
extern volatile __bit                   GO                  __at(0xF9);	// @ (0x1F * 8 + 1)
#define                                 GO_bit              BANKMASK(ADCON0), 1
// ADCON0<GO_DONE>
extern volatile __bit                   GO_DONE             __at(0xF9);	// @ (0x1F * 8 + 1)
#define                                 GO_DONE_bit         BANKMASK(ADCON0), 1
// ADCON0<GO_nDONE>
extern volatile __bit                   GO_nDONE            __at(0xF9);	// @ (0x1F * 8 + 1)
#define                                 GO_nDONE_bit        BANKMASK(ADCON0), 1
// OSCCON<HTS>
extern volatile __bit                   HTS                 __at(0x47A);	// @ (0x8F * 8 + 2)
#define                                 HTS_bit             BANKMASK(OSCCON), 2
// INTCON<INTE>
extern volatile __bit                   INTE                __at(0x5C);	// @ (0xB * 8 + 4)
#define                                 INTE_bit            BANKMASK(INTCON), 4
// OPTION_REG<INTEDG>
extern volatile __bit                   INTEDG              __at(0x40E);	// @ (0x81 * 8 + 6)
#define                                 INTEDG_bit          BANKMASK(OPTION_REG), 6
// INTCON<INTF>
extern volatile __bit                   INTF                __at(0x59);	// @ (0xB * 8 + 1)
#define                                 INTF_bit            BANKMASK(INTCON), 1
// IOCA<IOC0>
extern volatile __bit                   IOC0                __at(0x4B0);	// @ (0x96 * 8 + 0)
#define                                 IOC0_bit            BANKMASK(IOCA), 0
// IOCA<IOC1>
extern volatile __bit                   IOC1                __at(0x4B1);	// @ (0x96 * 8 + 1)
#define                                 IOC1_bit            BANKMASK(IOCA), 1
// IOCA<IOC2>
extern volatile __bit                   IOC2                __at(0x4B2);	// @ (0x96 * 8 + 2)
#define                                 IOC2_bit            BANKMASK(IOCA), 2
// IOCA<IOC3>
extern volatile __bit                   IOC3                __at(0x4B3);	// @ (0x96 * 8 + 3)
#define                                 IOC3_bit            BANKMASK(IOCA), 3
// IOCA<IOC4>
extern volatile __bit                   IOC4                __at(0x4B4);	// @ (0x96 * 8 + 4)
#define                                 IOC4_bit            BANKMASK(IOCA), 4
// IOCA<IOC5>
extern volatile __bit                   IOC5                __at(0x4B5);	// @ (0x96 * 8 + 5)
#define                                 IOC5_bit            BANKMASK(IOCA), 5
// IOCA<IOCA0>
extern volatile __bit                   IOCA0               __at(0x4B0);	// @ (0x96 * 8 + 0)
#define                                 IOCA0_bit           BANKMASK(IOCA), 0
// IOCA<IOCA1>
extern volatile __bit                   IOCA1               __at(0x4B1);	// @ (0x96 * 8 + 1)
#define                                 IOCA1_bit           BANKMASK(IOCA), 1
// IOCA<IOCA2>
extern volatile __bit                   IOCA2               __at(0x4B2);	// @ (0x96 * 8 + 2)
#define                                 IOCA2_bit           BANKMASK(IOCA), 2
// IOCA<IOCA3>
extern volatile __bit                   IOCA3               __at(0x4B3);	// @ (0x96 * 8 + 3)
#define                                 IOCA3_bit           BANKMASK(IOCA), 3
// IOCA<IOCA4>
extern volatile __bit                   IOCA4               __at(0x4B4);	// @ (0x96 * 8 + 4)
#define                                 IOCA4_bit           BANKMASK(IOCA), 4
// IOCA<IOCA5>
extern volatile __bit                   IOCA5               __at(0x4B5);	// @ (0x96 * 8 + 5)
#define                                 IOCA5_bit           BANKMASK(IOCA), 5
// OSCCON<IRCF0>
extern volatile __bit                   IRCF0               __at(0x47C);	// @ (0x8F * 8 + 4)
#define                                 IRCF0_bit           BANKMASK(OSCCON), 4
// OSCCON<IRCF1>
extern volatile __bit                   IRCF1               __at(0x47D);	// @ (0x8F * 8 + 5)
#define                                 IRCF1_bit           BANKMASK(OSCCON), 5
// OSCCON<IRCF2>
extern volatile __bit                   IRCF2               __at(0x47E);	// @ (0x8F * 8 + 6)
#define                                 IRCF2_bit           BANKMASK(OSCCON), 6
// STATUS<IRP>
extern volatile __bit                   IRP                 __at(0x1F);	// @ (0x3 * 8 + 7)
#define                                 IRP_bit             BANKMASK(STATUS), 7
// OSCCON<LTS>
extern volatile __bit                   LTS                 __at(0x479);	// @ (0x8F * 8 + 1)
#define                                 LTS_bit             BANKMASK(OSCCON), 1
// CM2CON1<MC1OUT>
extern volatile __bit                   MC1OUT              __at(0x8DF);	// @ (0x11B * 8 + 7)
#define                                 MC1OUT_bit          BANKMASK(CM2CON1), 7
// CM2CON1<MC2OUT>
extern volatile __bit                   MC2OUT              __at(0x8DE);	// @ (0x11B * 8 + 6)
#define                                 MC2OUT_bit          BANKMASK(CM2CON1), 6
// PIE1<OSFIE>
extern volatile __bit                   OSFIE               __at(0x462);	// @ (0x8C * 8 + 2)
#define                                 OSFIE_bit           BANKMASK(PIE1), 2
// PIR1<OSFIF>
extern volatile __bit                   OSFIF               __at(0x62);	// @ (0xC * 8 + 2)
#define                                 OSFIF_bit           BANKMASK(PIR1), 2
// OSCCON<OSTS>
extern volatile __bit                   OSTS                __at(0x47B);	// @ (0x8F * 8 + 3)
#define                                 OSTS_bit            BANKMASK(OSCCON), 3
// PWMCON1<OVRLP>
extern volatile __bit                   OVRLP               __at(0x887);	// @ (0x110 * 8 + 7)
#define                                 OVRLP_bit           BANKMASK(PWMCON1), 7
// PWMCON0<PASEN>
extern volatile __bit                   PASEN               __at(0x88E);	// @ (0x111 * 8 + 6)
#define                                 PASEN_bit           BANKMASK(PWMCON0), 6
// INTCON<PEIE>
extern volatile __bit                   PEIE                __at(0x5E);	// @ (0xB * 8 + 6)
#define                                 PEIE_bit            BANKMASK(INTCON), 6
// PWMCLK<PER0>
extern volatile __bit                   PER0                __at(0x890);	// @ (0x112 * 8 + 0)
#define                                 PER0_bit            BANKMASK(PWMCLK), 0
// PWMCLK<PER1>
extern volatile __bit                   PER1                __at(0x891);	// @ (0x112 * 8 + 1)
#define                                 PER1_bit            BANKMASK(PWMCLK), 1
// PWMCLK<PER2>
extern volatile __bit                   PER2                __at(0x892);	// @ (0x112 * 8 + 2)
#define                                 PER2_bit            BANKMASK(PWMCLK), 2
// PWMCLK<PER3>
extern volatile __bit                   PER3                __at(0x893);	// @ (0x112 * 8 + 3)
#define                                 PER3_bit            BANKMASK(PWMCLK), 3
// PWMCLK<PER4>
extern volatile __bit                   PER4                __at(0x894);	// @ (0x112 * 8 + 4)
#define                                 PER4_bit            BANKMASK(PWMCLK), 4
// PWMCON0<PH1EN>
extern volatile __bit                   PH1EN               __at(0x888);	// @ (0x111 * 8 + 0)
#define                                 PH1EN_bit           BANKMASK(PWMCON0), 0
// PWMCON0<PH2EN>
extern volatile __bit                   PH2EN               __at(0x889);	// @ (0x111 * 8 + 1)
#define                                 PH2EN_bit           BANKMASK(PWMCON0), 1
// PWMCON0<PRSEN>
extern volatile __bit                   PRSEN               __at(0x88F);	// @ (0x111 * 8 + 7)
#define                                 PRSEN_bit           BANKMASK(PWMCON0), 7
// OPTION_REG<PS0>
extern volatile __bit                   PS0                 __at(0x408);	// @ (0x81 * 8 + 0)
#define                                 PS0_bit             BANKMASK(OPTION_REG), 0
// OPTION_REG<PS1>
extern volatile __bit                   PS1                 __at(0x409);	// @ (0x81 * 8 + 1)
#define                                 PS1_bit             BANKMASK(OPTION_REG), 1
// OPTION_REG<PS2>
extern volatile __bit                   PS2                 __at(0x40A);	// @ (0x81 * 8 + 2)
#define                                 PS2_bit             BANKMASK(OPTION_REG), 2
// OPTION_REG<PSA>
extern volatile __bit                   PSA                 __at(0x40B);	// @ (0x81 * 8 + 3)
#define                                 PSA_bit             BANKMASK(OPTION_REG), 3
// PWMCLK<PWMASE>
extern volatile __bit                   PWMASE              __at(0x897);	// @ (0x112 * 8 + 7)
#define                                 PWMASE_bit          BANKMASK(PWMCLK), 7
// PWMCLK<PWMP0>
extern volatile __bit                   PWMP0               __at(0x895);	// @ (0x112 * 8 + 5)
#define                                 PWMP0_bit           BANKMASK(PWMCLK), 5
// PWMCLK<PWMP1>
extern volatile __bit                   PWMP1               __at(0x896);	// @ (0x112 * 8 + 6)
#define                                 PWMP1_bit           BANKMASK(PWMCLK), 6
// PORTA<RA0>
extern volatile __bit                   RA0                 __at(0x28);	// @ (0x5 * 8 + 0)
#define                                 RA0_bit             BANKMASK(PORTA), 0
// PORTA<RA1>
extern volatile __bit                   RA1                 __at(0x29);	// @ (0x5 * 8 + 1)
#define                                 RA1_bit             BANKMASK(PORTA), 1
// PORTA<RA2>
extern volatile __bit                   RA2                 __at(0x2A);	// @ (0x5 * 8 + 2)
#define                                 RA2_bit             BANKMASK(PORTA), 2
// PORTA<RA3>
extern volatile __bit                   RA3                 __at(0x2B);	// @ (0x5 * 8 + 3)
#define                                 RA3_bit             BANKMASK(PORTA), 3
// PORTA<RA4>
extern volatile __bit                   RA4                 __at(0x2C);	// @ (0x5 * 8 + 4)
#define                                 RA4_bit             BANKMASK(PORTA), 4
// PORTA<RA5>
extern volatile __bit                   RA5                 __at(0x2D);	// @ (0x5 * 8 + 5)
#define                                 RA5_bit             BANKMASK(PORTA), 5
// INTCON<RAIE>
extern volatile __bit                   RAIE                __at(0x5B);	// @ (0xB * 8 + 3)
#define                                 RAIE_bit            BANKMASK(INTCON), 3
// INTCON<RAIF>
extern volatile __bit                   RAIF                __at(0x58);	// @ (0xB * 8 + 0)
#define                                 RAIF_bit            BANKMASK(INTCON), 0
// PORTB<RB4>
extern volatile __bit                   RB4                 __at(0x34);	// @ (0x6 * 8 + 4)
#define                                 RB4_bit             BANKMASK(PORTB), 4
// PORTB<RB5>
extern volatile __bit                   RB5                 __at(0x35);	// @ (0x6 * 8 + 5)
#define                                 RB5_bit             BANKMASK(PORTB), 5
// PORTB<RB6>
extern volatile __bit                   RB6                 __at(0x36);	// @ (0x6 * 8 + 6)
#define                                 RB6_bit             BANKMASK(PORTB), 6
// PORTB<RB7>
extern volatile __bit                   RB7                 __at(0x37);	// @ (0x6 * 8 + 7)
#define                                 RB7_bit             BANKMASK(PORTB), 7
// PORTC<RC0>
extern volatile __bit                   RC0                 __at(0x38);	// @ (0x7 * 8 + 0)
#define                                 RC0_bit             BANKMASK(PORTC), 0
// PORTC<RC1>
extern volatile __bit                   RC1                 __at(0x39);	// @ (0x7 * 8 + 1)
#define                                 RC1_bit             BANKMASK(PORTC), 1
// PORTC<RC2>
extern volatile __bit                   RC2                 __at(0x3A);	// @ (0x7 * 8 + 2)
#define                                 RC2_bit             BANKMASK(PORTC), 2
// PORTC<RC3>
extern volatile __bit                   RC3                 __at(0x3B);	// @ (0x7 * 8 + 3)
#define                                 RC3_bit             BANKMASK(PORTC), 3
// PORTC<RC4>
extern volatile __bit                   RC4                 __at(0x3C);	// @ (0x7 * 8 + 4)
#define                                 RC4_bit             BANKMASK(PORTC), 4
// PORTC<RC5>
extern volatile __bit                   RC5                 __at(0x3D);	// @ (0x7 * 8 + 5)
#define                                 RC5_bit             BANKMASK(PORTC), 5
// PORTC<RC6>
extern volatile __bit                   RC6                 __at(0x3E);	// @ (0x7 * 8 + 6)
#define                                 RC6_bit             BANKMASK(PORTC), 6
// PORTC<RC7>
extern volatile __bit                   RC7                 __at(0x3F);	// @ (0x7 * 8 + 7)
#define                                 RC7_bit             BANKMASK(PORTC), 7
// EECON1<RD>
extern volatile __bit                   RD                  __at(0x4E0);	// @ (0x9C * 8 + 0)
#define                                 RD_bit              BANKMASK(EECON1), 0
// STATUS<RP0>
extern volatile __bit                   RP0                 __at(0x1D);	// @ (0x3 * 8 + 5)
#define                                 RP0_bit             BANKMASK(STATUS), 5
// STATUS<RP1>
extern volatile __bit                   RP1                 __at(0x1E);	// @ (0x3 * 8 + 6)
#define                                 RP1_bit             BANKMASK(STATUS), 6
// PCON<SBODEN>
extern volatile __bit                   SBODEN              __at(0x474);	// @ (0x8E * 8 + 4)
#define                                 SBODEN_bit          BANKMASK(PCON), 4
// PCON<SBOREN>
extern volatile __bit                   SBOREN              __at(0x474);	// @ (0x8E * 8 + 4)
#define                                 SBOREN_bit          BANKMASK(PCON), 4
// OSCCON<SCS>
extern volatile __bit                   SCS                 __at(0x478);	// @ (0x8F * 8 + 0)
#define                                 SCS_bit             BANKMASK(OSCCON), 0
// WDTCON<SWDTEN>
extern volatile __bit                   SWDTEN              __at(0xC0);	// @ (0x18 * 8 + 0)
#define                                 SWDTEN_bit          BANKMASK(WDTCON), 0
// PWMCON0<SYNC0>
extern volatile __bit                   SYNC0               __at(0x88A);	// @ (0x111 * 8 + 2)
#define                                 SYNC0_bit           BANKMASK(PWMCON0), 2
// PWMCON0<SYNC1>
extern volatile __bit                   SYNC1               __at(0x88B);	// @ (0x111 * 8 + 3)
#define                                 SYNC1_bit           BANKMASK(PWMCON0), 3
// OPTION_REG<T0CS>
extern volatile __bit                   T0CS                __at(0x40D);	// @ (0x81 * 8 + 5)
#define                                 T0CS_bit            BANKMASK(OPTION_REG), 5
// INTCON<T0IE>
extern volatile __bit                   T0IE                __at(0x5D);	// @ (0xB * 8 + 5)
#define                                 T0IE_bit            BANKMASK(INTCON), 5
// INTCON<T0IF>
extern volatile __bit                   T0IF                __at(0x5A);	// @ (0xB * 8 + 2)
#define                                 T0IF_bit            BANKMASK(INTCON), 2
// OPTION_REG<T0SE>
extern volatile __bit                   T0SE                __at(0x40C);	// @ (0x81 * 8 + 4)
#define                                 T0SE_bit            BANKMASK(OPTION_REG), 4
// T1CON<T1CKPS0>
extern volatile __bit                   T1CKPS0             __at(0x84);	// @ (0x10 * 8 + 4)
#define                                 T1CKPS0_bit         BANKMASK(T1CON), 4
// T1CON<T1CKPS1>
extern volatile __bit                   T1CKPS1             __at(0x85);	// @ (0x10 * 8 + 5)
#define                                 T1CKPS1_bit         BANKMASK(T1CON), 5
// T1CON<T1GE>
extern volatile __bit                   T1GE                __at(0x86);	// @ (0x10 * 8 + 6)
#define                                 T1GE_bit            BANKMASK(T1CON), 6
// T1CON<T1GINV>
extern volatile __bit                   T1GINV              __at(0x87);	// @ (0x10 * 8 + 7)
#define                                 T1GINV_bit          BANKMASK(T1CON), 7
// CM2CON1<T1GSS>
extern volatile __bit                   T1GSS               __at(0x8D9);	// @ (0x11B * 8 + 1)
#define                                 T1GSS_bit           BANKMASK(CM2CON1), 1
// PIE1<T1IE>
extern volatile __bit                   T1IE                __at(0x460);	// @ (0x8C * 8 + 0)
#define                                 T1IE_bit            BANKMASK(PIE1), 0
// PIR1<T1IF>
extern volatile __bit                   T1IF                __at(0x60);	// @ (0xC * 8 + 0)
#define                                 T1IF_bit            BANKMASK(PIR1), 0
// T1CON<T1OSCEN>
extern volatile __bit                   T1OSCEN             __at(0x83);	// @ (0x10 * 8 + 3)
#define                                 T1OSCEN_bit         BANKMASK(T1CON), 3
// T2CON<T2CKPS0>
extern volatile __bit                   T2CKPS0             __at(0x90);	// @ (0x12 * 8 + 0)
#define                                 T2CKPS0_bit         BANKMASK(T2CON), 0
// T2CON<T2CKPS1>
extern volatile __bit                   T2CKPS1             __at(0x91);	// @ (0x12 * 8 + 1)
#define                                 T2CKPS1_bit         BANKMASK(T2CON), 1
// PIE1<T2IE>
extern volatile __bit                   T2IE                __at(0x461);	// @ (0x8C * 8 + 1)
#define                                 T2IE_bit            BANKMASK(PIE1), 1
// PIR1<T2IF>
extern volatile __bit                   T2IF                __at(0x61);	// @ (0xC * 8 + 1)
#define                                 T2IF_bit            BANKMASK(PIR1), 1
// INTCON<TMR0IE>
extern volatile __bit                   TMR0IE              __at(0x5D);	// @ (0xB * 8 + 5)
#define                                 TMR0IE_bit          BANKMASK(INTCON), 5
// INTCON<TMR0IF>
extern volatile __bit                   TMR0IF              __at(0x5A);	// @ (0xB * 8 + 2)
#define                                 TMR0IF_bit          BANKMASK(INTCON), 2
// T1CON<TMR1CS>
extern volatile __bit                   TMR1CS              __at(0x81);	// @ (0x10 * 8 + 1)
#define                                 TMR1CS_bit          BANKMASK(T1CON), 1
// T1CON<TMR1GE>
extern volatile __bit                   TMR1GE              __at(0x86);	// @ (0x10 * 8 + 6)
#define                                 TMR1GE_bit          BANKMASK(T1CON), 6
// PIE1<TMR1IE>
extern volatile __bit                   TMR1IE              __at(0x460);	// @ (0x8C * 8 + 0)
#define                                 TMR1IE_bit          BANKMASK(PIE1), 0
// PIR1<TMR1IF>
extern volatile __bit                   TMR1IF              __at(0x60);	// @ (0xC * 8 + 0)
#define                                 TMR1IF_bit          BANKMASK(PIR1), 0
// T1CON<TMR1ON>
extern volatile __bit                   TMR1ON              __at(0x80);	// @ (0x10 * 8 + 0)
#define                                 TMR1ON_bit          BANKMASK(T1CON), 0
// PIE1<TMR2IE>
extern volatile __bit                   TMR2IE              __at(0x461);	// @ (0x8C * 8 + 1)
#define                                 TMR2IE_bit          BANKMASK(PIE1), 1
// PIR1<TMR2IF>
extern volatile __bit                   TMR2IF              __at(0x61);	// @ (0xC * 8 + 1)
#define                                 TMR2IF_bit          BANKMASK(PIR1), 1
// T2CON<TMR2ON>
extern volatile __bit                   TMR2ON              __at(0x92);	// @ (0x12 * 8 + 2)
#define                                 TMR2ON_bit          BANKMASK(T2CON), 2
// T2CON<TOUTPS0>
extern volatile __bit                   TOUTPS0             __at(0x93);	// @ (0x12 * 8 + 3)
#define                                 TOUTPS0_bit         BANKMASK(T2CON), 3
// T2CON<TOUTPS1>
extern volatile __bit                   TOUTPS1             __at(0x94);	// @ (0x12 * 8 + 4)
#define                                 TOUTPS1_bit         BANKMASK(T2CON), 4
// T2CON<TOUTPS2>
extern volatile __bit                   TOUTPS2             __at(0x95);	// @ (0x12 * 8 + 5)
#define                                 TOUTPS2_bit         BANKMASK(T2CON), 5
// T2CON<TOUTPS3>
extern volatile __bit                   TOUTPS3             __at(0x96);	// @ (0x12 * 8 + 6)
#define                                 TOUTPS3_bit         BANKMASK(T2CON), 6
// TRISA<TRISA0>
extern volatile __bit                   TRISA0              __at(0x428);	// @ (0x85 * 8 + 0)
#define                                 TRISA0_bit          BANKMASK(TRISA), 0
// TRISA<TRISA1>
extern volatile __bit                   TRISA1              __at(0x429);	// @ (0x85 * 8 + 1)
#define                                 TRISA1_bit          BANKMASK(TRISA), 1
// TRISA<TRISA2>
extern volatile __bit                   TRISA2              __at(0x42A);	// @ (0x85 * 8 + 2)
#define                                 TRISA2_bit          BANKMASK(TRISA), 2
// TRISA<TRISA3>
extern volatile __bit                   TRISA3              __at(0x42B);	// @ (0x85 * 8 + 3)
#define                                 TRISA3_bit          BANKMASK(TRISA), 3
// TRISA<TRISA4>
extern volatile __bit                   TRISA4              __at(0x42C);	// @ (0x85 * 8 + 4)
#define                                 TRISA4_bit          BANKMASK(TRISA), 4
// TRISA<TRISA5>
extern volatile __bit                   TRISA5              __at(0x42D);	// @ (0x85 * 8 + 5)
#define                                 TRISA5_bit          BANKMASK(TRISA), 5
// TRISB<TRISB4>
extern volatile __bit                   TRISB4              __at(0x434);	// @ (0x86 * 8 + 4)
#define                                 TRISB4_bit          BANKMASK(TRISB), 4
// TRISB<TRISB5>
extern volatile __bit                   TRISB5              __at(0x435);	// @ (0x86 * 8 + 5)
#define                                 TRISB5_bit          BANKMASK(TRISB), 5
// TRISB<TRISB6>
extern volatile __bit                   TRISB6              __at(0x436);	// @ (0x86 * 8 + 6)
#define                                 TRISB6_bit          BANKMASK(TRISB), 6
// TRISB<TRISB7>
extern volatile __bit                   TRISB7              __at(0x437);	// @ (0x86 * 8 + 7)
#define                                 TRISB7_bit          BANKMASK(TRISB), 7
// TRISC<TRISC0>
extern volatile __bit                   TRISC0              __at(0x438);	// @ (0x87 * 8 + 0)
#define                                 TRISC0_bit          BANKMASK(TRISC), 0
// TRISC<TRISC1>
extern volatile __bit                   TRISC1              __at(0x439);	// @ (0x87 * 8 + 1)
#define                                 TRISC1_bit          BANKMASK(TRISC), 1
// TRISC<TRISC2>
extern volatile __bit                   TRISC2              __at(0x43A);	// @ (0x87 * 8 + 2)
#define                                 TRISC2_bit          BANKMASK(TRISC), 2
// TRISC<TRISC3>
extern volatile __bit                   TRISC3              __at(0x43B);	// @ (0x87 * 8 + 3)
#define                                 TRISC3_bit          BANKMASK(TRISC), 3
// TRISC<TRISC4>
extern volatile __bit                   TRISC4              __at(0x43C);	// @ (0x87 * 8 + 4)
#define                                 TRISC4_bit          BANKMASK(TRISC), 4
// TRISC<TRISC5>
extern volatile __bit                   TRISC5              __at(0x43D);	// @ (0x87 * 8 + 5)
#define                                 TRISC5_bit          BANKMASK(TRISC), 5
// TRISC<TRISC6>
extern volatile __bit                   TRISC6              __at(0x43E);	// @ (0x87 * 8 + 6)
#define                                 TRISC6_bit          BANKMASK(TRISC), 6
// TRISC<TRISC7>
extern volatile __bit                   TRISC7              __at(0x43F);	// @ (0x87 * 8 + 7)
#define                                 TRISC7_bit          BANKMASK(TRISC), 7
// OSCTUNE<TUN0>
extern volatile __bit                   TUN0                __at(0x480);	// @ (0x90 * 8 + 0)
#define                                 TUN0_bit            BANKMASK(OSCTUNE), 0
// OSCTUNE<TUN1>
extern volatile __bit                   TUN1                __at(0x481);	// @ (0x90 * 8 + 1)
#define                                 TUN1_bit            BANKMASK(OSCTUNE), 1
// OSCTUNE<TUN2>
extern volatile __bit                   TUN2                __at(0x482);	// @ (0x90 * 8 + 2)
#define                                 TUN2_bit            BANKMASK(OSCTUNE), 2
// OSCTUNE<TUN3>
extern volatile __bit                   TUN3                __at(0x483);	// @ (0x90 * 8 + 3)
#define                                 TUN3_bit            BANKMASK(OSCTUNE), 3
// OSCTUNE<TUN4>
extern volatile __bit                   TUN4                __at(0x484);	// @ (0x90 * 8 + 4)
#define                                 TUN4_bit            BANKMASK(OSCTUNE), 4
// ADCON0<VCFG>
extern volatile __bit                   VCFG                __at(0xFE);	// @ (0x1F * 8 + 6)
#define                                 VCFG_bit            BANKMASK(ADCON0), 6
// VRCON<VR0>
extern volatile __bit                   VR0                 __at(0x4C8);	// @ (0x99 * 8 + 0)
#define                                 VR0_bit             BANKMASK(VRCON), 0
// VRCON<VR1>
extern volatile __bit                   VR1                 __at(0x4C9);	// @ (0x99 * 8 + 1)
#define                                 VR1_bit             BANKMASK(VRCON), 1
// VRCON<VR2>
extern volatile __bit                   VR2                 __at(0x4CA);	// @ (0x99 * 8 + 2)
#define                                 VR2_bit             BANKMASK(VRCON), 2
// VRCON<VR3>
extern volatile __bit                   VR3                 __at(0x4CB);	// @ (0x99 * 8 + 3)
#define                                 VR3_bit             BANKMASK(VRCON), 3
// REFCON<VRBB>
extern volatile __bit                   VRBB                __at(0x4C4);	// @ (0x98 * 8 + 4)
#define                                 VRBB_bit            BANKMASK(REFCON), 4
// REFCON<VREN>
extern volatile __bit                   VREN                __at(0x4C3);	// @ (0x98 * 8 + 3)
#define                                 VREN_bit            BANKMASK(REFCON), 3
// REFCON<VROE>
extern volatile __bit                   VROE                __at(0x4C2);	// @ (0x98 * 8 + 2)
#define                                 VROE_bit            BANKMASK(REFCON), 2
// VRCON<VRR>
extern volatile __bit                   VRR                 __at(0x4CD);	// @ (0x99 * 8 + 5)
#define                                 VRR_bit             BANKMASK(VRCON), 5
// WDTCON<WDTPS0>
extern volatile __bit                   WDTPS0              __at(0xC1);	// @ (0x18 * 8 + 1)
#define                                 WDTPS0_bit          BANKMASK(WDTCON), 1
// WDTCON<WDTPS1>
extern volatile __bit                   WDTPS1              __at(0xC2);	// @ (0x18 * 8 + 2)
#define                                 WDTPS1_bit          BANKMASK(WDTCON), 2
// WDTCON<WDTPS2>
extern volatile __bit                   WDTPS2              __at(0xC3);	// @ (0x18 * 8 + 3)
#define                                 WDTPS2_bit          BANKMASK(WDTCON), 3
// WDTCON<WDTPS3>
extern volatile __bit                   WDTPS3              __at(0xC4);	// @ (0x18 * 8 + 4)
#define                                 WDTPS3_bit          BANKMASK(WDTCON), 4
// WPUA<WPU0>
extern volatile __bit                   WPU0                __at(0x4A8);	// @ (0x95 * 8 + 0)
#define                                 WPU0_bit            BANKMASK(WPUA), 0
// WPUA<WPU1>
extern volatile __bit                   WPU1                __at(0x4A9);	// @ (0x95 * 8 + 1)
#define                                 WPU1_bit            BANKMASK(WPUA), 1
// WPUA<WPU2>
extern volatile __bit                   WPU2                __at(0x4AA);	// @ (0x95 * 8 + 2)
#define                                 WPU2_bit            BANKMASK(WPUA), 2
// WPUA<WPU3>
extern volatile __bit                   WPU3                __at(0x4AB);	// @ (0x95 * 8 + 3)
#define                                 WPU3_bit            BANKMASK(WPUA), 3
// WPUA<WPU4>
extern volatile __bit                   WPU4                __at(0x4AC);	// @ (0x95 * 8 + 4)
#define                                 WPU4_bit            BANKMASK(WPUA), 4
// WPUA<WPU5>
extern volatile __bit                   WPU5                __at(0x4AD);	// @ (0x95 * 8 + 5)
#define                                 WPU5_bit            BANKMASK(WPUA), 5
// WPUA<WPUA0>
extern volatile __bit                   WPUA0               __at(0x4A8);	// @ (0x95 * 8 + 0)
#define                                 WPUA0_bit           BANKMASK(WPUA), 0
// WPUA<WPUA1>
extern volatile __bit                   WPUA1               __at(0x4A9);	// @ (0x95 * 8 + 1)
#define                                 WPUA1_bit           BANKMASK(WPUA), 1
// WPUA<WPUA2>
extern volatile __bit                   WPUA2               __at(0x4AA);	// @ (0x95 * 8 + 2)
#define                                 WPUA2_bit           BANKMASK(WPUA), 2
// WPUA<WPUA3>
extern volatile __bit                   WPUA3               __at(0x4AB);	// @ (0x95 * 8 + 3)
#define                                 WPUA3_bit           BANKMASK(WPUA), 3
// WPUA<WPUA4>
extern volatile __bit                   WPUA4               __at(0x4AC);	// @ (0x95 * 8 + 4)
#define                                 WPUA4_bit           BANKMASK(WPUA), 4
// WPUA<WPUA5>
extern volatile __bit                   WPUA5               __at(0x4AD);	// @ (0x95 * 8 + 5)
#define                                 WPUA5_bit           BANKMASK(WPUA), 5
// EECON1<WR>
extern volatile __bit                   WR                  __at(0x4E1);	// @ (0x9C * 8 + 1)
#define                                 WR_bit              BANKMASK(EECON1), 1
// EECON1<WREN>
extern volatile __bit                   WREN                __at(0x4E2);	// @ (0x9C * 8 + 2)
#define                                 WREN_bit            BANKMASK(EECON1), 2
// EECON1<WRERR>
extern volatile __bit                   WRERR               __at(0x4E3);	// @ (0x9C * 8 + 3)
#define                                 WRERR_bit           BANKMASK(EECON1), 3
// STATUS<ZERO>
extern volatile __bit                   ZERO                __at(0x1A);	// @ (0x3 * 8 + 2)
#define                                 ZERO_bit            BANKMASK(STATUS), 2
// PCON<nBOD>
extern volatile __bit                   nBOD                __at(0x470);	// @ (0x8E * 8 + 0)
#define                                 nBOD_bit            BANKMASK(PCON), 0
// PCON<nBOR>
extern volatile __bit                   nBOR                __at(0x470);	// @ (0x8E * 8 + 0)
#define                                 nBOR_bit            BANKMASK(PCON), 0
// ADCON0<nDONE>
extern volatile __bit                   nDONE               __at(0xF9);	// @ (0x1F * 8 + 1)
#define                                 nDONE_bit           BANKMASK(ADCON0), 1
// STATUS<nPD>
extern volatile __bit                   nPD                 __at(0x1B);	// @ (0x3 * 8 + 3)
#define                                 nPD_bit             BANKMASK(STATUS), 3
// PCON<nPOR>
extern volatile __bit                   nPOR                __at(0x471);	// @ (0x8E * 8 + 1)
#define                                 nPOR_bit            BANKMASK(PCON), 1
// OPTION_REG<nRAPU>
extern volatile __bit                   nRAPU               __at(0x40F);	// @ (0x81 * 8 + 7)
#define                                 nRAPU_bit           BANKMASK(OPTION_REG), 7
// T1CON<nT1SYNC>
extern volatile __bit                   nT1SYNC             __at(0x82);	// @ (0x10 * 8 + 2)
#define                                 nT1SYNC_bit         BANKMASK(T1CON), 2
// STATUS<nTO>
extern volatile __bit                   nTO                 __at(0x1C);	// @ (0x3 * 8 + 4)
#define                                 nTO_bit             BANKMASK(STATUS), 4

#endif // _PIC16F785_H_
