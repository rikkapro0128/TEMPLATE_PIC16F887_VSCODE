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

#ifndef _PIC18F86J65_H_
#define _PIC18F86J65_H_

/*
 * C Header file for the Microchip PIC Microcontroller
 * PIC18F86J65
 */
#ifndef __XC8
#warning Header file pic18f86j65.h included directly. Use #include <xc.h> instead.
#endif

#include <__at.h>

/*
 * Register Definitions
 */

// Register: MAADR5
#define MAADR5 MAADR5
extern volatile unsigned char           MAADR5              __at(0xE80);
#ifndef _LIB_BUILD
asm("MAADR5 equ 0E80h");
#endif

// Register: MAADR6
#define MAADR6 MAADR6
extern volatile unsigned char           MAADR6              __at(0xE81);
#ifndef _LIB_BUILD
asm("MAADR6 equ 0E81h");
#endif

// Register: MAADR3
#define MAADR3 MAADR3
extern volatile unsigned char           MAADR3              __at(0xE82);
#ifndef _LIB_BUILD
asm("MAADR3 equ 0E82h");
#endif

// Register: MAADR4
#define MAADR4 MAADR4
extern volatile unsigned char           MAADR4              __at(0xE83);
#ifndef _LIB_BUILD
asm("MAADR4 equ 0E83h");
#endif

// Register: MAADR1
#define MAADR1 MAADR1
extern volatile unsigned char           MAADR1              __at(0xE84);
#ifndef _LIB_BUILD
asm("MAADR1 equ 0E84h");
#endif

// Register: MAADR2
#define MAADR2 MAADR2
extern volatile unsigned char           MAADR2              __at(0xE85);
#ifndef _LIB_BUILD
asm("MAADR2 equ 0E85h");
#endif

// Register: MISTAT
#define MISTAT MISTAT
extern volatile unsigned char           MISTAT              __at(0xE8A);
#ifndef _LIB_BUILD
asm("MISTAT equ 0E8Ah");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned BUSY                   :1;
        unsigned SCAN                   :1;
        unsigned NVALID                 :1;
        unsigned                        :1;
    };
} MISTATbits_t;
extern volatile MISTATbits_t MISTATbits __at(0xE8A);
// bitfield macros
#define _MISTAT_BUSY_POSN                                   0x0
#define _MISTAT_BUSY_POSITION                               0x0
#define _MISTAT_BUSY_SIZE                                   0x1
#define _MISTAT_BUSY_LENGTH                                 0x1
#define _MISTAT_BUSY_MASK                                   0x1
#define _MISTAT_SCAN_POSN                                   0x1
#define _MISTAT_SCAN_POSITION                               0x1
#define _MISTAT_SCAN_SIZE                                   0x1
#define _MISTAT_SCAN_LENGTH                                 0x1
#define _MISTAT_SCAN_MASK                                   0x2
#define _MISTAT_NVALID_POSN                                 0x2
#define _MISTAT_NVALID_POSITION                             0x2
#define _MISTAT_NVALID_SIZE                                 0x1
#define _MISTAT_NVALID_LENGTH                               0x1
#define _MISTAT_NVALID_MASK                                 0x4

// Register: EFLOCON
#define EFLOCON EFLOCON
extern volatile unsigned char           EFLOCON             __at(0xE97);
#ifndef _LIB_BUILD
asm("EFLOCON equ 0E97h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned FCEN0                  :1;
        unsigned FCEN1                  :1;
        unsigned FULDPXS                :1;
    };
} EFLOCONbits_t;
extern volatile EFLOCONbits_t EFLOCONbits __at(0xE97);
// bitfield macros
#define _EFLOCON_FCEN0_POSN                                 0x0
#define _EFLOCON_FCEN0_POSITION                             0x0
#define _EFLOCON_FCEN0_SIZE                                 0x1
#define _EFLOCON_FCEN0_LENGTH                               0x1
#define _EFLOCON_FCEN0_MASK                                 0x1
#define _EFLOCON_FCEN1_POSN                                 0x1
#define _EFLOCON_FCEN1_POSITION                             0x1
#define _EFLOCON_FCEN1_SIZE                                 0x1
#define _EFLOCON_FCEN1_LENGTH                               0x1
#define _EFLOCON_FCEN1_MASK                                 0x2
#define _EFLOCON_FULDPXS_POSN                               0x2
#define _EFLOCON_FULDPXS_POSITION                           0x2
#define _EFLOCON_FULDPXS_SIZE                               0x1
#define _EFLOCON_FULDPXS_LENGTH                             0x1
#define _EFLOCON_FULDPXS_MASK                               0x4

// Register: EPAUS
#define EPAUS EPAUS
extern volatile unsigned short          EPAUS               __at(0xE98);
#ifndef _LIB_BUILD
asm("EPAUS equ 0E98h");
#endif

// Register: EPAUSL
#define EPAUSL EPAUSL
extern volatile unsigned char           EPAUSL              __at(0xE98);
#ifndef _LIB_BUILD
asm("EPAUSL equ 0E98h");
#endif

// Register: EPAUSH
#define EPAUSH EPAUSH
extern volatile unsigned char           EPAUSH              __at(0xE99);
#ifndef _LIB_BUILD
asm("EPAUSH equ 0E99h");
#endif

// Register: MACON1
#define MACON1 MACON1
extern volatile unsigned char           MACON1              __at(0xEA0);
#ifndef _LIB_BUILD
asm("MACON1 equ 0EA0h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned MARXEN                 :1;
        unsigned PASSALL                :1;
        unsigned RXPAUS                 :1;
        unsigned TXPAUS                 :1;
    };
} MACON1bits_t;
extern volatile MACON1bits_t MACON1bits __at(0xEA0);
// bitfield macros
#define _MACON1_MARXEN_POSN                                 0x0
#define _MACON1_MARXEN_POSITION                             0x0
#define _MACON1_MARXEN_SIZE                                 0x1
#define _MACON1_MARXEN_LENGTH                               0x1
#define _MACON1_MARXEN_MASK                                 0x1
#define _MACON1_PASSALL_POSN                                0x1
#define _MACON1_PASSALL_POSITION                            0x1
#define _MACON1_PASSALL_SIZE                                0x1
#define _MACON1_PASSALL_LENGTH                              0x1
#define _MACON1_PASSALL_MASK                                0x2
#define _MACON1_RXPAUS_POSN                                 0x2
#define _MACON1_RXPAUS_POSITION                             0x2
#define _MACON1_RXPAUS_SIZE                                 0x1
#define _MACON1_RXPAUS_LENGTH                               0x1
#define _MACON1_RXPAUS_MASK                                 0x4
#define _MACON1_TXPAUS_POSN                                 0x3
#define _MACON1_TXPAUS_POSITION                             0x3
#define _MACON1_TXPAUS_SIZE                                 0x1
#define _MACON1_TXPAUS_LENGTH                               0x1
#define _MACON1_TXPAUS_MASK                                 0x8

// Register: MACON3
#define MACON3 MACON3
extern volatile unsigned char           MACON3              __at(0xEA2);
#ifndef _LIB_BUILD
asm("MACON3 equ 0EA2h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned FULDPX                 :1;
        unsigned FRMLNEN                :1;
        unsigned HFRMEN                 :1;
        unsigned PHDREN                 :1;
        unsigned TXCRCEN                :1;
        unsigned PADCFG0                :1;
        unsigned PADCFG1                :1;
        unsigned PADCFG2                :1;
    };
    struct {
        unsigned                        :5;
        unsigned PADCFG                 :3;
    };
} MACON3bits_t;
extern volatile MACON3bits_t MACON3bits __at(0xEA2);
// bitfield macros
#define _MACON3_FULDPX_POSN                                 0x0
#define _MACON3_FULDPX_POSITION                             0x0
#define _MACON3_FULDPX_SIZE                                 0x1
#define _MACON3_FULDPX_LENGTH                               0x1
#define _MACON3_FULDPX_MASK                                 0x1
#define _MACON3_FRMLNEN_POSN                                0x1
#define _MACON3_FRMLNEN_POSITION                            0x1
#define _MACON3_FRMLNEN_SIZE                                0x1
#define _MACON3_FRMLNEN_LENGTH                              0x1
#define _MACON3_FRMLNEN_MASK                                0x2
#define _MACON3_HFRMEN_POSN                                 0x2
#define _MACON3_HFRMEN_POSITION                             0x2
#define _MACON3_HFRMEN_SIZE                                 0x1
#define _MACON3_HFRMEN_LENGTH                               0x1
#define _MACON3_HFRMEN_MASK                                 0x4
#define _MACON3_PHDREN_POSN                                 0x3
#define _MACON3_PHDREN_POSITION                             0x3
#define _MACON3_PHDREN_SIZE                                 0x1
#define _MACON3_PHDREN_LENGTH                               0x1
#define _MACON3_PHDREN_MASK                                 0x8
#define _MACON3_TXCRCEN_POSN                                0x4
#define _MACON3_TXCRCEN_POSITION                            0x4
#define _MACON3_TXCRCEN_SIZE                                0x1
#define _MACON3_TXCRCEN_LENGTH                              0x1
#define _MACON3_TXCRCEN_MASK                                0x10
#define _MACON3_PADCFG0_POSN                                0x5
#define _MACON3_PADCFG0_POSITION                            0x5
#define _MACON3_PADCFG0_SIZE                                0x1
#define _MACON3_PADCFG0_LENGTH                              0x1
#define _MACON3_PADCFG0_MASK                                0x20
#define _MACON3_PADCFG1_POSN                                0x6
#define _MACON3_PADCFG1_POSITION                            0x6
#define _MACON3_PADCFG1_SIZE                                0x1
#define _MACON3_PADCFG1_LENGTH                              0x1
#define _MACON3_PADCFG1_MASK                                0x40
#define _MACON3_PADCFG2_POSN                                0x7
#define _MACON3_PADCFG2_POSITION                            0x7
#define _MACON3_PADCFG2_SIZE                                0x1
#define _MACON3_PADCFG2_LENGTH                              0x1
#define _MACON3_PADCFG2_MASK                                0x80
#define _MACON3_PADCFG_POSN                                 0x5
#define _MACON3_PADCFG_POSITION                             0x5
#define _MACON3_PADCFG_SIZE                                 0x3
#define _MACON3_PADCFG_LENGTH                               0x3
#define _MACON3_PADCFG_MASK                                 0xE0

// Register: MACON4
#define MACON4 MACON4
extern volatile unsigned char           MACON4              __at(0xEA3);
#ifndef _LIB_BUILD
asm("MACON4 equ 0EA3h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :5;
        unsigned                        :1;
        unsigned DEFER                  :1;
    };
} MACON4bits_t;
extern volatile MACON4bits_t MACON4bits __at(0xEA3);
// bitfield macros
#define _MACON4_DEFER_POSN                                  0x6
#define _MACON4_DEFER_POSITION                              0x6
#define _MACON4_DEFER_SIZE                                  0x1
#define _MACON4_DEFER_LENGTH                                0x1
#define _MACON4_DEFER_MASK                                  0x40

// Register: MABBIPG
#define MABBIPG MABBIPG
extern volatile unsigned char           MABBIPG             __at(0xEA4);
#ifndef _LIB_BUILD
asm("MABBIPG equ 0EA4h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned BBIPG0                 :1;
        unsigned BBIPG1                 :1;
        unsigned BBIPG2                 :1;
        unsigned BBIPG3                 :1;
        unsigned BBIPG4                 :1;
        unsigned BBIPG5                 :1;
        unsigned BBIPG6                 :1;
    };
} MABBIPGbits_t;
extern volatile MABBIPGbits_t MABBIPGbits __at(0xEA4);
// bitfield macros
#define _MABBIPG_BBIPG0_POSN                                0x0
#define _MABBIPG_BBIPG0_POSITION                            0x0
#define _MABBIPG_BBIPG0_SIZE                                0x1
#define _MABBIPG_BBIPG0_LENGTH                              0x1
#define _MABBIPG_BBIPG0_MASK                                0x1
#define _MABBIPG_BBIPG1_POSN                                0x1
#define _MABBIPG_BBIPG1_POSITION                            0x1
#define _MABBIPG_BBIPG1_SIZE                                0x1
#define _MABBIPG_BBIPG1_LENGTH                              0x1
#define _MABBIPG_BBIPG1_MASK                                0x2
#define _MABBIPG_BBIPG2_POSN                                0x2
#define _MABBIPG_BBIPG2_POSITION                            0x2
#define _MABBIPG_BBIPG2_SIZE                                0x1
#define _MABBIPG_BBIPG2_LENGTH                              0x1
#define _MABBIPG_BBIPG2_MASK                                0x4
#define _MABBIPG_BBIPG3_POSN                                0x3
#define _MABBIPG_BBIPG3_POSITION                            0x3
#define _MABBIPG_BBIPG3_SIZE                                0x1
#define _MABBIPG_BBIPG3_LENGTH                              0x1
#define _MABBIPG_BBIPG3_MASK                                0x8
#define _MABBIPG_BBIPG4_POSN                                0x4
#define _MABBIPG_BBIPG4_POSITION                            0x4
#define _MABBIPG_BBIPG4_SIZE                                0x1
#define _MABBIPG_BBIPG4_LENGTH                              0x1
#define _MABBIPG_BBIPG4_MASK                                0x10
#define _MABBIPG_BBIPG5_POSN                                0x5
#define _MABBIPG_BBIPG5_POSITION                            0x5
#define _MABBIPG_BBIPG5_SIZE                                0x1
#define _MABBIPG_BBIPG5_LENGTH                              0x1
#define _MABBIPG_BBIPG5_MASK                                0x20
#define _MABBIPG_BBIPG6_POSN                                0x6
#define _MABBIPG_BBIPG6_POSITION                            0x6
#define _MABBIPG_BBIPG6_SIZE                                0x1
#define _MABBIPG_BBIPG6_LENGTH                              0x1
#define _MABBIPG_BBIPG6_MASK                                0x40

// Register: MAIPG
#define MAIPG MAIPG
extern volatile unsigned short          MAIPG               __at(0xEA6);
#ifndef _LIB_BUILD
asm("MAIPG equ 0EA6h");
#endif

// Register: MAIPGL
#define MAIPGL MAIPGL
extern volatile unsigned char           MAIPGL              __at(0xEA6);
#ifndef _LIB_BUILD
asm("MAIPGL equ 0EA6h");
#endif

// Register: MAIPGH
#define MAIPGH MAIPGH
extern volatile unsigned char           MAIPGH              __at(0xEA7);
#ifndef _LIB_BUILD
asm("MAIPGH equ 0EA7h");
#endif

// Register: MAMXFL
#define MAMXFL MAMXFL
extern volatile unsigned short          MAMXFL              __at(0xEAA);
#ifndef _LIB_BUILD
asm("MAMXFL equ 0EAAh");
#endif

// Register: MAMXFLL
#define MAMXFLL MAMXFLL
extern volatile unsigned char           MAMXFLL             __at(0xEAA);
#ifndef _LIB_BUILD
asm("MAMXFLL equ 0EAAh");
#endif

// Register: MAMXFLH
#define MAMXFLH MAMXFLH
extern volatile unsigned char           MAMXFLH             __at(0xEAB);
#ifndef _LIB_BUILD
asm("MAMXFLH equ 0EABh");
#endif

// Register: MICMD
#define MICMD MICMD
extern volatile unsigned char           MICMD               __at(0xEB2);
#ifndef _LIB_BUILD
asm("MICMD equ 0EB2h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned MIIRD                  :1;
        unsigned MIISCAN                :1;
    };
} MICMDbits_t;
extern volatile MICMDbits_t MICMDbits __at(0xEB2);
// bitfield macros
#define _MICMD_MIIRD_POSN                                   0x0
#define _MICMD_MIIRD_POSITION                               0x0
#define _MICMD_MIIRD_SIZE                                   0x1
#define _MICMD_MIIRD_LENGTH                                 0x1
#define _MICMD_MIIRD_MASK                                   0x1
#define _MICMD_MIISCAN_POSN                                 0x1
#define _MICMD_MIISCAN_POSITION                             0x1
#define _MICMD_MIISCAN_SIZE                                 0x1
#define _MICMD_MIISCAN_LENGTH                               0x1
#define _MICMD_MIISCAN_MASK                                 0x2

// Register: MIREGADR
#define MIREGADR MIREGADR
extern volatile unsigned char           MIREGADR            __at(0xEB4);
#ifndef _LIB_BUILD
asm("MIREGADR equ 0EB4h");
#endif

// Register: MIWR
#define MIWR MIWR
extern volatile unsigned short          MIWR                __at(0xEB6);
#ifndef _LIB_BUILD
asm("MIWR equ 0EB6h");
#endif

// Register: MIWRL
#define MIWRL MIWRL
extern volatile unsigned char           MIWRL               __at(0xEB6);
#ifndef _LIB_BUILD
asm("MIWRL equ 0EB6h");
#endif

// Register: MIWRH
#define MIWRH MIWRH
extern volatile unsigned char           MIWRH               __at(0xEB7);
#ifndef _LIB_BUILD
asm("MIWRH equ 0EB7h");
#endif

// Register: MIRD
#define MIRD MIRD
extern volatile unsigned short          MIRD                __at(0xEB8);
#ifndef _LIB_BUILD
asm("MIRD equ 0EB8h");
#endif

// Register: MIRDL
#define MIRDL MIRDL
extern volatile unsigned char           MIRDL               __at(0xEB8);
#ifndef _LIB_BUILD
asm("MIRDL equ 0EB8h");
#endif

// Register: MIRDH
#define MIRDH MIRDH
extern volatile unsigned char           MIRDH               __at(0xEB9);
#ifndef _LIB_BUILD
asm("MIRDH equ 0EB9h");
#endif

// Register: EHT0
#define EHT0 EHT0
extern volatile unsigned char           EHT0                __at(0xEC0);
#ifndef _LIB_BUILD
asm("EHT0 equ 0EC0h");
#endif

// Register: EHT1
#define EHT1 EHT1
extern volatile unsigned char           EHT1                __at(0xEC1);
#ifndef _LIB_BUILD
asm("EHT1 equ 0EC1h");
#endif

// Register: EHT2
#define EHT2 EHT2
extern volatile unsigned char           EHT2                __at(0xEC2);
#ifndef _LIB_BUILD
asm("EHT2 equ 0EC2h");
#endif

// Register: EHT3
#define EHT3 EHT3
extern volatile unsigned char           EHT3                __at(0xEC3);
#ifndef _LIB_BUILD
asm("EHT3 equ 0EC3h");
#endif

// Register: EHT4
#define EHT4 EHT4
extern volatile unsigned char           EHT4                __at(0xEC4);
#ifndef _LIB_BUILD
asm("EHT4 equ 0EC4h");
#endif

// Register: EHT5
#define EHT5 EHT5
extern volatile unsigned char           EHT5                __at(0xEC5);
#ifndef _LIB_BUILD
asm("EHT5 equ 0EC5h");
#endif

// Register: EHT6
#define EHT6 EHT6
extern volatile unsigned char           EHT6                __at(0xEC6);
#ifndef _LIB_BUILD
asm("EHT6 equ 0EC6h");
#endif

// Register: EHT7
#define EHT7 EHT7
extern volatile unsigned char           EHT7                __at(0xEC7);
#ifndef _LIB_BUILD
asm("EHT7 equ 0EC7h");
#endif

// Register: EPMM0
#define EPMM0 EPMM0
extern volatile unsigned char           EPMM0               __at(0xEC8);
#ifndef _LIB_BUILD
asm("EPMM0 equ 0EC8h");
#endif

// Register: EPMM1
#define EPMM1 EPMM1
extern volatile unsigned char           EPMM1               __at(0xEC9);
#ifndef _LIB_BUILD
asm("EPMM1 equ 0EC9h");
#endif

// Register: EPMM2
#define EPMM2 EPMM2
extern volatile unsigned char           EPMM2               __at(0xECA);
#ifndef _LIB_BUILD
asm("EPMM2 equ 0ECAh");
#endif

// Register: EPMM3
#define EPMM3 EPMM3
extern volatile unsigned char           EPMM3               __at(0xECB);
#ifndef _LIB_BUILD
asm("EPMM3 equ 0ECBh");
#endif

// Register: EPMM4
#define EPMM4 EPMM4
extern volatile unsigned char           EPMM4               __at(0xECC);
#ifndef _LIB_BUILD
asm("EPMM4 equ 0ECCh");
#endif

// Register: EPMM5
#define EPMM5 EPMM5
extern volatile unsigned char           EPMM5               __at(0xECD);
#ifndef _LIB_BUILD
asm("EPMM5 equ 0ECDh");
#endif

// Register: EPMM6
#define EPMM6 EPMM6
extern volatile unsigned char           EPMM6               __at(0xECE);
#ifndef _LIB_BUILD
asm("EPMM6 equ 0ECEh");
#endif

// Register: EPMM7
#define EPMM7 EPMM7
extern volatile unsigned char           EPMM7               __at(0xECF);
#ifndef _LIB_BUILD
asm("EPMM7 equ 0ECFh");
#endif

// Register: EPMCS
#define EPMCS EPMCS
extern volatile unsigned short          EPMCS               __at(0xED0);
#ifndef _LIB_BUILD
asm("EPMCS equ 0ED0h");
#endif

// Register: EPMCSL
#define EPMCSL EPMCSL
extern volatile unsigned char           EPMCSL              __at(0xED0);
#ifndef _LIB_BUILD
asm("EPMCSL equ 0ED0h");
#endif

// Register: EPMCSH
#define EPMCSH EPMCSH
extern volatile unsigned char           EPMCSH              __at(0xED1);
#ifndef _LIB_BUILD
asm("EPMCSH equ 0ED1h");
#endif

// Register: EPMO
#define EPMO EPMO
extern volatile unsigned short          EPMO                __at(0xED4);
#ifndef _LIB_BUILD
asm("EPMO equ 0ED4h");
#endif

// Register: EPMOL
#define EPMOL EPMOL
extern volatile unsigned char           EPMOL               __at(0xED4);
#ifndef _LIB_BUILD
asm("EPMOL equ 0ED4h");
#endif

// Register: EPMOH
#define EPMOH EPMOH
extern volatile unsigned char           EPMOH               __at(0xED5);
#ifndef _LIB_BUILD
asm("EPMOH equ 0ED5h");
#endif

// Register: ERXFCON
#define ERXFCON ERXFCON
extern volatile unsigned char           ERXFCON             __at(0xED8);
#ifndef _LIB_BUILD
asm("ERXFCON equ 0ED8h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned BCEN                   :1;
        unsigned MCEN                   :1;
        unsigned HTEN                   :1;
        unsigned MPEN                   :1;
        unsigned PMEN                   :1;
        unsigned CRCEN                  :1;
        unsigned ANDOR                  :1;
        unsigned UCEN                   :1;
    };
} ERXFCONbits_t;
extern volatile ERXFCONbits_t ERXFCONbits __at(0xED8);
// bitfield macros
#define _ERXFCON_BCEN_POSN                                  0x0
#define _ERXFCON_BCEN_POSITION                              0x0
#define _ERXFCON_BCEN_SIZE                                  0x1
#define _ERXFCON_BCEN_LENGTH                                0x1
#define _ERXFCON_BCEN_MASK                                  0x1
#define _ERXFCON_MCEN_POSN                                  0x1
#define _ERXFCON_MCEN_POSITION                              0x1
#define _ERXFCON_MCEN_SIZE                                  0x1
#define _ERXFCON_MCEN_LENGTH                                0x1
#define _ERXFCON_MCEN_MASK                                  0x2
#define _ERXFCON_HTEN_POSN                                  0x2
#define _ERXFCON_HTEN_POSITION                              0x2
#define _ERXFCON_HTEN_SIZE                                  0x1
#define _ERXFCON_HTEN_LENGTH                                0x1
#define _ERXFCON_HTEN_MASK                                  0x4
#define _ERXFCON_MPEN_POSN                                  0x3
#define _ERXFCON_MPEN_POSITION                              0x3
#define _ERXFCON_MPEN_SIZE                                  0x1
#define _ERXFCON_MPEN_LENGTH                                0x1
#define _ERXFCON_MPEN_MASK                                  0x8
#define _ERXFCON_PMEN_POSN                                  0x4
#define _ERXFCON_PMEN_POSITION                              0x4
#define _ERXFCON_PMEN_SIZE                                  0x1
#define _ERXFCON_PMEN_LENGTH                                0x1
#define _ERXFCON_PMEN_MASK                                  0x10
#define _ERXFCON_CRCEN_POSN                                 0x5
#define _ERXFCON_CRCEN_POSITION                             0x5
#define _ERXFCON_CRCEN_SIZE                                 0x1
#define _ERXFCON_CRCEN_LENGTH                               0x1
#define _ERXFCON_CRCEN_MASK                                 0x20
#define _ERXFCON_ANDOR_POSN                                 0x6
#define _ERXFCON_ANDOR_POSITION                             0x6
#define _ERXFCON_ANDOR_SIZE                                 0x1
#define _ERXFCON_ANDOR_LENGTH                               0x1
#define _ERXFCON_ANDOR_MASK                                 0x40
#define _ERXFCON_UCEN_POSN                                  0x7
#define _ERXFCON_UCEN_POSITION                              0x7
#define _ERXFCON_UCEN_SIZE                                  0x1
#define _ERXFCON_UCEN_LENGTH                                0x1
#define _ERXFCON_UCEN_MASK                                  0x80

// Register: EPKTCNT
#define EPKTCNT EPKTCNT
extern volatile unsigned char           EPKTCNT             __at(0xED9);
#ifndef _LIB_BUILD
asm("EPKTCNT equ 0ED9h");
#endif

// Register: EWRPT
#define EWRPT EWRPT
extern volatile unsigned short          EWRPT               __at(0xEE2);
#ifndef _LIB_BUILD
asm("EWRPT equ 0EE2h");
#endif

// Register: EWRPTL
#define EWRPTL EWRPTL
extern volatile unsigned char           EWRPTL              __at(0xEE2);
#ifndef _LIB_BUILD
asm("EWRPTL equ 0EE2h");
#endif

// Register: EWRPTH
#define EWRPTH EWRPTH
extern volatile unsigned char           EWRPTH              __at(0xEE3);
#ifndef _LIB_BUILD
asm("EWRPTH equ 0EE3h");
#endif

// Register: ETXST
#define ETXST ETXST
extern volatile unsigned short          ETXST               __at(0xEE4);
#ifndef _LIB_BUILD
asm("ETXST equ 0EE4h");
#endif

// Register: ETXSTL
#define ETXSTL ETXSTL
extern volatile unsigned char           ETXSTL              __at(0xEE4);
#ifndef _LIB_BUILD
asm("ETXSTL equ 0EE4h");
#endif

// Register: ETXSTH
#define ETXSTH ETXSTH
extern volatile unsigned char           ETXSTH              __at(0xEE5);
#ifndef _LIB_BUILD
asm("ETXSTH equ 0EE5h");
#endif

// Register: ETXND
#define ETXND ETXND
extern volatile unsigned short          ETXND               __at(0xEE6);
#ifndef _LIB_BUILD
asm("ETXND equ 0EE6h");
#endif

// Register: ETXNDL
#define ETXNDL ETXNDL
extern volatile unsigned char           ETXNDL              __at(0xEE6);
#ifndef _LIB_BUILD
asm("ETXNDL equ 0EE6h");
#endif

// Register: ETXNDH
#define ETXNDH ETXNDH
extern volatile unsigned char           ETXNDH              __at(0xEE7);
#ifndef _LIB_BUILD
asm("ETXNDH equ 0EE7h");
#endif

// Register: ERXST
#define ERXST ERXST
extern volatile unsigned short          ERXST               __at(0xEE8);
#ifndef _LIB_BUILD
asm("ERXST equ 0EE8h");
#endif

// Register: ERXSTL
#define ERXSTL ERXSTL
extern volatile unsigned char           ERXSTL              __at(0xEE8);
#ifndef _LIB_BUILD
asm("ERXSTL equ 0EE8h");
#endif

// Register: ERXSTH
#define ERXSTH ERXSTH
extern volatile unsigned char           ERXSTH              __at(0xEE9);
#ifndef _LIB_BUILD
asm("ERXSTH equ 0EE9h");
#endif

// Register: ERXND
#define ERXND ERXND
extern volatile unsigned short          ERXND               __at(0xEEA);
#ifndef _LIB_BUILD
asm("ERXND equ 0EEAh");
#endif

// Register: ERXNDL
#define ERXNDL ERXNDL
extern volatile unsigned char           ERXNDL              __at(0xEEA);
#ifndef _LIB_BUILD
asm("ERXNDL equ 0EEAh");
#endif

// Register: ERXNDH
#define ERXNDH ERXNDH
extern volatile unsigned char           ERXNDH              __at(0xEEB);
#ifndef _LIB_BUILD
asm("ERXNDH equ 0EEBh");
#endif

// Register: ERXRDPT
#define ERXRDPT ERXRDPT
extern volatile unsigned short          ERXRDPT             __at(0xEEC);
#ifndef _LIB_BUILD
asm("ERXRDPT equ 0EECh");
#endif

// Register: ERXRDPTL
#define ERXRDPTL ERXRDPTL
extern volatile unsigned char           ERXRDPTL            __at(0xEEC);
#ifndef _LIB_BUILD
asm("ERXRDPTL equ 0EECh");
#endif

// Register: ERXRDPTH
#define ERXRDPTH ERXRDPTH
extern volatile unsigned char           ERXRDPTH            __at(0xEED);
#ifndef _LIB_BUILD
asm("ERXRDPTH equ 0EEDh");
#endif

// Register: ERXWRPT
#define ERXWRPT ERXWRPT
extern volatile unsigned short          ERXWRPT             __at(0xEEE);
#ifndef _LIB_BUILD
asm("ERXWRPT equ 0EEEh");
#endif

// Register: ERXWRPTL
#define ERXWRPTL ERXWRPTL
extern volatile unsigned char           ERXWRPTL            __at(0xEEE);
#ifndef _LIB_BUILD
asm("ERXWRPTL equ 0EEEh");
#endif

// Register: ERXWRPTH
#define ERXWRPTH ERXWRPTH
extern volatile unsigned char           ERXWRPTH            __at(0xEEF);
#ifndef _LIB_BUILD
asm("ERXWRPTH equ 0EEFh");
#endif

// Register: EDMAST
#define EDMAST EDMAST
extern volatile unsigned short          EDMAST              __at(0xEF0);
#ifndef _LIB_BUILD
asm("EDMAST equ 0EF0h");
#endif

// Register: EDMASTL
#define EDMASTL EDMASTL
extern volatile unsigned char           EDMASTL             __at(0xEF0);
#ifndef _LIB_BUILD
asm("EDMASTL equ 0EF0h");
#endif

// Register: EDMASTH
#define EDMASTH EDMASTH
extern volatile unsigned char           EDMASTH             __at(0xEF1);
#ifndef _LIB_BUILD
asm("EDMASTH equ 0EF1h");
#endif

// Register: EDMAND
#define EDMAND EDMAND
extern volatile unsigned short          EDMAND              __at(0xEF2);
#ifndef _LIB_BUILD
asm("EDMAND equ 0EF2h");
#endif

// Register: EDMANDL
#define EDMANDL EDMANDL
extern volatile unsigned char           EDMANDL             __at(0xEF2);
#ifndef _LIB_BUILD
asm("EDMANDL equ 0EF2h");
#endif

// Register: EDMANDH
#define EDMANDH EDMANDH
extern volatile unsigned char           EDMANDH             __at(0xEF3);
#ifndef _LIB_BUILD
asm("EDMANDH equ 0EF3h");
#endif

// Register: EDMADST
#define EDMADST EDMADST
extern volatile unsigned short          EDMADST             __at(0xEF4);
#ifndef _LIB_BUILD
asm("EDMADST equ 0EF4h");
#endif

// Register: EDMADSTL
#define EDMADSTL EDMADSTL
extern volatile unsigned char           EDMADSTL            __at(0xEF4);
#ifndef _LIB_BUILD
asm("EDMADSTL equ 0EF4h");
#endif

// Register: EDMADSTH
#define EDMADSTH EDMADSTH
extern volatile unsigned char           EDMADSTH            __at(0xEF5);
#ifndef _LIB_BUILD
asm("EDMADSTH equ 0EF5h");
#endif

// Register: EDMACS
#define EDMACS EDMACS
extern volatile unsigned short          EDMACS              __at(0xEF6);
#ifndef _LIB_BUILD
asm("EDMACS equ 0EF6h");
#endif

// Register: EDMACSL
#define EDMACSL EDMACSL
extern volatile unsigned char           EDMACSL             __at(0xEF6);
#ifndef _LIB_BUILD
asm("EDMACSL equ 0EF6h");
#endif

// Register: EDMACSH
#define EDMACSH EDMACSH
extern volatile unsigned char           EDMACSH             __at(0xEF7);
#ifndef _LIB_BUILD
asm("EDMACSH equ 0EF7h");
#endif

// Register: EIE
#define EIE EIE
extern volatile unsigned char           EIE                 __at(0xEFB);
#ifndef _LIB_BUILD
asm("EIE equ 0EFBh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned RXERIE                 :1;
        unsigned TXERIE                 :1;
        unsigned                        :1;
        unsigned TXIE                   :1;
        unsigned LINKIE                 :1;
        unsigned DMAIE                  :1;
        unsigned PKTIE                  :1;
    };
    struct {
        unsigned                        :3;
        unsigned ETXIE                  :1;
    };
} EIEbits_t;
extern volatile EIEbits_t EIEbits __at(0xEFB);
// bitfield macros
#define _EIE_RXERIE_POSN                                    0x0
#define _EIE_RXERIE_POSITION                                0x0
#define _EIE_RXERIE_SIZE                                    0x1
#define _EIE_RXERIE_LENGTH                                  0x1
#define _EIE_RXERIE_MASK                                    0x1
#define _EIE_TXERIE_POSN                                    0x1
#define _EIE_TXERIE_POSITION                                0x1
#define _EIE_TXERIE_SIZE                                    0x1
#define _EIE_TXERIE_LENGTH                                  0x1
#define _EIE_TXERIE_MASK                                    0x2
#define _EIE_TXIE_POSN                                      0x3
#define _EIE_TXIE_POSITION                                  0x3
#define _EIE_TXIE_SIZE                                      0x1
#define _EIE_TXIE_LENGTH                                    0x1
#define _EIE_TXIE_MASK                                      0x8
#define _EIE_LINKIE_POSN                                    0x4
#define _EIE_LINKIE_POSITION                                0x4
#define _EIE_LINKIE_SIZE                                    0x1
#define _EIE_LINKIE_LENGTH                                  0x1
#define _EIE_LINKIE_MASK                                    0x10
#define _EIE_DMAIE_POSN                                     0x5
#define _EIE_DMAIE_POSITION                                 0x5
#define _EIE_DMAIE_SIZE                                     0x1
#define _EIE_DMAIE_LENGTH                                   0x1
#define _EIE_DMAIE_MASK                                     0x20
#define _EIE_PKTIE_POSN                                     0x6
#define _EIE_PKTIE_POSITION                                 0x6
#define _EIE_PKTIE_SIZE                                     0x1
#define _EIE_PKTIE_LENGTH                                   0x1
#define _EIE_PKTIE_MASK                                     0x40
#define _EIE_ETXIE_POSN                                     0x3
#define _EIE_ETXIE_POSITION                                 0x3
#define _EIE_ETXIE_SIZE                                     0x1
#define _EIE_ETXIE_LENGTH                                   0x1
#define _EIE_ETXIE_MASK                                     0x8

// Register: ESTAT
#define ESTAT ESTAT
extern volatile unsigned char           ESTAT               __at(0xEFD);
#ifndef _LIB_BUILD
asm("ESTAT equ 0EFDh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned PHYRDY                 :1;
        unsigned TXABRT                 :1;
        unsigned RXBUSY                 :1;
        unsigned                        :2;
        unsigned                        :1;
        unsigned BUFER                  :1;
    };
} ESTATbits_t;
extern volatile ESTATbits_t ESTATbits __at(0xEFD);
// bitfield macros
#define _ESTAT_PHYRDY_POSN                                  0x0
#define _ESTAT_PHYRDY_POSITION                              0x0
#define _ESTAT_PHYRDY_SIZE                                  0x1
#define _ESTAT_PHYRDY_LENGTH                                0x1
#define _ESTAT_PHYRDY_MASK                                  0x1
#define _ESTAT_TXABRT_POSN                                  0x1
#define _ESTAT_TXABRT_POSITION                              0x1
#define _ESTAT_TXABRT_SIZE                                  0x1
#define _ESTAT_TXABRT_LENGTH                                0x1
#define _ESTAT_TXABRT_MASK                                  0x2
#define _ESTAT_RXBUSY_POSN                                  0x2
#define _ESTAT_RXBUSY_POSITION                              0x2
#define _ESTAT_RXBUSY_SIZE                                  0x1
#define _ESTAT_RXBUSY_LENGTH                                0x1
#define _ESTAT_RXBUSY_MASK                                  0x4
#define _ESTAT_BUFER_POSN                                   0x6
#define _ESTAT_BUFER_POSITION                               0x6
#define _ESTAT_BUFER_SIZE                                   0x1
#define _ESTAT_BUFER_LENGTH                                 0x1
#define _ESTAT_BUFER_MASK                                   0x40

// Register: ECON2
#define ECON2 ECON2
extern volatile unsigned char           ECON2               __at(0xEFE);
#ifndef _LIB_BUILD
asm("ECON2 equ 0EFEh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :5;
        unsigned ETHEN                  :1;
        unsigned PKTDEC                 :1;
        unsigned AUTOINC                :1;
    };
} ECON2bits_t;
extern volatile ECON2bits_t ECON2bits __at(0xEFE);
// bitfield macros
#define _ECON2_ETHEN_POSN                                   0x5
#define _ECON2_ETHEN_POSITION                               0x5
#define _ECON2_ETHEN_SIZE                                   0x1
#define _ECON2_ETHEN_LENGTH                                 0x1
#define _ECON2_ETHEN_MASK                                   0x20
#define _ECON2_PKTDEC_POSN                                  0x6
#define _ECON2_PKTDEC_POSITION                              0x6
#define _ECON2_PKTDEC_SIZE                                  0x1
#define _ECON2_PKTDEC_LENGTH                                0x1
#define _ECON2_PKTDEC_MASK                                  0x40
#define _ECON2_AUTOINC_POSN                                 0x7
#define _ECON2_AUTOINC_POSITION                             0x7
#define _ECON2_AUTOINC_SIZE                                 0x1
#define _ECON2_AUTOINC_LENGTH                               0x1
#define _ECON2_AUTOINC_MASK                                 0x80

// Register: EIR
#define EIR EIR
extern volatile unsigned char           EIR                 __at(0xF60);
#ifndef _LIB_BUILD
asm("EIR equ 0F60h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned RXERIF                 :1;
        unsigned TXERIF                 :1;
        unsigned                        :1;
        unsigned TXIF                   :1;
        unsigned LINKIF                 :1;
        unsigned DMAIF                  :1;
        unsigned PKTIF                  :1;
    };
    struct {
        unsigned                        :3;
        unsigned ETXIF                  :1;
    };
} EIRbits_t;
extern volatile EIRbits_t EIRbits __at(0xF60);
// bitfield macros
#define _EIR_RXERIF_POSN                                    0x0
#define _EIR_RXERIF_POSITION                                0x0
#define _EIR_RXERIF_SIZE                                    0x1
#define _EIR_RXERIF_LENGTH                                  0x1
#define _EIR_RXERIF_MASK                                    0x1
#define _EIR_TXERIF_POSN                                    0x1
#define _EIR_TXERIF_POSITION                                0x1
#define _EIR_TXERIF_SIZE                                    0x1
#define _EIR_TXERIF_LENGTH                                  0x1
#define _EIR_TXERIF_MASK                                    0x2
#define _EIR_TXIF_POSN                                      0x3
#define _EIR_TXIF_POSITION                                  0x3
#define _EIR_TXIF_SIZE                                      0x1
#define _EIR_TXIF_LENGTH                                    0x1
#define _EIR_TXIF_MASK                                      0x8
#define _EIR_LINKIF_POSN                                    0x4
#define _EIR_LINKIF_POSITION                                0x4
#define _EIR_LINKIF_SIZE                                    0x1
#define _EIR_LINKIF_LENGTH                                  0x1
#define _EIR_LINKIF_MASK                                    0x10
#define _EIR_DMAIF_POSN                                     0x5
#define _EIR_DMAIF_POSITION                                 0x5
#define _EIR_DMAIF_SIZE                                     0x1
#define _EIR_DMAIF_LENGTH                                   0x1
#define _EIR_DMAIF_MASK                                     0x20
#define _EIR_PKTIF_POSN                                     0x6
#define _EIR_PKTIF_POSITION                                 0x6
#define _EIR_PKTIF_SIZE                                     0x1
#define _EIR_PKTIF_LENGTH                                   0x1
#define _EIR_PKTIF_MASK                                     0x40
#define _EIR_ETXIF_POSN                                     0x3
#define _EIR_ETXIF_POSITION                                 0x3
#define _EIR_ETXIF_SIZE                                     0x1
#define _EIR_ETXIF_LENGTH                                   0x1
#define _EIR_ETXIF_MASK                                     0x8

// Register: EDATA
#define EDATA EDATA
extern volatile unsigned char           EDATA               __at(0xF61);
#ifndef _LIB_BUILD
asm("EDATA equ 0F61h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned EDATA0                 :1;
        unsigned EDATA1                 :1;
        unsigned EDATA2                 :1;
        unsigned EDATA3                 :1;
        unsigned EDATA4                 :1;
        unsigned EDATA5                 :1;
        unsigned EDATA6                 :1;
        unsigned EDATA7                 :1;
    };
} EDATAbits_t;
extern volatile EDATAbits_t EDATAbits __at(0xF61);
// bitfield macros
#define _EDATA_EDATA0_POSN                                  0x0
#define _EDATA_EDATA0_POSITION                              0x0
#define _EDATA_EDATA0_SIZE                                  0x1
#define _EDATA_EDATA0_LENGTH                                0x1
#define _EDATA_EDATA0_MASK                                  0x1
#define _EDATA_EDATA1_POSN                                  0x1
#define _EDATA_EDATA1_POSITION                              0x1
#define _EDATA_EDATA1_SIZE                                  0x1
#define _EDATA_EDATA1_LENGTH                                0x1
#define _EDATA_EDATA1_MASK                                  0x2
#define _EDATA_EDATA2_POSN                                  0x2
#define _EDATA_EDATA2_POSITION                              0x2
#define _EDATA_EDATA2_SIZE                                  0x1
#define _EDATA_EDATA2_LENGTH                                0x1
#define _EDATA_EDATA2_MASK                                  0x4
#define _EDATA_EDATA3_POSN                                  0x3
#define _EDATA_EDATA3_POSITION                              0x3
#define _EDATA_EDATA3_SIZE                                  0x1
#define _EDATA_EDATA3_LENGTH                                0x1
#define _EDATA_EDATA3_MASK                                  0x8
#define _EDATA_EDATA4_POSN                                  0x4
#define _EDATA_EDATA4_POSITION                              0x4
#define _EDATA_EDATA4_SIZE                                  0x1
#define _EDATA_EDATA4_LENGTH                                0x1
#define _EDATA_EDATA4_MASK                                  0x10
#define _EDATA_EDATA5_POSN                                  0x5
#define _EDATA_EDATA5_POSITION                              0x5
#define _EDATA_EDATA5_SIZE                                  0x1
#define _EDATA_EDATA5_LENGTH                                0x1
#define _EDATA_EDATA5_MASK                                  0x20
#define _EDATA_EDATA6_POSN                                  0x6
#define _EDATA_EDATA6_POSITION                              0x6
#define _EDATA_EDATA6_SIZE                                  0x1
#define _EDATA_EDATA6_LENGTH                                0x1
#define _EDATA_EDATA6_MASK                                  0x40
#define _EDATA_EDATA7_POSN                                  0x7
#define _EDATA_EDATA7_POSITION                              0x7
#define _EDATA_EDATA7_SIZE                                  0x1
#define _EDATA_EDATA7_LENGTH                                0x1
#define _EDATA_EDATA7_MASK                                  0x80

// Register: ECCP2DEL
#define ECCP2DEL ECCP2DEL
extern volatile unsigned char           ECCP2DEL            __at(0xF67);
#ifndef _LIB_BUILD
asm("ECCP2DEL equ 0F67h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned PDC                    :7;
        unsigned PRSEN                  :1;
    };
    struct {
        unsigned PDC0                   :1;
        unsigned PDC1                   :1;
        unsigned PDC2                   :1;
        unsigned PDC3                   :1;
        unsigned PDC4                   :1;
        unsigned PDC5                   :1;
        unsigned PDC6                   :1;
    };
    struct {
        unsigned P2DC0                  :1;
        unsigned P2DC1                  :1;
        unsigned P2DC2                  :1;
        unsigned P2DC3                  :1;
        unsigned P2DC4                  :1;
        unsigned P2DC5                  :1;
        unsigned P2DC6                  :1;
        unsigned P2RSEN                 :1;
    };
} ECCP2DELbits_t;
extern volatile ECCP2DELbits_t ECCP2DELbits __at(0xF67);
// bitfield macros
#define _ECCP2DEL_PDC_POSN                                  0x0
#define _ECCP2DEL_PDC_POSITION                              0x0
#define _ECCP2DEL_PDC_SIZE                                  0x7
#define _ECCP2DEL_PDC_LENGTH                                0x7
#define _ECCP2DEL_PDC_MASK                                  0x7F
#define _ECCP2DEL_PRSEN_POSN                                0x7
#define _ECCP2DEL_PRSEN_POSITION                            0x7
#define _ECCP2DEL_PRSEN_SIZE                                0x1
#define _ECCP2DEL_PRSEN_LENGTH                              0x1
#define _ECCP2DEL_PRSEN_MASK                                0x80
#define _ECCP2DEL_PDC0_POSN                                 0x0
#define _ECCP2DEL_PDC0_POSITION                             0x0
#define _ECCP2DEL_PDC0_SIZE                                 0x1
#define _ECCP2DEL_PDC0_LENGTH                               0x1
#define _ECCP2DEL_PDC0_MASK                                 0x1
#define _ECCP2DEL_PDC1_POSN                                 0x1
#define _ECCP2DEL_PDC1_POSITION                             0x1
#define _ECCP2DEL_PDC1_SIZE                                 0x1
#define _ECCP2DEL_PDC1_LENGTH                               0x1
#define _ECCP2DEL_PDC1_MASK                                 0x2
#define _ECCP2DEL_PDC2_POSN                                 0x2
#define _ECCP2DEL_PDC2_POSITION                             0x2
#define _ECCP2DEL_PDC2_SIZE                                 0x1
#define _ECCP2DEL_PDC2_LENGTH                               0x1
#define _ECCP2DEL_PDC2_MASK                                 0x4
#define _ECCP2DEL_PDC3_POSN                                 0x3
#define _ECCP2DEL_PDC3_POSITION                             0x3
#define _ECCP2DEL_PDC3_SIZE                                 0x1
#define _ECCP2DEL_PDC3_LENGTH                               0x1
#define _ECCP2DEL_PDC3_MASK                                 0x8
#define _ECCP2DEL_PDC4_POSN                                 0x4
#define _ECCP2DEL_PDC4_POSITION                             0x4
#define _ECCP2DEL_PDC4_SIZE                                 0x1
#define _ECCP2DEL_PDC4_LENGTH                               0x1
#define _ECCP2DEL_PDC4_MASK                                 0x10
#define _ECCP2DEL_PDC5_POSN                                 0x5
#define _ECCP2DEL_PDC5_POSITION                             0x5
#define _ECCP2DEL_PDC5_SIZE                                 0x1
#define _ECCP2DEL_PDC5_LENGTH                               0x1
#define _ECCP2DEL_PDC5_MASK                                 0x20
#define _ECCP2DEL_PDC6_POSN                                 0x6
#define _ECCP2DEL_PDC6_POSITION                             0x6
#define _ECCP2DEL_PDC6_SIZE                                 0x1
#define _ECCP2DEL_PDC6_LENGTH                               0x1
#define _ECCP2DEL_PDC6_MASK                                 0x40
#define _ECCP2DEL_P2DC0_POSN                                0x0
#define _ECCP2DEL_P2DC0_POSITION                            0x0
#define _ECCP2DEL_P2DC0_SIZE                                0x1
#define _ECCP2DEL_P2DC0_LENGTH                              0x1
#define _ECCP2DEL_P2DC0_MASK                                0x1
#define _ECCP2DEL_P2DC1_POSN                                0x1
#define _ECCP2DEL_P2DC1_POSITION                            0x1
#define _ECCP2DEL_P2DC1_SIZE                                0x1
#define _ECCP2DEL_P2DC1_LENGTH                              0x1
#define _ECCP2DEL_P2DC1_MASK                                0x2
#define _ECCP2DEL_P2DC2_POSN                                0x2
#define _ECCP2DEL_P2DC2_POSITION                            0x2
#define _ECCP2DEL_P2DC2_SIZE                                0x1
#define _ECCP2DEL_P2DC2_LENGTH                              0x1
#define _ECCP2DEL_P2DC2_MASK                                0x4
#define _ECCP2DEL_P2DC3_POSN                                0x3
#define _ECCP2DEL_P2DC3_POSITION                            0x3
#define _ECCP2DEL_P2DC3_SIZE                                0x1
#define _ECCP2DEL_P2DC3_LENGTH                              0x1
#define _ECCP2DEL_P2DC3_MASK                                0x8
#define _ECCP2DEL_P2DC4_POSN                                0x4
#define _ECCP2DEL_P2DC4_POSITION                            0x4
#define _ECCP2DEL_P2DC4_SIZE                                0x1
#define _ECCP2DEL_P2DC4_LENGTH                              0x1
#define _ECCP2DEL_P2DC4_MASK                                0x10
#define _ECCP2DEL_P2DC5_POSN                                0x5
#define _ECCP2DEL_P2DC5_POSITION                            0x5
#define _ECCP2DEL_P2DC5_SIZE                                0x1
#define _ECCP2DEL_P2DC5_LENGTH                              0x1
#define _ECCP2DEL_P2DC5_MASK                                0x20
#define _ECCP2DEL_P2DC6_POSN                                0x6
#define _ECCP2DEL_P2DC6_POSITION                            0x6
#define _ECCP2DEL_P2DC6_SIZE                                0x1
#define _ECCP2DEL_P2DC6_LENGTH                              0x1
#define _ECCP2DEL_P2DC6_MASK                                0x40
#define _ECCP2DEL_P2RSEN_POSN                               0x7
#define _ECCP2DEL_P2RSEN_POSITION                           0x7
#define _ECCP2DEL_P2RSEN_SIZE                               0x1
#define _ECCP2DEL_P2RSEN_LENGTH                             0x1
#define _ECCP2DEL_P2RSEN_MASK                               0x80

// Register: ECCP2AS
#define ECCP2AS ECCP2AS
extern volatile unsigned char           ECCP2AS             __at(0xF68);
#ifndef _LIB_BUILD
asm("ECCP2AS equ 0F68h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned PSSBD                  :2;
        unsigned PSSAC                  :2;
        unsigned ECCPAS                 :3;
        unsigned ECCPASE                :1;
    };
    struct {
        unsigned PSSBD0                 :1;
        unsigned PSSBD1                 :1;
        unsigned PSSAC0                 :1;
        unsigned PSSAC1                 :1;
        unsigned ECCPAS0                :1;
        unsigned ECCPAS1                :1;
        unsigned ECCPAS2                :1;
    };
    struct {
        unsigned PSS2BD0                :1;
        unsigned PSS2BD1                :1;
        unsigned PSS2AC0                :1;
        unsigned PSS2AC1                :1;
        unsigned ECCP2AS0               :1;
        unsigned ECCP2AS1               :1;
        unsigned ECCP2AS2               :1;
        unsigned ECCP2ASE               :1;
    };
} ECCP2ASbits_t;
extern volatile ECCP2ASbits_t ECCP2ASbits __at(0xF68);
// bitfield macros
#define _ECCP2AS_PSSBD_POSN                                 0x0
#define _ECCP2AS_PSSBD_POSITION                             0x0
#define _ECCP2AS_PSSBD_SIZE                                 0x2
#define _ECCP2AS_PSSBD_LENGTH                               0x2
#define _ECCP2AS_PSSBD_MASK                                 0x3
#define _ECCP2AS_PSSAC_POSN                                 0x2
#define _ECCP2AS_PSSAC_POSITION                             0x2
#define _ECCP2AS_PSSAC_SIZE                                 0x2
#define _ECCP2AS_PSSAC_LENGTH                               0x2
#define _ECCP2AS_PSSAC_MASK                                 0xC
#define _ECCP2AS_ECCPAS_POSN                                0x4
#define _ECCP2AS_ECCPAS_POSITION                            0x4
#define _ECCP2AS_ECCPAS_SIZE                                0x3
#define _ECCP2AS_ECCPAS_LENGTH                              0x3
#define _ECCP2AS_ECCPAS_MASK                                0x70
#define _ECCP2AS_ECCPASE_POSN                               0x7
#define _ECCP2AS_ECCPASE_POSITION                           0x7
#define _ECCP2AS_ECCPASE_SIZE                               0x1
#define _ECCP2AS_ECCPASE_LENGTH                             0x1
#define _ECCP2AS_ECCPASE_MASK                               0x80
#define _ECCP2AS_PSSBD0_POSN                                0x0
#define _ECCP2AS_PSSBD0_POSITION                            0x0
#define _ECCP2AS_PSSBD0_SIZE                                0x1
#define _ECCP2AS_PSSBD0_LENGTH                              0x1
#define _ECCP2AS_PSSBD0_MASK                                0x1
#define _ECCP2AS_PSSBD1_POSN                                0x1
#define _ECCP2AS_PSSBD1_POSITION                            0x1
#define _ECCP2AS_PSSBD1_SIZE                                0x1
#define _ECCP2AS_PSSBD1_LENGTH                              0x1
#define _ECCP2AS_PSSBD1_MASK                                0x2
#define _ECCP2AS_PSSAC0_POSN                                0x2
#define _ECCP2AS_PSSAC0_POSITION                            0x2
#define _ECCP2AS_PSSAC0_SIZE                                0x1
#define _ECCP2AS_PSSAC0_LENGTH                              0x1
#define _ECCP2AS_PSSAC0_MASK                                0x4
#define _ECCP2AS_PSSAC1_POSN                                0x3
#define _ECCP2AS_PSSAC1_POSITION                            0x3
#define _ECCP2AS_PSSAC1_SIZE                                0x1
#define _ECCP2AS_PSSAC1_LENGTH                              0x1
#define _ECCP2AS_PSSAC1_MASK                                0x8
#define _ECCP2AS_ECCPAS0_POSN                               0x4
#define _ECCP2AS_ECCPAS0_POSITION                           0x4
#define _ECCP2AS_ECCPAS0_SIZE                               0x1
#define _ECCP2AS_ECCPAS0_LENGTH                             0x1
#define _ECCP2AS_ECCPAS0_MASK                               0x10
#define _ECCP2AS_ECCPAS1_POSN                               0x5
#define _ECCP2AS_ECCPAS1_POSITION                           0x5
#define _ECCP2AS_ECCPAS1_SIZE                               0x1
#define _ECCP2AS_ECCPAS1_LENGTH                             0x1
#define _ECCP2AS_ECCPAS1_MASK                               0x20
#define _ECCP2AS_ECCPAS2_POSN                               0x6
#define _ECCP2AS_ECCPAS2_POSITION                           0x6
#define _ECCP2AS_ECCPAS2_SIZE                               0x1
#define _ECCP2AS_ECCPAS2_LENGTH                             0x1
#define _ECCP2AS_ECCPAS2_MASK                               0x40
#define _ECCP2AS_PSS2BD0_POSN                               0x0
#define _ECCP2AS_PSS2BD0_POSITION                           0x0
#define _ECCP2AS_PSS2BD0_SIZE                               0x1
#define _ECCP2AS_PSS2BD0_LENGTH                             0x1
#define _ECCP2AS_PSS2BD0_MASK                               0x1
#define _ECCP2AS_PSS2BD1_POSN                               0x1
#define _ECCP2AS_PSS2BD1_POSITION                           0x1
#define _ECCP2AS_PSS2BD1_SIZE                               0x1
#define _ECCP2AS_PSS2BD1_LENGTH                             0x1
#define _ECCP2AS_PSS2BD1_MASK                               0x2
#define _ECCP2AS_PSS2AC0_POSN                               0x2
#define _ECCP2AS_PSS2AC0_POSITION                           0x2
#define _ECCP2AS_PSS2AC0_SIZE                               0x1
#define _ECCP2AS_PSS2AC0_LENGTH                             0x1
#define _ECCP2AS_PSS2AC0_MASK                               0x4
#define _ECCP2AS_PSS2AC1_POSN                               0x3
#define _ECCP2AS_PSS2AC1_POSITION                           0x3
#define _ECCP2AS_PSS2AC1_SIZE                               0x1
#define _ECCP2AS_PSS2AC1_LENGTH                             0x1
#define _ECCP2AS_PSS2AC1_MASK                               0x8
#define _ECCP2AS_ECCP2AS0_POSN                              0x4
#define _ECCP2AS_ECCP2AS0_POSITION                          0x4
#define _ECCP2AS_ECCP2AS0_SIZE                              0x1
#define _ECCP2AS_ECCP2AS0_LENGTH                            0x1
#define _ECCP2AS_ECCP2AS0_MASK                              0x10
#define _ECCP2AS_ECCP2AS1_POSN                              0x5
#define _ECCP2AS_ECCP2AS1_POSITION                          0x5
#define _ECCP2AS_ECCP2AS1_SIZE                              0x1
#define _ECCP2AS_ECCP2AS1_LENGTH                            0x1
#define _ECCP2AS_ECCP2AS1_MASK                              0x20
#define _ECCP2AS_ECCP2AS2_POSN                              0x6
#define _ECCP2AS_ECCP2AS2_POSITION                          0x6
#define _ECCP2AS_ECCP2AS2_SIZE                              0x1
#define _ECCP2AS_ECCP2AS2_LENGTH                            0x1
#define _ECCP2AS_ECCP2AS2_MASK                              0x40
#define _ECCP2AS_ECCP2ASE_POSN                              0x7
#define _ECCP2AS_ECCP2ASE_POSITION                          0x7
#define _ECCP2AS_ECCP2ASE_SIZE                              0x1
#define _ECCP2AS_ECCP2ASE_LENGTH                            0x1
#define _ECCP2AS_ECCP2ASE_MASK                              0x80

// Register: ECCP3DEL
#define ECCP3DEL ECCP3DEL
extern volatile unsigned char           ECCP3DEL            __at(0xF69);
#ifndef _LIB_BUILD
asm("ECCP3DEL equ 0F69h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned PDC                    :7;
        unsigned PRSEN                  :1;
    };
    struct {
        unsigned PDC0                   :1;
        unsigned PDC1                   :1;
        unsigned PDC2                   :1;
        unsigned PDC3                   :1;
        unsigned PDC4                   :1;
        unsigned PDC5                   :1;
        unsigned PDC6                   :1;
    };
    struct {
        unsigned P3DC0                  :1;
        unsigned P3DC1                  :1;
        unsigned P3DC2                  :1;
        unsigned P3DC3                  :1;
        unsigned P3DC4                  :1;
        unsigned P3DC5                  :1;
        unsigned P3DC6                  :1;
        unsigned P3RSEN                 :1;
    };
} ECCP3DELbits_t;
extern volatile ECCP3DELbits_t ECCP3DELbits __at(0xF69);
// bitfield macros
#define _ECCP3DEL_PDC_POSN                                  0x0
#define _ECCP3DEL_PDC_POSITION                              0x0
#define _ECCP3DEL_PDC_SIZE                                  0x7
#define _ECCP3DEL_PDC_LENGTH                                0x7
#define _ECCP3DEL_PDC_MASK                                  0x7F
#define _ECCP3DEL_PRSEN_POSN                                0x7
#define _ECCP3DEL_PRSEN_POSITION                            0x7
#define _ECCP3DEL_PRSEN_SIZE                                0x1
#define _ECCP3DEL_PRSEN_LENGTH                              0x1
#define _ECCP3DEL_PRSEN_MASK                                0x80
#define _ECCP3DEL_PDC0_POSN                                 0x0
#define _ECCP3DEL_PDC0_POSITION                             0x0
#define _ECCP3DEL_PDC0_SIZE                                 0x1
#define _ECCP3DEL_PDC0_LENGTH                               0x1
#define _ECCP3DEL_PDC0_MASK                                 0x1
#define _ECCP3DEL_PDC1_POSN                                 0x1
#define _ECCP3DEL_PDC1_POSITION                             0x1
#define _ECCP3DEL_PDC1_SIZE                                 0x1
#define _ECCP3DEL_PDC1_LENGTH                               0x1
#define _ECCP3DEL_PDC1_MASK                                 0x2
#define _ECCP3DEL_PDC2_POSN                                 0x2
#define _ECCP3DEL_PDC2_POSITION                             0x2
#define _ECCP3DEL_PDC2_SIZE                                 0x1
#define _ECCP3DEL_PDC2_LENGTH                               0x1
#define _ECCP3DEL_PDC2_MASK                                 0x4
#define _ECCP3DEL_PDC3_POSN                                 0x3
#define _ECCP3DEL_PDC3_POSITION                             0x3
#define _ECCP3DEL_PDC3_SIZE                                 0x1
#define _ECCP3DEL_PDC3_LENGTH                               0x1
#define _ECCP3DEL_PDC3_MASK                                 0x8
#define _ECCP3DEL_PDC4_POSN                                 0x4
#define _ECCP3DEL_PDC4_POSITION                             0x4
#define _ECCP3DEL_PDC4_SIZE                                 0x1
#define _ECCP3DEL_PDC4_LENGTH                               0x1
#define _ECCP3DEL_PDC4_MASK                                 0x10
#define _ECCP3DEL_PDC5_POSN                                 0x5
#define _ECCP3DEL_PDC5_POSITION                             0x5
#define _ECCP3DEL_PDC5_SIZE                                 0x1
#define _ECCP3DEL_PDC5_LENGTH                               0x1
#define _ECCP3DEL_PDC5_MASK                                 0x20
#define _ECCP3DEL_PDC6_POSN                                 0x6
#define _ECCP3DEL_PDC6_POSITION                             0x6
#define _ECCP3DEL_PDC6_SIZE                                 0x1
#define _ECCP3DEL_PDC6_LENGTH                               0x1
#define _ECCP3DEL_PDC6_MASK                                 0x40
#define _ECCP3DEL_P3DC0_POSN                                0x0
#define _ECCP3DEL_P3DC0_POSITION                            0x0
#define _ECCP3DEL_P3DC0_SIZE                                0x1
#define _ECCP3DEL_P3DC0_LENGTH                              0x1
#define _ECCP3DEL_P3DC0_MASK                                0x1
#define _ECCP3DEL_P3DC1_POSN                                0x1
#define _ECCP3DEL_P3DC1_POSITION                            0x1
#define _ECCP3DEL_P3DC1_SIZE                                0x1
#define _ECCP3DEL_P3DC1_LENGTH                              0x1
#define _ECCP3DEL_P3DC1_MASK                                0x2
#define _ECCP3DEL_P3DC2_POSN                                0x2
#define _ECCP3DEL_P3DC2_POSITION                            0x2
#define _ECCP3DEL_P3DC2_SIZE                                0x1
#define _ECCP3DEL_P3DC2_LENGTH                              0x1
#define _ECCP3DEL_P3DC2_MASK                                0x4
#define _ECCP3DEL_P3DC3_POSN                                0x3
#define _ECCP3DEL_P3DC3_POSITION                            0x3
#define _ECCP3DEL_P3DC3_SIZE                                0x1
#define _ECCP3DEL_P3DC3_LENGTH                              0x1
#define _ECCP3DEL_P3DC3_MASK                                0x8
#define _ECCP3DEL_P3DC4_POSN                                0x4
#define _ECCP3DEL_P3DC4_POSITION                            0x4
#define _ECCP3DEL_P3DC4_SIZE                                0x1
#define _ECCP3DEL_P3DC4_LENGTH                              0x1
#define _ECCP3DEL_P3DC4_MASK                                0x10
#define _ECCP3DEL_P3DC5_POSN                                0x5
#define _ECCP3DEL_P3DC5_POSITION                            0x5
#define _ECCP3DEL_P3DC5_SIZE                                0x1
#define _ECCP3DEL_P3DC5_LENGTH                              0x1
#define _ECCP3DEL_P3DC5_MASK                                0x20
#define _ECCP3DEL_P3DC6_POSN                                0x6
#define _ECCP3DEL_P3DC6_POSITION                            0x6
#define _ECCP3DEL_P3DC6_SIZE                                0x1
#define _ECCP3DEL_P3DC6_LENGTH                              0x1
#define _ECCP3DEL_P3DC6_MASK                                0x40
#define _ECCP3DEL_P3RSEN_POSN                               0x7
#define _ECCP3DEL_P3RSEN_POSITION                           0x7
#define _ECCP3DEL_P3RSEN_SIZE                               0x1
#define _ECCP3DEL_P3RSEN_LENGTH                             0x1
#define _ECCP3DEL_P3RSEN_MASK                               0x80

// Register: ECCP3AS
#define ECCP3AS ECCP3AS
extern volatile unsigned char           ECCP3AS             __at(0xF6A);
#ifndef _LIB_BUILD
asm("ECCP3AS equ 0F6Ah");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned PSSBD                  :2;
        unsigned PSSAC                  :2;
        unsigned ECCPAS                 :3;
        unsigned ECCPASE                :1;
    };
    struct {
        unsigned PSSBD0                 :1;
        unsigned PSSBD1                 :1;
        unsigned PSSAC0                 :1;
        unsigned PSSAC1                 :1;
        unsigned ECCPAS0                :1;
        unsigned ECCPAS1                :1;
        unsigned ECCPAS2                :1;
    };
    struct {
        unsigned PSS3BD0                :1;
        unsigned PSS3BD1                :1;
        unsigned PSS3AC0                :1;
        unsigned PSS3AC1                :1;
        unsigned ECCP3AS0               :1;
        unsigned ECCP3AS1               :1;
        unsigned ECCP3AS2               :1;
        unsigned ECCP3ASE               :1;
    };
} ECCP3ASbits_t;
extern volatile ECCP3ASbits_t ECCP3ASbits __at(0xF6A);
// bitfield macros
#define _ECCP3AS_PSSBD_POSN                                 0x0
#define _ECCP3AS_PSSBD_POSITION                             0x0
#define _ECCP3AS_PSSBD_SIZE                                 0x2
#define _ECCP3AS_PSSBD_LENGTH                               0x2
#define _ECCP3AS_PSSBD_MASK                                 0x3
#define _ECCP3AS_PSSAC_POSN                                 0x2
#define _ECCP3AS_PSSAC_POSITION                             0x2
#define _ECCP3AS_PSSAC_SIZE                                 0x2
#define _ECCP3AS_PSSAC_LENGTH                               0x2
#define _ECCP3AS_PSSAC_MASK                                 0xC
#define _ECCP3AS_ECCPAS_POSN                                0x4
#define _ECCP3AS_ECCPAS_POSITION                            0x4
#define _ECCP3AS_ECCPAS_SIZE                                0x3
#define _ECCP3AS_ECCPAS_LENGTH                              0x3
#define _ECCP3AS_ECCPAS_MASK                                0x70
#define _ECCP3AS_ECCPASE_POSN                               0x7
#define _ECCP3AS_ECCPASE_POSITION                           0x7
#define _ECCP3AS_ECCPASE_SIZE                               0x1
#define _ECCP3AS_ECCPASE_LENGTH                             0x1
#define _ECCP3AS_ECCPASE_MASK                               0x80
#define _ECCP3AS_PSSBD0_POSN                                0x0
#define _ECCP3AS_PSSBD0_POSITION                            0x0
#define _ECCP3AS_PSSBD0_SIZE                                0x1
#define _ECCP3AS_PSSBD0_LENGTH                              0x1
#define _ECCP3AS_PSSBD0_MASK                                0x1
#define _ECCP3AS_PSSBD1_POSN                                0x1
#define _ECCP3AS_PSSBD1_POSITION                            0x1
#define _ECCP3AS_PSSBD1_SIZE                                0x1
#define _ECCP3AS_PSSBD1_LENGTH                              0x1
#define _ECCP3AS_PSSBD1_MASK                                0x2
#define _ECCP3AS_PSSAC0_POSN                                0x2
#define _ECCP3AS_PSSAC0_POSITION                            0x2
#define _ECCP3AS_PSSAC0_SIZE                                0x1
#define _ECCP3AS_PSSAC0_LENGTH                              0x1
#define _ECCP3AS_PSSAC0_MASK                                0x4
#define _ECCP3AS_PSSAC1_POSN                                0x3
#define _ECCP3AS_PSSAC1_POSITION                            0x3
#define _ECCP3AS_PSSAC1_SIZE                                0x1
#define _ECCP3AS_PSSAC1_LENGTH                              0x1
#define _ECCP3AS_PSSAC1_MASK                                0x8
#define _ECCP3AS_ECCPAS0_POSN                               0x4
#define _ECCP3AS_ECCPAS0_POSITION                           0x4
#define _ECCP3AS_ECCPAS0_SIZE                               0x1
#define _ECCP3AS_ECCPAS0_LENGTH                             0x1
#define _ECCP3AS_ECCPAS0_MASK                               0x10
#define _ECCP3AS_ECCPAS1_POSN                               0x5
#define _ECCP3AS_ECCPAS1_POSITION                           0x5
#define _ECCP3AS_ECCPAS1_SIZE                               0x1
#define _ECCP3AS_ECCPAS1_LENGTH                             0x1
#define _ECCP3AS_ECCPAS1_MASK                               0x20
#define _ECCP3AS_ECCPAS2_POSN                               0x6
#define _ECCP3AS_ECCPAS2_POSITION                           0x6
#define _ECCP3AS_ECCPAS2_SIZE                               0x1
#define _ECCP3AS_ECCPAS2_LENGTH                             0x1
#define _ECCP3AS_ECCPAS2_MASK                               0x40
#define _ECCP3AS_PSS3BD0_POSN                               0x0
#define _ECCP3AS_PSS3BD0_POSITION                           0x0
#define _ECCP3AS_PSS3BD0_SIZE                               0x1
#define _ECCP3AS_PSS3BD0_LENGTH                             0x1
#define _ECCP3AS_PSS3BD0_MASK                               0x1
#define _ECCP3AS_PSS3BD1_POSN                               0x1
#define _ECCP3AS_PSS3BD1_POSITION                           0x1
#define _ECCP3AS_PSS3BD1_SIZE                               0x1
#define _ECCP3AS_PSS3BD1_LENGTH                             0x1
#define _ECCP3AS_PSS3BD1_MASK                               0x2
#define _ECCP3AS_PSS3AC0_POSN                               0x2
#define _ECCP3AS_PSS3AC0_POSITION                           0x2
#define _ECCP3AS_PSS3AC0_SIZE                               0x1
#define _ECCP3AS_PSS3AC0_LENGTH                             0x1
#define _ECCP3AS_PSS3AC0_MASK                               0x4
#define _ECCP3AS_PSS3AC1_POSN                               0x3
#define _ECCP3AS_PSS3AC1_POSITION                           0x3
#define _ECCP3AS_PSS3AC1_SIZE                               0x1
#define _ECCP3AS_PSS3AC1_LENGTH                             0x1
#define _ECCP3AS_PSS3AC1_MASK                               0x8
#define _ECCP3AS_ECCP3AS0_POSN                              0x4
#define _ECCP3AS_ECCP3AS0_POSITION                          0x4
#define _ECCP3AS_ECCP3AS0_SIZE                              0x1
#define _ECCP3AS_ECCP3AS0_LENGTH                            0x1
#define _ECCP3AS_ECCP3AS0_MASK                              0x10
#define _ECCP3AS_ECCP3AS1_POSN                              0x5
#define _ECCP3AS_ECCP3AS1_POSITION                          0x5
#define _ECCP3AS_ECCP3AS1_SIZE                              0x1
#define _ECCP3AS_ECCP3AS1_LENGTH                            0x1
#define _ECCP3AS_ECCP3AS1_MASK                              0x20
#define _ECCP3AS_ECCP3AS2_POSN                              0x6
#define _ECCP3AS_ECCP3AS2_POSITION                          0x6
#define _ECCP3AS_ECCP3AS2_SIZE                              0x1
#define _ECCP3AS_ECCP3AS2_LENGTH                            0x1
#define _ECCP3AS_ECCP3AS2_MASK                              0x40
#define _ECCP3AS_ECCP3ASE_POSN                              0x7
#define _ECCP3AS_ECCP3ASE_POSITION                          0x7
#define _ECCP3AS_ECCP3ASE_SIZE                              0x1
#define _ECCP3AS_ECCP3ASE_LENGTH                            0x1
#define _ECCP3AS_ECCP3ASE_MASK                              0x80

// Register: RCSTA2
#define RCSTA2 RCSTA2
extern volatile unsigned char           RCSTA2              __at(0xF6B);
#ifndef _LIB_BUILD
asm("RCSTA2 equ 0F6Bh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned RX9D                   :1;
        unsigned OERR                   :1;
        unsigned FERR                   :1;
        unsigned ADDEN                  :1;
        unsigned CREN                   :1;
        unsigned SREN                   :1;
        unsigned RX9                    :1;
        unsigned SPEN                   :1;
    };
    struct {
        unsigned RCD8                   :1;
        unsigned                        :5;
        unsigned RC9                    :1;
    };
    struct {
        unsigned                        :6;
        unsigned NOT_RC8                :1;
    };
    struct {
        unsigned                        :6;
        unsigned nRC8                   :1;
    };
    struct {
        unsigned                        :6;
        unsigned RC8_9                  :1;
    };
    struct {
        unsigned RX9D2                  :1;
        unsigned OERR2                  :1;
        unsigned FERR2                  :1;
        unsigned ADDEN2                 :1;
        unsigned CREN2                  :1;
        unsigned SREN2                  :1;
        unsigned RX92                   :1;
        unsigned SPEN2                  :1;
    };
    struct {
        unsigned RCD82                  :1;
        unsigned                        :5;
        unsigned RC8_92                 :1;
    };
    struct {
        unsigned                        :6;
        unsigned RC92                   :1;
    };
} RCSTA2bits_t;
extern volatile RCSTA2bits_t RCSTA2bits __at(0xF6B);
// bitfield macros
#define _RCSTA2_RX9D_POSN                                   0x0
#define _RCSTA2_RX9D_POSITION                               0x0
#define _RCSTA2_RX9D_SIZE                                   0x1
#define _RCSTA2_RX9D_LENGTH                                 0x1
#define _RCSTA2_RX9D_MASK                                   0x1
#define _RCSTA2_OERR_POSN                                   0x1
#define _RCSTA2_OERR_POSITION                               0x1
#define _RCSTA2_OERR_SIZE                                   0x1
#define _RCSTA2_OERR_LENGTH                                 0x1
#define _RCSTA2_OERR_MASK                                   0x2
#define _RCSTA2_FERR_POSN                                   0x2
#define _RCSTA2_FERR_POSITION                               0x2
#define _RCSTA2_FERR_SIZE                                   0x1
#define _RCSTA2_FERR_LENGTH                                 0x1
#define _RCSTA2_FERR_MASK                                   0x4
#define _RCSTA2_ADDEN_POSN                                  0x3
#define _RCSTA2_ADDEN_POSITION                              0x3
#define _RCSTA2_ADDEN_SIZE                                  0x1
#define _RCSTA2_ADDEN_LENGTH                                0x1
#define _RCSTA2_ADDEN_MASK                                  0x8
#define _RCSTA2_CREN_POSN                                   0x4
#define _RCSTA2_CREN_POSITION                               0x4
#define _RCSTA2_CREN_SIZE                                   0x1
#define _RCSTA2_CREN_LENGTH                                 0x1
#define _RCSTA2_CREN_MASK                                   0x10
#define _RCSTA2_SREN_POSN                                   0x5
#define _RCSTA2_SREN_POSITION                               0x5
#define _RCSTA2_SREN_SIZE                                   0x1
#define _RCSTA2_SREN_LENGTH                                 0x1
#define _RCSTA2_SREN_MASK                                   0x20
#define _RCSTA2_RX9_POSN                                    0x6
#define _RCSTA2_RX9_POSITION                                0x6
#define _RCSTA2_RX9_SIZE                                    0x1
#define _RCSTA2_RX9_LENGTH                                  0x1
#define _RCSTA2_RX9_MASK                                    0x40
#define _RCSTA2_SPEN_POSN                                   0x7
#define _RCSTA2_SPEN_POSITION                               0x7
#define _RCSTA2_SPEN_SIZE                                   0x1
#define _RCSTA2_SPEN_LENGTH                                 0x1
#define _RCSTA2_SPEN_MASK                                   0x80
#define _RCSTA2_RCD8_POSN                                   0x0
#define _RCSTA2_RCD8_POSITION                               0x0
#define _RCSTA2_RCD8_SIZE                                   0x1
#define _RCSTA2_RCD8_LENGTH                                 0x1
#define _RCSTA2_RCD8_MASK                                   0x1
#define _RCSTA2_RC9_POSN                                    0x6
#define _RCSTA2_RC9_POSITION                                0x6
#define _RCSTA2_RC9_SIZE                                    0x1
#define _RCSTA2_RC9_LENGTH                                  0x1
#define _RCSTA2_RC9_MASK                                    0x40
#define _RCSTA2_NOT_RC8_POSN                                0x6
#define _RCSTA2_NOT_RC8_POSITION                            0x6
#define _RCSTA2_NOT_RC8_SIZE                                0x1
#define _RCSTA2_NOT_RC8_LENGTH                              0x1
#define _RCSTA2_NOT_RC8_MASK                                0x40
#define _RCSTA2_nRC8_POSN                                   0x6
#define _RCSTA2_nRC8_POSITION                               0x6
#define _RCSTA2_nRC8_SIZE                                   0x1
#define _RCSTA2_nRC8_LENGTH                                 0x1
#define _RCSTA2_nRC8_MASK                                   0x40
#define _RCSTA2_RC8_9_POSN                                  0x6
#define _RCSTA2_RC8_9_POSITION                              0x6
#define _RCSTA2_RC8_9_SIZE                                  0x1
#define _RCSTA2_RC8_9_LENGTH                                0x1
#define _RCSTA2_RC8_9_MASK                                  0x40
#define _RCSTA2_RX9D2_POSN                                  0x0
#define _RCSTA2_RX9D2_POSITION                              0x0
#define _RCSTA2_RX9D2_SIZE                                  0x1
#define _RCSTA2_RX9D2_LENGTH                                0x1
#define _RCSTA2_RX9D2_MASK                                  0x1
#define _RCSTA2_OERR2_POSN                                  0x1
#define _RCSTA2_OERR2_POSITION                              0x1
#define _RCSTA2_OERR2_SIZE                                  0x1
#define _RCSTA2_OERR2_LENGTH                                0x1
#define _RCSTA2_OERR2_MASK                                  0x2
#define _RCSTA2_FERR2_POSN                                  0x2
#define _RCSTA2_FERR2_POSITION                              0x2
#define _RCSTA2_FERR2_SIZE                                  0x1
#define _RCSTA2_FERR2_LENGTH                                0x1
#define _RCSTA2_FERR2_MASK                                  0x4
#define _RCSTA2_ADDEN2_POSN                                 0x3
#define _RCSTA2_ADDEN2_POSITION                             0x3
#define _RCSTA2_ADDEN2_SIZE                                 0x1
#define _RCSTA2_ADDEN2_LENGTH                               0x1
#define _RCSTA2_ADDEN2_MASK                                 0x8
#define _RCSTA2_CREN2_POSN                                  0x4
#define _RCSTA2_CREN2_POSITION                              0x4
#define _RCSTA2_CREN2_SIZE                                  0x1
#define _RCSTA2_CREN2_LENGTH                                0x1
#define _RCSTA2_CREN2_MASK                                  0x10
#define _RCSTA2_SREN2_POSN                                  0x5
#define _RCSTA2_SREN2_POSITION                              0x5
#define _RCSTA2_SREN2_SIZE                                  0x1
#define _RCSTA2_SREN2_LENGTH                                0x1
#define _RCSTA2_SREN2_MASK                                  0x20
#define _RCSTA2_RX92_POSN                                   0x6
#define _RCSTA2_RX92_POSITION                               0x6
#define _RCSTA2_RX92_SIZE                                   0x1
#define _RCSTA2_RX92_LENGTH                                 0x1
#define _RCSTA2_RX92_MASK                                   0x40
#define _RCSTA2_SPEN2_POSN                                  0x7
#define _RCSTA2_SPEN2_POSITION                              0x7
#define _RCSTA2_SPEN2_SIZE                                  0x1
#define _RCSTA2_SPEN2_LENGTH                                0x1
#define _RCSTA2_SPEN2_MASK                                  0x80
#define _RCSTA2_RCD82_POSN                                  0x0
#define _RCSTA2_RCD82_POSITION                              0x0
#define _RCSTA2_RCD82_SIZE                                  0x1
#define _RCSTA2_RCD82_LENGTH                                0x1
#define _RCSTA2_RCD82_MASK                                  0x1
#define _RCSTA2_RC8_92_POSN                                 0x6
#define _RCSTA2_RC8_92_POSITION                             0x6
#define _RCSTA2_RC8_92_SIZE                                 0x1
#define _RCSTA2_RC8_92_LENGTH                               0x1
#define _RCSTA2_RC8_92_MASK                                 0x40
#define _RCSTA2_RC92_POSN                                   0x6
#define _RCSTA2_RC92_POSITION                               0x6
#define _RCSTA2_RC92_SIZE                                   0x1
#define _RCSTA2_RC92_LENGTH                                 0x1
#define _RCSTA2_RC92_MASK                                   0x40

// Register: TXSTA2
#define TXSTA2 TXSTA2
extern volatile unsigned char           TXSTA2              __at(0xF6C);
#ifndef _LIB_BUILD
asm("TXSTA2 equ 0F6Ch");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned TX9D                   :1;
        unsigned TRMT                   :1;
        unsigned BRGH                   :1;
        unsigned SENDB                  :1;
        unsigned SYNC                   :1;
        unsigned TXEN                   :1;
        unsigned TX9                    :1;
        unsigned CSRC                   :1;
    };
    struct {
        unsigned TXD8                   :1;
        unsigned                        :5;
        unsigned TX8_9                  :1;
    };
    struct {
        unsigned                        :6;
        unsigned NOT_TX8                :1;
    };
    struct {
        unsigned                        :6;
        unsigned nTX8                   :1;
    };
    struct {
        unsigned TX9D2                  :1;
        unsigned TRMT2                  :1;
        unsigned BRGH2                  :1;
        unsigned SENDB2                 :1;
        unsigned SYNC2                  :1;
        unsigned TXEN2                  :1;
        unsigned TX92                   :1;
        unsigned CSRC2                  :1;
    };
    struct {
        unsigned TXD82                  :1;
        unsigned                        :5;
        unsigned TX8_92                 :1;
    };
} TXSTA2bits_t;
extern volatile TXSTA2bits_t TXSTA2bits __at(0xF6C);
// bitfield macros
#define _TXSTA2_TX9D_POSN                                   0x0
#define _TXSTA2_TX9D_POSITION                               0x0
#define _TXSTA2_TX9D_SIZE                                   0x1
#define _TXSTA2_TX9D_LENGTH                                 0x1
#define _TXSTA2_TX9D_MASK                                   0x1
#define _TXSTA2_TRMT_POSN                                   0x1
#define _TXSTA2_TRMT_POSITION                               0x1
#define _TXSTA2_TRMT_SIZE                                   0x1
#define _TXSTA2_TRMT_LENGTH                                 0x1
#define _TXSTA2_TRMT_MASK                                   0x2
#define _TXSTA2_BRGH_POSN                                   0x2
#define _TXSTA2_BRGH_POSITION                               0x2
#define _TXSTA2_BRGH_SIZE                                   0x1
#define _TXSTA2_BRGH_LENGTH                                 0x1
#define _TXSTA2_BRGH_MASK                                   0x4
#define _TXSTA2_SENDB_POSN                                  0x3
#define _TXSTA2_SENDB_POSITION                              0x3
#define _TXSTA2_SENDB_SIZE                                  0x1
#define _TXSTA2_SENDB_LENGTH                                0x1
#define _TXSTA2_SENDB_MASK                                  0x8
#define _TXSTA2_SYNC_POSN                                   0x4
#define _TXSTA2_SYNC_POSITION                               0x4
#define _TXSTA2_SYNC_SIZE                                   0x1
#define _TXSTA2_SYNC_LENGTH                                 0x1
#define _TXSTA2_SYNC_MASK                                   0x10
#define _TXSTA2_TXEN_POSN                                   0x5
#define _TXSTA2_TXEN_POSITION                               0x5
#define _TXSTA2_TXEN_SIZE                                   0x1
#define _TXSTA2_TXEN_LENGTH                                 0x1
#define _TXSTA2_TXEN_MASK                                   0x20
#define _TXSTA2_TX9_POSN                                    0x6
#define _TXSTA2_TX9_POSITION                                0x6
#define _TXSTA2_TX9_SIZE                                    0x1
#define _TXSTA2_TX9_LENGTH                                  0x1
#define _TXSTA2_TX9_MASK                                    0x40
#define _TXSTA2_CSRC_POSN                                   0x7
#define _TXSTA2_CSRC_POSITION                               0x7
#define _TXSTA2_CSRC_SIZE                                   0x1
#define _TXSTA2_CSRC_LENGTH                                 0x1
#define _TXSTA2_CSRC_MASK                                   0x80
#define _TXSTA2_TXD8_POSN                                   0x0
#define _TXSTA2_TXD8_POSITION                               0x0
#define _TXSTA2_TXD8_SIZE                                   0x1
#define _TXSTA2_TXD8_LENGTH                                 0x1
#define _TXSTA2_TXD8_MASK                                   0x1
#define _TXSTA2_TX8_9_POSN                                  0x6
#define _TXSTA2_TX8_9_POSITION                              0x6
#define _TXSTA2_TX8_9_SIZE                                  0x1
#define _TXSTA2_TX8_9_LENGTH                                0x1
#define _TXSTA2_TX8_9_MASK                                  0x40
#define _TXSTA2_NOT_TX8_POSN                                0x6
#define _TXSTA2_NOT_TX8_POSITION                            0x6
#define _TXSTA2_NOT_TX8_SIZE                                0x1
#define _TXSTA2_NOT_TX8_LENGTH                              0x1
#define _TXSTA2_NOT_TX8_MASK                                0x40
#define _TXSTA2_nTX8_POSN                                   0x6
#define _TXSTA2_nTX8_POSITION                               0x6
#define _TXSTA2_nTX8_SIZE                                   0x1
#define _TXSTA2_nTX8_LENGTH                                 0x1
#define _TXSTA2_nTX8_MASK                                   0x40
#define _TXSTA2_TX9D2_POSN                                  0x0
#define _TXSTA2_TX9D2_POSITION                              0x0
#define _TXSTA2_TX9D2_SIZE                                  0x1
#define _TXSTA2_TX9D2_LENGTH                                0x1
#define _TXSTA2_TX9D2_MASK                                  0x1
#define _TXSTA2_TRMT2_POSN                                  0x1
#define _TXSTA2_TRMT2_POSITION                              0x1
#define _TXSTA2_TRMT2_SIZE                                  0x1
#define _TXSTA2_TRMT2_LENGTH                                0x1
#define _TXSTA2_TRMT2_MASK                                  0x2
#define _TXSTA2_BRGH2_POSN                                  0x2
#define _TXSTA2_BRGH2_POSITION                              0x2
#define _TXSTA2_BRGH2_SIZE                                  0x1
#define _TXSTA2_BRGH2_LENGTH                                0x1
#define _TXSTA2_BRGH2_MASK                                  0x4
#define _TXSTA2_SENDB2_POSN                                 0x3
#define _TXSTA2_SENDB2_POSITION                             0x3
#define _TXSTA2_SENDB2_SIZE                                 0x1
#define _TXSTA2_SENDB2_LENGTH                               0x1
#define _TXSTA2_SENDB2_MASK                                 0x8
#define _TXSTA2_SYNC2_POSN                                  0x4
#define _TXSTA2_SYNC2_POSITION                              0x4
#define _TXSTA2_SYNC2_SIZE                                  0x1
#define _TXSTA2_SYNC2_LENGTH                                0x1
#define _TXSTA2_SYNC2_MASK                                  0x10
#define _TXSTA2_TXEN2_POSN                                  0x5
#define _TXSTA2_TXEN2_POSITION                              0x5
#define _TXSTA2_TXEN2_SIZE                                  0x1
#define _TXSTA2_TXEN2_LENGTH                                0x1
#define _TXSTA2_TXEN2_MASK                                  0x20
#define _TXSTA2_TX92_POSN                                   0x6
#define _TXSTA2_TX92_POSITION                               0x6
#define _TXSTA2_TX92_SIZE                                   0x1
#define _TXSTA2_TX92_LENGTH                                 0x1
#define _TXSTA2_TX92_MASK                                   0x40
#define _TXSTA2_CSRC2_POSN                                  0x7
#define _TXSTA2_CSRC2_POSITION                              0x7
#define _TXSTA2_CSRC2_SIZE                                  0x1
#define _TXSTA2_CSRC2_LENGTH                                0x1
#define _TXSTA2_CSRC2_MASK                                  0x80
#define _TXSTA2_TXD82_POSN                                  0x0
#define _TXSTA2_TXD82_POSITION                              0x0
#define _TXSTA2_TXD82_SIZE                                  0x1
#define _TXSTA2_TXD82_LENGTH                                0x1
#define _TXSTA2_TXD82_MASK                                  0x1
#define _TXSTA2_TX8_92_POSN                                 0x6
#define _TXSTA2_TX8_92_POSITION                             0x6
#define _TXSTA2_TX8_92_SIZE                                 0x1
#define _TXSTA2_TX8_92_LENGTH                               0x1
#define _TXSTA2_TX8_92_MASK                                 0x40

// Register: TXREG2
#define TXREG2 TXREG2
extern volatile unsigned char           TXREG2              __at(0xF6D);
#ifndef _LIB_BUILD
asm("TXREG2 equ 0F6Dh");
#endif

// Register: RCREG2
#define RCREG2 RCREG2
extern volatile unsigned char           RCREG2              __at(0xF6E);
#ifndef _LIB_BUILD
asm("RCREG2 equ 0F6Eh");
#endif

// Register: SPBRG2
#define SPBRG2 SPBRG2
extern volatile unsigned char           SPBRG2              __at(0xF6F);
#ifndef _LIB_BUILD
asm("SPBRG2 equ 0F6Fh");
#endif

// Register: CCP5CON
#define CCP5CON CCP5CON
extern volatile unsigned char           CCP5CON             __at(0xF70);
#ifndef _LIB_BUILD
asm("CCP5CON equ 0F70h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned CCP5M                  :4;
        unsigned DC5B                   :2;
    };
    struct {
        unsigned CCP5M0                 :1;
        unsigned CCP5M1                 :1;
        unsigned CCP5M2                 :1;
        unsigned CCP5M3                 :1;
        unsigned CCP5Y                  :1;
        unsigned CCP5X                  :1;
    };
    struct {
        unsigned                        :4;
        unsigned DC5B0                  :1;
        unsigned DC5B1                  :1;
    };
} CCP5CONbits_t;
extern volatile CCP5CONbits_t CCP5CONbits __at(0xF70);
// bitfield macros
#define _CCP5CON_CCP5M_POSN                                 0x0
#define _CCP5CON_CCP5M_POSITION                             0x0
#define _CCP5CON_CCP5M_SIZE                                 0x4
#define _CCP5CON_CCP5M_LENGTH                               0x4
#define _CCP5CON_CCP5M_MASK                                 0xF
#define _CCP5CON_DC5B_POSN                                  0x4
#define _CCP5CON_DC5B_POSITION                              0x4
#define _CCP5CON_DC5B_SIZE                                  0x2
#define _CCP5CON_DC5B_LENGTH                                0x2
#define _CCP5CON_DC5B_MASK                                  0x30
#define _CCP5CON_CCP5M0_POSN                                0x0
#define _CCP5CON_CCP5M0_POSITION                            0x0
#define _CCP5CON_CCP5M0_SIZE                                0x1
#define _CCP5CON_CCP5M0_LENGTH                              0x1
#define _CCP5CON_CCP5M0_MASK                                0x1
#define _CCP5CON_CCP5M1_POSN                                0x1
#define _CCP5CON_CCP5M1_POSITION                            0x1
#define _CCP5CON_CCP5M1_SIZE                                0x1
#define _CCP5CON_CCP5M1_LENGTH                              0x1
#define _CCP5CON_CCP5M1_MASK                                0x2
#define _CCP5CON_CCP5M2_POSN                                0x2
#define _CCP5CON_CCP5M2_POSITION                            0x2
#define _CCP5CON_CCP5M2_SIZE                                0x1
#define _CCP5CON_CCP5M2_LENGTH                              0x1
#define _CCP5CON_CCP5M2_MASK                                0x4
#define _CCP5CON_CCP5M3_POSN                                0x3
#define _CCP5CON_CCP5M3_POSITION                            0x3
#define _CCP5CON_CCP5M3_SIZE                                0x1
#define _CCP5CON_CCP5M3_LENGTH                              0x1
#define _CCP5CON_CCP5M3_MASK                                0x8
#define _CCP5CON_CCP5Y_POSN                                 0x4
#define _CCP5CON_CCP5Y_POSITION                             0x4
#define _CCP5CON_CCP5Y_SIZE                                 0x1
#define _CCP5CON_CCP5Y_LENGTH                               0x1
#define _CCP5CON_CCP5Y_MASK                                 0x10
#define _CCP5CON_CCP5X_POSN                                 0x5
#define _CCP5CON_CCP5X_POSITION                             0x5
#define _CCP5CON_CCP5X_SIZE                                 0x1
#define _CCP5CON_CCP5X_LENGTH                               0x1
#define _CCP5CON_CCP5X_MASK                                 0x20
#define _CCP5CON_DC5B0_POSN                                 0x4
#define _CCP5CON_DC5B0_POSITION                             0x4
#define _CCP5CON_DC5B0_SIZE                                 0x1
#define _CCP5CON_DC5B0_LENGTH                               0x1
#define _CCP5CON_DC5B0_MASK                                 0x10
#define _CCP5CON_DC5B1_POSN                                 0x5
#define _CCP5CON_DC5B1_POSITION                             0x5
#define _CCP5CON_DC5B1_SIZE                                 0x1
#define _CCP5CON_DC5B1_LENGTH                               0x1
#define _CCP5CON_DC5B1_MASK                                 0x20

// Register: CCPR5
#define CCPR5 CCPR5
extern volatile unsigned short          CCPR5               __at(0xF71);
#ifndef _LIB_BUILD
asm("CCPR5 equ 0F71h");
#endif

// Register: CCPR5L
#define CCPR5L CCPR5L
extern volatile unsigned char           CCPR5L              __at(0xF71);
#ifndef _LIB_BUILD
asm("CCPR5L equ 0F71h");
#endif

// Register: CCPR5H
#define CCPR5H CCPR5H
extern volatile unsigned char           CCPR5H              __at(0xF72);
#ifndef _LIB_BUILD
asm("CCPR5H equ 0F72h");
#endif

// Register: CCP4CON
#define CCP4CON CCP4CON
extern volatile unsigned char           CCP4CON             __at(0xF73);
#ifndef _LIB_BUILD
asm("CCP4CON equ 0F73h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned CCP4M                  :4;
        unsigned DC4B                   :2;
    };
    struct {
        unsigned CCP4M0                 :1;
        unsigned CCP4M1                 :1;
        unsigned CCP4M2                 :1;
        unsigned CCP4M3                 :1;
        unsigned DC4B0                  :1;
        unsigned DC4B1                  :1;
    };
    struct {
        unsigned                        :4;
        unsigned CCP4Y                  :1;
        unsigned CCP4X                  :1;
    };
} CCP4CONbits_t;
extern volatile CCP4CONbits_t CCP4CONbits __at(0xF73);
// bitfield macros
#define _CCP4CON_CCP4M_POSN                                 0x0
#define _CCP4CON_CCP4M_POSITION                             0x0
#define _CCP4CON_CCP4M_SIZE                                 0x4
#define _CCP4CON_CCP4M_LENGTH                               0x4
#define _CCP4CON_CCP4M_MASK                                 0xF
#define _CCP4CON_DC4B_POSN                                  0x4
#define _CCP4CON_DC4B_POSITION                              0x4
#define _CCP4CON_DC4B_SIZE                                  0x2
#define _CCP4CON_DC4B_LENGTH                                0x2
#define _CCP4CON_DC4B_MASK                                  0x30
#define _CCP4CON_CCP4M0_POSN                                0x0
#define _CCP4CON_CCP4M0_POSITION                            0x0
#define _CCP4CON_CCP4M0_SIZE                                0x1
#define _CCP4CON_CCP4M0_LENGTH                              0x1
#define _CCP4CON_CCP4M0_MASK                                0x1
#define _CCP4CON_CCP4M1_POSN                                0x1
#define _CCP4CON_CCP4M1_POSITION                            0x1
#define _CCP4CON_CCP4M1_SIZE                                0x1
#define _CCP4CON_CCP4M1_LENGTH                              0x1
#define _CCP4CON_CCP4M1_MASK                                0x2
#define _CCP4CON_CCP4M2_POSN                                0x2
#define _CCP4CON_CCP4M2_POSITION                            0x2
#define _CCP4CON_CCP4M2_SIZE                                0x1
#define _CCP4CON_CCP4M2_LENGTH                              0x1
#define _CCP4CON_CCP4M2_MASK                                0x4
#define _CCP4CON_CCP4M3_POSN                                0x3
#define _CCP4CON_CCP4M3_POSITION                            0x3
#define _CCP4CON_CCP4M3_SIZE                                0x1
#define _CCP4CON_CCP4M3_LENGTH                              0x1
#define _CCP4CON_CCP4M3_MASK                                0x8
#define _CCP4CON_DC4B0_POSN                                 0x4
#define _CCP4CON_DC4B0_POSITION                             0x4
#define _CCP4CON_DC4B0_SIZE                                 0x1
#define _CCP4CON_DC4B0_LENGTH                               0x1
#define _CCP4CON_DC4B0_MASK                                 0x10
#define _CCP4CON_DC4B1_POSN                                 0x5
#define _CCP4CON_DC4B1_POSITION                             0x5
#define _CCP4CON_DC4B1_SIZE                                 0x1
#define _CCP4CON_DC4B1_LENGTH                               0x1
#define _CCP4CON_DC4B1_MASK                                 0x20
#define _CCP4CON_CCP4Y_POSN                                 0x4
#define _CCP4CON_CCP4Y_POSITION                             0x4
#define _CCP4CON_CCP4Y_SIZE                                 0x1
#define _CCP4CON_CCP4Y_LENGTH                               0x1
#define _CCP4CON_CCP4Y_MASK                                 0x10
#define _CCP4CON_CCP4X_POSN                                 0x5
#define _CCP4CON_CCP4X_POSITION                             0x5
#define _CCP4CON_CCP4X_SIZE                                 0x1
#define _CCP4CON_CCP4X_LENGTH                               0x1
#define _CCP4CON_CCP4X_MASK                                 0x20

// Register: CCPR4
#define CCPR4 CCPR4
extern volatile unsigned short          CCPR4               __at(0xF74);
#ifndef _LIB_BUILD
asm("CCPR4 equ 0F74h");
#endif

// Register: CCPR4L
#define CCPR4L CCPR4L
extern volatile unsigned char           CCPR4L              __at(0xF74);
#ifndef _LIB_BUILD
asm("CCPR4L equ 0F74h");
#endif

// Register: CCPR4H
#define CCPR4H CCPR4H
extern volatile unsigned char           CCPR4H              __at(0xF75);
#ifndef _LIB_BUILD
asm("CCPR4H equ 0F75h");
#endif

// Register: T4CON
#define T4CON T4CON
extern volatile unsigned char           T4CON               __at(0xF76);
#ifndef _LIB_BUILD
asm("T4CON equ 0F76h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned T4CKPS                 :2;
        unsigned TMR4ON                 :1;
        unsigned T4OUTPS                :4;
    };
    struct {
        unsigned T4CKPS0                :1;
        unsigned T4CKPS1                :1;
        unsigned                        :1;
        unsigned T4OUTPS0               :1;
        unsigned T4OUTPS1               :1;
        unsigned T4OUTPS2               :1;
        unsigned T4OUTPS3               :1;
    };
} T4CONbits_t;
extern volatile T4CONbits_t T4CONbits __at(0xF76);
// bitfield macros
#define _T4CON_T4CKPS_POSN                                  0x0
#define _T4CON_T4CKPS_POSITION                              0x0
#define _T4CON_T4CKPS_SIZE                                  0x2
#define _T4CON_T4CKPS_LENGTH                                0x2
#define _T4CON_T4CKPS_MASK                                  0x3
#define _T4CON_TMR4ON_POSN                                  0x2
#define _T4CON_TMR4ON_POSITION                              0x2
#define _T4CON_TMR4ON_SIZE                                  0x1
#define _T4CON_TMR4ON_LENGTH                                0x1
#define _T4CON_TMR4ON_MASK                                  0x4
#define _T4CON_T4OUTPS_POSN                                 0x3
#define _T4CON_T4OUTPS_POSITION                             0x3
#define _T4CON_T4OUTPS_SIZE                                 0x4
#define _T4CON_T4OUTPS_LENGTH                               0x4
#define _T4CON_T4OUTPS_MASK                                 0x78
#define _T4CON_T4CKPS0_POSN                                 0x0
#define _T4CON_T4CKPS0_POSITION                             0x0
#define _T4CON_T4CKPS0_SIZE                                 0x1
#define _T4CON_T4CKPS0_LENGTH                               0x1
#define _T4CON_T4CKPS0_MASK                                 0x1
#define _T4CON_T4CKPS1_POSN                                 0x1
#define _T4CON_T4CKPS1_POSITION                             0x1
#define _T4CON_T4CKPS1_SIZE                                 0x1
#define _T4CON_T4CKPS1_LENGTH                               0x1
#define _T4CON_T4CKPS1_MASK                                 0x2
#define _T4CON_T4OUTPS0_POSN                                0x3
#define _T4CON_T4OUTPS0_POSITION                            0x3
#define _T4CON_T4OUTPS0_SIZE                                0x1
#define _T4CON_T4OUTPS0_LENGTH                              0x1
#define _T4CON_T4OUTPS0_MASK                                0x8
#define _T4CON_T4OUTPS1_POSN                                0x4
#define _T4CON_T4OUTPS1_POSITION                            0x4
#define _T4CON_T4OUTPS1_SIZE                                0x1
#define _T4CON_T4OUTPS1_LENGTH                              0x1
#define _T4CON_T4OUTPS1_MASK                                0x10
#define _T4CON_T4OUTPS2_POSN                                0x5
#define _T4CON_T4OUTPS2_POSITION                            0x5
#define _T4CON_T4OUTPS2_SIZE                                0x1
#define _T4CON_T4OUTPS2_LENGTH                              0x1
#define _T4CON_T4OUTPS2_MASK                                0x20
#define _T4CON_T4OUTPS3_POSN                                0x6
#define _T4CON_T4OUTPS3_POSITION                            0x6
#define _T4CON_T4OUTPS3_SIZE                                0x1
#define _T4CON_T4OUTPS3_LENGTH                              0x1
#define _T4CON_T4OUTPS3_MASK                                0x40

// Register: PR4
#define PR4 PR4
extern volatile unsigned char           PR4                 __at(0xF77);
#ifndef _LIB_BUILD
asm("PR4 equ 0F77h");
#endif

// Register: TMR4
#define TMR4 TMR4
extern volatile unsigned char           TMR4                __at(0xF78);
#ifndef _LIB_BUILD
asm("TMR4 equ 0F78h");
#endif

// Register: ECCP1DEL
#define ECCP1DEL ECCP1DEL
extern volatile unsigned char           ECCP1DEL            __at(0xF79);
#ifndef _LIB_BUILD
asm("ECCP1DEL equ 0F79h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned PDC                    :7;
        unsigned PRSEN                  :1;
    };
    struct {
        unsigned PDC0                   :1;
        unsigned PDC1                   :1;
        unsigned PDC2                   :1;
        unsigned PDC3                   :1;
        unsigned PDC4                   :1;
        unsigned PDC5                   :1;
        unsigned PDC6                   :1;
    };
    struct {
        unsigned P1DC0                  :1;
        unsigned P1DC1                  :1;
        unsigned P1DC2                  :1;
        unsigned P1DC3                  :1;
        unsigned P1DC4                  :1;
        unsigned P1DC5                  :1;
        unsigned P1DC6                  :1;
        unsigned P1RSEN                 :1;
    };
} ECCP1DELbits_t;
extern volatile ECCP1DELbits_t ECCP1DELbits __at(0xF79);
// bitfield macros
#define _ECCP1DEL_PDC_POSN                                  0x0
#define _ECCP1DEL_PDC_POSITION                              0x0
#define _ECCP1DEL_PDC_SIZE                                  0x7
#define _ECCP1DEL_PDC_LENGTH                                0x7
#define _ECCP1DEL_PDC_MASK                                  0x7F
#define _ECCP1DEL_PRSEN_POSN                                0x7
#define _ECCP1DEL_PRSEN_POSITION                            0x7
#define _ECCP1DEL_PRSEN_SIZE                                0x1
#define _ECCP1DEL_PRSEN_LENGTH                              0x1
#define _ECCP1DEL_PRSEN_MASK                                0x80
#define _ECCP1DEL_PDC0_POSN                                 0x0
#define _ECCP1DEL_PDC0_POSITION                             0x0
#define _ECCP1DEL_PDC0_SIZE                                 0x1
#define _ECCP1DEL_PDC0_LENGTH                               0x1
#define _ECCP1DEL_PDC0_MASK                                 0x1
#define _ECCP1DEL_PDC1_POSN                                 0x1
#define _ECCP1DEL_PDC1_POSITION                             0x1
#define _ECCP1DEL_PDC1_SIZE                                 0x1
#define _ECCP1DEL_PDC1_LENGTH                               0x1
#define _ECCP1DEL_PDC1_MASK                                 0x2
#define _ECCP1DEL_PDC2_POSN                                 0x2
#define _ECCP1DEL_PDC2_POSITION                             0x2
#define _ECCP1DEL_PDC2_SIZE                                 0x1
#define _ECCP1DEL_PDC2_LENGTH                               0x1
#define _ECCP1DEL_PDC2_MASK                                 0x4
#define _ECCP1DEL_PDC3_POSN                                 0x3
#define _ECCP1DEL_PDC3_POSITION                             0x3
#define _ECCP1DEL_PDC3_SIZE                                 0x1
#define _ECCP1DEL_PDC3_LENGTH                               0x1
#define _ECCP1DEL_PDC3_MASK                                 0x8
#define _ECCP1DEL_PDC4_POSN                                 0x4
#define _ECCP1DEL_PDC4_POSITION                             0x4
#define _ECCP1DEL_PDC4_SIZE                                 0x1
#define _ECCP1DEL_PDC4_LENGTH                               0x1
#define _ECCP1DEL_PDC4_MASK                                 0x10
#define _ECCP1DEL_PDC5_POSN                                 0x5
#define _ECCP1DEL_PDC5_POSITION                             0x5
#define _ECCP1DEL_PDC5_SIZE                                 0x1
#define _ECCP1DEL_PDC5_LENGTH                               0x1
#define _ECCP1DEL_PDC5_MASK                                 0x20
#define _ECCP1DEL_PDC6_POSN                                 0x6
#define _ECCP1DEL_PDC6_POSITION                             0x6
#define _ECCP1DEL_PDC6_SIZE                                 0x1
#define _ECCP1DEL_PDC6_LENGTH                               0x1
#define _ECCP1DEL_PDC6_MASK                                 0x40
#define _ECCP1DEL_P1DC0_POSN                                0x0
#define _ECCP1DEL_P1DC0_POSITION                            0x0
#define _ECCP1DEL_P1DC0_SIZE                                0x1
#define _ECCP1DEL_P1DC0_LENGTH                              0x1
#define _ECCP1DEL_P1DC0_MASK                                0x1
#define _ECCP1DEL_P1DC1_POSN                                0x1
#define _ECCP1DEL_P1DC1_POSITION                            0x1
#define _ECCP1DEL_P1DC1_SIZE                                0x1
#define _ECCP1DEL_P1DC1_LENGTH                              0x1
#define _ECCP1DEL_P1DC1_MASK                                0x2
#define _ECCP1DEL_P1DC2_POSN                                0x2
#define _ECCP1DEL_P1DC2_POSITION                            0x2
#define _ECCP1DEL_P1DC2_SIZE                                0x1
#define _ECCP1DEL_P1DC2_LENGTH                              0x1
#define _ECCP1DEL_P1DC2_MASK                                0x4
#define _ECCP1DEL_P1DC3_POSN                                0x3
#define _ECCP1DEL_P1DC3_POSITION                            0x3
#define _ECCP1DEL_P1DC3_SIZE                                0x1
#define _ECCP1DEL_P1DC3_LENGTH                              0x1
#define _ECCP1DEL_P1DC3_MASK                                0x8
#define _ECCP1DEL_P1DC4_POSN                                0x4
#define _ECCP1DEL_P1DC4_POSITION                            0x4
#define _ECCP1DEL_P1DC4_SIZE                                0x1
#define _ECCP1DEL_P1DC4_LENGTH                              0x1
#define _ECCP1DEL_P1DC4_MASK                                0x10
#define _ECCP1DEL_P1DC5_POSN                                0x5
#define _ECCP1DEL_P1DC5_POSITION                            0x5
#define _ECCP1DEL_P1DC5_SIZE                                0x1
#define _ECCP1DEL_P1DC5_LENGTH                              0x1
#define _ECCP1DEL_P1DC5_MASK                                0x20
#define _ECCP1DEL_P1DC6_POSN                                0x6
#define _ECCP1DEL_P1DC6_POSITION                            0x6
#define _ECCP1DEL_P1DC6_SIZE                                0x1
#define _ECCP1DEL_P1DC6_LENGTH                              0x1
#define _ECCP1DEL_P1DC6_MASK                                0x40
#define _ECCP1DEL_P1RSEN_POSN                               0x7
#define _ECCP1DEL_P1RSEN_POSITION                           0x7
#define _ECCP1DEL_P1RSEN_SIZE                               0x1
#define _ECCP1DEL_P1RSEN_LENGTH                             0x1
#define _ECCP1DEL_P1RSEN_MASK                               0x80

// Register: ERDPT
#define ERDPT ERDPT
extern volatile unsigned short          ERDPT               __at(0xF7A);
#ifndef _LIB_BUILD
asm("ERDPT equ 0F7Ah");
#endif

// Register: ERDPTL
#define ERDPTL ERDPTL
extern volatile unsigned char           ERDPTL              __at(0xF7A);
#ifndef _LIB_BUILD
asm("ERDPTL equ 0F7Ah");
#endif

// Register: ERDPTH
#define ERDPTH ERDPTH
extern volatile unsigned char           ERDPTH              __at(0xF7B);
#ifndef _LIB_BUILD
asm("ERDPTH equ 0F7Bh");
#endif

// Register: BAUDCON2
#define BAUDCON2 BAUDCON2
extern volatile unsigned char           BAUDCON2            __at(0xF7C);
#ifndef _LIB_BUILD
asm("BAUDCON2 equ 0F7Ch");
#endif
// aliases
extern volatile unsigned char           BAUDCTL2            __at(0xF7C);
#ifndef _LIB_BUILD
asm("BAUDCTL2 equ 0F7Ch");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned ABDEN                  :1;
        unsigned WUE                    :1;
        unsigned                        :1;
        unsigned BRG16                  :1;
        unsigned TXCKP                  :1;
        unsigned RXDTP                  :1;
        unsigned RCIDL                  :1;
        unsigned ABDOVF                 :1;
    };
    struct {
        unsigned                        :4;
        unsigned SCKP                   :1;
        unsigned                        :1;
        unsigned RCMT                   :1;
    };
    struct {
        unsigned ABDEN2                 :1;
        unsigned WUE2                   :1;
        unsigned                        :1;
        unsigned BRG162                 :1;
        unsigned TXCKP2                 :1;
        unsigned RXDTP2                 :1;
        unsigned RCIDL2                 :1;
        unsigned ABDOVF2                :1;
    };
    struct {
        unsigned                        :4;
        unsigned SCKP2                  :1;
        unsigned DTRXP2                 :1;
        unsigned RCMT2                  :1;
    };
} BAUDCON2bits_t;
extern volatile BAUDCON2bits_t BAUDCON2bits __at(0xF7C);
// bitfield macros
#define _BAUDCON2_ABDEN_POSN                                0x0
#define _BAUDCON2_ABDEN_POSITION                            0x0
#define _BAUDCON2_ABDEN_SIZE                                0x1
#define _BAUDCON2_ABDEN_LENGTH                              0x1
#define _BAUDCON2_ABDEN_MASK                                0x1
#define _BAUDCON2_WUE_POSN                                  0x1
#define _BAUDCON2_WUE_POSITION                              0x1
#define _BAUDCON2_WUE_SIZE                                  0x1
#define _BAUDCON2_WUE_LENGTH                                0x1
#define _BAUDCON2_WUE_MASK                                  0x2
#define _BAUDCON2_BRG16_POSN                                0x3
#define _BAUDCON2_BRG16_POSITION                            0x3
#define _BAUDCON2_BRG16_SIZE                                0x1
#define _BAUDCON2_BRG16_LENGTH                              0x1
#define _BAUDCON2_BRG16_MASK                                0x8
#define _BAUDCON2_TXCKP_POSN                                0x4
#define _BAUDCON2_TXCKP_POSITION                            0x4
#define _BAUDCON2_TXCKP_SIZE                                0x1
#define _BAUDCON2_TXCKP_LENGTH                              0x1
#define _BAUDCON2_TXCKP_MASK                                0x10
#define _BAUDCON2_RXDTP_POSN                                0x5
#define _BAUDCON2_RXDTP_POSITION                            0x5
#define _BAUDCON2_RXDTP_SIZE                                0x1
#define _BAUDCON2_RXDTP_LENGTH                              0x1
#define _BAUDCON2_RXDTP_MASK                                0x20
#define _BAUDCON2_RCIDL_POSN                                0x6
#define _BAUDCON2_RCIDL_POSITION                            0x6
#define _BAUDCON2_RCIDL_SIZE                                0x1
#define _BAUDCON2_RCIDL_LENGTH                              0x1
#define _BAUDCON2_RCIDL_MASK                                0x40
#define _BAUDCON2_ABDOVF_POSN                               0x7
#define _BAUDCON2_ABDOVF_POSITION                           0x7
#define _BAUDCON2_ABDOVF_SIZE                               0x1
#define _BAUDCON2_ABDOVF_LENGTH                             0x1
#define _BAUDCON2_ABDOVF_MASK                               0x80
#define _BAUDCON2_SCKP_POSN                                 0x4
#define _BAUDCON2_SCKP_POSITION                             0x4
#define _BAUDCON2_SCKP_SIZE                                 0x1
#define _BAUDCON2_SCKP_LENGTH                               0x1
#define _BAUDCON2_SCKP_MASK                                 0x10
#define _BAUDCON2_RCMT_POSN                                 0x6
#define _BAUDCON2_RCMT_POSITION                             0x6
#define _BAUDCON2_RCMT_SIZE                                 0x1
#define _BAUDCON2_RCMT_LENGTH                               0x1
#define _BAUDCON2_RCMT_MASK                                 0x40
#define _BAUDCON2_ABDEN2_POSN                               0x0
#define _BAUDCON2_ABDEN2_POSITION                           0x0
#define _BAUDCON2_ABDEN2_SIZE                               0x1
#define _BAUDCON2_ABDEN2_LENGTH                             0x1
#define _BAUDCON2_ABDEN2_MASK                               0x1
#define _BAUDCON2_WUE2_POSN                                 0x1
#define _BAUDCON2_WUE2_POSITION                             0x1
#define _BAUDCON2_WUE2_SIZE                                 0x1
#define _BAUDCON2_WUE2_LENGTH                               0x1
#define _BAUDCON2_WUE2_MASK                                 0x2
#define _BAUDCON2_BRG162_POSN                               0x3
#define _BAUDCON2_BRG162_POSITION                           0x3
#define _BAUDCON2_BRG162_SIZE                               0x1
#define _BAUDCON2_BRG162_LENGTH                             0x1
#define _BAUDCON2_BRG162_MASK                               0x8
#define _BAUDCON2_TXCKP2_POSN                               0x4
#define _BAUDCON2_TXCKP2_POSITION                           0x4
#define _BAUDCON2_TXCKP2_SIZE                               0x1
#define _BAUDCON2_TXCKP2_LENGTH                             0x1
#define _BAUDCON2_TXCKP2_MASK                               0x10
#define _BAUDCON2_RXDTP2_POSN                               0x5
#define _BAUDCON2_RXDTP2_POSITION                           0x5
#define _BAUDCON2_RXDTP2_SIZE                               0x1
#define _BAUDCON2_RXDTP2_LENGTH                             0x1
#define _BAUDCON2_RXDTP2_MASK                               0x20
#define _BAUDCON2_RCIDL2_POSN                               0x6
#define _BAUDCON2_RCIDL2_POSITION                           0x6
#define _BAUDCON2_RCIDL2_SIZE                               0x1
#define _BAUDCON2_RCIDL2_LENGTH                             0x1
#define _BAUDCON2_RCIDL2_MASK                               0x40
#define _BAUDCON2_ABDOVF2_POSN                              0x7
#define _BAUDCON2_ABDOVF2_POSITION                          0x7
#define _BAUDCON2_ABDOVF2_SIZE                              0x1
#define _BAUDCON2_ABDOVF2_LENGTH                            0x1
#define _BAUDCON2_ABDOVF2_MASK                              0x80
#define _BAUDCON2_SCKP2_POSN                                0x4
#define _BAUDCON2_SCKP2_POSITION                            0x4
#define _BAUDCON2_SCKP2_SIZE                                0x1
#define _BAUDCON2_SCKP2_LENGTH                              0x1
#define _BAUDCON2_SCKP2_MASK                                0x10
#define _BAUDCON2_DTRXP2_POSN                               0x5
#define _BAUDCON2_DTRXP2_POSITION                           0x5
#define _BAUDCON2_DTRXP2_SIZE                               0x1
#define _BAUDCON2_DTRXP2_LENGTH                             0x1
#define _BAUDCON2_DTRXP2_MASK                               0x20
#define _BAUDCON2_RCMT2_POSN                                0x6
#define _BAUDCON2_RCMT2_POSITION                            0x6
#define _BAUDCON2_RCMT2_SIZE                                0x1
#define _BAUDCON2_RCMT2_LENGTH                              0x1
#define _BAUDCON2_RCMT2_MASK                                0x40
// alias bitfield definitions
typedef union {
    struct {
        unsigned ABDEN                  :1;
        unsigned WUE                    :1;
        unsigned                        :1;
        unsigned BRG16                  :1;
        unsigned TXCKP                  :1;
        unsigned RXDTP                  :1;
        unsigned RCIDL                  :1;
        unsigned ABDOVF                 :1;
    };
    struct {
        unsigned                        :4;
        unsigned SCKP                   :1;
        unsigned                        :1;
        unsigned RCMT                   :1;
    };
    struct {
        unsigned ABDEN2                 :1;
        unsigned WUE2                   :1;
        unsigned                        :1;
        unsigned BRG162                 :1;
        unsigned TXCKP2                 :1;
        unsigned RXDTP2                 :1;
        unsigned RCIDL2                 :1;
        unsigned ABDOVF2                :1;
    };
    struct {
        unsigned                        :4;
        unsigned SCKP2                  :1;
        unsigned DTRXP2                 :1;
        unsigned RCMT2                  :1;
    };
} BAUDCTL2bits_t;
extern volatile BAUDCTL2bits_t BAUDCTL2bits __at(0xF7C);
// bitfield macros
#define _BAUDCTL2_ABDEN_POSN                                0x0
#define _BAUDCTL2_ABDEN_POSITION                            0x0
#define _BAUDCTL2_ABDEN_SIZE                                0x1
#define _BAUDCTL2_ABDEN_LENGTH                              0x1
#define _BAUDCTL2_ABDEN_MASK                                0x1
#define _BAUDCTL2_WUE_POSN                                  0x1
#define _BAUDCTL2_WUE_POSITION                              0x1
#define _BAUDCTL2_WUE_SIZE                                  0x1
#define _BAUDCTL2_WUE_LENGTH                                0x1
#define _BAUDCTL2_WUE_MASK                                  0x2
#define _BAUDCTL2_BRG16_POSN                                0x3
#define _BAUDCTL2_BRG16_POSITION                            0x3
#define _BAUDCTL2_BRG16_SIZE                                0x1
#define _BAUDCTL2_BRG16_LENGTH                              0x1
#define _BAUDCTL2_BRG16_MASK                                0x8
#define _BAUDCTL2_TXCKP_POSN                                0x4
#define _BAUDCTL2_TXCKP_POSITION                            0x4
#define _BAUDCTL2_TXCKP_SIZE                                0x1
#define _BAUDCTL2_TXCKP_LENGTH                              0x1
#define _BAUDCTL2_TXCKP_MASK                                0x10
#define _BAUDCTL2_RXDTP_POSN                                0x5
#define _BAUDCTL2_RXDTP_POSITION                            0x5
#define _BAUDCTL2_RXDTP_SIZE                                0x1
#define _BAUDCTL2_RXDTP_LENGTH                              0x1
#define _BAUDCTL2_RXDTP_MASK                                0x20
#define _BAUDCTL2_RCIDL_POSN                                0x6
#define _BAUDCTL2_RCIDL_POSITION                            0x6
#define _BAUDCTL2_RCIDL_SIZE                                0x1
#define _BAUDCTL2_RCIDL_LENGTH                              0x1
#define _BAUDCTL2_RCIDL_MASK                                0x40
#define _BAUDCTL2_ABDOVF_POSN                               0x7
#define _BAUDCTL2_ABDOVF_POSITION                           0x7
#define _BAUDCTL2_ABDOVF_SIZE                               0x1
#define _BAUDCTL2_ABDOVF_LENGTH                             0x1
#define _BAUDCTL2_ABDOVF_MASK                               0x80
#define _BAUDCTL2_SCKP_POSN                                 0x4
#define _BAUDCTL2_SCKP_POSITION                             0x4
#define _BAUDCTL2_SCKP_SIZE                                 0x1
#define _BAUDCTL2_SCKP_LENGTH                               0x1
#define _BAUDCTL2_SCKP_MASK                                 0x10
#define _BAUDCTL2_RCMT_POSN                                 0x6
#define _BAUDCTL2_RCMT_POSITION                             0x6
#define _BAUDCTL2_RCMT_SIZE                                 0x1
#define _BAUDCTL2_RCMT_LENGTH                               0x1
#define _BAUDCTL2_RCMT_MASK                                 0x40
#define _BAUDCTL2_ABDEN2_POSN                               0x0
#define _BAUDCTL2_ABDEN2_POSITION                           0x0
#define _BAUDCTL2_ABDEN2_SIZE                               0x1
#define _BAUDCTL2_ABDEN2_LENGTH                             0x1
#define _BAUDCTL2_ABDEN2_MASK                               0x1
#define _BAUDCTL2_WUE2_POSN                                 0x1
#define _BAUDCTL2_WUE2_POSITION                             0x1
#define _BAUDCTL2_WUE2_SIZE                                 0x1
#define _BAUDCTL2_WUE2_LENGTH                               0x1
#define _BAUDCTL2_WUE2_MASK                                 0x2
#define _BAUDCTL2_BRG162_POSN                               0x3
#define _BAUDCTL2_BRG162_POSITION                           0x3
#define _BAUDCTL2_BRG162_SIZE                               0x1
#define _BAUDCTL2_BRG162_LENGTH                             0x1
#define _BAUDCTL2_BRG162_MASK                               0x8
#define _BAUDCTL2_TXCKP2_POSN                               0x4
#define _BAUDCTL2_TXCKP2_POSITION                           0x4
#define _BAUDCTL2_TXCKP2_SIZE                               0x1
#define _BAUDCTL2_TXCKP2_LENGTH                             0x1
#define _BAUDCTL2_TXCKP2_MASK                               0x10
#define _BAUDCTL2_RXDTP2_POSN                               0x5
#define _BAUDCTL2_RXDTP2_POSITION                           0x5
#define _BAUDCTL2_RXDTP2_SIZE                               0x1
#define _BAUDCTL2_RXDTP2_LENGTH                             0x1
#define _BAUDCTL2_RXDTP2_MASK                               0x20
#define _BAUDCTL2_RCIDL2_POSN                               0x6
#define _BAUDCTL2_RCIDL2_POSITION                           0x6
#define _BAUDCTL2_RCIDL2_SIZE                               0x1
#define _BAUDCTL2_RCIDL2_LENGTH                             0x1
#define _BAUDCTL2_RCIDL2_MASK                               0x40
#define _BAUDCTL2_ABDOVF2_POSN                              0x7
#define _BAUDCTL2_ABDOVF2_POSITION                          0x7
#define _BAUDCTL2_ABDOVF2_SIZE                              0x1
#define _BAUDCTL2_ABDOVF2_LENGTH                            0x1
#define _BAUDCTL2_ABDOVF2_MASK                              0x80
#define _BAUDCTL2_SCKP2_POSN                                0x4
#define _BAUDCTL2_SCKP2_POSITION                            0x4
#define _BAUDCTL2_SCKP2_SIZE                                0x1
#define _BAUDCTL2_SCKP2_LENGTH                              0x1
#define _BAUDCTL2_SCKP2_MASK                                0x10
#define _BAUDCTL2_DTRXP2_POSN                               0x5
#define _BAUDCTL2_DTRXP2_POSITION                           0x5
#define _BAUDCTL2_DTRXP2_SIZE                               0x1
#define _BAUDCTL2_DTRXP2_LENGTH                             0x1
#define _BAUDCTL2_DTRXP2_MASK                               0x20
#define _BAUDCTL2_RCMT2_POSN                                0x6
#define _BAUDCTL2_RCMT2_POSITION                            0x6
#define _BAUDCTL2_RCMT2_SIZE                                0x1
#define _BAUDCTL2_RCMT2_LENGTH                              0x1
#define _BAUDCTL2_RCMT2_MASK                                0x40

// Register: SPBRGH2
#define SPBRGH2 SPBRGH2
extern volatile unsigned char           SPBRGH2             __at(0xF7D);
#ifndef _LIB_BUILD
asm("SPBRGH2 equ 0F7Dh");
#endif

// Register: BAUDCON1
#define BAUDCON1 BAUDCON1
extern volatile unsigned char           BAUDCON1            __at(0xF7E);
#ifndef _LIB_BUILD
asm("BAUDCON1 equ 0F7Eh");
#endif
// aliases
extern volatile unsigned char           BAUDCON             __at(0xF7E);
#ifndef _LIB_BUILD
asm("BAUDCON equ 0F7Eh");
#endif
extern volatile unsigned char           BAUDCTL             __at(0xF7E);
#ifndef _LIB_BUILD
asm("BAUDCTL equ 0F7Eh");
#endif
extern volatile unsigned char           BAUDCTL1            __at(0xF7E);
#ifndef _LIB_BUILD
asm("BAUDCTL1 equ 0F7Eh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned ABDEN                  :1;
        unsigned WUE                    :1;
        unsigned                        :1;
        unsigned BRG16                  :1;
        unsigned TXCKP                  :1;
        unsigned RXDTP                  :1;
        unsigned RCIDL                  :1;
        unsigned ABDOVF                 :1;
    };
    struct {
        unsigned                        :4;
        unsigned SCKP                   :1;
        unsigned                        :1;
        unsigned RCMT                   :1;
    };
    struct {
        unsigned ABDEN1                 :1;
        unsigned WUE1                   :1;
        unsigned                        :1;
        unsigned BRG161                 :1;
        unsigned CKTXP                  :1;
        unsigned DTRXP                  :1;
        unsigned RCIDL1                 :1;
        unsigned ABDOVF1                :1;
    };
    struct {
        unsigned                        :4;
        unsigned SCKP1                  :1;
        unsigned DTRXP1                 :1;
        unsigned RCMT1                  :1;
    };
    struct {
        unsigned                        :4;
        unsigned TXCKP1                 :1;
        unsigned RXDTP1                 :1;
    };
    struct {
        unsigned                        :5;
        unsigned RXCKP                  :1;
    };
    struct {
        unsigned                        :1;
        unsigned W4E                    :1;
    };
} BAUDCON1bits_t;
extern volatile BAUDCON1bits_t BAUDCON1bits __at(0xF7E);
// bitfield macros
#define _BAUDCON1_ABDEN_POSN                                0x0
#define _BAUDCON1_ABDEN_POSITION                            0x0
#define _BAUDCON1_ABDEN_SIZE                                0x1
#define _BAUDCON1_ABDEN_LENGTH                              0x1
#define _BAUDCON1_ABDEN_MASK                                0x1
#define _BAUDCON1_WUE_POSN                                  0x1
#define _BAUDCON1_WUE_POSITION                              0x1
#define _BAUDCON1_WUE_SIZE                                  0x1
#define _BAUDCON1_WUE_LENGTH                                0x1
#define _BAUDCON1_WUE_MASK                                  0x2
#define _BAUDCON1_BRG16_POSN                                0x3
#define _BAUDCON1_BRG16_POSITION                            0x3
#define _BAUDCON1_BRG16_SIZE                                0x1
#define _BAUDCON1_BRG16_LENGTH                              0x1
#define _BAUDCON1_BRG16_MASK                                0x8
#define _BAUDCON1_TXCKP_POSN                                0x4
#define _BAUDCON1_TXCKP_POSITION                            0x4
#define _BAUDCON1_TXCKP_SIZE                                0x1
#define _BAUDCON1_TXCKP_LENGTH                              0x1
#define _BAUDCON1_TXCKP_MASK                                0x10
#define _BAUDCON1_RXDTP_POSN                                0x5
#define _BAUDCON1_RXDTP_POSITION                            0x5
#define _BAUDCON1_RXDTP_SIZE                                0x1
#define _BAUDCON1_RXDTP_LENGTH                              0x1
#define _BAUDCON1_RXDTP_MASK                                0x20
#define _BAUDCON1_RCIDL_POSN                                0x6
#define _BAUDCON1_RCIDL_POSITION                            0x6
#define _BAUDCON1_RCIDL_SIZE                                0x1
#define _BAUDCON1_RCIDL_LENGTH                              0x1
#define _BAUDCON1_RCIDL_MASK                                0x40
#define _BAUDCON1_ABDOVF_POSN                               0x7
#define _BAUDCON1_ABDOVF_POSITION                           0x7
#define _BAUDCON1_ABDOVF_SIZE                               0x1
#define _BAUDCON1_ABDOVF_LENGTH                             0x1
#define _BAUDCON1_ABDOVF_MASK                               0x80
#define _BAUDCON1_SCKP_POSN                                 0x4
#define _BAUDCON1_SCKP_POSITION                             0x4
#define _BAUDCON1_SCKP_SIZE                                 0x1
#define _BAUDCON1_SCKP_LENGTH                               0x1
#define _BAUDCON1_SCKP_MASK                                 0x10
#define _BAUDCON1_RCMT_POSN                                 0x6
#define _BAUDCON1_RCMT_POSITION                             0x6
#define _BAUDCON1_RCMT_SIZE                                 0x1
#define _BAUDCON1_RCMT_LENGTH                               0x1
#define _BAUDCON1_RCMT_MASK                                 0x40
#define _BAUDCON1_ABDEN1_POSN                               0x0
#define _BAUDCON1_ABDEN1_POSITION                           0x0
#define _BAUDCON1_ABDEN1_SIZE                               0x1
#define _BAUDCON1_ABDEN1_LENGTH                             0x1
#define _BAUDCON1_ABDEN1_MASK                               0x1
#define _BAUDCON1_WUE1_POSN                                 0x1
#define _BAUDCON1_WUE1_POSITION                             0x1
#define _BAUDCON1_WUE1_SIZE                                 0x1
#define _BAUDCON1_WUE1_LENGTH                               0x1
#define _BAUDCON1_WUE1_MASK                                 0x2
#define _BAUDCON1_BRG161_POSN                               0x3
#define _BAUDCON1_BRG161_POSITION                           0x3
#define _BAUDCON1_BRG161_SIZE                               0x1
#define _BAUDCON1_BRG161_LENGTH                             0x1
#define _BAUDCON1_BRG161_MASK                               0x8
#define _BAUDCON1_CKTXP_POSN                                0x4
#define _BAUDCON1_CKTXP_POSITION                            0x4
#define _BAUDCON1_CKTXP_SIZE                                0x1
#define _BAUDCON1_CKTXP_LENGTH                              0x1
#define _BAUDCON1_CKTXP_MASK                                0x10
#define _BAUDCON1_DTRXP_POSN                                0x5
#define _BAUDCON1_DTRXP_POSITION                            0x5
#define _BAUDCON1_DTRXP_SIZE                                0x1
#define _BAUDCON1_DTRXP_LENGTH                              0x1
#define _BAUDCON1_DTRXP_MASK                                0x20
#define _BAUDCON1_RCIDL1_POSN                               0x6
#define _BAUDCON1_RCIDL1_POSITION                           0x6
#define _BAUDCON1_RCIDL1_SIZE                               0x1
#define _BAUDCON1_RCIDL1_LENGTH                             0x1
#define _BAUDCON1_RCIDL1_MASK                               0x40
#define _BAUDCON1_ABDOVF1_POSN                              0x7
#define _BAUDCON1_ABDOVF1_POSITION                          0x7
#define _BAUDCON1_ABDOVF1_SIZE                              0x1
#define _BAUDCON1_ABDOVF1_LENGTH                            0x1
#define _BAUDCON1_ABDOVF1_MASK                              0x80
#define _BAUDCON1_SCKP1_POSN                                0x4
#define _BAUDCON1_SCKP1_POSITION                            0x4
#define _BAUDCON1_SCKP1_SIZE                                0x1
#define _BAUDCON1_SCKP1_LENGTH                              0x1
#define _BAUDCON1_SCKP1_MASK                                0x10
#define _BAUDCON1_DTRXP1_POSN                               0x5
#define _BAUDCON1_DTRXP1_POSITION                           0x5
#define _BAUDCON1_DTRXP1_SIZE                               0x1
#define _BAUDCON1_DTRXP1_LENGTH                             0x1
#define _BAUDCON1_DTRXP1_MASK                               0x20
#define _BAUDCON1_RCMT1_POSN                                0x6
#define _BAUDCON1_RCMT1_POSITION                            0x6
#define _BAUDCON1_RCMT1_SIZE                                0x1
#define _BAUDCON1_RCMT1_LENGTH                              0x1
#define _BAUDCON1_RCMT1_MASK                                0x40
#define _BAUDCON1_TXCKP1_POSN                               0x4
#define _BAUDCON1_TXCKP1_POSITION                           0x4
#define _BAUDCON1_TXCKP1_SIZE                               0x1
#define _BAUDCON1_TXCKP1_LENGTH                             0x1
#define _BAUDCON1_TXCKP1_MASK                               0x10
#define _BAUDCON1_RXDTP1_POSN                               0x5
#define _BAUDCON1_RXDTP1_POSITION                           0x5
#define _BAUDCON1_RXDTP1_SIZE                               0x1
#define _BAUDCON1_RXDTP1_LENGTH                             0x1
#define _BAUDCON1_RXDTP1_MASK                               0x20
#define _BAUDCON1_RXCKP_POSN                                0x5
#define _BAUDCON1_RXCKP_POSITION                            0x5
#define _BAUDCON1_RXCKP_SIZE                                0x1
#define _BAUDCON1_RXCKP_LENGTH                              0x1
#define _BAUDCON1_RXCKP_MASK                                0x20
#define _BAUDCON1_W4E_POSN                                  0x1
#define _BAUDCON1_W4E_POSITION                              0x1
#define _BAUDCON1_W4E_SIZE                                  0x1
#define _BAUDCON1_W4E_LENGTH                                0x1
#define _BAUDCON1_W4E_MASK                                  0x2
// alias bitfield definitions
typedef union {
    struct {
        unsigned ABDEN                  :1;
        unsigned WUE                    :1;
        unsigned                        :1;
        unsigned BRG16                  :1;
        unsigned TXCKP                  :1;
        unsigned RXDTP                  :1;
        unsigned RCIDL                  :1;
        unsigned ABDOVF                 :1;
    };
    struct {
        unsigned                        :4;
        unsigned SCKP                   :1;
        unsigned                        :1;
        unsigned RCMT                   :1;
    };
    struct {
        unsigned ABDEN1                 :1;
        unsigned WUE1                   :1;
        unsigned                        :1;
        unsigned BRG161                 :1;
        unsigned CKTXP                  :1;
        unsigned DTRXP                  :1;
        unsigned RCIDL1                 :1;
        unsigned ABDOVF1                :1;
    };
    struct {
        unsigned                        :4;
        unsigned SCKP1                  :1;
        unsigned DTRXP1                 :1;
        unsigned RCMT1                  :1;
    };
    struct {
        unsigned                        :4;
        unsigned TXCKP1                 :1;
        unsigned RXDTP1                 :1;
    };
    struct {
        unsigned                        :5;
        unsigned RXCKP                  :1;
    };
    struct {
        unsigned                        :1;
        unsigned W4E                    :1;
    };
} BAUDCONbits_t;
extern volatile BAUDCONbits_t BAUDCONbits __at(0xF7E);
// bitfield macros
#define _BAUDCON_ABDEN_POSN                                 0x0
#define _BAUDCON_ABDEN_POSITION                             0x0
#define _BAUDCON_ABDEN_SIZE                                 0x1
#define _BAUDCON_ABDEN_LENGTH                               0x1
#define _BAUDCON_ABDEN_MASK                                 0x1
#define _BAUDCON_WUE_POSN                                   0x1
#define _BAUDCON_WUE_POSITION                               0x1
#define _BAUDCON_WUE_SIZE                                   0x1
#define _BAUDCON_WUE_LENGTH                                 0x1
#define _BAUDCON_WUE_MASK                                   0x2
#define _BAUDCON_BRG16_POSN                                 0x3
#define _BAUDCON_BRG16_POSITION                             0x3
#define _BAUDCON_BRG16_SIZE                                 0x1
#define _BAUDCON_BRG16_LENGTH                               0x1
#define _BAUDCON_BRG16_MASK                                 0x8
#define _BAUDCON_TXCKP_POSN                                 0x4
#define _BAUDCON_TXCKP_POSITION                             0x4
#define _BAUDCON_TXCKP_SIZE                                 0x1
#define _BAUDCON_TXCKP_LENGTH                               0x1
#define _BAUDCON_TXCKP_MASK                                 0x10
#define _BAUDCON_RXDTP_POSN                                 0x5
#define _BAUDCON_RXDTP_POSITION                             0x5
#define _BAUDCON_RXDTP_SIZE                                 0x1
#define _BAUDCON_RXDTP_LENGTH                               0x1
#define _BAUDCON_RXDTP_MASK                                 0x20
#define _BAUDCON_RCIDL_POSN                                 0x6
#define _BAUDCON_RCIDL_POSITION                             0x6
#define _BAUDCON_RCIDL_SIZE                                 0x1
#define _BAUDCON_RCIDL_LENGTH                               0x1
#define _BAUDCON_RCIDL_MASK                                 0x40
#define _BAUDCON_ABDOVF_POSN                                0x7
#define _BAUDCON_ABDOVF_POSITION                            0x7
#define _BAUDCON_ABDOVF_SIZE                                0x1
#define _BAUDCON_ABDOVF_LENGTH                              0x1
#define _BAUDCON_ABDOVF_MASK                                0x80
#define _BAUDCON_SCKP_POSN                                  0x4
#define _BAUDCON_SCKP_POSITION                              0x4
#define _BAUDCON_SCKP_SIZE                                  0x1
#define _BAUDCON_SCKP_LENGTH                                0x1
#define _BAUDCON_SCKP_MASK                                  0x10
#define _BAUDCON_RCMT_POSN                                  0x6
#define _BAUDCON_RCMT_POSITION                              0x6
#define _BAUDCON_RCMT_SIZE                                  0x1
#define _BAUDCON_RCMT_LENGTH                                0x1
#define _BAUDCON_RCMT_MASK                                  0x40
#define _BAUDCON_ABDEN1_POSN                                0x0
#define _BAUDCON_ABDEN1_POSITION                            0x0
#define _BAUDCON_ABDEN1_SIZE                                0x1
#define _BAUDCON_ABDEN1_LENGTH                              0x1
#define _BAUDCON_ABDEN1_MASK                                0x1
#define _BAUDCON_WUE1_POSN                                  0x1
#define _BAUDCON_WUE1_POSITION                              0x1
#define _BAUDCON_WUE1_SIZE                                  0x1
#define _BAUDCON_WUE1_LENGTH                                0x1
#define _BAUDCON_WUE1_MASK                                  0x2
#define _BAUDCON_BRG161_POSN                                0x3
#define _BAUDCON_BRG161_POSITION                            0x3
#define _BAUDCON_BRG161_SIZE                                0x1
#define _BAUDCON_BRG161_LENGTH                              0x1
#define _BAUDCON_BRG161_MASK                                0x8
#define _BAUDCON_CKTXP_POSN                                 0x4
#define _BAUDCON_CKTXP_POSITION                             0x4
#define _BAUDCON_CKTXP_SIZE                                 0x1
#define _BAUDCON_CKTXP_LENGTH                               0x1
#define _BAUDCON_CKTXP_MASK                                 0x10
#define _BAUDCON_DTRXP_POSN                                 0x5
#define _BAUDCON_DTRXP_POSITION                             0x5
#define _BAUDCON_DTRXP_SIZE                                 0x1
#define _BAUDCON_DTRXP_LENGTH                               0x1
#define _BAUDCON_DTRXP_MASK                                 0x20
#define _BAUDCON_RCIDL1_POSN                                0x6
#define _BAUDCON_RCIDL1_POSITION                            0x6
#define _BAUDCON_RCIDL1_SIZE                                0x1
#define _BAUDCON_RCIDL1_LENGTH                              0x1
#define _BAUDCON_RCIDL1_MASK                                0x40
#define _BAUDCON_ABDOVF1_POSN                               0x7
#define _BAUDCON_ABDOVF1_POSITION                           0x7
#define _BAUDCON_ABDOVF1_SIZE                               0x1
#define _BAUDCON_ABDOVF1_LENGTH                             0x1
#define _BAUDCON_ABDOVF1_MASK                               0x80
#define _BAUDCON_SCKP1_POSN                                 0x4
#define _BAUDCON_SCKP1_POSITION                             0x4
#define _BAUDCON_SCKP1_SIZE                                 0x1
#define _BAUDCON_SCKP1_LENGTH                               0x1
#define _BAUDCON_SCKP1_MASK                                 0x10
#define _BAUDCON_DTRXP1_POSN                                0x5
#define _BAUDCON_DTRXP1_POSITION                            0x5
#define _BAUDCON_DTRXP1_SIZE                                0x1
#define _BAUDCON_DTRXP1_LENGTH                              0x1
#define _BAUDCON_DTRXP1_MASK                                0x20
#define _BAUDCON_RCMT1_POSN                                 0x6
#define _BAUDCON_RCMT1_POSITION                             0x6
#define _BAUDCON_RCMT1_SIZE                                 0x1
#define _BAUDCON_RCMT1_LENGTH                               0x1
#define _BAUDCON_RCMT1_MASK                                 0x40
#define _BAUDCON_TXCKP1_POSN                                0x4
#define _BAUDCON_TXCKP1_POSITION                            0x4
#define _BAUDCON_TXCKP1_SIZE                                0x1
#define _BAUDCON_TXCKP1_LENGTH                              0x1
#define _BAUDCON_TXCKP1_MASK                                0x10
#define _BAUDCON_RXDTP1_POSN                                0x5
#define _BAUDCON_RXDTP1_POSITION                            0x5
#define _BAUDCON_RXDTP1_SIZE                                0x1
#define _BAUDCON_RXDTP1_LENGTH                              0x1
#define _BAUDCON_RXDTP1_MASK                                0x20
#define _BAUDCON_RXCKP_POSN                                 0x5
#define _BAUDCON_RXCKP_POSITION                             0x5
#define _BAUDCON_RXCKP_SIZE                                 0x1
#define _BAUDCON_RXCKP_LENGTH                               0x1
#define _BAUDCON_RXCKP_MASK                                 0x20
#define _BAUDCON_W4E_POSN                                   0x1
#define _BAUDCON_W4E_POSITION                               0x1
#define _BAUDCON_W4E_SIZE                                   0x1
#define _BAUDCON_W4E_LENGTH                                 0x1
#define _BAUDCON_W4E_MASK                                   0x2
typedef union {
    struct {
        unsigned ABDEN                  :1;
        unsigned WUE                    :1;
        unsigned                        :1;
        unsigned BRG16                  :1;
        unsigned TXCKP                  :1;
        unsigned RXDTP                  :1;
        unsigned RCIDL                  :1;
        unsigned ABDOVF                 :1;
    };
    struct {
        unsigned                        :4;
        unsigned SCKP                   :1;
        unsigned                        :1;
        unsigned RCMT                   :1;
    };
    struct {
        unsigned ABDEN1                 :1;
        unsigned WUE1                   :1;
        unsigned                        :1;
        unsigned BRG161                 :1;
        unsigned CKTXP                  :1;
        unsigned DTRXP                  :1;
        unsigned RCIDL1                 :1;
        unsigned ABDOVF1                :1;
    };
    struct {
        unsigned                        :4;
        unsigned SCKP1                  :1;
        unsigned DTRXP1                 :1;
        unsigned RCMT1                  :1;
    };
    struct {
        unsigned                        :4;
        unsigned TXCKP1                 :1;
        unsigned RXDTP1                 :1;
    };
    struct {
        unsigned                        :5;
        unsigned RXCKP                  :1;
    };
    struct {
        unsigned                        :1;
        unsigned W4E                    :1;
    };
} BAUDCTLbits_t;
extern volatile BAUDCTLbits_t BAUDCTLbits __at(0xF7E);
// bitfield macros
#define _BAUDCTL_ABDEN_POSN                                 0x0
#define _BAUDCTL_ABDEN_POSITION                             0x0
#define _BAUDCTL_ABDEN_SIZE                                 0x1
#define _BAUDCTL_ABDEN_LENGTH                               0x1
#define _BAUDCTL_ABDEN_MASK                                 0x1
#define _BAUDCTL_WUE_POSN                                   0x1
#define _BAUDCTL_WUE_POSITION                               0x1
#define _BAUDCTL_WUE_SIZE                                   0x1
#define _BAUDCTL_WUE_LENGTH                                 0x1
#define _BAUDCTL_WUE_MASK                                   0x2
#define _BAUDCTL_BRG16_POSN                                 0x3
#define _BAUDCTL_BRG16_POSITION                             0x3
#define _BAUDCTL_BRG16_SIZE                                 0x1
#define _BAUDCTL_BRG16_LENGTH                               0x1
#define _BAUDCTL_BRG16_MASK                                 0x8
#define _BAUDCTL_TXCKP_POSN                                 0x4
#define _BAUDCTL_TXCKP_POSITION                             0x4
#define _BAUDCTL_TXCKP_SIZE                                 0x1
#define _BAUDCTL_TXCKP_LENGTH                               0x1
#define _BAUDCTL_TXCKP_MASK                                 0x10
#define _BAUDCTL_RXDTP_POSN                                 0x5
#define _BAUDCTL_RXDTP_POSITION                             0x5
#define _BAUDCTL_RXDTP_SIZE                                 0x1
#define _BAUDCTL_RXDTP_LENGTH                               0x1
#define _BAUDCTL_RXDTP_MASK                                 0x20
#define _BAUDCTL_RCIDL_POSN                                 0x6
#define _BAUDCTL_RCIDL_POSITION                             0x6
#define _BAUDCTL_RCIDL_SIZE                                 0x1
#define _BAUDCTL_RCIDL_LENGTH                               0x1
#define _BAUDCTL_RCIDL_MASK                                 0x40
#define _BAUDCTL_ABDOVF_POSN                                0x7
#define _BAUDCTL_ABDOVF_POSITION                            0x7
#define _BAUDCTL_ABDOVF_SIZE                                0x1
#define _BAUDCTL_ABDOVF_LENGTH                              0x1
#define _BAUDCTL_ABDOVF_MASK                                0x80
#define _BAUDCTL_SCKP_POSN                                  0x4
#define _BAUDCTL_SCKP_POSITION                              0x4
#define _BAUDCTL_SCKP_SIZE                                  0x1
#define _BAUDCTL_SCKP_LENGTH                                0x1
#define _BAUDCTL_SCKP_MASK                                  0x10
#define _BAUDCTL_RCMT_POSN                                  0x6
#define _BAUDCTL_RCMT_POSITION                              0x6
#define _BAUDCTL_RCMT_SIZE                                  0x1
#define _BAUDCTL_RCMT_LENGTH                                0x1
#define _BAUDCTL_RCMT_MASK                                  0x40
#define _BAUDCTL_ABDEN1_POSN                                0x0
#define _BAUDCTL_ABDEN1_POSITION                            0x0
#define _BAUDCTL_ABDEN1_SIZE                                0x1
#define _BAUDCTL_ABDEN1_LENGTH                              0x1
#define _BAUDCTL_ABDEN1_MASK                                0x1
#define _BAUDCTL_WUE1_POSN                                  0x1
#define _BAUDCTL_WUE1_POSITION                              0x1
#define _BAUDCTL_WUE1_SIZE                                  0x1
#define _BAUDCTL_WUE1_LENGTH                                0x1
#define _BAUDCTL_WUE1_MASK                                  0x2
#define _BAUDCTL_BRG161_POSN                                0x3
#define _BAUDCTL_BRG161_POSITION                            0x3
#define _BAUDCTL_BRG161_SIZE                                0x1
#define _BAUDCTL_BRG161_LENGTH                              0x1
#define _BAUDCTL_BRG161_MASK                                0x8
#define _BAUDCTL_CKTXP_POSN                                 0x4
#define _BAUDCTL_CKTXP_POSITION                             0x4
#define _BAUDCTL_CKTXP_SIZE                                 0x1
#define _BAUDCTL_CKTXP_LENGTH                               0x1
#define _BAUDCTL_CKTXP_MASK                                 0x10
#define _BAUDCTL_DTRXP_POSN                                 0x5
#define _BAUDCTL_DTRXP_POSITION                             0x5
#define _BAUDCTL_DTRXP_SIZE                                 0x1
#define _BAUDCTL_DTRXP_LENGTH                               0x1
#define _BAUDCTL_DTRXP_MASK                                 0x20
#define _BAUDCTL_RCIDL1_POSN                                0x6
#define _BAUDCTL_RCIDL1_POSITION                            0x6
#define _BAUDCTL_RCIDL1_SIZE                                0x1
#define _BAUDCTL_RCIDL1_LENGTH                              0x1
#define _BAUDCTL_RCIDL1_MASK                                0x40
#define _BAUDCTL_ABDOVF1_POSN                               0x7
#define _BAUDCTL_ABDOVF1_POSITION                           0x7
#define _BAUDCTL_ABDOVF1_SIZE                               0x1
#define _BAUDCTL_ABDOVF1_LENGTH                             0x1
#define _BAUDCTL_ABDOVF1_MASK                               0x80
#define _BAUDCTL_SCKP1_POSN                                 0x4
#define _BAUDCTL_SCKP1_POSITION                             0x4
#define _BAUDCTL_SCKP1_SIZE                                 0x1
#define _BAUDCTL_SCKP1_LENGTH                               0x1
#define _BAUDCTL_SCKP1_MASK                                 0x10
#define _BAUDCTL_DTRXP1_POSN                                0x5
#define _BAUDCTL_DTRXP1_POSITION                            0x5
#define _BAUDCTL_DTRXP1_SIZE                                0x1
#define _BAUDCTL_DTRXP1_LENGTH                              0x1
#define _BAUDCTL_DTRXP1_MASK                                0x20
#define _BAUDCTL_RCMT1_POSN                                 0x6
#define _BAUDCTL_RCMT1_POSITION                             0x6
#define _BAUDCTL_RCMT1_SIZE                                 0x1
#define _BAUDCTL_RCMT1_LENGTH                               0x1
#define _BAUDCTL_RCMT1_MASK                                 0x40
#define _BAUDCTL_TXCKP1_POSN                                0x4
#define _BAUDCTL_TXCKP1_POSITION                            0x4
#define _BAUDCTL_TXCKP1_SIZE                                0x1
#define _BAUDCTL_TXCKP1_LENGTH                              0x1
#define _BAUDCTL_TXCKP1_MASK                                0x10
#define _BAUDCTL_RXDTP1_POSN                                0x5
#define _BAUDCTL_RXDTP1_POSITION                            0x5
#define _BAUDCTL_RXDTP1_SIZE                                0x1
#define _BAUDCTL_RXDTP1_LENGTH                              0x1
#define _BAUDCTL_RXDTP1_MASK                                0x20
#define _BAUDCTL_RXCKP_POSN                                 0x5
#define _BAUDCTL_RXCKP_POSITION                             0x5
#define _BAUDCTL_RXCKP_SIZE                                 0x1
#define _BAUDCTL_RXCKP_LENGTH                               0x1
#define _BAUDCTL_RXCKP_MASK                                 0x20
#define _BAUDCTL_W4E_POSN                                   0x1
#define _BAUDCTL_W4E_POSITION                               0x1
#define _BAUDCTL_W4E_SIZE                                   0x1
#define _BAUDCTL_W4E_LENGTH                                 0x1
#define _BAUDCTL_W4E_MASK                                   0x2
typedef union {
    struct {
        unsigned ABDEN                  :1;
        unsigned WUE                    :1;
        unsigned                        :1;
        unsigned BRG16                  :1;
        unsigned TXCKP                  :1;
        unsigned RXDTP                  :1;
        unsigned RCIDL                  :1;
        unsigned ABDOVF                 :1;
    };
    struct {
        unsigned                        :4;
        unsigned SCKP                   :1;
        unsigned                        :1;
        unsigned RCMT                   :1;
    };
    struct {
        unsigned ABDEN1                 :1;
        unsigned WUE1                   :1;
        unsigned                        :1;
        unsigned BRG161                 :1;
        unsigned CKTXP                  :1;
        unsigned DTRXP                  :1;
        unsigned RCIDL1                 :1;
        unsigned ABDOVF1                :1;
    };
    struct {
        unsigned                        :4;
        unsigned SCKP1                  :1;
        unsigned DTRXP1                 :1;
        unsigned RCMT1                  :1;
    };
    struct {
        unsigned                        :4;
        unsigned TXCKP1                 :1;
        unsigned RXDTP1                 :1;
    };
    struct {
        unsigned                        :5;
        unsigned RXCKP                  :1;
    };
    struct {
        unsigned                        :1;
        unsigned W4E                    :1;
    };
} BAUDCTL1bits_t;
extern volatile BAUDCTL1bits_t BAUDCTL1bits __at(0xF7E);
// bitfield macros
#define _BAUDCTL1_ABDEN_POSN                                0x0
#define _BAUDCTL1_ABDEN_POSITION                            0x0
#define _BAUDCTL1_ABDEN_SIZE                                0x1
#define _BAUDCTL1_ABDEN_LENGTH                              0x1
#define _BAUDCTL1_ABDEN_MASK                                0x1
#define _BAUDCTL1_WUE_POSN                                  0x1
#define _BAUDCTL1_WUE_POSITION                              0x1
#define _BAUDCTL1_WUE_SIZE                                  0x1
#define _BAUDCTL1_WUE_LENGTH                                0x1
#define _BAUDCTL1_WUE_MASK                                  0x2
#define _BAUDCTL1_BRG16_POSN                                0x3
#define _BAUDCTL1_BRG16_POSITION                            0x3
#define _BAUDCTL1_BRG16_SIZE                                0x1
#define _BAUDCTL1_BRG16_LENGTH                              0x1
#define _BAUDCTL1_BRG16_MASK                                0x8
#define _BAUDCTL1_TXCKP_POSN                                0x4
#define _BAUDCTL1_TXCKP_POSITION                            0x4
#define _BAUDCTL1_TXCKP_SIZE                                0x1
#define _BAUDCTL1_TXCKP_LENGTH                              0x1
#define _BAUDCTL1_TXCKP_MASK                                0x10
#define _BAUDCTL1_RXDTP_POSN                                0x5
#define _BAUDCTL1_RXDTP_POSITION                            0x5
#define _BAUDCTL1_RXDTP_SIZE                                0x1
#define _BAUDCTL1_RXDTP_LENGTH                              0x1
#define _BAUDCTL1_RXDTP_MASK                                0x20
#define _BAUDCTL1_RCIDL_POSN                                0x6
#define _BAUDCTL1_RCIDL_POSITION                            0x6
#define _BAUDCTL1_RCIDL_SIZE                                0x1
#define _BAUDCTL1_RCIDL_LENGTH                              0x1
#define _BAUDCTL1_RCIDL_MASK                                0x40
#define _BAUDCTL1_ABDOVF_POSN                               0x7
#define _BAUDCTL1_ABDOVF_POSITION                           0x7
#define _BAUDCTL1_ABDOVF_SIZE                               0x1
#define _BAUDCTL1_ABDOVF_LENGTH                             0x1
#define _BAUDCTL1_ABDOVF_MASK                               0x80
#define _BAUDCTL1_SCKP_POSN                                 0x4
#define _BAUDCTL1_SCKP_POSITION                             0x4
#define _BAUDCTL1_SCKP_SIZE                                 0x1
#define _BAUDCTL1_SCKP_LENGTH                               0x1
#define _BAUDCTL1_SCKP_MASK                                 0x10
#define _BAUDCTL1_RCMT_POSN                                 0x6
#define _BAUDCTL1_RCMT_POSITION                             0x6
#define _BAUDCTL1_RCMT_SIZE                                 0x1
#define _BAUDCTL1_RCMT_LENGTH                               0x1
#define _BAUDCTL1_RCMT_MASK                                 0x40
#define _BAUDCTL1_ABDEN1_POSN                               0x0
#define _BAUDCTL1_ABDEN1_POSITION                           0x0
#define _BAUDCTL1_ABDEN1_SIZE                               0x1
#define _BAUDCTL1_ABDEN1_LENGTH                             0x1
#define _BAUDCTL1_ABDEN1_MASK                               0x1
#define _BAUDCTL1_WUE1_POSN                                 0x1
#define _BAUDCTL1_WUE1_POSITION                             0x1
#define _BAUDCTL1_WUE1_SIZE                                 0x1
#define _BAUDCTL1_WUE1_LENGTH                               0x1
#define _BAUDCTL1_WUE1_MASK                                 0x2
#define _BAUDCTL1_BRG161_POSN                               0x3
#define _BAUDCTL1_BRG161_POSITION                           0x3
#define _BAUDCTL1_BRG161_SIZE                               0x1
#define _BAUDCTL1_BRG161_LENGTH                             0x1
#define _BAUDCTL1_BRG161_MASK                               0x8
#define _BAUDCTL1_CKTXP_POSN                                0x4
#define _BAUDCTL1_CKTXP_POSITION                            0x4
#define _BAUDCTL1_CKTXP_SIZE                                0x1
#define _BAUDCTL1_CKTXP_LENGTH                              0x1
#define _BAUDCTL1_CKTXP_MASK                                0x10
#define _BAUDCTL1_DTRXP_POSN                                0x5
#define _BAUDCTL1_DTRXP_POSITION                            0x5
#define _BAUDCTL1_DTRXP_SIZE                                0x1
#define _BAUDCTL1_DTRXP_LENGTH                              0x1
#define _BAUDCTL1_DTRXP_MASK                                0x20
#define _BAUDCTL1_RCIDL1_POSN                               0x6
#define _BAUDCTL1_RCIDL1_POSITION                           0x6
#define _BAUDCTL1_RCIDL1_SIZE                               0x1
#define _BAUDCTL1_RCIDL1_LENGTH                             0x1
#define _BAUDCTL1_RCIDL1_MASK                               0x40
#define _BAUDCTL1_ABDOVF1_POSN                              0x7
#define _BAUDCTL1_ABDOVF1_POSITION                          0x7
#define _BAUDCTL1_ABDOVF1_SIZE                              0x1
#define _BAUDCTL1_ABDOVF1_LENGTH                            0x1
#define _BAUDCTL1_ABDOVF1_MASK                              0x80
#define _BAUDCTL1_SCKP1_POSN                                0x4
#define _BAUDCTL1_SCKP1_POSITION                            0x4
#define _BAUDCTL1_SCKP1_SIZE                                0x1
#define _BAUDCTL1_SCKP1_LENGTH                              0x1
#define _BAUDCTL1_SCKP1_MASK                                0x10
#define _BAUDCTL1_DTRXP1_POSN                               0x5
#define _BAUDCTL1_DTRXP1_POSITION                           0x5
#define _BAUDCTL1_DTRXP1_SIZE                               0x1
#define _BAUDCTL1_DTRXP1_LENGTH                             0x1
#define _BAUDCTL1_DTRXP1_MASK                               0x20
#define _BAUDCTL1_RCMT1_POSN                                0x6
#define _BAUDCTL1_RCMT1_POSITION                            0x6
#define _BAUDCTL1_RCMT1_SIZE                                0x1
#define _BAUDCTL1_RCMT1_LENGTH                              0x1
#define _BAUDCTL1_RCMT1_MASK                                0x40
#define _BAUDCTL1_TXCKP1_POSN                               0x4
#define _BAUDCTL1_TXCKP1_POSITION                           0x4
#define _BAUDCTL1_TXCKP1_SIZE                               0x1
#define _BAUDCTL1_TXCKP1_LENGTH                             0x1
#define _BAUDCTL1_TXCKP1_MASK                               0x10
#define _BAUDCTL1_RXDTP1_POSN                               0x5
#define _BAUDCTL1_RXDTP1_POSITION                           0x5
#define _BAUDCTL1_RXDTP1_SIZE                               0x1
#define _BAUDCTL1_RXDTP1_LENGTH                             0x1
#define _BAUDCTL1_RXDTP1_MASK                               0x20
#define _BAUDCTL1_RXCKP_POSN                                0x5
#define _BAUDCTL1_RXCKP_POSITION                            0x5
#define _BAUDCTL1_RXCKP_SIZE                                0x1
#define _BAUDCTL1_RXCKP_LENGTH                              0x1
#define _BAUDCTL1_RXCKP_MASK                                0x20
#define _BAUDCTL1_W4E_POSN                                  0x1
#define _BAUDCTL1_W4E_POSITION                              0x1
#define _BAUDCTL1_W4E_SIZE                                  0x1
#define _BAUDCTL1_W4E_LENGTH                                0x1
#define _BAUDCTL1_W4E_MASK                                  0x2

// Register: SPBRGH1
#define SPBRGH1 SPBRGH1
extern volatile unsigned char           SPBRGH1             __at(0xF7F);
#ifndef _LIB_BUILD
asm("SPBRGH1 equ 0F7Fh");
#endif
// aliases
extern volatile unsigned char           SPBRGH              __at(0xF7F);
#ifndef _LIB_BUILD
asm("SPBRGH equ 0F7Fh");
#endif

// Register: PORTA
#define PORTA PORTA
extern volatile unsigned char           PORTA               __at(0xF80);
#ifndef _LIB_BUILD
asm("PORTA equ 0F80h");
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
        unsigned                        :1;
        unsigned RJPU                   :1;
    };
    struct {
        unsigned AN0                    :1;
        unsigned AN1                    :1;
        unsigned AN2                    :1;
        unsigned AN3                    :1;
        unsigned T0CKI                  :1;
        unsigned AN4                    :1;
    };
    struct {
        unsigned LEDA                   :1;
        unsigned LEDB                   :1;
        unsigned VREFM                  :1;
        unsigned VREFP                  :1;
    };
    struct {
        unsigned ULPWUIN                :1;
        unsigned                        :4;
        unsigned LVDIN                  :1;
        unsigned                        :1;
        unsigned RA7                    :1;
    };
} PORTAbits_t;
extern volatile PORTAbits_t PORTAbits __at(0xF80);
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
#define _PORTA_RJPU_POSN                                    0x7
#define _PORTA_RJPU_POSITION                                0x7
#define _PORTA_RJPU_SIZE                                    0x1
#define _PORTA_RJPU_LENGTH                                  0x1
#define _PORTA_RJPU_MASK                                    0x80
#define _PORTA_AN0_POSN                                     0x0
#define _PORTA_AN0_POSITION                                 0x0
#define _PORTA_AN0_SIZE                                     0x1
#define _PORTA_AN0_LENGTH                                   0x1
#define _PORTA_AN0_MASK                                     0x1
#define _PORTA_AN1_POSN                                     0x1
#define _PORTA_AN1_POSITION                                 0x1
#define _PORTA_AN1_SIZE                                     0x1
#define _PORTA_AN1_LENGTH                                   0x1
#define _PORTA_AN1_MASK                                     0x2
#define _PORTA_AN2_POSN                                     0x2
#define _PORTA_AN2_POSITION                                 0x2
#define _PORTA_AN2_SIZE                                     0x1
#define _PORTA_AN2_LENGTH                                   0x1
#define _PORTA_AN2_MASK                                     0x4
#define _PORTA_AN3_POSN                                     0x3
#define _PORTA_AN3_POSITION                                 0x3
#define _PORTA_AN3_SIZE                                     0x1
#define _PORTA_AN3_LENGTH                                   0x1
#define _PORTA_AN3_MASK                                     0x8
#define _PORTA_T0CKI_POSN                                   0x4
#define _PORTA_T0CKI_POSITION                               0x4
#define _PORTA_T0CKI_SIZE                                   0x1
#define _PORTA_T0CKI_LENGTH                                 0x1
#define _PORTA_T0CKI_MASK                                   0x10
#define _PORTA_AN4_POSN                                     0x5
#define _PORTA_AN4_POSITION                                 0x5
#define _PORTA_AN4_SIZE                                     0x1
#define _PORTA_AN4_LENGTH                                   0x1
#define _PORTA_AN4_MASK                                     0x20
#define _PORTA_LEDA_POSN                                    0x0
#define _PORTA_LEDA_POSITION                                0x0
#define _PORTA_LEDA_SIZE                                    0x1
#define _PORTA_LEDA_LENGTH                                  0x1
#define _PORTA_LEDA_MASK                                    0x1
#define _PORTA_LEDB_POSN                                    0x1
#define _PORTA_LEDB_POSITION                                0x1
#define _PORTA_LEDB_SIZE                                    0x1
#define _PORTA_LEDB_LENGTH                                  0x1
#define _PORTA_LEDB_MASK                                    0x2
#define _PORTA_VREFM_POSN                                   0x2
#define _PORTA_VREFM_POSITION                               0x2
#define _PORTA_VREFM_SIZE                                   0x1
#define _PORTA_VREFM_LENGTH                                 0x1
#define _PORTA_VREFM_MASK                                   0x4
#define _PORTA_VREFP_POSN                                   0x3
#define _PORTA_VREFP_POSITION                               0x3
#define _PORTA_VREFP_SIZE                                   0x1
#define _PORTA_VREFP_LENGTH                                 0x1
#define _PORTA_VREFP_MASK                                   0x8
#define _PORTA_ULPWUIN_POSN                                 0x0
#define _PORTA_ULPWUIN_POSITION                             0x0
#define _PORTA_ULPWUIN_SIZE                                 0x1
#define _PORTA_ULPWUIN_LENGTH                               0x1
#define _PORTA_ULPWUIN_MASK                                 0x1
#define _PORTA_LVDIN_POSN                                   0x5
#define _PORTA_LVDIN_POSITION                               0x5
#define _PORTA_LVDIN_SIZE                                   0x1
#define _PORTA_LVDIN_LENGTH                                 0x1
#define _PORTA_LVDIN_MASK                                   0x20
#define _PORTA_RA7_POSN                                     0x7
#define _PORTA_RA7_POSITION                                 0x7
#define _PORTA_RA7_SIZE                                     0x1
#define _PORTA_RA7_LENGTH                                   0x1
#define _PORTA_RA7_MASK                                     0x80

// Register: PORTB
#define PORTB PORTB
extern volatile unsigned char           PORTB               __at(0xF81);
#ifndef _LIB_BUILD
asm("PORTB equ 0F81h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned RB0                    :1;
        unsigned RB1                    :1;
        unsigned RB2                    :1;
        unsigned RB3                    :1;
        unsigned RB4                    :1;
        unsigned RB5                    :1;
        unsigned RB6                    :1;
        unsigned RB7                    :1;
    };
    struct {
        unsigned INT0                   :1;
        unsigned INT1                   :1;
        unsigned INT2                   :1;
        unsigned INT3                   :1;
        unsigned KBI0                   :1;
        unsigned KBI1                   :1;
        unsigned KBI2                   :1;
        unsigned KBI3                   :1;
    };
    struct {
        unsigned FLT0                   :1;
        unsigned                        :5;
        unsigned PGC                    :1;
        unsigned PGD                    :1;
    };
    struct {
        unsigned                        :3;
        unsigned CCP2_PA2               :1;
    };
} PORTBbits_t;
extern volatile PORTBbits_t PORTBbits __at(0xF81);
// bitfield macros
#define _PORTB_RB0_POSN                                     0x0
#define _PORTB_RB0_POSITION                                 0x0
#define _PORTB_RB0_SIZE                                     0x1
#define _PORTB_RB0_LENGTH                                   0x1
#define _PORTB_RB0_MASK                                     0x1
#define _PORTB_RB1_POSN                                     0x1
#define _PORTB_RB1_POSITION                                 0x1
#define _PORTB_RB1_SIZE                                     0x1
#define _PORTB_RB1_LENGTH                                   0x1
#define _PORTB_RB1_MASK                                     0x2
#define _PORTB_RB2_POSN                                     0x2
#define _PORTB_RB2_POSITION                                 0x2
#define _PORTB_RB2_SIZE                                     0x1
#define _PORTB_RB2_LENGTH                                   0x1
#define _PORTB_RB2_MASK                                     0x4
#define _PORTB_RB3_POSN                                     0x3
#define _PORTB_RB3_POSITION                                 0x3
#define _PORTB_RB3_SIZE                                     0x1
#define _PORTB_RB3_LENGTH                                   0x1
#define _PORTB_RB3_MASK                                     0x8
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
#define _PORTB_INT0_POSN                                    0x0
#define _PORTB_INT0_POSITION                                0x0
#define _PORTB_INT0_SIZE                                    0x1
#define _PORTB_INT0_LENGTH                                  0x1
#define _PORTB_INT0_MASK                                    0x1
#define _PORTB_INT1_POSN                                    0x1
#define _PORTB_INT1_POSITION                                0x1
#define _PORTB_INT1_SIZE                                    0x1
#define _PORTB_INT1_LENGTH                                  0x1
#define _PORTB_INT1_MASK                                    0x2
#define _PORTB_INT2_POSN                                    0x2
#define _PORTB_INT2_POSITION                                0x2
#define _PORTB_INT2_SIZE                                    0x1
#define _PORTB_INT2_LENGTH                                  0x1
#define _PORTB_INT2_MASK                                    0x4
#define _PORTB_INT3_POSN                                    0x3
#define _PORTB_INT3_POSITION                                0x3
#define _PORTB_INT3_SIZE                                    0x1
#define _PORTB_INT3_LENGTH                                  0x1
#define _PORTB_INT3_MASK                                    0x8
#define _PORTB_KBI0_POSN                                    0x4
#define _PORTB_KBI0_POSITION                                0x4
#define _PORTB_KBI0_SIZE                                    0x1
#define _PORTB_KBI0_LENGTH                                  0x1
#define _PORTB_KBI0_MASK                                    0x10
#define _PORTB_KBI1_POSN                                    0x5
#define _PORTB_KBI1_POSITION                                0x5
#define _PORTB_KBI1_SIZE                                    0x1
#define _PORTB_KBI1_LENGTH                                  0x1
#define _PORTB_KBI1_MASK                                    0x20
#define _PORTB_KBI2_POSN                                    0x6
#define _PORTB_KBI2_POSITION                                0x6
#define _PORTB_KBI2_SIZE                                    0x1
#define _PORTB_KBI2_LENGTH                                  0x1
#define _PORTB_KBI2_MASK                                    0x40
#define _PORTB_KBI3_POSN                                    0x7
#define _PORTB_KBI3_POSITION                                0x7
#define _PORTB_KBI3_SIZE                                    0x1
#define _PORTB_KBI3_LENGTH                                  0x1
#define _PORTB_KBI3_MASK                                    0x80
#define _PORTB_FLT0_POSN                                    0x0
#define _PORTB_FLT0_POSITION                                0x0
#define _PORTB_FLT0_SIZE                                    0x1
#define _PORTB_FLT0_LENGTH                                  0x1
#define _PORTB_FLT0_MASK                                    0x1
#define _PORTB_PGC_POSN                                     0x6
#define _PORTB_PGC_POSITION                                 0x6
#define _PORTB_PGC_SIZE                                     0x1
#define _PORTB_PGC_LENGTH                                   0x1
#define _PORTB_PGC_MASK                                     0x40
#define _PORTB_PGD_POSN                                     0x7
#define _PORTB_PGD_POSITION                                 0x7
#define _PORTB_PGD_SIZE                                     0x1
#define _PORTB_PGD_LENGTH                                   0x1
#define _PORTB_PGD_MASK                                     0x80
#define _PORTB_CCP2_PA2_POSN                                0x3
#define _PORTB_CCP2_PA2_POSITION                            0x3
#define _PORTB_CCP2_PA2_SIZE                                0x1
#define _PORTB_CCP2_PA2_LENGTH                              0x1
#define _PORTB_CCP2_PA2_MASK                                0x8

// Register: PORTC
#define PORTC PORTC
extern volatile unsigned char           PORTC               __at(0xF82);
#ifndef _LIB_BUILD
asm("PORTC equ 0F82h");
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
    struct {
        unsigned T1OSO                  :1;
        unsigned T1OSI                  :1;
        unsigned CCP1                   :1;
        unsigned SCK                    :1;
        unsigned SDI                    :1;
        unsigned SDO                    :1;
        unsigned TX                     :1;
        unsigned RX                     :1;
    };
    struct {
        unsigned T13CKI                 :1;
        unsigned CCP2                   :1;
        unsigned                        :1;
        unsigned SCL                    :1;
        unsigned SDA                    :1;
        unsigned                        :1;
        unsigned CK                     :1;
        unsigned DT                     :1;
    };
    struct {
        unsigned                        :1;
        unsigned ECCP2                  :1;
        unsigned ECCP1                  :1;
        unsigned SCK1                   :1;
        unsigned SDI1                   :1;
        unsigned SDO1                   :1;
        unsigned TX1                    :1;
        unsigned RX1                    :1;
    };
    struct {
        unsigned                        :3;
        unsigned SCL1                   :1;
        unsigned SDA1                   :1;
        unsigned                        :1;
        unsigned CK1                    :1;
        unsigned DT1                    :1;
    };
    struct {
        unsigned                        :1;
        unsigned PA2                    :1;
        unsigned PA1                    :1;
    };
} PORTCbits_t;
extern volatile PORTCbits_t PORTCbits __at(0xF82);
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
#define _PORTC_T1OSO_POSN                                   0x0
#define _PORTC_T1OSO_POSITION                               0x0
#define _PORTC_T1OSO_SIZE                                   0x1
#define _PORTC_T1OSO_LENGTH                                 0x1
#define _PORTC_T1OSO_MASK                                   0x1
#define _PORTC_T1OSI_POSN                                   0x1
#define _PORTC_T1OSI_POSITION                               0x1
#define _PORTC_T1OSI_SIZE                                   0x1
#define _PORTC_T1OSI_LENGTH                                 0x1
#define _PORTC_T1OSI_MASK                                   0x2
#define _PORTC_CCP1_POSN                                    0x2
#define _PORTC_CCP1_POSITION                                0x2
#define _PORTC_CCP1_SIZE                                    0x1
#define _PORTC_CCP1_LENGTH                                  0x1
#define _PORTC_CCP1_MASK                                    0x4
#define _PORTC_SCK_POSN                                     0x3
#define _PORTC_SCK_POSITION                                 0x3
#define _PORTC_SCK_SIZE                                     0x1
#define _PORTC_SCK_LENGTH                                   0x1
#define _PORTC_SCK_MASK                                     0x8
#define _PORTC_SDI_POSN                                     0x4
#define _PORTC_SDI_POSITION                                 0x4
#define _PORTC_SDI_SIZE                                     0x1
#define _PORTC_SDI_LENGTH                                   0x1
#define _PORTC_SDI_MASK                                     0x10
#define _PORTC_SDO_POSN                                     0x5
#define _PORTC_SDO_POSITION                                 0x5
#define _PORTC_SDO_SIZE                                     0x1
#define _PORTC_SDO_LENGTH                                   0x1
#define _PORTC_SDO_MASK                                     0x20
#define _PORTC_TX_POSN                                      0x6
#define _PORTC_TX_POSITION                                  0x6
#define _PORTC_TX_SIZE                                      0x1
#define _PORTC_TX_LENGTH                                    0x1
#define _PORTC_TX_MASK                                      0x40
#define _PORTC_RX_POSN                                      0x7
#define _PORTC_RX_POSITION                                  0x7
#define _PORTC_RX_SIZE                                      0x1
#define _PORTC_RX_LENGTH                                    0x1
#define _PORTC_RX_MASK                                      0x80
#define _PORTC_T13CKI_POSN                                  0x0
#define _PORTC_T13CKI_POSITION                              0x0
#define _PORTC_T13CKI_SIZE                                  0x1
#define _PORTC_T13CKI_LENGTH                                0x1
#define _PORTC_T13CKI_MASK                                  0x1
#define _PORTC_CCP2_POSN                                    0x1
#define _PORTC_CCP2_POSITION                                0x1
#define _PORTC_CCP2_SIZE                                    0x1
#define _PORTC_CCP2_LENGTH                                  0x1
#define _PORTC_CCP2_MASK                                    0x2
#define _PORTC_SCL_POSN                                     0x3
#define _PORTC_SCL_POSITION                                 0x3
#define _PORTC_SCL_SIZE                                     0x1
#define _PORTC_SCL_LENGTH                                   0x1
#define _PORTC_SCL_MASK                                     0x8
#define _PORTC_SDA_POSN                                     0x4
#define _PORTC_SDA_POSITION                                 0x4
#define _PORTC_SDA_SIZE                                     0x1
#define _PORTC_SDA_LENGTH                                   0x1
#define _PORTC_SDA_MASK                                     0x10
#define _PORTC_CK_POSN                                      0x6
#define _PORTC_CK_POSITION                                  0x6
#define _PORTC_CK_SIZE                                      0x1
#define _PORTC_CK_LENGTH                                    0x1
#define _PORTC_CK_MASK                                      0x40
#define _PORTC_DT_POSN                                      0x7
#define _PORTC_DT_POSITION                                  0x7
#define _PORTC_DT_SIZE                                      0x1
#define _PORTC_DT_LENGTH                                    0x1
#define _PORTC_DT_MASK                                      0x80
#define _PORTC_ECCP2_POSN                                   0x1
#define _PORTC_ECCP2_POSITION                               0x1
#define _PORTC_ECCP2_SIZE                                   0x1
#define _PORTC_ECCP2_LENGTH                                 0x1
#define _PORTC_ECCP2_MASK                                   0x2
#define _PORTC_ECCP1_POSN                                   0x2
#define _PORTC_ECCP1_POSITION                               0x2
#define _PORTC_ECCP1_SIZE                                   0x1
#define _PORTC_ECCP1_LENGTH                                 0x1
#define _PORTC_ECCP1_MASK                                   0x4
#define _PORTC_SCK1_POSN                                    0x3
#define _PORTC_SCK1_POSITION                                0x3
#define _PORTC_SCK1_SIZE                                    0x1
#define _PORTC_SCK1_LENGTH                                  0x1
#define _PORTC_SCK1_MASK                                    0x8
#define _PORTC_SDI1_POSN                                    0x4
#define _PORTC_SDI1_POSITION                                0x4
#define _PORTC_SDI1_SIZE                                    0x1
#define _PORTC_SDI1_LENGTH                                  0x1
#define _PORTC_SDI1_MASK                                    0x10
#define _PORTC_SDO1_POSN                                    0x5
#define _PORTC_SDO1_POSITION                                0x5
#define _PORTC_SDO1_SIZE                                    0x1
#define _PORTC_SDO1_LENGTH                                  0x1
#define _PORTC_SDO1_MASK                                    0x20
#define _PORTC_TX1_POSN                                     0x6
#define _PORTC_TX1_POSITION                                 0x6
#define _PORTC_TX1_SIZE                                     0x1
#define _PORTC_TX1_LENGTH                                   0x1
#define _PORTC_TX1_MASK                                     0x40
#define _PORTC_RX1_POSN                                     0x7
#define _PORTC_RX1_POSITION                                 0x7
#define _PORTC_RX1_SIZE                                     0x1
#define _PORTC_RX1_LENGTH                                   0x1
#define _PORTC_RX1_MASK                                     0x80
#define _PORTC_SCL1_POSN                                    0x3
#define _PORTC_SCL1_POSITION                                0x3
#define _PORTC_SCL1_SIZE                                    0x1
#define _PORTC_SCL1_LENGTH                                  0x1
#define _PORTC_SCL1_MASK                                    0x8
#define _PORTC_SDA1_POSN                                    0x4
#define _PORTC_SDA1_POSITION                                0x4
#define _PORTC_SDA1_SIZE                                    0x1
#define _PORTC_SDA1_LENGTH                                  0x1
#define _PORTC_SDA1_MASK                                    0x10
#define _PORTC_CK1_POSN                                     0x6
#define _PORTC_CK1_POSITION                                 0x6
#define _PORTC_CK1_SIZE                                     0x1
#define _PORTC_CK1_LENGTH                                   0x1
#define _PORTC_CK1_MASK                                     0x40
#define _PORTC_DT1_POSN                                     0x7
#define _PORTC_DT1_POSITION                                 0x7
#define _PORTC_DT1_SIZE                                     0x1
#define _PORTC_DT1_LENGTH                                   0x1
#define _PORTC_DT1_MASK                                     0x80
#define _PORTC_PA2_POSN                                     0x1
#define _PORTC_PA2_POSITION                                 0x1
#define _PORTC_PA2_SIZE                                     0x1
#define _PORTC_PA2_LENGTH                                   0x1
#define _PORTC_PA2_MASK                                     0x2
#define _PORTC_PA1_POSN                                     0x2
#define _PORTC_PA1_POSITION                                 0x2
#define _PORTC_PA1_SIZE                                     0x1
#define _PORTC_PA1_LENGTH                                   0x1
#define _PORTC_PA1_MASK                                     0x4

// Register: PORTD
#define PORTD PORTD
extern volatile unsigned char           PORTD               __at(0xF83);
#ifndef _LIB_BUILD
asm("PORTD equ 0F83h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned RD0                    :1;
        unsigned RD1                    :1;
        unsigned RD2                    :1;
    };
} PORTDbits_t;
extern volatile PORTDbits_t PORTDbits __at(0xF83);
// bitfield macros
#define _PORTD_RD0_POSN                                     0x0
#define _PORTD_RD0_POSITION                                 0x0
#define _PORTD_RD0_SIZE                                     0x1
#define _PORTD_RD0_LENGTH                                   0x1
#define _PORTD_RD0_MASK                                     0x1
#define _PORTD_RD1_POSN                                     0x1
#define _PORTD_RD1_POSITION                                 0x1
#define _PORTD_RD1_SIZE                                     0x1
#define _PORTD_RD1_LENGTH                                   0x1
#define _PORTD_RD1_MASK                                     0x2
#define _PORTD_RD2_POSN                                     0x2
#define _PORTD_RD2_POSITION                                 0x2
#define _PORTD_RD2_SIZE                                     0x1
#define _PORTD_RD2_LENGTH                                   0x1
#define _PORTD_RD2_MASK                                     0x4

// Register: PORTE
#define PORTE PORTE
extern volatile unsigned char           PORTE               __at(0xF84);
#ifndef _LIB_BUILD
asm("PORTE equ 0F84h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned RE0                    :1;
        unsigned RE1                    :1;
        unsigned RE2                    :1;
        unsigned RE3                    :1;
        unsigned RE4                    :1;
        unsigned RE5                    :1;
        unsigned RE6                    :1;
        unsigned RE7                    :1;
    };
    struct {
        unsigned                        :7;
        unsigned CCP2                   :1;
    };
    struct {
        unsigned                        :7;
        unsigned ECCP2                  :1;
    };
    struct {
        unsigned PD2                    :1;
        unsigned PC2                    :1;
        unsigned CCP10                  :1;
        unsigned CCP9E                  :1;
        unsigned CCP8E                  :1;
        unsigned CCP7E                  :1;
        unsigned CCP6E                  :1;
        unsigned CCP2E                  :1;
    };
    struct {
        unsigned RDE                    :1;
        unsigned WRE                    :1;
        unsigned CS                     :1;
        unsigned PC3E                   :1;
        unsigned PB3E                   :1;
        unsigned PC1E                   :1;
        unsigned PB1E                   :1;
        unsigned PA2E                   :1;
    };
    struct {
        unsigned                        :2;
        unsigned PB2                    :1;
    };
} PORTEbits_t;
extern volatile PORTEbits_t PORTEbits __at(0xF84);
// bitfield macros
#define _PORTE_RE0_POSN                                     0x0
#define _PORTE_RE0_POSITION                                 0x0
#define _PORTE_RE0_SIZE                                     0x1
#define _PORTE_RE0_LENGTH                                   0x1
#define _PORTE_RE0_MASK                                     0x1
#define _PORTE_RE1_POSN                                     0x1
#define _PORTE_RE1_POSITION                                 0x1
#define _PORTE_RE1_SIZE                                     0x1
#define _PORTE_RE1_LENGTH                                   0x1
#define _PORTE_RE1_MASK                                     0x2
#define _PORTE_RE2_POSN                                     0x2
#define _PORTE_RE2_POSITION                                 0x2
#define _PORTE_RE2_SIZE                                     0x1
#define _PORTE_RE2_LENGTH                                   0x1
#define _PORTE_RE2_MASK                                     0x4
#define _PORTE_RE3_POSN                                     0x3
#define _PORTE_RE3_POSITION                                 0x3
#define _PORTE_RE3_SIZE                                     0x1
#define _PORTE_RE3_LENGTH                                   0x1
#define _PORTE_RE3_MASK                                     0x8
#define _PORTE_RE4_POSN                                     0x4
#define _PORTE_RE4_POSITION                                 0x4
#define _PORTE_RE4_SIZE                                     0x1
#define _PORTE_RE4_LENGTH                                   0x1
#define _PORTE_RE4_MASK                                     0x10
#define _PORTE_RE5_POSN                                     0x5
#define _PORTE_RE5_POSITION                                 0x5
#define _PORTE_RE5_SIZE                                     0x1
#define _PORTE_RE5_LENGTH                                   0x1
#define _PORTE_RE5_MASK                                     0x20
#define _PORTE_RE6_POSN                                     0x6
#define _PORTE_RE6_POSITION                                 0x6
#define _PORTE_RE6_SIZE                                     0x1
#define _PORTE_RE6_LENGTH                                   0x1
#define _PORTE_RE6_MASK                                     0x40
#define _PORTE_RE7_POSN                                     0x7
#define _PORTE_RE7_POSITION                                 0x7
#define _PORTE_RE7_SIZE                                     0x1
#define _PORTE_RE7_LENGTH                                   0x1
#define _PORTE_RE7_MASK                                     0x80
#define _PORTE_CCP2_POSN                                    0x7
#define _PORTE_CCP2_POSITION                                0x7
#define _PORTE_CCP2_SIZE                                    0x1
#define _PORTE_CCP2_LENGTH                                  0x1
#define _PORTE_CCP2_MASK                                    0x80
#define _PORTE_ECCP2_POSN                                   0x7
#define _PORTE_ECCP2_POSITION                               0x7
#define _PORTE_ECCP2_SIZE                                   0x1
#define _PORTE_ECCP2_LENGTH                                 0x1
#define _PORTE_ECCP2_MASK                                   0x80
#define _PORTE_PD2_POSN                                     0x0
#define _PORTE_PD2_POSITION                                 0x0
#define _PORTE_PD2_SIZE                                     0x1
#define _PORTE_PD2_LENGTH                                   0x1
#define _PORTE_PD2_MASK                                     0x1
#define _PORTE_PC2_POSN                                     0x1
#define _PORTE_PC2_POSITION                                 0x1
#define _PORTE_PC2_SIZE                                     0x1
#define _PORTE_PC2_LENGTH                                   0x1
#define _PORTE_PC2_MASK                                     0x2
#define _PORTE_CCP10_POSN                                   0x2
#define _PORTE_CCP10_POSITION                               0x2
#define _PORTE_CCP10_SIZE                                   0x1
#define _PORTE_CCP10_LENGTH                                 0x1
#define _PORTE_CCP10_MASK                                   0x4
#define _PORTE_CCP9E_POSN                                   0x3
#define _PORTE_CCP9E_POSITION                               0x3
#define _PORTE_CCP9E_SIZE                                   0x1
#define _PORTE_CCP9E_LENGTH                                 0x1
#define _PORTE_CCP9E_MASK                                   0x8
#define _PORTE_CCP8E_POSN                                   0x4
#define _PORTE_CCP8E_POSITION                               0x4
#define _PORTE_CCP8E_SIZE                                   0x1
#define _PORTE_CCP8E_LENGTH                                 0x1
#define _PORTE_CCP8E_MASK                                   0x10
#define _PORTE_CCP7E_POSN                                   0x5
#define _PORTE_CCP7E_POSITION                               0x5
#define _PORTE_CCP7E_SIZE                                   0x1
#define _PORTE_CCP7E_LENGTH                                 0x1
#define _PORTE_CCP7E_MASK                                   0x20
#define _PORTE_CCP6E_POSN                                   0x6
#define _PORTE_CCP6E_POSITION                               0x6
#define _PORTE_CCP6E_SIZE                                   0x1
#define _PORTE_CCP6E_LENGTH                                 0x1
#define _PORTE_CCP6E_MASK                                   0x40
#define _PORTE_CCP2E_POSN                                   0x7
#define _PORTE_CCP2E_POSITION                               0x7
#define _PORTE_CCP2E_SIZE                                   0x1
#define _PORTE_CCP2E_LENGTH                                 0x1
#define _PORTE_CCP2E_MASK                                   0x80
#define _PORTE_RDE_POSN                                     0x0
#define _PORTE_RDE_POSITION                                 0x0
#define _PORTE_RDE_SIZE                                     0x1
#define _PORTE_RDE_LENGTH                                   0x1
#define _PORTE_RDE_MASK                                     0x1
#define _PORTE_WRE_POSN                                     0x1
#define _PORTE_WRE_POSITION                                 0x1
#define _PORTE_WRE_SIZE                                     0x1
#define _PORTE_WRE_LENGTH                                   0x1
#define _PORTE_WRE_MASK                                     0x2
#define _PORTE_CS_POSN                                      0x2
#define _PORTE_CS_POSITION                                  0x2
#define _PORTE_CS_SIZE                                      0x1
#define _PORTE_CS_LENGTH                                    0x1
#define _PORTE_CS_MASK                                      0x4
#define _PORTE_PC3E_POSN                                    0x3
#define _PORTE_PC3E_POSITION                                0x3
#define _PORTE_PC3E_SIZE                                    0x1
#define _PORTE_PC3E_LENGTH                                  0x1
#define _PORTE_PC3E_MASK                                    0x8
#define _PORTE_PB3E_POSN                                    0x4
#define _PORTE_PB3E_POSITION                                0x4
#define _PORTE_PB3E_SIZE                                    0x1
#define _PORTE_PB3E_LENGTH                                  0x1
#define _PORTE_PB3E_MASK                                    0x10
#define _PORTE_PC1E_POSN                                    0x5
#define _PORTE_PC1E_POSITION                                0x5
#define _PORTE_PC1E_SIZE                                    0x1
#define _PORTE_PC1E_LENGTH                                  0x1
#define _PORTE_PC1E_MASK                                    0x20
#define _PORTE_PB1E_POSN                                    0x6
#define _PORTE_PB1E_POSITION                                0x6
#define _PORTE_PB1E_SIZE                                    0x1
#define _PORTE_PB1E_LENGTH                                  0x1
#define _PORTE_PB1E_MASK                                    0x40
#define _PORTE_PA2E_POSN                                    0x7
#define _PORTE_PA2E_POSITION                                0x7
#define _PORTE_PA2E_SIZE                                    0x1
#define _PORTE_PA2E_LENGTH                                  0x1
#define _PORTE_PA2E_MASK                                    0x80
#define _PORTE_PB2_POSN                                     0x2
#define _PORTE_PB2_POSITION                                 0x2
#define _PORTE_PB2_SIZE                                     0x1
#define _PORTE_PB2_LENGTH                                   0x1
#define _PORTE_PB2_MASK                                     0x4

// Register: PORTF
#define PORTF PORTF
extern volatile unsigned char           PORTF               __at(0xF85);
#ifndef _LIB_BUILD
asm("PORTF equ 0F85h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :1;
        unsigned RF1                    :1;
        unsigned RF2                    :1;
        unsigned RF3                    :1;
        unsigned RF4                    :1;
        unsigned RF5                    :1;
        unsigned RF6                    :1;
        unsigned RF7                    :1;
    };
    struct {
        unsigned                        :1;
        unsigned AN6                    :1;
        unsigned AN7                    :1;
        unsigned AN8                    :1;
        unsigned AN9                    :1;
        unsigned AN10                   :1;
        unsigned AN11                   :1;
        unsigned SS                     :1;
    };
    struct {
        unsigned                        :7;
        unsigned NOT_SS                 :1;
    };
    struct {
        unsigned                        :5;
        unsigned CVREF                  :1;
        unsigned                        :1;
        unsigned nSS                    :1;
    };
    struct {
        unsigned                        :7;
        unsigned SS1                    :1;
    };
    struct {
        unsigned                        :7;
        unsigned NOT_SS1                :1;
    };
    struct {
        unsigned                        :7;
        unsigned nSS1                   :1;
    };
    struct {
        unsigned                        :1;
        unsigned C2OUTF                 :1;
        unsigned C1OUTF                 :1;
    };
} PORTFbits_t;
extern volatile PORTFbits_t PORTFbits __at(0xF85);
// bitfield macros
#define _PORTF_RF1_POSN                                     0x1
#define _PORTF_RF1_POSITION                                 0x1
#define _PORTF_RF1_SIZE                                     0x1
#define _PORTF_RF1_LENGTH                                   0x1
#define _PORTF_RF1_MASK                                     0x2
#define _PORTF_RF2_POSN                                     0x2
#define _PORTF_RF2_POSITION                                 0x2
#define _PORTF_RF2_SIZE                                     0x1
#define _PORTF_RF2_LENGTH                                   0x1
#define _PORTF_RF2_MASK                                     0x4
#define _PORTF_RF3_POSN                                     0x3
#define _PORTF_RF3_POSITION                                 0x3
#define _PORTF_RF3_SIZE                                     0x1
#define _PORTF_RF3_LENGTH                                   0x1
#define _PORTF_RF3_MASK                                     0x8
#define _PORTF_RF4_POSN                                     0x4
#define _PORTF_RF4_POSITION                                 0x4
#define _PORTF_RF4_SIZE                                     0x1
#define _PORTF_RF4_LENGTH                                   0x1
#define _PORTF_RF4_MASK                                     0x10
#define _PORTF_RF5_POSN                                     0x5
#define _PORTF_RF5_POSITION                                 0x5
#define _PORTF_RF5_SIZE                                     0x1
#define _PORTF_RF5_LENGTH                                   0x1
#define _PORTF_RF5_MASK                                     0x20
#define _PORTF_RF6_POSN                                     0x6
#define _PORTF_RF6_POSITION                                 0x6
#define _PORTF_RF6_SIZE                                     0x1
#define _PORTF_RF6_LENGTH                                   0x1
#define _PORTF_RF6_MASK                                     0x40
#define _PORTF_RF7_POSN                                     0x7
#define _PORTF_RF7_POSITION                                 0x7
#define _PORTF_RF7_SIZE                                     0x1
#define _PORTF_RF7_LENGTH                                   0x1
#define _PORTF_RF7_MASK                                     0x80
#define _PORTF_AN6_POSN                                     0x1
#define _PORTF_AN6_POSITION                                 0x1
#define _PORTF_AN6_SIZE                                     0x1
#define _PORTF_AN6_LENGTH                                   0x1
#define _PORTF_AN6_MASK                                     0x2
#define _PORTF_AN7_POSN                                     0x2
#define _PORTF_AN7_POSITION                                 0x2
#define _PORTF_AN7_SIZE                                     0x1
#define _PORTF_AN7_LENGTH                                   0x1
#define _PORTF_AN7_MASK                                     0x4
#define _PORTF_AN8_POSN                                     0x3
#define _PORTF_AN8_POSITION                                 0x3
#define _PORTF_AN8_SIZE                                     0x1
#define _PORTF_AN8_LENGTH                                   0x1
#define _PORTF_AN8_MASK                                     0x8
#define _PORTF_AN9_POSN                                     0x4
#define _PORTF_AN9_POSITION                                 0x4
#define _PORTF_AN9_SIZE                                     0x1
#define _PORTF_AN9_LENGTH                                   0x1
#define _PORTF_AN9_MASK                                     0x10
#define _PORTF_AN10_POSN                                    0x5
#define _PORTF_AN10_POSITION                                0x5
#define _PORTF_AN10_SIZE                                    0x1
#define _PORTF_AN10_LENGTH                                  0x1
#define _PORTF_AN10_MASK                                    0x20
#define _PORTF_AN11_POSN                                    0x6
#define _PORTF_AN11_POSITION                                0x6
#define _PORTF_AN11_SIZE                                    0x1
#define _PORTF_AN11_LENGTH                                  0x1
#define _PORTF_AN11_MASK                                    0x40
#define _PORTF_SS_POSN                                      0x7
#define _PORTF_SS_POSITION                                  0x7
#define _PORTF_SS_SIZE                                      0x1
#define _PORTF_SS_LENGTH                                    0x1
#define _PORTF_SS_MASK                                      0x80
#define _PORTF_NOT_SS_POSN                                  0x7
#define _PORTF_NOT_SS_POSITION                              0x7
#define _PORTF_NOT_SS_SIZE                                  0x1
#define _PORTF_NOT_SS_LENGTH                                0x1
#define _PORTF_NOT_SS_MASK                                  0x80
#define _PORTF_CVREF_POSN                                   0x5
#define _PORTF_CVREF_POSITION                               0x5
#define _PORTF_CVREF_SIZE                                   0x1
#define _PORTF_CVREF_LENGTH                                 0x1
#define _PORTF_CVREF_MASK                                   0x20
#define _PORTF_nSS_POSN                                     0x7
#define _PORTF_nSS_POSITION                                 0x7
#define _PORTF_nSS_SIZE                                     0x1
#define _PORTF_nSS_LENGTH                                   0x1
#define _PORTF_nSS_MASK                                     0x80
#define _PORTF_SS1_POSN                                     0x7
#define _PORTF_SS1_POSITION                                 0x7
#define _PORTF_SS1_SIZE                                     0x1
#define _PORTF_SS1_LENGTH                                   0x1
#define _PORTF_SS1_MASK                                     0x80
#define _PORTF_NOT_SS1_POSN                                 0x7
#define _PORTF_NOT_SS1_POSITION                             0x7
#define _PORTF_NOT_SS1_SIZE                                 0x1
#define _PORTF_NOT_SS1_LENGTH                               0x1
#define _PORTF_NOT_SS1_MASK                                 0x80
#define _PORTF_nSS1_POSN                                    0x7
#define _PORTF_nSS1_POSITION                                0x7
#define _PORTF_nSS1_SIZE                                    0x1
#define _PORTF_nSS1_LENGTH                                  0x1
#define _PORTF_nSS1_MASK                                    0x80
#define _PORTF_C2OUTF_POSN                                  0x1
#define _PORTF_C2OUTF_POSITION                              0x1
#define _PORTF_C2OUTF_SIZE                                  0x1
#define _PORTF_C2OUTF_LENGTH                                0x1
#define _PORTF_C2OUTF_MASK                                  0x2
#define _PORTF_C1OUTF_POSN                                  0x2
#define _PORTF_C1OUTF_POSITION                              0x2
#define _PORTF_C1OUTF_SIZE                                  0x1
#define _PORTF_C1OUTF_LENGTH                                0x1
#define _PORTF_C1OUTF_MASK                                  0x4

// Register: PORTG
#define PORTG PORTG
extern volatile unsigned char           PORTG               __at(0xF86);
#ifndef _LIB_BUILD
asm("PORTG equ 0F86h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned RG0                    :1;
        unsigned RG1                    :1;
        unsigned RG2                    :1;
        unsigned RG3                    :1;
        unsigned RG4                    :1;
    };
    struct {
        unsigned CCP3                   :1;
        unsigned TX2                    :1;
        unsigned RX2                    :1;
        unsigned CCP4                   :1;
        unsigned CCP5                   :1;
    };
    struct {
        unsigned ECCP3                  :1;
        unsigned CK2                    :1;
        unsigned DT2                    :1;
    };
    struct {
        unsigned                        :1;
        unsigned C3OUTG                 :1;
    };
} PORTGbits_t;
extern volatile PORTGbits_t PORTGbits __at(0xF86);
// bitfield macros
#define _PORTG_RG0_POSN                                     0x0
#define _PORTG_RG0_POSITION                                 0x0
#define _PORTG_RG0_SIZE                                     0x1
#define _PORTG_RG0_LENGTH                                   0x1
#define _PORTG_RG0_MASK                                     0x1
#define _PORTG_RG1_POSN                                     0x1
#define _PORTG_RG1_POSITION                                 0x1
#define _PORTG_RG1_SIZE                                     0x1
#define _PORTG_RG1_LENGTH                                   0x1
#define _PORTG_RG1_MASK                                     0x2
#define _PORTG_RG2_POSN                                     0x2
#define _PORTG_RG2_POSITION                                 0x2
#define _PORTG_RG2_SIZE                                     0x1
#define _PORTG_RG2_LENGTH                                   0x1
#define _PORTG_RG2_MASK                                     0x4
#define _PORTG_RG3_POSN                                     0x3
#define _PORTG_RG3_POSITION                                 0x3
#define _PORTG_RG3_SIZE                                     0x1
#define _PORTG_RG3_LENGTH                                   0x1
#define _PORTG_RG3_MASK                                     0x8
#define _PORTG_RG4_POSN                                     0x4
#define _PORTG_RG4_POSITION                                 0x4
#define _PORTG_RG4_SIZE                                     0x1
#define _PORTG_RG4_LENGTH                                   0x1
#define _PORTG_RG4_MASK                                     0x10
#define _PORTG_CCP3_POSN                                    0x0
#define _PORTG_CCP3_POSITION                                0x0
#define _PORTG_CCP3_SIZE                                    0x1
#define _PORTG_CCP3_LENGTH                                  0x1
#define _PORTG_CCP3_MASK                                    0x1
#define _PORTG_TX2_POSN                                     0x1
#define _PORTG_TX2_POSITION                                 0x1
#define _PORTG_TX2_SIZE                                     0x1
#define _PORTG_TX2_LENGTH                                   0x1
#define _PORTG_TX2_MASK                                     0x2
#define _PORTG_RX2_POSN                                     0x2
#define _PORTG_RX2_POSITION                                 0x2
#define _PORTG_RX2_SIZE                                     0x1
#define _PORTG_RX2_LENGTH                                   0x1
#define _PORTG_RX2_MASK                                     0x4
#define _PORTG_CCP4_POSN                                    0x3
#define _PORTG_CCP4_POSITION                                0x3
#define _PORTG_CCP4_SIZE                                    0x1
#define _PORTG_CCP4_LENGTH                                  0x1
#define _PORTG_CCP4_MASK                                    0x8
#define _PORTG_CCP5_POSN                                    0x4
#define _PORTG_CCP5_POSITION                                0x4
#define _PORTG_CCP5_SIZE                                    0x1
#define _PORTG_CCP5_LENGTH                                  0x1
#define _PORTG_CCP5_MASK                                    0x10
#define _PORTG_ECCP3_POSN                                   0x0
#define _PORTG_ECCP3_POSITION                               0x0
#define _PORTG_ECCP3_SIZE                                   0x1
#define _PORTG_ECCP3_LENGTH                                 0x1
#define _PORTG_ECCP3_MASK                                   0x1
#define _PORTG_CK2_POSN                                     0x1
#define _PORTG_CK2_POSITION                                 0x1
#define _PORTG_CK2_SIZE                                     0x1
#define _PORTG_CK2_LENGTH                                   0x1
#define _PORTG_CK2_MASK                                     0x2
#define _PORTG_DT2_POSN                                     0x2
#define _PORTG_DT2_POSITION                                 0x2
#define _PORTG_DT2_SIZE                                     0x1
#define _PORTG_DT2_LENGTH                                   0x1
#define _PORTG_DT2_MASK                                     0x4
#define _PORTG_C3OUTG_POSN                                  0x1
#define _PORTG_C3OUTG_POSITION                              0x1
#define _PORTG_C3OUTG_SIZE                                  0x1
#define _PORTG_C3OUTG_LENGTH                                0x1
#define _PORTG_C3OUTG_MASK                                  0x2

// Register: PORTH
#define PORTH PORTH
extern volatile unsigned char           PORTH               __at(0xF87);
#ifndef _LIB_BUILD
asm("PORTH equ 0F87h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned RH0                    :1;
        unsigned RH1                    :1;
        unsigned RH2                    :1;
        unsigned RH3                    :1;
        unsigned RH4                    :1;
        unsigned RH5                    :1;
        unsigned RH6                    :1;
        unsigned RH7                    :1;
    };
    struct {
        unsigned                        :4;
        unsigned AN12                   :1;
        unsigned AN13                   :1;
        unsigned AN14                   :1;
        unsigned AN15                   :1;
    };
    struct {
        unsigned                        :4;
        unsigned CCP9                   :1;
        unsigned CCP8                   :1;
        unsigned CCP7                   :1;
        unsigned CCP6                   :1;
    };
    struct {
        unsigned                        :4;
        unsigned PC3                    :1;
        unsigned PB3                    :1;
        unsigned PC1                    :1;
        unsigned PB1                    :1;
    };
} PORTHbits_t;
extern volatile PORTHbits_t PORTHbits __at(0xF87);
// bitfield macros
#define _PORTH_RH0_POSN                                     0x0
#define _PORTH_RH0_POSITION                                 0x0
#define _PORTH_RH0_SIZE                                     0x1
#define _PORTH_RH0_LENGTH                                   0x1
#define _PORTH_RH0_MASK                                     0x1
#define _PORTH_RH1_POSN                                     0x1
#define _PORTH_RH1_POSITION                                 0x1
#define _PORTH_RH1_SIZE                                     0x1
#define _PORTH_RH1_LENGTH                                   0x1
#define _PORTH_RH1_MASK                                     0x2
#define _PORTH_RH2_POSN                                     0x2
#define _PORTH_RH2_POSITION                                 0x2
#define _PORTH_RH2_SIZE                                     0x1
#define _PORTH_RH2_LENGTH                                   0x1
#define _PORTH_RH2_MASK                                     0x4
#define _PORTH_RH3_POSN                                     0x3
#define _PORTH_RH3_POSITION                                 0x3
#define _PORTH_RH3_SIZE                                     0x1
#define _PORTH_RH3_LENGTH                                   0x1
#define _PORTH_RH3_MASK                                     0x8
#define _PORTH_RH4_POSN                                     0x4
#define _PORTH_RH4_POSITION                                 0x4
#define _PORTH_RH4_SIZE                                     0x1
#define _PORTH_RH4_LENGTH                                   0x1
#define _PORTH_RH4_MASK                                     0x10
#define _PORTH_RH5_POSN                                     0x5
#define _PORTH_RH5_POSITION                                 0x5
#define _PORTH_RH5_SIZE                                     0x1
#define _PORTH_RH5_LENGTH                                   0x1
#define _PORTH_RH5_MASK                                     0x20
#define _PORTH_RH6_POSN                                     0x6
#define _PORTH_RH6_POSITION                                 0x6
#define _PORTH_RH6_SIZE                                     0x1
#define _PORTH_RH6_LENGTH                                   0x1
#define _PORTH_RH6_MASK                                     0x40
#define _PORTH_RH7_POSN                                     0x7
#define _PORTH_RH7_POSITION                                 0x7
#define _PORTH_RH7_SIZE                                     0x1
#define _PORTH_RH7_LENGTH                                   0x1
#define _PORTH_RH7_MASK                                     0x80
#define _PORTH_AN12_POSN                                    0x4
#define _PORTH_AN12_POSITION                                0x4
#define _PORTH_AN12_SIZE                                    0x1
#define _PORTH_AN12_LENGTH                                  0x1
#define _PORTH_AN12_MASK                                    0x10
#define _PORTH_AN13_POSN                                    0x5
#define _PORTH_AN13_POSITION                                0x5
#define _PORTH_AN13_SIZE                                    0x1
#define _PORTH_AN13_LENGTH                                  0x1
#define _PORTH_AN13_MASK                                    0x20
#define _PORTH_AN14_POSN                                    0x6
#define _PORTH_AN14_POSITION                                0x6
#define _PORTH_AN14_SIZE                                    0x1
#define _PORTH_AN14_LENGTH                                  0x1
#define _PORTH_AN14_MASK                                    0x40
#define _PORTH_AN15_POSN                                    0x7
#define _PORTH_AN15_POSITION                                0x7
#define _PORTH_AN15_SIZE                                    0x1
#define _PORTH_AN15_LENGTH                                  0x1
#define _PORTH_AN15_MASK                                    0x80
#define _PORTH_CCP9_POSN                                    0x4
#define _PORTH_CCP9_POSITION                                0x4
#define _PORTH_CCP9_SIZE                                    0x1
#define _PORTH_CCP9_LENGTH                                  0x1
#define _PORTH_CCP9_MASK                                    0x10
#define _PORTH_CCP8_POSN                                    0x5
#define _PORTH_CCP8_POSITION                                0x5
#define _PORTH_CCP8_SIZE                                    0x1
#define _PORTH_CCP8_LENGTH                                  0x1
#define _PORTH_CCP8_MASK                                    0x20
#define _PORTH_CCP7_POSN                                    0x6
#define _PORTH_CCP7_POSITION                                0x6
#define _PORTH_CCP7_SIZE                                    0x1
#define _PORTH_CCP7_LENGTH                                  0x1
#define _PORTH_CCP7_MASK                                    0x40
#define _PORTH_CCP6_POSN                                    0x7
#define _PORTH_CCP6_POSITION                                0x7
#define _PORTH_CCP6_SIZE                                    0x1
#define _PORTH_CCP6_LENGTH                                  0x1
#define _PORTH_CCP6_MASK                                    0x80
#define _PORTH_PC3_POSN                                     0x4
#define _PORTH_PC3_POSITION                                 0x4
#define _PORTH_PC3_SIZE                                     0x1
#define _PORTH_PC3_LENGTH                                   0x1
#define _PORTH_PC3_MASK                                     0x10
#define _PORTH_PB3_POSN                                     0x5
#define _PORTH_PB3_POSITION                                 0x5
#define _PORTH_PB3_SIZE                                     0x1
#define _PORTH_PB3_LENGTH                                   0x1
#define _PORTH_PB3_MASK                                     0x20
#define _PORTH_PC1_POSN                                     0x6
#define _PORTH_PC1_POSITION                                 0x6
#define _PORTH_PC1_SIZE                                     0x1
#define _PORTH_PC1_LENGTH                                   0x1
#define _PORTH_PC1_MASK                                     0x40
#define _PORTH_PB1_POSN                                     0x7
#define _PORTH_PB1_POSITION                                 0x7
#define _PORTH_PB1_SIZE                                     0x1
#define _PORTH_PB1_LENGTH                                   0x1
#define _PORTH_PB1_MASK                                     0x80

// Register: PORTJ
#define PORTJ PORTJ
extern volatile unsigned char           PORTJ               __at(0xF88);
#ifndef _LIB_BUILD
asm("PORTJ equ 0F88h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :4;
        unsigned RJ4                    :1;
        unsigned RJ5                    :1;
    };
} PORTJbits_t;
extern volatile PORTJbits_t PORTJbits __at(0xF88);
// bitfield macros
#define _PORTJ_RJ4_POSN                                     0x4
#define _PORTJ_RJ4_POSITION                                 0x4
#define _PORTJ_RJ4_SIZE                                     0x1
#define _PORTJ_RJ4_LENGTH                                   0x1
#define _PORTJ_RJ4_MASK                                     0x10
#define _PORTJ_RJ5_POSN                                     0x5
#define _PORTJ_RJ5_POSITION                                 0x5
#define _PORTJ_RJ5_SIZE                                     0x1
#define _PORTJ_RJ5_LENGTH                                   0x1
#define _PORTJ_RJ5_MASK                                     0x20

// Register: LATA
#define LATA LATA
extern volatile unsigned char           LATA                __at(0xF89);
#ifndef _LIB_BUILD
asm("LATA equ 0F89h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned LATA0                  :1;
        unsigned LATA1                  :1;
        unsigned LATA2                  :1;
        unsigned LATA3                  :1;
        unsigned LATA4                  :1;
        unsigned LATA5                  :1;
        unsigned REPU                   :1;
        unsigned RDPU                   :1;
    };
    struct {
        unsigned LA0                    :1;
        unsigned LA1                    :1;
        unsigned LA2                    :1;
        unsigned LA3                    :1;
        unsigned LA4                    :1;
        unsigned LA5                    :1;
        unsigned LA6                    :1;
        unsigned LA7                    :1;
    };
    struct {
        unsigned                        :7;
        unsigned LATA7                  :1;
    };
} LATAbits_t;
extern volatile LATAbits_t LATAbits __at(0xF89);
// bitfield macros
#define _LATA_LATA0_POSN                                    0x0
#define _LATA_LATA0_POSITION                                0x0
#define _LATA_LATA0_SIZE                                    0x1
#define _LATA_LATA0_LENGTH                                  0x1
#define _LATA_LATA0_MASK                                    0x1
#define _LATA_LATA1_POSN                                    0x1
#define _LATA_LATA1_POSITION                                0x1
#define _LATA_LATA1_SIZE                                    0x1
#define _LATA_LATA1_LENGTH                                  0x1
#define _LATA_LATA1_MASK                                    0x2
#define _LATA_LATA2_POSN                                    0x2
#define _LATA_LATA2_POSITION                                0x2
#define _LATA_LATA2_SIZE                                    0x1
#define _LATA_LATA2_LENGTH                                  0x1
#define _LATA_LATA2_MASK                                    0x4
#define _LATA_LATA3_POSN                                    0x3
#define _LATA_LATA3_POSITION                                0x3
#define _LATA_LATA3_SIZE                                    0x1
#define _LATA_LATA3_LENGTH                                  0x1
#define _LATA_LATA3_MASK                                    0x8
#define _LATA_LATA4_POSN                                    0x4
#define _LATA_LATA4_POSITION                                0x4
#define _LATA_LATA4_SIZE                                    0x1
#define _LATA_LATA4_LENGTH                                  0x1
#define _LATA_LATA4_MASK                                    0x10
#define _LATA_LATA5_POSN                                    0x5
#define _LATA_LATA5_POSITION                                0x5
#define _LATA_LATA5_SIZE                                    0x1
#define _LATA_LATA5_LENGTH                                  0x1
#define _LATA_LATA5_MASK                                    0x20
#define _LATA_REPU_POSN                                     0x6
#define _LATA_REPU_POSITION                                 0x6
#define _LATA_REPU_SIZE                                     0x1
#define _LATA_REPU_LENGTH                                   0x1
#define _LATA_REPU_MASK                                     0x40
#define _LATA_RDPU_POSN                                     0x7
#define _LATA_RDPU_POSITION                                 0x7
#define _LATA_RDPU_SIZE                                     0x1
#define _LATA_RDPU_LENGTH                                   0x1
#define _LATA_RDPU_MASK                                     0x80
#define _LATA_LA0_POSN                                      0x0
#define _LATA_LA0_POSITION                                  0x0
#define _LATA_LA0_SIZE                                      0x1
#define _LATA_LA0_LENGTH                                    0x1
#define _LATA_LA0_MASK                                      0x1
#define _LATA_LA1_POSN                                      0x1
#define _LATA_LA1_POSITION                                  0x1
#define _LATA_LA1_SIZE                                      0x1
#define _LATA_LA1_LENGTH                                    0x1
#define _LATA_LA1_MASK                                      0x2
#define _LATA_LA2_POSN                                      0x2
#define _LATA_LA2_POSITION                                  0x2
#define _LATA_LA2_SIZE                                      0x1
#define _LATA_LA2_LENGTH                                    0x1
#define _LATA_LA2_MASK                                      0x4
#define _LATA_LA3_POSN                                      0x3
#define _LATA_LA3_POSITION                                  0x3
#define _LATA_LA3_SIZE                                      0x1
#define _LATA_LA3_LENGTH                                    0x1
#define _LATA_LA3_MASK                                      0x8
#define _LATA_LA4_POSN                                      0x4
#define _LATA_LA4_POSITION                                  0x4
#define _LATA_LA4_SIZE                                      0x1
#define _LATA_LA4_LENGTH                                    0x1
#define _LATA_LA4_MASK                                      0x10
#define _LATA_LA5_POSN                                      0x5
#define _LATA_LA5_POSITION                                  0x5
#define _LATA_LA5_SIZE                                      0x1
#define _LATA_LA5_LENGTH                                    0x1
#define _LATA_LA5_MASK                                      0x20
#define _LATA_LA6_POSN                                      0x6
#define _LATA_LA6_POSITION                                  0x6
#define _LATA_LA6_SIZE                                      0x1
#define _LATA_LA6_LENGTH                                    0x1
#define _LATA_LA6_MASK                                      0x40
#define _LATA_LA7_POSN                                      0x7
#define _LATA_LA7_POSITION                                  0x7
#define _LATA_LA7_SIZE                                      0x1
#define _LATA_LA7_LENGTH                                    0x1
#define _LATA_LA7_MASK                                      0x80
#define _LATA_LATA7_POSN                                    0x7
#define _LATA_LATA7_POSITION                                0x7
#define _LATA_LATA7_SIZE                                    0x1
#define _LATA_LATA7_LENGTH                                  0x1
#define _LATA_LATA7_MASK                                    0x80

// Register: LATB
#define LATB LATB
extern volatile unsigned char           LATB                __at(0xF8A);
#ifndef _LIB_BUILD
asm("LATB equ 0F8Ah");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned LATB0                  :1;
        unsigned LATB1                  :1;
        unsigned LATB2                  :1;
        unsigned LATB3                  :1;
        unsigned LATB4                  :1;
        unsigned LATB5                  :1;
        unsigned LATB6                  :1;
        unsigned LATB7                  :1;
    };
    struct {
        unsigned LB0                    :1;
        unsigned LB1                    :1;
        unsigned LB2                    :1;
        unsigned LB3                    :1;
        unsigned LB4                    :1;
        unsigned LB5                    :1;
        unsigned LB6                    :1;
        unsigned LB7                    :1;
    };
} LATBbits_t;
extern volatile LATBbits_t LATBbits __at(0xF8A);
// bitfield macros
#define _LATB_LATB0_POSN                                    0x0
#define _LATB_LATB0_POSITION                                0x0
#define _LATB_LATB0_SIZE                                    0x1
#define _LATB_LATB0_LENGTH                                  0x1
#define _LATB_LATB0_MASK                                    0x1
#define _LATB_LATB1_POSN                                    0x1
#define _LATB_LATB1_POSITION                                0x1
#define _LATB_LATB1_SIZE                                    0x1
#define _LATB_LATB1_LENGTH                                  0x1
#define _LATB_LATB1_MASK                                    0x2
#define _LATB_LATB2_POSN                                    0x2
#define _LATB_LATB2_POSITION                                0x2
#define _LATB_LATB2_SIZE                                    0x1
#define _LATB_LATB2_LENGTH                                  0x1
#define _LATB_LATB2_MASK                                    0x4
#define _LATB_LATB3_POSN                                    0x3
#define _LATB_LATB3_POSITION                                0x3
#define _LATB_LATB3_SIZE                                    0x1
#define _LATB_LATB3_LENGTH                                  0x1
#define _LATB_LATB3_MASK                                    0x8
#define _LATB_LATB4_POSN                                    0x4
#define _LATB_LATB4_POSITION                                0x4
#define _LATB_LATB4_SIZE                                    0x1
#define _LATB_LATB4_LENGTH                                  0x1
#define _LATB_LATB4_MASK                                    0x10
#define _LATB_LATB5_POSN                                    0x5
#define _LATB_LATB5_POSITION                                0x5
#define _LATB_LATB5_SIZE                                    0x1
#define _LATB_LATB5_LENGTH                                  0x1
#define _LATB_LATB5_MASK                                    0x20
#define _LATB_LATB6_POSN                                    0x6
#define _LATB_LATB6_POSITION                                0x6
#define _LATB_LATB6_SIZE                                    0x1
#define _LATB_LATB6_LENGTH                                  0x1
#define _LATB_LATB6_MASK                                    0x40
#define _LATB_LATB7_POSN                                    0x7
#define _LATB_LATB7_POSITION                                0x7
#define _LATB_LATB7_SIZE                                    0x1
#define _LATB_LATB7_LENGTH                                  0x1
#define _LATB_LATB7_MASK                                    0x80
#define _LATB_LB0_POSN                                      0x0
#define _LATB_LB0_POSITION                                  0x0
#define _LATB_LB0_SIZE                                      0x1
#define _LATB_LB0_LENGTH                                    0x1
#define _LATB_LB0_MASK                                      0x1
#define _LATB_LB1_POSN                                      0x1
#define _LATB_LB1_POSITION                                  0x1
#define _LATB_LB1_SIZE                                      0x1
#define _LATB_LB1_LENGTH                                    0x1
#define _LATB_LB1_MASK                                      0x2
#define _LATB_LB2_POSN                                      0x2
#define _LATB_LB2_POSITION                                  0x2
#define _LATB_LB2_SIZE                                      0x1
#define _LATB_LB2_LENGTH                                    0x1
#define _LATB_LB2_MASK                                      0x4
#define _LATB_LB3_POSN                                      0x3
#define _LATB_LB3_POSITION                                  0x3
#define _LATB_LB3_SIZE                                      0x1
#define _LATB_LB3_LENGTH                                    0x1
#define _LATB_LB3_MASK                                      0x8
#define _LATB_LB4_POSN                                      0x4
#define _LATB_LB4_POSITION                                  0x4
#define _LATB_LB4_SIZE                                      0x1
#define _LATB_LB4_LENGTH                                    0x1
#define _LATB_LB4_MASK                                      0x10
#define _LATB_LB5_POSN                                      0x5
#define _LATB_LB5_POSITION                                  0x5
#define _LATB_LB5_SIZE                                      0x1
#define _LATB_LB5_LENGTH                                    0x1
#define _LATB_LB5_MASK                                      0x20
#define _LATB_LB6_POSN                                      0x6
#define _LATB_LB6_POSITION                                  0x6
#define _LATB_LB6_SIZE                                      0x1
#define _LATB_LB6_LENGTH                                    0x1
#define _LATB_LB6_MASK                                      0x40
#define _LATB_LB7_POSN                                      0x7
#define _LATB_LB7_POSITION                                  0x7
#define _LATB_LB7_SIZE                                      0x1
#define _LATB_LB7_LENGTH                                    0x1
#define _LATB_LB7_MASK                                      0x80

// Register: LATC
#define LATC LATC
extern volatile unsigned char           LATC                __at(0xF8B);
#ifndef _LIB_BUILD
asm("LATC equ 0F8Bh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned LATC0                  :1;
        unsigned LATC1                  :1;
        unsigned LATC2                  :1;
        unsigned LATC3                  :1;
        unsigned LATC4                  :1;
        unsigned LATC5                  :1;
        unsigned LATC6                  :1;
        unsigned LATC7                  :1;
    };
    struct {
        unsigned LC0                    :1;
        unsigned LC1                    :1;
        unsigned LC2                    :1;
        unsigned LC3                    :1;
        unsigned LC4                    :1;
        unsigned LC5                    :1;
        unsigned LC6                    :1;
        unsigned LC7                    :1;
    };
} LATCbits_t;
extern volatile LATCbits_t LATCbits __at(0xF8B);
// bitfield macros
#define _LATC_LATC0_POSN                                    0x0
#define _LATC_LATC0_POSITION                                0x0
#define _LATC_LATC0_SIZE                                    0x1
#define _LATC_LATC0_LENGTH                                  0x1
#define _LATC_LATC0_MASK                                    0x1
#define _LATC_LATC1_POSN                                    0x1
#define _LATC_LATC1_POSITION                                0x1
#define _LATC_LATC1_SIZE                                    0x1
#define _LATC_LATC1_LENGTH                                  0x1
#define _LATC_LATC1_MASK                                    0x2
#define _LATC_LATC2_POSN                                    0x2
#define _LATC_LATC2_POSITION                                0x2
#define _LATC_LATC2_SIZE                                    0x1
#define _LATC_LATC2_LENGTH                                  0x1
#define _LATC_LATC2_MASK                                    0x4
#define _LATC_LATC3_POSN                                    0x3
#define _LATC_LATC3_POSITION                                0x3
#define _LATC_LATC3_SIZE                                    0x1
#define _LATC_LATC3_LENGTH                                  0x1
#define _LATC_LATC3_MASK                                    0x8
#define _LATC_LATC4_POSN                                    0x4
#define _LATC_LATC4_POSITION                                0x4
#define _LATC_LATC4_SIZE                                    0x1
#define _LATC_LATC4_LENGTH                                  0x1
#define _LATC_LATC4_MASK                                    0x10
#define _LATC_LATC5_POSN                                    0x5
#define _LATC_LATC5_POSITION                                0x5
#define _LATC_LATC5_SIZE                                    0x1
#define _LATC_LATC5_LENGTH                                  0x1
#define _LATC_LATC5_MASK                                    0x20
#define _LATC_LATC6_POSN                                    0x6
#define _LATC_LATC6_POSITION                                0x6
#define _LATC_LATC6_SIZE                                    0x1
#define _LATC_LATC6_LENGTH                                  0x1
#define _LATC_LATC6_MASK                                    0x40
#define _LATC_LATC7_POSN                                    0x7
#define _LATC_LATC7_POSITION                                0x7
#define _LATC_LATC7_SIZE                                    0x1
#define _LATC_LATC7_LENGTH                                  0x1
#define _LATC_LATC7_MASK                                    0x80
#define _LATC_LC0_POSN                                      0x0
#define _LATC_LC0_POSITION                                  0x0
#define _LATC_LC0_SIZE                                      0x1
#define _LATC_LC0_LENGTH                                    0x1
#define _LATC_LC0_MASK                                      0x1
#define _LATC_LC1_POSN                                      0x1
#define _LATC_LC1_POSITION                                  0x1
#define _LATC_LC1_SIZE                                      0x1
#define _LATC_LC1_LENGTH                                    0x1
#define _LATC_LC1_MASK                                      0x2
#define _LATC_LC2_POSN                                      0x2
#define _LATC_LC2_POSITION                                  0x2
#define _LATC_LC2_SIZE                                      0x1
#define _LATC_LC2_LENGTH                                    0x1
#define _LATC_LC2_MASK                                      0x4
#define _LATC_LC3_POSN                                      0x3
#define _LATC_LC3_POSITION                                  0x3
#define _LATC_LC3_SIZE                                      0x1
#define _LATC_LC3_LENGTH                                    0x1
#define _LATC_LC3_MASK                                      0x8
#define _LATC_LC4_POSN                                      0x4
#define _LATC_LC4_POSITION                                  0x4
#define _LATC_LC4_SIZE                                      0x1
#define _LATC_LC4_LENGTH                                    0x1
#define _LATC_LC4_MASK                                      0x10
#define _LATC_LC5_POSN                                      0x5
#define _LATC_LC5_POSITION                                  0x5
#define _LATC_LC5_SIZE                                      0x1
#define _LATC_LC5_LENGTH                                    0x1
#define _LATC_LC5_MASK                                      0x20
#define _LATC_LC6_POSN                                      0x6
#define _LATC_LC6_POSITION                                  0x6
#define _LATC_LC6_SIZE                                      0x1
#define _LATC_LC6_LENGTH                                    0x1
#define _LATC_LC6_MASK                                      0x40
#define _LATC_LC7_POSN                                      0x7
#define _LATC_LC7_POSITION                                  0x7
#define _LATC_LC7_SIZE                                      0x1
#define _LATC_LC7_LENGTH                                    0x1
#define _LATC_LC7_MASK                                      0x80

// Register: LATD
#define LATD LATD
extern volatile unsigned char           LATD                __at(0xF8C);
#ifndef _LIB_BUILD
asm("LATD equ 0F8Ch");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned LATD0                  :1;
        unsigned LATD1                  :1;
        unsigned LATD2                  :1;
    };
    struct {
        unsigned LD0                    :1;
        unsigned LD1                    :1;
        unsigned LD2                    :1;
    };
} LATDbits_t;
extern volatile LATDbits_t LATDbits __at(0xF8C);
// bitfield macros
#define _LATD_LATD0_POSN                                    0x0
#define _LATD_LATD0_POSITION                                0x0
#define _LATD_LATD0_SIZE                                    0x1
#define _LATD_LATD0_LENGTH                                  0x1
#define _LATD_LATD0_MASK                                    0x1
#define _LATD_LATD1_POSN                                    0x1
#define _LATD_LATD1_POSITION                                0x1
#define _LATD_LATD1_SIZE                                    0x1
#define _LATD_LATD1_LENGTH                                  0x1
#define _LATD_LATD1_MASK                                    0x2
#define _LATD_LATD2_POSN                                    0x2
#define _LATD_LATD2_POSITION                                0x2
#define _LATD_LATD2_SIZE                                    0x1
#define _LATD_LATD2_LENGTH                                  0x1
#define _LATD_LATD2_MASK                                    0x4
#define _LATD_LD0_POSN                                      0x0
#define _LATD_LD0_POSITION                                  0x0
#define _LATD_LD0_SIZE                                      0x1
#define _LATD_LD0_LENGTH                                    0x1
#define _LATD_LD0_MASK                                      0x1
#define _LATD_LD1_POSN                                      0x1
#define _LATD_LD1_POSITION                                  0x1
#define _LATD_LD1_SIZE                                      0x1
#define _LATD_LD1_LENGTH                                    0x1
#define _LATD_LD1_MASK                                      0x2
#define _LATD_LD2_POSN                                      0x2
#define _LATD_LD2_POSITION                                  0x2
#define _LATD_LD2_SIZE                                      0x1
#define _LATD_LD2_LENGTH                                    0x1
#define _LATD_LD2_MASK                                      0x4

// Register: LATE
#define LATE LATE
extern volatile unsigned char           LATE                __at(0xF8D);
#ifndef _LIB_BUILD
asm("LATE equ 0F8Dh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned LATE0                  :1;
        unsigned LATE1                  :1;
        unsigned LATE2                  :1;
        unsigned LATE3                  :1;
        unsigned LATE4                  :1;
        unsigned LATE5                  :1;
        unsigned LATE6                  :1;
        unsigned LATE7                  :1;
    };
    struct {
        unsigned LE0                    :1;
        unsigned LE1                    :1;
        unsigned LE2                    :1;
        unsigned LE3                    :1;
        unsigned LE4                    :1;
        unsigned LE5                    :1;
        unsigned LE6                    :1;
        unsigned LE7                    :1;
    };
} LATEbits_t;
extern volatile LATEbits_t LATEbits __at(0xF8D);
// bitfield macros
#define _LATE_LATE0_POSN                                    0x0
#define _LATE_LATE0_POSITION                                0x0
#define _LATE_LATE0_SIZE                                    0x1
#define _LATE_LATE0_LENGTH                                  0x1
#define _LATE_LATE0_MASK                                    0x1
#define _LATE_LATE1_POSN                                    0x1
#define _LATE_LATE1_POSITION                                0x1
#define _LATE_LATE1_SIZE                                    0x1
#define _LATE_LATE1_LENGTH                                  0x1
#define _LATE_LATE1_MASK                                    0x2
#define _LATE_LATE2_POSN                                    0x2
#define _LATE_LATE2_POSITION                                0x2
#define _LATE_LATE2_SIZE                                    0x1
#define _LATE_LATE2_LENGTH                                  0x1
#define _LATE_LATE2_MASK                                    0x4
#define _LATE_LATE3_POSN                                    0x3
#define _LATE_LATE3_POSITION                                0x3
#define _LATE_LATE3_SIZE                                    0x1
#define _LATE_LATE3_LENGTH                                  0x1
#define _LATE_LATE3_MASK                                    0x8
#define _LATE_LATE4_POSN                                    0x4
#define _LATE_LATE4_POSITION                                0x4
#define _LATE_LATE4_SIZE                                    0x1
#define _LATE_LATE4_LENGTH                                  0x1
#define _LATE_LATE4_MASK                                    0x10
#define _LATE_LATE5_POSN                                    0x5
#define _LATE_LATE5_POSITION                                0x5
#define _LATE_LATE5_SIZE                                    0x1
#define _LATE_LATE5_LENGTH                                  0x1
#define _LATE_LATE5_MASK                                    0x20
#define _LATE_LATE6_POSN                                    0x6
#define _LATE_LATE6_POSITION                                0x6
#define _LATE_LATE6_SIZE                                    0x1
#define _LATE_LATE6_LENGTH                                  0x1
#define _LATE_LATE6_MASK                                    0x40
#define _LATE_LATE7_POSN                                    0x7
#define _LATE_LATE7_POSITION                                0x7
#define _LATE_LATE7_SIZE                                    0x1
#define _LATE_LATE7_LENGTH                                  0x1
#define _LATE_LATE7_MASK                                    0x80
#define _LATE_LE0_POSN                                      0x0
#define _LATE_LE0_POSITION                                  0x0
#define _LATE_LE0_SIZE                                      0x1
#define _LATE_LE0_LENGTH                                    0x1
#define _LATE_LE0_MASK                                      0x1
#define _LATE_LE1_POSN                                      0x1
#define _LATE_LE1_POSITION                                  0x1
#define _LATE_LE1_SIZE                                      0x1
#define _LATE_LE1_LENGTH                                    0x1
#define _LATE_LE1_MASK                                      0x2
#define _LATE_LE2_POSN                                      0x2
#define _LATE_LE2_POSITION                                  0x2
#define _LATE_LE2_SIZE                                      0x1
#define _LATE_LE2_LENGTH                                    0x1
#define _LATE_LE2_MASK                                      0x4
#define _LATE_LE3_POSN                                      0x3
#define _LATE_LE3_POSITION                                  0x3
#define _LATE_LE3_SIZE                                      0x1
#define _LATE_LE3_LENGTH                                    0x1
#define _LATE_LE3_MASK                                      0x8
#define _LATE_LE4_POSN                                      0x4
#define _LATE_LE4_POSITION                                  0x4
#define _LATE_LE4_SIZE                                      0x1
#define _LATE_LE4_LENGTH                                    0x1
#define _LATE_LE4_MASK                                      0x10
#define _LATE_LE5_POSN                                      0x5
#define _LATE_LE5_POSITION                                  0x5
#define _LATE_LE5_SIZE                                      0x1
#define _LATE_LE5_LENGTH                                    0x1
#define _LATE_LE5_MASK                                      0x20
#define _LATE_LE6_POSN                                      0x6
#define _LATE_LE6_POSITION                                  0x6
#define _LATE_LE6_SIZE                                      0x1
#define _LATE_LE6_LENGTH                                    0x1
#define _LATE_LE6_MASK                                      0x40
#define _LATE_LE7_POSN                                      0x7
#define _LATE_LE7_POSITION                                  0x7
#define _LATE_LE7_SIZE                                      0x1
#define _LATE_LE7_LENGTH                                    0x1
#define _LATE_LE7_MASK                                      0x80

// Register: LATF
#define LATF LATF
extern volatile unsigned char           LATF                __at(0xF8E);
#ifndef _LIB_BUILD
asm("LATF equ 0F8Eh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :1;
        unsigned LATF1                  :1;
        unsigned LATF2                  :1;
        unsigned LATF3                  :1;
        unsigned LATF4                  :1;
        unsigned LATF5                  :1;
        unsigned LATF6                  :1;
        unsigned LATF7                  :1;
    };
    struct {
        unsigned                        :1;
        unsigned LF1                    :1;
        unsigned LF2                    :1;
        unsigned LF3                    :1;
        unsigned LF4                    :1;
        unsigned LF5                    :1;
        unsigned LF6                    :1;
        unsigned LF7                    :1;
    };
} LATFbits_t;
extern volatile LATFbits_t LATFbits __at(0xF8E);
// bitfield macros
#define _LATF_LATF1_POSN                                    0x1
#define _LATF_LATF1_POSITION                                0x1
#define _LATF_LATF1_SIZE                                    0x1
#define _LATF_LATF1_LENGTH                                  0x1
#define _LATF_LATF1_MASK                                    0x2
#define _LATF_LATF2_POSN                                    0x2
#define _LATF_LATF2_POSITION                                0x2
#define _LATF_LATF2_SIZE                                    0x1
#define _LATF_LATF2_LENGTH                                  0x1
#define _LATF_LATF2_MASK                                    0x4
#define _LATF_LATF3_POSN                                    0x3
#define _LATF_LATF3_POSITION                                0x3
#define _LATF_LATF3_SIZE                                    0x1
#define _LATF_LATF3_LENGTH                                  0x1
#define _LATF_LATF3_MASK                                    0x8
#define _LATF_LATF4_POSN                                    0x4
#define _LATF_LATF4_POSITION                                0x4
#define _LATF_LATF4_SIZE                                    0x1
#define _LATF_LATF4_LENGTH                                  0x1
#define _LATF_LATF4_MASK                                    0x10
#define _LATF_LATF5_POSN                                    0x5
#define _LATF_LATF5_POSITION                                0x5
#define _LATF_LATF5_SIZE                                    0x1
#define _LATF_LATF5_LENGTH                                  0x1
#define _LATF_LATF5_MASK                                    0x20
#define _LATF_LATF6_POSN                                    0x6
#define _LATF_LATF6_POSITION                                0x6
#define _LATF_LATF6_SIZE                                    0x1
#define _LATF_LATF6_LENGTH                                  0x1
#define _LATF_LATF6_MASK                                    0x40
#define _LATF_LATF7_POSN                                    0x7
#define _LATF_LATF7_POSITION                                0x7
#define _LATF_LATF7_SIZE                                    0x1
#define _LATF_LATF7_LENGTH                                  0x1
#define _LATF_LATF7_MASK                                    0x80
#define _LATF_LF1_POSN                                      0x1
#define _LATF_LF1_POSITION                                  0x1
#define _LATF_LF1_SIZE                                      0x1
#define _LATF_LF1_LENGTH                                    0x1
#define _LATF_LF1_MASK                                      0x2
#define _LATF_LF2_POSN                                      0x2
#define _LATF_LF2_POSITION                                  0x2
#define _LATF_LF2_SIZE                                      0x1
#define _LATF_LF2_LENGTH                                    0x1
#define _LATF_LF2_MASK                                      0x4
#define _LATF_LF3_POSN                                      0x3
#define _LATF_LF3_POSITION                                  0x3
#define _LATF_LF3_SIZE                                      0x1
#define _LATF_LF3_LENGTH                                    0x1
#define _LATF_LF3_MASK                                      0x8
#define _LATF_LF4_POSN                                      0x4
#define _LATF_LF4_POSITION                                  0x4
#define _LATF_LF4_SIZE                                      0x1
#define _LATF_LF4_LENGTH                                    0x1
#define _LATF_LF4_MASK                                      0x10
#define _LATF_LF5_POSN                                      0x5
#define _LATF_LF5_POSITION                                  0x5
#define _LATF_LF5_SIZE                                      0x1
#define _LATF_LF5_LENGTH                                    0x1
#define _LATF_LF5_MASK                                      0x20
#define _LATF_LF6_POSN                                      0x6
#define _LATF_LF6_POSITION                                  0x6
#define _LATF_LF6_SIZE                                      0x1
#define _LATF_LF6_LENGTH                                    0x1
#define _LATF_LF6_MASK                                      0x40
#define _LATF_LF7_POSN                                      0x7
#define _LATF_LF7_POSITION                                  0x7
#define _LATF_LF7_SIZE                                      0x1
#define _LATF_LF7_LENGTH                                    0x1
#define _LATF_LF7_MASK                                      0x80

// Register: LATG
#define LATG LATG
extern volatile unsigned char           LATG                __at(0xF8F);
#ifndef _LIB_BUILD
asm("LATG equ 0F8Fh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned LATG0                  :1;
        unsigned LATG1                  :1;
        unsigned LATG2                  :1;
        unsigned LATG3                  :1;
        unsigned LATG4                  :1;
    };
    struct {
        unsigned LG0                    :1;
        unsigned LG1                    :1;
        unsigned LG2                    :1;
        unsigned LG3                    :1;
        unsigned LG4                    :1;
    };
} LATGbits_t;
extern volatile LATGbits_t LATGbits __at(0xF8F);
// bitfield macros
#define _LATG_LATG0_POSN                                    0x0
#define _LATG_LATG0_POSITION                                0x0
#define _LATG_LATG0_SIZE                                    0x1
#define _LATG_LATG0_LENGTH                                  0x1
#define _LATG_LATG0_MASK                                    0x1
#define _LATG_LATG1_POSN                                    0x1
#define _LATG_LATG1_POSITION                                0x1
#define _LATG_LATG1_SIZE                                    0x1
#define _LATG_LATG1_LENGTH                                  0x1
#define _LATG_LATG1_MASK                                    0x2
#define _LATG_LATG2_POSN                                    0x2
#define _LATG_LATG2_POSITION                                0x2
#define _LATG_LATG2_SIZE                                    0x1
#define _LATG_LATG2_LENGTH                                  0x1
#define _LATG_LATG2_MASK                                    0x4
#define _LATG_LATG3_POSN                                    0x3
#define _LATG_LATG3_POSITION                                0x3
#define _LATG_LATG3_SIZE                                    0x1
#define _LATG_LATG3_LENGTH                                  0x1
#define _LATG_LATG3_MASK                                    0x8
#define _LATG_LATG4_POSN                                    0x4
#define _LATG_LATG4_POSITION                                0x4
#define _LATG_LATG4_SIZE                                    0x1
#define _LATG_LATG4_LENGTH                                  0x1
#define _LATG_LATG4_MASK                                    0x10
#define _LATG_LG0_POSN                                      0x0
#define _LATG_LG0_POSITION                                  0x0
#define _LATG_LG0_SIZE                                      0x1
#define _LATG_LG0_LENGTH                                    0x1
#define _LATG_LG0_MASK                                      0x1
#define _LATG_LG1_POSN                                      0x1
#define _LATG_LG1_POSITION                                  0x1
#define _LATG_LG1_SIZE                                      0x1
#define _LATG_LG1_LENGTH                                    0x1
#define _LATG_LG1_MASK                                      0x2
#define _LATG_LG2_POSN                                      0x2
#define _LATG_LG2_POSITION                                  0x2
#define _LATG_LG2_SIZE                                      0x1
#define _LATG_LG2_LENGTH                                    0x1
#define _LATG_LG2_MASK                                      0x4
#define _LATG_LG3_POSN                                      0x3
#define _LATG_LG3_POSITION                                  0x3
#define _LATG_LG3_SIZE                                      0x1
#define _LATG_LG3_LENGTH                                    0x1
#define _LATG_LG3_MASK                                      0x8
#define _LATG_LG4_POSN                                      0x4
#define _LATG_LG4_POSITION                                  0x4
#define _LATG_LG4_SIZE                                      0x1
#define _LATG_LG4_LENGTH                                    0x1
#define _LATG_LG4_MASK                                      0x10

// Register: LATH
#define LATH LATH
extern volatile unsigned char           LATH                __at(0xF90);
#ifndef _LIB_BUILD
asm("LATH equ 0F90h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned LATH0                  :1;
        unsigned LATH1                  :1;
        unsigned LATH2                  :1;
        unsigned LATH3                  :1;
        unsigned LATH4                  :1;
        unsigned LATH5                  :1;
        unsigned LATH6                  :1;
        unsigned LATH7                  :1;
    };
    struct {
        unsigned LH0                    :1;
        unsigned LH1                    :1;
        unsigned LH2                    :1;
        unsigned LH3                    :1;
        unsigned LH4                    :1;
        unsigned LH5                    :1;
        unsigned LH6                    :1;
        unsigned LH7                    :1;
    };
} LATHbits_t;
extern volatile LATHbits_t LATHbits __at(0xF90);
// bitfield macros
#define _LATH_LATH0_POSN                                    0x0
#define _LATH_LATH0_POSITION                                0x0
#define _LATH_LATH0_SIZE                                    0x1
#define _LATH_LATH0_LENGTH                                  0x1
#define _LATH_LATH0_MASK                                    0x1
#define _LATH_LATH1_POSN                                    0x1
#define _LATH_LATH1_POSITION                                0x1
#define _LATH_LATH1_SIZE                                    0x1
#define _LATH_LATH1_LENGTH                                  0x1
#define _LATH_LATH1_MASK                                    0x2
#define _LATH_LATH2_POSN                                    0x2
#define _LATH_LATH2_POSITION                                0x2
#define _LATH_LATH2_SIZE                                    0x1
#define _LATH_LATH2_LENGTH                                  0x1
#define _LATH_LATH2_MASK                                    0x4
#define _LATH_LATH3_POSN                                    0x3
#define _LATH_LATH3_POSITION                                0x3
#define _LATH_LATH3_SIZE                                    0x1
#define _LATH_LATH3_LENGTH                                  0x1
#define _LATH_LATH3_MASK                                    0x8
#define _LATH_LATH4_POSN                                    0x4
#define _LATH_LATH4_POSITION                                0x4
#define _LATH_LATH4_SIZE                                    0x1
#define _LATH_LATH4_LENGTH                                  0x1
#define _LATH_LATH4_MASK                                    0x10
#define _LATH_LATH5_POSN                                    0x5
#define _LATH_LATH5_POSITION                                0x5
#define _LATH_LATH5_SIZE                                    0x1
#define _LATH_LATH5_LENGTH                                  0x1
#define _LATH_LATH5_MASK                                    0x20
#define _LATH_LATH6_POSN                                    0x6
#define _LATH_LATH6_POSITION                                0x6
#define _LATH_LATH6_SIZE                                    0x1
#define _LATH_LATH6_LENGTH                                  0x1
#define _LATH_LATH6_MASK                                    0x40
#define _LATH_LATH7_POSN                                    0x7
#define _LATH_LATH7_POSITION                                0x7
#define _LATH_LATH7_SIZE                                    0x1
#define _LATH_LATH7_LENGTH                                  0x1
#define _LATH_LATH7_MASK                                    0x80
#define _LATH_LH0_POSN                                      0x0
#define _LATH_LH0_POSITION                                  0x0
#define _LATH_LH0_SIZE                                      0x1
#define _LATH_LH0_LENGTH                                    0x1
#define _LATH_LH0_MASK                                      0x1
#define _LATH_LH1_POSN                                      0x1
#define _LATH_LH1_POSITION                                  0x1
#define _LATH_LH1_SIZE                                      0x1
#define _LATH_LH1_LENGTH                                    0x1
#define _LATH_LH1_MASK                                      0x2
#define _LATH_LH2_POSN                                      0x2
#define _LATH_LH2_POSITION                                  0x2
#define _LATH_LH2_SIZE                                      0x1
#define _LATH_LH2_LENGTH                                    0x1
#define _LATH_LH2_MASK                                      0x4
#define _LATH_LH3_POSN                                      0x3
#define _LATH_LH3_POSITION                                  0x3
#define _LATH_LH3_SIZE                                      0x1
#define _LATH_LH3_LENGTH                                    0x1
#define _LATH_LH3_MASK                                      0x8
#define _LATH_LH4_POSN                                      0x4
#define _LATH_LH4_POSITION                                  0x4
#define _LATH_LH4_SIZE                                      0x1
#define _LATH_LH4_LENGTH                                    0x1
#define _LATH_LH4_MASK                                      0x10
#define _LATH_LH5_POSN                                      0x5
#define _LATH_LH5_POSITION                                  0x5
#define _LATH_LH5_SIZE                                      0x1
#define _LATH_LH5_LENGTH                                    0x1
#define _LATH_LH5_MASK                                      0x20
#define _LATH_LH6_POSN                                      0x6
#define _LATH_LH6_POSITION                                  0x6
#define _LATH_LH6_SIZE                                      0x1
#define _LATH_LH6_LENGTH                                    0x1
#define _LATH_LH6_MASK                                      0x40
#define _LATH_LH7_POSN                                      0x7
#define _LATH_LH7_POSITION                                  0x7
#define _LATH_LH7_SIZE                                      0x1
#define _LATH_LH7_LENGTH                                    0x1
#define _LATH_LH7_MASK                                      0x80

// Register: LATJ
#define LATJ LATJ
extern volatile unsigned char           LATJ                __at(0xF91);
#ifndef _LIB_BUILD
asm("LATJ equ 0F91h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :4;
        unsigned LATJ4                  :1;
        unsigned LATJ5                  :1;
    };
    struct {
        unsigned                        :4;
        unsigned LJ4                    :1;
        unsigned LJ5                    :1;
    };
} LATJbits_t;
extern volatile LATJbits_t LATJbits __at(0xF91);
// bitfield macros
#define _LATJ_LATJ4_POSN                                    0x4
#define _LATJ_LATJ4_POSITION                                0x4
#define _LATJ_LATJ4_SIZE                                    0x1
#define _LATJ_LATJ4_LENGTH                                  0x1
#define _LATJ_LATJ4_MASK                                    0x10
#define _LATJ_LATJ5_POSN                                    0x5
#define _LATJ_LATJ5_POSITION                                0x5
#define _LATJ_LATJ5_SIZE                                    0x1
#define _LATJ_LATJ5_LENGTH                                  0x1
#define _LATJ_LATJ5_MASK                                    0x20
#define _LATJ_LJ4_POSN                                      0x4
#define _LATJ_LJ4_POSITION                                  0x4
#define _LATJ_LJ4_SIZE                                      0x1
#define _LATJ_LJ4_LENGTH                                    0x1
#define _LATJ_LJ4_MASK                                      0x10
#define _LATJ_LJ5_POSN                                      0x5
#define _LATJ_LJ5_POSITION                                  0x5
#define _LATJ_LJ5_SIZE                                      0x1
#define _LATJ_LJ5_LENGTH                                    0x1
#define _LATJ_LJ5_MASK                                      0x20

// Register: TRISA
#define TRISA TRISA
extern volatile unsigned char           TRISA               __at(0xF92);
#ifndef _LIB_BUILD
asm("TRISA equ 0F92h");
#endif
// aliases
extern volatile unsigned char           DDRA                __at(0xF92);
#ifndef _LIB_BUILD
asm("DDRA equ 0F92h");
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
    struct {
        unsigned RA0                    :1;
        unsigned RA1                    :1;
        unsigned RA2                    :1;
        unsigned RA3                    :1;
        unsigned RA4                    :1;
        unsigned RA5                    :1;
    };
} TRISAbits_t;
extern volatile TRISAbits_t TRISAbits __at(0xF92);
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
#define _TRISA_RA0_POSN                                     0x0
#define _TRISA_RA0_POSITION                                 0x0
#define _TRISA_RA0_SIZE                                     0x1
#define _TRISA_RA0_LENGTH                                   0x1
#define _TRISA_RA0_MASK                                     0x1
#define _TRISA_RA1_POSN                                     0x1
#define _TRISA_RA1_POSITION                                 0x1
#define _TRISA_RA1_SIZE                                     0x1
#define _TRISA_RA1_LENGTH                                   0x1
#define _TRISA_RA1_MASK                                     0x2
#define _TRISA_RA2_POSN                                     0x2
#define _TRISA_RA2_POSITION                                 0x2
#define _TRISA_RA2_SIZE                                     0x1
#define _TRISA_RA2_LENGTH                                   0x1
#define _TRISA_RA2_MASK                                     0x4
#define _TRISA_RA3_POSN                                     0x3
#define _TRISA_RA3_POSITION                                 0x3
#define _TRISA_RA3_SIZE                                     0x1
#define _TRISA_RA3_LENGTH                                   0x1
#define _TRISA_RA3_MASK                                     0x8
#define _TRISA_RA4_POSN                                     0x4
#define _TRISA_RA4_POSITION                                 0x4
#define _TRISA_RA4_SIZE                                     0x1
#define _TRISA_RA4_LENGTH                                   0x1
#define _TRISA_RA4_MASK                                     0x10
#define _TRISA_RA5_POSN                                     0x5
#define _TRISA_RA5_POSITION                                 0x5
#define _TRISA_RA5_SIZE                                     0x1
#define _TRISA_RA5_LENGTH                                   0x1
#define _TRISA_RA5_MASK                                     0x20
// alias bitfield definitions
typedef union {
    struct {
        unsigned TRISA0                 :1;
        unsigned TRISA1                 :1;
        unsigned TRISA2                 :1;
        unsigned TRISA3                 :1;
        unsigned TRISA4                 :1;
        unsigned TRISA5                 :1;
    };
    struct {
        unsigned RA0                    :1;
        unsigned RA1                    :1;
        unsigned RA2                    :1;
        unsigned RA3                    :1;
        unsigned RA4                    :1;
        unsigned RA5                    :1;
    };
} DDRAbits_t;
extern volatile DDRAbits_t DDRAbits __at(0xF92);
// bitfield macros
#define _DDRA_TRISA0_POSN                                   0x0
#define _DDRA_TRISA0_POSITION                               0x0
#define _DDRA_TRISA0_SIZE                                   0x1
#define _DDRA_TRISA0_LENGTH                                 0x1
#define _DDRA_TRISA0_MASK                                   0x1
#define _DDRA_TRISA1_POSN                                   0x1
#define _DDRA_TRISA1_POSITION                               0x1
#define _DDRA_TRISA1_SIZE                                   0x1
#define _DDRA_TRISA1_LENGTH                                 0x1
#define _DDRA_TRISA1_MASK                                   0x2
#define _DDRA_TRISA2_POSN                                   0x2
#define _DDRA_TRISA2_POSITION                               0x2
#define _DDRA_TRISA2_SIZE                                   0x1
#define _DDRA_TRISA2_LENGTH                                 0x1
#define _DDRA_TRISA2_MASK                                   0x4
#define _DDRA_TRISA3_POSN                                   0x3
#define _DDRA_TRISA3_POSITION                               0x3
#define _DDRA_TRISA3_SIZE                                   0x1
#define _DDRA_TRISA3_LENGTH                                 0x1
#define _DDRA_TRISA3_MASK                                   0x8
#define _DDRA_TRISA4_POSN                                   0x4
#define _DDRA_TRISA4_POSITION                               0x4
#define _DDRA_TRISA4_SIZE                                   0x1
#define _DDRA_TRISA4_LENGTH                                 0x1
#define _DDRA_TRISA4_MASK                                   0x10
#define _DDRA_TRISA5_POSN                                   0x5
#define _DDRA_TRISA5_POSITION                               0x5
#define _DDRA_TRISA5_SIZE                                   0x1
#define _DDRA_TRISA5_LENGTH                                 0x1
#define _DDRA_TRISA5_MASK                                   0x20
#define _DDRA_RA0_POSN                                      0x0
#define _DDRA_RA0_POSITION                                  0x0
#define _DDRA_RA0_SIZE                                      0x1
#define _DDRA_RA0_LENGTH                                    0x1
#define _DDRA_RA0_MASK                                      0x1
#define _DDRA_RA1_POSN                                      0x1
#define _DDRA_RA1_POSITION                                  0x1
#define _DDRA_RA1_SIZE                                      0x1
#define _DDRA_RA1_LENGTH                                    0x1
#define _DDRA_RA1_MASK                                      0x2
#define _DDRA_RA2_POSN                                      0x2
#define _DDRA_RA2_POSITION                                  0x2
#define _DDRA_RA2_SIZE                                      0x1
#define _DDRA_RA2_LENGTH                                    0x1
#define _DDRA_RA2_MASK                                      0x4
#define _DDRA_RA3_POSN                                      0x3
#define _DDRA_RA3_POSITION                                  0x3
#define _DDRA_RA3_SIZE                                      0x1
#define _DDRA_RA3_LENGTH                                    0x1
#define _DDRA_RA3_MASK                                      0x8
#define _DDRA_RA4_POSN                                      0x4
#define _DDRA_RA4_POSITION                                  0x4
#define _DDRA_RA4_SIZE                                      0x1
#define _DDRA_RA4_LENGTH                                    0x1
#define _DDRA_RA4_MASK                                      0x10
#define _DDRA_RA5_POSN                                      0x5
#define _DDRA_RA5_POSITION                                  0x5
#define _DDRA_RA5_SIZE                                      0x1
#define _DDRA_RA5_LENGTH                                    0x1
#define _DDRA_RA5_MASK                                      0x20

// Register: TRISB
#define TRISB TRISB
extern volatile unsigned char           TRISB               __at(0xF93);
#ifndef _LIB_BUILD
asm("TRISB equ 0F93h");
#endif
// aliases
extern volatile unsigned char           DDRB                __at(0xF93);
#ifndef _LIB_BUILD
asm("DDRB equ 0F93h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned TRISB0                 :1;
        unsigned TRISB1                 :1;
        unsigned TRISB2                 :1;
        unsigned TRISB3                 :1;
        unsigned TRISB4                 :1;
        unsigned TRISB5                 :1;
        unsigned TRISB6                 :1;
        unsigned TRISB7                 :1;
    };
    struct {
        unsigned RB0                    :1;
        unsigned RB1                    :1;
        unsigned RB2                    :1;
        unsigned RB3                    :1;
        unsigned RB4                    :1;
        unsigned RB5                    :1;
        unsigned RB6                    :1;
        unsigned RB7                    :1;
    };
} TRISBbits_t;
extern volatile TRISBbits_t TRISBbits __at(0xF93);
// bitfield macros
#define _TRISB_TRISB0_POSN                                  0x0
#define _TRISB_TRISB0_POSITION                              0x0
#define _TRISB_TRISB0_SIZE                                  0x1
#define _TRISB_TRISB0_LENGTH                                0x1
#define _TRISB_TRISB0_MASK                                  0x1
#define _TRISB_TRISB1_POSN                                  0x1
#define _TRISB_TRISB1_POSITION                              0x1
#define _TRISB_TRISB1_SIZE                                  0x1
#define _TRISB_TRISB1_LENGTH                                0x1
#define _TRISB_TRISB1_MASK                                  0x2
#define _TRISB_TRISB2_POSN                                  0x2
#define _TRISB_TRISB2_POSITION                              0x2
#define _TRISB_TRISB2_SIZE                                  0x1
#define _TRISB_TRISB2_LENGTH                                0x1
#define _TRISB_TRISB2_MASK                                  0x4
#define _TRISB_TRISB3_POSN                                  0x3
#define _TRISB_TRISB3_POSITION                              0x3
#define _TRISB_TRISB3_SIZE                                  0x1
#define _TRISB_TRISB3_LENGTH                                0x1
#define _TRISB_TRISB3_MASK                                  0x8
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
#define _TRISB_RB0_POSN                                     0x0
#define _TRISB_RB0_POSITION                                 0x0
#define _TRISB_RB0_SIZE                                     0x1
#define _TRISB_RB0_LENGTH                                   0x1
#define _TRISB_RB0_MASK                                     0x1
#define _TRISB_RB1_POSN                                     0x1
#define _TRISB_RB1_POSITION                                 0x1
#define _TRISB_RB1_SIZE                                     0x1
#define _TRISB_RB1_LENGTH                                   0x1
#define _TRISB_RB1_MASK                                     0x2
#define _TRISB_RB2_POSN                                     0x2
#define _TRISB_RB2_POSITION                                 0x2
#define _TRISB_RB2_SIZE                                     0x1
#define _TRISB_RB2_LENGTH                                   0x1
#define _TRISB_RB2_MASK                                     0x4
#define _TRISB_RB3_POSN                                     0x3
#define _TRISB_RB3_POSITION                                 0x3
#define _TRISB_RB3_SIZE                                     0x1
#define _TRISB_RB3_LENGTH                                   0x1
#define _TRISB_RB3_MASK                                     0x8
#define _TRISB_RB4_POSN                                     0x4
#define _TRISB_RB4_POSITION                                 0x4
#define _TRISB_RB4_SIZE                                     0x1
#define _TRISB_RB4_LENGTH                                   0x1
#define _TRISB_RB4_MASK                                     0x10
#define _TRISB_RB5_POSN                                     0x5
#define _TRISB_RB5_POSITION                                 0x5
#define _TRISB_RB5_SIZE                                     0x1
#define _TRISB_RB5_LENGTH                                   0x1
#define _TRISB_RB5_MASK                                     0x20
#define _TRISB_RB6_POSN                                     0x6
#define _TRISB_RB6_POSITION                                 0x6
#define _TRISB_RB6_SIZE                                     0x1
#define _TRISB_RB6_LENGTH                                   0x1
#define _TRISB_RB6_MASK                                     0x40
#define _TRISB_RB7_POSN                                     0x7
#define _TRISB_RB7_POSITION                                 0x7
#define _TRISB_RB7_SIZE                                     0x1
#define _TRISB_RB7_LENGTH                                   0x1
#define _TRISB_RB7_MASK                                     0x80
// alias bitfield definitions
typedef union {
    struct {
        unsigned TRISB0                 :1;
        unsigned TRISB1                 :1;
        unsigned TRISB2                 :1;
        unsigned TRISB3                 :1;
        unsigned TRISB4                 :1;
        unsigned TRISB5                 :1;
        unsigned TRISB6                 :1;
        unsigned TRISB7                 :1;
    };
    struct {
        unsigned RB0                    :1;
        unsigned RB1                    :1;
        unsigned RB2                    :1;
        unsigned RB3                    :1;
        unsigned RB4                    :1;
        unsigned RB5                    :1;
        unsigned RB6                    :1;
        unsigned RB7                    :1;
    };
} DDRBbits_t;
extern volatile DDRBbits_t DDRBbits __at(0xF93);
// bitfield macros
#define _DDRB_TRISB0_POSN                                   0x0
#define _DDRB_TRISB0_POSITION                               0x0
#define _DDRB_TRISB0_SIZE                                   0x1
#define _DDRB_TRISB0_LENGTH                                 0x1
#define _DDRB_TRISB0_MASK                                   0x1
#define _DDRB_TRISB1_POSN                                   0x1
#define _DDRB_TRISB1_POSITION                               0x1
#define _DDRB_TRISB1_SIZE                                   0x1
#define _DDRB_TRISB1_LENGTH                                 0x1
#define _DDRB_TRISB1_MASK                                   0x2
#define _DDRB_TRISB2_POSN                                   0x2
#define _DDRB_TRISB2_POSITION                               0x2
#define _DDRB_TRISB2_SIZE                                   0x1
#define _DDRB_TRISB2_LENGTH                                 0x1
#define _DDRB_TRISB2_MASK                                   0x4
#define _DDRB_TRISB3_POSN                                   0x3
#define _DDRB_TRISB3_POSITION                               0x3
#define _DDRB_TRISB3_SIZE                                   0x1
#define _DDRB_TRISB3_LENGTH                                 0x1
#define _DDRB_TRISB3_MASK                                   0x8
#define _DDRB_TRISB4_POSN                                   0x4
#define _DDRB_TRISB4_POSITION                               0x4
#define _DDRB_TRISB4_SIZE                                   0x1
#define _DDRB_TRISB4_LENGTH                                 0x1
#define _DDRB_TRISB4_MASK                                   0x10
#define _DDRB_TRISB5_POSN                                   0x5
#define _DDRB_TRISB5_POSITION                               0x5
#define _DDRB_TRISB5_SIZE                                   0x1
#define _DDRB_TRISB5_LENGTH                                 0x1
#define _DDRB_TRISB5_MASK                                   0x20
#define _DDRB_TRISB6_POSN                                   0x6
#define _DDRB_TRISB6_POSITION                               0x6
#define _DDRB_TRISB6_SIZE                                   0x1
#define _DDRB_TRISB6_LENGTH                                 0x1
#define _DDRB_TRISB6_MASK                                   0x40
#define _DDRB_TRISB7_POSN                                   0x7
#define _DDRB_TRISB7_POSITION                               0x7
#define _DDRB_TRISB7_SIZE                                   0x1
#define _DDRB_TRISB7_LENGTH                                 0x1
#define _DDRB_TRISB7_MASK                                   0x80
#define _DDRB_RB0_POSN                                      0x0
#define _DDRB_RB0_POSITION                                  0x0
#define _DDRB_RB0_SIZE                                      0x1
#define _DDRB_RB0_LENGTH                                    0x1
#define _DDRB_RB0_MASK                                      0x1
#define _DDRB_RB1_POSN                                      0x1
#define _DDRB_RB1_POSITION                                  0x1
#define _DDRB_RB1_SIZE                                      0x1
#define _DDRB_RB1_LENGTH                                    0x1
#define _DDRB_RB1_MASK                                      0x2
#define _DDRB_RB2_POSN                                      0x2
#define _DDRB_RB2_POSITION                                  0x2
#define _DDRB_RB2_SIZE                                      0x1
#define _DDRB_RB2_LENGTH                                    0x1
#define _DDRB_RB2_MASK                                      0x4
#define _DDRB_RB3_POSN                                      0x3
#define _DDRB_RB3_POSITION                                  0x3
#define _DDRB_RB3_SIZE                                      0x1
#define _DDRB_RB3_LENGTH                                    0x1
#define _DDRB_RB3_MASK                                      0x8
#define _DDRB_RB4_POSN                                      0x4
#define _DDRB_RB4_POSITION                                  0x4
#define _DDRB_RB4_SIZE                                      0x1
#define _DDRB_RB4_LENGTH                                    0x1
#define _DDRB_RB4_MASK                                      0x10
#define _DDRB_RB5_POSN                                      0x5
#define _DDRB_RB5_POSITION                                  0x5
#define _DDRB_RB5_SIZE                                      0x1
#define _DDRB_RB5_LENGTH                                    0x1
#define _DDRB_RB5_MASK                                      0x20
#define _DDRB_RB6_POSN                                      0x6
#define _DDRB_RB6_POSITION                                  0x6
#define _DDRB_RB6_SIZE                                      0x1
#define _DDRB_RB6_LENGTH                                    0x1
#define _DDRB_RB6_MASK                                      0x40
#define _DDRB_RB7_POSN                                      0x7
#define _DDRB_RB7_POSITION                                  0x7
#define _DDRB_RB7_SIZE                                      0x1
#define _DDRB_RB7_LENGTH                                    0x1
#define _DDRB_RB7_MASK                                      0x80

// Register: TRISC
#define TRISC TRISC
extern volatile unsigned char           TRISC               __at(0xF94);
#ifndef _LIB_BUILD
asm("TRISC equ 0F94h");
#endif
// aliases
extern volatile unsigned char           DDRC                __at(0xF94);
#ifndef _LIB_BUILD
asm("DDRC equ 0F94h");
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
} TRISCbits_t;
extern volatile TRISCbits_t TRISCbits __at(0xF94);
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
#define _TRISC_RC0_POSN                                     0x0
#define _TRISC_RC0_POSITION                                 0x0
#define _TRISC_RC0_SIZE                                     0x1
#define _TRISC_RC0_LENGTH                                   0x1
#define _TRISC_RC0_MASK                                     0x1
#define _TRISC_RC1_POSN                                     0x1
#define _TRISC_RC1_POSITION                                 0x1
#define _TRISC_RC1_SIZE                                     0x1
#define _TRISC_RC1_LENGTH                                   0x1
#define _TRISC_RC1_MASK                                     0x2
#define _TRISC_RC2_POSN                                     0x2
#define _TRISC_RC2_POSITION                                 0x2
#define _TRISC_RC2_SIZE                                     0x1
#define _TRISC_RC2_LENGTH                                   0x1
#define _TRISC_RC2_MASK                                     0x4
#define _TRISC_RC3_POSN                                     0x3
#define _TRISC_RC3_POSITION                                 0x3
#define _TRISC_RC3_SIZE                                     0x1
#define _TRISC_RC3_LENGTH                                   0x1
#define _TRISC_RC3_MASK                                     0x8
#define _TRISC_RC4_POSN                                     0x4
#define _TRISC_RC4_POSITION                                 0x4
#define _TRISC_RC4_SIZE                                     0x1
#define _TRISC_RC4_LENGTH                                   0x1
#define _TRISC_RC4_MASK                                     0x10
#define _TRISC_RC5_POSN                                     0x5
#define _TRISC_RC5_POSITION                                 0x5
#define _TRISC_RC5_SIZE                                     0x1
#define _TRISC_RC5_LENGTH                                   0x1
#define _TRISC_RC5_MASK                                     0x20
#define _TRISC_RC6_POSN                                     0x6
#define _TRISC_RC6_POSITION                                 0x6
#define _TRISC_RC6_SIZE                                     0x1
#define _TRISC_RC6_LENGTH                                   0x1
#define _TRISC_RC6_MASK                                     0x40
#define _TRISC_RC7_POSN                                     0x7
#define _TRISC_RC7_POSITION                                 0x7
#define _TRISC_RC7_SIZE                                     0x1
#define _TRISC_RC7_LENGTH                                   0x1
#define _TRISC_RC7_MASK                                     0x80
// alias bitfield definitions
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
} DDRCbits_t;
extern volatile DDRCbits_t DDRCbits __at(0xF94);
// bitfield macros
#define _DDRC_TRISC0_POSN                                   0x0
#define _DDRC_TRISC0_POSITION                               0x0
#define _DDRC_TRISC0_SIZE                                   0x1
#define _DDRC_TRISC0_LENGTH                                 0x1
#define _DDRC_TRISC0_MASK                                   0x1
#define _DDRC_TRISC1_POSN                                   0x1
#define _DDRC_TRISC1_POSITION                               0x1
#define _DDRC_TRISC1_SIZE                                   0x1
#define _DDRC_TRISC1_LENGTH                                 0x1
#define _DDRC_TRISC1_MASK                                   0x2
#define _DDRC_TRISC2_POSN                                   0x2
#define _DDRC_TRISC2_POSITION                               0x2
#define _DDRC_TRISC2_SIZE                                   0x1
#define _DDRC_TRISC2_LENGTH                                 0x1
#define _DDRC_TRISC2_MASK                                   0x4
#define _DDRC_TRISC3_POSN                                   0x3
#define _DDRC_TRISC3_POSITION                               0x3
#define _DDRC_TRISC3_SIZE                                   0x1
#define _DDRC_TRISC3_LENGTH                                 0x1
#define _DDRC_TRISC3_MASK                                   0x8
#define _DDRC_TRISC4_POSN                                   0x4
#define _DDRC_TRISC4_POSITION                               0x4
#define _DDRC_TRISC4_SIZE                                   0x1
#define _DDRC_TRISC4_LENGTH                                 0x1
#define _DDRC_TRISC4_MASK                                   0x10
#define _DDRC_TRISC5_POSN                                   0x5
#define _DDRC_TRISC5_POSITION                               0x5
#define _DDRC_TRISC5_SIZE                                   0x1
#define _DDRC_TRISC5_LENGTH                                 0x1
#define _DDRC_TRISC5_MASK                                   0x20
#define _DDRC_TRISC6_POSN                                   0x6
#define _DDRC_TRISC6_POSITION                               0x6
#define _DDRC_TRISC6_SIZE                                   0x1
#define _DDRC_TRISC6_LENGTH                                 0x1
#define _DDRC_TRISC6_MASK                                   0x40
#define _DDRC_TRISC7_POSN                                   0x7
#define _DDRC_TRISC7_POSITION                               0x7
#define _DDRC_TRISC7_SIZE                                   0x1
#define _DDRC_TRISC7_LENGTH                                 0x1
#define _DDRC_TRISC7_MASK                                   0x80
#define _DDRC_RC0_POSN                                      0x0
#define _DDRC_RC0_POSITION                                  0x0
#define _DDRC_RC0_SIZE                                      0x1
#define _DDRC_RC0_LENGTH                                    0x1
#define _DDRC_RC0_MASK                                      0x1
#define _DDRC_RC1_POSN                                      0x1
#define _DDRC_RC1_POSITION                                  0x1
#define _DDRC_RC1_SIZE                                      0x1
#define _DDRC_RC1_LENGTH                                    0x1
#define _DDRC_RC1_MASK                                      0x2
#define _DDRC_RC2_POSN                                      0x2
#define _DDRC_RC2_POSITION                                  0x2
#define _DDRC_RC2_SIZE                                      0x1
#define _DDRC_RC2_LENGTH                                    0x1
#define _DDRC_RC2_MASK                                      0x4
#define _DDRC_RC3_POSN                                      0x3
#define _DDRC_RC3_POSITION                                  0x3
#define _DDRC_RC3_SIZE                                      0x1
#define _DDRC_RC3_LENGTH                                    0x1
#define _DDRC_RC3_MASK                                      0x8
#define _DDRC_RC4_POSN                                      0x4
#define _DDRC_RC4_POSITION                                  0x4
#define _DDRC_RC4_SIZE                                      0x1
#define _DDRC_RC4_LENGTH                                    0x1
#define _DDRC_RC4_MASK                                      0x10
#define _DDRC_RC5_POSN                                      0x5
#define _DDRC_RC5_POSITION                                  0x5
#define _DDRC_RC5_SIZE                                      0x1
#define _DDRC_RC5_LENGTH                                    0x1
#define _DDRC_RC5_MASK                                      0x20
#define _DDRC_RC6_POSN                                      0x6
#define _DDRC_RC6_POSITION                                  0x6
#define _DDRC_RC6_SIZE                                      0x1
#define _DDRC_RC6_LENGTH                                    0x1
#define _DDRC_RC6_MASK                                      0x40
#define _DDRC_RC7_POSN                                      0x7
#define _DDRC_RC7_POSITION                                  0x7
#define _DDRC_RC7_SIZE                                      0x1
#define _DDRC_RC7_LENGTH                                    0x1
#define _DDRC_RC7_MASK                                      0x80

// Register: TRISD
#define TRISD TRISD
extern volatile unsigned char           TRISD               __at(0xF95);
#ifndef _LIB_BUILD
asm("TRISD equ 0F95h");
#endif
// aliases
extern volatile unsigned char           DDRD                __at(0xF95);
#ifndef _LIB_BUILD
asm("DDRD equ 0F95h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned TRISD0                 :1;
        unsigned TRISD1                 :1;
        unsigned TRISD2                 :1;
    };
    struct {
        unsigned RD0                    :1;
        unsigned RD1                    :1;
        unsigned RD2                    :1;
    };
} TRISDbits_t;
extern volatile TRISDbits_t TRISDbits __at(0xF95);
// bitfield macros
#define _TRISD_TRISD0_POSN                                  0x0
#define _TRISD_TRISD0_POSITION                              0x0
#define _TRISD_TRISD0_SIZE                                  0x1
#define _TRISD_TRISD0_LENGTH                                0x1
#define _TRISD_TRISD0_MASK                                  0x1
#define _TRISD_TRISD1_POSN                                  0x1
#define _TRISD_TRISD1_POSITION                              0x1
#define _TRISD_TRISD1_SIZE                                  0x1
#define _TRISD_TRISD1_LENGTH                                0x1
#define _TRISD_TRISD1_MASK                                  0x2
#define _TRISD_TRISD2_POSN                                  0x2
#define _TRISD_TRISD2_POSITION                              0x2
#define _TRISD_TRISD2_SIZE                                  0x1
#define _TRISD_TRISD2_LENGTH                                0x1
#define _TRISD_TRISD2_MASK                                  0x4
#define _TRISD_RD0_POSN                                     0x0
#define _TRISD_RD0_POSITION                                 0x0
#define _TRISD_RD0_SIZE                                     0x1
#define _TRISD_RD0_LENGTH                                   0x1
#define _TRISD_RD0_MASK                                     0x1
#define _TRISD_RD1_POSN                                     0x1
#define _TRISD_RD1_POSITION                                 0x1
#define _TRISD_RD1_SIZE                                     0x1
#define _TRISD_RD1_LENGTH                                   0x1
#define _TRISD_RD1_MASK                                     0x2
#define _TRISD_RD2_POSN                                     0x2
#define _TRISD_RD2_POSITION                                 0x2
#define _TRISD_RD2_SIZE                                     0x1
#define _TRISD_RD2_LENGTH                                   0x1
#define _TRISD_RD2_MASK                                     0x4
// alias bitfield definitions
typedef union {
    struct {
        unsigned TRISD0                 :1;
        unsigned TRISD1                 :1;
        unsigned TRISD2                 :1;
    };
    struct {
        unsigned RD0                    :1;
        unsigned RD1                    :1;
        unsigned RD2                    :1;
    };
} DDRDbits_t;
extern volatile DDRDbits_t DDRDbits __at(0xF95);
// bitfield macros
#define _DDRD_TRISD0_POSN                                   0x0
#define _DDRD_TRISD0_POSITION                               0x0
#define _DDRD_TRISD0_SIZE                                   0x1
#define _DDRD_TRISD0_LENGTH                                 0x1
#define _DDRD_TRISD0_MASK                                   0x1
#define _DDRD_TRISD1_POSN                                   0x1
#define _DDRD_TRISD1_POSITION                               0x1
#define _DDRD_TRISD1_SIZE                                   0x1
#define _DDRD_TRISD1_LENGTH                                 0x1
#define _DDRD_TRISD1_MASK                                   0x2
#define _DDRD_TRISD2_POSN                                   0x2
#define _DDRD_TRISD2_POSITION                               0x2
#define _DDRD_TRISD2_SIZE                                   0x1
#define _DDRD_TRISD2_LENGTH                                 0x1
#define _DDRD_TRISD2_MASK                                   0x4
#define _DDRD_RD0_POSN                                      0x0
#define _DDRD_RD0_POSITION                                  0x0
#define _DDRD_RD0_SIZE                                      0x1
#define _DDRD_RD0_LENGTH                                    0x1
#define _DDRD_RD0_MASK                                      0x1
#define _DDRD_RD1_POSN                                      0x1
#define _DDRD_RD1_POSITION                                  0x1
#define _DDRD_RD1_SIZE                                      0x1
#define _DDRD_RD1_LENGTH                                    0x1
#define _DDRD_RD1_MASK                                      0x2
#define _DDRD_RD2_POSN                                      0x2
#define _DDRD_RD2_POSITION                                  0x2
#define _DDRD_RD2_SIZE                                      0x1
#define _DDRD_RD2_LENGTH                                    0x1
#define _DDRD_RD2_MASK                                      0x4

// Register: TRISE
#define TRISE TRISE
extern volatile unsigned char           TRISE               __at(0xF96);
#ifndef _LIB_BUILD
asm("TRISE equ 0F96h");
#endif
// aliases
extern volatile unsigned char           DDRE                __at(0xF96);
#ifndef _LIB_BUILD
asm("DDRE equ 0F96h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned TRISE0                 :1;
        unsigned TRISE1                 :1;
        unsigned TRISE2                 :1;
        unsigned TRISE3                 :1;
        unsigned TRISE4                 :1;
        unsigned TRISE5                 :1;
        unsigned TRISE6                 :1;
        unsigned TRISE7                 :1;
    };
    struct {
        unsigned RE0                    :1;
        unsigned RE1                    :1;
        unsigned RE2                    :1;
        unsigned RE3                    :1;
        unsigned RE4                    :1;
        unsigned RE5                    :1;
        unsigned RE6                    :1;
        unsigned RE7                    :1;
    };
} TRISEbits_t;
extern volatile TRISEbits_t TRISEbits __at(0xF96);
// bitfield macros
#define _TRISE_TRISE0_POSN                                  0x0
#define _TRISE_TRISE0_POSITION                              0x0
#define _TRISE_TRISE0_SIZE                                  0x1
#define _TRISE_TRISE0_LENGTH                                0x1
#define _TRISE_TRISE0_MASK                                  0x1
#define _TRISE_TRISE1_POSN                                  0x1
#define _TRISE_TRISE1_POSITION                              0x1
#define _TRISE_TRISE1_SIZE                                  0x1
#define _TRISE_TRISE1_LENGTH                                0x1
#define _TRISE_TRISE1_MASK                                  0x2
#define _TRISE_TRISE2_POSN                                  0x2
#define _TRISE_TRISE2_POSITION                              0x2
#define _TRISE_TRISE2_SIZE                                  0x1
#define _TRISE_TRISE2_LENGTH                                0x1
#define _TRISE_TRISE2_MASK                                  0x4
#define _TRISE_TRISE3_POSN                                  0x3
#define _TRISE_TRISE3_POSITION                              0x3
#define _TRISE_TRISE3_SIZE                                  0x1
#define _TRISE_TRISE3_LENGTH                                0x1
#define _TRISE_TRISE3_MASK                                  0x8
#define _TRISE_TRISE4_POSN                                  0x4
#define _TRISE_TRISE4_POSITION                              0x4
#define _TRISE_TRISE4_SIZE                                  0x1
#define _TRISE_TRISE4_LENGTH                                0x1
#define _TRISE_TRISE4_MASK                                  0x10
#define _TRISE_TRISE5_POSN                                  0x5
#define _TRISE_TRISE5_POSITION                              0x5
#define _TRISE_TRISE5_SIZE                                  0x1
#define _TRISE_TRISE5_LENGTH                                0x1
#define _TRISE_TRISE5_MASK                                  0x20
#define _TRISE_TRISE6_POSN                                  0x6
#define _TRISE_TRISE6_POSITION                              0x6
#define _TRISE_TRISE6_SIZE                                  0x1
#define _TRISE_TRISE6_LENGTH                                0x1
#define _TRISE_TRISE6_MASK                                  0x40
#define _TRISE_TRISE7_POSN                                  0x7
#define _TRISE_TRISE7_POSITION                              0x7
#define _TRISE_TRISE7_SIZE                                  0x1
#define _TRISE_TRISE7_LENGTH                                0x1
#define _TRISE_TRISE7_MASK                                  0x80
#define _TRISE_RE0_POSN                                     0x0
#define _TRISE_RE0_POSITION                                 0x0
#define _TRISE_RE0_SIZE                                     0x1
#define _TRISE_RE0_LENGTH                                   0x1
#define _TRISE_RE0_MASK                                     0x1
#define _TRISE_RE1_POSN                                     0x1
#define _TRISE_RE1_POSITION                                 0x1
#define _TRISE_RE1_SIZE                                     0x1
#define _TRISE_RE1_LENGTH                                   0x1
#define _TRISE_RE1_MASK                                     0x2
#define _TRISE_RE2_POSN                                     0x2
#define _TRISE_RE2_POSITION                                 0x2
#define _TRISE_RE2_SIZE                                     0x1
#define _TRISE_RE2_LENGTH                                   0x1
#define _TRISE_RE2_MASK                                     0x4
#define _TRISE_RE3_POSN                                     0x3
#define _TRISE_RE3_POSITION                                 0x3
#define _TRISE_RE3_SIZE                                     0x1
#define _TRISE_RE3_LENGTH                                   0x1
#define _TRISE_RE3_MASK                                     0x8
#define _TRISE_RE4_POSN                                     0x4
#define _TRISE_RE4_POSITION                                 0x4
#define _TRISE_RE4_SIZE                                     0x1
#define _TRISE_RE4_LENGTH                                   0x1
#define _TRISE_RE4_MASK                                     0x10
#define _TRISE_RE5_POSN                                     0x5
#define _TRISE_RE5_POSITION                                 0x5
#define _TRISE_RE5_SIZE                                     0x1
#define _TRISE_RE5_LENGTH                                   0x1
#define _TRISE_RE5_MASK                                     0x20
#define _TRISE_RE6_POSN                                     0x6
#define _TRISE_RE6_POSITION                                 0x6
#define _TRISE_RE6_SIZE                                     0x1
#define _TRISE_RE6_LENGTH                                   0x1
#define _TRISE_RE6_MASK                                     0x40
#define _TRISE_RE7_POSN                                     0x7
#define _TRISE_RE7_POSITION                                 0x7
#define _TRISE_RE7_SIZE                                     0x1
#define _TRISE_RE7_LENGTH                                   0x1
#define _TRISE_RE7_MASK                                     0x80
// alias bitfield definitions
typedef union {
    struct {
        unsigned TRISE0                 :1;
        unsigned TRISE1                 :1;
        unsigned TRISE2                 :1;
        unsigned TRISE3                 :1;
        unsigned TRISE4                 :1;
        unsigned TRISE5                 :1;
        unsigned TRISE6                 :1;
        unsigned TRISE7                 :1;
    };
    struct {
        unsigned RE0                    :1;
        unsigned RE1                    :1;
        unsigned RE2                    :1;
        unsigned RE3                    :1;
        unsigned RE4                    :1;
        unsigned RE5                    :1;
        unsigned RE6                    :1;
        unsigned RE7                    :1;
    };
} DDREbits_t;
extern volatile DDREbits_t DDREbits __at(0xF96);
// bitfield macros
#define _DDRE_TRISE0_POSN                                   0x0
#define _DDRE_TRISE0_POSITION                               0x0
#define _DDRE_TRISE0_SIZE                                   0x1
#define _DDRE_TRISE0_LENGTH                                 0x1
#define _DDRE_TRISE0_MASK                                   0x1
#define _DDRE_TRISE1_POSN                                   0x1
#define _DDRE_TRISE1_POSITION                               0x1
#define _DDRE_TRISE1_SIZE                                   0x1
#define _DDRE_TRISE1_LENGTH                                 0x1
#define _DDRE_TRISE1_MASK                                   0x2
#define _DDRE_TRISE2_POSN                                   0x2
#define _DDRE_TRISE2_POSITION                               0x2
#define _DDRE_TRISE2_SIZE                                   0x1
#define _DDRE_TRISE2_LENGTH                                 0x1
#define _DDRE_TRISE2_MASK                                   0x4
#define _DDRE_TRISE3_POSN                                   0x3
#define _DDRE_TRISE3_POSITION                               0x3
#define _DDRE_TRISE3_SIZE                                   0x1
#define _DDRE_TRISE3_LENGTH                                 0x1
#define _DDRE_TRISE3_MASK                                   0x8
#define _DDRE_TRISE4_POSN                                   0x4
#define _DDRE_TRISE4_POSITION                               0x4
#define _DDRE_TRISE4_SIZE                                   0x1
#define _DDRE_TRISE4_LENGTH                                 0x1
#define _DDRE_TRISE4_MASK                                   0x10
#define _DDRE_TRISE5_POSN                                   0x5
#define _DDRE_TRISE5_POSITION                               0x5
#define _DDRE_TRISE5_SIZE                                   0x1
#define _DDRE_TRISE5_LENGTH                                 0x1
#define _DDRE_TRISE5_MASK                                   0x20
#define _DDRE_TRISE6_POSN                                   0x6
#define _DDRE_TRISE6_POSITION                               0x6
#define _DDRE_TRISE6_SIZE                                   0x1
#define _DDRE_TRISE6_LENGTH                                 0x1
#define _DDRE_TRISE6_MASK                                   0x40
#define _DDRE_TRISE7_POSN                                   0x7
#define _DDRE_TRISE7_POSITION                               0x7
#define _DDRE_TRISE7_SIZE                                   0x1
#define _DDRE_TRISE7_LENGTH                                 0x1
#define _DDRE_TRISE7_MASK                                   0x80
#define _DDRE_RE0_POSN                                      0x0
#define _DDRE_RE0_POSITION                                  0x0
#define _DDRE_RE0_SIZE                                      0x1
#define _DDRE_RE0_LENGTH                                    0x1
#define _DDRE_RE0_MASK                                      0x1
#define _DDRE_RE1_POSN                                      0x1
#define _DDRE_RE1_POSITION                                  0x1
#define _DDRE_RE1_SIZE                                      0x1
#define _DDRE_RE1_LENGTH                                    0x1
#define _DDRE_RE1_MASK                                      0x2
#define _DDRE_RE2_POSN                                      0x2
#define _DDRE_RE2_POSITION                                  0x2
#define _DDRE_RE2_SIZE                                      0x1
#define _DDRE_RE2_LENGTH                                    0x1
#define _DDRE_RE2_MASK                                      0x4
#define _DDRE_RE3_POSN                                      0x3
#define _DDRE_RE3_POSITION                                  0x3
#define _DDRE_RE3_SIZE                                      0x1
#define _DDRE_RE3_LENGTH                                    0x1
#define _DDRE_RE3_MASK                                      0x8
#define _DDRE_RE4_POSN                                      0x4
#define _DDRE_RE4_POSITION                                  0x4
#define _DDRE_RE4_SIZE                                      0x1
#define _DDRE_RE4_LENGTH                                    0x1
#define _DDRE_RE4_MASK                                      0x10
#define _DDRE_RE5_POSN                                      0x5
#define _DDRE_RE5_POSITION                                  0x5
#define _DDRE_RE5_SIZE                                      0x1
#define _DDRE_RE5_LENGTH                                    0x1
#define _DDRE_RE5_MASK                                      0x20
#define _DDRE_RE6_POSN                                      0x6
#define _DDRE_RE6_POSITION                                  0x6
#define _DDRE_RE6_SIZE                                      0x1
#define _DDRE_RE6_LENGTH                                    0x1
#define _DDRE_RE6_MASK                                      0x40
#define _DDRE_RE7_POSN                                      0x7
#define _DDRE_RE7_POSITION                                  0x7
#define _DDRE_RE7_SIZE                                      0x1
#define _DDRE_RE7_LENGTH                                    0x1
#define _DDRE_RE7_MASK                                      0x80

// Register: TRISF
#define TRISF TRISF
extern volatile unsigned char           TRISF               __at(0xF97);
#ifndef _LIB_BUILD
asm("TRISF equ 0F97h");
#endif
// aliases
extern volatile unsigned char           DDRF                __at(0xF97);
#ifndef _LIB_BUILD
asm("DDRF equ 0F97h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :1;
        unsigned TRISF1                 :1;
        unsigned TRISF2                 :1;
        unsigned TRISF3                 :1;
        unsigned TRISF4                 :1;
        unsigned TRISF5                 :1;
        unsigned TRISF6                 :1;
        unsigned TRISF7                 :1;
    };
    struct {
        unsigned                        :1;
        unsigned RF1                    :1;
        unsigned RF2                    :1;
        unsigned RF3                    :1;
        unsigned RF4                    :1;
        unsigned RF5                    :1;
        unsigned RF6                    :1;
        unsigned RF7                    :1;
    };
} TRISFbits_t;
extern volatile TRISFbits_t TRISFbits __at(0xF97);
// bitfield macros
#define _TRISF_TRISF1_POSN                                  0x1
#define _TRISF_TRISF1_POSITION                              0x1
#define _TRISF_TRISF1_SIZE                                  0x1
#define _TRISF_TRISF1_LENGTH                                0x1
#define _TRISF_TRISF1_MASK                                  0x2
#define _TRISF_TRISF2_POSN                                  0x2
#define _TRISF_TRISF2_POSITION                              0x2
#define _TRISF_TRISF2_SIZE                                  0x1
#define _TRISF_TRISF2_LENGTH                                0x1
#define _TRISF_TRISF2_MASK                                  0x4
#define _TRISF_TRISF3_POSN                                  0x3
#define _TRISF_TRISF3_POSITION                              0x3
#define _TRISF_TRISF3_SIZE                                  0x1
#define _TRISF_TRISF3_LENGTH                                0x1
#define _TRISF_TRISF3_MASK                                  0x8
#define _TRISF_TRISF4_POSN                                  0x4
#define _TRISF_TRISF4_POSITION                              0x4
#define _TRISF_TRISF4_SIZE                                  0x1
#define _TRISF_TRISF4_LENGTH                                0x1
#define _TRISF_TRISF4_MASK                                  0x10
#define _TRISF_TRISF5_POSN                                  0x5
#define _TRISF_TRISF5_POSITION                              0x5
#define _TRISF_TRISF5_SIZE                                  0x1
#define _TRISF_TRISF5_LENGTH                                0x1
#define _TRISF_TRISF5_MASK                                  0x20
#define _TRISF_TRISF6_POSN                                  0x6
#define _TRISF_TRISF6_POSITION                              0x6
#define _TRISF_TRISF6_SIZE                                  0x1
#define _TRISF_TRISF6_LENGTH                                0x1
#define _TRISF_TRISF6_MASK                                  0x40
#define _TRISF_TRISF7_POSN                                  0x7
#define _TRISF_TRISF7_POSITION                              0x7
#define _TRISF_TRISF7_SIZE                                  0x1
#define _TRISF_TRISF7_LENGTH                                0x1
#define _TRISF_TRISF7_MASK                                  0x80
#define _TRISF_RF1_POSN                                     0x1
#define _TRISF_RF1_POSITION                                 0x1
#define _TRISF_RF1_SIZE                                     0x1
#define _TRISF_RF1_LENGTH                                   0x1
#define _TRISF_RF1_MASK                                     0x2
#define _TRISF_RF2_POSN                                     0x2
#define _TRISF_RF2_POSITION                                 0x2
#define _TRISF_RF2_SIZE                                     0x1
#define _TRISF_RF2_LENGTH                                   0x1
#define _TRISF_RF2_MASK                                     0x4
#define _TRISF_RF3_POSN                                     0x3
#define _TRISF_RF3_POSITION                                 0x3
#define _TRISF_RF3_SIZE                                     0x1
#define _TRISF_RF3_LENGTH                                   0x1
#define _TRISF_RF3_MASK                                     0x8
#define _TRISF_RF4_POSN                                     0x4
#define _TRISF_RF4_POSITION                                 0x4
#define _TRISF_RF4_SIZE                                     0x1
#define _TRISF_RF4_LENGTH                                   0x1
#define _TRISF_RF4_MASK                                     0x10
#define _TRISF_RF5_POSN                                     0x5
#define _TRISF_RF5_POSITION                                 0x5
#define _TRISF_RF5_SIZE                                     0x1
#define _TRISF_RF5_LENGTH                                   0x1
#define _TRISF_RF5_MASK                                     0x20
#define _TRISF_RF6_POSN                                     0x6
#define _TRISF_RF6_POSITION                                 0x6
#define _TRISF_RF6_SIZE                                     0x1
#define _TRISF_RF6_LENGTH                                   0x1
#define _TRISF_RF6_MASK                                     0x40
#define _TRISF_RF7_POSN                                     0x7
#define _TRISF_RF7_POSITION                                 0x7
#define _TRISF_RF7_SIZE                                     0x1
#define _TRISF_RF7_LENGTH                                   0x1
#define _TRISF_RF7_MASK                                     0x80
// alias bitfield definitions
typedef union {
    struct {
        unsigned                        :1;
        unsigned TRISF1                 :1;
        unsigned TRISF2                 :1;
        unsigned TRISF3                 :1;
        unsigned TRISF4                 :1;
        unsigned TRISF5                 :1;
        unsigned TRISF6                 :1;
        unsigned TRISF7                 :1;
    };
    struct {
        unsigned                        :1;
        unsigned RF1                    :1;
        unsigned RF2                    :1;
        unsigned RF3                    :1;
        unsigned RF4                    :1;
        unsigned RF5                    :1;
        unsigned RF6                    :1;
        unsigned RF7                    :1;
    };
} DDRFbits_t;
extern volatile DDRFbits_t DDRFbits __at(0xF97);
// bitfield macros
#define _DDRF_TRISF1_POSN                                   0x1
#define _DDRF_TRISF1_POSITION                               0x1
#define _DDRF_TRISF1_SIZE                                   0x1
#define _DDRF_TRISF1_LENGTH                                 0x1
#define _DDRF_TRISF1_MASK                                   0x2
#define _DDRF_TRISF2_POSN                                   0x2
#define _DDRF_TRISF2_POSITION                               0x2
#define _DDRF_TRISF2_SIZE                                   0x1
#define _DDRF_TRISF2_LENGTH                                 0x1
#define _DDRF_TRISF2_MASK                                   0x4
#define _DDRF_TRISF3_POSN                                   0x3
#define _DDRF_TRISF3_POSITION                               0x3
#define _DDRF_TRISF3_SIZE                                   0x1
#define _DDRF_TRISF3_LENGTH                                 0x1
#define _DDRF_TRISF3_MASK                                   0x8
#define _DDRF_TRISF4_POSN                                   0x4
#define _DDRF_TRISF4_POSITION                               0x4
#define _DDRF_TRISF4_SIZE                                   0x1
#define _DDRF_TRISF4_LENGTH                                 0x1
#define _DDRF_TRISF4_MASK                                   0x10
#define _DDRF_TRISF5_POSN                                   0x5
#define _DDRF_TRISF5_POSITION                               0x5
#define _DDRF_TRISF5_SIZE                                   0x1
#define _DDRF_TRISF5_LENGTH                                 0x1
#define _DDRF_TRISF5_MASK                                   0x20
#define _DDRF_TRISF6_POSN                                   0x6
#define _DDRF_TRISF6_POSITION                               0x6
#define _DDRF_TRISF6_SIZE                                   0x1
#define _DDRF_TRISF6_LENGTH                                 0x1
#define _DDRF_TRISF6_MASK                                   0x40
#define _DDRF_TRISF7_POSN                                   0x7
#define _DDRF_TRISF7_POSITION                               0x7
#define _DDRF_TRISF7_SIZE                                   0x1
#define _DDRF_TRISF7_LENGTH                                 0x1
#define _DDRF_TRISF7_MASK                                   0x80
#define _DDRF_RF1_POSN                                      0x1
#define _DDRF_RF1_POSITION                                  0x1
#define _DDRF_RF1_SIZE                                      0x1
#define _DDRF_RF1_LENGTH                                    0x1
#define _DDRF_RF1_MASK                                      0x2
#define _DDRF_RF2_POSN                                      0x2
#define _DDRF_RF2_POSITION                                  0x2
#define _DDRF_RF2_SIZE                                      0x1
#define _DDRF_RF2_LENGTH                                    0x1
#define _DDRF_RF2_MASK                                      0x4
#define _DDRF_RF3_POSN                                      0x3
#define _DDRF_RF3_POSITION                                  0x3
#define _DDRF_RF3_SIZE                                      0x1
#define _DDRF_RF3_LENGTH                                    0x1
#define _DDRF_RF3_MASK                                      0x8
#define _DDRF_RF4_POSN                                      0x4
#define _DDRF_RF4_POSITION                                  0x4
#define _DDRF_RF4_SIZE                                      0x1
#define _DDRF_RF4_LENGTH                                    0x1
#define _DDRF_RF4_MASK                                      0x10
#define _DDRF_RF5_POSN                                      0x5
#define _DDRF_RF5_POSITION                                  0x5
#define _DDRF_RF5_SIZE                                      0x1
#define _DDRF_RF5_LENGTH                                    0x1
#define _DDRF_RF5_MASK                                      0x20
#define _DDRF_RF6_POSN                                      0x6
#define _DDRF_RF6_POSITION                                  0x6
#define _DDRF_RF6_SIZE                                      0x1
#define _DDRF_RF6_LENGTH                                    0x1
#define _DDRF_RF6_MASK                                      0x40
#define _DDRF_RF7_POSN                                      0x7
#define _DDRF_RF7_POSITION                                  0x7
#define _DDRF_RF7_SIZE                                      0x1
#define _DDRF_RF7_LENGTH                                    0x1
#define _DDRF_RF7_MASK                                      0x80

// Register: TRISG
#define TRISG TRISG
extern volatile unsigned char           TRISG               __at(0xF98);
#ifndef _LIB_BUILD
asm("TRISG equ 0F98h");
#endif
// aliases
extern volatile unsigned char           DDRG                __at(0xF98);
#ifndef _LIB_BUILD
asm("DDRG equ 0F98h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned TRISG0                 :1;
        unsigned TRISG1                 :1;
        unsigned TRISG2                 :1;
        unsigned TRISG3                 :1;
        unsigned TRISG4                 :1;
    };
    struct {
        unsigned RG0                    :1;
        unsigned RG1                    :1;
        unsigned RG2                    :1;
        unsigned RG3                    :1;
        unsigned RG4                    :1;
    };
} TRISGbits_t;
extern volatile TRISGbits_t TRISGbits __at(0xF98);
// bitfield macros
#define _TRISG_TRISG0_POSN                                  0x0
#define _TRISG_TRISG0_POSITION                              0x0
#define _TRISG_TRISG0_SIZE                                  0x1
#define _TRISG_TRISG0_LENGTH                                0x1
#define _TRISG_TRISG0_MASK                                  0x1
#define _TRISG_TRISG1_POSN                                  0x1
#define _TRISG_TRISG1_POSITION                              0x1
#define _TRISG_TRISG1_SIZE                                  0x1
#define _TRISG_TRISG1_LENGTH                                0x1
#define _TRISG_TRISG1_MASK                                  0x2
#define _TRISG_TRISG2_POSN                                  0x2
#define _TRISG_TRISG2_POSITION                              0x2
#define _TRISG_TRISG2_SIZE                                  0x1
#define _TRISG_TRISG2_LENGTH                                0x1
#define _TRISG_TRISG2_MASK                                  0x4
#define _TRISG_TRISG3_POSN                                  0x3
#define _TRISG_TRISG3_POSITION                              0x3
#define _TRISG_TRISG3_SIZE                                  0x1
#define _TRISG_TRISG3_LENGTH                                0x1
#define _TRISG_TRISG3_MASK                                  0x8
#define _TRISG_TRISG4_POSN                                  0x4
#define _TRISG_TRISG4_POSITION                              0x4
#define _TRISG_TRISG4_SIZE                                  0x1
#define _TRISG_TRISG4_LENGTH                                0x1
#define _TRISG_TRISG4_MASK                                  0x10
#define _TRISG_RG0_POSN                                     0x0
#define _TRISG_RG0_POSITION                                 0x0
#define _TRISG_RG0_SIZE                                     0x1
#define _TRISG_RG0_LENGTH                                   0x1
#define _TRISG_RG0_MASK                                     0x1
#define _TRISG_RG1_POSN                                     0x1
#define _TRISG_RG1_POSITION                                 0x1
#define _TRISG_RG1_SIZE                                     0x1
#define _TRISG_RG1_LENGTH                                   0x1
#define _TRISG_RG1_MASK                                     0x2
#define _TRISG_RG2_POSN                                     0x2
#define _TRISG_RG2_POSITION                                 0x2
#define _TRISG_RG2_SIZE                                     0x1
#define _TRISG_RG2_LENGTH                                   0x1
#define _TRISG_RG2_MASK                                     0x4
#define _TRISG_RG3_POSN                                     0x3
#define _TRISG_RG3_POSITION                                 0x3
#define _TRISG_RG3_SIZE                                     0x1
#define _TRISG_RG3_LENGTH                                   0x1
#define _TRISG_RG3_MASK                                     0x8
#define _TRISG_RG4_POSN                                     0x4
#define _TRISG_RG4_POSITION                                 0x4
#define _TRISG_RG4_SIZE                                     0x1
#define _TRISG_RG4_LENGTH                                   0x1
#define _TRISG_RG4_MASK                                     0x10
// alias bitfield definitions
typedef union {
    struct {
        unsigned TRISG0                 :1;
        unsigned TRISG1                 :1;
        unsigned TRISG2                 :1;
        unsigned TRISG3                 :1;
        unsigned TRISG4                 :1;
    };
    struct {
        unsigned RG0                    :1;
        unsigned RG1                    :1;
        unsigned RG2                    :1;
        unsigned RG3                    :1;
        unsigned RG4                    :1;
    };
} DDRGbits_t;
extern volatile DDRGbits_t DDRGbits __at(0xF98);
// bitfield macros
#define _DDRG_TRISG0_POSN                                   0x0
#define _DDRG_TRISG0_POSITION                               0x0
#define _DDRG_TRISG0_SIZE                                   0x1
#define _DDRG_TRISG0_LENGTH                                 0x1
#define _DDRG_TRISG0_MASK                                   0x1
#define _DDRG_TRISG1_POSN                                   0x1
#define _DDRG_TRISG1_POSITION                               0x1
#define _DDRG_TRISG1_SIZE                                   0x1
#define _DDRG_TRISG1_LENGTH                                 0x1
#define _DDRG_TRISG1_MASK                                   0x2
#define _DDRG_TRISG2_POSN                                   0x2
#define _DDRG_TRISG2_POSITION                               0x2
#define _DDRG_TRISG2_SIZE                                   0x1
#define _DDRG_TRISG2_LENGTH                                 0x1
#define _DDRG_TRISG2_MASK                                   0x4
#define _DDRG_TRISG3_POSN                                   0x3
#define _DDRG_TRISG3_POSITION                               0x3
#define _DDRG_TRISG3_SIZE                                   0x1
#define _DDRG_TRISG3_LENGTH                                 0x1
#define _DDRG_TRISG3_MASK                                   0x8
#define _DDRG_TRISG4_POSN                                   0x4
#define _DDRG_TRISG4_POSITION                               0x4
#define _DDRG_TRISG4_SIZE                                   0x1
#define _DDRG_TRISG4_LENGTH                                 0x1
#define _DDRG_TRISG4_MASK                                   0x10
#define _DDRG_RG0_POSN                                      0x0
#define _DDRG_RG0_POSITION                                  0x0
#define _DDRG_RG0_SIZE                                      0x1
#define _DDRG_RG0_LENGTH                                    0x1
#define _DDRG_RG0_MASK                                      0x1
#define _DDRG_RG1_POSN                                      0x1
#define _DDRG_RG1_POSITION                                  0x1
#define _DDRG_RG1_SIZE                                      0x1
#define _DDRG_RG1_LENGTH                                    0x1
#define _DDRG_RG1_MASK                                      0x2
#define _DDRG_RG2_POSN                                      0x2
#define _DDRG_RG2_POSITION                                  0x2
#define _DDRG_RG2_SIZE                                      0x1
#define _DDRG_RG2_LENGTH                                    0x1
#define _DDRG_RG2_MASK                                      0x4
#define _DDRG_RG3_POSN                                      0x3
#define _DDRG_RG3_POSITION                                  0x3
#define _DDRG_RG3_SIZE                                      0x1
#define _DDRG_RG3_LENGTH                                    0x1
#define _DDRG_RG3_MASK                                      0x8
#define _DDRG_RG4_POSN                                      0x4
#define _DDRG_RG4_POSITION                                  0x4
#define _DDRG_RG4_SIZE                                      0x1
#define _DDRG_RG4_LENGTH                                    0x1
#define _DDRG_RG4_MASK                                      0x10

// Register: TRISH
#define TRISH TRISH
extern volatile unsigned char           TRISH               __at(0xF99);
#ifndef _LIB_BUILD
asm("TRISH equ 0F99h");
#endif
// aliases
extern volatile unsigned char           DDRH                __at(0xF99);
#ifndef _LIB_BUILD
asm("DDRH equ 0F99h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned TRISH0                 :1;
        unsigned TRISH1                 :1;
        unsigned TRISH2                 :1;
        unsigned TRISH3                 :1;
        unsigned TRISH4                 :1;
        unsigned TRISH5                 :1;
        unsigned TRISH6                 :1;
        unsigned TRISH7                 :1;
    };
    struct {
        unsigned RH0                    :1;
        unsigned RH1                    :1;
        unsigned RH2                    :1;
        unsigned RH3                    :1;
        unsigned RH4                    :1;
        unsigned RH5                    :1;
        unsigned RH6                    :1;
        unsigned RH7                    :1;
    };
} TRISHbits_t;
extern volatile TRISHbits_t TRISHbits __at(0xF99);
// bitfield macros
#define _TRISH_TRISH0_POSN                                  0x0
#define _TRISH_TRISH0_POSITION                              0x0
#define _TRISH_TRISH0_SIZE                                  0x1
#define _TRISH_TRISH0_LENGTH                                0x1
#define _TRISH_TRISH0_MASK                                  0x1
#define _TRISH_TRISH1_POSN                                  0x1
#define _TRISH_TRISH1_POSITION                              0x1
#define _TRISH_TRISH1_SIZE                                  0x1
#define _TRISH_TRISH1_LENGTH                                0x1
#define _TRISH_TRISH1_MASK                                  0x2
#define _TRISH_TRISH2_POSN                                  0x2
#define _TRISH_TRISH2_POSITION                              0x2
#define _TRISH_TRISH2_SIZE                                  0x1
#define _TRISH_TRISH2_LENGTH                                0x1
#define _TRISH_TRISH2_MASK                                  0x4
#define _TRISH_TRISH3_POSN                                  0x3
#define _TRISH_TRISH3_POSITION                              0x3
#define _TRISH_TRISH3_SIZE                                  0x1
#define _TRISH_TRISH3_LENGTH                                0x1
#define _TRISH_TRISH3_MASK                                  0x8
#define _TRISH_TRISH4_POSN                                  0x4
#define _TRISH_TRISH4_POSITION                              0x4
#define _TRISH_TRISH4_SIZE                                  0x1
#define _TRISH_TRISH4_LENGTH                                0x1
#define _TRISH_TRISH4_MASK                                  0x10
#define _TRISH_TRISH5_POSN                                  0x5
#define _TRISH_TRISH5_POSITION                              0x5
#define _TRISH_TRISH5_SIZE                                  0x1
#define _TRISH_TRISH5_LENGTH                                0x1
#define _TRISH_TRISH5_MASK                                  0x20
#define _TRISH_TRISH6_POSN                                  0x6
#define _TRISH_TRISH6_POSITION                              0x6
#define _TRISH_TRISH6_SIZE                                  0x1
#define _TRISH_TRISH6_LENGTH                                0x1
#define _TRISH_TRISH6_MASK                                  0x40
#define _TRISH_TRISH7_POSN                                  0x7
#define _TRISH_TRISH7_POSITION                              0x7
#define _TRISH_TRISH7_SIZE                                  0x1
#define _TRISH_TRISH7_LENGTH                                0x1
#define _TRISH_TRISH7_MASK                                  0x80
#define _TRISH_RH0_POSN                                     0x0
#define _TRISH_RH0_POSITION                                 0x0
#define _TRISH_RH0_SIZE                                     0x1
#define _TRISH_RH0_LENGTH                                   0x1
#define _TRISH_RH0_MASK                                     0x1
#define _TRISH_RH1_POSN                                     0x1
#define _TRISH_RH1_POSITION                                 0x1
#define _TRISH_RH1_SIZE                                     0x1
#define _TRISH_RH1_LENGTH                                   0x1
#define _TRISH_RH1_MASK                                     0x2
#define _TRISH_RH2_POSN                                     0x2
#define _TRISH_RH2_POSITION                                 0x2
#define _TRISH_RH2_SIZE                                     0x1
#define _TRISH_RH2_LENGTH                                   0x1
#define _TRISH_RH2_MASK                                     0x4
#define _TRISH_RH3_POSN                                     0x3
#define _TRISH_RH3_POSITION                                 0x3
#define _TRISH_RH3_SIZE                                     0x1
#define _TRISH_RH3_LENGTH                                   0x1
#define _TRISH_RH3_MASK                                     0x8
#define _TRISH_RH4_POSN                                     0x4
#define _TRISH_RH4_POSITION                                 0x4
#define _TRISH_RH4_SIZE                                     0x1
#define _TRISH_RH4_LENGTH                                   0x1
#define _TRISH_RH4_MASK                                     0x10
#define _TRISH_RH5_POSN                                     0x5
#define _TRISH_RH5_POSITION                                 0x5
#define _TRISH_RH5_SIZE                                     0x1
#define _TRISH_RH5_LENGTH                                   0x1
#define _TRISH_RH5_MASK                                     0x20
#define _TRISH_RH6_POSN                                     0x6
#define _TRISH_RH6_POSITION                                 0x6
#define _TRISH_RH6_SIZE                                     0x1
#define _TRISH_RH6_LENGTH                                   0x1
#define _TRISH_RH6_MASK                                     0x40
#define _TRISH_RH7_POSN                                     0x7
#define _TRISH_RH7_POSITION                                 0x7
#define _TRISH_RH7_SIZE                                     0x1
#define _TRISH_RH7_LENGTH                                   0x1
#define _TRISH_RH7_MASK                                     0x80
// alias bitfield definitions
typedef union {
    struct {
        unsigned TRISH0                 :1;
        unsigned TRISH1                 :1;
        unsigned TRISH2                 :1;
        unsigned TRISH3                 :1;
        unsigned TRISH4                 :1;
        unsigned TRISH5                 :1;
        unsigned TRISH6                 :1;
        unsigned TRISH7                 :1;
    };
    struct {
        unsigned RH0                    :1;
        unsigned RH1                    :1;
        unsigned RH2                    :1;
        unsigned RH3                    :1;
        unsigned RH4                    :1;
        unsigned RH5                    :1;
        unsigned RH6                    :1;
        unsigned RH7                    :1;
    };
} DDRHbits_t;
extern volatile DDRHbits_t DDRHbits __at(0xF99);
// bitfield macros
#define _DDRH_TRISH0_POSN                                   0x0
#define _DDRH_TRISH0_POSITION                               0x0
#define _DDRH_TRISH0_SIZE                                   0x1
#define _DDRH_TRISH0_LENGTH                                 0x1
#define _DDRH_TRISH0_MASK                                   0x1
#define _DDRH_TRISH1_POSN                                   0x1
#define _DDRH_TRISH1_POSITION                               0x1
#define _DDRH_TRISH1_SIZE                                   0x1
#define _DDRH_TRISH1_LENGTH                                 0x1
#define _DDRH_TRISH1_MASK                                   0x2
#define _DDRH_TRISH2_POSN                                   0x2
#define _DDRH_TRISH2_POSITION                               0x2
#define _DDRH_TRISH2_SIZE                                   0x1
#define _DDRH_TRISH2_LENGTH                                 0x1
#define _DDRH_TRISH2_MASK                                   0x4
#define _DDRH_TRISH3_POSN                                   0x3
#define _DDRH_TRISH3_POSITION                               0x3
#define _DDRH_TRISH3_SIZE                                   0x1
#define _DDRH_TRISH3_LENGTH                                 0x1
#define _DDRH_TRISH3_MASK                                   0x8
#define _DDRH_TRISH4_POSN                                   0x4
#define _DDRH_TRISH4_POSITION                               0x4
#define _DDRH_TRISH4_SIZE                                   0x1
#define _DDRH_TRISH4_LENGTH                                 0x1
#define _DDRH_TRISH4_MASK                                   0x10
#define _DDRH_TRISH5_POSN                                   0x5
#define _DDRH_TRISH5_POSITION                               0x5
#define _DDRH_TRISH5_SIZE                                   0x1
#define _DDRH_TRISH5_LENGTH                                 0x1
#define _DDRH_TRISH5_MASK                                   0x20
#define _DDRH_TRISH6_POSN                                   0x6
#define _DDRH_TRISH6_POSITION                               0x6
#define _DDRH_TRISH6_SIZE                                   0x1
#define _DDRH_TRISH6_LENGTH                                 0x1
#define _DDRH_TRISH6_MASK                                   0x40
#define _DDRH_TRISH7_POSN                                   0x7
#define _DDRH_TRISH7_POSITION                               0x7
#define _DDRH_TRISH7_SIZE                                   0x1
#define _DDRH_TRISH7_LENGTH                                 0x1
#define _DDRH_TRISH7_MASK                                   0x80
#define _DDRH_RH0_POSN                                      0x0
#define _DDRH_RH0_POSITION                                  0x0
#define _DDRH_RH0_SIZE                                      0x1
#define _DDRH_RH0_LENGTH                                    0x1
#define _DDRH_RH0_MASK                                      0x1
#define _DDRH_RH1_POSN                                      0x1
#define _DDRH_RH1_POSITION                                  0x1
#define _DDRH_RH1_SIZE                                      0x1
#define _DDRH_RH1_LENGTH                                    0x1
#define _DDRH_RH1_MASK                                      0x2
#define _DDRH_RH2_POSN                                      0x2
#define _DDRH_RH2_POSITION                                  0x2
#define _DDRH_RH2_SIZE                                      0x1
#define _DDRH_RH2_LENGTH                                    0x1
#define _DDRH_RH2_MASK                                      0x4
#define _DDRH_RH3_POSN                                      0x3
#define _DDRH_RH3_POSITION                                  0x3
#define _DDRH_RH3_SIZE                                      0x1
#define _DDRH_RH3_LENGTH                                    0x1
#define _DDRH_RH3_MASK                                      0x8
#define _DDRH_RH4_POSN                                      0x4
#define _DDRH_RH4_POSITION                                  0x4
#define _DDRH_RH4_SIZE                                      0x1
#define _DDRH_RH4_LENGTH                                    0x1
#define _DDRH_RH4_MASK                                      0x10
#define _DDRH_RH5_POSN                                      0x5
#define _DDRH_RH5_POSITION                                  0x5
#define _DDRH_RH5_SIZE                                      0x1
#define _DDRH_RH5_LENGTH                                    0x1
#define _DDRH_RH5_MASK                                      0x20
#define _DDRH_RH6_POSN                                      0x6
#define _DDRH_RH6_POSITION                                  0x6
#define _DDRH_RH6_SIZE                                      0x1
#define _DDRH_RH6_LENGTH                                    0x1
#define _DDRH_RH6_MASK                                      0x40
#define _DDRH_RH7_POSN                                      0x7
#define _DDRH_RH7_POSITION                                  0x7
#define _DDRH_RH7_SIZE                                      0x1
#define _DDRH_RH7_LENGTH                                    0x1
#define _DDRH_RH7_MASK                                      0x80

// Register: TRISJ
#define TRISJ TRISJ
extern volatile unsigned char           TRISJ               __at(0xF9A);
#ifndef _LIB_BUILD
asm("TRISJ equ 0F9Ah");
#endif
// aliases
extern volatile unsigned char           DDRJ                __at(0xF9A);
#ifndef _LIB_BUILD
asm("DDRJ equ 0F9Ah");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :4;
        unsigned TRISJ4                 :1;
        unsigned TRISJ5                 :1;
    };
    struct {
        unsigned                        :4;
        unsigned RJ4                    :1;
        unsigned RJ5                    :1;
    };
} TRISJbits_t;
extern volatile TRISJbits_t TRISJbits __at(0xF9A);
// bitfield macros
#define _TRISJ_TRISJ4_POSN                                  0x4
#define _TRISJ_TRISJ4_POSITION                              0x4
#define _TRISJ_TRISJ4_SIZE                                  0x1
#define _TRISJ_TRISJ4_LENGTH                                0x1
#define _TRISJ_TRISJ4_MASK                                  0x10
#define _TRISJ_TRISJ5_POSN                                  0x5
#define _TRISJ_TRISJ5_POSITION                              0x5
#define _TRISJ_TRISJ5_SIZE                                  0x1
#define _TRISJ_TRISJ5_LENGTH                                0x1
#define _TRISJ_TRISJ5_MASK                                  0x20
#define _TRISJ_RJ4_POSN                                     0x4
#define _TRISJ_RJ4_POSITION                                 0x4
#define _TRISJ_RJ4_SIZE                                     0x1
#define _TRISJ_RJ4_LENGTH                                   0x1
#define _TRISJ_RJ4_MASK                                     0x10
#define _TRISJ_RJ5_POSN                                     0x5
#define _TRISJ_RJ5_POSITION                                 0x5
#define _TRISJ_RJ5_SIZE                                     0x1
#define _TRISJ_RJ5_LENGTH                                   0x1
#define _TRISJ_RJ5_MASK                                     0x20
// alias bitfield definitions
typedef union {
    struct {
        unsigned                        :4;
        unsigned TRISJ4                 :1;
        unsigned TRISJ5                 :1;
    };
    struct {
        unsigned                        :4;
        unsigned RJ4                    :1;
        unsigned RJ5                    :1;
    };
} DDRJbits_t;
extern volatile DDRJbits_t DDRJbits __at(0xF9A);
// bitfield macros
#define _DDRJ_TRISJ4_POSN                                   0x4
#define _DDRJ_TRISJ4_POSITION                               0x4
#define _DDRJ_TRISJ4_SIZE                                   0x1
#define _DDRJ_TRISJ4_LENGTH                                 0x1
#define _DDRJ_TRISJ4_MASK                                   0x10
#define _DDRJ_TRISJ5_POSN                                   0x5
#define _DDRJ_TRISJ5_POSITION                               0x5
#define _DDRJ_TRISJ5_SIZE                                   0x1
#define _DDRJ_TRISJ5_LENGTH                                 0x1
#define _DDRJ_TRISJ5_MASK                                   0x20
#define _DDRJ_RJ4_POSN                                      0x4
#define _DDRJ_RJ4_POSITION                                  0x4
#define _DDRJ_RJ4_SIZE                                      0x1
#define _DDRJ_RJ4_LENGTH                                    0x1
#define _DDRJ_RJ4_MASK                                      0x10
#define _DDRJ_RJ5_POSN                                      0x5
#define _DDRJ_RJ5_POSITION                                  0x5
#define _DDRJ_RJ5_SIZE                                      0x1
#define _DDRJ_RJ5_LENGTH                                    0x1
#define _DDRJ_RJ5_MASK                                      0x20

// Register: OSCTUNE
#define OSCTUNE OSCTUNE
extern volatile unsigned char           OSCTUNE             __at(0xF9B);
#ifndef _LIB_BUILD
asm("OSCTUNE equ 0F9Bh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :4;
        unsigned PPRE                   :1;
        unsigned PPST0                  :1;
        unsigned PLLEN                  :1;
        unsigned PPST1                  :1;
    };
    struct {
        unsigned                        :4;
        unsigned TUN4                   :1;
        unsigned TUN5                   :1;
    };
} OSCTUNEbits_t;
extern volatile OSCTUNEbits_t OSCTUNEbits __at(0xF9B);
// bitfield macros
#define _OSCTUNE_PPRE_POSN                                  0x4
#define _OSCTUNE_PPRE_POSITION                              0x4
#define _OSCTUNE_PPRE_SIZE                                  0x1
#define _OSCTUNE_PPRE_LENGTH                                0x1
#define _OSCTUNE_PPRE_MASK                                  0x10
#define _OSCTUNE_PPST0_POSN                                 0x5
#define _OSCTUNE_PPST0_POSITION                             0x5
#define _OSCTUNE_PPST0_SIZE                                 0x1
#define _OSCTUNE_PPST0_LENGTH                               0x1
#define _OSCTUNE_PPST0_MASK                                 0x20
#define _OSCTUNE_PLLEN_POSN                                 0x6
#define _OSCTUNE_PLLEN_POSITION                             0x6
#define _OSCTUNE_PLLEN_SIZE                                 0x1
#define _OSCTUNE_PLLEN_LENGTH                               0x1
#define _OSCTUNE_PLLEN_MASK                                 0x40
#define _OSCTUNE_PPST1_POSN                                 0x7
#define _OSCTUNE_PPST1_POSITION                             0x7
#define _OSCTUNE_PPST1_SIZE                                 0x1
#define _OSCTUNE_PPST1_LENGTH                               0x1
#define _OSCTUNE_PPST1_MASK                                 0x80
#define _OSCTUNE_TUN4_POSN                                  0x4
#define _OSCTUNE_TUN4_POSITION                              0x4
#define _OSCTUNE_TUN4_SIZE                                  0x1
#define _OSCTUNE_TUN4_LENGTH                                0x1
#define _OSCTUNE_TUN4_MASK                                  0x10
#define _OSCTUNE_TUN5_POSN                                  0x5
#define _OSCTUNE_TUN5_POSITION                              0x5
#define _OSCTUNE_TUN5_SIZE                                  0x1
#define _OSCTUNE_TUN5_LENGTH                                0x1
#define _OSCTUNE_TUN5_MASK                                  0x20

// Register: PIE1
#define PIE1 PIE1
extern volatile unsigned char           PIE1                __at(0xF9D);
#ifndef _LIB_BUILD
asm("PIE1 equ 0F9Dh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned TMR1IE                 :1;
        unsigned TMR2IE                 :1;
        unsigned CCP1IE                 :1;
        unsigned SSP1IE                 :1;
        unsigned TX1IE                  :1;
        unsigned RC1IE                  :1;
        unsigned ADIE                   :1;
    };
    struct {
        unsigned                        :3;
        unsigned SSPIE                  :1;
        unsigned TXIE                   :1;
        unsigned RCIE                   :1;
    };
} PIE1bits_t;
extern volatile PIE1bits_t PIE1bits __at(0xF9D);
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
#define _PIE1_CCP1IE_POSN                                   0x2
#define _PIE1_CCP1IE_POSITION                               0x2
#define _PIE1_CCP1IE_SIZE                                   0x1
#define _PIE1_CCP1IE_LENGTH                                 0x1
#define _PIE1_CCP1IE_MASK                                   0x4
#define _PIE1_SSP1IE_POSN                                   0x3
#define _PIE1_SSP1IE_POSITION                               0x3
#define _PIE1_SSP1IE_SIZE                                   0x1
#define _PIE1_SSP1IE_LENGTH                                 0x1
#define _PIE1_SSP1IE_MASK                                   0x8
#define _PIE1_TX1IE_POSN                                    0x4
#define _PIE1_TX1IE_POSITION                                0x4
#define _PIE1_TX1IE_SIZE                                    0x1
#define _PIE1_TX1IE_LENGTH                                  0x1
#define _PIE1_TX1IE_MASK                                    0x10
#define _PIE1_RC1IE_POSN                                    0x5
#define _PIE1_RC1IE_POSITION                                0x5
#define _PIE1_RC1IE_SIZE                                    0x1
#define _PIE1_RC1IE_LENGTH                                  0x1
#define _PIE1_RC1IE_MASK                                    0x20
#define _PIE1_ADIE_POSN                                     0x6
#define _PIE1_ADIE_POSITION                                 0x6
#define _PIE1_ADIE_SIZE                                     0x1
#define _PIE1_ADIE_LENGTH                                   0x1
#define _PIE1_ADIE_MASK                                     0x40
#define _PIE1_SSPIE_POSN                                    0x3
#define _PIE1_SSPIE_POSITION                                0x3
#define _PIE1_SSPIE_SIZE                                    0x1
#define _PIE1_SSPIE_LENGTH                                  0x1
#define _PIE1_SSPIE_MASK                                    0x8
#define _PIE1_TXIE_POSN                                     0x4
#define _PIE1_TXIE_POSITION                                 0x4
#define _PIE1_TXIE_SIZE                                     0x1
#define _PIE1_TXIE_LENGTH                                   0x1
#define _PIE1_TXIE_MASK                                     0x10
#define _PIE1_RCIE_POSN                                     0x5
#define _PIE1_RCIE_POSITION                                 0x5
#define _PIE1_RCIE_SIZE                                     0x1
#define _PIE1_RCIE_LENGTH                                   0x1
#define _PIE1_RCIE_MASK                                     0x20

// Register: PIR1
#define PIR1 PIR1
extern volatile unsigned char           PIR1                __at(0xF9E);
#ifndef _LIB_BUILD
asm("PIR1 equ 0F9Eh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned TMR1IF                 :1;
        unsigned TMR2IF                 :1;
        unsigned CCP1IF                 :1;
        unsigned SSP1IF                 :1;
        unsigned TX1IF                  :1;
        unsigned RC1IF                  :1;
        unsigned ADIF                   :1;
    };
    struct {
        unsigned                        :4;
        unsigned TXIF                   :1;
        unsigned RCIF                   :1;
    };
    struct {
        unsigned                        :3;
        unsigned SSPIF                  :1;
    };
} PIR1bits_t;
extern volatile PIR1bits_t PIR1bits __at(0xF9E);
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
#define _PIR1_CCP1IF_POSN                                   0x2
#define _PIR1_CCP1IF_POSITION                               0x2
#define _PIR1_CCP1IF_SIZE                                   0x1
#define _PIR1_CCP1IF_LENGTH                                 0x1
#define _PIR1_CCP1IF_MASK                                   0x4
#define _PIR1_SSP1IF_POSN                                   0x3
#define _PIR1_SSP1IF_POSITION                               0x3
#define _PIR1_SSP1IF_SIZE                                   0x1
#define _PIR1_SSP1IF_LENGTH                                 0x1
#define _PIR1_SSP1IF_MASK                                   0x8
#define _PIR1_TX1IF_POSN                                    0x4
#define _PIR1_TX1IF_POSITION                                0x4
#define _PIR1_TX1IF_SIZE                                    0x1
#define _PIR1_TX1IF_LENGTH                                  0x1
#define _PIR1_TX1IF_MASK                                    0x10
#define _PIR1_RC1IF_POSN                                    0x5
#define _PIR1_RC1IF_POSITION                                0x5
#define _PIR1_RC1IF_SIZE                                    0x1
#define _PIR1_RC1IF_LENGTH                                  0x1
#define _PIR1_RC1IF_MASK                                    0x20
#define _PIR1_ADIF_POSN                                     0x6
#define _PIR1_ADIF_POSITION                                 0x6
#define _PIR1_ADIF_SIZE                                     0x1
#define _PIR1_ADIF_LENGTH                                   0x1
#define _PIR1_ADIF_MASK                                     0x40
#define _PIR1_TXIF_POSN                                     0x4
#define _PIR1_TXIF_POSITION                                 0x4
#define _PIR1_TXIF_SIZE                                     0x1
#define _PIR1_TXIF_LENGTH                                   0x1
#define _PIR1_TXIF_MASK                                     0x10
#define _PIR1_RCIF_POSN                                     0x5
#define _PIR1_RCIF_POSITION                                 0x5
#define _PIR1_RCIF_SIZE                                     0x1
#define _PIR1_RCIF_LENGTH                                   0x1
#define _PIR1_RCIF_MASK                                     0x20
#define _PIR1_SSPIF_POSN                                    0x3
#define _PIR1_SSPIF_POSITION                                0x3
#define _PIR1_SSPIF_SIZE                                    0x1
#define _PIR1_SSPIF_LENGTH                                  0x1
#define _PIR1_SSPIF_MASK                                    0x8

// Register: IPR1
#define IPR1 IPR1
extern volatile unsigned char           IPR1                __at(0xF9F);
#ifndef _LIB_BUILD
asm("IPR1 equ 0F9Fh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned TMR1IP                 :1;
        unsigned TMR2IP                 :1;
        unsigned CCP1IP                 :1;
        unsigned SSP1IP                 :1;
        unsigned TX1IP                  :1;
        unsigned RC1IP                  :1;
        unsigned ADIP                   :1;
    };
    struct {
        unsigned                        :3;
        unsigned SSPIP                  :1;
        unsigned TXIP                   :1;
        unsigned RCIP                   :1;
    };
} IPR1bits_t;
extern volatile IPR1bits_t IPR1bits __at(0xF9F);
// bitfield macros
#define _IPR1_TMR1IP_POSN                                   0x0
#define _IPR1_TMR1IP_POSITION                               0x0
#define _IPR1_TMR1IP_SIZE                                   0x1
#define _IPR1_TMR1IP_LENGTH                                 0x1
#define _IPR1_TMR1IP_MASK                                   0x1
#define _IPR1_TMR2IP_POSN                                   0x1
#define _IPR1_TMR2IP_POSITION                               0x1
#define _IPR1_TMR2IP_SIZE                                   0x1
#define _IPR1_TMR2IP_LENGTH                                 0x1
#define _IPR1_TMR2IP_MASK                                   0x2
#define _IPR1_CCP1IP_POSN                                   0x2
#define _IPR1_CCP1IP_POSITION                               0x2
#define _IPR1_CCP1IP_SIZE                                   0x1
#define _IPR1_CCP1IP_LENGTH                                 0x1
#define _IPR1_CCP1IP_MASK                                   0x4
#define _IPR1_SSP1IP_POSN                                   0x3
#define _IPR1_SSP1IP_POSITION                               0x3
#define _IPR1_SSP1IP_SIZE                                   0x1
#define _IPR1_SSP1IP_LENGTH                                 0x1
#define _IPR1_SSP1IP_MASK                                   0x8
#define _IPR1_TX1IP_POSN                                    0x4
#define _IPR1_TX1IP_POSITION                                0x4
#define _IPR1_TX1IP_SIZE                                    0x1
#define _IPR1_TX1IP_LENGTH                                  0x1
#define _IPR1_TX1IP_MASK                                    0x10
#define _IPR1_RC1IP_POSN                                    0x5
#define _IPR1_RC1IP_POSITION                                0x5
#define _IPR1_RC1IP_SIZE                                    0x1
#define _IPR1_RC1IP_LENGTH                                  0x1
#define _IPR1_RC1IP_MASK                                    0x20
#define _IPR1_ADIP_POSN                                     0x6
#define _IPR1_ADIP_POSITION                                 0x6
#define _IPR1_ADIP_SIZE                                     0x1
#define _IPR1_ADIP_LENGTH                                   0x1
#define _IPR1_ADIP_MASK                                     0x40
#define _IPR1_SSPIP_POSN                                    0x3
#define _IPR1_SSPIP_POSITION                                0x3
#define _IPR1_SSPIP_SIZE                                    0x1
#define _IPR1_SSPIP_LENGTH                                  0x1
#define _IPR1_SSPIP_MASK                                    0x8
#define _IPR1_TXIP_POSN                                     0x4
#define _IPR1_TXIP_POSITION                                 0x4
#define _IPR1_TXIP_SIZE                                     0x1
#define _IPR1_TXIP_LENGTH                                   0x1
#define _IPR1_TXIP_MASK                                     0x10
#define _IPR1_RCIP_POSN                                     0x5
#define _IPR1_RCIP_POSITION                                 0x5
#define _IPR1_RCIP_SIZE                                     0x1
#define _IPR1_RCIP_LENGTH                                   0x1
#define _IPR1_RCIP_MASK                                     0x20

// Register: PIE2
#define PIE2 PIE2
extern volatile unsigned char           PIE2                __at(0xFA0);
#ifndef _LIB_BUILD
asm("PIE2 equ 0FA0h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned CCP2IE                 :1;
        unsigned TMR3IE                 :1;
        unsigned                        :1;
        unsigned BCL1IE                 :1;
        unsigned                        :1;
        unsigned ETHIE                  :1;
        unsigned CMIE                   :1;
        unsigned OSCFIE                 :1;
    };
    struct {
        unsigned                        :3;
        unsigned BCLIE                  :1;
    };
} PIE2bits_t;
extern volatile PIE2bits_t PIE2bits __at(0xFA0);
// bitfield macros
#define _PIE2_CCP2IE_POSN                                   0x0
#define _PIE2_CCP2IE_POSITION                               0x0
#define _PIE2_CCP2IE_SIZE                                   0x1
#define _PIE2_CCP2IE_LENGTH                                 0x1
#define _PIE2_CCP2IE_MASK                                   0x1
#define _PIE2_TMR3IE_POSN                                   0x1
#define _PIE2_TMR3IE_POSITION                               0x1
#define _PIE2_TMR3IE_SIZE                                   0x1
#define _PIE2_TMR3IE_LENGTH                                 0x1
#define _PIE2_TMR3IE_MASK                                   0x2
#define _PIE2_BCL1IE_POSN                                   0x3
#define _PIE2_BCL1IE_POSITION                               0x3
#define _PIE2_BCL1IE_SIZE                                   0x1
#define _PIE2_BCL1IE_LENGTH                                 0x1
#define _PIE2_BCL1IE_MASK                                   0x8
#define _PIE2_ETHIE_POSN                                    0x5
#define _PIE2_ETHIE_POSITION                                0x5
#define _PIE2_ETHIE_SIZE                                    0x1
#define _PIE2_ETHIE_LENGTH                                  0x1
#define _PIE2_ETHIE_MASK                                    0x20
#define _PIE2_CMIE_POSN                                     0x6
#define _PIE2_CMIE_POSITION                                 0x6
#define _PIE2_CMIE_SIZE                                     0x1
#define _PIE2_CMIE_LENGTH                                   0x1
#define _PIE2_CMIE_MASK                                     0x40
#define _PIE2_OSCFIE_POSN                                   0x7
#define _PIE2_OSCFIE_POSITION                               0x7
#define _PIE2_OSCFIE_SIZE                                   0x1
#define _PIE2_OSCFIE_LENGTH                                 0x1
#define _PIE2_OSCFIE_MASK                                   0x80
#define _PIE2_BCLIE_POSN                                    0x3
#define _PIE2_BCLIE_POSITION                                0x3
#define _PIE2_BCLIE_SIZE                                    0x1
#define _PIE2_BCLIE_LENGTH                                  0x1
#define _PIE2_BCLIE_MASK                                    0x8

// Register: PIR2
#define PIR2 PIR2
extern volatile unsigned char           PIR2                __at(0xFA1);
#ifndef _LIB_BUILD
asm("PIR2 equ 0FA1h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned CCP2IF                 :1;
        unsigned TMR3IF                 :1;
        unsigned                        :1;
        unsigned BCL1IF                 :1;
        unsigned                        :1;
        unsigned ETHIF                  :1;
        unsigned CMIF                   :1;
        unsigned OSCFIF                 :1;
    };
    struct {
        unsigned                        :3;
        unsigned BCLIF                  :1;
    };
} PIR2bits_t;
extern volatile PIR2bits_t PIR2bits __at(0xFA1);
// bitfield macros
#define _PIR2_CCP2IF_POSN                                   0x0
#define _PIR2_CCP2IF_POSITION                               0x0
#define _PIR2_CCP2IF_SIZE                                   0x1
#define _PIR2_CCP2IF_LENGTH                                 0x1
#define _PIR2_CCP2IF_MASK                                   0x1
#define _PIR2_TMR3IF_POSN                                   0x1
#define _PIR2_TMR3IF_POSITION                               0x1
#define _PIR2_TMR3IF_SIZE                                   0x1
#define _PIR2_TMR3IF_LENGTH                                 0x1
#define _PIR2_TMR3IF_MASK                                   0x2
#define _PIR2_BCL1IF_POSN                                   0x3
#define _PIR2_BCL1IF_POSITION                               0x3
#define _PIR2_BCL1IF_SIZE                                   0x1
#define _PIR2_BCL1IF_LENGTH                                 0x1
#define _PIR2_BCL1IF_MASK                                   0x8
#define _PIR2_ETHIF_POSN                                    0x5
#define _PIR2_ETHIF_POSITION                                0x5
#define _PIR2_ETHIF_SIZE                                    0x1
#define _PIR2_ETHIF_LENGTH                                  0x1
#define _PIR2_ETHIF_MASK                                    0x20
#define _PIR2_CMIF_POSN                                     0x6
#define _PIR2_CMIF_POSITION                                 0x6
#define _PIR2_CMIF_SIZE                                     0x1
#define _PIR2_CMIF_LENGTH                                   0x1
#define _PIR2_CMIF_MASK                                     0x40
#define _PIR2_OSCFIF_POSN                                   0x7
#define _PIR2_OSCFIF_POSITION                               0x7
#define _PIR2_OSCFIF_SIZE                                   0x1
#define _PIR2_OSCFIF_LENGTH                                 0x1
#define _PIR2_OSCFIF_MASK                                   0x80
#define _PIR2_BCLIF_POSN                                    0x3
#define _PIR2_BCLIF_POSITION                                0x3
#define _PIR2_BCLIF_SIZE                                    0x1
#define _PIR2_BCLIF_LENGTH                                  0x1
#define _PIR2_BCLIF_MASK                                    0x8

// Register: IPR2
#define IPR2 IPR2
extern volatile unsigned char           IPR2                __at(0xFA2);
#ifndef _LIB_BUILD
asm("IPR2 equ 0FA2h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned CCP2IP                 :1;
        unsigned TMR3IP                 :1;
        unsigned                        :1;
        unsigned BCL1IP                 :1;
        unsigned                        :1;
        unsigned ETHIP                  :1;
        unsigned CMIP                   :1;
        unsigned OSCFIP                 :1;
    };
    struct {
        unsigned                        :3;
        unsigned BCLIP                  :1;
    };
} IPR2bits_t;
extern volatile IPR2bits_t IPR2bits __at(0xFA2);
// bitfield macros
#define _IPR2_CCP2IP_POSN                                   0x0
#define _IPR2_CCP2IP_POSITION                               0x0
#define _IPR2_CCP2IP_SIZE                                   0x1
#define _IPR2_CCP2IP_LENGTH                                 0x1
#define _IPR2_CCP2IP_MASK                                   0x1
#define _IPR2_TMR3IP_POSN                                   0x1
#define _IPR2_TMR3IP_POSITION                               0x1
#define _IPR2_TMR3IP_SIZE                                   0x1
#define _IPR2_TMR3IP_LENGTH                                 0x1
#define _IPR2_TMR3IP_MASK                                   0x2
#define _IPR2_BCL1IP_POSN                                   0x3
#define _IPR2_BCL1IP_POSITION                               0x3
#define _IPR2_BCL1IP_SIZE                                   0x1
#define _IPR2_BCL1IP_LENGTH                                 0x1
#define _IPR2_BCL1IP_MASK                                   0x8
#define _IPR2_ETHIP_POSN                                    0x5
#define _IPR2_ETHIP_POSITION                                0x5
#define _IPR2_ETHIP_SIZE                                    0x1
#define _IPR2_ETHIP_LENGTH                                  0x1
#define _IPR2_ETHIP_MASK                                    0x20
#define _IPR2_CMIP_POSN                                     0x6
#define _IPR2_CMIP_POSITION                                 0x6
#define _IPR2_CMIP_SIZE                                     0x1
#define _IPR2_CMIP_LENGTH                                   0x1
#define _IPR2_CMIP_MASK                                     0x40
#define _IPR2_OSCFIP_POSN                                   0x7
#define _IPR2_OSCFIP_POSITION                               0x7
#define _IPR2_OSCFIP_SIZE                                   0x1
#define _IPR2_OSCFIP_LENGTH                                 0x1
#define _IPR2_OSCFIP_MASK                                   0x80
#define _IPR2_BCLIP_POSN                                    0x3
#define _IPR2_BCLIP_POSITION                                0x3
#define _IPR2_BCLIP_SIZE                                    0x1
#define _IPR2_BCLIP_LENGTH                                  0x1
#define _IPR2_BCLIP_MASK                                    0x8

// Register: PIE3
#define PIE3 PIE3
extern volatile unsigned char           PIE3                __at(0xFA3);
#ifndef _LIB_BUILD
asm("PIE3 equ 0FA3h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned CCP3IE                 :1;
        unsigned CCP4IE                 :1;
        unsigned CCP5IE                 :1;
        unsigned TMR4IE                 :1;
        unsigned TX2IE                  :1;
        unsigned RC2IE                  :1;
    };
    struct {
        unsigned RXB0IE                 :1;
        unsigned RXB1IE                 :1;
        unsigned TXB0IE                 :1;
        unsigned TXB1IE                 :1;
        unsigned TXB2IE                 :1;
    };
    struct {
        unsigned                        :1;
        unsigned RXBNIE                 :1;
        unsigned                        :2;
        unsigned TXBNIE                 :1;
    };
} PIE3bits_t;
extern volatile PIE3bits_t PIE3bits __at(0xFA3);
// bitfield macros
#define _PIE3_CCP3IE_POSN                                   0x0
#define _PIE3_CCP3IE_POSITION                               0x0
#define _PIE3_CCP3IE_SIZE                                   0x1
#define _PIE3_CCP3IE_LENGTH                                 0x1
#define _PIE3_CCP3IE_MASK                                   0x1
#define _PIE3_CCP4IE_POSN                                   0x1
#define _PIE3_CCP4IE_POSITION                               0x1
#define _PIE3_CCP4IE_SIZE                                   0x1
#define _PIE3_CCP4IE_LENGTH                                 0x1
#define _PIE3_CCP4IE_MASK                                   0x2
#define _PIE3_CCP5IE_POSN                                   0x2
#define _PIE3_CCP5IE_POSITION                               0x2
#define _PIE3_CCP5IE_SIZE                                   0x1
#define _PIE3_CCP5IE_LENGTH                                 0x1
#define _PIE3_CCP5IE_MASK                                   0x4
#define _PIE3_TMR4IE_POSN                                   0x3
#define _PIE3_TMR4IE_POSITION                               0x3
#define _PIE3_TMR4IE_SIZE                                   0x1
#define _PIE3_TMR4IE_LENGTH                                 0x1
#define _PIE3_TMR4IE_MASK                                   0x8
#define _PIE3_TX2IE_POSN                                    0x4
#define _PIE3_TX2IE_POSITION                                0x4
#define _PIE3_TX2IE_SIZE                                    0x1
#define _PIE3_TX2IE_LENGTH                                  0x1
#define _PIE3_TX2IE_MASK                                    0x10
#define _PIE3_RC2IE_POSN                                    0x5
#define _PIE3_RC2IE_POSITION                                0x5
#define _PIE3_RC2IE_SIZE                                    0x1
#define _PIE3_RC2IE_LENGTH                                  0x1
#define _PIE3_RC2IE_MASK                                    0x20
#define _PIE3_RXB0IE_POSN                                   0x0
#define _PIE3_RXB0IE_POSITION                               0x0
#define _PIE3_RXB0IE_SIZE                                   0x1
#define _PIE3_RXB0IE_LENGTH                                 0x1
#define _PIE3_RXB0IE_MASK                                   0x1
#define _PIE3_RXB1IE_POSN                                   0x1
#define _PIE3_RXB1IE_POSITION                               0x1
#define _PIE3_RXB1IE_SIZE                                   0x1
#define _PIE3_RXB1IE_LENGTH                                 0x1
#define _PIE3_RXB1IE_MASK                                   0x2
#define _PIE3_TXB0IE_POSN                                   0x2
#define _PIE3_TXB0IE_POSITION                               0x2
#define _PIE3_TXB0IE_SIZE                                   0x1
#define _PIE3_TXB0IE_LENGTH                                 0x1
#define _PIE3_TXB0IE_MASK                                   0x4
#define _PIE3_TXB1IE_POSN                                   0x3
#define _PIE3_TXB1IE_POSITION                               0x3
#define _PIE3_TXB1IE_SIZE                                   0x1
#define _PIE3_TXB1IE_LENGTH                                 0x1
#define _PIE3_TXB1IE_MASK                                   0x8
#define _PIE3_TXB2IE_POSN                                   0x4
#define _PIE3_TXB2IE_POSITION                               0x4
#define _PIE3_TXB2IE_SIZE                                   0x1
#define _PIE3_TXB2IE_LENGTH                                 0x1
#define _PIE3_TXB2IE_MASK                                   0x10
#define _PIE3_RXBNIE_POSN                                   0x1
#define _PIE3_RXBNIE_POSITION                               0x1
#define _PIE3_RXBNIE_SIZE                                   0x1
#define _PIE3_RXBNIE_LENGTH                                 0x1
#define _PIE3_RXBNIE_MASK                                   0x2
#define _PIE3_TXBNIE_POSN                                   0x4
#define _PIE3_TXBNIE_POSITION                               0x4
#define _PIE3_TXBNIE_SIZE                                   0x1
#define _PIE3_TXBNIE_LENGTH                                 0x1
#define _PIE3_TXBNIE_MASK                                   0x10

// Register: PIR3
#define PIR3 PIR3
extern volatile unsigned char           PIR3                __at(0xFA4);
#ifndef _LIB_BUILD
asm("PIR3 equ 0FA4h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned CCP3IF                 :1;
        unsigned CCP4IF                 :1;
        unsigned CCP5IF                 :1;
        unsigned TMR4IF                 :1;
        unsigned TX2IF                  :1;
        unsigned RC2IF                  :1;
    };
    struct {
        unsigned                        :1;
        unsigned RXBNIF                 :1;
        unsigned                        :2;
        unsigned TXBNIF                 :1;
    };
} PIR3bits_t;
extern volatile PIR3bits_t PIR3bits __at(0xFA4);
// bitfield macros
#define _PIR3_CCP3IF_POSN                                   0x0
#define _PIR3_CCP3IF_POSITION                               0x0
#define _PIR3_CCP3IF_SIZE                                   0x1
#define _PIR3_CCP3IF_LENGTH                                 0x1
#define _PIR3_CCP3IF_MASK                                   0x1
#define _PIR3_CCP4IF_POSN                                   0x1
#define _PIR3_CCP4IF_POSITION                               0x1
#define _PIR3_CCP4IF_SIZE                                   0x1
#define _PIR3_CCP4IF_LENGTH                                 0x1
#define _PIR3_CCP4IF_MASK                                   0x2
#define _PIR3_CCP5IF_POSN                                   0x2
#define _PIR3_CCP5IF_POSITION                               0x2
#define _PIR3_CCP5IF_SIZE                                   0x1
#define _PIR3_CCP5IF_LENGTH                                 0x1
#define _PIR3_CCP5IF_MASK                                   0x4
#define _PIR3_TMR4IF_POSN                                   0x3
#define _PIR3_TMR4IF_POSITION                               0x3
#define _PIR3_TMR4IF_SIZE                                   0x1
#define _PIR3_TMR4IF_LENGTH                                 0x1
#define _PIR3_TMR4IF_MASK                                   0x8
#define _PIR3_TX2IF_POSN                                    0x4
#define _PIR3_TX2IF_POSITION                                0x4
#define _PIR3_TX2IF_SIZE                                    0x1
#define _PIR3_TX2IF_LENGTH                                  0x1
#define _PIR3_TX2IF_MASK                                    0x10
#define _PIR3_RC2IF_POSN                                    0x5
#define _PIR3_RC2IF_POSITION                                0x5
#define _PIR3_RC2IF_SIZE                                    0x1
#define _PIR3_RC2IF_LENGTH                                  0x1
#define _PIR3_RC2IF_MASK                                    0x20
#define _PIR3_RXBNIF_POSN                                   0x1
#define _PIR3_RXBNIF_POSITION                               0x1
#define _PIR3_RXBNIF_SIZE                                   0x1
#define _PIR3_RXBNIF_LENGTH                                 0x1
#define _PIR3_RXBNIF_MASK                                   0x2
#define _PIR3_TXBNIF_POSN                                   0x4
#define _PIR3_TXBNIF_POSITION                               0x4
#define _PIR3_TXBNIF_SIZE                                   0x1
#define _PIR3_TXBNIF_LENGTH                                 0x1
#define _PIR3_TXBNIF_MASK                                   0x10

// Register: IPR3
#define IPR3 IPR3
extern volatile unsigned char           IPR3                __at(0xFA5);
#ifndef _LIB_BUILD
asm("IPR3 equ 0FA5h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned CCP3IP                 :1;
        unsigned CCP4IP                 :1;
        unsigned CCP5IP                 :1;
        unsigned TMR4IP                 :1;
        unsigned TX2IP                  :1;
        unsigned RC2IP                  :1;
    };
    struct {
        unsigned                        :1;
        unsigned RXBNIP                 :1;
        unsigned                        :2;
        unsigned TXBNIP                 :1;
    };
} IPR3bits_t;
extern volatile IPR3bits_t IPR3bits __at(0xFA5);
// bitfield macros
#define _IPR3_CCP3IP_POSN                                   0x0
#define _IPR3_CCP3IP_POSITION                               0x0
#define _IPR3_CCP3IP_SIZE                                   0x1
#define _IPR3_CCP3IP_LENGTH                                 0x1
#define _IPR3_CCP3IP_MASK                                   0x1
#define _IPR3_CCP4IP_POSN                                   0x1
#define _IPR3_CCP4IP_POSITION                               0x1
#define _IPR3_CCP4IP_SIZE                                   0x1
#define _IPR3_CCP4IP_LENGTH                                 0x1
#define _IPR3_CCP4IP_MASK                                   0x2
#define _IPR3_CCP5IP_POSN                                   0x2
#define _IPR3_CCP5IP_POSITION                               0x2
#define _IPR3_CCP5IP_SIZE                                   0x1
#define _IPR3_CCP5IP_LENGTH                                 0x1
#define _IPR3_CCP5IP_MASK                                   0x4
#define _IPR3_TMR4IP_POSN                                   0x3
#define _IPR3_TMR4IP_POSITION                               0x3
#define _IPR3_TMR4IP_SIZE                                   0x1
#define _IPR3_TMR4IP_LENGTH                                 0x1
#define _IPR3_TMR4IP_MASK                                   0x8
#define _IPR3_TX2IP_POSN                                    0x4
#define _IPR3_TX2IP_POSITION                                0x4
#define _IPR3_TX2IP_SIZE                                    0x1
#define _IPR3_TX2IP_LENGTH                                  0x1
#define _IPR3_TX2IP_MASK                                    0x10
#define _IPR3_RC2IP_POSN                                    0x5
#define _IPR3_RC2IP_POSITION                                0x5
#define _IPR3_RC2IP_SIZE                                    0x1
#define _IPR3_RC2IP_LENGTH                                  0x1
#define _IPR3_RC2IP_MASK                                    0x20
#define _IPR3_RXBNIP_POSN                                   0x1
#define _IPR3_RXBNIP_POSITION                               0x1
#define _IPR3_RXBNIP_SIZE                                   0x1
#define _IPR3_RXBNIP_LENGTH                                 0x1
#define _IPR3_RXBNIP_MASK                                   0x2
#define _IPR3_TXBNIP_POSN                                   0x4
#define _IPR3_TXBNIP_POSITION                               0x4
#define _IPR3_TXBNIP_SIZE                                   0x1
#define _IPR3_TXBNIP_LENGTH                                 0x1
#define _IPR3_TXBNIP_MASK                                   0x10

// Register: EECON1
#define EECON1 EECON1
extern volatile unsigned char           EECON1              __at(0xFA6);
#ifndef _LIB_BUILD
asm("EECON1 equ 0FA6h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :1;
        unsigned WR                     :1;
        unsigned WREN                   :1;
        unsigned WRERR                  :1;
        unsigned FREE                   :1;
    };
} EECON1bits_t;
extern volatile EECON1bits_t EECON1bits __at(0xFA6);
// bitfield macros
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
#define _EECON1_FREE_POSN                                   0x4
#define _EECON1_FREE_POSITION                               0x4
#define _EECON1_FREE_SIZE                                   0x1
#define _EECON1_FREE_LENGTH                                 0x1
#define _EECON1_FREE_MASK                                   0x10

// Register: EECON2
#define EECON2 EECON2
extern volatile unsigned char           EECON2              __at(0xFA7);
#ifndef _LIB_BUILD
asm("EECON2 equ 0FA7h");
#endif

// Register: RCSTA1
#define RCSTA1 RCSTA1
extern volatile unsigned char           RCSTA1              __at(0xFAB);
#ifndef _LIB_BUILD
asm("RCSTA1 equ 0FABh");
#endif
// aliases
extern volatile unsigned char           RCSTA               __at(0xFAB);
#ifndef _LIB_BUILD
asm("RCSTA equ 0FABh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned RX9D                   :1;
        unsigned OERR                   :1;
        unsigned FERR                   :1;
        unsigned ADDEN                  :1;
        unsigned CREN                   :1;
        unsigned SREN                   :1;
        unsigned RX9                    :1;
        unsigned SPEN                   :1;
    };
    struct {
        unsigned RCD8                   :1;
        unsigned                        :5;
        unsigned RC9                    :1;
    };
    struct {
        unsigned                        :6;
        unsigned NOT_RC8                :1;
    };
    struct {
        unsigned                        :6;
        unsigned nRC8                   :1;
    };
    struct {
        unsigned                        :6;
        unsigned RC8_9                  :1;
    };
    struct {
        unsigned RX9D1                  :1;
        unsigned OERR1                  :1;
        unsigned FERR1                  :1;
        unsigned ADDEN1                 :1;
        unsigned CREN1                  :1;
        unsigned SREN1                  :1;
        unsigned RX91                   :1;
        unsigned SPEN1                  :1;
    };
    struct {
        unsigned                        :5;
        unsigned SRENA                  :1;
    };
} RCSTA1bits_t;
extern volatile RCSTA1bits_t RCSTA1bits __at(0xFAB);
// bitfield macros
#define _RCSTA1_RX9D_POSN                                   0x0
#define _RCSTA1_RX9D_POSITION                               0x0
#define _RCSTA1_RX9D_SIZE                                   0x1
#define _RCSTA1_RX9D_LENGTH                                 0x1
#define _RCSTA1_RX9D_MASK                                   0x1
#define _RCSTA1_OERR_POSN                                   0x1
#define _RCSTA1_OERR_POSITION                               0x1
#define _RCSTA1_OERR_SIZE                                   0x1
#define _RCSTA1_OERR_LENGTH                                 0x1
#define _RCSTA1_OERR_MASK                                   0x2
#define _RCSTA1_FERR_POSN                                   0x2
#define _RCSTA1_FERR_POSITION                               0x2
#define _RCSTA1_FERR_SIZE                                   0x1
#define _RCSTA1_FERR_LENGTH                                 0x1
#define _RCSTA1_FERR_MASK                                   0x4
#define _RCSTA1_ADDEN_POSN                                  0x3
#define _RCSTA1_ADDEN_POSITION                              0x3
#define _RCSTA1_ADDEN_SIZE                                  0x1
#define _RCSTA1_ADDEN_LENGTH                                0x1
#define _RCSTA1_ADDEN_MASK                                  0x8
#define _RCSTA1_CREN_POSN                                   0x4
#define _RCSTA1_CREN_POSITION                               0x4
#define _RCSTA1_CREN_SIZE                                   0x1
#define _RCSTA1_CREN_LENGTH                                 0x1
#define _RCSTA1_CREN_MASK                                   0x10
#define _RCSTA1_SREN_POSN                                   0x5
#define _RCSTA1_SREN_POSITION                               0x5
#define _RCSTA1_SREN_SIZE                                   0x1
#define _RCSTA1_SREN_LENGTH                                 0x1
#define _RCSTA1_SREN_MASK                                   0x20
#define _RCSTA1_RX9_POSN                                    0x6
#define _RCSTA1_RX9_POSITION                                0x6
#define _RCSTA1_RX9_SIZE                                    0x1
#define _RCSTA1_RX9_LENGTH                                  0x1
#define _RCSTA1_RX9_MASK                                    0x40
#define _RCSTA1_SPEN_POSN                                   0x7
#define _RCSTA1_SPEN_POSITION                               0x7
#define _RCSTA1_SPEN_SIZE                                   0x1
#define _RCSTA1_SPEN_LENGTH                                 0x1
#define _RCSTA1_SPEN_MASK                                   0x80
#define _RCSTA1_RCD8_POSN                                   0x0
#define _RCSTA1_RCD8_POSITION                               0x0
#define _RCSTA1_RCD8_SIZE                                   0x1
#define _RCSTA1_RCD8_LENGTH                                 0x1
#define _RCSTA1_RCD8_MASK                                   0x1
#define _RCSTA1_RC9_POSN                                    0x6
#define _RCSTA1_RC9_POSITION                                0x6
#define _RCSTA1_RC9_SIZE                                    0x1
#define _RCSTA1_RC9_LENGTH                                  0x1
#define _RCSTA1_RC9_MASK                                    0x40
#define _RCSTA1_NOT_RC8_POSN                                0x6
#define _RCSTA1_NOT_RC8_POSITION                            0x6
#define _RCSTA1_NOT_RC8_SIZE                                0x1
#define _RCSTA1_NOT_RC8_LENGTH                              0x1
#define _RCSTA1_NOT_RC8_MASK                                0x40
#define _RCSTA1_nRC8_POSN                                   0x6
#define _RCSTA1_nRC8_POSITION                               0x6
#define _RCSTA1_nRC8_SIZE                                   0x1
#define _RCSTA1_nRC8_LENGTH                                 0x1
#define _RCSTA1_nRC8_MASK                                   0x40
#define _RCSTA1_RC8_9_POSN                                  0x6
#define _RCSTA1_RC8_9_POSITION                              0x6
#define _RCSTA1_RC8_9_SIZE                                  0x1
#define _RCSTA1_RC8_9_LENGTH                                0x1
#define _RCSTA1_RC8_9_MASK                                  0x40
#define _RCSTA1_RX9D1_POSN                                  0x0
#define _RCSTA1_RX9D1_POSITION                              0x0
#define _RCSTA1_RX9D1_SIZE                                  0x1
#define _RCSTA1_RX9D1_LENGTH                                0x1
#define _RCSTA1_RX9D1_MASK                                  0x1
#define _RCSTA1_OERR1_POSN                                  0x1
#define _RCSTA1_OERR1_POSITION                              0x1
#define _RCSTA1_OERR1_SIZE                                  0x1
#define _RCSTA1_OERR1_LENGTH                                0x1
#define _RCSTA1_OERR1_MASK                                  0x2
#define _RCSTA1_FERR1_POSN                                  0x2
#define _RCSTA1_FERR1_POSITION                              0x2
#define _RCSTA1_FERR1_SIZE                                  0x1
#define _RCSTA1_FERR1_LENGTH                                0x1
#define _RCSTA1_FERR1_MASK                                  0x4
#define _RCSTA1_ADDEN1_POSN                                 0x3
#define _RCSTA1_ADDEN1_POSITION                             0x3
#define _RCSTA1_ADDEN1_SIZE                                 0x1
#define _RCSTA1_ADDEN1_LENGTH                               0x1
#define _RCSTA1_ADDEN1_MASK                                 0x8
#define _RCSTA1_CREN1_POSN                                  0x4
#define _RCSTA1_CREN1_POSITION                              0x4
#define _RCSTA1_CREN1_SIZE                                  0x1
#define _RCSTA1_CREN1_LENGTH                                0x1
#define _RCSTA1_CREN1_MASK                                  0x10
#define _RCSTA1_SREN1_POSN                                  0x5
#define _RCSTA1_SREN1_POSITION                              0x5
#define _RCSTA1_SREN1_SIZE                                  0x1
#define _RCSTA1_SREN1_LENGTH                                0x1
#define _RCSTA1_SREN1_MASK                                  0x20
#define _RCSTA1_RX91_POSN                                   0x6
#define _RCSTA1_RX91_POSITION                               0x6
#define _RCSTA1_RX91_SIZE                                   0x1
#define _RCSTA1_RX91_LENGTH                                 0x1
#define _RCSTA1_RX91_MASK                                   0x40
#define _RCSTA1_SPEN1_POSN                                  0x7
#define _RCSTA1_SPEN1_POSITION                              0x7
#define _RCSTA1_SPEN1_SIZE                                  0x1
#define _RCSTA1_SPEN1_LENGTH                                0x1
#define _RCSTA1_SPEN1_MASK                                  0x80
#define _RCSTA1_SRENA_POSN                                  0x5
#define _RCSTA1_SRENA_POSITION                              0x5
#define _RCSTA1_SRENA_SIZE                                  0x1
#define _RCSTA1_SRENA_LENGTH                                0x1
#define _RCSTA1_SRENA_MASK                                  0x20
// alias bitfield definitions
typedef union {
    struct {
        unsigned RX9D                   :1;
        unsigned OERR                   :1;
        unsigned FERR                   :1;
        unsigned ADDEN                  :1;
        unsigned CREN                   :1;
        unsigned SREN                   :1;
        unsigned RX9                    :1;
        unsigned SPEN                   :1;
    };
    struct {
        unsigned RCD8                   :1;
        unsigned                        :5;
        unsigned RC9                    :1;
    };
    struct {
        unsigned                        :6;
        unsigned NOT_RC8                :1;
    };
    struct {
        unsigned                        :6;
        unsigned nRC8                   :1;
    };
    struct {
        unsigned                        :6;
        unsigned RC8_9                  :1;
    };
    struct {
        unsigned RX9D1                  :1;
        unsigned OERR1                  :1;
        unsigned FERR1                  :1;
        unsigned ADDEN1                 :1;
        unsigned CREN1                  :1;
        unsigned SREN1                  :1;
        unsigned RX91                   :1;
        unsigned SPEN1                  :1;
    };
    struct {
        unsigned                        :5;
        unsigned SRENA                  :1;
    };
} RCSTAbits_t;
extern volatile RCSTAbits_t RCSTAbits __at(0xFAB);
// bitfield macros
#define _RCSTA_RX9D_POSN                                    0x0
#define _RCSTA_RX9D_POSITION                                0x0
#define _RCSTA_RX9D_SIZE                                    0x1
#define _RCSTA_RX9D_LENGTH                                  0x1
#define _RCSTA_RX9D_MASK                                    0x1
#define _RCSTA_OERR_POSN                                    0x1
#define _RCSTA_OERR_POSITION                                0x1
#define _RCSTA_OERR_SIZE                                    0x1
#define _RCSTA_OERR_LENGTH                                  0x1
#define _RCSTA_OERR_MASK                                    0x2
#define _RCSTA_FERR_POSN                                    0x2
#define _RCSTA_FERR_POSITION                                0x2
#define _RCSTA_FERR_SIZE                                    0x1
#define _RCSTA_FERR_LENGTH                                  0x1
#define _RCSTA_FERR_MASK                                    0x4
#define _RCSTA_ADDEN_POSN                                   0x3
#define _RCSTA_ADDEN_POSITION                               0x3
#define _RCSTA_ADDEN_SIZE                                   0x1
#define _RCSTA_ADDEN_LENGTH                                 0x1
#define _RCSTA_ADDEN_MASK                                   0x8
#define _RCSTA_CREN_POSN                                    0x4
#define _RCSTA_CREN_POSITION                                0x4
#define _RCSTA_CREN_SIZE                                    0x1
#define _RCSTA_CREN_LENGTH                                  0x1
#define _RCSTA_CREN_MASK                                    0x10
#define _RCSTA_SREN_POSN                                    0x5
#define _RCSTA_SREN_POSITION                                0x5
#define _RCSTA_SREN_SIZE                                    0x1
#define _RCSTA_SREN_LENGTH                                  0x1
#define _RCSTA_SREN_MASK                                    0x20
#define _RCSTA_RX9_POSN                                     0x6
#define _RCSTA_RX9_POSITION                                 0x6
#define _RCSTA_RX9_SIZE                                     0x1
#define _RCSTA_RX9_LENGTH                                   0x1
#define _RCSTA_RX9_MASK                                     0x40
#define _RCSTA_SPEN_POSN                                    0x7
#define _RCSTA_SPEN_POSITION                                0x7
#define _RCSTA_SPEN_SIZE                                    0x1
#define _RCSTA_SPEN_LENGTH                                  0x1
#define _RCSTA_SPEN_MASK                                    0x80
#define _RCSTA_RCD8_POSN                                    0x0
#define _RCSTA_RCD8_POSITION                                0x0
#define _RCSTA_RCD8_SIZE                                    0x1
#define _RCSTA_RCD8_LENGTH                                  0x1
#define _RCSTA_RCD8_MASK                                    0x1
#define _RCSTA_RC9_POSN                                     0x6
#define _RCSTA_RC9_POSITION                                 0x6
#define _RCSTA_RC9_SIZE                                     0x1
#define _RCSTA_RC9_LENGTH                                   0x1
#define _RCSTA_RC9_MASK                                     0x40
#define _RCSTA_NOT_RC8_POSN                                 0x6
#define _RCSTA_NOT_RC8_POSITION                             0x6
#define _RCSTA_NOT_RC8_SIZE                                 0x1
#define _RCSTA_NOT_RC8_LENGTH                               0x1
#define _RCSTA_NOT_RC8_MASK                                 0x40
#define _RCSTA_nRC8_POSN                                    0x6
#define _RCSTA_nRC8_POSITION                                0x6
#define _RCSTA_nRC8_SIZE                                    0x1
#define _RCSTA_nRC8_LENGTH                                  0x1
#define _RCSTA_nRC8_MASK                                    0x40
#define _RCSTA_RC8_9_POSN                                   0x6
#define _RCSTA_RC8_9_POSITION                               0x6
#define _RCSTA_RC8_9_SIZE                                   0x1
#define _RCSTA_RC8_9_LENGTH                                 0x1
#define _RCSTA_RC8_9_MASK                                   0x40
#define _RCSTA_RX9D1_POSN                                   0x0
#define _RCSTA_RX9D1_POSITION                               0x0
#define _RCSTA_RX9D1_SIZE                                   0x1
#define _RCSTA_RX9D1_LENGTH                                 0x1
#define _RCSTA_RX9D1_MASK                                   0x1
#define _RCSTA_OERR1_POSN                                   0x1
#define _RCSTA_OERR1_POSITION                               0x1
#define _RCSTA_OERR1_SIZE                                   0x1
#define _RCSTA_OERR1_LENGTH                                 0x1
#define _RCSTA_OERR1_MASK                                   0x2
#define _RCSTA_FERR1_POSN                                   0x2
#define _RCSTA_FERR1_POSITION                               0x2
#define _RCSTA_FERR1_SIZE                                   0x1
#define _RCSTA_FERR1_LENGTH                                 0x1
#define _RCSTA_FERR1_MASK                                   0x4
#define _RCSTA_ADDEN1_POSN                                  0x3
#define _RCSTA_ADDEN1_POSITION                              0x3
#define _RCSTA_ADDEN1_SIZE                                  0x1
#define _RCSTA_ADDEN1_LENGTH                                0x1
#define _RCSTA_ADDEN1_MASK                                  0x8
#define _RCSTA_CREN1_POSN                                   0x4
#define _RCSTA_CREN1_POSITION                               0x4
#define _RCSTA_CREN1_SIZE                                   0x1
#define _RCSTA_CREN1_LENGTH                                 0x1
#define _RCSTA_CREN1_MASK                                   0x10
#define _RCSTA_SREN1_POSN                                   0x5
#define _RCSTA_SREN1_POSITION                               0x5
#define _RCSTA_SREN1_SIZE                                   0x1
#define _RCSTA_SREN1_LENGTH                                 0x1
#define _RCSTA_SREN1_MASK                                   0x20
#define _RCSTA_RX91_POSN                                    0x6
#define _RCSTA_RX91_POSITION                                0x6
#define _RCSTA_RX91_SIZE                                    0x1
#define _RCSTA_RX91_LENGTH                                  0x1
#define _RCSTA_RX91_MASK                                    0x40
#define _RCSTA_SPEN1_POSN                                   0x7
#define _RCSTA_SPEN1_POSITION                               0x7
#define _RCSTA_SPEN1_SIZE                                   0x1
#define _RCSTA_SPEN1_LENGTH                                 0x1
#define _RCSTA_SPEN1_MASK                                   0x80
#define _RCSTA_SRENA_POSN                                   0x5
#define _RCSTA_SRENA_POSITION                               0x5
#define _RCSTA_SRENA_SIZE                                   0x1
#define _RCSTA_SRENA_LENGTH                                 0x1
#define _RCSTA_SRENA_MASK                                   0x20

// Register: TXSTA1
#define TXSTA1 TXSTA1
extern volatile unsigned char           TXSTA1              __at(0xFAC);
#ifndef _LIB_BUILD
asm("TXSTA1 equ 0FACh");
#endif
// aliases
extern volatile unsigned char           TXSTA               __at(0xFAC);
#ifndef _LIB_BUILD
asm("TXSTA equ 0FACh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned TX9D                   :1;
        unsigned TRMT                   :1;
        unsigned BRGH                   :1;
        unsigned SENDB                  :1;
        unsigned SYNC                   :1;
        unsigned TXEN                   :1;
        unsigned TX9                    :1;
        unsigned CSRC                   :1;
    };
    struct {
        unsigned TXD8                   :1;
        unsigned                        :5;
        unsigned TX8_9                  :1;
    };
    struct {
        unsigned                        :6;
        unsigned NOT_TX8                :1;
    };
    struct {
        unsigned                        :6;
        unsigned nTX8                   :1;
    };
    struct {
        unsigned TX9D1                  :1;
        unsigned TRMT1                  :1;
        unsigned BRGH1                  :1;
        unsigned SENDB1                 :1;
        unsigned SYNC1                  :1;
        unsigned TXEN1                  :1;
        unsigned TX91                   :1;
        unsigned CSRC1                  :1;
    };
} TXSTA1bits_t;
extern volatile TXSTA1bits_t TXSTA1bits __at(0xFAC);
// bitfield macros
#define _TXSTA1_TX9D_POSN                                   0x0
#define _TXSTA1_TX9D_POSITION                               0x0
#define _TXSTA1_TX9D_SIZE                                   0x1
#define _TXSTA1_TX9D_LENGTH                                 0x1
#define _TXSTA1_TX9D_MASK                                   0x1
#define _TXSTA1_TRMT_POSN                                   0x1
#define _TXSTA1_TRMT_POSITION                               0x1
#define _TXSTA1_TRMT_SIZE                                   0x1
#define _TXSTA1_TRMT_LENGTH                                 0x1
#define _TXSTA1_TRMT_MASK                                   0x2
#define _TXSTA1_BRGH_POSN                                   0x2
#define _TXSTA1_BRGH_POSITION                               0x2
#define _TXSTA1_BRGH_SIZE                                   0x1
#define _TXSTA1_BRGH_LENGTH                                 0x1
#define _TXSTA1_BRGH_MASK                                   0x4
#define _TXSTA1_SENDB_POSN                                  0x3
#define _TXSTA1_SENDB_POSITION                              0x3
#define _TXSTA1_SENDB_SIZE                                  0x1
#define _TXSTA1_SENDB_LENGTH                                0x1
#define _TXSTA1_SENDB_MASK                                  0x8
#define _TXSTA1_SYNC_POSN                                   0x4
#define _TXSTA1_SYNC_POSITION                               0x4
#define _TXSTA1_SYNC_SIZE                                   0x1
#define _TXSTA1_SYNC_LENGTH                                 0x1
#define _TXSTA1_SYNC_MASK                                   0x10
#define _TXSTA1_TXEN_POSN                                   0x5
#define _TXSTA1_TXEN_POSITION                               0x5
#define _TXSTA1_TXEN_SIZE                                   0x1
#define _TXSTA1_TXEN_LENGTH                                 0x1
#define _TXSTA1_TXEN_MASK                                   0x20
#define _TXSTA1_TX9_POSN                                    0x6
#define _TXSTA1_TX9_POSITION                                0x6
#define _TXSTA1_TX9_SIZE                                    0x1
#define _TXSTA1_TX9_LENGTH                                  0x1
#define _TXSTA1_TX9_MASK                                    0x40
#define _TXSTA1_CSRC_POSN                                   0x7
#define _TXSTA1_CSRC_POSITION                               0x7
#define _TXSTA1_CSRC_SIZE                                   0x1
#define _TXSTA1_CSRC_LENGTH                                 0x1
#define _TXSTA1_CSRC_MASK                                   0x80
#define _TXSTA1_TXD8_POSN                                   0x0
#define _TXSTA1_TXD8_POSITION                               0x0
#define _TXSTA1_TXD8_SIZE                                   0x1
#define _TXSTA1_TXD8_LENGTH                                 0x1
#define _TXSTA1_TXD8_MASK                                   0x1
#define _TXSTA1_TX8_9_POSN                                  0x6
#define _TXSTA1_TX8_9_POSITION                              0x6
#define _TXSTA1_TX8_9_SIZE                                  0x1
#define _TXSTA1_TX8_9_LENGTH                                0x1
#define _TXSTA1_TX8_9_MASK                                  0x40
#define _TXSTA1_NOT_TX8_POSN                                0x6
#define _TXSTA1_NOT_TX8_POSITION                            0x6
#define _TXSTA1_NOT_TX8_SIZE                                0x1
#define _TXSTA1_NOT_TX8_LENGTH                              0x1
#define _TXSTA1_NOT_TX8_MASK                                0x40
#define _TXSTA1_nTX8_POSN                                   0x6
#define _TXSTA1_nTX8_POSITION                               0x6
#define _TXSTA1_nTX8_SIZE                                   0x1
#define _TXSTA1_nTX8_LENGTH                                 0x1
#define _TXSTA1_nTX8_MASK                                   0x40
#define _TXSTA1_TX9D1_POSN                                  0x0
#define _TXSTA1_TX9D1_POSITION                              0x0
#define _TXSTA1_TX9D1_SIZE                                  0x1
#define _TXSTA1_TX9D1_LENGTH                                0x1
#define _TXSTA1_TX9D1_MASK                                  0x1
#define _TXSTA1_TRMT1_POSN                                  0x1
#define _TXSTA1_TRMT1_POSITION                              0x1
#define _TXSTA1_TRMT1_SIZE                                  0x1
#define _TXSTA1_TRMT1_LENGTH                                0x1
#define _TXSTA1_TRMT1_MASK                                  0x2
#define _TXSTA1_BRGH1_POSN                                  0x2
#define _TXSTA1_BRGH1_POSITION                              0x2
#define _TXSTA1_BRGH1_SIZE                                  0x1
#define _TXSTA1_BRGH1_LENGTH                                0x1
#define _TXSTA1_BRGH1_MASK                                  0x4
#define _TXSTA1_SENDB1_POSN                                 0x3
#define _TXSTA1_SENDB1_POSITION                             0x3
#define _TXSTA1_SENDB1_SIZE                                 0x1
#define _TXSTA1_SENDB1_LENGTH                               0x1
#define _TXSTA1_SENDB1_MASK                                 0x8
#define _TXSTA1_SYNC1_POSN                                  0x4
#define _TXSTA1_SYNC1_POSITION                              0x4
#define _TXSTA1_SYNC1_SIZE                                  0x1
#define _TXSTA1_SYNC1_LENGTH                                0x1
#define _TXSTA1_SYNC1_MASK                                  0x10
#define _TXSTA1_TXEN1_POSN                                  0x5
#define _TXSTA1_TXEN1_POSITION                              0x5
#define _TXSTA1_TXEN1_SIZE                                  0x1
#define _TXSTA1_TXEN1_LENGTH                                0x1
#define _TXSTA1_TXEN1_MASK                                  0x20
#define _TXSTA1_TX91_POSN                                   0x6
#define _TXSTA1_TX91_POSITION                               0x6
#define _TXSTA1_TX91_SIZE                                   0x1
#define _TXSTA1_TX91_LENGTH                                 0x1
#define _TXSTA1_TX91_MASK                                   0x40
#define _TXSTA1_CSRC1_POSN                                  0x7
#define _TXSTA1_CSRC1_POSITION                              0x7
#define _TXSTA1_CSRC1_SIZE                                  0x1
#define _TXSTA1_CSRC1_LENGTH                                0x1
#define _TXSTA1_CSRC1_MASK                                  0x80
// alias bitfield definitions
typedef union {
    struct {
        unsigned TX9D                   :1;
        unsigned TRMT                   :1;
        unsigned BRGH                   :1;
        unsigned SENDB                  :1;
        unsigned SYNC                   :1;
        unsigned TXEN                   :1;
        unsigned TX9                    :1;
        unsigned CSRC                   :1;
    };
    struct {
        unsigned TXD8                   :1;
        unsigned                        :5;
        unsigned TX8_9                  :1;
    };
    struct {
        unsigned                        :6;
        unsigned NOT_TX8                :1;
    };
    struct {
        unsigned                        :6;
        unsigned nTX8                   :1;
    };
    struct {
        unsigned TX9D1                  :1;
        unsigned TRMT1                  :1;
        unsigned BRGH1                  :1;
        unsigned SENDB1                 :1;
        unsigned SYNC1                  :1;
        unsigned TXEN1                  :1;
        unsigned TX91                   :1;
        unsigned CSRC1                  :1;
    };
} TXSTAbits_t;
extern volatile TXSTAbits_t TXSTAbits __at(0xFAC);
// bitfield macros
#define _TXSTA_TX9D_POSN                                    0x0
#define _TXSTA_TX9D_POSITION                                0x0
#define _TXSTA_TX9D_SIZE                                    0x1
#define _TXSTA_TX9D_LENGTH                                  0x1
#define _TXSTA_TX9D_MASK                                    0x1
#define _TXSTA_TRMT_POSN                                    0x1
#define _TXSTA_TRMT_POSITION                                0x1
#define _TXSTA_TRMT_SIZE                                    0x1
#define _TXSTA_TRMT_LENGTH                                  0x1
#define _TXSTA_TRMT_MASK                                    0x2
#define _TXSTA_BRGH_POSN                                    0x2
#define _TXSTA_BRGH_POSITION                                0x2
#define _TXSTA_BRGH_SIZE                                    0x1
#define _TXSTA_BRGH_LENGTH                                  0x1
#define _TXSTA_BRGH_MASK                                    0x4
#define _TXSTA_SENDB_POSN                                   0x3
#define _TXSTA_SENDB_POSITION                               0x3
#define _TXSTA_SENDB_SIZE                                   0x1
#define _TXSTA_SENDB_LENGTH                                 0x1
#define _TXSTA_SENDB_MASK                                   0x8
#define _TXSTA_SYNC_POSN                                    0x4
#define _TXSTA_SYNC_POSITION                                0x4
#define _TXSTA_SYNC_SIZE                                    0x1
#define _TXSTA_SYNC_LENGTH                                  0x1
#define _TXSTA_SYNC_MASK                                    0x10
#define _TXSTA_TXEN_POSN                                    0x5
#define _TXSTA_TXEN_POSITION                                0x5
#define _TXSTA_TXEN_SIZE                                    0x1
#define _TXSTA_TXEN_LENGTH                                  0x1
#define _TXSTA_TXEN_MASK                                    0x20
#define _TXSTA_TX9_POSN                                     0x6
#define _TXSTA_TX9_POSITION                                 0x6
#define _TXSTA_TX9_SIZE                                     0x1
#define _TXSTA_TX9_LENGTH                                   0x1
#define _TXSTA_TX9_MASK                                     0x40
#define _TXSTA_CSRC_POSN                                    0x7
#define _TXSTA_CSRC_POSITION                                0x7
#define _TXSTA_CSRC_SIZE                                    0x1
#define _TXSTA_CSRC_LENGTH                                  0x1
#define _TXSTA_CSRC_MASK                                    0x80
#define _TXSTA_TXD8_POSN                                    0x0
#define _TXSTA_TXD8_POSITION                                0x0
#define _TXSTA_TXD8_SIZE                                    0x1
#define _TXSTA_TXD8_LENGTH                                  0x1
#define _TXSTA_TXD8_MASK                                    0x1
#define _TXSTA_TX8_9_POSN                                   0x6
#define _TXSTA_TX8_9_POSITION                               0x6
#define _TXSTA_TX8_9_SIZE                                   0x1
#define _TXSTA_TX8_9_LENGTH                                 0x1
#define _TXSTA_TX8_9_MASK                                   0x40
#define _TXSTA_NOT_TX8_POSN                                 0x6
#define _TXSTA_NOT_TX8_POSITION                             0x6
#define _TXSTA_NOT_TX8_SIZE                                 0x1
#define _TXSTA_NOT_TX8_LENGTH                               0x1
#define _TXSTA_NOT_TX8_MASK                                 0x40
#define _TXSTA_nTX8_POSN                                    0x6
#define _TXSTA_nTX8_POSITION                                0x6
#define _TXSTA_nTX8_SIZE                                    0x1
#define _TXSTA_nTX8_LENGTH                                  0x1
#define _TXSTA_nTX8_MASK                                    0x40
#define _TXSTA_TX9D1_POSN                                   0x0
#define _TXSTA_TX9D1_POSITION                               0x0
#define _TXSTA_TX9D1_SIZE                                   0x1
#define _TXSTA_TX9D1_LENGTH                                 0x1
#define _TXSTA_TX9D1_MASK                                   0x1
#define _TXSTA_TRMT1_POSN                                   0x1
#define _TXSTA_TRMT1_POSITION                               0x1
#define _TXSTA_TRMT1_SIZE                                   0x1
#define _TXSTA_TRMT1_LENGTH                                 0x1
#define _TXSTA_TRMT1_MASK                                   0x2
#define _TXSTA_BRGH1_POSN                                   0x2
#define _TXSTA_BRGH1_POSITION                               0x2
#define _TXSTA_BRGH1_SIZE                                   0x1
#define _TXSTA_BRGH1_LENGTH                                 0x1
#define _TXSTA_BRGH1_MASK                                   0x4
#define _TXSTA_SENDB1_POSN                                  0x3
#define _TXSTA_SENDB1_POSITION                              0x3
#define _TXSTA_SENDB1_SIZE                                  0x1
#define _TXSTA_SENDB1_LENGTH                                0x1
#define _TXSTA_SENDB1_MASK                                  0x8
#define _TXSTA_SYNC1_POSN                                   0x4
#define _TXSTA_SYNC1_POSITION                               0x4
#define _TXSTA_SYNC1_SIZE                                   0x1
#define _TXSTA_SYNC1_LENGTH                                 0x1
#define _TXSTA_SYNC1_MASK                                   0x10
#define _TXSTA_TXEN1_POSN                                   0x5
#define _TXSTA_TXEN1_POSITION                               0x5
#define _TXSTA_TXEN1_SIZE                                   0x1
#define _TXSTA_TXEN1_LENGTH                                 0x1
#define _TXSTA_TXEN1_MASK                                   0x20
#define _TXSTA_TX91_POSN                                    0x6
#define _TXSTA_TX91_POSITION                                0x6
#define _TXSTA_TX91_SIZE                                    0x1
#define _TXSTA_TX91_LENGTH                                  0x1
#define _TXSTA_TX91_MASK                                    0x40
#define _TXSTA_CSRC1_POSN                                   0x7
#define _TXSTA_CSRC1_POSITION                               0x7
#define _TXSTA_CSRC1_SIZE                                   0x1
#define _TXSTA_CSRC1_LENGTH                                 0x1
#define _TXSTA_CSRC1_MASK                                   0x80

// Register: TXREG1
#define TXREG1 TXREG1
extern volatile unsigned char           TXREG1              __at(0xFAD);
#ifndef _LIB_BUILD
asm("TXREG1 equ 0FADh");
#endif
// aliases
extern volatile unsigned char           TXREG               __at(0xFAD);
#ifndef _LIB_BUILD
asm("TXREG equ 0FADh");
#endif

// Register: RCREG1
#define RCREG1 RCREG1
extern volatile unsigned char           RCREG1              __at(0xFAE);
#ifndef _LIB_BUILD
asm("RCREG1 equ 0FAEh");
#endif
// aliases
extern volatile unsigned char           RCREG               __at(0xFAE);
#ifndef _LIB_BUILD
asm("RCREG equ 0FAEh");
#endif

// Register: SPBRG1
#define SPBRG1 SPBRG1
extern volatile unsigned char           SPBRG1              __at(0xFAF);
#ifndef _LIB_BUILD
asm("SPBRG1 equ 0FAFh");
#endif
// aliases
extern volatile unsigned char           SPBRG               __at(0xFAF);
#ifndef _LIB_BUILD
asm("SPBRG equ 0FAFh");
#endif

// Register: T3CON
#define T3CON T3CON
extern volatile unsigned char           T3CON               __at(0xFB1);
#ifndef _LIB_BUILD
asm("T3CON equ 0FB1h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :2;
        unsigned NOT_T3SYNC             :1;
    };
    struct {
        unsigned TMR3ON                 :1;
        unsigned TMR3CS                 :1;
        unsigned nT3SYNC                :1;
        unsigned T3CCP1                 :1;
        unsigned T3CKPS                 :2;
        unsigned T3CCP2                 :1;
        unsigned RD16                   :1;
    };
    struct {
        unsigned                        :2;
        unsigned T3SYNC                 :1;
        unsigned                        :1;
        unsigned T3CKPS0                :1;
        unsigned T3CKPS1                :1;
    };
    struct {
        unsigned                        :2;
        unsigned T3INSYNC               :1;
    };
    struct {
        unsigned                        :3;
        unsigned SOSCEN3                :1;
        unsigned                        :3;
        unsigned RD163                  :1;
    };
    struct {
        unsigned                        :7;
        unsigned T3RD16                 :1;
    };
} T3CONbits_t;
extern volatile T3CONbits_t T3CONbits __at(0xFB1);
// bitfield macros
#define _T3CON_NOT_T3SYNC_POSN                              0x2
#define _T3CON_NOT_T3SYNC_POSITION                          0x2
#define _T3CON_NOT_T3SYNC_SIZE                              0x1
#define _T3CON_NOT_T3SYNC_LENGTH                            0x1
#define _T3CON_NOT_T3SYNC_MASK                              0x4
#define _T3CON_TMR3ON_POSN                                  0x0
#define _T3CON_TMR3ON_POSITION                              0x0
#define _T3CON_TMR3ON_SIZE                                  0x1
#define _T3CON_TMR3ON_LENGTH                                0x1
#define _T3CON_TMR3ON_MASK                                  0x1
#define _T3CON_TMR3CS_POSN                                  0x1
#define _T3CON_TMR3CS_POSITION                              0x1
#define _T3CON_TMR3CS_SIZE                                  0x1
#define _T3CON_TMR3CS_LENGTH                                0x1
#define _T3CON_TMR3CS_MASK                                  0x2
#define _T3CON_nT3SYNC_POSN                                 0x2
#define _T3CON_nT3SYNC_POSITION                             0x2
#define _T3CON_nT3SYNC_SIZE                                 0x1
#define _T3CON_nT3SYNC_LENGTH                               0x1
#define _T3CON_nT3SYNC_MASK                                 0x4
#define _T3CON_T3CCP1_POSN                                  0x3
#define _T3CON_T3CCP1_POSITION                              0x3
#define _T3CON_T3CCP1_SIZE                                  0x1
#define _T3CON_T3CCP1_LENGTH                                0x1
#define _T3CON_T3CCP1_MASK                                  0x8
#define _T3CON_T3CKPS_POSN                                  0x4
#define _T3CON_T3CKPS_POSITION                              0x4
#define _T3CON_T3CKPS_SIZE                                  0x2
#define _T3CON_T3CKPS_LENGTH                                0x2
#define _T3CON_T3CKPS_MASK                                  0x30
#define _T3CON_T3CCP2_POSN                                  0x6
#define _T3CON_T3CCP2_POSITION                              0x6
#define _T3CON_T3CCP2_SIZE                                  0x1
#define _T3CON_T3CCP2_LENGTH                                0x1
#define _T3CON_T3CCP2_MASK                                  0x40
#define _T3CON_RD16_POSN                                    0x7
#define _T3CON_RD16_POSITION                                0x7
#define _T3CON_RD16_SIZE                                    0x1
#define _T3CON_RD16_LENGTH                                  0x1
#define _T3CON_RD16_MASK                                    0x80
#define _T3CON_T3SYNC_POSN                                  0x2
#define _T3CON_T3SYNC_POSITION                              0x2
#define _T3CON_T3SYNC_SIZE                                  0x1
#define _T3CON_T3SYNC_LENGTH                                0x1
#define _T3CON_T3SYNC_MASK                                  0x4
#define _T3CON_T3CKPS0_POSN                                 0x4
#define _T3CON_T3CKPS0_POSITION                             0x4
#define _T3CON_T3CKPS0_SIZE                                 0x1
#define _T3CON_T3CKPS0_LENGTH                               0x1
#define _T3CON_T3CKPS0_MASK                                 0x10
#define _T3CON_T3CKPS1_POSN                                 0x5
#define _T3CON_T3CKPS1_POSITION                             0x5
#define _T3CON_T3CKPS1_SIZE                                 0x1
#define _T3CON_T3CKPS1_LENGTH                               0x1
#define _T3CON_T3CKPS1_MASK                                 0x20
#define _T3CON_T3INSYNC_POSN                                0x2
#define _T3CON_T3INSYNC_POSITION                            0x2
#define _T3CON_T3INSYNC_SIZE                                0x1
#define _T3CON_T3INSYNC_LENGTH                              0x1
#define _T3CON_T3INSYNC_MASK                                0x4
#define _T3CON_SOSCEN3_POSN                                 0x3
#define _T3CON_SOSCEN3_POSITION                             0x3
#define _T3CON_SOSCEN3_SIZE                                 0x1
#define _T3CON_SOSCEN3_LENGTH                               0x1
#define _T3CON_SOSCEN3_MASK                                 0x8
#define _T3CON_RD163_POSN                                   0x7
#define _T3CON_RD163_POSITION                               0x7
#define _T3CON_RD163_SIZE                                   0x1
#define _T3CON_RD163_LENGTH                                 0x1
#define _T3CON_RD163_MASK                                   0x80
#define _T3CON_T3RD16_POSN                                  0x7
#define _T3CON_T3RD16_POSITION                              0x7
#define _T3CON_T3RD16_SIZE                                  0x1
#define _T3CON_T3RD16_LENGTH                                0x1
#define _T3CON_T3RD16_MASK                                  0x80

// Register: TMR3
#define TMR3 TMR3
extern volatile unsigned short          TMR3                __at(0xFB2);
#ifndef _LIB_BUILD
asm("TMR3 equ 0FB2h");
#endif

// Register: TMR3L
#define TMR3L TMR3L
extern volatile unsigned char           TMR3L               __at(0xFB2);
#ifndef _LIB_BUILD
asm("TMR3L equ 0FB2h");
#endif

// Register: TMR3H
#define TMR3H TMR3H
extern volatile unsigned char           TMR3H               __at(0xFB3);
#ifndef _LIB_BUILD
asm("TMR3H equ 0FB3h");
#endif

// Register: CMCON
#define CMCON CMCON
extern volatile unsigned char           CMCON               __at(0xFB4);
#ifndef _LIB_BUILD
asm("CMCON equ 0FB4h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned CM                     :3;
        unsigned CIS                    :1;
        unsigned C1INV                  :1;
        unsigned C2INV                  :1;
        unsigned C1OUT                  :1;
        unsigned C2OUT                  :1;
    };
    struct {
        unsigned CM0                    :1;
        unsigned CM1                    :1;
        unsigned CM2                    :1;
    };
    struct {
        unsigned CMEN0                  :1;
        unsigned CMEN1                  :1;
        unsigned CMEN2                  :1;
    };
} CMCONbits_t;
extern volatile CMCONbits_t CMCONbits __at(0xFB4);
// bitfield macros
#define _CMCON_CM_POSN                                      0x0
#define _CMCON_CM_POSITION                                  0x0
#define _CMCON_CM_SIZE                                      0x3
#define _CMCON_CM_LENGTH                                    0x3
#define _CMCON_CM_MASK                                      0x7
#define _CMCON_CIS_POSN                                     0x3
#define _CMCON_CIS_POSITION                                 0x3
#define _CMCON_CIS_SIZE                                     0x1
#define _CMCON_CIS_LENGTH                                   0x1
#define _CMCON_CIS_MASK                                     0x8
#define _CMCON_C1INV_POSN                                   0x4
#define _CMCON_C1INV_POSITION                               0x4
#define _CMCON_C1INV_SIZE                                   0x1
#define _CMCON_C1INV_LENGTH                                 0x1
#define _CMCON_C1INV_MASK                                   0x10
#define _CMCON_C2INV_POSN                                   0x5
#define _CMCON_C2INV_POSITION                               0x5
#define _CMCON_C2INV_SIZE                                   0x1
#define _CMCON_C2INV_LENGTH                                 0x1
#define _CMCON_C2INV_MASK                                   0x20
#define _CMCON_C1OUT_POSN                                   0x6
#define _CMCON_C1OUT_POSITION                               0x6
#define _CMCON_C1OUT_SIZE                                   0x1
#define _CMCON_C1OUT_LENGTH                                 0x1
#define _CMCON_C1OUT_MASK                                   0x40
#define _CMCON_C2OUT_POSN                                   0x7
#define _CMCON_C2OUT_POSITION                               0x7
#define _CMCON_C2OUT_SIZE                                   0x1
#define _CMCON_C2OUT_LENGTH                                 0x1
#define _CMCON_C2OUT_MASK                                   0x80
#define _CMCON_CM0_POSN                                     0x0
#define _CMCON_CM0_POSITION                                 0x0
#define _CMCON_CM0_SIZE                                     0x1
#define _CMCON_CM0_LENGTH                                   0x1
#define _CMCON_CM0_MASK                                     0x1
#define _CMCON_CM1_POSN                                     0x1
#define _CMCON_CM1_POSITION                                 0x1
#define _CMCON_CM1_SIZE                                     0x1
#define _CMCON_CM1_LENGTH                                   0x1
#define _CMCON_CM1_MASK                                     0x2
#define _CMCON_CM2_POSN                                     0x2
#define _CMCON_CM2_POSITION                                 0x2
#define _CMCON_CM2_SIZE                                     0x1
#define _CMCON_CM2_LENGTH                                   0x1
#define _CMCON_CM2_MASK                                     0x4
#define _CMCON_CMEN0_POSN                                   0x0
#define _CMCON_CMEN0_POSITION                               0x0
#define _CMCON_CMEN0_SIZE                                   0x1
#define _CMCON_CMEN0_LENGTH                                 0x1
#define _CMCON_CMEN0_MASK                                   0x1
#define _CMCON_CMEN1_POSN                                   0x1
#define _CMCON_CMEN1_POSITION                               0x1
#define _CMCON_CMEN1_SIZE                                   0x1
#define _CMCON_CMEN1_LENGTH                                 0x1
#define _CMCON_CMEN1_MASK                                   0x2
#define _CMCON_CMEN2_POSN                                   0x2
#define _CMCON_CMEN2_POSITION                               0x2
#define _CMCON_CMEN2_SIZE                                   0x1
#define _CMCON_CMEN2_LENGTH                                 0x1
#define _CMCON_CMEN2_MASK                                   0x4

// Register: CVRCON
#define CVRCON CVRCON
extern volatile unsigned char           CVRCON              __at(0xFB5);
#ifndef _LIB_BUILD
asm("CVRCON equ 0FB5h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned CVR                    :4;
        unsigned CVRSS                  :1;
        unsigned CVRR                   :1;
        unsigned CVROE                  :1;
        unsigned CVREN                  :1;
    };
    struct {
        unsigned CVR0                   :1;
        unsigned CVR1                   :1;
        unsigned CVR2                   :1;
        unsigned CVR3                   :1;
    };
    struct {
        unsigned                        :6;
        unsigned CVROEN                 :1;
    };
} CVRCONbits_t;
extern volatile CVRCONbits_t CVRCONbits __at(0xFB5);
// bitfield macros
#define _CVRCON_CVR_POSN                                    0x0
#define _CVRCON_CVR_POSITION                                0x0
#define _CVRCON_CVR_SIZE                                    0x4
#define _CVRCON_CVR_LENGTH                                  0x4
#define _CVRCON_CVR_MASK                                    0xF
#define _CVRCON_CVRSS_POSN                                  0x4
#define _CVRCON_CVRSS_POSITION                              0x4
#define _CVRCON_CVRSS_SIZE                                  0x1
#define _CVRCON_CVRSS_LENGTH                                0x1
#define _CVRCON_CVRSS_MASK                                  0x10
#define _CVRCON_CVRR_POSN                                   0x5
#define _CVRCON_CVRR_POSITION                               0x5
#define _CVRCON_CVRR_SIZE                                   0x1
#define _CVRCON_CVRR_LENGTH                                 0x1
#define _CVRCON_CVRR_MASK                                   0x20
#define _CVRCON_CVROE_POSN                                  0x6
#define _CVRCON_CVROE_POSITION                              0x6
#define _CVRCON_CVROE_SIZE                                  0x1
#define _CVRCON_CVROE_LENGTH                                0x1
#define _CVRCON_CVROE_MASK                                  0x40
#define _CVRCON_CVREN_POSN                                  0x7
#define _CVRCON_CVREN_POSITION                              0x7
#define _CVRCON_CVREN_SIZE                                  0x1
#define _CVRCON_CVREN_LENGTH                                0x1
#define _CVRCON_CVREN_MASK                                  0x80
#define _CVRCON_CVR0_POSN                                   0x0
#define _CVRCON_CVR0_POSITION                               0x0
#define _CVRCON_CVR0_SIZE                                   0x1
#define _CVRCON_CVR0_LENGTH                                 0x1
#define _CVRCON_CVR0_MASK                                   0x1
#define _CVRCON_CVR1_POSN                                   0x1
#define _CVRCON_CVR1_POSITION                               0x1
#define _CVRCON_CVR1_SIZE                                   0x1
#define _CVRCON_CVR1_LENGTH                                 0x1
#define _CVRCON_CVR1_MASK                                   0x2
#define _CVRCON_CVR2_POSN                                   0x2
#define _CVRCON_CVR2_POSITION                               0x2
#define _CVRCON_CVR2_SIZE                                   0x1
#define _CVRCON_CVR2_LENGTH                                 0x1
#define _CVRCON_CVR2_MASK                                   0x4
#define _CVRCON_CVR3_POSN                                   0x3
#define _CVRCON_CVR3_POSITION                               0x3
#define _CVRCON_CVR3_SIZE                                   0x1
#define _CVRCON_CVR3_LENGTH                                 0x1
#define _CVRCON_CVR3_MASK                                   0x8
#define _CVRCON_CVROEN_POSN                                 0x6
#define _CVRCON_CVROEN_POSITION                             0x6
#define _CVRCON_CVROEN_SIZE                                 0x1
#define _CVRCON_CVROEN_LENGTH                               0x1
#define _CVRCON_CVROEN_MASK                                 0x40

// Register: ECCP1AS
#define ECCP1AS ECCP1AS
extern volatile unsigned char           ECCP1AS             __at(0xFB6);
#ifndef _LIB_BUILD
asm("ECCP1AS equ 0FB6h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned PSSBD                  :2;
        unsigned PSSAC                  :2;
        unsigned ECCPAS                 :3;
        unsigned ECCPASE                :1;
    };
    struct {
        unsigned PSSBD0                 :1;
        unsigned PSSBD1                 :1;
        unsigned PSSAC0                 :1;
        unsigned PSSAC1                 :1;
        unsigned ECCPAS0                :1;
        unsigned ECCPAS1                :1;
        unsigned ECCPAS2                :1;
    };
    struct {
        unsigned PSS1BD0                :1;
        unsigned PSS1BD1                :1;
        unsigned PSS1AC0                :1;
        unsigned PSS1AC1                :1;
        unsigned ECCP1AS0               :1;
        unsigned ECCP1AS1               :1;
        unsigned ECCP1AS2               :1;
        unsigned ECCP1ASE               :1;
    };
} ECCP1ASbits_t;
extern volatile ECCP1ASbits_t ECCP1ASbits __at(0xFB6);
// bitfield macros
#define _ECCP1AS_PSSBD_POSN                                 0x0
#define _ECCP1AS_PSSBD_POSITION                             0x0
#define _ECCP1AS_PSSBD_SIZE                                 0x2
#define _ECCP1AS_PSSBD_LENGTH                               0x2
#define _ECCP1AS_PSSBD_MASK                                 0x3
#define _ECCP1AS_PSSAC_POSN                                 0x2
#define _ECCP1AS_PSSAC_POSITION                             0x2
#define _ECCP1AS_PSSAC_SIZE                                 0x2
#define _ECCP1AS_PSSAC_LENGTH                               0x2
#define _ECCP1AS_PSSAC_MASK                                 0xC
#define _ECCP1AS_ECCPAS_POSN                                0x4
#define _ECCP1AS_ECCPAS_POSITION                            0x4
#define _ECCP1AS_ECCPAS_SIZE                                0x3
#define _ECCP1AS_ECCPAS_LENGTH                              0x3
#define _ECCP1AS_ECCPAS_MASK                                0x70
#define _ECCP1AS_ECCPASE_POSN                               0x7
#define _ECCP1AS_ECCPASE_POSITION                           0x7
#define _ECCP1AS_ECCPASE_SIZE                               0x1
#define _ECCP1AS_ECCPASE_LENGTH                             0x1
#define _ECCP1AS_ECCPASE_MASK                               0x80
#define _ECCP1AS_PSSBD0_POSN                                0x0
#define _ECCP1AS_PSSBD0_POSITION                            0x0
#define _ECCP1AS_PSSBD0_SIZE                                0x1
#define _ECCP1AS_PSSBD0_LENGTH                              0x1
#define _ECCP1AS_PSSBD0_MASK                                0x1
#define _ECCP1AS_PSSBD1_POSN                                0x1
#define _ECCP1AS_PSSBD1_POSITION                            0x1
#define _ECCP1AS_PSSBD1_SIZE                                0x1
#define _ECCP1AS_PSSBD1_LENGTH                              0x1
#define _ECCP1AS_PSSBD1_MASK                                0x2
#define _ECCP1AS_PSSAC0_POSN                                0x2
#define _ECCP1AS_PSSAC0_POSITION                            0x2
#define _ECCP1AS_PSSAC0_SIZE                                0x1
#define _ECCP1AS_PSSAC0_LENGTH                              0x1
#define _ECCP1AS_PSSAC0_MASK                                0x4
#define _ECCP1AS_PSSAC1_POSN                                0x3
#define _ECCP1AS_PSSAC1_POSITION                            0x3
#define _ECCP1AS_PSSAC1_SIZE                                0x1
#define _ECCP1AS_PSSAC1_LENGTH                              0x1
#define _ECCP1AS_PSSAC1_MASK                                0x8
#define _ECCP1AS_ECCPAS0_POSN                               0x4
#define _ECCP1AS_ECCPAS0_POSITION                           0x4
#define _ECCP1AS_ECCPAS0_SIZE                               0x1
#define _ECCP1AS_ECCPAS0_LENGTH                             0x1
#define _ECCP1AS_ECCPAS0_MASK                               0x10
#define _ECCP1AS_ECCPAS1_POSN                               0x5
#define _ECCP1AS_ECCPAS1_POSITION                           0x5
#define _ECCP1AS_ECCPAS1_SIZE                               0x1
#define _ECCP1AS_ECCPAS1_LENGTH                             0x1
#define _ECCP1AS_ECCPAS1_MASK                               0x20
#define _ECCP1AS_ECCPAS2_POSN                               0x6
#define _ECCP1AS_ECCPAS2_POSITION                           0x6
#define _ECCP1AS_ECCPAS2_SIZE                               0x1
#define _ECCP1AS_ECCPAS2_LENGTH                             0x1
#define _ECCP1AS_ECCPAS2_MASK                               0x40
#define _ECCP1AS_PSS1BD0_POSN                               0x0
#define _ECCP1AS_PSS1BD0_POSITION                           0x0
#define _ECCP1AS_PSS1BD0_SIZE                               0x1
#define _ECCP1AS_PSS1BD0_LENGTH                             0x1
#define _ECCP1AS_PSS1BD0_MASK                               0x1
#define _ECCP1AS_PSS1BD1_POSN                               0x1
#define _ECCP1AS_PSS1BD1_POSITION                           0x1
#define _ECCP1AS_PSS1BD1_SIZE                               0x1
#define _ECCP1AS_PSS1BD1_LENGTH                             0x1
#define _ECCP1AS_PSS1BD1_MASK                               0x2
#define _ECCP1AS_PSS1AC0_POSN                               0x2
#define _ECCP1AS_PSS1AC0_POSITION                           0x2
#define _ECCP1AS_PSS1AC0_SIZE                               0x1
#define _ECCP1AS_PSS1AC0_LENGTH                             0x1
#define _ECCP1AS_PSS1AC0_MASK                               0x4
#define _ECCP1AS_PSS1AC1_POSN                               0x3
#define _ECCP1AS_PSS1AC1_POSITION                           0x3
#define _ECCP1AS_PSS1AC1_SIZE                               0x1
#define _ECCP1AS_PSS1AC1_LENGTH                             0x1
#define _ECCP1AS_PSS1AC1_MASK                               0x8
#define _ECCP1AS_ECCP1AS0_POSN                              0x4
#define _ECCP1AS_ECCP1AS0_POSITION                          0x4
#define _ECCP1AS_ECCP1AS0_SIZE                              0x1
#define _ECCP1AS_ECCP1AS0_LENGTH                            0x1
#define _ECCP1AS_ECCP1AS0_MASK                              0x10
#define _ECCP1AS_ECCP1AS1_POSN                              0x5
#define _ECCP1AS_ECCP1AS1_POSITION                          0x5
#define _ECCP1AS_ECCP1AS1_SIZE                              0x1
#define _ECCP1AS_ECCP1AS1_LENGTH                            0x1
#define _ECCP1AS_ECCP1AS1_MASK                              0x20
#define _ECCP1AS_ECCP1AS2_POSN                              0x6
#define _ECCP1AS_ECCP1AS2_POSITION                          0x6
#define _ECCP1AS_ECCP1AS2_SIZE                              0x1
#define _ECCP1AS_ECCP1AS2_LENGTH                            0x1
#define _ECCP1AS_ECCP1AS2_MASK                              0x40
#define _ECCP1AS_ECCP1ASE_POSN                              0x7
#define _ECCP1AS_ECCP1ASE_POSITION                          0x7
#define _ECCP1AS_ECCP1ASE_SIZE                              0x1
#define _ECCP1AS_ECCP1ASE_LENGTH                            0x1
#define _ECCP1AS_ECCP1ASE_MASK                              0x80

// Register: CCP3CON
#define CCP3CON CCP3CON
extern volatile unsigned char           CCP3CON             __at(0xFB7);
#ifndef _LIB_BUILD
asm("CCP3CON equ 0FB7h");
#endif
// aliases
extern volatile unsigned char           ECCP3CON            __at(0xFB7);
#ifndef _LIB_BUILD
asm("ECCP3CON equ 0FB7h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned CCP3M                  :4;
        unsigned DC3B                   :2;
        unsigned P3M                    :2;
    };
    struct {
        unsigned CCP3M0                 :1;
        unsigned CCP3M1                 :1;
        unsigned CCP3M2                 :1;
        unsigned CCP3M3                 :1;
        unsigned DC3B0                  :1;
        unsigned DC3B1                  :1;
        unsigned P3M0                   :1;
        unsigned P3M1                   :1;
    };
    struct {
        unsigned                        :4;
        unsigned CCP3Y                  :1;
        unsigned CCP3X                  :1;
    };
} CCP3CONbits_t;
extern volatile CCP3CONbits_t CCP3CONbits __at(0xFB7);
// bitfield macros
#define _CCP3CON_CCP3M_POSN                                 0x0
#define _CCP3CON_CCP3M_POSITION                             0x0
#define _CCP3CON_CCP3M_SIZE                                 0x4
#define _CCP3CON_CCP3M_LENGTH                               0x4
#define _CCP3CON_CCP3M_MASK                                 0xF
#define _CCP3CON_DC3B_POSN                                  0x4
#define _CCP3CON_DC3B_POSITION                              0x4
#define _CCP3CON_DC3B_SIZE                                  0x2
#define _CCP3CON_DC3B_LENGTH                                0x2
#define _CCP3CON_DC3B_MASK                                  0x30
#define _CCP3CON_P3M_POSN                                   0x6
#define _CCP3CON_P3M_POSITION                               0x6
#define _CCP3CON_P3M_SIZE                                   0x2
#define _CCP3CON_P3M_LENGTH                                 0x2
#define _CCP3CON_P3M_MASK                                   0xC0
#define _CCP3CON_CCP3M0_POSN                                0x0
#define _CCP3CON_CCP3M0_POSITION                            0x0
#define _CCP3CON_CCP3M0_SIZE                                0x1
#define _CCP3CON_CCP3M0_LENGTH                              0x1
#define _CCP3CON_CCP3M0_MASK                                0x1
#define _CCP3CON_CCP3M1_POSN                                0x1
#define _CCP3CON_CCP3M1_POSITION                            0x1
#define _CCP3CON_CCP3M1_SIZE                                0x1
#define _CCP3CON_CCP3M1_LENGTH                              0x1
#define _CCP3CON_CCP3M1_MASK                                0x2
#define _CCP3CON_CCP3M2_POSN                                0x2
#define _CCP3CON_CCP3M2_POSITION                            0x2
#define _CCP3CON_CCP3M2_SIZE                                0x1
#define _CCP3CON_CCP3M2_LENGTH                              0x1
#define _CCP3CON_CCP3M2_MASK                                0x4
#define _CCP3CON_CCP3M3_POSN                                0x3
#define _CCP3CON_CCP3M3_POSITION                            0x3
#define _CCP3CON_CCP3M3_SIZE                                0x1
#define _CCP3CON_CCP3M3_LENGTH                              0x1
#define _CCP3CON_CCP3M3_MASK                                0x8
#define _CCP3CON_DC3B0_POSN                                 0x4
#define _CCP3CON_DC3B0_POSITION                             0x4
#define _CCP3CON_DC3B0_SIZE                                 0x1
#define _CCP3CON_DC3B0_LENGTH                               0x1
#define _CCP3CON_DC3B0_MASK                                 0x10
#define _CCP3CON_DC3B1_POSN                                 0x5
#define _CCP3CON_DC3B1_POSITION                             0x5
#define _CCP3CON_DC3B1_SIZE                                 0x1
#define _CCP3CON_DC3B1_LENGTH                               0x1
#define _CCP3CON_DC3B1_MASK                                 0x20
#define _CCP3CON_P3M0_POSN                                  0x6
#define _CCP3CON_P3M0_POSITION                              0x6
#define _CCP3CON_P3M0_SIZE                                  0x1
#define _CCP3CON_P3M0_LENGTH                                0x1
#define _CCP3CON_P3M0_MASK                                  0x40
#define _CCP3CON_P3M1_POSN                                  0x7
#define _CCP3CON_P3M1_POSITION                              0x7
#define _CCP3CON_P3M1_SIZE                                  0x1
#define _CCP3CON_P3M1_LENGTH                                0x1
#define _CCP3CON_P3M1_MASK                                  0x80
#define _CCP3CON_CCP3Y_POSN                                 0x4
#define _CCP3CON_CCP3Y_POSITION                             0x4
#define _CCP3CON_CCP3Y_SIZE                                 0x1
#define _CCP3CON_CCP3Y_LENGTH                               0x1
#define _CCP3CON_CCP3Y_MASK                                 0x10
#define _CCP3CON_CCP3X_POSN                                 0x5
#define _CCP3CON_CCP3X_POSITION                             0x5
#define _CCP3CON_CCP3X_SIZE                                 0x1
#define _CCP3CON_CCP3X_LENGTH                               0x1
#define _CCP3CON_CCP3X_MASK                                 0x20
// alias bitfield definitions
typedef union {
    struct {
        unsigned CCP3M                  :4;
        unsigned DC3B                   :2;
        unsigned P3M                    :2;
    };
    struct {
        unsigned CCP3M0                 :1;
        unsigned CCP3M1                 :1;
        unsigned CCP3M2                 :1;
        unsigned CCP3M3                 :1;
        unsigned DC3B0                  :1;
        unsigned DC3B1                  :1;
        unsigned P3M0                   :1;
        unsigned P3M1                   :1;
    };
    struct {
        unsigned                        :4;
        unsigned CCP3Y                  :1;
        unsigned CCP3X                  :1;
    };
} ECCP3CONbits_t;
extern volatile ECCP3CONbits_t ECCP3CONbits __at(0xFB7);
// bitfield macros
#define _ECCP3CON_CCP3M_POSN                                0x0
#define _ECCP3CON_CCP3M_POSITION                            0x0
#define _ECCP3CON_CCP3M_SIZE                                0x4
#define _ECCP3CON_CCP3M_LENGTH                              0x4
#define _ECCP3CON_CCP3M_MASK                                0xF
#define _ECCP3CON_DC3B_POSN                                 0x4
#define _ECCP3CON_DC3B_POSITION                             0x4
#define _ECCP3CON_DC3B_SIZE                                 0x2
#define _ECCP3CON_DC3B_LENGTH                               0x2
#define _ECCP3CON_DC3B_MASK                                 0x30
#define _ECCP3CON_P3M_POSN                                  0x6
#define _ECCP3CON_P3M_POSITION                              0x6
#define _ECCP3CON_P3M_SIZE                                  0x2
#define _ECCP3CON_P3M_LENGTH                                0x2
#define _ECCP3CON_P3M_MASK                                  0xC0
#define _ECCP3CON_CCP3M0_POSN                               0x0
#define _ECCP3CON_CCP3M0_POSITION                           0x0
#define _ECCP3CON_CCP3M0_SIZE                               0x1
#define _ECCP3CON_CCP3M0_LENGTH                             0x1
#define _ECCP3CON_CCP3M0_MASK                               0x1
#define _ECCP3CON_CCP3M1_POSN                               0x1
#define _ECCP3CON_CCP3M1_POSITION                           0x1
#define _ECCP3CON_CCP3M1_SIZE                               0x1
#define _ECCP3CON_CCP3M1_LENGTH                             0x1
#define _ECCP3CON_CCP3M1_MASK                               0x2
#define _ECCP3CON_CCP3M2_POSN                               0x2
#define _ECCP3CON_CCP3M2_POSITION                           0x2
#define _ECCP3CON_CCP3M2_SIZE                               0x1
#define _ECCP3CON_CCP3M2_LENGTH                             0x1
#define _ECCP3CON_CCP3M2_MASK                               0x4
#define _ECCP3CON_CCP3M3_POSN                               0x3
#define _ECCP3CON_CCP3M3_POSITION                           0x3
#define _ECCP3CON_CCP3M3_SIZE                               0x1
#define _ECCP3CON_CCP3M3_LENGTH                             0x1
#define _ECCP3CON_CCP3M3_MASK                               0x8
#define _ECCP3CON_DC3B0_POSN                                0x4
#define _ECCP3CON_DC3B0_POSITION                            0x4
#define _ECCP3CON_DC3B0_SIZE                                0x1
#define _ECCP3CON_DC3B0_LENGTH                              0x1
#define _ECCP3CON_DC3B0_MASK                                0x10
#define _ECCP3CON_DC3B1_POSN                                0x5
#define _ECCP3CON_DC3B1_POSITION                            0x5
#define _ECCP3CON_DC3B1_SIZE                                0x1
#define _ECCP3CON_DC3B1_LENGTH                              0x1
#define _ECCP3CON_DC3B1_MASK                                0x20
#define _ECCP3CON_P3M0_POSN                                 0x6
#define _ECCP3CON_P3M0_POSITION                             0x6
#define _ECCP3CON_P3M0_SIZE                                 0x1
#define _ECCP3CON_P3M0_LENGTH                               0x1
#define _ECCP3CON_P3M0_MASK                                 0x40
#define _ECCP3CON_P3M1_POSN                                 0x7
#define _ECCP3CON_P3M1_POSITION                             0x7
#define _ECCP3CON_P3M1_SIZE                                 0x1
#define _ECCP3CON_P3M1_LENGTH                               0x1
#define _ECCP3CON_P3M1_MASK                                 0x80
#define _ECCP3CON_CCP3Y_POSN                                0x4
#define _ECCP3CON_CCP3Y_POSITION                            0x4
#define _ECCP3CON_CCP3Y_SIZE                                0x1
#define _ECCP3CON_CCP3Y_LENGTH                              0x1
#define _ECCP3CON_CCP3Y_MASK                                0x10
#define _ECCP3CON_CCP3X_POSN                                0x5
#define _ECCP3CON_CCP3X_POSITION                            0x5
#define _ECCP3CON_CCP3X_SIZE                                0x1
#define _ECCP3CON_CCP3X_LENGTH                              0x1
#define _ECCP3CON_CCP3X_MASK                                0x20

// Register: CCPR3
#define CCPR3 CCPR3
extern volatile unsigned short          CCPR3               __at(0xFB8);
#ifndef _LIB_BUILD
asm("CCPR3 equ 0FB8h");
#endif

// Register: CCPR3L
#define CCPR3L CCPR3L
extern volatile unsigned char           CCPR3L              __at(0xFB8);
#ifndef _LIB_BUILD
asm("CCPR3L equ 0FB8h");
#endif

// Register: CCPR3H
#define CCPR3H CCPR3H
extern volatile unsigned char           CCPR3H              __at(0xFB9);
#ifndef _LIB_BUILD
asm("CCPR3H equ 0FB9h");
#endif

// Register: CCP2CON
#define CCP2CON CCP2CON
extern volatile unsigned char           CCP2CON             __at(0xFBA);
#ifndef _LIB_BUILD
asm("CCP2CON equ 0FBAh");
#endif
// aliases
extern volatile unsigned char           ECCP2CON            __at(0xFBA);
#ifndef _LIB_BUILD
asm("ECCP2CON equ 0FBAh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned CCP2M                  :4;
        unsigned DC2B                   :2;
        unsigned P2M                    :2;
    };
    struct {
        unsigned CCP2M0                 :1;
        unsigned CCP2M1                 :1;
        unsigned CCP2M2                 :1;
        unsigned CCP2M3                 :1;
        unsigned DC2B0                  :1;
        unsigned DC2B1                  :1;
        unsigned P2M0                   :1;
        unsigned P2M1                   :1;
    };
    struct {
        unsigned                        :4;
        unsigned CCP2Y                  :1;
        unsigned CCP2X                  :1;
    };
} CCP2CONbits_t;
extern volatile CCP2CONbits_t CCP2CONbits __at(0xFBA);
// bitfield macros
#define _CCP2CON_CCP2M_POSN                                 0x0
#define _CCP2CON_CCP2M_POSITION                             0x0
#define _CCP2CON_CCP2M_SIZE                                 0x4
#define _CCP2CON_CCP2M_LENGTH                               0x4
#define _CCP2CON_CCP2M_MASK                                 0xF
#define _CCP2CON_DC2B_POSN                                  0x4
#define _CCP2CON_DC2B_POSITION                              0x4
#define _CCP2CON_DC2B_SIZE                                  0x2
#define _CCP2CON_DC2B_LENGTH                                0x2
#define _CCP2CON_DC2B_MASK                                  0x30
#define _CCP2CON_P2M_POSN                                   0x6
#define _CCP2CON_P2M_POSITION                               0x6
#define _CCP2CON_P2M_SIZE                                   0x2
#define _CCP2CON_P2M_LENGTH                                 0x2
#define _CCP2CON_P2M_MASK                                   0xC0
#define _CCP2CON_CCP2M0_POSN                                0x0
#define _CCP2CON_CCP2M0_POSITION                            0x0
#define _CCP2CON_CCP2M0_SIZE                                0x1
#define _CCP2CON_CCP2M0_LENGTH                              0x1
#define _CCP2CON_CCP2M0_MASK                                0x1
#define _CCP2CON_CCP2M1_POSN                                0x1
#define _CCP2CON_CCP2M1_POSITION                            0x1
#define _CCP2CON_CCP2M1_SIZE                                0x1
#define _CCP2CON_CCP2M1_LENGTH                              0x1
#define _CCP2CON_CCP2M1_MASK                                0x2
#define _CCP2CON_CCP2M2_POSN                                0x2
#define _CCP2CON_CCP2M2_POSITION                            0x2
#define _CCP2CON_CCP2M2_SIZE                                0x1
#define _CCP2CON_CCP2M2_LENGTH                              0x1
#define _CCP2CON_CCP2M2_MASK                                0x4
#define _CCP2CON_CCP2M3_POSN                                0x3
#define _CCP2CON_CCP2M3_POSITION                            0x3
#define _CCP2CON_CCP2M3_SIZE                                0x1
#define _CCP2CON_CCP2M3_LENGTH                              0x1
#define _CCP2CON_CCP2M3_MASK                                0x8
#define _CCP2CON_DC2B0_POSN                                 0x4
#define _CCP2CON_DC2B0_POSITION                             0x4
#define _CCP2CON_DC2B0_SIZE                                 0x1
#define _CCP2CON_DC2B0_LENGTH                               0x1
#define _CCP2CON_DC2B0_MASK                                 0x10
#define _CCP2CON_DC2B1_POSN                                 0x5
#define _CCP2CON_DC2B1_POSITION                             0x5
#define _CCP2CON_DC2B1_SIZE                                 0x1
#define _CCP2CON_DC2B1_LENGTH                               0x1
#define _CCP2CON_DC2B1_MASK                                 0x20
#define _CCP2CON_P2M0_POSN                                  0x6
#define _CCP2CON_P2M0_POSITION                              0x6
#define _CCP2CON_P2M0_SIZE                                  0x1
#define _CCP2CON_P2M0_LENGTH                                0x1
#define _CCP2CON_P2M0_MASK                                  0x40
#define _CCP2CON_P2M1_POSN                                  0x7
#define _CCP2CON_P2M1_POSITION                              0x7
#define _CCP2CON_P2M1_SIZE                                  0x1
#define _CCP2CON_P2M1_LENGTH                                0x1
#define _CCP2CON_P2M1_MASK                                  0x80
#define _CCP2CON_CCP2Y_POSN                                 0x4
#define _CCP2CON_CCP2Y_POSITION                             0x4
#define _CCP2CON_CCP2Y_SIZE                                 0x1
#define _CCP2CON_CCP2Y_LENGTH                               0x1
#define _CCP2CON_CCP2Y_MASK                                 0x10
#define _CCP2CON_CCP2X_POSN                                 0x5
#define _CCP2CON_CCP2X_POSITION                             0x5
#define _CCP2CON_CCP2X_SIZE                                 0x1
#define _CCP2CON_CCP2X_LENGTH                               0x1
#define _CCP2CON_CCP2X_MASK                                 0x20
// alias bitfield definitions
typedef union {
    struct {
        unsigned CCP2M                  :4;
        unsigned DC2B                   :2;
        unsigned P2M                    :2;
    };
    struct {
        unsigned CCP2M0                 :1;
        unsigned CCP2M1                 :1;
        unsigned CCP2M2                 :1;
        unsigned CCP2M3                 :1;
        unsigned DC2B0                  :1;
        unsigned DC2B1                  :1;
        unsigned P2M0                   :1;
        unsigned P2M1                   :1;
    };
    struct {
        unsigned                        :4;
        unsigned CCP2Y                  :1;
        unsigned CCP2X                  :1;
    };
} ECCP2CONbits_t;
extern volatile ECCP2CONbits_t ECCP2CONbits __at(0xFBA);
// bitfield macros
#define _ECCP2CON_CCP2M_POSN                                0x0
#define _ECCP2CON_CCP2M_POSITION                            0x0
#define _ECCP2CON_CCP2M_SIZE                                0x4
#define _ECCP2CON_CCP2M_LENGTH                              0x4
#define _ECCP2CON_CCP2M_MASK                                0xF
#define _ECCP2CON_DC2B_POSN                                 0x4
#define _ECCP2CON_DC2B_POSITION                             0x4
#define _ECCP2CON_DC2B_SIZE                                 0x2
#define _ECCP2CON_DC2B_LENGTH                               0x2
#define _ECCP2CON_DC2B_MASK                                 0x30
#define _ECCP2CON_P2M_POSN                                  0x6
#define _ECCP2CON_P2M_POSITION                              0x6
#define _ECCP2CON_P2M_SIZE                                  0x2
#define _ECCP2CON_P2M_LENGTH                                0x2
#define _ECCP2CON_P2M_MASK                                  0xC0
#define _ECCP2CON_CCP2M0_POSN                               0x0
#define _ECCP2CON_CCP2M0_POSITION                           0x0
#define _ECCP2CON_CCP2M0_SIZE                               0x1
#define _ECCP2CON_CCP2M0_LENGTH                             0x1
#define _ECCP2CON_CCP2M0_MASK                               0x1
#define _ECCP2CON_CCP2M1_POSN                               0x1
#define _ECCP2CON_CCP2M1_POSITION                           0x1
#define _ECCP2CON_CCP2M1_SIZE                               0x1
#define _ECCP2CON_CCP2M1_LENGTH                             0x1
#define _ECCP2CON_CCP2M1_MASK                               0x2
#define _ECCP2CON_CCP2M2_POSN                               0x2
#define _ECCP2CON_CCP2M2_POSITION                           0x2
#define _ECCP2CON_CCP2M2_SIZE                               0x1
#define _ECCP2CON_CCP2M2_LENGTH                             0x1
#define _ECCP2CON_CCP2M2_MASK                               0x4
#define _ECCP2CON_CCP2M3_POSN                               0x3
#define _ECCP2CON_CCP2M3_POSITION                           0x3
#define _ECCP2CON_CCP2M3_SIZE                               0x1
#define _ECCP2CON_CCP2M3_LENGTH                             0x1
#define _ECCP2CON_CCP2M3_MASK                               0x8
#define _ECCP2CON_DC2B0_POSN                                0x4
#define _ECCP2CON_DC2B0_POSITION                            0x4
#define _ECCP2CON_DC2B0_SIZE                                0x1
#define _ECCP2CON_DC2B0_LENGTH                              0x1
#define _ECCP2CON_DC2B0_MASK                                0x10
#define _ECCP2CON_DC2B1_POSN                                0x5
#define _ECCP2CON_DC2B1_POSITION                            0x5
#define _ECCP2CON_DC2B1_SIZE                                0x1
#define _ECCP2CON_DC2B1_LENGTH                              0x1
#define _ECCP2CON_DC2B1_MASK                                0x20
#define _ECCP2CON_P2M0_POSN                                 0x6
#define _ECCP2CON_P2M0_POSITION                             0x6
#define _ECCP2CON_P2M0_SIZE                                 0x1
#define _ECCP2CON_P2M0_LENGTH                               0x1
#define _ECCP2CON_P2M0_MASK                                 0x40
#define _ECCP2CON_P2M1_POSN                                 0x7
#define _ECCP2CON_P2M1_POSITION                             0x7
#define _ECCP2CON_P2M1_SIZE                                 0x1
#define _ECCP2CON_P2M1_LENGTH                               0x1
#define _ECCP2CON_P2M1_MASK                                 0x80
#define _ECCP2CON_CCP2Y_POSN                                0x4
#define _ECCP2CON_CCP2Y_POSITION                            0x4
#define _ECCP2CON_CCP2Y_SIZE                                0x1
#define _ECCP2CON_CCP2Y_LENGTH                              0x1
#define _ECCP2CON_CCP2Y_MASK                                0x10
#define _ECCP2CON_CCP2X_POSN                                0x5
#define _ECCP2CON_CCP2X_POSITION                            0x5
#define _ECCP2CON_CCP2X_SIZE                                0x1
#define _ECCP2CON_CCP2X_LENGTH                              0x1
#define _ECCP2CON_CCP2X_MASK                                0x20

// Register: CCPR2
#define CCPR2 CCPR2
extern volatile unsigned short          CCPR2               __at(0xFBB);
#ifndef _LIB_BUILD
asm("CCPR2 equ 0FBBh");
#endif

// Register: CCPR2L
#define CCPR2L CCPR2L
extern volatile unsigned char           CCPR2L              __at(0xFBB);
#ifndef _LIB_BUILD
asm("CCPR2L equ 0FBBh");
#endif

// Register: CCPR2H
#define CCPR2H CCPR2H
extern volatile unsigned char           CCPR2H              __at(0xFBC);
#ifndef _LIB_BUILD
asm("CCPR2H equ 0FBCh");
#endif

// Register: CCP1CON
#define CCP1CON CCP1CON
extern volatile unsigned char           CCP1CON             __at(0xFBD);
#ifndef _LIB_BUILD
asm("CCP1CON equ 0FBDh");
#endif
// aliases
extern volatile unsigned char           ECCP1CON            __at(0xFBD);
#ifndef _LIB_BUILD
asm("ECCP1CON equ 0FBDh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned CCP1M                  :4;
        unsigned DC1B                   :2;
        unsigned P1M                    :2;
    };
    struct {
        unsigned CCP1M0                 :1;
        unsigned CCP1M1                 :1;
        unsigned CCP1M2                 :1;
        unsigned CCP1M3                 :1;
        unsigned DC1B0                  :1;
        unsigned DC1B1                  :1;
        unsigned P1M0                   :1;
        unsigned P1M1                   :1;
    };
    struct {
        unsigned                        :4;
        unsigned CCP1Y                  :1;
        unsigned CCP1X                  :1;
    };
} CCP1CONbits_t;
extern volatile CCP1CONbits_t CCP1CONbits __at(0xFBD);
// bitfield macros
#define _CCP1CON_CCP1M_POSN                                 0x0
#define _CCP1CON_CCP1M_POSITION                             0x0
#define _CCP1CON_CCP1M_SIZE                                 0x4
#define _CCP1CON_CCP1M_LENGTH                               0x4
#define _CCP1CON_CCP1M_MASK                                 0xF
#define _CCP1CON_DC1B_POSN                                  0x4
#define _CCP1CON_DC1B_POSITION                              0x4
#define _CCP1CON_DC1B_SIZE                                  0x2
#define _CCP1CON_DC1B_LENGTH                                0x2
#define _CCP1CON_DC1B_MASK                                  0x30
#define _CCP1CON_P1M_POSN                                   0x6
#define _CCP1CON_P1M_POSITION                               0x6
#define _CCP1CON_P1M_SIZE                                   0x2
#define _CCP1CON_P1M_LENGTH                                 0x2
#define _CCP1CON_P1M_MASK                                   0xC0
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
#define _CCP1CON_P1M0_POSN                                  0x6
#define _CCP1CON_P1M0_POSITION                              0x6
#define _CCP1CON_P1M0_SIZE                                  0x1
#define _CCP1CON_P1M0_LENGTH                                0x1
#define _CCP1CON_P1M0_MASK                                  0x40
#define _CCP1CON_P1M1_POSN                                  0x7
#define _CCP1CON_P1M1_POSITION                              0x7
#define _CCP1CON_P1M1_SIZE                                  0x1
#define _CCP1CON_P1M1_LENGTH                                0x1
#define _CCP1CON_P1M1_MASK                                  0x80
#define _CCP1CON_CCP1Y_POSN                                 0x4
#define _CCP1CON_CCP1Y_POSITION                             0x4
#define _CCP1CON_CCP1Y_SIZE                                 0x1
#define _CCP1CON_CCP1Y_LENGTH                               0x1
#define _CCP1CON_CCP1Y_MASK                                 0x10
#define _CCP1CON_CCP1X_POSN                                 0x5
#define _CCP1CON_CCP1X_POSITION                             0x5
#define _CCP1CON_CCP1X_SIZE                                 0x1
#define _CCP1CON_CCP1X_LENGTH                               0x1
#define _CCP1CON_CCP1X_MASK                                 0x20
// alias bitfield definitions
typedef union {
    struct {
        unsigned CCP1M                  :4;
        unsigned DC1B                   :2;
        unsigned P1M                    :2;
    };
    struct {
        unsigned CCP1M0                 :1;
        unsigned CCP1M1                 :1;
        unsigned CCP1M2                 :1;
        unsigned CCP1M3                 :1;
        unsigned DC1B0                  :1;
        unsigned DC1B1                  :1;
        unsigned P1M0                   :1;
        unsigned P1M1                   :1;
    };
    struct {
        unsigned                        :4;
        unsigned CCP1Y                  :1;
        unsigned CCP1X                  :1;
    };
} ECCP1CONbits_t;
extern volatile ECCP1CONbits_t ECCP1CONbits __at(0xFBD);
// bitfield macros
#define _ECCP1CON_CCP1M_POSN                                0x0
#define _ECCP1CON_CCP1M_POSITION                            0x0
#define _ECCP1CON_CCP1M_SIZE                                0x4
#define _ECCP1CON_CCP1M_LENGTH                              0x4
#define _ECCP1CON_CCP1M_MASK                                0xF
#define _ECCP1CON_DC1B_POSN                                 0x4
#define _ECCP1CON_DC1B_POSITION                             0x4
#define _ECCP1CON_DC1B_SIZE                                 0x2
#define _ECCP1CON_DC1B_LENGTH                               0x2
#define _ECCP1CON_DC1B_MASK                                 0x30
#define _ECCP1CON_P1M_POSN                                  0x6
#define _ECCP1CON_P1M_POSITION                              0x6
#define _ECCP1CON_P1M_SIZE                                  0x2
#define _ECCP1CON_P1M_LENGTH                                0x2
#define _ECCP1CON_P1M_MASK                                  0xC0
#define _ECCP1CON_CCP1M0_POSN                               0x0
#define _ECCP1CON_CCP1M0_POSITION                           0x0
#define _ECCP1CON_CCP1M0_SIZE                               0x1
#define _ECCP1CON_CCP1M0_LENGTH                             0x1
#define _ECCP1CON_CCP1M0_MASK                               0x1
#define _ECCP1CON_CCP1M1_POSN                               0x1
#define _ECCP1CON_CCP1M1_POSITION                           0x1
#define _ECCP1CON_CCP1M1_SIZE                               0x1
#define _ECCP1CON_CCP1M1_LENGTH                             0x1
#define _ECCP1CON_CCP1M1_MASK                               0x2
#define _ECCP1CON_CCP1M2_POSN                               0x2
#define _ECCP1CON_CCP1M2_POSITION                           0x2
#define _ECCP1CON_CCP1M2_SIZE                               0x1
#define _ECCP1CON_CCP1M2_LENGTH                             0x1
#define _ECCP1CON_CCP1M2_MASK                               0x4
#define _ECCP1CON_CCP1M3_POSN                               0x3
#define _ECCP1CON_CCP1M3_POSITION                           0x3
#define _ECCP1CON_CCP1M3_SIZE                               0x1
#define _ECCP1CON_CCP1M3_LENGTH                             0x1
#define _ECCP1CON_CCP1M3_MASK                               0x8
#define _ECCP1CON_DC1B0_POSN                                0x4
#define _ECCP1CON_DC1B0_POSITION                            0x4
#define _ECCP1CON_DC1B0_SIZE                                0x1
#define _ECCP1CON_DC1B0_LENGTH                              0x1
#define _ECCP1CON_DC1B0_MASK                                0x10
#define _ECCP1CON_DC1B1_POSN                                0x5
#define _ECCP1CON_DC1B1_POSITION                            0x5
#define _ECCP1CON_DC1B1_SIZE                                0x1
#define _ECCP1CON_DC1B1_LENGTH                              0x1
#define _ECCP1CON_DC1B1_MASK                                0x20
#define _ECCP1CON_P1M0_POSN                                 0x6
#define _ECCP1CON_P1M0_POSITION                             0x6
#define _ECCP1CON_P1M0_SIZE                                 0x1
#define _ECCP1CON_P1M0_LENGTH                               0x1
#define _ECCP1CON_P1M0_MASK                                 0x40
#define _ECCP1CON_P1M1_POSN                                 0x7
#define _ECCP1CON_P1M1_POSITION                             0x7
#define _ECCP1CON_P1M1_SIZE                                 0x1
#define _ECCP1CON_P1M1_LENGTH                               0x1
#define _ECCP1CON_P1M1_MASK                                 0x80
#define _ECCP1CON_CCP1Y_POSN                                0x4
#define _ECCP1CON_CCP1Y_POSITION                            0x4
#define _ECCP1CON_CCP1Y_SIZE                                0x1
#define _ECCP1CON_CCP1Y_LENGTH                              0x1
#define _ECCP1CON_CCP1Y_MASK                                0x10
#define _ECCP1CON_CCP1X_POSN                                0x5
#define _ECCP1CON_CCP1X_POSITION                            0x5
#define _ECCP1CON_CCP1X_SIZE                                0x1
#define _ECCP1CON_CCP1X_LENGTH                              0x1
#define _ECCP1CON_CCP1X_MASK                                0x20

// Register: CCPR1
#define CCPR1 CCPR1
extern volatile unsigned short          CCPR1               __at(0xFBE);
#ifndef _LIB_BUILD
asm("CCPR1 equ 0FBEh");
#endif

// Register: CCPR1L
#define CCPR1L CCPR1L
extern volatile unsigned char           CCPR1L              __at(0xFBE);
#ifndef _LIB_BUILD
asm("CCPR1L equ 0FBEh");
#endif

// Register: CCPR1H
#define CCPR1H CCPR1H
extern volatile unsigned char           CCPR1H              __at(0xFBF);
#ifndef _LIB_BUILD
asm("CCPR1H equ 0FBFh");
#endif

// Register: ADCON2
#define ADCON2 ADCON2
extern volatile unsigned char           ADCON2              __at(0xFC0);
#ifndef _LIB_BUILD
asm("ADCON2 equ 0FC0h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned ADCS                   :3;
        unsigned ACQT                   :3;
        unsigned                        :1;
        unsigned ADFM                   :1;
    };
    struct {
        unsigned ADCS0                  :1;
        unsigned ADCS1                  :1;
        unsigned ADCS2                  :1;
        unsigned ACQT0                  :1;
        unsigned ACQT1                  :1;
        unsigned ACQT2                  :1;
    };
} ADCON2bits_t;
extern volatile ADCON2bits_t ADCON2bits __at(0xFC0);
// bitfield macros
#define _ADCON2_ADCS_POSN                                   0x0
#define _ADCON2_ADCS_POSITION                               0x0
#define _ADCON2_ADCS_SIZE                                   0x3
#define _ADCON2_ADCS_LENGTH                                 0x3
#define _ADCON2_ADCS_MASK                                   0x7
#define _ADCON2_ACQT_POSN                                   0x3
#define _ADCON2_ACQT_POSITION                               0x3
#define _ADCON2_ACQT_SIZE                                   0x3
#define _ADCON2_ACQT_LENGTH                                 0x3
#define _ADCON2_ACQT_MASK                                   0x38
#define _ADCON2_ADFM_POSN                                   0x7
#define _ADCON2_ADFM_POSITION                               0x7
#define _ADCON2_ADFM_SIZE                                   0x1
#define _ADCON2_ADFM_LENGTH                                 0x1
#define _ADCON2_ADFM_MASK                                   0x80
#define _ADCON2_ADCS0_POSN                                  0x0
#define _ADCON2_ADCS0_POSITION                              0x0
#define _ADCON2_ADCS0_SIZE                                  0x1
#define _ADCON2_ADCS0_LENGTH                                0x1
#define _ADCON2_ADCS0_MASK                                  0x1
#define _ADCON2_ADCS1_POSN                                  0x1
#define _ADCON2_ADCS1_POSITION                              0x1
#define _ADCON2_ADCS1_SIZE                                  0x1
#define _ADCON2_ADCS1_LENGTH                                0x1
#define _ADCON2_ADCS1_MASK                                  0x2
#define _ADCON2_ADCS2_POSN                                  0x2
#define _ADCON2_ADCS2_POSITION                              0x2
#define _ADCON2_ADCS2_SIZE                                  0x1
#define _ADCON2_ADCS2_LENGTH                                0x1
#define _ADCON2_ADCS2_MASK                                  0x4
#define _ADCON2_ACQT0_POSN                                  0x3
#define _ADCON2_ACQT0_POSITION                              0x3
#define _ADCON2_ACQT0_SIZE                                  0x1
#define _ADCON2_ACQT0_LENGTH                                0x1
#define _ADCON2_ACQT0_MASK                                  0x8
#define _ADCON2_ACQT1_POSN                                  0x4
#define _ADCON2_ACQT1_POSITION                              0x4
#define _ADCON2_ACQT1_SIZE                                  0x1
#define _ADCON2_ACQT1_LENGTH                                0x1
#define _ADCON2_ACQT1_MASK                                  0x10
#define _ADCON2_ACQT2_POSN                                  0x5
#define _ADCON2_ACQT2_POSITION                              0x5
#define _ADCON2_ACQT2_SIZE                                  0x1
#define _ADCON2_ACQT2_LENGTH                                0x1
#define _ADCON2_ACQT2_MASK                                  0x20

// Register: ADCON1
#define ADCON1 ADCON1
extern volatile unsigned char           ADCON1              __at(0xFC1);
#ifndef _LIB_BUILD
asm("ADCON1 equ 0FC1h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned PCFG                   :4;
        unsigned VCFG                   :2;
    };
    struct {
        unsigned PCFG0                  :1;
        unsigned PCFG1                  :1;
        unsigned PCFG2                  :1;
        unsigned PCFG3                  :1;
        unsigned VCFG0                  :1;
        unsigned VCFG1                  :1;
    };
    struct {
        unsigned                        :3;
        unsigned CHSN3                  :1;
        unsigned VCFG01                 :1;
        unsigned VCFG11                 :1;
    };
} ADCON1bits_t;
extern volatile ADCON1bits_t ADCON1bits __at(0xFC1);
// bitfield macros
#define _ADCON1_PCFG_POSN                                   0x0
#define _ADCON1_PCFG_POSITION                               0x0
#define _ADCON1_PCFG_SIZE                                   0x4
#define _ADCON1_PCFG_LENGTH                                 0x4
#define _ADCON1_PCFG_MASK                                   0xF
#define _ADCON1_VCFG_POSN                                   0x4
#define _ADCON1_VCFG_POSITION                               0x4
#define _ADCON1_VCFG_SIZE                                   0x2
#define _ADCON1_VCFG_LENGTH                                 0x2
#define _ADCON1_VCFG_MASK                                   0x30
#define _ADCON1_PCFG0_POSN                                  0x0
#define _ADCON1_PCFG0_POSITION                              0x0
#define _ADCON1_PCFG0_SIZE                                  0x1
#define _ADCON1_PCFG0_LENGTH                                0x1
#define _ADCON1_PCFG0_MASK                                  0x1
#define _ADCON1_PCFG1_POSN                                  0x1
#define _ADCON1_PCFG1_POSITION                              0x1
#define _ADCON1_PCFG1_SIZE                                  0x1
#define _ADCON1_PCFG1_LENGTH                                0x1
#define _ADCON1_PCFG1_MASK                                  0x2
#define _ADCON1_PCFG2_POSN                                  0x2
#define _ADCON1_PCFG2_POSITION                              0x2
#define _ADCON1_PCFG2_SIZE                                  0x1
#define _ADCON1_PCFG2_LENGTH                                0x1
#define _ADCON1_PCFG2_MASK                                  0x4
#define _ADCON1_PCFG3_POSN                                  0x3
#define _ADCON1_PCFG3_POSITION                              0x3
#define _ADCON1_PCFG3_SIZE                                  0x1
#define _ADCON1_PCFG3_LENGTH                                0x1
#define _ADCON1_PCFG3_MASK                                  0x8
#define _ADCON1_VCFG0_POSN                                  0x4
#define _ADCON1_VCFG0_POSITION                              0x4
#define _ADCON1_VCFG0_SIZE                                  0x1
#define _ADCON1_VCFG0_LENGTH                                0x1
#define _ADCON1_VCFG0_MASK                                  0x10
#define _ADCON1_VCFG1_POSN                                  0x5
#define _ADCON1_VCFG1_POSITION                              0x5
#define _ADCON1_VCFG1_SIZE                                  0x1
#define _ADCON1_VCFG1_LENGTH                                0x1
#define _ADCON1_VCFG1_MASK                                  0x20
#define _ADCON1_CHSN3_POSN                                  0x3
#define _ADCON1_CHSN3_POSITION                              0x3
#define _ADCON1_CHSN3_SIZE                                  0x1
#define _ADCON1_CHSN3_LENGTH                                0x1
#define _ADCON1_CHSN3_MASK                                  0x8
#define _ADCON1_VCFG01_POSN                                 0x4
#define _ADCON1_VCFG01_POSITION                             0x4
#define _ADCON1_VCFG01_SIZE                                 0x1
#define _ADCON1_VCFG01_LENGTH                               0x1
#define _ADCON1_VCFG01_MASK                                 0x10
#define _ADCON1_VCFG11_POSN                                 0x5
#define _ADCON1_VCFG11_POSITION                             0x5
#define _ADCON1_VCFG11_SIZE                                 0x1
#define _ADCON1_VCFG11_LENGTH                               0x1
#define _ADCON1_VCFG11_MASK                                 0x20

// Register: ADCON0
#define ADCON0 ADCON0
extern volatile unsigned char           ADCON0              __at(0xFC2);
#ifndef _LIB_BUILD
asm("ADCON0 equ 0FC2h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :1;
        unsigned GO_NOT_DONE            :1;
    };
    struct {
        unsigned ADON                   :1;
        unsigned GO_nDONE               :1;
        unsigned CHS                    :4;
    };
    struct {
        unsigned                        :1;
        unsigned DONE                   :1;
        unsigned CHS0                   :1;
        unsigned CHS1                   :1;
        unsigned CHS2                   :1;
        unsigned CHS3                   :1;
        unsigned                        :1;
        unsigned ADCAL                  :1;
    };
    struct {
        unsigned                        :1;
        unsigned GO_DONE                :1;
    };
    struct {
        unsigned                        :1;
        unsigned GO                     :1;
    };
    struct {
        unsigned                        :1;
        unsigned NOT_DONE               :1;
    };
    struct {
        unsigned                        :1;
        unsigned nDONE                  :1;
    };
    struct {
        unsigned                        :1;
        unsigned GODONE                 :1;
    };
} ADCON0bits_t;
extern volatile ADCON0bits_t ADCON0bits __at(0xFC2);
// bitfield macros
#define _ADCON0_GO_NOT_DONE_POSN                            0x1
#define _ADCON0_GO_NOT_DONE_POSITION                        0x1
#define _ADCON0_GO_NOT_DONE_SIZE                            0x1
#define _ADCON0_GO_NOT_DONE_LENGTH                          0x1
#define _ADCON0_GO_NOT_DONE_MASK                            0x2
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
#define _ADCON0_DONE_POSN                                   0x1
#define _ADCON0_DONE_POSITION                               0x1
#define _ADCON0_DONE_SIZE                                   0x1
#define _ADCON0_DONE_LENGTH                                 0x1
#define _ADCON0_DONE_MASK                                   0x2
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
#define _ADCON0_ADCAL_POSN                                  0x7
#define _ADCON0_ADCAL_POSITION                              0x7
#define _ADCON0_ADCAL_SIZE                                  0x1
#define _ADCON0_ADCAL_LENGTH                                0x1
#define _ADCON0_ADCAL_MASK                                  0x80
#define _ADCON0_GO_DONE_POSN                                0x1
#define _ADCON0_GO_DONE_POSITION                            0x1
#define _ADCON0_GO_DONE_SIZE                                0x1
#define _ADCON0_GO_DONE_LENGTH                              0x1
#define _ADCON0_GO_DONE_MASK                                0x2
#define _ADCON0_GO_POSN                                     0x1
#define _ADCON0_GO_POSITION                                 0x1
#define _ADCON0_GO_SIZE                                     0x1
#define _ADCON0_GO_LENGTH                                   0x1
#define _ADCON0_GO_MASK                                     0x2
#define _ADCON0_NOT_DONE_POSN                               0x1
#define _ADCON0_NOT_DONE_POSITION                           0x1
#define _ADCON0_NOT_DONE_SIZE                               0x1
#define _ADCON0_NOT_DONE_LENGTH                             0x1
#define _ADCON0_NOT_DONE_MASK                               0x2
#define _ADCON0_nDONE_POSN                                  0x1
#define _ADCON0_nDONE_POSITION                              0x1
#define _ADCON0_nDONE_SIZE                                  0x1
#define _ADCON0_nDONE_LENGTH                                0x1
#define _ADCON0_nDONE_MASK                                  0x2
#define _ADCON0_GODONE_POSN                                 0x1
#define _ADCON0_GODONE_POSITION                             0x1
#define _ADCON0_GODONE_SIZE                                 0x1
#define _ADCON0_GODONE_LENGTH                               0x1
#define _ADCON0_GODONE_MASK                                 0x2

// Register: ADRES
#define ADRES ADRES
extern volatile unsigned short          ADRES               __at(0xFC3);
#ifndef _LIB_BUILD
asm("ADRES equ 0FC3h");
#endif

// Register: ADRESL
#define ADRESL ADRESL
extern volatile unsigned char           ADRESL              __at(0xFC3);
#ifndef _LIB_BUILD
asm("ADRESL equ 0FC3h");
#endif

// Register: ADRESH
#define ADRESH ADRESH
extern volatile unsigned char           ADRESH              __at(0xFC4);
#ifndef _LIB_BUILD
asm("ADRESH equ 0FC4h");
#endif

// Register: SSP1CON2
#define SSP1CON2 SSP1CON2
extern volatile unsigned char           SSP1CON2            __at(0xFC5);
#ifndef _LIB_BUILD
asm("SSP1CON2 equ 0FC5h");
#endif
// aliases
extern volatile unsigned char           SSPCON2             __at(0xFC5);
#ifndef _LIB_BUILD
asm("SSPCON2 equ 0FC5h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned SEN                    :1;
        unsigned RSEN                   :1;
        unsigned PEN                    :1;
        unsigned RCEN                   :1;
        unsigned ACKEN                  :1;
        unsigned ACKDT                  :1;
        unsigned ACKSTAT                :1;
        unsigned GCEN                   :1;
    };
    struct {
        unsigned                        :1;
        unsigned ADMSK1                 :1;
        unsigned ADMSK2                 :1;
        unsigned ADMSK3                 :1;
        unsigned ADMSK4                 :1;
        unsigned ADMSK5                 :1;
    };
    struct {
        unsigned                        :1;
        unsigned ADMSK                  :5;
    };
    struct {
        unsigned SEN1                   :1;
        unsigned ADMSK11                :1;
        unsigned ADMSK21                :1;
        unsigned ADMSK31                :1;
        unsigned ACKEN1                 :1;
        unsigned ACKDT1                 :1;
        unsigned ACKSTAT1               :1;
        unsigned GCEN1                  :1;
    };
    struct {
        unsigned                        :1;
        unsigned RSEN1                  :1;
        unsigned PEN1                   :1;
        unsigned RCEN1                  :1;
        unsigned ADMSK41                :1;
        unsigned ADMSK51                :1;
    };
} SSP1CON2bits_t;
extern volatile SSP1CON2bits_t SSP1CON2bits __at(0xFC5);
// bitfield macros
#define _SSP1CON2_SEN_POSN                                  0x0
#define _SSP1CON2_SEN_POSITION                              0x0
#define _SSP1CON2_SEN_SIZE                                  0x1
#define _SSP1CON2_SEN_LENGTH                                0x1
#define _SSP1CON2_SEN_MASK                                  0x1
#define _SSP1CON2_RSEN_POSN                                 0x1
#define _SSP1CON2_RSEN_POSITION                             0x1
#define _SSP1CON2_RSEN_SIZE                                 0x1
#define _SSP1CON2_RSEN_LENGTH                               0x1
#define _SSP1CON2_RSEN_MASK                                 0x2
#define _SSP1CON2_PEN_POSN                                  0x2
#define _SSP1CON2_PEN_POSITION                              0x2
#define _SSP1CON2_PEN_SIZE                                  0x1
#define _SSP1CON2_PEN_LENGTH                                0x1
#define _SSP1CON2_PEN_MASK                                  0x4
#define _SSP1CON2_RCEN_POSN                                 0x3
#define _SSP1CON2_RCEN_POSITION                             0x3
#define _SSP1CON2_RCEN_SIZE                                 0x1
#define _SSP1CON2_RCEN_LENGTH                               0x1
#define _SSP1CON2_RCEN_MASK                                 0x8
#define _SSP1CON2_ACKEN_POSN                                0x4
#define _SSP1CON2_ACKEN_POSITION                            0x4
#define _SSP1CON2_ACKEN_SIZE                                0x1
#define _SSP1CON2_ACKEN_LENGTH                              0x1
#define _SSP1CON2_ACKEN_MASK                                0x10
#define _SSP1CON2_ACKDT_POSN                                0x5
#define _SSP1CON2_ACKDT_POSITION                            0x5
#define _SSP1CON2_ACKDT_SIZE                                0x1
#define _SSP1CON2_ACKDT_LENGTH                              0x1
#define _SSP1CON2_ACKDT_MASK                                0x20
#define _SSP1CON2_ACKSTAT_POSN                              0x6
#define _SSP1CON2_ACKSTAT_POSITION                          0x6
#define _SSP1CON2_ACKSTAT_SIZE                              0x1
#define _SSP1CON2_ACKSTAT_LENGTH                            0x1
#define _SSP1CON2_ACKSTAT_MASK                              0x40
#define _SSP1CON2_GCEN_POSN                                 0x7
#define _SSP1CON2_GCEN_POSITION                             0x7
#define _SSP1CON2_GCEN_SIZE                                 0x1
#define _SSP1CON2_GCEN_LENGTH                               0x1
#define _SSP1CON2_GCEN_MASK                                 0x80
#define _SSP1CON2_ADMSK1_POSN                               0x1
#define _SSP1CON2_ADMSK1_POSITION                           0x1
#define _SSP1CON2_ADMSK1_SIZE                               0x1
#define _SSP1CON2_ADMSK1_LENGTH                             0x1
#define _SSP1CON2_ADMSK1_MASK                               0x2
#define _SSP1CON2_ADMSK2_POSN                               0x2
#define _SSP1CON2_ADMSK2_POSITION                           0x2
#define _SSP1CON2_ADMSK2_SIZE                               0x1
#define _SSP1CON2_ADMSK2_LENGTH                             0x1
#define _SSP1CON2_ADMSK2_MASK                               0x4
#define _SSP1CON2_ADMSK3_POSN                               0x3
#define _SSP1CON2_ADMSK3_POSITION                           0x3
#define _SSP1CON2_ADMSK3_SIZE                               0x1
#define _SSP1CON2_ADMSK3_LENGTH                             0x1
#define _SSP1CON2_ADMSK3_MASK                               0x8
#define _SSP1CON2_ADMSK4_POSN                               0x4
#define _SSP1CON2_ADMSK4_POSITION                           0x4
#define _SSP1CON2_ADMSK4_SIZE                               0x1
#define _SSP1CON2_ADMSK4_LENGTH                             0x1
#define _SSP1CON2_ADMSK4_MASK                               0x10
#define _SSP1CON2_ADMSK5_POSN                               0x5
#define _SSP1CON2_ADMSK5_POSITION                           0x5
#define _SSP1CON2_ADMSK5_SIZE                               0x1
#define _SSP1CON2_ADMSK5_LENGTH                             0x1
#define _SSP1CON2_ADMSK5_MASK                               0x20
#define _SSP1CON2_ADMSK_POSN                                0x1
#define _SSP1CON2_ADMSK_POSITION                            0x1
#define _SSP1CON2_ADMSK_SIZE                                0x5
#define _SSP1CON2_ADMSK_LENGTH                              0x5
#define _SSP1CON2_ADMSK_MASK                                0x3E
#define _SSP1CON2_SEN1_POSN                                 0x0
#define _SSP1CON2_SEN1_POSITION                             0x0
#define _SSP1CON2_SEN1_SIZE                                 0x1
#define _SSP1CON2_SEN1_LENGTH                               0x1
#define _SSP1CON2_SEN1_MASK                                 0x1
#define _SSP1CON2_ADMSK11_POSN                              0x1
#define _SSP1CON2_ADMSK11_POSITION                          0x1
#define _SSP1CON2_ADMSK11_SIZE                              0x1
#define _SSP1CON2_ADMSK11_LENGTH                            0x1
#define _SSP1CON2_ADMSK11_MASK                              0x2
#define _SSP1CON2_ADMSK21_POSN                              0x2
#define _SSP1CON2_ADMSK21_POSITION                          0x2
#define _SSP1CON2_ADMSK21_SIZE                              0x1
#define _SSP1CON2_ADMSK21_LENGTH                            0x1
#define _SSP1CON2_ADMSK21_MASK                              0x4
#define _SSP1CON2_ADMSK31_POSN                              0x3
#define _SSP1CON2_ADMSK31_POSITION                          0x3
#define _SSP1CON2_ADMSK31_SIZE                              0x1
#define _SSP1CON2_ADMSK31_LENGTH                            0x1
#define _SSP1CON2_ADMSK31_MASK                              0x8
#define _SSP1CON2_ACKEN1_POSN                               0x4
#define _SSP1CON2_ACKEN1_POSITION                           0x4
#define _SSP1CON2_ACKEN1_SIZE                               0x1
#define _SSP1CON2_ACKEN1_LENGTH                             0x1
#define _SSP1CON2_ACKEN1_MASK                               0x10
#define _SSP1CON2_ACKDT1_POSN                               0x5
#define _SSP1CON2_ACKDT1_POSITION                           0x5
#define _SSP1CON2_ACKDT1_SIZE                               0x1
#define _SSP1CON2_ACKDT1_LENGTH                             0x1
#define _SSP1CON2_ACKDT1_MASK                               0x20
#define _SSP1CON2_ACKSTAT1_POSN                             0x6
#define _SSP1CON2_ACKSTAT1_POSITION                         0x6
#define _SSP1CON2_ACKSTAT1_SIZE                             0x1
#define _SSP1CON2_ACKSTAT1_LENGTH                           0x1
#define _SSP1CON2_ACKSTAT1_MASK                             0x40
#define _SSP1CON2_GCEN1_POSN                                0x7
#define _SSP1CON2_GCEN1_POSITION                            0x7
#define _SSP1CON2_GCEN1_SIZE                                0x1
#define _SSP1CON2_GCEN1_LENGTH                              0x1
#define _SSP1CON2_GCEN1_MASK                                0x80
#define _SSP1CON2_RSEN1_POSN                                0x1
#define _SSP1CON2_RSEN1_POSITION                            0x1
#define _SSP1CON2_RSEN1_SIZE                                0x1
#define _SSP1CON2_RSEN1_LENGTH                              0x1
#define _SSP1CON2_RSEN1_MASK                                0x2
#define _SSP1CON2_PEN1_POSN                                 0x2
#define _SSP1CON2_PEN1_POSITION                             0x2
#define _SSP1CON2_PEN1_SIZE                                 0x1
#define _SSP1CON2_PEN1_LENGTH                               0x1
#define _SSP1CON2_PEN1_MASK                                 0x4
#define _SSP1CON2_RCEN1_POSN                                0x3
#define _SSP1CON2_RCEN1_POSITION                            0x3
#define _SSP1CON2_RCEN1_SIZE                                0x1
#define _SSP1CON2_RCEN1_LENGTH                              0x1
#define _SSP1CON2_RCEN1_MASK                                0x8
#define _SSP1CON2_ADMSK41_POSN                              0x4
#define _SSP1CON2_ADMSK41_POSITION                          0x4
#define _SSP1CON2_ADMSK41_SIZE                              0x1
#define _SSP1CON2_ADMSK41_LENGTH                            0x1
#define _SSP1CON2_ADMSK41_MASK                              0x10
#define _SSP1CON2_ADMSK51_POSN                              0x5
#define _SSP1CON2_ADMSK51_POSITION                          0x5
#define _SSP1CON2_ADMSK51_SIZE                              0x1
#define _SSP1CON2_ADMSK51_LENGTH                            0x1
#define _SSP1CON2_ADMSK51_MASK                              0x20
// alias bitfield definitions
typedef union {
    struct {
        unsigned SEN                    :1;
        unsigned RSEN                   :1;
        unsigned PEN                    :1;
        unsigned RCEN                   :1;
        unsigned ACKEN                  :1;
        unsigned ACKDT                  :1;
        unsigned ACKSTAT                :1;
        unsigned GCEN                   :1;
    };
    struct {
        unsigned                        :1;
        unsigned ADMSK1                 :1;
        unsigned ADMSK2                 :1;
        unsigned ADMSK3                 :1;
        unsigned ADMSK4                 :1;
        unsigned ADMSK5                 :1;
    };
    struct {
        unsigned                        :1;
        unsigned ADMSK                  :5;
    };
    struct {
        unsigned SEN1                   :1;
        unsigned ADMSK11                :1;
        unsigned ADMSK21                :1;
        unsigned ADMSK31                :1;
        unsigned ACKEN1                 :1;
        unsigned ACKDT1                 :1;
        unsigned ACKSTAT1               :1;
        unsigned GCEN1                  :1;
    };
    struct {
        unsigned                        :1;
        unsigned RSEN1                  :1;
        unsigned PEN1                   :1;
        unsigned RCEN1                  :1;
        unsigned ADMSK41                :1;
        unsigned ADMSK51                :1;
    };
} SSPCON2bits_t;
extern volatile SSPCON2bits_t SSPCON2bits __at(0xFC5);
// bitfield macros
#define _SSPCON2_SEN_POSN                                   0x0
#define _SSPCON2_SEN_POSITION                               0x0
#define _SSPCON2_SEN_SIZE                                   0x1
#define _SSPCON2_SEN_LENGTH                                 0x1
#define _SSPCON2_SEN_MASK                                   0x1
#define _SSPCON2_RSEN_POSN                                  0x1
#define _SSPCON2_RSEN_POSITION                              0x1
#define _SSPCON2_RSEN_SIZE                                  0x1
#define _SSPCON2_RSEN_LENGTH                                0x1
#define _SSPCON2_RSEN_MASK                                  0x2
#define _SSPCON2_PEN_POSN                                   0x2
#define _SSPCON2_PEN_POSITION                               0x2
#define _SSPCON2_PEN_SIZE                                   0x1
#define _SSPCON2_PEN_LENGTH                                 0x1
#define _SSPCON2_PEN_MASK                                   0x4
#define _SSPCON2_RCEN_POSN                                  0x3
#define _SSPCON2_RCEN_POSITION                              0x3
#define _SSPCON2_RCEN_SIZE                                  0x1
#define _SSPCON2_RCEN_LENGTH                                0x1
#define _SSPCON2_RCEN_MASK                                  0x8
#define _SSPCON2_ACKEN_POSN                                 0x4
#define _SSPCON2_ACKEN_POSITION                             0x4
#define _SSPCON2_ACKEN_SIZE                                 0x1
#define _SSPCON2_ACKEN_LENGTH                               0x1
#define _SSPCON2_ACKEN_MASK                                 0x10
#define _SSPCON2_ACKDT_POSN                                 0x5
#define _SSPCON2_ACKDT_POSITION                             0x5
#define _SSPCON2_ACKDT_SIZE                                 0x1
#define _SSPCON2_ACKDT_LENGTH                               0x1
#define _SSPCON2_ACKDT_MASK                                 0x20
#define _SSPCON2_ACKSTAT_POSN                               0x6
#define _SSPCON2_ACKSTAT_POSITION                           0x6
#define _SSPCON2_ACKSTAT_SIZE                               0x1
#define _SSPCON2_ACKSTAT_LENGTH                             0x1
#define _SSPCON2_ACKSTAT_MASK                               0x40
#define _SSPCON2_GCEN_POSN                                  0x7
#define _SSPCON2_GCEN_POSITION                              0x7
#define _SSPCON2_GCEN_SIZE                                  0x1
#define _SSPCON2_GCEN_LENGTH                                0x1
#define _SSPCON2_GCEN_MASK                                  0x80
#define _SSPCON2_ADMSK1_POSN                                0x1
#define _SSPCON2_ADMSK1_POSITION                            0x1
#define _SSPCON2_ADMSK1_SIZE                                0x1
#define _SSPCON2_ADMSK1_LENGTH                              0x1
#define _SSPCON2_ADMSK1_MASK                                0x2
#define _SSPCON2_ADMSK2_POSN                                0x2
#define _SSPCON2_ADMSK2_POSITION                            0x2
#define _SSPCON2_ADMSK2_SIZE                                0x1
#define _SSPCON2_ADMSK2_LENGTH                              0x1
#define _SSPCON2_ADMSK2_MASK                                0x4
#define _SSPCON2_ADMSK3_POSN                                0x3
#define _SSPCON2_ADMSK3_POSITION                            0x3
#define _SSPCON2_ADMSK3_SIZE                                0x1
#define _SSPCON2_ADMSK3_LENGTH                              0x1
#define _SSPCON2_ADMSK3_MASK                                0x8
#define _SSPCON2_ADMSK4_POSN                                0x4
#define _SSPCON2_ADMSK4_POSITION                            0x4
#define _SSPCON2_ADMSK4_SIZE                                0x1
#define _SSPCON2_ADMSK4_LENGTH                              0x1
#define _SSPCON2_ADMSK4_MASK                                0x10
#define _SSPCON2_ADMSK5_POSN                                0x5
#define _SSPCON2_ADMSK5_POSITION                            0x5
#define _SSPCON2_ADMSK5_SIZE                                0x1
#define _SSPCON2_ADMSK5_LENGTH                              0x1
#define _SSPCON2_ADMSK5_MASK                                0x20
#define _SSPCON2_ADMSK_POSN                                 0x1
#define _SSPCON2_ADMSK_POSITION                             0x1
#define _SSPCON2_ADMSK_SIZE                                 0x5
#define _SSPCON2_ADMSK_LENGTH                               0x5
#define _SSPCON2_ADMSK_MASK                                 0x3E
#define _SSPCON2_SEN1_POSN                                  0x0
#define _SSPCON2_SEN1_POSITION                              0x0
#define _SSPCON2_SEN1_SIZE                                  0x1
#define _SSPCON2_SEN1_LENGTH                                0x1
#define _SSPCON2_SEN1_MASK                                  0x1
#define _SSPCON2_ADMSK11_POSN                               0x1
#define _SSPCON2_ADMSK11_POSITION                           0x1
#define _SSPCON2_ADMSK11_SIZE                               0x1
#define _SSPCON2_ADMSK11_LENGTH                             0x1
#define _SSPCON2_ADMSK11_MASK                               0x2
#define _SSPCON2_ADMSK21_POSN                               0x2
#define _SSPCON2_ADMSK21_POSITION                           0x2
#define _SSPCON2_ADMSK21_SIZE                               0x1
#define _SSPCON2_ADMSK21_LENGTH                             0x1
#define _SSPCON2_ADMSK21_MASK                               0x4
#define _SSPCON2_ADMSK31_POSN                               0x3
#define _SSPCON2_ADMSK31_POSITION                           0x3
#define _SSPCON2_ADMSK31_SIZE                               0x1
#define _SSPCON2_ADMSK31_LENGTH                             0x1
#define _SSPCON2_ADMSK31_MASK                               0x8
#define _SSPCON2_ACKEN1_POSN                                0x4
#define _SSPCON2_ACKEN1_POSITION                            0x4
#define _SSPCON2_ACKEN1_SIZE                                0x1
#define _SSPCON2_ACKEN1_LENGTH                              0x1
#define _SSPCON2_ACKEN1_MASK                                0x10
#define _SSPCON2_ACKDT1_POSN                                0x5
#define _SSPCON2_ACKDT1_POSITION                            0x5
#define _SSPCON2_ACKDT1_SIZE                                0x1
#define _SSPCON2_ACKDT1_LENGTH                              0x1
#define _SSPCON2_ACKDT1_MASK                                0x20
#define _SSPCON2_ACKSTAT1_POSN                              0x6
#define _SSPCON2_ACKSTAT1_POSITION                          0x6
#define _SSPCON2_ACKSTAT1_SIZE                              0x1
#define _SSPCON2_ACKSTAT1_LENGTH                            0x1
#define _SSPCON2_ACKSTAT1_MASK                              0x40
#define _SSPCON2_GCEN1_POSN                                 0x7
#define _SSPCON2_GCEN1_POSITION                             0x7
#define _SSPCON2_GCEN1_SIZE                                 0x1
#define _SSPCON2_GCEN1_LENGTH                               0x1
#define _SSPCON2_GCEN1_MASK                                 0x80
#define _SSPCON2_RSEN1_POSN                                 0x1
#define _SSPCON2_RSEN1_POSITION                             0x1
#define _SSPCON2_RSEN1_SIZE                                 0x1
#define _SSPCON2_RSEN1_LENGTH                               0x1
#define _SSPCON2_RSEN1_MASK                                 0x2
#define _SSPCON2_PEN1_POSN                                  0x2
#define _SSPCON2_PEN1_POSITION                              0x2
#define _SSPCON2_PEN1_SIZE                                  0x1
#define _SSPCON2_PEN1_LENGTH                                0x1
#define _SSPCON2_PEN1_MASK                                  0x4
#define _SSPCON2_RCEN1_POSN                                 0x3
#define _SSPCON2_RCEN1_POSITION                             0x3
#define _SSPCON2_RCEN1_SIZE                                 0x1
#define _SSPCON2_RCEN1_LENGTH                               0x1
#define _SSPCON2_RCEN1_MASK                                 0x8
#define _SSPCON2_ADMSK41_POSN                               0x4
#define _SSPCON2_ADMSK41_POSITION                           0x4
#define _SSPCON2_ADMSK41_SIZE                               0x1
#define _SSPCON2_ADMSK41_LENGTH                             0x1
#define _SSPCON2_ADMSK41_MASK                               0x10
#define _SSPCON2_ADMSK51_POSN                               0x5
#define _SSPCON2_ADMSK51_POSITION                           0x5
#define _SSPCON2_ADMSK51_SIZE                               0x1
#define _SSPCON2_ADMSK51_LENGTH                             0x1
#define _SSPCON2_ADMSK51_MASK                               0x20

// Register: SSP1CON1
#define SSP1CON1 SSP1CON1
extern volatile unsigned char           SSP1CON1            __at(0xFC6);
#ifndef _LIB_BUILD
asm("SSP1CON1 equ 0FC6h");
#endif
// aliases
extern volatile unsigned char           SSPCON1             __at(0xFC6);
#ifndef _LIB_BUILD
asm("SSPCON1 equ 0FC6h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned SSPM                   :4;
        unsigned CKP                    :1;
        unsigned SSPEN                  :1;
        unsigned SSPOV                  :1;
        unsigned WCOL                   :1;
    };
    struct {
        unsigned SSPM0                  :1;
        unsigned SSPM1                  :1;
        unsigned SSPM2                  :1;
        unsigned SSPM3                  :1;
    };
    struct {
        unsigned SSPM01                 :1;
        unsigned SSPM11                 :1;
        unsigned SSPM21                 :1;
        unsigned SSPM31                 :1;
        unsigned CKP1                   :1;
        unsigned SSPEN1                 :1;
        unsigned SSPOV1                 :1;
        unsigned WCOL1                  :1;
    };
} SSP1CON1bits_t;
extern volatile SSP1CON1bits_t SSP1CON1bits __at(0xFC6);
// bitfield macros
#define _SSP1CON1_SSPM_POSN                                 0x0
#define _SSP1CON1_SSPM_POSITION                             0x0
#define _SSP1CON1_SSPM_SIZE                                 0x4
#define _SSP1CON1_SSPM_LENGTH                               0x4
#define _SSP1CON1_SSPM_MASK                                 0xF
#define _SSP1CON1_CKP_POSN                                  0x4
#define _SSP1CON1_CKP_POSITION                              0x4
#define _SSP1CON1_CKP_SIZE                                  0x1
#define _SSP1CON1_CKP_LENGTH                                0x1
#define _SSP1CON1_CKP_MASK                                  0x10
#define _SSP1CON1_SSPEN_POSN                                0x5
#define _SSP1CON1_SSPEN_POSITION                            0x5
#define _SSP1CON1_SSPEN_SIZE                                0x1
#define _SSP1CON1_SSPEN_LENGTH                              0x1
#define _SSP1CON1_SSPEN_MASK                                0x20
#define _SSP1CON1_SSPOV_POSN                                0x6
#define _SSP1CON1_SSPOV_POSITION                            0x6
#define _SSP1CON1_SSPOV_SIZE                                0x1
#define _SSP1CON1_SSPOV_LENGTH                              0x1
#define _SSP1CON1_SSPOV_MASK                                0x40
#define _SSP1CON1_WCOL_POSN                                 0x7
#define _SSP1CON1_WCOL_POSITION                             0x7
#define _SSP1CON1_WCOL_SIZE                                 0x1
#define _SSP1CON1_WCOL_LENGTH                               0x1
#define _SSP1CON1_WCOL_MASK                                 0x80
#define _SSP1CON1_SSPM0_POSN                                0x0
#define _SSP1CON1_SSPM0_POSITION                            0x0
#define _SSP1CON1_SSPM0_SIZE                                0x1
#define _SSP1CON1_SSPM0_LENGTH                              0x1
#define _SSP1CON1_SSPM0_MASK                                0x1
#define _SSP1CON1_SSPM1_POSN                                0x1
#define _SSP1CON1_SSPM1_POSITION                            0x1
#define _SSP1CON1_SSPM1_SIZE                                0x1
#define _SSP1CON1_SSPM1_LENGTH                              0x1
#define _SSP1CON1_SSPM1_MASK                                0x2
#define _SSP1CON1_SSPM2_POSN                                0x2
#define _SSP1CON1_SSPM2_POSITION                            0x2
#define _SSP1CON1_SSPM2_SIZE                                0x1
#define _SSP1CON1_SSPM2_LENGTH                              0x1
#define _SSP1CON1_SSPM2_MASK                                0x4
#define _SSP1CON1_SSPM3_POSN                                0x3
#define _SSP1CON1_SSPM3_POSITION                            0x3
#define _SSP1CON1_SSPM3_SIZE                                0x1
#define _SSP1CON1_SSPM3_LENGTH                              0x1
#define _SSP1CON1_SSPM3_MASK                                0x8
#define _SSP1CON1_SSPM01_POSN                               0x0
#define _SSP1CON1_SSPM01_POSITION                           0x0
#define _SSP1CON1_SSPM01_SIZE                               0x1
#define _SSP1CON1_SSPM01_LENGTH                             0x1
#define _SSP1CON1_SSPM01_MASK                               0x1
#define _SSP1CON1_SSPM11_POSN                               0x1
#define _SSP1CON1_SSPM11_POSITION                           0x1
#define _SSP1CON1_SSPM11_SIZE                               0x1
#define _SSP1CON1_SSPM11_LENGTH                             0x1
#define _SSP1CON1_SSPM11_MASK                               0x2
#define _SSP1CON1_SSPM21_POSN                               0x2
#define _SSP1CON1_SSPM21_POSITION                           0x2
#define _SSP1CON1_SSPM21_SIZE                               0x1
#define _SSP1CON1_SSPM21_LENGTH                             0x1
#define _SSP1CON1_SSPM21_MASK                               0x4
#define _SSP1CON1_SSPM31_POSN                               0x3
#define _SSP1CON1_SSPM31_POSITION                           0x3
#define _SSP1CON1_SSPM31_SIZE                               0x1
#define _SSP1CON1_SSPM31_LENGTH                             0x1
#define _SSP1CON1_SSPM31_MASK                               0x8
#define _SSP1CON1_CKP1_POSN                                 0x4
#define _SSP1CON1_CKP1_POSITION                             0x4
#define _SSP1CON1_CKP1_SIZE                                 0x1
#define _SSP1CON1_CKP1_LENGTH                               0x1
#define _SSP1CON1_CKP1_MASK                                 0x10
#define _SSP1CON1_SSPEN1_POSN                               0x5
#define _SSP1CON1_SSPEN1_POSITION                           0x5
#define _SSP1CON1_SSPEN1_SIZE                               0x1
#define _SSP1CON1_SSPEN1_LENGTH                             0x1
#define _SSP1CON1_SSPEN1_MASK                               0x20
#define _SSP1CON1_SSPOV1_POSN                               0x6
#define _SSP1CON1_SSPOV1_POSITION                           0x6
#define _SSP1CON1_SSPOV1_SIZE                               0x1
#define _SSP1CON1_SSPOV1_LENGTH                             0x1
#define _SSP1CON1_SSPOV1_MASK                               0x40
#define _SSP1CON1_WCOL1_POSN                                0x7
#define _SSP1CON1_WCOL1_POSITION                            0x7
#define _SSP1CON1_WCOL1_SIZE                                0x1
#define _SSP1CON1_WCOL1_LENGTH                              0x1
#define _SSP1CON1_WCOL1_MASK                                0x80
// alias bitfield definitions
typedef union {
    struct {
        unsigned SSPM                   :4;
        unsigned CKP                    :1;
        unsigned SSPEN                  :1;
        unsigned SSPOV                  :1;
        unsigned WCOL                   :1;
    };
    struct {
        unsigned SSPM0                  :1;
        unsigned SSPM1                  :1;
        unsigned SSPM2                  :1;
        unsigned SSPM3                  :1;
    };
    struct {
        unsigned SSPM01                 :1;
        unsigned SSPM11                 :1;
        unsigned SSPM21                 :1;
        unsigned SSPM31                 :1;
        unsigned CKP1                   :1;
        unsigned SSPEN1                 :1;
        unsigned SSPOV1                 :1;
        unsigned WCOL1                  :1;
    };
} SSPCON1bits_t;
extern volatile SSPCON1bits_t SSPCON1bits __at(0xFC6);
// bitfield macros
#define _SSPCON1_SSPM_POSN                                  0x0
#define _SSPCON1_SSPM_POSITION                              0x0
#define _SSPCON1_SSPM_SIZE                                  0x4
#define _SSPCON1_SSPM_LENGTH                                0x4
#define _SSPCON1_SSPM_MASK                                  0xF
#define _SSPCON1_CKP_POSN                                   0x4
#define _SSPCON1_CKP_POSITION                               0x4
#define _SSPCON1_CKP_SIZE                                   0x1
#define _SSPCON1_CKP_LENGTH                                 0x1
#define _SSPCON1_CKP_MASK                                   0x10
#define _SSPCON1_SSPEN_POSN                                 0x5
#define _SSPCON1_SSPEN_POSITION                             0x5
#define _SSPCON1_SSPEN_SIZE                                 0x1
#define _SSPCON1_SSPEN_LENGTH                               0x1
#define _SSPCON1_SSPEN_MASK                                 0x20
#define _SSPCON1_SSPOV_POSN                                 0x6
#define _SSPCON1_SSPOV_POSITION                             0x6
#define _SSPCON1_SSPOV_SIZE                                 0x1
#define _SSPCON1_SSPOV_LENGTH                               0x1
#define _SSPCON1_SSPOV_MASK                                 0x40
#define _SSPCON1_WCOL_POSN                                  0x7
#define _SSPCON1_WCOL_POSITION                              0x7
#define _SSPCON1_WCOL_SIZE                                  0x1
#define _SSPCON1_WCOL_LENGTH                                0x1
#define _SSPCON1_WCOL_MASK                                  0x80
#define _SSPCON1_SSPM0_POSN                                 0x0
#define _SSPCON1_SSPM0_POSITION                             0x0
#define _SSPCON1_SSPM0_SIZE                                 0x1
#define _SSPCON1_SSPM0_LENGTH                               0x1
#define _SSPCON1_SSPM0_MASK                                 0x1
#define _SSPCON1_SSPM1_POSN                                 0x1
#define _SSPCON1_SSPM1_POSITION                             0x1
#define _SSPCON1_SSPM1_SIZE                                 0x1
#define _SSPCON1_SSPM1_LENGTH                               0x1
#define _SSPCON1_SSPM1_MASK                                 0x2
#define _SSPCON1_SSPM2_POSN                                 0x2
#define _SSPCON1_SSPM2_POSITION                             0x2
#define _SSPCON1_SSPM2_SIZE                                 0x1
#define _SSPCON1_SSPM2_LENGTH                               0x1
#define _SSPCON1_SSPM2_MASK                                 0x4
#define _SSPCON1_SSPM3_POSN                                 0x3
#define _SSPCON1_SSPM3_POSITION                             0x3
#define _SSPCON1_SSPM3_SIZE                                 0x1
#define _SSPCON1_SSPM3_LENGTH                               0x1
#define _SSPCON1_SSPM3_MASK                                 0x8
#define _SSPCON1_SSPM01_POSN                                0x0
#define _SSPCON1_SSPM01_POSITION                            0x0
#define _SSPCON1_SSPM01_SIZE                                0x1
#define _SSPCON1_SSPM01_LENGTH                              0x1
#define _SSPCON1_SSPM01_MASK                                0x1
#define _SSPCON1_SSPM11_POSN                                0x1
#define _SSPCON1_SSPM11_POSITION                            0x1
#define _SSPCON1_SSPM11_SIZE                                0x1
#define _SSPCON1_SSPM11_LENGTH                              0x1
#define _SSPCON1_SSPM11_MASK                                0x2
#define _SSPCON1_SSPM21_POSN                                0x2
#define _SSPCON1_SSPM21_POSITION                            0x2
#define _SSPCON1_SSPM21_SIZE                                0x1
#define _SSPCON1_SSPM21_LENGTH                              0x1
#define _SSPCON1_SSPM21_MASK                                0x4
#define _SSPCON1_SSPM31_POSN                                0x3
#define _SSPCON1_SSPM31_POSITION                            0x3
#define _SSPCON1_SSPM31_SIZE                                0x1
#define _SSPCON1_SSPM31_LENGTH                              0x1
#define _SSPCON1_SSPM31_MASK                                0x8
#define _SSPCON1_CKP1_POSN                                  0x4
#define _SSPCON1_CKP1_POSITION                              0x4
#define _SSPCON1_CKP1_SIZE                                  0x1
#define _SSPCON1_CKP1_LENGTH                                0x1
#define _SSPCON1_CKP1_MASK                                  0x10
#define _SSPCON1_SSPEN1_POSN                                0x5
#define _SSPCON1_SSPEN1_POSITION                            0x5
#define _SSPCON1_SSPEN1_SIZE                                0x1
#define _SSPCON1_SSPEN1_LENGTH                              0x1
#define _SSPCON1_SSPEN1_MASK                                0x20
#define _SSPCON1_SSPOV1_POSN                                0x6
#define _SSPCON1_SSPOV1_POSITION                            0x6
#define _SSPCON1_SSPOV1_SIZE                                0x1
#define _SSPCON1_SSPOV1_LENGTH                              0x1
#define _SSPCON1_SSPOV1_MASK                                0x40
#define _SSPCON1_WCOL1_POSN                                 0x7
#define _SSPCON1_WCOL1_POSITION                             0x7
#define _SSPCON1_WCOL1_SIZE                                 0x1
#define _SSPCON1_WCOL1_LENGTH                               0x1
#define _SSPCON1_WCOL1_MASK                                 0x80

// Register: SSP1STAT
#define SSP1STAT SSP1STAT
extern volatile unsigned char           SSP1STAT            __at(0xFC7);
#ifndef _LIB_BUILD
asm("SSP1STAT equ 0FC7h");
#endif
// aliases
extern volatile unsigned char           SSPSTAT             __at(0xFC7);
#ifndef _LIB_BUILD
asm("SSPSTAT equ 0FC7h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :2;
        unsigned R_NOT_W                :1;
    };
    struct {
        unsigned                        :5;
        unsigned D_NOT_A                :1;
    };
    struct {
        unsigned BF                     :1;
        unsigned UA                     :1;
        unsigned R_nW                   :1;
        unsigned S                      :1;
        unsigned P                      :1;
        unsigned D_nA                   :1;
        unsigned CKE                    :1;
        unsigned SMP                    :1;
    };
    struct {
        unsigned                        :2;
        unsigned R_W                    :1;
        unsigned                        :2;
        unsigned D_A                    :1;
    };
    struct {
        unsigned                        :2;
        unsigned I2C_READ               :1;
        unsigned I2C_START              :1;
        unsigned I2C_STOP               :1;
        unsigned I2C_DAT                :1;
    };
    struct {
        unsigned                        :2;
        unsigned nW                     :1;
        unsigned                        :2;
        unsigned nA                     :1;
    };
    struct {
        unsigned                        :2;
        unsigned NOT_WRITE              :1;
    };
    struct {
        unsigned                        :5;
        unsigned NOT_ADDRESS            :1;
    };
    struct {
        unsigned                        :2;
        unsigned nWRITE                 :1;
        unsigned                        :2;
        unsigned nADDRESS               :1;
    };
    struct {
        unsigned                        :2;
        unsigned READ_WRITE             :1;
        unsigned                        :2;
        unsigned DATA_ADDRESS           :1;
    };
    struct {
        unsigned                        :2;
        unsigned R                      :1;
        unsigned                        :2;
        unsigned D                      :1;
    };
    struct {
        unsigned BF1                    :1;
        unsigned UA1                    :1;
        unsigned RW                     :1;
        unsigned START                  :1;
        unsigned STOP                   :1;
        unsigned DA                     :1;
        unsigned CKE1                   :1;
        unsigned SMP1                   :1;
    };
    struct {
        unsigned                        :2;
        unsigned RW1                    :1;
        unsigned START1                 :1;
        unsigned STOP1                  :1;
        unsigned DA1                    :1;
    };
    struct {
        unsigned                        :2;
        unsigned NOT_W                  :1;
    };
    struct {
        unsigned                        :5;
        unsigned NOT_A                  :1;
    };
} SSP1STATbits_t;
extern volatile SSP1STATbits_t SSP1STATbits __at(0xFC7);
// bitfield macros
#define _SSP1STAT_R_NOT_W_POSN                              0x2
#define _SSP1STAT_R_NOT_W_POSITION                          0x2
#define _SSP1STAT_R_NOT_W_SIZE                              0x1
#define _SSP1STAT_R_NOT_W_LENGTH                            0x1
#define _SSP1STAT_R_NOT_W_MASK                              0x4
#define _SSP1STAT_D_NOT_A_POSN                              0x5
#define _SSP1STAT_D_NOT_A_POSITION                          0x5
#define _SSP1STAT_D_NOT_A_SIZE                              0x1
#define _SSP1STAT_D_NOT_A_LENGTH                            0x1
#define _SSP1STAT_D_NOT_A_MASK                              0x20
#define _SSP1STAT_BF_POSN                                   0x0
#define _SSP1STAT_BF_POSITION                               0x0
#define _SSP1STAT_BF_SIZE                                   0x1
#define _SSP1STAT_BF_LENGTH                                 0x1
#define _SSP1STAT_BF_MASK                                   0x1
#define _SSP1STAT_UA_POSN                                   0x1
#define _SSP1STAT_UA_POSITION                               0x1
#define _SSP1STAT_UA_SIZE                                   0x1
#define _SSP1STAT_UA_LENGTH                                 0x1
#define _SSP1STAT_UA_MASK                                   0x2
#define _SSP1STAT_R_nW_POSN                                 0x2
#define _SSP1STAT_R_nW_POSITION                             0x2
#define _SSP1STAT_R_nW_SIZE                                 0x1
#define _SSP1STAT_R_nW_LENGTH                               0x1
#define _SSP1STAT_R_nW_MASK                                 0x4
#define _SSP1STAT_S_POSN                                    0x3
#define _SSP1STAT_S_POSITION                                0x3
#define _SSP1STAT_S_SIZE                                    0x1
#define _SSP1STAT_S_LENGTH                                  0x1
#define _SSP1STAT_S_MASK                                    0x8
#define _SSP1STAT_P_POSN                                    0x4
#define _SSP1STAT_P_POSITION                                0x4
#define _SSP1STAT_P_SIZE                                    0x1
#define _SSP1STAT_P_LENGTH                                  0x1
#define _SSP1STAT_P_MASK                                    0x10
#define _SSP1STAT_D_nA_POSN                                 0x5
#define _SSP1STAT_D_nA_POSITION                             0x5
#define _SSP1STAT_D_nA_SIZE                                 0x1
#define _SSP1STAT_D_nA_LENGTH                               0x1
#define _SSP1STAT_D_nA_MASK                                 0x20
#define _SSP1STAT_CKE_POSN                                  0x6
#define _SSP1STAT_CKE_POSITION                              0x6
#define _SSP1STAT_CKE_SIZE                                  0x1
#define _SSP1STAT_CKE_LENGTH                                0x1
#define _SSP1STAT_CKE_MASK                                  0x40
#define _SSP1STAT_SMP_POSN                                  0x7
#define _SSP1STAT_SMP_POSITION                              0x7
#define _SSP1STAT_SMP_SIZE                                  0x1
#define _SSP1STAT_SMP_LENGTH                                0x1
#define _SSP1STAT_SMP_MASK                                  0x80
#define _SSP1STAT_R_W_POSN                                  0x2
#define _SSP1STAT_R_W_POSITION                              0x2
#define _SSP1STAT_R_W_SIZE                                  0x1
#define _SSP1STAT_R_W_LENGTH                                0x1
#define _SSP1STAT_R_W_MASK                                  0x4
#define _SSP1STAT_D_A_POSN                                  0x5
#define _SSP1STAT_D_A_POSITION                              0x5
#define _SSP1STAT_D_A_SIZE                                  0x1
#define _SSP1STAT_D_A_LENGTH                                0x1
#define _SSP1STAT_D_A_MASK                                  0x20
#define _SSP1STAT_I2C_READ_POSN                             0x2
#define _SSP1STAT_I2C_READ_POSITION                         0x2
#define _SSP1STAT_I2C_READ_SIZE                             0x1
#define _SSP1STAT_I2C_READ_LENGTH                           0x1
#define _SSP1STAT_I2C_READ_MASK                             0x4
#define _SSP1STAT_I2C_START_POSN                            0x3
#define _SSP1STAT_I2C_START_POSITION                        0x3
#define _SSP1STAT_I2C_START_SIZE                            0x1
#define _SSP1STAT_I2C_START_LENGTH                          0x1
#define _SSP1STAT_I2C_START_MASK                            0x8
#define _SSP1STAT_I2C_STOP_POSN                             0x4
#define _SSP1STAT_I2C_STOP_POSITION                         0x4
#define _SSP1STAT_I2C_STOP_SIZE                             0x1
#define _SSP1STAT_I2C_STOP_LENGTH                           0x1
#define _SSP1STAT_I2C_STOP_MASK                             0x10
#define _SSP1STAT_I2C_DAT_POSN                              0x5
#define _SSP1STAT_I2C_DAT_POSITION                          0x5
#define _SSP1STAT_I2C_DAT_SIZE                              0x1
#define _SSP1STAT_I2C_DAT_LENGTH                            0x1
#define _SSP1STAT_I2C_DAT_MASK                              0x20
#define _SSP1STAT_nW_POSN                                   0x2
#define _SSP1STAT_nW_POSITION                               0x2
#define _SSP1STAT_nW_SIZE                                   0x1
#define _SSP1STAT_nW_LENGTH                                 0x1
#define _SSP1STAT_nW_MASK                                   0x4
#define _SSP1STAT_nA_POSN                                   0x5
#define _SSP1STAT_nA_POSITION                               0x5
#define _SSP1STAT_nA_SIZE                                   0x1
#define _SSP1STAT_nA_LENGTH                                 0x1
#define _SSP1STAT_nA_MASK                                   0x20
#define _SSP1STAT_NOT_WRITE_POSN                            0x2
#define _SSP1STAT_NOT_WRITE_POSITION                        0x2
#define _SSP1STAT_NOT_WRITE_SIZE                            0x1
#define _SSP1STAT_NOT_WRITE_LENGTH                          0x1
#define _SSP1STAT_NOT_WRITE_MASK                            0x4
#define _SSP1STAT_NOT_ADDRESS_POSN                          0x5
#define _SSP1STAT_NOT_ADDRESS_POSITION                      0x5
#define _SSP1STAT_NOT_ADDRESS_SIZE                          0x1
#define _SSP1STAT_NOT_ADDRESS_LENGTH                        0x1
#define _SSP1STAT_NOT_ADDRESS_MASK                          0x20
#define _SSP1STAT_nWRITE_POSN                               0x2
#define _SSP1STAT_nWRITE_POSITION                           0x2
#define _SSP1STAT_nWRITE_SIZE                               0x1
#define _SSP1STAT_nWRITE_LENGTH                             0x1
#define _SSP1STAT_nWRITE_MASK                               0x4
#define _SSP1STAT_nADDRESS_POSN                             0x5
#define _SSP1STAT_nADDRESS_POSITION                         0x5
#define _SSP1STAT_nADDRESS_SIZE                             0x1
#define _SSP1STAT_nADDRESS_LENGTH                           0x1
#define _SSP1STAT_nADDRESS_MASK                             0x20
#define _SSP1STAT_READ_WRITE_POSN                           0x2
#define _SSP1STAT_READ_WRITE_POSITION                       0x2
#define _SSP1STAT_READ_WRITE_SIZE                           0x1
#define _SSP1STAT_READ_WRITE_LENGTH                         0x1
#define _SSP1STAT_READ_WRITE_MASK                           0x4
#define _SSP1STAT_DATA_ADDRESS_POSN                         0x5
#define _SSP1STAT_DATA_ADDRESS_POSITION                     0x5
#define _SSP1STAT_DATA_ADDRESS_SIZE                         0x1
#define _SSP1STAT_DATA_ADDRESS_LENGTH                       0x1
#define _SSP1STAT_DATA_ADDRESS_MASK                         0x20
#define _SSP1STAT_R_POSN                                    0x2
#define _SSP1STAT_R_POSITION                                0x2
#define _SSP1STAT_R_SIZE                                    0x1
#define _SSP1STAT_R_LENGTH                                  0x1
#define _SSP1STAT_R_MASK                                    0x4
#define _SSP1STAT_D_POSN                                    0x5
#define _SSP1STAT_D_POSITION                                0x5
#define _SSP1STAT_D_SIZE                                    0x1
#define _SSP1STAT_D_LENGTH                                  0x1
#define _SSP1STAT_D_MASK                                    0x20
#define _SSP1STAT_BF1_POSN                                  0x0
#define _SSP1STAT_BF1_POSITION                              0x0
#define _SSP1STAT_BF1_SIZE                                  0x1
#define _SSP1STAT_BF1_LENGTH                                0x1
#define _SSP1STAT_BF1_MASK                                  0x1
#define _SSP1STAT_UA1_POSN                                  0x1
#define _SSP1STAT_UA1_POSITION                              0x1
#define _SSP1STAT_UA1_SIZE                                  0x1
#define _SSP1STAT_UA1_LENGTH                                0x1
#define _SSP1STAT_UA1_MASK                                  0x2
#define _SSP1STAT_RW_POSN                                   0x2
#define _SSP1STAT_RW_POSITION                               0x2
#define _SSP1STAT_RW_SIZE                                   0x1
#define _SSP1STAT_RW_LENGTH                                 0x1
#define _SSP1STAT_RW_MASK                                   0x4
#define _SSP1STAT_START_POSN                                0x3
#define _SSP1STAT_START_POSITION                            0x3
#define _SSP1STAT_START_SIZE                                0x1
#define _SSP1STAT_START_LENGTH                              0x1
#define _SSP1STAT_START_MASK                                0x8
#define _SSP1STAT_STOP_POSN                                 0x4
#define _SSP1STAT_STOP_POSITION                             0x4
#define _SSP1STAT_STOP_SIZE                                 0x1
#define _SSP1STAT_STOP_LENGTH                               0x1
#define _SSP1STAT_STOP_MASK                                 0x10
#define _SSP1STAT_DA_POSN                                   0x5
#define _SSP1STAT_DA_POSITION                               0x5
#define _SSP1STAT_DA_SIZE                                   0x1
#define _SSP1STAT_DA_LENGTH                                 0x1
#define _SSP1STAT_DA_MASK                                   0x20
#define _SSP1STAT_CKE1_POSN                                 0x6
#define _SSP1STAT_CKE1_POSITION                             0x6
#define _SSP1STAT_CKE1_SIZE                                 0x1
#define _SSP1STAT_CKE1_LENGTH                               0x1
#define _SSP1STAT_CKE1_MASK                                 0x40
#define _SSP1STAT_SMP1_POSN                                 0x7
#define _SSP1STAT_SMP1_POSITION                             0x7
#define _SSP1STAT_SMP1_SIZE                                 0x1
#define _SSP1STAT_SMP1_LENGTH                               0x1
#define _SSP1STAT_SMP1_MASK                                 0x80
#define _SSP1STAT_RW1_POSN                                  0x2
#define _SSP1STAT_RW1_POSITION                              0x2
#define _SSP1STAT_RW1_SIZE                                  0x1
#define _SSP1STAT_RW1_LENGTH                                0x1
#define _SSP1STAT_RW1_MASK                                  0x4
#define _SSP1STAT_START1_POSN                               0x3
#define _SSP1STAT_START1_POSITION                           0x3
#define _SSP1STAT_START1_SIZE                               0x1
#define _SSP1STAT_START1_LENGTH                             0x1
#define _SSP1STAT_START1_MASK                               0x8
#define _SSP1STAT_STOP1_POSN                                0x4
#define _SSP1STAT_STOP1_POSITION                            0x4
#define _SSP1STAT_STOP1_SIZE                                0x1
#define _SSP1STAT_STOP1_LENGTH                              0x1
#define _SSP1STAT_STOP1_MASK                                0x10
#define _SSP1STAT_DA1_POSN                                  0x5
#define _SSP1STAT_DA1_POSITION                              0x5
#define _SSP1STAT_DA1_SIZE                                  0x1
#define _SSP1STAT_DA1_LENGTH                                0x1
#define _SSP1STAT_DA1_MASK                                  0x20
#define _SSP1STAT_NOT_W_POSN                                0x2
#define _SSP1STAT_NOT_W_POSITION                            0x2
#define _SSP1STAT_NOT_W_SIZE                                0x1
#define _SSP1STAT_NOT_W_LENGTH                              0x1
#define _SSP1STAT_NOT_W_MASK                                0x4
#define _SSP1STAT_NOT_A_POSN                                0x5
#define _SSP1STAT_NOT_A_POSITION                            0x5
#define _SSP1STAT_NOT_A_SIZE                                0x1
#define _SSP1STAT_NOT_A_LENGTH                              0x1
#define _SSP1STAT_NOT_A_MASK                                0x20
// alias bitfield definitions
typedef union {
    struct {
        unsigned                        :2;
        unsigned R_NOT_W                :1;
    };
    struct {
        unsigned                        :5;
        unsigned D_NOT_A                :1;
    };
    struct {
        unsigned BF                     :1;
        unsigned UA                     :1;
        unsigned R_nW                   :1;
        unsigned S                      :1;
        unsigned P                      :1;
        unsigned D_nA                   :1;
        unsigned CKE                    :1;
        unsigned SMP                    :1;
    };
    struct {
        unsigned                        :2;
        unsigned R_W                    :1;
        unsigned                        :2;
        unsigned D_A                    :1;
    };
    struct {
        unsigned                        :2;
        unsigned I2C_READ               :1;
        unsigned I2C_START              :1;
        unsigned I2C_STOP               :1;
        unsigned I2C_DAT                :1;
    };
    struct {
        unsigned                        :2;
        unsigned nW                     :1;
        unsigned                        :2;
        unsigned nA                     :1;
    };
    struct {
        unsigned                        :2;
        unsigned NOT_WRITE              :1;
    };
    struct {
        unsigned                        :5;
        unsigned NOT_ADDRESS            :1;
    };
    struct {
        unsigned                        :2;
        unsigned nWRITE                 :1;
        unsigned                        :2;
        unsigned nADDRESS               :1;
    };
    struct {
        unsigned                        :2;
        unsigned READ_WRITE             :1;
        unsigned                        :2;
        unsigned DATA_ADDRESS           :1;
    };
    struct {
        unsigned                        :2;
        unsigned R                      :1;
        unsigned                        :2;
        unsigned D                      :1;
    };
    struct {
        unsigned BF1                    :1;
        unsigned UA1                    :1;
        unsigned RW                     :1;
        unsigned START                  :1;
        unsigned STOP                   :1;
        unsigned DA                     :1;
        unsigned CKE1                   :1;
        unsigned SMP1                   :1;
    };
    struct {
        unsigned                        :2;
        unsigned RW1                    :1;
        unsigned START1                 :1;
        unsigned STOP1                  :1;
        unsigned DA1                    :1;
    };
    struct {
        unsigned                        :2;
        unsigned NOT_W                  :1;
    };
    struct {
        unsigned                        :5;
        unsigned NOT_A                  :1;
    };
} SSPSTATbits_t;
extern volatile SSPSTATbits_t SSPSTATbits __at(0xFC7);
// bitfield macros
#define _SSPSTAT_R_NOT_W_POSN                               0x2
#define _SSPSTAT_R_NOT_W_POSITION                           0x2
#define _SSPSTAT_R_NOT_W_SIZE                               0x1
#define _SSPSTAT_R_NOT_W_LENGTH                             0x1
#define _SSPSTAT_R_NOT_W_MASK                               0x4
#define _SSPSTAT_D_NOT_A_POSN                               0x5
#define _SSPSTAT_D_NOT_A_POSITION                           0x5
#define _SSPSTAT_D_NOT_A_SIZE                               0x1
#define _SSPSTAT_D_NOT_A_LENGTH                             0x1
#define _SSPSTAT_D_NOT_A_MASK                               0x20
#define _SSPSTAT_BF_POSN                                    0x0
#define _SSPSTAT_BF_POSITION                                0x0
#define _SSPSTAT_BF_SIZE                                    0x1
#define _SSPSTAT_BF_LENGTH                                  0x1
#define _SSPSTAT_BF_MASK                                    0x1
#define _SSPSTAT_UA_POSN                                    0x1
#define _SSPSTAT_UA_POSITION                                0x1
#define _SSPSTAT_UA_SIZE                                    0x1
#define _SSPSTAT_UA_LENGTH                                  0x1
#define _SSPSTAT_UA_MASK                                    0x2
#define _SSPSTAT_R_nW_POSN                                  0x2
#define _SSPSTAT_R_nW_POSITION                              0x2
#define _SSPSTAT_R_nW_SIZE                                  0x1
#define _SSPSTAT_R_nW_LENGTH                                0x1
#define _SSPSTAT_R_nW_MASK                                  0x4
#define _SSPSTAT_S_POSN                                     0x3
#define _SSPSTAT_S_POSITION                                 0x3
#define _SSPSTAT_S_SIZE                                     0x1
#define _SSPSTAT_S_LENGTH                                   0x1
#define _SSPSTAT_S_MASK                                     0x8
#define _SSPSTAT_P_POSN                                     0x4
#define _SSPSTAT_P_POSITION                                 0x4
#define _SSPSTAT_P_SIZE                                     0x1
#define _SSPSTAT_P_LENGTH                                   0x1
#define _SSPSTAT_P_MASK                                     0x10
#define _SSPSTAT_D_nA_POSN                                  0x5
#define _SSPSTAT_D_nA_POSITION                              0x5
#define _SSPSTAT_D_nA_SIZE                                  0x1
#define _SSPSTAT_D_nA_LENGTH                                0x1
#define _SSPSTAT_D_nA_MASK                                  0x20
#define _SSPSTAT_CKE_POSN                                   0x6
#define _SSPSTAT_CKE_POSITION                               0x6
#define _SSPSTAT_CKE_SIZE                                   0x1
#define _SSPSTAT_CKE_LENGTH                                 0x1
#define _SSPSTAT_CKE_MASK                                   0x40
#define _SSPSTAT_SMP_POSN                                   0x7
#define _SSPSTAT_SMP_POSITION                               0x7
#define _SSPSTAT_SMP_SIZE                                   0x1
#define _SSPSTAT_SMP_LENGTH                                 0x1
#define _SSPSTAT_SMP_MASK                                   0x80
#define _SSPSTAT_R_W_POSN                                   0x2
#define _SSPSTAT_R_W_POSITION                               0x2
#define _SSPSTAT_R_W_SIZE                                   0x1
#define _SSPSTAT_R_W_LENGTH                                 0x1
#define _SSPSTAT_R_W_MASK                                   0x4
#define _SSPSTAT_D_A_POSN                                   0x5
#define _SSPSTAT_D_A_POSITION                               0x5
#define _SSPSTAT_D_A_SIZE                                   0x1
#define _SSPSTAT_D_A_LENGTH                                 0x1
#define _SSPSTAT_D_A_MASK                                   0x20
#define _SSPSTAT_I2C_READ_POSN                              0x2
#define _SSPSTAT_I2C_READ_POSITION                          0x2
#define _SSPSTAT_I2C_READ_SIZE                              0x1
#define _SSPSTAT_I2C_READ_LENGTH                            0x1
#define _SSPSTAT_I2C_READ_MASK                              0x4
#define _SSPSTAT_I2C_START_POSN                             0x3
#define _SSPSTAT_I2C_START_POSITION                         0x3
#define _SSPSTAT_I2C_START_SIZE                             0x1
#define _SSPSTAT_I2C_START_LENGTH                           0x1
#define _SSPSTAT_I2C_START_MASK                             0x8
#define _SSPSTAT_I2C_STOP_POSN                              0x4
#define _SSPSTAT_I2C_STOP_POSITION                          0x4
#define _SSPSTAT_I2C_STOP_SIZE                              0x1
#define _SSPSTAT_I2C_STOP_LENGTH                            0x1
#define _SSPSTAT_I2C_STOP_MASK                              0x10
#define _SSPSTAT_I2C_DAT_POSN                               0x5
#define _SSPSTAT_I2C_DAT_POSITION                           0x5
#define _SSPSTAT_I2C_DAT_SIZE                               0x1
#define _SSPSTAT_I2C_DAT_LENGTH                             0x1
#define _SSPSTAT_I2C_DAT_MASK                               0x20
#define _SSPSTAT_nW_POSN                                    0x2
#define _SSPSTAT_nW_POSITION                                0x2
#define _SSPSTAT_nW_SIZE                                    0x1
#define _SSPSTAT_nW_LENGTH                                  0x1
#define _SSPSTAT_nW_MASK                                    0x4
#define _SSPSTAT_nA_POSN                                    0x5
#define _SSPSTAT_nA_POSITION                                0x5
#define _SSPSTAT_nA_SIZE                                    0x1
#define _SSPSTAT_nA_LENGTH                                  0x1
#define _SSPSTAT_nA_MASK                                    0x20
#define _SSPSTAT_NOT_WRITE_POSN                             0x2
#define _SSPSTAT_NOT_WRITE_POSITION                         0x2
#define _SSPSTAT_NOT_WRITE_SIZE                             0x1
#define _SSPSTAT_NOT_WRITE_LENGTH                           0x1
#define _SSPSTAT_NOT_WRITE_MASK                             0x4
#define _SSPSTAT_NOT_ADDRESS_POSN                           0x5
#define _SSPSTAT_NOT_ADDRESS_POSITION                       0x5
#define _SSPSTAT_NOT_ADDRESS_SIZE                           0x1
#define _SSPSTAT_NOT_ADDRESS_LENGTH                         0x1
#define _SSPSTAT_NOT_ADDRESS_MASK                           0x20
#define _SSPSTAT_nWRITE_POSN                                0x2
#define _SSPSTAT_nWRITE_POSITION                            0x2
#define _SSPSTAT_nWRITE_SIZE                                0x1
#define _SSPSTAT_nWRITE_LENGTH                              0x1
#define _SSPSTAT_nWRITE_MASK                                0x4
#define _SSPSTAT_nADDRESS_POSN                              0x5
#define _SSPSTAT_nADDRESS_POSITION                          0x5
#define _SSPSTAT_nADDRESS_SIZE                              0x1
#define _SSPSTAT_nADDRESS_LENGTH                            0x1
#define _SSPSTAT_nADDRESS_MASK                              0x20
#define _SSPSTAT_READ_WRITE_POSN                            0x2
#define _SSPSTAT_READ_WRITE_POSITION                        0x2
#define _SSPSTAT_READ_WRITE_SIZE                            0x1
#define _SSPSTAT_READ_WRITE_LENGTH                          0x1
#define _SSPSTAT_READ_WRITE_MASK                            0x4
#define _SSPSTAT_DATA_ADDRESS_POSN                          0x5
#define _SSPSTAT_DATA_ADDRESS_POSITION                      0x5
#define _SSPSTAT_DATA_ADDRESS_SIZE                          0x1
#define _SSPSTAT_DATA_ADDRESS_LENGTH                        0x1
#define _SSPSTAT_DATA_ADDRESS_MASK                          0x20
#define _SSPSTAT_R_POSN                                     0x2
#define _SSPSTAT_R_POSITION                                 0x2
#define _SSPSTAT_R_SIZE                                     0x1
#define _SSPSTAT_R_LENGTH                                   0x1
#define _SSPSTAT_R_MASK                                     0x4
#define _SSPSTAT_D_POSN                                     0x5
#define _SSPSTAT_D_POSITION                                 0x5
#define _SSPSTAT_D_SIZE                                     0x1
#define _SSPSTAT_D_LENGTH                                   0x1
#define _SSPSTAT_D_MASK                                     0x20
#define _SSPSTAT_BF1_POSN                                   0x0
#define _SSPSTAT_BF1_POSITION                               0x0
#define _SSPSTAT_BF1_SIZE                                   0x1
#define _SSPSTAT_BF1_LENGTH                                 0x1
#define _SSPSTAT_BF1_MASK                                   0x1
#define _SSPSTAT_UA1_POSN                                   0x1
#define _SSPSTAT_UA1_POSITION                               0x1
#define _SSPSTAT_UA1_SIZE                                   0x1
#define _SSPSTAT_UA1_LENGTH                                 0x1
#define _SSPSTAT_UA1_MASK                                   0x2
#define _SSPSTAT_RW_POSN                                    0x2
#define _SSPSTAT_RW_POSITION                                0x2
#define _SSPSTAT_RW_SIZE                                    0x1
#define _SSPSTAT_RW_LENGTH                                  0x1
#define _SSPSTAT_RW_MASK                                    0x4
#define _SSPSTAT_START_POSN                                 0x3
#define _SSPSTAT_START_POSITION                             0x3
#define _SSPSTAT_START_SIZE                                 0x1
#define _SSPSTAT_START_LENGTH                               0x1
#define _SSPSTAT_START_MASK                                 0x8
#define _SSPSTAT_STOP_POSN                                  0x4
#define _SSPSTAT_STOP_POSITION                              0x4
#define _SSPSTAT_STOP_SIZE                                  0x1
#define _SSPSTAT_STOP_LENGTH                                0x1
#define _SSPSTAT_STOP_MASK                                  0x10
#define _SSPSTAT_DA_POSN                                    0x5
#define _SSPSTAT_DA_POSITION                                0x5
#define _SSPSTAT_DA_SIZE                                    0x1
#define _SSPSTAT_DA_LENGTH                                  0x1
#define _SSPSTAT_DA_MASK                                    0x20
#define _SSPSTAT_CKE1_POSN                                  0x6
#define _SSPSTAT_CKE1_POSITION                              0x6
#define _SSPSTAT_CKE1_SIZE                                  0x1
#define _SSPSTAT_CKE1_LENGTH                                0x1
#define _SSPSTAT_CKE1_MASK                                  0x40
#define _SSPSTAT_SMP1_POSN                                  0x7
#define _SSPSTAT_SMP1_POSITION                              0x7
#define _SSPSTAT_SMP1_SIZE                                  0x1
#define _SSPSTAT_SMP1_LENGTH                                0x1
#define _SSPSTAT_SMP1_MASK                                  0x80
#define _SSPSTAT_RW1_POSN                                   0x2
#define _SSPSTAT_RW1_POSITION                               0x2
#define _SSPSTAT_RW1_SIZE                                   0x1
#define _SSPSTAT_RW1_LENGTH                                 0x1
#define _SSPSTAT_RW1_MASK                                   0x4
#define _SSPSTAT_START1_POSN                                0x3
#define _SSPSTAT_START1_POSITION                            0x3
#define _SSPSTAT_START1_SIZE                                0x1
#define _SSPSTAT_START1_LENGTH                              0x1
#define _SSPSTAT_START1_MASK                                0x8
#define _SSPSTAT_STOP1_POSN                                 0x4
#define _SSPSTAT_STOP1_POSITION                             0x4
#define _SSPSTAT_STOP1_SIZE                                 0x1
#define _SSPSTAT_STOP1_LENGTH                               0x1
#define _SSPSTAT_STOP1_MASK                                 0x10
#define _SSPSTAT_DA1_POSN                                   0x5
#define _SSPSTAT_DA1_POSITION                               0x5
#define _SSPSTAT_DA1_SIZE                                   0x1
#define _SSPSTAT_DA1_LENGTH                                 0x1
#define _SSPSTAT_DA1_MASK                                   0x20
#define _SSPSTAT_NOT_W_POSN                                 0x2
#define _SSPSTAT_NOT_W_POSITION                             0x2
#define _SSPSTAT_NOT_W_SIZE                                 0x1
#define _SSPSTAT_NOT_W_LENGTH                               0x1
#define _SSPSTAT_NOT_W_MASK                                 0x4
#define _SSPSTAT_NOT_A_POSN                                 0x5
#define _SSPSTAT_NOT_A_POSITION                             0x5
#define _SSPSTAT_NOT_A_SIZE                                 0x1
#define _SSPSTAT_NOT_A_LENGTH                               0x1
#define _SSPSTAT_NOT_A_MASK                                 0x20

// Register: SSP1ADD
#define SSP1ADD SSP1ADD
extern volatile unsigned char           SSP1ADD             __at(0xFC8);
#ifndef _LIB_BUILD
asm("SSP1ADD equ 0FC8h");
#endif
// aliases
extern volatile unsigned char           SSPADD              __at(0xFC8);
#ifndef _LIB_BUILD
asm("SSPADD equ 0FC8h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned MSK0                   :1;
        unsigned MSK1                   :1;
        unsigned MSK2                   :1;
        unsigned MSK3                   :1;
        unsigned MSK4                   :1;
        unsigned MSK5                   :1;
        unsigned MSK6                   :1;
        unsigned MSK7                   :1;
    };
    struct {
        unsigned MSK01                  :1;
        unsigned MSK11                  :1;
        unsigned MSK21                  :1;
        unsigned MSK31                  :1;
        unsigned MSK41                  :1;
        unsigned MSK51                  :1;
        unsigned MSK61                  :1;
        unsigned MSK71                  :1;
    };
} SSP1ADDbits_t;
extern volatile SSP1ADDbits_t SSP1ADDbits __at(0xFC8);
// bitfield macros
#define _SSP1ADD_MSK0_POSN                                  0x0
#define _SSP1ADD_MSK0_POSITION                              0x0
#define _SSP1ADD_MSK0_SIZE                                  0x1
#define _SSP1ADD_MSK0_LENGTH                                0x1
#define _SSP1ADD_MSK0_MASK                                  0x1
#define _SSP1ADD_MSK1_POSN                                  0x1
#define _SSP1ADD_MSK1_POSITION                              0x1
#define _SSP1ADD_MSK1_SIZE                                  0x1
#define _SSP1ADD_MSK1_LENGTH                                0x1
#define _SSP1ADD_MSK1_MASK                                  0x2
#define _SSP1ADD_MSK2_POSN                                  0x2
#define _SSP1ADD_MSK2_POSITION                              0x2
#define _SSP1ADD_MSK2_SIZE                                  0x1
#define _SSP1ADD_MSK2_LENGTH                                0x1
#define _SSP1ADD_MSK2_MASK                                  0x4
#define _SSP1ADD_MSK3_POSN                                  0x3
#define _SSP1ADD_MSK3_POSITION                              0x3
#define _SSP1ADD_MSK3_SIZE                                  0x1
#define _SSP1ADD_MSK3_LENGTH                                0x1
#define _SSP1ADD_MSK3_MASK                                  0x8
#define _SSP1ADD_MSK4_POSN                                  0x4
#define _SSP1ADD_MSK4_POSITION                              0x4
#define _SSP1ADD_MSK4_SIZE                                  0x1
#define _SSP1ADD_MSK4_LENGTH                                0x1
#define _SSP1ADD_MSK4_MASK                                  0x10
#define _SSP1ADD_MSK5_POSN                                  0x5
#define _SSP1ADD_MSK5_POSITION                              0x5
#define _SSP1ADD_MSK5_SIZE                                  0x1
#define _SSP1ADD_MSK5_LENGTH                                0x1
#define _SSP1ADD_MSK5_MASK                                  0x20
#define _SSP1ADD_MSK6_POSN                                  0x6
#define _SSP1ADD_MSK6_POSITION                              0x6
#define _SSP1ADD_MSK6_SIZE                                  0x1
#define _SSP1ADD_MSK6_LENGTH                                0x1
#define _SSP1ADD_MSK6_MASK                                  0x40
#define _SSP1ADD_MSK7_POSN                                  0x7
#define _SSP1ADD_MSK7_POSITION                              0x7
#define _SSP1ADD_MSK7_SIZE                                  0x1
#define _SSP1ADD_MSK7_LENGTH                                0x1
#define _SSP1ADD_MSK7_MASK                                  0x80
#define _SSP1ADD_MSK01_POSN                                 0x0
#define _SSP1ADD_MSK01_POSITION                             0x0
#define _SSP1ADD_MSK01_SIZE                                 0x1
#define _SSP1ADD_MSK01_LENGTH                               0x1
#define _SSP1ADD_MSK01_MASK                                 0x1
#define _SSP1ADD_MSK11_POSN                                 0x1
#define _SSP1ADD_MSK11_POSITION                             0x1
#define _SSP1ADD_MSK11_SIZE                                 0x1
#define _SSP1ADD_MSK11_LENGTH                               0x1
#define _SSP1ADD_MSK11_MASK                                 0x2
#define _SSP1ADD_MSK21_POSN                                 0x2
#define _SSP1ADD_MSK21_POSITION                             0x2
#define _SSP1ADD_MSK21_SIZE                                 0x1
#define _SSP1ADD_MSK21_LENGTH                               0x1
#define _SSP1ADD_MSK21_MASK                                 0x4
#define _SSP1ADD_MSK31_POSN                                 0x3
#define _SSP1ADD_MSK31_POSITION                             0x3
#define _SSP1ADD_MSK31_SIZE                                 0x1
#define _SSP1ADD_MSK31_LENGTH                               0x1
#define _SSP1ADD_MSK31_MASK                                 0x8
#define _SSP1ADD_MSK41_POSN                                 0x4
#define _SSP1ADD_MSK41_POSITION                             0x4
#define _SSP1ADD_MSK41_SIZE                                 0x1
#define _SSP1ADD_MSK41_LENGTH                               0x1
#define _SSP1ADD_MSK41_MASK                                 0x10
#define _SSP1ADD_MSK51_POSN                                 0x5
#define _SSP1ADD_MSK51_POSITION                             0x5
#define _SSP1ADD_MSK51_SIZE                                 0x1
#define _SSP1ADD_MSK51_LENGTH                               0x1
#define _SSP1ADD_MSK51_MASK                                 0x20
#define _SSP1ADD_MSK61_POSN                                 0x6
#define _SSP1ADD_MSK61_POSITION                             0x6
#define _SSP1ADD_MSK61_SIZE                                 0x1
#define _SSP1ADD_MSK61_LENGTH                               0x1
#define _SSP1ADD_MSK61_MASK                                 0x40
#define _SSP1ADD_MSK71_POSN                                 0x7
#define _SSP1ADD_MSK71_POSITION                             0x7
#define _SSP1ADD_MSK71_SIZE                                 0x1
#define _SSP1ADD_MSK71_LENGTH                               0x1
#define _SSP1ADD_MSK71_MASK                                 0x80
// alias bitfield definitions
typedef union {
    struct {
        unsigned MSK0                   :1;
        unsigned MSK1                   :1;
        unsigned MSK2                   :1;
        unsigned MSK3                   :1;
        unsigned MSK4                   :1;
        unsigned MSK5                   :1;
        unsigned MSK6                   :1;
        unsigned MSK7                   :1;
    };
    struct {
        unsigned MSK01                  :1;
        unsigned MSK11                  :1;
        unsigned MSK21                  :1;
        unsigned MSK31                  :1;
        unsigned MSK41                  :1;
        unsigned MSK51                  :1;
        unsigned MSK61                  :1;
        unsigned MSK71                  :1;
    };
} SSPADDbits_t;
extern volatile SSPADDbits_t SSPADDbits __at(0xFC8);
// bitfield macros
#define _SSPADD_MSK0_POSN                                   0x0
#define _SSPADD_MSK0_POSITION                               0x0
#define _SSPADD_MSK0_SIZE                                   0x1
#define _SSPADD_MSK0_LENGTH                                 0x1
#define _SSPADD_MSK0_MASK                                   0x1
#define _SSPADD_MSK1_POSN                                   0x1
#define _SSPADD_MSK1_POSITION                               0x1
#define _SSPADD_MSK1_SIZE                                   0x1
#define _SSPADD_MSK1_LENGTH                                 0x1
#define _SSPADD_MSK1_MASK                                   0x2
#define _SSPADD_MSK2_POSN                                   0x2
#define _SSPADD_MSK2_POSITION                               0x2
#define _SSPADD_MSK2_SIZE                                   0x1
#define _SSPADD_MSK2_LENGTH                                 0x1
#define _SSPADD_MSK2_MASK                                   0x4
#define _SSPADD_MSK3_POSN                                   0x3
#define _SSPADD_MSK3_POSITION                               0x3
#define _SSPADD_MSK3_SIZE                                   0x1
#define _SSPADD_MSK3_LENGTH                                 0x1
#define _SSPADD_MSK3_MASK                                   0x8
#define _SSPADD_MSK4_POSN                                   0x4
#define _SSPADD_MSK4_POSITION                               0x4
#define _SSPADD_MSK4_SIZE                                   0x1
#define _SSPADD_MSK4_LENGTH                                 0x1
#define _SSPADD_MSK4_MASK                                   0x10
#define _SSPADD_MSK5_POSN                                   0x5
#define _SSPADD_MSK5_POSITION                               0x5
#define _SSPADD_MSK5_SIZE                                   0x1
#define _SSPADD_MSK5_LENGTH                                 0x1
#define _SSPADD_MSK5_MASK                                   0x20
#define _SSPADD_MSK6_POSN                                   0x6
#define _SSPADD_MSK6_POSITION                               0x6
#define _SSPADD_MSK6_SIZE                                   0x1
#define _SSPADD_MSK6_LENGTH                                 0x1
#define _SSPADD_MSK6_MASK                                   0x40
#define _SSPADD_MSK7_POSN                                   0x7
#define _SSPADD_MSK7_POSITION                               0x7
#define _SSPADD_MSK7_SIZE                                   0x1
#define _SSPADD_MSK7_LENGTH                                 0x1
#define _SSPADD_MSK7_MASK                                   0x80
#define _SSPADD_MSK01_POSN                                  0x0
#define _SSPADD_MSK01_POSITION                              0x0
#define _SSPADD_MSK01_SIZE                                  0x1
#define _SSPADD_MSK01_LENGTH                                0x1
#define _SSPADD_MSK01_MASK                                  0x1
#define _SSPADD_MSK11_POSN                                  0x1
#define _SSPADD_MSK11_POSITION                              0x1
#define _SSPADD_MSK11_SIZE                                  0x1
#define _SSPADD_MSK11_LENGTH                                0x1
#define _SSPADD_MSK11_MASK                                  0x2
#define _SSPADD_MSK21_POSN                                  0x2
#define _SSPADD_MSK21_POSITION                              0x2
#define _SSPADD_MSK21_SIZE                                  0x1
#define _SSPADD_MSK21_LENGTH                                0x1
#define _SSPADD_MSK21_MASK                                  0x4
#define _SSPADD_MSK31_POSN                                  0x3
#define _SSPADD_MSK31_POSITION                              0x3
#define _SSPADD_MSK31_SIZE                                  0x1
#define _SSPADD_MSK31_LENGTH                                0x1
#define _SSPADD_MSK31_MASK                                  0x8
#define _SSPADD_MSK41_POSN                                  0x4
#define _SSPADD_MSK41_POSITION                              0x4
#define _SSPADD_MSK41_SIZE                                  0x1
#define _SSPADD_MSK41_LENGTH                                0x1
#define _SSPADD_MSK41_MASK                                  0x10
#define _SSPADD_MSK51_POSN                                  0x5
#define _SSPADD_MSK51_POSITION                              0x5
#define _SSPADD_MSK51_SIZE                                  0x1
#define _SSPADD_MSK51_LENGTH                                0x1
#define _SSPADD_MSK51_MASK                                  0x20
#define _SSPADD_MSK61_POSN                                  0x6
#define _SSPADD_MSK61_POSITION                              0x6
#define _SSPADD_MSK61_SIZE                                  0x1
#define _SSPADD_MSK61_LENGTH                                0x1
#define _SSPADD_MSK61_MASK                                  0x40
#define _SSPADD_MSK71_POSN                                  0x7
#define _SSPADD_MSK71_POSITION                              0x7
#define _SSPADD_MSK71_SIZE                                  0x1
#define _SSPADD_MSK71_LENGTH                                0x1
#define _SSPADD_MSK71_MASK                                  0x80

// Register: SSP1BUF
#define SSP1BUF SSP1BUF
extern volatile unsigned char           SSP1BUF             __at(0xFC9);
#ifndef _LIB_BUILD
asm("SSP1BUF equ 0FC9h");
#endif
// aliases
extern volatile unsigned char           SSPBUF              __at(0xFC9);
#ifndef _LIB_BUILD
asm("SSPBUF equ 0FC9h");
#endif

// Register: T2CON
#define T2CON T2CON
extern volatile unsigned char           T2CON               __at(0xFCA);
#ifndef _LIB_BUILD
asm("T2CON equ 0FCAh");
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
        unsigned T2OUTPS0               :1;
        unsigned T2OUTPS1               :1;
        unsigned T2OUTPS2               :1;
        unsigned T2OUTPS3               :1;
    };
} T2CONbits_t;
extern volatile T2CONbits_t T2CONbits __at(0xFCA);
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
#define _T2CON_T2OUTPS0_POSN                                0x3
#define _T2CON_T2OUTPS0_POSITION                            0x3
#define _T2CON_T2OUTPS0_SIZE                                0x1
#define _T2CON_T2OUTPS0_LENGTH                              0x1
#define _T2CON_T2OUTPS0_MASK                                0x8
#define _T2CON_T2OUTPS1_POSN                                0x4
#define _T2CON_T2OUTPS1_POSITION                            0x4
#define _T2CON_T2OUTPS1_SIZE                                0x1
#define _T2CON_T2OUTPS1_LENGTH                              0x1
#define _T2CON_T2OUTPS1_MASK                                0x10
#define _T2CON_T2OUTPS2_POSN                                0x5
#define _T2CON_T2OUTPS2_POSITION                            0x5
#define _T2CON_T2OUTPS2_SIZE                                0x1
#define _T2CON_T2OUTPS2_LENGTH                              0x1
#define _T2CON_T2OUTPS2_MASK                                0x20
#define _T2CON_T2OUTPS3_POSN                                0x6
#define _T2CON_T2OUTPS3_POSITION                            0x6
#define _T2CON_T2OUTPS3_SIZE                                0x1
#define _T2CON_T2OUTPS3_LENGTH                              0x1
#define _T2CON_T2OUTPS3_MASK                                0x40

// Register: PR2
#define PR2 PR2
extern volatile unsigned char           PR2                 __at(0xFCB);
#ifndef _LIB_BUILD
asm("PR2 equ 0FCBh");
#endif
// aliases
extern volatile unsigned char           MEMCON              __at(0xFCB);
#ifndef _LIB_BUILD
asm("MEMCON equ 0FCBh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :7;
        unsigned EBDIS                  :1;
    };
    struct {
        unsigned                        :4;
        unsigned WAIT0                  :1;
    };
    struct {
        unsigned                        :5;
        unsigned WAIT1                  :1;
    };
    struct {
        unsigned WM0                    :1;
    };
    struct {
        unsigned                        :1;
        unsigned WM1                    :1;
    };
} PR2bits_t;
extern volatile PR2bits_t PR2bits __at(0xFCB);
// bitfield macros
#define _PR2_EBDIS_POSN                                     0x7
#define _PR2_EBDIS_POSITION                                 0x7
#define _PR2_EBDIS_SIZE                                     0x1
#define _PR2_EBDIS_LENGTH                                   0x1
#define _PR2_EBDIS_MASK                                     0x80
#define _PR2_WAIT0_POSN                                     0x4
#define _PR2_WAIT0_POSITION                                 0x4
#define _PR2_WAIT0_SIZE                                     0x1
#define _PR2_WAIT0_LENGTH                                   0x1
#define _PR2_WAIT0_MASK                                     0x10
#define _PR2_WAIT1_POSN                                     0x5
#define _PR2_WAIT1_POSITION                                 0x5
#define _PR2_WAIT1_SIZE                                     0x1
#define _PR2_WAIT1_LENGTH                                   0x1
#define _PR2_WAIT1_MASK                                     0x20
#define _PR2_WM0_POSN                                       0x0
#define _PR2_WM0_POSITION                                   0x0
#define _PR2_WM0_SIZE                                       0x1
#define _PR2_WM0_LENGTH                                     0x1
#define _PR2_WM0_MASK                                       0x1
#define _PR2_WM1_POSN                                       0x1
#define _PR2_WM1_POSITION                                   0x1
#define _PR2_WM1_SIZE                                       0x1
#define _PR2_WM1_LENGTH                                     0x1
#define _PR2_WM1_MASK                                       0x2
// alias bitfield definitions
typedef union {
    struct {
        unsigned                        :7;
        unsigned EBDIS                  :1;
    };
    struct {
        unsigned                        :4;
        unsigned WAIT0                  :1;
    };
    struct {
        unsigned                        :5;
        unsigned WAIT1                  :1;
    };
    struct {
        unsigned WM0                    :1;
    };
    struct {
        unsigned                        :1;
        unsigned WM1                    :1;
    };
} MEMCONbits_t;
extern volatile MEMCONbits_t MEMCONbits __at(0xFCB);
// bitfield macros
#define _MEMCON_EBDIS_POSN                                  0x7
#define _MEMCON_EBDIS_POSITION                              0x7
#define _MEMCON_EBDIS_SIZE                                  0x1
#define _MEMCON_EBDIS_LENGTH                                0x1
#define _MEMCON_EBDIS_MASK                                  0x80
#define _MEMCON_WAIT0_POSN                                  0x4
#define _MEMCON_WAIT0_POSITION                              0x4
#define _MEMCON_WAIT0_SIZE                                  0x1
#define _MEMCON_WAIT0_LENGTH                                0x1
#define _MEMCON_WAIT0_MASK                                  0x10
#define _MEMCON_WAIT1_POSN                                  0x5
#define _MEMCON_WAIT1_POSITION                              0x5
#define _MEMCON_WAIT1_SIZE                                  0x1
#define _MEMCON_WAIT1_LENGTH                                0x1
#define _MEMCON_WAIT1_MASK                                  0x20
#define _MEMCON_WM0_POSN                                    0x0
#define _MEMCON_WM0_POSITION                                0x0
#define _MEMCON_WM0_SIZE                                    0x1
#define _MEMCON_WM0_LENGTH                                  0x1
#define _MEMCON_WM0_MASK                                    0x1
#define _MEMCON_WM1_POSN                                    0x1
#define _MEMCON_WM1_POSITION                                0x1
#define _MEMCON_WM1_SIZE                                    0x1
#define _MEMCON_WM1_LENGTH                                  0x1
#define _MEMCON_WM1_MASK                                    0x2

// Register: TMR2
#define TMR2 TMR2
extern volatile unsigned char           TMR2                __at(0xFCC);
#ifndef _LIB_BUILD
asm("TMR2 equ 0FCCh");
#endif

// Register: T1CON
#define T1CON T1CON
extern volatile unsigned char           T1CON               __at(0xFCD);
#ifndef _LIB_BUILD
asm("T1CON equ 0FCDh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :2;
        unsigned NOT_T1SYNC             :1;
    };
    struct {
        unsigned TMR1ON                 :1;
        unsigned TMR1CS                 :1;
        unsigned nT1SYNC                :1;
        unsigned T1OSCEN                :1;
        unsigned T1CKPS                 :2;
        unsigned T1RUN                  :1;
        unsigned RD16                   :1;
    };
    struct {
        unsigned                        :2;
        unsigned T1SYNC                 :1;
        unsigned                        :1;
        unsigned T1CKPS0                :1;
        unsigned T1CKPS1                :1;
    };
    struct {
        unsigned                        :2;
        unsigned T1INSYNC               :1;
    };
    struct {
        unsigned                        :3;
        unsigned SOSCEN                 :1;
        unsigned                        :3;
        unsigned T1RD16                 :1;
    };
} T1CONbits_t;
extern volatile T1CONbits_t T1CONbits __at(0xFCD);
// bitfield macros
#define _T1CON_NOT_T1SYNC_POSN                              0x2
#define _T1CON_NOT_T1SYNC_POSITION                          0x2
#define _T1CON_NOT_T1SYNC_SIZE                              0x1
#define _T1CON_NOT_T1SYNC_LENGTH                            0x1
#define _T1CON_NOT_T1SYNC_MASK                              0x4
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
#define _T1CON_T1RUN_POSN                                   0x6
#define _T1CON_T1RUN_POSITION                               0x6
#define _T1CON_T1RUN_SIZE                                   0x1
#define _T1CON_T1RUN_LENGTH                                 0x1
#define _T1CON_T1RUN_MASK                                   0x40
#define _T1CON_RD16_POSN                                    0x7
#define _T1CON_RD16_POSITION                                0x7
#define _T1CON_RD16_SIZE                                    0x1
#define _T1CON_RD16_LENGTH                                  0x1
#define _T1CON_RD16_MASK                                    0x80
#define _T1CON_T1SYNC_POSN                                  0x2
#define _T1CON_T1SYNC_POSITION                              0x2
#define _T1CON_T1SYNC_SIZE                                  0x1
#define _T1CON_T1SYNC_LENGTH                                0x1
#define _T1CON_T1SYNC_MASK                                  0x4
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
#define _T1CON_T1INSYNC_POSN                                0x2
#define _T1CON_T1INSYNC_POSITION                            0x2
#define _T1CON_T1INSYNC_SIZE                                0x1
#define _T1CON_T1INSYNC_LENGTH                              0x1
#define _T1CON_T1INSYNC_MASK                                0x4
#define _T1CON_SOSCEN_POSN                                  0x3
#define _T1CON_SOSCEN_POSITION                              0x3
#define _T1CON_SOSCEN_SIZE                                  0x1
#define _T1CON_SOSCEN_LENGTH                                0x1
#define _T1CON_SOSCEN_MASK                                  0x8
#define _T1CON_T1RD16_POSN                                  0x7
#define _T1CON_T1RD16_POSITION                              0x7
#define _T1CON_T1RD16_SIZE                                  0x1
#define _T1CON_T1RD16_LENGTH                                0x1
#define _T1CON_T1RD16_MASK                                  0x80

// Register: TMR1
#define TMR1 TMR1
extern volatile unsigned short          TMR1                __at(0xFCE);
#ifndef _LIB_BUILD
asm("TMR1 equ 0FCEh");
#endif

// Register: TMR1L
#define TMR1L TMR1L
extern volatile unsigned char           TMR1L               __at(0xFCE);
#ifndef _LIB_BUILD
asm("TMR1L equ 0FCEh");
#endif

// Register: TMR1H
#define TMR1H TMR1H
extern volatile unsigned char           TMR1H               __at(0xFCF);
#ifndef _LIB_BUILD
asm("TMR1H equ 0FCFh");
#endif

// Register: RCON
#define RCON RCON
extern volatile unsigned char           RCON                __at(0xFD0);
#ifndef _LIB_BUILD
asm("RCON equ 0FD0h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned NOT_BOR                :1;
    };
    struct {
        unsigned                        :1;
        unsigned NOT_POR                :1;
    };
    struct {
        unsigned                        :2;
        unsigned NOT_PD                 :1;
    };
    struct {
        unsigned                        :3;
        unsigned NOT_TO                 :1;
    };
    struct {
        unsigned                        :4;
        unsigned NOT_RI                 :1;
    };
    struct {
        unsigned                        :5;
        unsigned NOT_CM                 :1;
    };
    struct {
        unsigned nBOR                   :1;
        unsigned nPOR                   :1;
        unsigned nPD                    :1;
        unsigned nTO                    :1;
        unsigned nRI                    :1;
        unsigned nCM                    :1;
        unsigned                        :1;
        unsigned IPEN                   :1;
    };
    struct {
        unsigned BOR                    :1;
        unsigned POR                    :1;
        unsigned PD                     :1;
        unsigned TO                     :1;
        unsigned RI                     :1;
        unsigned CM                     :1;
    };
} RCONbits_t;
extern volatile RCONbits_t RCONbits __at(0xFD0);
// bitfield macros
#define _RCON_NOT_BOR_POSN                                  0x0
#define _RCON_NOT_BOR_POSITION                              0x0
#define _RCON_NOT_BOR_SIZE                                  0x1
#define _RCON_NOT_BOR_LENGTH                                0x1
#define _RCON_NOT_BOR_MASK                                  0x1
#define _RCON_NOT_POR_POSN                                  0x1
#define _RCON_NOT_POR_POSITION                              0x1
#define _RCON_NOT_POR_SIZE                                  0x1
#define _RCON_NOT_POR_LENGTH                                0x1
#define _RCON_NOT_POR_MASK                                  0x2
#define _RCON_NOT_PD_POSN                                   0x2
#define _RCON_NOT_PD_POSITION                               0x2
#define _RCON_NOT_PD_SIZE                                   0x1
#define _RCON_NOT_PD_LENGTH                                 0x1
#define _RCON_NOT_PD_MASK                                   0x4
#define _RCON_NOT_TO_POSN                                   0x3
#define _RCON_NOT_TO_POSITION                               0x3
#define _RCON_NOT_TO_SIZE                                   0x1
#define _RCON_NOT_TO_LENGTH                                 0x1
#define _RCON_NOT_TO_MASK                                   0x8
#define _RCON_NOT_RI_POSN                                   0x4
#define _RCON_NOT_RI_POSITION                               0x4
#define _RCON_NOT_RI_SIZE                                   0x1
#define _RCON_NOT_RI_LENGTH                                 0x1
#define _RCON_NOT_RI_MASK                                   0x10
#define _RCON_NOT_CM_POSN                                   0x5
#define _RCON_NOT_CM_POSITION                               0x5
#define _RCON_NOT_CM_SIZE                                   0x1
#define _RCON_NOT_CM_LENGTH                                 0x1
#define _RCON_NOT_CM_MASK                                   0x20
#define _RCON_nBOR_POSN                                     0x0
#define _RCON_nBOR_POSITION                                 0x0
#define _RCON_nBOR_SIZE                                     0x1
#define _RCON_nBOR_LENGTH                                   0x1
#define _RCON_nBOR_MASK                                     0x1
#define _RCON_nPOR_POSN                                     0x1
#define _RCON_nPOR_POSITION                                 0x1
#define _RCON_nPOR_SIZE                                     0x1
#define _RCON_nPOR_LENGTH                                   0x1
#define _RCON_nPOR_MASK                                     0x2
#define _RCON_nPD_POSN                                      0x2
#define _RCON_nPD_POSITION                                  0x2
#define _RCON_nPD_SIZE                                      0x1
#define _RCON_nPD_LENGTH                                    0x1
#define _RCON_nPD_MASK                                      0x4
#define _RCON_nTO_POSN                                      0x3
#define _RCON_nTO_POSITION                                  0x3
#define _RCON_nTO_SIZE                                      0x1
#define _RCON_nTO_LENGTH                                    0x1
#define _RCON_nTO_MASK                                      0x8
#define _RCON_nRI_POSN                                      0x4
#define _RCON_nRI_POSITION                                  0x4
#define _RCON_nRI_SIZE                                      0x1
#define _RCON_nRI_LENGTH                                    0x1
#define _RCON_nRI_MASK                                      0x10
#define _RCON_nCM_POSN                                      0x5
#define _RCON_nCM_POSITION                                  0x5
#define _RCON_nCM_SIZE                                      0x1
#define _RCON_nCM_LENGTH                                    0x1
#define _RCON_nCM_MASK                                      0x20
#define _RCON_IPEN_POSN                                     0x7
#define _RCON_IPEN_POSITION                                 0x7
#define _RCON_IPEN_SIZE                                     0x1
#define _RCON_IPEN_LENGTH                                   0x1
#define _RCON_IPEN_MASK                                     0x80
#define _RCON_BOR_POSN                                      0x0
#define _RCON_BOR_POSITION                                  0x0
#define _RCON_BOR_SIZE                                      0x1
#define _RCON_BOR_LENGTH                                    0x1
#define _RCON_BOR_MASK                                      0x1
#define _RCON_POR_POSN                                      0x1
#define _RCON_POR_POSITION                                  0x1
#define _RCON_POR_SIZE                                      0x1
#define _RCON_POR_LENGTH                                    0x1
#define _RCON_POR_MASK                                      0x2
#define _RCON_PD_POSN                                       0x2
#define _RCON_PD_POSITION                                   0x2
#define _RCON_PD_SIZE                                       0x1
#define _RCON_PD_LENGTH                                     0x1
#define _RCON_PD_MASK                                       0x4
#define _RCON_TO_POSN                                       0x3
#define _RCON_TO_POSITION                                   0x3
#define _RCON_TO_SIZE                                       0x1
#define _RCON_TO_LENGTH                                     0x1
#define _RCON_TO_MASK                                       0x8
#define _RCON_RI_POSN                                       0x4
#define _RCON_RI_POSITION                                   0x4
#define _RCON_RI_SIZE                                       0x1
#define _RCON_RI_LENGTH                                     0x1
#define _RCON_RI_MASK                                       0x10
#define _RCON_CM_POSN                                       0x5
#define _RCON_CM_POSITION                                   0x5
#define _RCON_CM_SIZE                                       0x1
#define _RCON_CM_LENGTH                                     0x1
#define _RCON_CM_MASK                                       0x20

// Register: WDTCON
#define WDTCON WDTCON
extern volatile unsigned char           WDTCON              __at(0xFD1);
#ifndef _LIB_BUILD
asm("WDTCON equ 0FD1h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned SWDTEN                 :1;
    };
    struct {
        unsigned SWDTE                  :1;
    };
} WDTCONbits_t;
extern volatile WDTCONbits_t WDTCONbits __at(0xFD1);
// bitfield macros
#define _WDTCON_SWDTEN_POSN                                 0x0
#define _WDTCON_SWDTEN_POSITION                             0x0
#define _WDTCON_SWDTEN_SIZE                                 0x1
#define _WDTCON_SWDTEN_LENGTH                               0x1
#define _WDTCON_SWDTEN_MASK                                 0x1
#define _WDTCON_SWDTE_POSN                                  0x0
#define _WDTCON_SWDTE_POSITION                              0x0
#define _WDTCON_SWDTE_SIZE                                  0x1
#define _WDTCON_SWDTE_LENGTH                                0x1
#define _WDTCON_SWDTE_MASK                                  0x1

// Register: ECON1
#define ECON1 ECON1
extern volatile unsigned char           ECON1               __at(0xFD2);
#ifndef _LIB_BUILD
asm("ECON1 equ 0FD2h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :2;
        unsigned RXEN                   :1;
        unsigned TXRTS                  :1;
        unsigned CSUMEN                 :1;
        unsigned DMAST                  :1;
        unsigned RXRST                  :1;
        unsigned TXRST                  :1;
    };
} ECON1bits_t;
extern volatile ECON1bits_t ECON1bits __at(0xFD2);
// bitfield macros
#define _ECON1_RXEN_POSN                                    0x2
#define _ECON1_RXEN_POSITION                                0x2
#define _ECON1_RXEN_SIZE                                    0x1
#define _ECON1_RXEN_LENGTH                                  0x1
#define _ECON1_RXEN_MASK                                    0x4
#define _ECON1_TXRTS_POSN                                   0x3
#define _ECON1_TXRTS_POSITION                               0x3
#define _ECON1_TXRTS_SIZE                                   0x1
#define _ECON1_TXRTS_LENGTH                                 0x1
#define _ECON1_TXRTS_MASK                                   0x8
#define _ECON1_CSUMEN_POSN                                  0x4
#define _ECON1_CSUMEN_POSITION                              0x4
#define _ECON1_CSUMEN_SIZE                                  0x1
#define _ECON1_CSUMEN_LENGTH                                0x1
#define _ECON1_CSUMEN_MASK                                  0x10
#define _ECON1_DMAST_POSN                                   0x5
#define _ECON1_DMAST_POSITION                               0x5
#define _ECON1_DMAST_SIZE                                   0x1
#define _ECON1_DMAST_LENGTH                                 0x1
#define _ECON1_DMAST_MASK                                   0x20
#define _ECON1_RXRST_POSN                                   0x6
#define _ECON1_RXRST_POSITION                               0x6
#define _ECON1_RXRST_SIZE                                   0x1
#define _ECON1_RXRST_LENGTH                                 0x1
#define _ECON1_RXRST_MASK                                   0x40
#define _ECON1_TXRST_POSN                                   0x7
#define _ECON1_TXRST_POSITION                               0x7
#define _ECON1_TXRST_SIZE                                   0x1
#define _ECON1_TXRST_LENGTH                                 0x1
#define _ECON1_TXRST_MASK                                   0x80

// Register: OSCCON
#define OSCCON OSCCON
extern volatile unsigned char           OSCCON              __at(0xFD3);
#ifndef _LIB_BUILD
asm("OSCCON equ 0FD3h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned SCS                    :2;
        unsigned                        :1;
        unsigned OSTS                   :1;
        unsigned                        :3;
        unsigned IDLEN                  :1;
    };
    struct {
        unsigned SCS0                   :1;
        unsigned SCS1                   :1;
    };
} OSCCONbits_t;
extern volatile OSCCONbits_t OSCCONbits __at(0xFD3);
// bitfield macros
#define _OSCCON_SCS_POSN                                    0x0
#define _OSCCON_SCS_POSITION                                0x0
#define _OSCCON_SCS_SIZE                                    0x2
#define _OSCCON_SCS_LENGTH                                  0x2
#define _OSCCON_SCS_MASK                                    0x3
#define _OSCCON_OSTS_POSN                                   0x3
#define _OSCCON_OSTS_POSITION                               0x3
#define _OSCCON_OSTS_SIZE                                   0x1
#define _OSCCON_OSTS_LENGTH                                 0x1
#define _OSCCON_OSTS_MASK                                   0x8
#define _OSCCON_IDLEN_POSN                                  0x7
#define _OSCCON_IDLEN_POSITION                              0x7
#define _OSCCON_IDLEN_SIZE                                  0x1
#define _OSCCON_IDLEN_LENGTH                                0x1
#define _OSCCON_IDLEN_MASK                                  0x80
#define _OSCCON_SCS0_POSN                                   0x0
#define _OSCCON_SCS0_POSITION                               0x0
#define _OSCCON_SCS0_SIZE                                   0x1
#define _OSCCON_SCS0_LENGTH                                 0x1
#define _OSCCON_SCS0_MASK                                   0x1
#define _OSCCON_SCS1_POSN                                   0x1
#define _OSCCON_SCS1_POSITION                               0x1
#define _OSCCON_SCS1_SIZE                                   0x1
#define _OSCCON_SCS1_LENGTH                                 0x1
#define _OSCCON_SCS1_MASK                                   0x2

// Register: T0CON
#define T0CON T0CON
extern volatile unsigned char           T0CON               __at(0xFD5);
#ifndef _LIB_BUILD
asm("T0CON equ 0FD5h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned T0PS                   :3;
        unsigned PSA                    :1;
        unsigned T0SE                   :1;
        unsigned T0CS                   :1;
        unsigned T08BIT                 :1;
        unsigned TMR0ON                 :1;
    };
    struct {
        unsigned T0PS0                  :1;
        unsigned T0PS1                  :1;
        unsigned T0PS2                  :1;
    };
} T0CONbits_t;
extern volatile T0CONbits_t T0CONbits __at(0xFD5);
// bitfield macros
#define _T0CON_T0PS_POSN                                    0x0
#define _T0CON_T0PS_POSITION                                0x0
#define _T0CON_T0PS_SIZE                                    0x3
#define _T0CON_T0PS_LENGTH                                  0x3
#define _T0CON_T0PS_MASK                                    0x7
#define _T0CON_PSA_POSN                                     0x3
#define _T0CON_PSA_POSITION                                 0x3
#define _T0CON_PSA_SIZE                                     0x1
#define _T0CON_PSA_LENGTH                                   0x1
#define _T0CON_PSA_MASK                                     0x8
#define _T0CON_T0SE_POSN                                    0x4
#define _T0CON_T0SE_POSITION                                0x4
#define _T0CON_T0SE_SIZE                                    0x1
#define _T0CON_T0SE_LENGTH                                  0x1
#define _T0CON_T0SE_MASK                                    0x10
#define _T0CON_T0CS_POSN                                    0x5
#define _T0CON_T0CS_POSITION                                0x5
#define _T0CON_T0CS_SIZE                                    0x1
#define _T0CON_T0CS_LENGTH                                  0x1
#define _T0CON_T0CS_MASK                                    0x20
#define _T0CON_T08BIT_POSN                                  0x6
#define _T0CON_T08BIT_POSITION                              0x6
#define _T0CON_T08BIT_SIZE                                  0x1
#define _T0CON_T08BIT_LENGTH                                0x1
#define _T0CON_T08BIT_MASK                                  0x40
#define _T0CON_TMR0ON_POSN                                  0x7
#define _T0CON_TMR0ON_POSITION                              0x7
#define _T0CON_TMR0ON_SIZE                                  0x1
#define _T0CON_TMR0ON_LENGTH                                0x1
#define _T0CON_TMR0ON_MASK                                  0x80
#define _T0CON_T0PS0_POSN                                   0x0
#define _T0CON_T0PS0_POSITION                               0x0
#define _T0CON_T0PS0_SIZE                                   0x1
#define _T0CON_T0PS0_LENGTH                                 0x1
#define _T0CON_T0PS0_MASK                                   0x1
#define _T0CON_T0PS1_POSN                                   0x1
#define _T0CON_T0PS1_POSITION                               0x1
#define _T0CON_T0PS1_SIZE                                   0x1
#define _T0CON_T0PS1_LENGTH                                 0x1
#define _T0CON_T0PS1_MASK                                   0x2
#define _T0CON_T0PS2_POSN                                   0x2
#define _T0CON_T0PS2_POSITION                               0x2
#define _T0CON_T0PS2_SIZE                                   0x1
#define _T0CON_T0PS2_LENGTH                                 0x1
#define _T0CON_T0PS2_MASK                                   0x4

// Register: TMR0
#define TMR0 TMR0
extern volatile unsigned short          TMR0                __at(0xFD6);
#ifndef _LIB_BUILD
asm("TMR0 equ 0FD6h");
#endif

// Register: TMR0L
#define TMR0L TMR0L
extern volatile unsigned char           TMR0L               __at(0xFD6);
#ifndef _LIB_BUILD
asm("TMR0L equ 0FD6h");
#endif

// Register: TMR0H
#define TMR0H TMR0H
extern volatile unsigned char           TMR0H               __at(0xFD7);
#ifndef _LIB_BUILD
asm("TMR0H equ 0FD7h");
#endif

// Register: STATUS
#define STATUS STATUS
extern volatile unsigned char           STATUS              __at(0xFD8);
#ifndef _LIB_BUILD
asm("STATUS equ 0FD8h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned C                      :1;
        unsigned DC                     :1;
        unsigned Z                      :1;
        unsigned OV                     :1;
        unsigned N                      :1;
    };
    struct {
        unsigned CARRY                  :1;
        unsigned                        :1;
        unsigned ZERO                   :1;
        unsigned OVERFLOW               :1;
        unsigned NEGATIVE               :1;
    };
} STATUSbits_t;
extern volatile STATUSbits_t STATUSbits __at(0xFD8);
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
#define _STATUS_OV_POSN                                     0x3
#define _STATUS_OV_POSITION                                 0x3
#define _STATUS_OV_SIZE                                     0x1
#define _STATUS_OV_LENGTH                                   0x1
#define _STATUS_OV_MASK                                     0x8
#define _STATUS_N_POSN                                      0x4
#define _STATUS_N_POSITION                                  0x4
#define _STATUS_N_SIZE                                      0x1
#define _STATUS_N_LENGTH                                    0x1
#define _STATUS_N_MASK                                      0x10
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
#define _STATUS_OVERFLOW_POSN                               0x3
#define _STATUS_OVERFLOW_POSITION                           0x3
#define _STATUS_OVERFLOW_SIZE                               0x1
#define _STATUS_OVERFLOW_LENGTH                             0x1
#define _STATUS_OVERFLOW_MASK                               0x8
#define _STATUS_NEGATIVE_POSN                               0x4
#define _STATUS_NEGATIVE_POSITION                           0x4
#define _STATUS_NEGATIVE_SIZE                               0x1
#define _STATUS_NEGATIVE_LENGTH                             0x1
#define _STATUS_NEGATIVE_MASK                               0x10

// Register: FSR2
#define FSR2 FSR2
extern volatile unsigned short          FSR2                __at(0xFD9);
#ifndef _LIB_BUILD
asm("FSR2 equ 0FD9h");
#endif

// Register: FSR2L
#define FSR2L FSR2L
extern volatile unsigned char           FSR2L               __at(0xFD9);
#ifndef _LIB_BUILD
asm("FSR2L equ 0FD9h");
#endif

// Register: FSR2H
#define FSR2H FSR2H
extern volatile unsigned char           FSR2H               __at(0xFDA);
#ifndef _LIB_BUILD
asm("FSR2H equ 0FDAh");
#endif

// Register: PLUSW2
#define PLUSW2 PLUSW2
extern volatile unsigned char           PLUSW2              __at(0xFDB);
#ifndef _LIB_BUILD
asm("PLUSW2 equ 0FDBh");
#endif

// Register: PREINC2
#define PREINC2 PREINC2
extern volatile unsigned char           PREINC2             __at(0xFDC);
#ifndef _LIB_BUILD
asm("PREINC2 equ 0FDCh");
#endif

// Register: POSTDEC2
#define POSTDEC2 POSTDEC2
extern volatile unsigned char           POSTDEC2            __at(0xFDD);
#ifndef _LIB_BUILD
asm("POSTDEC2 equ 0FDDh");
#endif

// Register: POSTINC2
#define POSTINC2 POSTINC2
extern volatile unsigned char           POSTINC2            __at(0xFDE);
#ifndef _LIB_BUILD
asm("POSTINC2 equ 0FDEh");
#endif

// Register: INDF2
#define INDF2 INDF2
extern volatile unsigned char           INDF2               __at(0xFDF);
#ifndef _LIB_BUILD
asm("INDF2 equ 0FDFh");
#endif

// Register: BSR
#define BSR BSR
extern volatile unsigned char           BSR                 __at(0xFE0);
#ifndef _LIB_BUILD
asm("BSR equ 0FE0h");
#endif

// Register: FSR1
#define FSR1 FSR1
extern volatile unsigned short          FSR1                __at(0xFE1);
#ifndef _LIB_BUILD
asm("FSR1 equ 0FE1h");
#endif

// Register: FSR1L
#define FSR1L FSR1L
extern volatile unsigned char           FSR1L               __at(0xFE1);
#ifndef _LIB_BUILD
asm("FSR1L equ 0FE1h");
#endif

// Register: FSR1H
#define FSR1H FSR1H
extern volatile unsigned char           FSR1H               __at(0xFE2);
#ifndef _LIB_BUILD
asm("FSR1H equ 0FE2h");
#endif

// Register: PLUSW1
#define PLUSW1 PLUSW1
extern volatile unsigned char           PLUSW1              __at(0xFE3);
#ifndef _LIB_BUILD
asm("PLUSW1 equ 0FE3h");
#endif

// Register: PREINC1
#define PREINC1 PREINC1
extern volatile unsigned char           PREINC1             __at(0xFE4);
#ifndef _LIB_BUILD
asm("PREINC1 equ 0FE4h");
#endif

// Register: POSTDEC1
#define POSTDEC1 POSTDEC1
extern volatile unsigned char           POSTDEC1            __at(0xFE5);
#ifndef _LIB_BUILD
asm("POSTDEC1 equ 0FE5h");
#endif

// Register: POSTINC1
#define POSTINC1 POSTINC1
extern volatile unsigned char           POSTINC1            __at(0xFE6);
#ifndef _LIB_BUILD
asm("POSTINC1 equ 0FE6h");
#endif

// Register: INDF1
#define INDF1 INDF1
extern volatile unsigned char           INDF1               __at(0xFE7);
#ifndef _LIB_BUILD
asm("INDF1 equ 0FE7h");
#endif

// Register: WREG
#define WREG WREG
extern volatile unsigned char           WREG                __at(0xFE8);
#ifndef _LIB_BUILD
asm("WREG equ 0FE8h");
#endif

// Register: FSR0
#define FSR0 FSR0
extern volatile unsigned short          FSR0                __at(0xFE9);
#ifndef _LIB_BUILD
asm("FSR0 equ 0FE9h");
#endif

// Register: FSR0L
#define FSR0L FSR0L
extern volatile unsigned char           FSR0L               __at(0xFE9);
#ifndef _LIB_BUILD
asm("FSR0L equ 0FE9h");
#endif

// Register: FSR0H
#define FSR0H FSR0H
extern volatile unsigned char           FSR0H               __at(0xFEA);
#ifndef _LIB_BUILD
asm("FSR0H equ 0FEAh");
#endif

// Register: PLUSW0
#define PLUSW0 PLUSW0
extern volatile unsigned char           PLUSW0              __at(0xFEB);
#ifndef _LIB_BUILD
asm("PLUSW0 equ 0FEBh");
#endif

// Register: PREINC0
#define PREINC0 PREINC0
extern volatile unsigned char           PREINC0             __at(0xFEC);
#ifndef _LIB_BUILD
asm("PREINC0 equ 0FECh");
#endif

// Register: POSTDEC0
#define POSTDEC0 POSTDEC0
extern volatile unsigned char           POSTDEC0            __at(0xFED);
#ifndef _LIB_BUILD
asm("POSTDEC0 equ 0FEDh");
#endif

// Register: POSTINC0
#define POSTINC0 POSTINC0
extern volatile unsigned char           POSTINC0            __at(0xFEE);
#ifndef _LIB_BUILD
asm("POSTINC0 equ 0FEEh");
#endif

// Register: INDF0
#define INDF0 INDF0
extern volatile unsigned char           INDF0               __at(0xFEF);
#ifndef _LIB_BUILD
asm("INDF0 equ 0FEFh");
#endif

// Register: INTCON3
#define INTCON3 INTCON3
extern volatile unsigned char           INTCON3             __at(0xFF0);
#ifndef _LIB_BUILD
asm("INTCON3 equ 0FF0h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned INT1IF                 :1;
        unsigned INT2IF                 :1;
        unsigned INT3IF                 :1;
        unsigned INT1IE                 :1;
        unsigned INT2IE                 :1;
        unsigned INT3IE                 :1;
        unsigned INT1IP                 :1;
        unsigned INT2IP                 :1;
    };
    struct {
        unsigned INT1F                  :1;
        unsigned INT2F                  :1;
        unsigned INT3F                  :1;
        unsigned INT1E                  :1;
        unsigned INT2E                  :1;
        unsigned INT3E                  :1;
        unsigned INT1P                  :1;
        unsigned INT2P                  :1;
    };
} INTCON3bits_t;
extern volatile INTCON3bits_t INTCON3bits __at(0xFF0);
// bitfield macros
#define _INTCON3_INT1IF_POSN                                0x0
#define _INTCON3_INT1IF_POSITION                            0x0
#define _INTCON3_INT1IF_SIZE                                0x1
#define _INTCON3_INT1IF_LENGTH                              0x1
#define _INTCON3_INT1IF_MASK                                0x1
#define _INTCON3_INT2IF_POSN                                0x1
#define _INTCON3_INT2IF_POSITION                            0x1
#define _INTCON3_INT2IF_SIZE                                0x1
#define _INTCON3_INT2IF_LENGTH                              0x1
#define _INTCON3_INT2IF_MASK                                0x2
#define _INTCON3_INT3IF_POSN                                0x2
#define _INTCON3_INT3IF_POSITION                            0x2
#define _INTCON3_INT3IF_SIZE                                0x1
#define _INTCON3_INT3IF_LENGTH                              0x1
#define _INTCON3_INT3IF_MASK                                0x4
#define _INTCON3_INT1IE_POSN                                0x3
#define _INTCON3_INT1IE_POSITION                            0x3
#define _INTCON3_INT1IE_SIZE                                0x1
#define _INTCON3_INT1IE_LENGTH                              0x1
#define _INTCON3_INT1IE_MASK                                0x8
#define _INTCON3_INT2IE_POSN                                0x4
#define _INTCON3_INT2IE_POSITION                            0x4
#define _INTCON3_INT2IE_SIZE                                0x1
#define _INTCON3_INT2IE_LENGTH                              0x1
#define _INTCON3_INT2IE_MASK                                0x10
#define _INTCON3_INT3IE_POSN                                0x5
#define _INTCON3_INT3IE_POSITION                            0x5
#define _INTCON3_INT3IE_SIZE                                0x1
#define _INTCON3_INT3IE_LENGTH                              0x1
#define _INTCON3_INT3IE_MASK                                0x20
#define _INTCON3_INT1IP_POSN                                0x6
#define _INTCON3_INT1IP_POSITION                            0x6
#define _INTCON3_INT1IP_SIZE                                0x1
#define _INTCON3_INT1IP_LENGTH                              0x1
#define _INTCON3_INT1IP_MASK                                0x40
#define _INTCON3_INT2IP_POSN                                0x7
#define _INTCON3_INT2IP_POSITION                            0x7
#define _INTCON3_INT2IP_SIZE                                0x1
#define _INTCON3_INT2IP_LENGTH                              0x1
#define _INTCON3_INT2IP_MASK                                0x80
#define _INTCON3_INT1F_POSN                                 0x0
#define _INTCON3_INT1F_POSITION                             0x0
#define _INTCON3_INT1F_SIZE                                 0x1
#define _INTCON3_INT1F_LENGTH                               0x1
#define _INTCON3_INT1F_MASK                                 0x1
#define _INTCON3_INT2F_POSN                                 0x1
#define _INTCON3_INT2F_POSITION                             0x1
#define _INTCON3_INT2F_SIZE                                 0x1
#define _INTCON3_INT2F_LENGTH                               0x1
#define _INTCON3_INT2F_MASK                                 0x2
#define _INTCON3_INT3F_POSN                                 0x2
#define _INTCON3_INT3F_POSITION                             0x2
#define _INTCON3_INT3F_SIZE                                 0x1
#define _INTCON3_INT3F_LENGTH                               0x1
#define _INTCON3_INT3F_MASK                                 0x4
#define _INTCON3_INT1E_POSN                                 0x3
#define _INTCON3_INT1E_POSITION                             0x3
#define _INTCON3_INT1E_SIZE                                 0x1
#define _INTCON3_INT1E_LENGTH                               0x1
#define _INTCON3_INT1E_MASK                                 0x8
#define _INTCON3_INT2E_POSN                                 0x4
#define _INTCON3_INT2E_POSITION                             0x4
#define _INTCON3_INT2E_SIZE                                 0x1
#define _INTCON3_INT2E_LENGTH                               0x1
#define _INTCON3_INT2E_MASK                                 0x10
#define _INTCON3_INT3E_POSN                                 0x5
#define _INTCON3_INT3E_POSITION                             0x5
#define _INTCON3_INT3E_SIZE                                 0x1
#define _INTCON3_INT3E_LENGTH                               0x1
#define _INTCON3_INT3E_MASK                                 0x20
#define _INTCON3_INT1P_POSN                                 0x6
#define _INTCON3_INT1P_POSITION                             0x6
#define _INTCON3_INT1P_SIZE                                 0x1
#define _INTCON3_INT1P_LENGTH                               0x1
#define _INTCON3_INT1P_MASK                                 0x40
#define _INTCON3_INT2P_POSN                                 0x7
#define _INTCON3_INT2P_POSITION                             0x7
#define _INTCON3_INT2P_SIZE                                 0x1
#define _INTCON3_INT2P_LENGTH                               0x1
#define _INTCON3_INT2P_MASK                                 0x80

// Register: INTCON2
#define INTCON2 INTCON2
extern volatile unsigned char           INTCON2             __at(0xFF1);
#ifndef _LIB_BUILD
asm("INTCON2 equ 0FF1h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :7;
        unsigned NOT_RBPU               :1;
    };
    struct {
        unsigned RBIP                   :1;
        unsigned INT3IP                 :1;
        unsigned TMR0IP                 :1;
        unsigned INTEDG3                :1;
        unsigned INTEDG2                :1;
        unsigned INTEDG1                :1;
        unsigned INTEDG0                :1;
        unsigned nRBPU                  :1;
    };
    struct {
        unsigned                        :2;
        unsigned T0IP                   :1;
        unsigned                        :4;
        unsigned RBPU                   :1;
    };
} INTCON2bits_t;
extern volatile INTCON2bits_t INTCON2bits __at(0xFF1);
// bitfield macros
#define _INTCON2_NOT_RBPU_POSN                              0x7
#define _INTCON2_NOT_RBPU_POSITION                          0x7
#define _INTCON2_NOT_RBPU_SIZE                              0x1
#define _INTCON2_NOT_RBPU_LENGTH                            0x1
#define _INTCON2_NOT_RBPU_MASK                              0x80
#define _INTCON2_RBIP_POSN                                  0x0
#define _INTCON2_RBIP_POSITION                              0x0
#define _INTCON2_RBIP_SIZE                                  0x1
#define _INTCON2_RBIP_LENGTH                                0x1
#define _INTCON2_RBIP_MASK                                  0x1
#define _INTCON2_INT3IP_POSN                                0x1
#define _INTCON2_INT3IP_POSITION                            0x1
#define _INTCON2_INT3IP_SIZE                                0x1
#define _INTCON2_INT3IP_LENGTH                              0x1
#define _INTCON2_INT3IP_MASK                                0x2
#define _INTCON2_TMR0IP_POSN                                0x2
#define _INTCON2_TMR0IP_POSITION                            0x2
#define _INTCON2_TMR0IP_SIZE                                0x1
#define _INTCON2_TMR0IP_LENGTH                              0x1
#define _INTCON2_TMR0IP_MASK                                0x4
#define _INTCON2_INTEDG3_POSN                               0x3
#define _INTCON2_INTEDG3_POSITION                           0x3
#define _INTCON2_INTEDG3_SIZE                               0x1
#define _INTCON2_INTEDG3_LENGTH                             0x1
#define _INTCON2_INTEDG3_MASK                               0x8
#define _INTCON2_INTEDG2_POSN                               0x4
#define _INTCON2_INTEDG2_POSITION                           0x4
#define _INTCON2_INTEDG2_SIZE                               0x1
#define _INTCON2_INTEDG2_LENGTH                             0x1
#define _INTCON2_INTEDG2_MASK                               0x10
#define _INTCON2_INTEDG1_POSN                               0x5
#define _INTCON2_INTEDG1_POSITION                           0x5
#define _INTCON2_INTEDG1_SIZE                               0x1
#define _INTCON2_INTEDG1_LENGTH                             0x1
#define _INTCON2_INTEDG1_MASK                               0x20
#define _INTCON2_INTEDG0_POSN                               0x6
#define _INTCON2_INTEDG0_POSITION                           0x6
#define _INTCON2_INTEDG0_SIZE                               0x1
#define _INTCON2_INTEDG0_LENGTH                             0x1
#define _INTCON2_INTEDG0_MASK                               0x40
#define _INTCON2_nRBPU_POSN                                 0x7
#define _INTCON2_nRBPU_POSITION                             0x7
#define _INTCON2_nRBPU_SIZE                                 0x1
#define _INTCON2_nRBPU_LENGTH                               0x1
#define _INTCON2_nRBPU_MASK                                 0x80
#define _INTCON2_T0IP_POSN                                  0x2
#define _INTCON2_T0IP_POSITION                              0x2
#define _INTCON2_T0IP_SIZE                                  0x1
#define _INTCON2_T0IP_LENGTH                                0x1
#define _INTCON2_T0IP_MASK                                  0x4
#define _INTCON2_RBPU_POSN                                  0x7
#define _INTCON2_RBPU_POSITION                              0x7
#define _INTCON2_RBPU_SIZE                                  0x1
#define _INTCON2_RBPU_LENGTH                                0x1
#define _INTCON2_RBPU_MASK                                  0x80

// Register: INTCON
#define INTCON INTCON
extern volatile unsigned char           INTCON              __at(0xFF2);
#ifndef _LIB_BUILD
asm("INTCON equ 0FF2h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned RBIF                   :1;
        unsigned INT0IF                 :1;
        unsigned TMR0IF                 :1;
        unsigned RBIE                   :1;
        unsigned INT0IE                 :1;
        unsigned TMR0IE                 :1;
        unsigned PEIE_GIEL              :1;
        unsigned GIE_GIEH               :1;
    };
    struct {
        unsigned                        :1;
        unsigned INT0F                  :1;
        unsigned T0IF                   :1;
        unsigned                        :1;
        unsigned INT0E                  :1;
        unsigned T0IE                   :1;
        unsigned PEIE                   :1;
        unsigned GIE                    :1;
    };
    struct {
        unsigned                        :6;
        unsigned GIEL                   :1;
        unsigned GIEH                   :1;
    };
} INTCONbits_t;
extern volatile INTCONbits_t INTCONbits __at(0xFF2);
// bitfield macros
#define _INTCON_RBIF_POSN                                   0x0
#define _INTCON_RBIF_POSITION                               0x0
#define _INTCON_RBIF_SIZE                                   0x1
#define _INTCON_RBIF_LENGTH                                 0x1
#define _INTCON_RBIF_MASK                                   0x1
#define _INTCON_INT0IF_POSN                                 0x1
#define _INTCON_INT0IF_POSITION                             0x1
#define _INTCON_INT0IF_SIZE                                 0x1
#define _INTCON_INT0IF_LENGTH                               0x1
#define _INTCON_INT0IF_MASK                                 0x2
#define _INTCON_TMR0IF_POSN                                 0x2
#define _INTCON_TMR0IF_POSITION                             0x2
#define _INTCON_TMR0IF_SIZE                                 0x1
#define _INTCON_TMR0IF_LENGTH                               0x1
#define _INTCON_TMR0IF_MASK                                 0x4
#define _INTCON_RBIE_POSN                                   0x3
#define _INTCON_RBIE_POSITION                               0x3
#define _INTCON_RBIE_SIZE                                   0x1
#define _INTCON_RBIE_LENGTH                                 0x1
#define _INTCON_RBIE_MASK                                   0x8
#define _INTCON_INT0IE_POSN                                 0x4
#define _INTCON_INT0IE_POSITION                             0x4
#define _INTCON_INT0IE_SIZE                                 0x1
#define _INTCON_INT0IE_LENGTH                               0x1
#define _INTCON_INT0IE_MASK                                 0x10
#define _INTCON_TMR0IE_POSN                                 0x5
#define _INTCON_TMR0IE_POSITION                             0x5
#define _INTCON_TMR0IE_SIZE                                 0x1
#define _INTCON_TMR0IE_LENGTH                               0x1
#define _INTCON_TMR0IE_MASK                                 0x20
#define _INTCON_PEIE_GIEL_POSN                              0x6
#define _INTCON_PEIE_GIEL_POSITION                          0x6
#define _INTCON_PEIE_GIEL_SIZE                              0x1
#define _INTCON_PEIE_GIEL_LENGTH                            0x1
#define _INTCON_PEIE_GIEL_MASK                              0x40
#define _INTCON_GIE_GIEH_POSN                               0x7
#define _INTCON_GIE_GIEH_POSITION                           0x7
#define _INTCON_GIE_GIEH_SIZE                               0x1
#define _INTCON_GIE_GIEH_LENGTH                             0x1
#define _INTCON_GIE_GIEH_MASK                               0x80
#define _INTCON_INT0F_POSN                                  0x1
#define _INTCON_INT0F_POSITION                              0x1
#define _INTCON_INT0F_SIZE                                  0x1
#define _INTCON_INT0F_LENGTH                                0x1
#define _INTCON_INT0F_MASK                                  0x2
#define _INTCON_T0IF_POSN                                   0x2
#define _INTCON_T0IF_POSITION                               0x2
#define _INTCON_T0IF_SIZE                                   0x1
#define _INTCON_T0IF_LENGTH                                 0x1
#define _INTCON_T0IF_MASK                                   0x4
#define _INTCON_INT0E_POSN                                  0x4
#define _INTCON_INT0E_POSITION                              0x4
#define _INTCON_INT0E_SIZE                                  0x1
#define _INTCON_INT0E_LENGTH                                0x1
#define _INTCON_INT0E_MASK                                  0x10
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
#define _INTCON_GIEL_POSN                                   0x6
#define _INTCON_GIEL_POSITION                               0x6
#define _INTCON_GIEL_SIZE                                   0x1
#define _INTCON_GIEL_LENGTH                                 0x1
#define _INTCON_GIEL_MASK                                   0x40
#define _INTCON_GIEH_POSN                                   0x7
#define _INTCON_GIEH_POSITION                               0x7
#define _INTCON_GIEH_SIZE                                   0x1
#define _INTCON_GIEH_LENGTH                                 0x1
#define _INTCON_GIEH_MASK                                   0x80

// Register: PROD
#define PROD PROD
extern volatile unsigned short          PROD                __at(0xFF3);
#ifndef _LIB_BUILD
asm("PROD equ 0FF3h");
#endif

// Register: PRODL
#define PRODL PRODL
extern volatile unsigned char           PRODL               __at(0xFF3);
#ifndef _LIB_BUILD
asm("PRODL equ 0FF3h");
#endif

// Register: PRODH
#define PRODH PRODH
extern volatile unsigned char           PRODH               __at(0xFF4);
#ifndef _LIB_BUILD
asm("PRODH equ 0FF4h");
#endif

// Register: TABLAT
#define TABLAT TABLAT
extern volatile unsigned char           TABLAT              __at(0xFF5);
#ifndef _LIB_BUILD
asm("TABLAT equ 0FF5h");
#endif

// Register: TBLPTR
#define TBLPTR TBLPTR
#ifndef __CCI__
extern volatile __uint24                TBLPTR              __at(0xFF6);
#endif
#ifndef _LIB_BUILD
asm("TBLPTR equ 0FF6h");
#endif

// Register: TBLPTRL
#define TBLPTRL TBLPTRL
extern volatile unsigned char           TBLPTRL             __at(0xFF6);
#ifndef _LIB_BUILD
asm("TBLPTRL equ 0FF6h");
#endif

// Register: TBLPTRH
#define TBLPTRH TBLPTRH
extern volatile unsigned char           TBLPTRH             __at(0xFF7);
#ifndef _LIB_BUILD
asm("TBLPTRH equ 0FF7h");
#endif

// Register: TBLPTRU
#define TBLPTRU TBLPTRU
extern volatile unsigned char           TBLPTRU             __at(0xFF8);
#ifndef _LIB_BUILD
asm("TBLPTRU equ 0FF8h");
#endif

// Register: PCLAT
#define PCLAT PCLAT
#ifndef __CCI__
extern volatile __uint24                PCLAT               __at(0xFF9);
#endif
#ifndef _LIB_BUILD
asm("PCLAT equ 0FF9h");
#endif
// aliases
#ifndef __CCI__
extern volatile __uint24                PC                  __at(0xFF9);
#endif
#ifndef _LIB_BUILD
asm("PC equ 0FF9h");
#endif

// Register: PCL
#define PCL PCL
extern volatile unsigned char           PCL                 __at(0xFF9);
#ifndef _LIB_BUILD
asm("PCL equ 0FF9h");
#endif

// Register: PCLATH
#define PCLATH PCLATH
extern volatile unsigned char           PCLATH              __at(0xFFA);
#ifndef _LIB_BUILD
asm("PCLATH equ 0FFAh");
#endif

// Register: PCLATU
#define PCLATU PCLATU
extern volatile unsigned char           PCLATU              __at(0xFFB);
#ifndef _LIB_BUILD
asm("PCLATU equ 0FFBh");
#endif

// Register: STKPTR
#define STKPTR STKPTR
extern volatile unsigned char           STKPTR              __at(0xFFC);
#ifndef _LIB_BUILD
asm("STKPTR equ 0FFCh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned STKPTR                 :5;
        unsigned                        :1;
        unsigned STKUNF                 :1;
        unsigned STKFUL                 :1;
    };
    struct {
        unsigned STKPTR0                :1;
        unsigned STKPTR1                :1;
        unsigned STKPTR2                :1;
        unsigned STKPTR3                :1;
        unsigned STKPTR4                :1;
        unsigned                        :2;
        unsigned STKOVF                 :1;
    };
    struct {
        unsigned SP0                    :1;
        unsigned SP1                    :1;
        unsigned SP2                    :1;
        unsigned SP3                    :1;
        unsigned SP4                    :1;
    };
} STKPTRbits_t;
extern volatile STKPTRbits_t STKPTRbits __at(0xFFC);
// bitfield macros
#define _STKPTR_STKPTR_POSN                                 0x0
#define _STKPTR_STKPTR_POSITION                             0x0
#define _STKPTR_STKPTR_SIZE                                 0x5
#define _STKPTR_STKPTR_LENGTH                               0x5
#define _STKPTR_STKPTR_MASK                                 0x1F
#define _STKPTR_STKUNF_POSN                                 0x6
#define _STKPTR_STKUNF_POSITION                             0x6
#define _STKPTR_STKUNF_SIZE                                 0x1
#define _STKPTR_STKUNF_LENGTH                               0x1
#define _STKPTR_STKUNF_MASK                                 0x40
#define _STKPTR_STKFUL_POSN                                 0x7
#define _STKPTR_STKFUL_POSITION                             0x7
#define _STKPTR_STKFUL_SIZE                                 0x1
#define _STKPTR_STKFUL_LENGTH                               0x1
#define _STKPTR_STKFUL_MASK                                 0x80
#define _STKPTR_STKPTR0_POSN                                0x0
#define _STKPTR_STKPTR0_POSITION                            0x0
#define _STKPTR_STKPTR0_SIZE                                0x1
#define _STKPTR_STKPTR0_LENGTH                              0x1
#define _STKPTR_STKPTR0_MASK                                0x1
#define _STKPTR_STKPTR1_POSN                                0x1
#define _STKPTR_STKPTR1_POSITION                            0x1
#define _STKPTR_STKPTR1_SIZE                                0x1
#define _STKPTR_STKPTR1_LENGTH                              0x1
#define _STKPTR_STKPTR1_MASK                                0x2
#define _STKPTR_STKPTR2_POSN                                0x2
#define _STKPTR_STKPTR2_POSITION                            0x2
#define _STKPTR_STKPTR2_SIZE                                0x1
#define _STKPTR_STKPTR2_LENGTH                              0x1
#define _STKPTR_STKPTR2_MASK                                0x4
#define _STKPTR_STKPTR3_POSN                                0x3
#define _STKPTR_STKPTR3_POSITION                            0x3
#define _STKPTR_STKPTR3_SIZE                                0x1
#define _STKPTR_STKPTR3_LENGTH                              0x1
#define _STKPTR_STKPTR3_MASK                                0x8
#define _STKPTR_STKPTR4_POSN                                0x4
#define _STKPTR_STKPTR4_POSITION                            0x4
#define _STKPTR_STKPTR4_SIZE                                0x1
#define _STKPTR_STKPTR4_LENGTH                              0x1
#define _STKPTR_STKPTR4_MASK                                0x10
#define _STKPTR_STKOVF_POSN                                 0x7
#define _STKPTR_STKOVF_POSITION                             0x7
#define _STKPTR_STKOVF_SIZE                                 0x1
#define _STKPTR_STKOVF_LENGTH                               0x1
#define _STKPTR_STKOVF_MASK                                 0x80
#define _STKPTR_SP0_POSN                                    0x0
#define _STKPTR_SP0_POSITION                                0x0
#define _STKPTR_SP0_SIZE                                    0x1
#define _STKPTR_SP0_LENGTH                                  0x1
#define _STKPTR_SP0_MASK                                    0x1
#define _STKPTR_SP1_POSN                                    0x1
#define _STKPTR_SP1_POSITION                                0x1
#define _STKPTR_SP1_SIZE                                    0x1
#define _STKPTR_SP1_LENGTH                                  0x1
#define _STKPTR_SP1_MASK                                    0x2
#define _STKPTR_SP2_POSN                                    0x2
#define _STKPTR_SP2_POSITION                                0x2
#define _STKPTR_SP2_SIZE                                    0x1
#define _STKPTR_SP2_LENGTH                                  0x1
#define _STKPTR_SP2_MASK                                    0x4
#define _STKPTR_SP3_POSN                                    0x3
#define _STKPTR_SP3_POSITION                                0x3
#define _STKPTR_SP3_SIZE                                    0x1
#define _STKPTR_SP3_LENGTH                                  0x1
#define _STKPTR_SP3_MASK                                    0x8
#define _STKPTR_SP4_POSN                                    0x4
#define _STKPTR_SP4_POSITION                                0x4
#define _STKPTR_SP4_SIZE                                    0x1
#define _STKPTR_SP4_LENGTH                                  0x1
#define _STKPTR_SP4_MASK                                    0x10

// Register: TOS
#define TOS TOS
#ifndef __CCI__
extern volatile __uint24                TOS                 __at(0xFFD);
#endif
#ifndef _LIB_BUILD
asm("TOS equ 0FFDh");
#endif

// Register: TOSL
#define TOSL TOSL
extern volatile unsigned char           TOSL                __at(0xFFD);
#ifndef _LIB_BUILD
asm("TOSL equ 0FFDh");
#endif

// Register: TOSH
#define TOSH TOSH
extern volatile unsigned char           TOSH                __at(0xFFE);
#ifndef _LIB_BUILD
asm("TOSH equ 0FFEh");
#endif

// Register: TOSU
#define TOSU TOSU
extern volatile unsigned char           TOSU                __at(0xFFF);
#ifndef _LIB_BUILD
asm("TOSU equ 0FFFh");
#endif

/*
 * Bit Definitions
 */
#define _DEPRECATED __attribute__((__deprecated__))
#ifndef BANKMASK
#define BANKMASK(addr) ((addr)&0FFh)
#endif
// BAUDCON1<ABDEN>
extern volatile __bit _DEPRECATED       ABDEN               __at(0x7BF0);	// @ (0xF7E * 8 + 0)
#define                                 ABDEN_bit           BANKMASK(BAUDCON1), 0
// BAUDCON1<ABDEN1>
extern volatile __bit                   ABDEN1              __at(0x7BF0);	// @ (0xF7E * 8 + 0)
#define                                 ABDEN1_bit          BANKMASK(BAUDCON1), 0
// BAUDCON2<ABDEN2>
extern volatile __bit                   ABDEN2              __at(0x7BE0);	// @ (0xF7C * 8 + 0)
#define                                 ABDEN2_bit          BANKMASK(BAUDCON2), 0
// BAUDCON1<ABDOVF>
extern volatile __bit _DEPRECATED       ABDOVF              __at(0x7BF7);	// @ (0xF7E * 8 + 7)
#define                                 ABDOVF_bit          BANKMASK(BAUDCON1), 7
// BAUDCON1<ABDOVF1>
extern volatile __bit                   ABDOVF1             __at(0x7BF7);	// @ (0xF7E * 8 + 7)
#define                                 ABDOVF1_bit         BANKMASK(BAUDCON1), 7
// BAUDCON2<ABDOVF2>
extern volatile __bit                   ABDOVF2             __at(0x7BE7);	// @ (0xF7C * 8 + 7)
#define                                 ABDOVF2_bit         BANKMASK(BAUDCON2), 7
// SSP1CON2<ACKDT>
extern volatile __bit                   ACKDT               __at(0x7E2D);	// @ (0xFC5 * 8 + 5)
#define                                 ACKDT_bit           BANKMASK(SSP1CON2), 5
// SSP1CON2<ACKDT1>
extern volatile __bit                   ACKDT1              __at(0x7E2D);	// @ (0xFC5 * 8 + 5)
#define                                 ACKDT1_bit          BANKMASK(SSP1CON2), 5
// SSP1CON2<ACKEN>
extern volatile __bit                   ACKEN               __at(0x7E2C);	// @ (0xFC5 * 8 + 4)
#define                                 ACKEN_bit           BANKMASK(SSP1CON2), 4
// SSP1CON2<ACKEN1>
extern volatile __bit                   ACKEN1              __at(0x7E2C);	// @ (0xFC5 * 8 + 4)
#define                                 ACKEN1_bit          BANKMASK(SSP1CON2), 4
// SSP1CON2<ACKSTAT>
extern volatile __bit                   ACKSTAT             __at(0x7E2E);	// @ (0xFC5 * 8 + 6)
#define                                 ACKSTAT_bit         BANKMASK(SSP1CON2), 6
// SSP1CON2<ACKSTAT1>
extern volatile __bit                   ACKSTAT1            __at(0x7E2E);	// @ (0xFC5 * 8 + 6)
#define                                 ACKSTAT1_bit        BANKMASK(SSP1CON2), 6
// ADCON2<ACQT0>
extern volatile __bit                   ACQT0               __at(0x7E03);	// @ (0xFC0 * 8 + 3)
#define                                 ACQT0_bit           BANKMASK(ADCON2), 3
// ADCON2<ACQT1>
extern volatile __bit                   ACQT1               __at(0x7E04);	// @ (0xFC0 * 8 + 4)
#define                                 ACQT1_bit           BANKMASK(ADCON2), 4
// ADCON2<ACQT2>
extern volatile __bit                   ACQT2               __at(0x7E05);	// @ (0xFC0 * 8 + 5)
#define                                 ACQT2_bit           BANKMASK(ADCON2), 5
// ADCON0<ADCAL>
extern volatile __bit                   ADCAL               __at(0x7E17);	// @ (0xFC2 * 8 + 7)
#define                                 ADCAL_bit           BANKMASK(ADCON0), 7
// ADCON2<ADCS0>
extern volatile __bit                   ADCS0               __at(0x7E00);	// @ (0xFC0 * 8 + 0)
#define                                 ADCS0_bit           BANKMASK(ADCON2), 0
// ADCON2<ADCS1>
extern volatile __bit                   ADCS1               __at(0x7E01);	// @ (0xFC0 * 8 + 1)
#define                                 ADCS1_bit           BANKMASK(ADCON2), 1
// ADCON2<ADCS2>
extern volatile __bit                   ADCS2               __at(0x7E02);	// @ (0xFC0 * 8 + 2)
#define                                 ADCS2_bit           BANKMASK(ADCON2), 2
// RCSTA1<ADDEN>
extern volatile __bit _DEPRECATED       ADDEN               __at(0x7D5B);	// @ (0xFAB * 8 + 3)
#define                                 ADDEN_bit           BANKMASK(RCSTA1), 3
// RCSTA1<ADDEN1>
extern volatile __bit                   ADDEN1              __at(0x7D5B);	// @ (0xFAB * 8 + 3)
#define                                 ADDEN1_bit          BANKMASK(RCSTA1), 3
// RCSTA2<ADDEN2>
extern volatile __bit                   ADDEN2              __at(0x7B5B);	// @ (0xF6B * 8 + 3)
#define                                 ADDEN2_bit          BANKMASK(RCSTA2), 3
// ADCON2<ADFM>
extern volatile __bit                   ADFM                __at(0x7E07);	// @ (0xFC0 * 8 + 7)
#define                                 ADFM_bit            BANKMASK(ADCON2), 7
// PIE1<ADIE>
extern volatile __bit                   ADIE                __at(0x7CEE);	// @ (0xF9D * 8 + 6)
#define                                 ADIE_bit            BANKMASK(PIE1), 6
// PIR1<ADIF>
extern volatile __bit                   ADIF                __at(0x7CF6);	// @ (0xF9E * 8 + 6)
#define                                 ADIF_bit            BANKMASK(PIR1), 6
// IPR1<ADIP>
extern volatile __bit                   ADIP                __at(0x7CFE);	// @ (0xF9F * 8 + 6)
#define                                 ADIP_bit            BANKMASK(IPR1), 6
// SSP1CON2<ADMSK1>
extern volatile __bit                   ADMSK1              __at(0x7E29);	// @ (0xFC5 * 8 + 1)
#define                                 ADMSK1_bit          BANKMASK(SSP1CON2), 1
// SSP1CON2<ADMSK11>
extern volatile __bit                   ADMSK11             __at(0x7E29);	// @ (0xFC5 * 8 + 1)
#define                                 ADMSK11_bit         BANKMASK(SSP1CON2), 1
// SSP1CON2<ADMSK2>
extern volatile __bit                   ADMSK2              __at(0x7E2A);	// @ (0xFC5 * 8 + 2)
#define                                 ADMSK2_bit          BANKMASK(SSP1CON2), 2
// SSP1CON2<ADMSK21>
extern volatile __bit                   ADMSK21             __at(0x7E2A);	// @ (0xFC5 * 8 + 2)
#define                                 ADMSK21_bit         BANKMASK(SSP1CON2), 2
// SSP1CON2<ADMSK3>
extern volatile __bit                   ADMSK3              __at(0x7E2B);	// @ (0xFC5 * 8 + 3)
#define                                 ADMSK3_bit          BANKMASK(SSP1CON2), 3
// SSP1CON2<ADMSK31>
extern volatile __bit                   ADMSK31             __at(0x7E2B);	// @ (0xFC5 * 8 + 3)
#define                                 ADMSK31_bit         BANKMASK(SSP1CON2), 3
// SSP1CON2<ADMSK4>
extern volatile __bit                   ADMSK4              __at(0x7E2C);	// @ (0xFC5 * 8 + 4)
#define                                 ADMSK4_bit          BANKMASK(SSP1CON2), 4
// SSP1CON2<ADMSK41>
extern volatile __bit                   ADMSK41             __at(0x7E2C);	// @ (0xFC5 * 8 + 4)
#define                                 ADMSK41_bit         BANKMASK(SSP1CON2), 4
// SSP1CON2<ADMSK5>
extern volatile __bit                   ADMSK5              __at(0x7E2D);	// @ (0xFC5 * 8 + 5)
#define                                 ADMSK5_bit          BANKMASK(SSP1CON2), 5
// SSP1CON2<ADMSK51>
extern volatile __bit                   ADMSK51             __at(0x7E2D);	// @ (0xFC5 * 8 + 5)
#define                                 ADMSK51_bit         BANKMASK(SSP1CON2), 5
// ADCON0<ADON>
extern volatile __bit                   ADON                __at(0x7E10);	// @ (0xFC2 * 8 + 0)
#define                                 ADON_bit            BANKMASK(ADCON0), 0
// PORTA<AN0>
extern volatile __bit                   AN0                 __at(0x7C00);	// @ (0xF80 * 8 + 0)
#define                                 AN0_bit             BANKMASK(PORTA), 0
// PORTA<AN1>
extern volatile __bit                   AN1                 __at(0x7C01);	// @ (0xF80 * 8 + 1)
#define                                 AN1_bit             BANKMASK(PORTA), 1
// PORTF<AN10>
extern volatile __bit                   AN10                __at(0x7C2D);	// @ (0xF85 * 8 + 5)
#define                                 AN10_bit            BANKMASK(PORTF), 5
// PORTF<AN11>
extern volatile __bit                   AN11                __at(0x7C2E);	// @ (0xF85 * 8 + 6)
#define                                 AN11_bit            BANKMASK(PORTF), 6
// PORTH<AN12>
extern volatile __bit                   AN12                __at(0x7C3C);	// @ (0xF87 * 8 + 4)
#define                                 AN12_bit            BANKMASK(PORTH), 4
// PORTH<AN13>
extern volatile __bit                   AN13                __at(0x7C3D);	// @ (0xF87 * 8 + 5)
#define                                 AN13_bit            BANKMASK(PORTH), 5
// PORTH<AN14>
extern volatile __bit                   AN14                __at(0x7C3E);	// @ (0xF87 * 8 + 6)
#define                                 AN14_bit            BANKMASK(PORTH), 6
// PORTH<AN15>
extern volatile __bit                   AN15                __at(0x7C3F);	// @ (0xF87 * 8 + 7)
#define                                 AN15_bit            BANKMASK(PORTH), 7
// PORTA<AN2>
extern volatile __bit                   AN2                 __at(0x7C02);	// @ (0xF80 * 8 + 2)
#define                                 AN2_bit             BANKMASK(PORTA), 2
// PORTA<AN3>
extern volatile __bit                   AN3                 __at(0x7C03);	// @ (0xF80 * 8 + 3)
#define                                 AN3_bit             BANKMASK(PORTA), 3
// PORTA<AN4>
extern volatile __bit                   AN4                 __at(0x7C05);	// @ (0xF80 * 8 + 5)
#define                                 AN4_bit             BANKMASK(PORTA), 5
// PORTF<AN6>
extern volatile __bit                   AN6                 __at(0x7C29);	// @ (0xF85 * 8 + 1)
#define                                 AN6_bit             BANKMASK(PORTF), 1
// PORTF<AN7>
extern volatile __bit                   AN7                 __at(0x7C2A);	// @ (0xF85 * 8 + 2)
#define                                 AN7_bit             BANKMASK(PORTF), 2
// PORTF<AN8>
extern volatile __bit                   AN8                 __at(0x7C2B);	// @ (0xF85 * 8 + 3)
#define                                 AN8_bit             BANKMASK(PORTF), 3
// PORTF<AN9>
extern volatile __bit                   AN9                 __at(0x7C2C);	// @ (0xF85 * 8 + 4)
#define                                 AN9_bit             BANKMASK(PORTF), 4
// ERXFCON<ANDOR>
extern volatile __bit                   ANDOR               __at(0x76C6);	// @ (0xED8 * 8 + 6)
#define                                 ANDOR_bit           BANKMASK(ERXFCON), 6
// ECON2<AUTOINC>
extern volatile __bit                   AUTOINC             __at(0x77F7);	// @ (0xEFE * 8 + 7)
#define                                 AUTOINC_bit         BANKMASK(ECON2), 7
// MABBIPG<BBIPG0>
extern volatile __bit                   BBIPG0              __at(0x7520);	// @ (0xEA4 * 8 + 0)
#define                                 BBIPG0_bit          BANKMASK(MABBIPG), 0
// MABBIPG<BBIPG1>
extern volatile __bit                   BBIPG1              __at(0x7521);	// @ (0xEA4 * 8 + 1)
#define                                 BBIPG1_bit          BANKMASK(MABBIPG), 1
// MABBIPG<BBIPG2>
extern volatile __bit                   BBIPG2              __at(0x7522);	// @ (0xEA4 * 8 + 2)
#define                                 BBIPG2_bit          BANKMASK(MABBIPG), 2
// MABBIPG<BBIPG3>
extern volatile __bit                   BBIPG3              __at(0x7523);	// @ (0xEA4 * 8 + 3)
#define                                 BBIPG3_bit          BANKMASK(MABBIPG), 3
// MABBIPG<BBIPG4>
extern volatile __bit                   BBIPG4              __at(0x7524);	// @ (0xEA4 * 8 + 4)
#define                                 BBIPG4_bit          BANKMASK(MABBIPG), 4
// MABBIPG<BBIPG5>
extern volatile __bit                   BBIPG5              __at(0x7525);	// @ (0xEA4 * 8 + 5)
#define                                 BBIPG5_bit          BANKMASK(MABBIPG), 5
// MABBIPG<BBIPG6>
extern volatile __bit                   BBIPG6              __at(0x7526);	// @ (0xEA4 * 8 + 6)
#define                                 BBIPG6_bit          BANKMASK(MABBIPG), 6
// ERXFCON<BCEN>
extern volatile __bit                   BCEN                __at(0x76C0);	// @ (0xED8 * 8 + 0)
#define                                 BCEN_bit            BANKMASK(ERXFCON), 0
// PIE2<BCL1IE>
extern volatile __bit                   BCL1IE              __at(0x7D03);	// @ (0xFA0 * 8 + 3)
#define                                 BCL1IE_bit          BANKMASK(PIE2), 3
// PIR2<BCL1IF>
extern volatile __bit                   BCL1IF              __at(0x7D0B);	// @ (0xFA1 * 8 + 3)
#define                                 BCL1IF_bit          BANKMASK(PIR2), 3
// IPR2<BCL1IP>
extern volatile __bit                   BCL1IP              __at(0x7D13);	// @ (0xFA2 * 8 + 3)
#define                                 BCL1IP_bit          BANKMASK(IPR2), 3
// PIE2<BCLIE>
extern volatile __bit                   BCLIE               __at(0x7D03);	// @ (0xFA0 * 8 + 3)
#define                                 BCLIE_bit           BANKMASK(PIE2), 3
// PIR2<BCLIF>
extern volatile __bit                   BCLIF               __at(0x7D0B);	// @ (0xFA1 * 8 + 3)
#define                                 BCLIF_bit           BANKMASK(PIR2), 3
// IPR2<BCLIP>
extern volatile __bit                   BCLIP               __at(0x7D13);	// @ (0xFA2 * 8 + 3)
#define                                 BCLIP_bit           BANKMASK(IPR2), 3
// SSP1STAT<BF>
extern volatile __bit                   BF                  __at(0x7E38);	// @ (0xFC7 * 8 + 0)
#define                                 BF_bit              BANKMASK(SSP1STAT), 0
// SSP1STAT<BF1>
extern volatile __bit                   BF1                 __at(0x7E38);	// @ (0xFC7 * 8 + 0)
#define                                 BF1_bit             BANKMASK(SSP1STAT), 0
// RCON<BOR>
extern volatile __bit                   BOR                 __at(0x7E80);	// @ (0xFD0 * 8 + 0)
#define                                 BOR_bit             BANKMASK(RCON), 0
// BAUDCON1<BRG16>
extern volatile __bit _DEPRECATED       BRG16               __at(0x7BF3);	// @ (0xF7E * 8 + 3)
#define                                 BRG16_bit           BANKMASK(BAUDCON1), 3
// BAUDCON1<BRG161>
extern volatile __bit                   BRG161              __at(0x7BF3);	// @ (0xF7E * 8 + 3)
#define                                 BRG161_bit          BANKMASK(BAUDCON1), 3
// BAUDCON2<BRG162>
extern volatile __bit                   BRG162              __at(0x7BE3);	// @ (0xF7C * 8 + 3)
#define                                 BRG162_bit          BANKMASK(BAUDCON2), 3
// TXSTA1<BRGH>
extern volatile __bit _DEPRECATED       BRGH                __at(0x7D62);	// @ (0xFAC * 8 + 2)
#define                                 BRGH_bit            BANKMASK(TXSTA1), 2
// TXSTA1<BRGH1>
extern volatile __bit                   BRGH1               __at(0x7D62);	// @ (0xFAC * 8 + 2)
#define                                 BRGH1_bit           BANKMASK(TXSTA1), 2
// TXSTA2<BRGH2>
extern volatile __bit                   BRGH2               __at(0x7B62);	// @ (0xF6C * 8 + 2)
#define                                 BRGH2_bit           BANKMASK(TXSTA2), 2
// ESTAT<BUFER>
extern volatile __bit                   BUFER               __at(0x77EE);	// @ (0xEFD * 8 + 6)
#define                                 BUFER_bit           BANKMASK(ESTAT), 6
// MISTAT<BUSY>
extern volatile __bit                   BUSY                __at(0x7450);	// @ (0xE8A * 8 + 0)
#define                                 BUSY_bit            BANKMASK(MISTAT), 0
// CMCON<C1INV>
extern volatile __bit                   C1INV               __at(0x7DA4);	// @ (0xFB4 * 8 + 4)
#define                                 C1INV_bit           BANKMASK(CMCON), 4
// CMCON<C1OUT>
extern volatile __bit                   C1OUT               __at(0x7DA6);	// @ (0xFB4 * 8 + 6)
#define                                 C1OUT_bit           BANKMASK(CMCON), 6
// PORTF<C1OUTF>
extern volatile __bit                   C1OUTF              __at(0x7C2A);	// @ (0xF85 * 8 + 2)
#define                                 C1OUTF_bit          BANKMASK(PORTF), 2
// CMCON<C2INV>
extern volatile __bit                   C2INV               __at(0x7DA5);	// @ (0xFB4 * 8 + 5)
#define                                 C2INV_bit           BANKMASK(CMCON), 5
// CMCON<C2OUT>
extern volatile __bit                   C2OUT               __at(0x7DA7);	// @ (0xFB4 * 8 + 7)
#define                                 C2OUT_bit           BANKMASK(CMCON), 7
// PORTF<C2OUTF>
extern volatile __bit                   C2OUTF              __at(0x7C29);	// @ (0xF85 * 8 + 1)
#define                                 C2OUTF_bit          BANKMASK(PORTF), 1
// PORTG<C3OUTG>
extern volatile __bit                   C3OUTG              __at(0x7C31);	// @ (0xF86 * 8 + 1)
#define                                 C3OUTG_bit          BANKMASK(PORTG), 1
// STATUS<CARRY>
extern volatile __bit                   CARRY               __at(0x7EC0);	// @ (0xFD8 * 8 + 0)
#define                                 CARRY_bit           BANKMASK(STATUS), 0
// PORTC<CCP1>
extern volatile __bit                   CCP1                __at(0x7C12);	// @ (0xF82 * 8 + 2)
#define                                 CCP1_bit            BANKMASK(PORTC), 2
// PORTE<CCP10>
extern volatile __bit                   CCP10               __at(0x7C22);	// @ (0xF84 * 8 + 2)
#define                                 CCP10_bit           BANKMASK(PORTE), 2
// PIE1<CCP1IE>
extern volatile __bit                   CCP1IE              __at(0x7CEA);	// @ (0xF9D * 8 + 2)
#define                                 CCP1IE_bit          BANKMASK(PIE1), 2
// PIR1<CCP1IF>
extern volatile __bit                   CCP1IF              __at(0x7CF2);	// @ (0xF9E * 8 + 2)
#define                                 CCP1IF_bit          BANKMASK(PIR1), 2
// IPR1<CCP1IP>
extern volatile __bit                   CCP1IP              __at(0x7CFA);	// @ (0xF9F * 8 + 2)
#define                                 CCP1IP_bit          BANKMASK(IPR1), 2
// CCP1CON<CCP1M0>
extern volatile __bit                   CCP1M0              __at(0x7DE8);	// @ (0xFBD * 8 + 0)
#define                                 CCP1M0_bit          BANKMASK(CCP1CON), 0
// CCP1CON<CCP1M1>
extern volatile __bit                   CCP1M1              __at(0x7DE9);	// @ (0xFBD * 8 + 1)
#define                                 CCP1M1_bit          BANKMASK(CCP1CON), 1
// CCP1CON<CCP1M2>
extern volatile __bit                   CCP1M2              __at(0x7DEA);	// @ (0xFBD * 8 + 2)
#define                                 CCP1M2_bit          BANKMASK(CCP1CON), 2
// CCP1CON<CCP1M3>
extern volatile __bit                   CCP1M3              __at(0x7DEB);	// @ (0xFBD * 8 + 3)
#define                                 CCP1M3_bit          BANKMASK(CCP1CON), 3
// CCP1CON<CCP1X>
extern volatile __bit                   CCP1X               __at(0x7DED);	// @ (0xFBD * 8 + 5)
#define                                 CCP1X_bit           BANKMASK(CCP1CON), 5
// CCP1CON<CCP1Y>
extern volatile __bit                   CCP1Y               __at(0x7DEC);	// @ (0xFBD * 8 + 4)
#define                                 CCP1Y_bit           BANKMASK(CCP1CON), 4
// PORTE<CCP2E>
extern volatile __bit                   CCP2E               __at(0x7C27);	// @ (0xF84 * 8 + 7)
#define                                 CCP2E_bit           BANKMASK(PORTE), 7
// PIE2<CCP2IE>
extern volatile __bit                   CCP2IE              __at(0x7D00);	// @ (0xFA0 * 8 + 0)
#define                                 CCP2IE_bit          BANKMASK(PIE2), 0
// PIR2<CCP2IF>
extern volatile __bit                   CCP2IF              __at(0x7D08);	// @ (0xFA1 * 8 + 0)
#define                                 CCP2IF_bit          BANKMASK(PIR2), 0
// IPR2<CCP2IP>
extern volatile __bit                   CCP2IP              __at(0x7D10);	// @ (0xFA2 * 8 + 0)
#define                                 CCP2IP_bit          BANKMASK(IPR2), 0
// CCP2CON<CCP2M0>
extern volatile __bit                   CCP2M0              __at(0x7DD0);	// @ (0xFBA * 8 + 0)
#define                                 CCP2M0_bit          BANKMASK(CCP2CON), 0
// CCP2CON<CCP2M1>
extern volatile __bit                   CCP2M1              __at(0x7DD1);	// @ (0xFBA * 8 + 1)
#define                                 CCP2M1_bit          BANKMASK(CCP2CON), 1
// CCP2CON<CCP2M2>
extern volatile __bit                   CCP2M2              __at(0x7DD2);	// @ (0xFBA * 8 + 2)
#define                                 CCP2M2_bit          BANKMASK(CCP2CON), 2
// CCP2CON<CCP2M3>
extern volatile __bit                   CCP2M3              __at(0x7DD3);	// @ (0xFBA * 8 + 3)
#define                                 CCP2M3_bit          BANKMASK(CCP2CON), 3
// CCP2CON<CCP2X>
extern volatile __bit                   CCP2X               __at(0x7DD5);	// @ (0xFBA * 8 + 5)
#define                                 CCP2X_bit           BANKMASK(CCP2CON), 5
// CCP2CON<CCP2Y>
extern volatile __bit                   CCP2Y               __at(0x7DD4);	// @ (0xFBA * 8 + 4)
#define                                 CCP2Y_bit           BANKMASK(CCP2CON), 4
// PORTB<CCP2_PA2>
extern volatile __bit                   CCP2_PA2            __at(0x7C0B);	// @ (0xF81 * 8 + 3)
#define                                 CCP2_PA2_bit        BANKMASK(PORTB), 3
// PORTG<CCP3>
extern volatile __bit                   CCP3                __at(0x7C30);	// @ (0xF86 * 8 + 0)
#define                                 CCP3_bit            BANKMASK(PORTG), 0
// PIE3<CCP3IE>
extern volatile __bit                   CCP3IE              __at(0x7D18);	// @ (0xFA3 * 8 + 0)
#define                                 CCP3IE_bit          BANKMASK(PIE3), 0
// PIR3<CCP3IF>
extern volatile __bit                   CCP3IF              __at(0x7D20);	// @ (0xFA4 * 8 + 0)
#define                                 CCP3IF_bit          BANKMASK(PIR3), 0
// IPR3<CCP3IP>
extern volatile __bit                   CCP3IP              __at(0x7D28);	// @ (0xFA5 * 8 + 0)
#define                                 CCP3IP_bit          BANKMASK(IPR3), 0
// CCP3CON<CCP3M0>
extern volatile __bit                   CCP3M0              __at(0x7DB8);	// @ (0xFB7 * 8 + 0)
#define                                 CCP3M0_bit          BANKMASK(CCP3CON), 0
// CCP3CON<CCP3M1>
extern volatile __bit                   CCP3M1              __at(0x7DB9);	// @ (0xFB7 * 8 + 1)
#define                                 CCP3M1_bit          BANKMASK(CCP3CON), 1
// CCP3CON<CCP3M2>
extern volatile __bit                   CCP3M2              __at(0x7DBA);	// @ (0xFB7 * 8 + 2)
#define                                 CCP3M2_bit          BANKMASK(CCP3CON), 2
// CCP3CON<CCP3M3>
extern volatile __bit                   CCP3M3              __at(0x7DBB);	// @ (0xFB7 * 8 + 3)
#define                                 CCP3M3_bit          BANKMASK(CCP3CON), 3
// CCP3CON<CCP3X>
extern volatile __bit                   CCP3X               __at(0x7DBD);	// @ (0xFB7 * 8 + 5)
#define                                 CCP3X_bit           BANKMASK(CCP3CON), 5
// CCP3CON<CCP3Y>
extern volatile __bit                   CCP3Y               __at(0x7DBC);	// @ (0xFB7 * 8 + 4)
#define                                 CCP3Y_bit           BANKMASK(CCP3CON), 4
// PORTG<CCP4>
extern volatile __bit                   CCP4                __at(0x7C33);	// @ (0xF86 * 8 + 3)
#define                                 CCP4_bit            BANKMASK(PORTG), 3
// PIE3<CCP4IE>
extern volatile __bit                   CCP4IE              __at(0x7D19);	// @ (0xFA3 * 8 + 1)
#define                                 CCP4IE_bit          BANKMASK(PIE3), 1
// PIR3<CCP4IF>
extern volatile __bit                   CCP4IF              __at(0x7D21);	// @ (0xFA4 * 8 + 1)
#define                                 CCP4IF_bit          BANKMASK(PIR3), 1
// IPR3<CCP4IP>
extern volatile __bit                   CCP4IP              __at(0x7D29);	// @ (0xFA5 * 8 + 1)
#define                                 CCP4IP_bit          BANKMASK(IPR3), 1
// CCP4CON<CCP4M0>
extern volatile __bit                   CCP4M0              __at(0x7B98);	// @ (0xF73 * 8 + 0)
#define                                 CCP4M0_bit          BANKMASK(CCP4CON), 0
// CCP4CON<CCP4M1>
extern volatile __bit                   CCP4M1              __at(0x7B99);	// @ (0xF73 * 8 + 1)
#define                                 CCP4M1_bit          BANKMASK(CCP4CON), 1
// CCP4CON<CCP4M2>
extern volatile __bit                   CCP4M2              __at(0x7B9A);	// @ (0xF73 * 8 + 2)
#define                                 CCP4M2_bit          BANKMASK(CCP4CON), 2
// CCP4CON<CCP4M3>
extern volatile __bit                   CCP4M3              __at(0x7B9B);	// @ (0xF73 * 8 + 3)
#define                                 CCP4M3_bit          BANKMASK(CCP4CON), 3
// CCP4CON<CCP4X>
extern volatile __bit                   CCP4X               __at(0x7B9D);	// @ (0xF73 * 8 + 5)
#define                                 CCP4X_bit           BANKMASK(CCP4CON), 5
// CCP4CON<CCP4Y>
extern volatile __bit                   CCP4Y               __at(0x7B9C);	// @ (0xF73 * 8 + 4)
#define                                 CCP4Y_bit           BANKMASK(CCP4CON), 4
// PORTG<CCP5>
extern volatile __bit                   CCP5                __at(0x7C34);	// @ (0xF86 * 8 + 4)
#define                                 CCP5_bit            BANKMASK(PORTG), 4
// PIE3<CCP5IE>
extern volatile __bit                   CCP5IE              __at(0x7D1A);	// @ (0xFA3 * 8 + 2)
#define                                 CCP5IE_bit          BANKMASK(PIE3), 2
// PIR3<CCP5IF>
extern volatile __bit                   CCP5IF              __at(0x7D22);	// @ (0xFA4 * 8 + 2)
#define                                 CCP5IF_bit          BANKMASK(PIR3), 2
// IPR3<CCP5IP>
extern volatile __bit                   CCP5IP              __at(0x7D2A);	// @ (0xFA5 * 8 + 2)
#define                                 CCP5IP_bit          BANKMASK(IPR3), 2
// CCP5CON<CCP5M0>
extern volatile __bit                   CCP5M0              __at(0x7B80);	// @ (0xF70 * 8 + 0)
#define                                 CCP5M0_bit          BANKMASK(CCP5CON), 0
// CCP5CON<CCP5M1>
extern volatile __bit                   CCP5M1              __at(0x7B81);	// @ (0xF70 * 8 + 1)
#define                                 CCP5M1_bit          BANKMASK(CCP5CON), 1
// CCP5CON<CCP5M2>
extern volatile __bit                   CCP5M2              __at(0x7B82);	// @ (0xF70 * 8 + 2)
#define                                 CCP5M2_bit          BANKMASK(CCP5CON), 2
// CCP5CON<CCP5M3>
extern volatile __bit                   CCP5M3              __at(0x7B83);	// @ (0xF70 * 8 + 3)
#define                                 CCP5M3_bit          BANKMASK(CCP5CON), 3
// CCP5CON<CCP5X>
extern volatile __bit                   CCP5X               __at(0x7B85);	// @ (0xF70 * 8 + 5)
#define                                 CCP5X_bit           BANKMASK(CCP5CON), 5
// CCP5CON<CCP5Y>
extern volatile __bit                   CCP5Y               __at(0x7B84);	// @ (0xF70 * 8 + 4)
#define                                 CCP5Y_bit           BANKMASK(CCP5CON), 4
// PORTH<CCP6>
extern volatile __bit                   CCP6                __at(0x7C3F);	// @ (0xF87 * 8 + 7)
#define                                 CCP6_bit            BANKMASK(PORTH), 7
// PORTE<CCP6E>
extern volatile __bit                   CCP6E               __at(0x7C26);	// @ (0xF84 * 8 + 6)
#define                                 CCP6E_bit           BANKMASK(PORTE), 6
// PORTH<CCP7>
extern volatile __bit                   CCP7                __at(0x7C3E);	// @ (0xF87 * 8 + 6)
#define                                 CCP7_bit            BANKMASK(PORTH), 6
// PORTE<CCP7E>
extern volatile __bit                   CCP7E               __at(0x7C25);	// @ (0xF84 * 8 + 5)
#define                                 CCP7E_bit           BANKMASK(PORTE), 5
// PORTH<CCP8>
extern volatile __bit                   CCP8                __at(0x7C3D);	// @ (0xF87 * 8 + 5)
#define                                 CCP8_bit            BANKMASK(PORTH), 5
// PORTE<CCP8E>
extern volatile __bit                   CCP8E               __at(0x7C24);	// @ (0xF84 * 8 + 4)
#define                                 CCP8E_bit           BANKMASK(PORTE), 4
// PORTH<CCP9>
extern volatile __bit                   CCP9                __at(0x7C3C);	// @ (0xF87 * 8 + 4)
#define                                 CCP9_bit            BANKMASK(PORTH), 4
// PORTE<CCP9E>
extern volatile __bit                   CCP9E               __at(0x7C23);	// @ (0xF84 * 8 + 3)
#define                                 CCP9E_bit           BANKMASK(PORTE), 3
// ADCON0<CHS0>
extern volatile __bit                   CHS0                __at(0x7E12);	// @ (0xFC2 * 8 + 2)
#define                                 CHS0_bit            BANKMASK(ADCON0), 2
// ADCON0<CHS1>
extern volatile __bit                   CHS1                __at(0x7E13);	// @ (0xFC2 * 8 + 3)
#define                                 CHS1_bit            BANKMASK(ADCON0), 3
// ADCON0<CHS2>
extern volatile __bit                   CHS2                __at(0x7E14);	// @ (0xFC2 * 8 + 4)
#define                                 CHS2_bit            BANKMASK(ADCON0), 4
// ADCON0<CHS3>
extern volatile __bit                   CHS3                __at(0x7E15);	// @ (0xFC2 * 8 + 5)
#define                                 CHS3_bit            BANKMASK(ADCON0), 5
// ADCON1<CHSN3>
extern volatile __bit                   CHSN3               __at(0x7E0B);	// @ (0xFC1 * 8 + 3)
#define                                 CHSN3_bit           BANKMASK(ADCON1), 3
// CMCON<CIS>
extern volatile __bit                   CIS                 __at(0x7DA3);	// @ (0xFB4 * 8 + 3)
#define                                 CIS_bit             BANKMASK(CMCON), 3
// PORTC<CK>
extern volatile __bit                   CK                  __at(0x7C16);	// @ (0xF82 * 8 + 6)
#define                                 CK_bit              BANKMASK(PORTC), 6
// PORTC<CK1>
extern volatile __bit                   CK1                 __at(0x7C16);	// @ (0xF82 * 8 + 6)
#define                                 CK1_bit             BANKMASK(PORTC), 6
// PORTG<CK2>
extern volatile __bit                   CK2                 __at(0x7C31);	// @ (0xF86 * 8 + 1)
#define                                 CK2_bit             BANKMASK(PORTG), 1
// SSP1STAT<CKE>
extern volatile __bit                   CKE                 __at(0x7E3E);	// @ (0xFC7 * 8 + 6)
#define                                 CKE_bit             BANKMASK(SSP1STAT), 6
// SSP1STAT<CKE1>
extern volatile __bit                   CKE1                __at(0x7E3E);	// @ (0xFC7 * 8 + 6)
#define                                 CKE1_bit            BANKMASK(SSP1STAT), 6
// SSP1CON1<CKP>
extern volatile __bit                   CKP                 __at(0x7E34);	// @ (0xFC6 * 8 + 4)
#define                                 CKP_bit             BANKMASK(SSP1CON1), 4
// SSP1CON1<CKP1>
extern volatile __bit                   CKP1                __at(0x7E34);	// @ (0xFC6 * 8 + 4)
#define                                 CKP1_bit            BANKMASK(SSP1CON1), 4
// BAUDCON1<CKTXP>
extern volatile __bit                   CKTXP               __at(0x7BF4);	// @ (0xF7E * 8 + 4)
#define                                 CKTXP_bit           BANKMASK(BAUDCON1), 4
// RCON<CM>
extern volatile __bit                   CM                  __at(0x7E85);	// @ (0xFD0 * 8 + 5)
#define                                 CM_bit              BANKMASK(RCON), 5
// CMCON<CM0>
extern volatile __bit                   CM0                 __at(0x7DA0);	// @ (0xFB4 * 8 + 0)
#define                                 CM0_bit             BANKMASK(CMCON), 0
// CMCON<CM1>
extern volatile __bit                   CM1                 __at(0x7DA1);	// @ (0xFB4 * 8 + 1)
#define                                 CM1_bit             BANKMASK(CMCON), 1
// CMCON<CM2>
extern volatile __bit                   CM2                 __at(0x7DA2);	// @ (0xFB4 * 8 + 2)
#define                                 CM2_bit             BANKMASK(CMCON), 2
// CMCON<CMEN0>
extern volatile __bit                   CMEN0               __at(0x7DA0);	// @ (0xFB4 * 8 + 0)
#define                                 CMEN0_bit           BANKMASK(CMCON), 0
// CMCON<CMEN1>
extern volatile __bit                   CMEN1               __at(0x7DA1);	// @ (0xFB4 * 8 + 1)
#define                                 CMEN1_bit           BANKMASK(CMCON), 1
// CMCON<CMEN2>
extern volatile __bit                   CMEN2               __at(0x7DA2);	// @ (0xFB4 * 8 + 2)
#define                                 CMEN2_bit           BANKMASK(CMCON), 2
// PIE2<CMIE>
extern volatile __bit                   CMIE                __at(0x7D06);	// @ (0xFA0 * 8 + 6)
#define                                 CMIE_bit            BANKMASK(PIE2), 6
// PIR2<CMIF>
extern volatile __bit                   CMIF                __at(0x7D0E);	// @ (0xFA1 * 8 + 6)
#define                                 CMIF_bit            BANKMASK(PIR2), 6
// IPR2<CMIP>
extern volatile __bit                   CMIP                __at(0x7D16);	// @ (0xFA2 * 8 + 6)
#define                                 CMIP_bit            BANKMASK(IPR2), 6
// ERXFCON<CRCEN>
extern volatile __bit                   CRCEN               __at(0x76C5);	// @ (0xED8 * 8 + 5)
#define                                 CRCEN_bit           BANKMASK(ERXFCON), 5
// RCSTA1<CREN>
extern volatile __bit _DEPRECATED       CREN                __at(0x7D5C);	// @ (0xFAB * 8 + 4)
#define                                 CREN_bit            BANKMASK(RCSTA1), 4
// RCSTA1<CREN1>
extern volatile __bit                   CREN1               __at(0x7D5C);	// @ (0xFAB * 8 + 4)
#define                                 CREN1_bit           BANKMASK(RCSTA1), 4
// RCSTA2<CREN2>
extern volatile __bit                   CREN2               __at(0x7B5C);	// @ (0xF6B * 8 + 4)
#define                                 CREN2_bit           BANKMASK(RCSTA2), 4
// PORTE<CS>
extern volatile __bit                   CS                  __at(0x7C22);	// @ (0xF84 * 8 + 2)
#define                                 CS_bit              BANKMASK(PORTE), 2
// TXSTA1<CSRC>
extern volatile __bit _DEPRECATED       CSRC                __at(0x7D67);	// @ (0xFAC * 8 + 7)
#define                                 CSRC_bit            BANKMASK(TXSTA1), 7
// TXSTA1<CSRC1>
extern volatile __bit                   CSRC1               __at(0x7D67);	// @ (0xFAC * 8 + 7)
#define                                 CSRC1_bit           BANKMASK(TXSTA1), 7
// TXSTA2<CSRC2>
extern volatile __bit                   CSRC2               __at(0x7B67);	// @ (0xF6C * 8 + 7)
#define                                 CSRC2_bit           BANKMASK(TXSTA2), 7
// ECON1<CSUMEN>
extern volatile __bit                   CSUMEN              __at(0x7E94);	// @ (0xFD2 * 8 + 4)
#define                                 CSUMEN_bit          BANKMASK(ECON1), 4
// CVRCON<CVR0>
extern volatile __bit                   CVR0                __at(0x7DA8);	// @ (0xFB5 * 8 + 0)
#define                                 CVR0_bit            BANKMASK(CVRCON), 0
// CVRCON<CVR1>
extern volatile __bit                   CVR1                __at(0x7DA9);	// @ (0xFB5 * 8 + 1)
#define                                 CVR1_bit            BANKMASK(CVRCON), 1
// CVRCON<CVR2>
extern volatile __bit                   CVR2                __at(0x7DAA);	// @ (0xFB5 * 8 + 2)
#define                                 CVR2_bit            BANKMASK(CVRCON), 2
// CVRCON<CVR3>
extern volatile __bit                   CVR3                __at(0x7DAB);	// @ (0xFB5 * 8 + 3)
#define                                 CVR3_bit            BANKMASK(CVRCON), 3
// PORTF<CVREF>
extern volatile __bit                   CVREF               __at(0x7C2D);	// @ (0xF85 * 8 + 5)
#define                                 CVREF_bit           BANKMASK(PORTF), 5
// CVRCON<CVREN>
extern volatile __bit                   CVREN               __at(0x7DAF);	// @ (0xFB5 * 8 + 7)
#define                                 CVREN_bit           BANKMASK(CVRCON), 7
// CVRCON<CVROE>
extern volatile __bit                   CVROE               __at(0x7DAE);	// @ (0xFB5 * 8 + 6)
#define                                 CVROE_bit           BANKMASK(CVRCON), 6
// CVRCON<CVROEN>
extern volatile __bit                   CVROEN              __at(0x7DAE);	// @ (0xFB5 * 8 + 6)
#define                                 CVROEN_bit          BANKMASK(CVRCON), 6
// CVRCON<CVRR>
extern volatile __bit                   CVRR                __at(0x7DAD);	// @ (0xFB5 * 8 + 5)
#define                                 CVRR_bit            BANKMASK(CVRCON), 5
// CVRCON<CVRSS>
extern volatile __bit                   CVRSS               __at(0x7DAC);	// @ (0xFB5 * 8 + 4)
#define                                 CVRSS_bit           BANKMASK(CVRCON), 4
// SSP1STAT<DA>
extern volatile __bit                   DA                  __at(0x7E3D);	// @ (0xFC7 * 8 + 5)
#define                                 DA_bit              BANKMASK(SSP1STAT), 5
// SSP1STAT<DA1>
extern volatile __bit                   DA1                 __at(0x7E3D);	// @ (0xFC7 * 8 + 5)
#define                                 DA1_bit             BANKMASK(SSP1STAT), 5
// SSP1STAT<DATA_ADDRESS>
extern volatile __bit                   DATA_ADDRESS        __at(0x7E3D);	// @ (0xFC7 * 8 + 5)
#define                                 DATA_ADDRESS_bit    BANKMASK(SSP1STAT), 5
// STATUS<DC>
extern volatile __bit                   DC                  __at(0x7EC1);	// @ (0xFD8 * 8 + 1)
#define                                 DC_bit              BANKMASK(STATUS), 1
// CCP1CON<DC1B0>
extern volatile __bit                   DC1B0               __at(0x7DEC);	// @ (0xFBD * 8 + 4)
#define                                 DC1B0_bit           BANKMASK(CCP1CON), 4
// CCP1CON<DC1B1>
extern volatile __bit                   DC1B1               __at(0x7DED);	// @ (0xFBD * 8 + 5)
#define                                 DC1B1_bit           BANKMASK(CCP1CON), 5
// CCP2CON<DC2B0>
extern volatile __bit                   DC2B0               __at(0x7DD4);	// @ (0xFBA * 8 + 4)
#define                                 DC2B0_bit           BANKMASK(CCP2CON), 4
// CCP2CON<DC2B1>
extern volatile __bit                   DC2B1               __at(0x7DD5);	// @ (0xFBA * 8 + 5)
#define                                 DC2B1_bit           BANKMASK(CCP2CON), 5
// CCP3CON<DC3B0>
extern volatile __bit                   DC3B0               __at(0x7DBC);	// @ (0xFB7 * 8 + 4)
#define                                 DC3B0_bit           BANKMASK(CCP3CON), 4
// CCP3CON<DC3B1>
extern volatile __bit                   DC3B1               __at(0x7DBD);	// @ (0xFB7 * 8 + 5)
#define                                 DC3B1_bit           BANKMASK(CCP3CON), 5
// CCP4CON<DC4B0>
extern volatile __bit                   DC4B0               __at(0x7B9C);	// @ (0xF73 * 8 + 4)
#define                                 DC4B0_bit           BANKMASK(CCP4CON), 4
// CCP4CON<DC4B1>
extern volatile __bit                   DC4B1               __at(0x7B9D);	// @ (0xF73 * 8 + 5)
#define                                 DC4B1_bit           BANKMASK(CCP4CON), 5
// CCP5CON<DC5B0>
extern volatile __bit                   DC5B0               __at(0x7B84);	// @ (0xF70 * 8 + 4)
#define                                 DC5B0_bit           BANKMASK(CCP5CON), 4
// CCP5CON<DC5B1>
extern volatile __bit                   DC5B1               __at(0x7B85);	// @ (0xF70 * 8 + 5)
#define                                 DC5B1_bit           BANKMASK(CCP5CON), 5
// MACON4<DEFER>
extern volatile __bit                   DEFER               __at(0x751E);	// @ (0xEA3 * 8 + 6)
#define                                 DEFER_bit           BANKMASK(MACON4), 6
// EIE<DMAIE>
extern volatile __bit                   DMAIE               __at(0x77DD);	// @ (0xEFB * 8 + 5)
#define                                 DMAIE_bit           BANKMASK(EIE), 5
// EIR<DMAIF>
extern volatile __bit                   DMAIF               __at(0x7B05);	// @ (0xF60 * 8 + 5)
#define                                 DMAIF_bit           BANKMASK(EIR), 5
// ECON1<DMAST>
extern volatile __bit                   DMAST               __at(0x7E95);	// @ (0xFD2 * 8 + 5)
#define                                 DMAST_bit           BANKMASK(ECON1), 5
// ADCON0<DONE>
extern volatile __bit                   DONE                __at(0x7E11);	// @ (0xFC2 * 8 + 1)
#define                                 DONE_bit            BANKMASK(ADCON0), 1
// PORTC<DT>
extern volatile __bit                   DT                  __at(0x7C17);	// @ (0xF82 * 8 + 7)
#define                                 DT_bit              BANKMASK(PORTC), 7
// PORTC<DT1>
extern volatile __bit                   DT1                 __at(0x7C17);	// @ (0xF82 * 8 + 7)
#define                                 DT1_bit             BANKMASK(PORTC), 7
// PORTG<DT2>
extern volatile __bit                   DT2                 __at(0x7C32);	// @ (0xF86 * 8 + 2)
#define                                 DT2_bit             BANKMASK(PORTG), 2
// BAUDCON1<DTRXP>
extern volatile __bit                   DTRXP               __at(0x7BF5);	// @ (0xF7E * 8 + 5)
#define                                 DTRXP_bit           BANKMASK(BAUDCON1), 5
// BAUDCON1<DTRXP1>
extern volatile __bit                   DTRXP1              __at(0x7BF5);	// @ (0xF7E * 8 + 5)
#define                                 DTRXP1_bit          BANKMASK(BAUDCON1), 5
// BAUDCON2<DTRXP2>
extern volatile __bit                   DTRXP2              __at(0x7BE5);	// @ (0xF7C * 8 + 5)
#define                                 DTRXP2_bit          BANKMASK(BAUDCON2), 5
// SSP1STAT<D_A>
extern volatile __bit                   D_A                 __at(0x7E3D);	// @ (0xFC7 * 8 + 5)
#define                                 D_A_bit             BANKMASK(SSP1STAT), 5
// SSP1STAT<D_NOT_A>
extern volatile __bit                   D_NOT_A             __at(0x7E3D);	// @ (0xFC7 * 8 + 5)
#define                                 D_NOT_A_bit         BANKMASK(SSP1STAT), 5
// SSP1STAT<D_nA>
extern volatile __bit                   D_nA                __at(0x7E3D);	// @ (0xFC7 * 8 + 5)
#define                                 D_nA_bit            BANKMASK(SSP1STAT), 5
// PR2<EBDIS>
extern volatile __bit                   EBDIS               __at(0x7E5F);	// @ (0xFCB * 8 + 7)
#define                                 EBDIS_bit           BANKMASK(PR2), 7
// PORTC<ECCP1>
extern volatile __bit                   ECCP1               __at(0x7C12);	// @ (0xF82 * 8 + 2)
#define                                 ECCP1_bit           BANKMASK(PORTC), 2
// ECCP1AS<ECCP1AS0>
extern volatile __bit                   ECCP1AS0            __at(0x7DB4);	// @ (0xFB6 * 8 + 4)
#define                                 ECCP1AS0_bit        BANKMASK(ECCP1AS), 4
// ECCP1AS<ECCP1AS1>
extern volatile __bit                   ECCP1AS1            __at(0x7DB5);	// @ (0xFB6 * 8 + 5)
#define                                 ECCP1AS1_bit        BANKMASK(ECCP1AS), 5
// ECCP1AS<ECCP1AS2>
extern volatile __bit                   ECCP1AS2            __at(0x7DB6);	// @ (0xFB6 * 8 + 6)
#define                                 ECCP1AS2_bit        BANKMASK(ECCP1AS), 6
// ECCP1AS<ECCP1ASE>
extern volatile __bit                   ECCP1ASE            __at(0x7DB7);	// @ (0xFB6 * 8 + 7)
#define                                 ECCP1ASE_bit        BANKMASK(ECCP1AS), 7
// ECCP2AS<ECCP2AS0>
extern volatile __bit                   ECCP2AS0            __at(0x7B44);	// @ (0xF68 * 8 + 4)
#define                                 ECCP2AS0_bit        BANKMASK(ECCP2AS), 4
// ECCP2AS<ECCP2AS1>
extern volatile __bit                   ECCP2AS1            __at(0x7B45);	// @ (0xF68 * 8 + 5)
#define                                 ECCP2AS1_bit        BANKMASK(ECCP2AS), 5
// ECCP2AS<ECCP2AS2>
extern volatile __bit                   ECCP2AS2            __at(0x7B46);	// @ (0xF68 * 8 + 6)
#define                                 ECCP2AS2_bit        BANKMASK(ECCP2AS), 6
// ECCP2AS<ECCP2ASE>
extern volatile __bit                   ECCP2ASE            __at(0x7B47);	// @ (0xF68 * 8 + 7)
#define                                 ECCP2ASE_bit        BANKMASK(ECCP2AS), 7
// PORTG<ECCP3>
extern volatile __bit                   ECCP3               __at(0x7C30);	// @ (0xF86 * 8 + 0)
#define                                 ECCP3_bit           BANKMASK(PORTG), 0
// ECCP3AS<ECCP3AS0>
extern volatile __bit                   ECCP3AS0            __at(0x7B54);	// @ (0xF6A * 8 + 4)
#define                                 ECCP3AS0_bit        BANKMASK(ECCP3AS), 4
// ECCP3AS<ECCP3AS1>
extern volatile __bit                   ECCP3AS1            __at(0x7B55);	// @ (0xF6A * 8 + 5)
#define                                 ECCP3AS1_bit        BANKMASK(ECCP3AS), 5
// ECCP3AS<ECCP3AS2>
extern volatile __bit                   ECCP3AS2            __at(0x7B56);	// @ (0xF6A * 8 + 6)
#define                                 ECCP3AS2_bit        BANKMASK(ECCP3AS), 6
// ECCP3AS<ECCP3ASE>
extern volatile __bit                   ECCP3ASE            __at(0x7B57);	// @ (0xF6A * 8 + 7)
#define                                 ECCP3ASE_bit        BANKMASK(ECCP3AS), 7
// EDATA<EDATA0>
extern volatile __bit                   EDATA0              __at(0x7B08);	// @ (0xF61 * 8 + 0)
#define                                 EDATA0_bit          BANKMASK(EDATA), 0
// EDATA<EDATA1>
extern volatile __bit                   EDATA1              __at(0x7B09);	// @ (0xF61 * 8 + 1)
#define                                 EDATA1_bit          BANKMASK(EDATA), 1
// EDATA<EDATA2>
extern volatile __bit                   EDATA2              __at(0x7B0A);	// @ (0xF61 * 8 + 2)
#define                                 EDATA2_bit          BANKMASK(EDATA), 2
// EDATA<EDATA3>
extern volatile __bit                   EDATA3              __at(0x7B0B);	// @ (0xF61 * 8 + 3)
#define                                 EDATA3_bit          BANKMASK(EDATA), 3
// EDATA<EDATA4>
extern volatile __bit                   EDATA4              __at(0x7B0C);	// @ (0xF61 * 8 + 4)
#define                                 EDATA4_bit          BANKMASK(EDATA), 4
// EDATA<EDATA5>
extern volatile __bit                   EDATA5              __at(0x7B0D);	// @ (0xF61 * 8 + 5)
#define                                 EDATA5_bit          BANKMASK(EDATA), 5
// EDATA<EDATA6>
extern volatile __bit                   EDATA6              __at(0x7B0E);	// @ (0xF61 * 8 + 6)
#define                                 EDATA6_bit          BANKMASK(EDATA), 6
// EDATA<EDATA7>
extern volatile __bit                   EDATA7              __at(0x7B0F);	// @ (0xF61 * 8 + 7)
#define                                 EDATA7_bit          BANKMASK(EDATA), 7
// ECON2<ETHEN>
extern volatile __bit                   ETHEN               __at(0x77F5);	// @ (0xEFE * 8 + 5)
#define                                 ETHEN_bit           BANKMASK(ECON2), 5
// PIE2<ETHIE>
extern volatile __bit                   ETHIE               __at(0x7D05);	// @ (0xFA0 * 8 + 5)
#define                                 ETHIE_bit           BANKMASK(PIE2), 5
// PIR2<ETHIF>
extern volatile __bit                   ETHIF               __at(0x7D0D);	// @ (0xFA1 * 8 + 5)
#define                                 ETHIF_bit           BANKMASK(PIR2), 5
// IPR2<ETHIP>
extern volatile __bit                   ETHIP               __at(0x7D15);	// @ (0xFA2 * 8 + 5)
#define                                 ETHIP_bit           BANKMASK(IPR2), 5
// EIE<ETXIE>
extern volatile __bit                   ETXIE               __at(0x77DB);	// @ (0xEFB * 8 + 3)
#define                                 ETXIE_bit           BANKMASK(EIE), 3
// EIR<ETXIF>
extern volatile __bit                   ETXIF               __at(0x7B03);	// @ (0xF60 * 8 + 3)
#define                                 ETXIF_bit           BANKMASK(EIR), 3
// EFLOCON<FCEN0>
extern volatile __bit                   FCEN0               __at(0x74B8);	// @ (0xE97 * 8 + 0)
#define                                 FCEN0_bit           BANKMASK(EFLOCON), 0
// EFLOCON<FCEN1>
extern volatile __bit                   FCEN1               __at(0x74B9);	// @ (0xE97 * 8 + 1)
#define                                 FCEN1_bit           BANKMASK(EFLOCON), 1
// RCSTA1<FERR>
extern volatile __bit _DEPRECATED       FERR                __at(0x7D5A);	// @ (0xFAB * 8 + 2)
#define                                 FERR_bit            BANKMASK(RCSTA1), 2
// RCSTA1<FERR1>
extern volatile __bit                   FERR1               __at(0x7D5A);	// @ (0xFAB * 8 + 2)
#define                                 FERR1_bit           BANKMASK(RCSTA1), 2
// RCSTA2<FERR2>
extern volatile __bit                   FERR2               __at(0x7B5A);	// @ (0xF6B * 8 + 2)
#define                                 FERR2_bit           BANKMASK(RCSTA2), 2
// PORTB<FLT0>
extern volatile __bit                   FLT0                __at(0x7C08);	// @ (0xF81 * 8 + 0)
#define                                 FLT0_bit            BANKMASK(PORTB), 0
// EECON1<FREE>
extern volatile __bit                   FREE                __at(0x7D34);	// @ (0xFA6 * 8 + 4)
#define                                 FREE_bit            BANKMASK(EECON1), 4
// MACON3<FRMLNEN>
extern volatile __bit                   FRMLNEN             __at(0x7511);	// @ (0xEA2 * 8 + 1)
#define                                 FRMLNEN_bit         BANKMASK(MACON3), 1
// MACON3<FULDPX>
extern volatile __bit                   FULDPX              __at(0x7510);	// @ (0xEA2 * 8 + 0)
#define                                 FULDPX_bit          BANKMASK(MACON3), 0
// EFLOCON<FULDPXS>
extern volatile __bit                   FULDPXS             __at(0x74BA);	// @ (0xE97 * 8 + 2)
#define                                 FULDPXS_bit         BANKMASK(EFLOCON), 2
// SSP1CON2<GCEN>
extern volatile __bit                   GCEN                __at(0x7E2F);	// @ (0xFC5 * 8 + 7)
#define                                 GCEN_bit            BANKMASK(SSP1CON2), 7
// SSP1CON2<GCEN1>
extern volatile __bit                   GCEN1               __at(0x7E2F);	// @ (0xFC5 * 8 + 7)
#define                                 GCEN1_bit           BANKMASK(SSP1CON2), 7
// INTCON<GIE>
extern volatile __bit                   GIE                 __at(0x7F97);	// @ (0xFF2 * 8 + 7)
#define                                 GIE_bit             BANKMASK(INTCON), 7
// INTCON<GIEH>
extern volatile __bit                   GIEH                __at(0x7F97);	// @ (0xFF2 * 8 + 7)
#define                                 GIEH_bit            BANKMASK(INTCON), 7
// INTCON<GIEL>
extern volatile __bit                   GIEL                __at(0x7F96);	// @ (0xFF2 * 8 + 6)
#define                                 GIEL_bit            BANKMASK(INTCON), 6
// INTCON<GIE_GIEH>
extern volatile __bit                   GIE_GIEH            __at(0x7F97);	// @ (0xFF2 * 8 + 7)
#define                                 GIE_GIEH_bit        BANKMASK(INTCON), 7
// ADCON0<GO>
extern volatile __bit                   GO                  __at(0x7E11);	// @ (0xFC2 * 8 + 1)
#define                                 GO_bit              BANKMASK(ADCON0), 1
// ADCON0<GODONE>
extern volatile __bit                   GODONE              __at(0x7E11);	// @ (0xFC2 * 8 + 1)
#define                                 GODONE_bit          BANKMASK(ADCON0), 1
// ADCON0<GO_DONE>
extern volatile __bit                   GO_DONE             __at(0x7E11);	// @ (0xFC2 * 8 + 1)
#define                                 GO_DONE_bit         BANKMASK(ADCON0), 1
// ADCON0<GO_NOT_DONE>
extern volatile __bit                   GO_NOT_DONE         __at(0x7E11);	// @ (0xFC2 * 8 + 1)
#define                                 GO_NOT_DONE_bit     BANKMASK(ADCON0), 1
// ADCON0<GO_nDONE>
extern volatile __bit                   GO_nDONE            __at(0x7E11);	// @ (0xFC2 * 8 + 1)
#define                                 GO_nDONE_bit        BANKMASK(ADCON0), 1
// MACON3<HFRMEN>
extern volatile __bit                   HFRMEN              __at(0x7512);	// @ (0xEA2 * 8 + 2)
#define                                 HFRMEN_bit          BANKMASK(MACON3), 2
// ERXFCON<HTEN>
extern volatile __bit                   HTEN                __at(0x76C2);	// @ (0xED8 * 8 + 2)
#define                                 HTEN_bit            BANKMASK(ERXFCON), 2
// SSP1STAT<I2C_DAT>
extern volatile __bit                   I2C_DAT             __at(0x7E3D);	// @ (0xFC7 * 8 + 5)
#define                                 I2C_DAT_bit         BANKMASK(SSP1STAT), 5
// SSP1STAT<I2C_READ>
extern volatile __bit                   I2C_READ            __at(0x7E3A);	// @ (0xFC7 * 8 + 2)
#define                                 I2C_READ_bit        BANKMASK(SSP1STAT), 2
// SSP1STAT<I2C_START>
extern volatile __bit                   I2C_START           __at(0x7E3B);	// @ (0xFC7 * 8 + 3)
#define                                 I2C_START_bit       BANKMASK(SSP1STAT), 3
// SSP1STAT<I2C_STOP>
extern volatile __bit                   I2C_STOP            __at(0x7E3C);	// @ (0xFC7 * 8 + 4)
#define                                 I2C_STOP_bit        BANKMASK(SSP1STAT), 4
// OSCCON<IDLEN>
extern volatile __bit                   IDLEN               __at(0x7E9F);	// @ (0xFD3 * 8 + 7)
#define                                 IDLEN_bit           BANKMASK(OSCCON), 7
// PORTB<INT0>
extern volatile __bit                   INT0                __at(0x7C08);	// @ (0xF81 * 8 + 0)
#define                                 INT0_bit            BANKMASK(PORTB), 0
// INTCON<INT0E>
extern volatile __bit                   INT0E               __at(0x7F94);	// @ (0xFF2 * 8 + 4)
#define                                 INT0E_bit           BANKMASK(INTCON), 4
// INTCON<INT0F>
extern volatile __bit                   INT0F               __at(0x7F91);	// @ (0xFF2 * 8 + 1)
#define                                 INT0F_bit           BANKMASK(INTCON), 1
// INTCON<INT0IE>
extern volatile __bit                   INT0IE              __at(0x7F94);	// @ (0xFF2 * 8 + 4)
#define                                 INT0IE_bit          BANKMASK(INTCON), 4
// INTCON<INT0IF>
extern volatile __bit                   INT0IF              __at(0x7F91);	// @ (0xFF2 * 8 + 1)
#define                                 INT0IF_bit          BANKMASK(INTCON), 1
// PORTB<INT1>
extern volatile __bit                   INT1                __at(0x7C09);	// @ (0xF81 * 8 + 1)
#define                                 INT1_bit            BANKMASK(PORTB), 1
// INTCON3<INT1E>
extern volatile __bit                   INT1E               __at(0x7F83);	// @ (0xFF0 * 8 + 3)
#define                                 INT1E_bit           BANKMASK(INTCON3), 3
// INTCON3<INT1F>
extern volatile __bit                   INT1F               __at(0x7F80);	// @ (0xFF0 * 8 + 0)
#define                                 INT1F_bit           BANKMASK(INTCON3), 0
// INTCON3<INT1IE>
extern volatile __bit                   INT1IE              __at(0x7F83);	// @ (0xFF0 * 8 + 3)
#define                                 INT1IE_bit          BANKMASK(INTCON3), 3
// INTCON3<INT1IF>
extern volatile __bit                   INT1IF              __at(0x7F80);	// @ (0xFF0 * 8 + 0)
#define                                 INT1IF_bit          BANKMASK(INTCON3), 0
// INTCON3<INT1IP>
extern volatile __bit                   INT1IP              __at(0x7F86);	// @ (0xFF0 * 8 + 6)
#define                                 INT1IP_bit          BANKMASK(INTCON3), 6
// INTCON3<INT1P>
extern volatile __bit                   INT1P               __at(0x7F86);	// @ (0xFF0 * 8 + 6)
#define                                 INT1P_bit           BANKMASK(INTCON3), 6
// PORTB<INT2>
extern volatile __bit                   INT2                __at(0x7C0A);	// @ (0xF81 * 8 + 2)
#define                                 INT2_bit            BANKMASK(PORTB), 2
// INTCON3<INT2E>
extern volatile __bit                   INT2E               __at(0x7F84);	// @ (0xFF0 * 8 + 4)
#define                                 INT2E_bit           BANKMASK(INTCON3), 4
// INTCON3<INT2F>
extern volatile __bit                   INT2F               __at(0x7F81);	// @ (0xFF0 * 8 + 1)
#define                                 INT2F_bit           BANKMASK(INTCON3), 1
// INTCON3<INT2IE>
extern volatile __bit                   INT2IE              __at(0x7F84);	// @ (0xFF0 * 8 + 4)
#define                                 INT2IE_bit          BANKMASK(INTCON3), 4
// INTCON3<INT2IF>
extern volatile __bit                   INT2IF              __at(0x7F81);	// @ (0xFF0 * 8 + 1)
#define                                 INT2IF_bit          BANKMASK(INTCON3), 1
// INTCON3<INT2IP>
extern volatile __bit                   INT2IP              __at(0x7F87);	// @ (0xFF0 * 8 + 7)
#define                                 INT2IP_bit          BANKMASK(INTCON3), 7
// INTCON3<INT2P>
extern volatile __bit                   INT2P               __at(0x7F87);	// @ (0xFF0 * 8 + 7)
#define                                 INT2P_bit           BANKMASK(INTCON3), 7
// PORTB<INT3>
extern volatile __bit                   INT3                __at(0x7C0B);	// @ (0xF81 * 8 + 3)
#define                                 INT3_bit            BANKMASK(PORTB), 3
// INTCON3<INT3E>
extern volatile __bit                   INT3E               __at(0x7F85);	// @ (0xFF0 * 8 + 5)
#define                                 INT3E_bit           BANKMASK(INTCON3), 5
// INTCON3<INT3F>
extern volatile __bit                   INT3F               __at(0x7F82);	// @ (0xFF0 * 8 + 2)
#define                                 INT3F_bit           BANKMASK(INTCON3), 2
// INTCON3<INT3IE>
extern volatile __bit                   INT3IE              __at(0x7F85);	// @ (0xFF0 * 8 + 5)
#define                                 INT3IE_bit          BANKMASK(INTCON3), 5
// INTCON3<INT3IF>
extern volatile __bit                   INT3IF              __at(0x7F82);	// @ (0xFF0 * 8 + 2)
#define                                 INT3IF_bit          BANKMASK(INTCON3), 2
// INTCON2<INT3IP>
extern volatile __bit                   INT3IP              __at(0x7F89);	// @ (0xFF1 * 8 + 1)
#define                                 INT3IP_bit          BANKMASK(INTCON2), 1
// INTCON2<INTEDG0>
extern volatile __bit                   INTEDG0             __at(0x7F8E);	// @ (0xFF1 * 8 + 6)
#define                                 INTEDG0_bit         BANKMASK(INTCON2), 6
// INTCON2<INTEDG1>
extern volatile __bit                   INTEDG1             __at(0x7F8D);	// @ (0xFF1 * 8 + 5)
#define                                 INTEDG1_bit         BANKMASK(INTCON2), 5
// INTCON2<INTEDG2>
extern volatile __bit                   INTEDG2             __at(0x7F8C);	// @ (0xFF1 * 8 + 4)
#define                                 INTEDG2_bit         BANKMASK(INTCON2), 4
// INTCON2<INTEDG3>
extern volatile __bit                   INTEDG3             __at(0x7F8B);	// @ (0xFF1 * 8 + 3)
#define                                 INTEDG3_bit         BANKMASK(INTCON2), 3
// RCON<IPEN>
extern volatile __bit                   IPEN                __at(0x7E87);	// @ (0xFD0 * 8 + 7)
#define                                 IPEN_bit            BANKMASK(RCON), 7
// PORTB<KBI0>
extern volatile __bit                   KBI0                __at(0x7C0C);	// @ (0xF81 * 8 + 4)
#define                                 KBI0_bit            BANKMASK(PORTB), 4
// PORTB<KBI1>
extern volatile __bit                   KBI1                __at(0x7C0D);	// @ (0xF81 * 8 + 5)
#define                                 KBI1_bit            BANKMASK(PORTB), 5
// PORTB<KBI2>
extern volatile __bit                   KBI2                __at(0x7C0E);	// @ (0xF81 * 8 + 6)
#define                                 KBI2_bit            BANKMASK(PORTB), 6
// PORTB<KBI3>
extern volatile __bit                   KBI3                __at(0x7C0F);	// @ (0xF81 * 8 + 7)
#define                                 KBI3_bit            BANKMASK(PORTB), 7
// LATA<LA0>
extern volatile __bit                   LA0                 __at(0x7C48);	// @ (0xF89 * 8 + 0)
#define                                 LA0_bit             BANKMASK(LATA), 0
// LATA<LA1>
extern volatile __bit                   LA1                 __at(0x7C49);	// @ (0xF89 * 8 + 1)
#define                                 LA1_bit             BANKMASK(LATA), 1
// LATA<LA2>
extern volatile __bit                   LA2                 __at(0x7C4A);	// @ (0xF89 * 8 + 2)
#define                                 LA2_bit             BANKMASK(LATA), 2
// LATA<LA3>
extern volatile __bit                   LA3                 __at(0x7C4B);	// @ (0xF89 * 8 + 3)
#define                                 LA3_bit             BANKMASK(LATA), 3
// LATA<LA4>
extern volatile __bit                   LA4                 __at(0x7C4C);	// @ (0xF89 * 8 + 4)
#define                                 LA4_bit             BANKMASK(LATA), 4
// LATA<LA5>
extern volatile __bit                   LA5                 __at(0x7C4D);	// @ (0xF89 * 8 + 5)
#define                                 LA5_bit             BANKMASK(LATA), 5
// LATA<LA6>
extern volatile __bit                   LA6                 __at(0x7C4E);	// @ (0xF89 * 8 + 6)
#define                                 LA6_bit             BANKMASK(LATA), 6
// LATA<LA7>
extern volatile __bit                   LA7                 __at(0x7C4F);	// @ (0xF89 * 8 + 7)
#define                                 LA7_bit             BANKMASK(LATA), 7
// LATA<LATA0>
extern volatile __bit                   LATA0               __at(0x7C48);	// @ (0xF89 * 8 + 0)
#define                                 LATA0_bit           BANKMASK(LATA), 0
// LATA<LATA1>
extern volatile __bit                   LATA1               __at(0x7C49);	// @ (0xF89 * 8 + 1)
#define                                 LATA1_bit           BANKMASK(LATA), 1
// LATA<LATA2>
extern volatile __bit                   LATA2               __at(0x7C4A);	// @ (0xF89 * 8 + 2)
#define                                 LATA2_bit           BANKMASK(LATA), 2
// LATA<LATA3>
extern volatile __bit                   LATA3               __at(0x7C4B);	// @ (0xF89 * 8 + 3)
#define                                 LATA3_bit           BANKMASK(LATA), 3
// LATA<LATA4>
extern volatile __bit                   LATA4               __at(0x7C4C);	// @ (0xF89 * 8 + 4)
#define                                 LATA4_bit           BANKMASK(LATA), 4
// LATA<LATA5>
extern volatile __bit                   LATA5               __at(0x7C4D);	// @ (0xF89 * 8 + 5)
#define                                 LATA5_bit           BANKMASK(LATA), 5
// LATA<LATA7>
extern volatile __bit                   LATA7               __at(0x7C4F);	// @ (0xF89 * 8 + 7)
#define                                 LATA7_bit           BANKMASK(LATA), 7
// LATB<LATB0>
extern volatile __bit                   LATB0               __at(0x7C50);	// @ (0xF8A * 8 + 0)
#define                                 LATB0_bit           BANKMASK(LATB), 0
// LATB<LATB1>
extern volatile __bit                   LATB1               __at(0x7C51);	// @ (0xF8A * 8 + 1)
#define                                 LATB1_bit           BANKMASK(LATB), 1
// LATB<LATB2>
extern volatile __bit                   LATB2               __at(0x7C52);	// @ (0xF8A * 8 + 2)
#define                                 LATB2_bit           BANKMASK(LATB), 2
// LATB<LATB3>
extern volatile __bit                   LATB3               __at(0x7C53);	// @ (0xF8A * 8 + 3)
#define                                 LATB3_bit           BANKMASK(LATB), 3
// LATB<LATB4>
extern volatile __bit                   LATB4               __at(0x7C54);	// @ (0xF8A * 8 + 4)
#define                                 LATB4_bit           BANKMASK(LATB), 4
// LATB<LATB5>
extern volatile __bit                   LATB5               __at(0x7C55);	// @ (0xF8A * 8 + 5)
#define                                 LATB5_bit           BANKMASK(LATB), 5
// LATB<LATB6>
extern volatile __bit                   LATB6               __at(0x7C56);	// @ (0xF8A * 8 + 6)
#define                                 LATB6_bit           BANKMASK(LATB), 6
// LATB<LATB7>
extern volatile __bit                   LATB7               __at(0x7C57);	// @ (0xF8A * 8 + 7)
#define                                 LATB7_bit           BANKMASK(LATB), 7
// LATC<LATC0>
extern volatile __bit                   LATC0               __at(0x7C58);	// @ (0xF8B * 8 + 0)
#define                                 LATC0_bit           BANKMASK(LATC), 0
// LATC<LATC1>
extern volatile __bit                   LATC1               __at(0x7C59);	// @ (0xF8B * 8 + 1)
#define                                 LATC1_bit           BANKMASK(LATC), 1
// LATC<LATC2>
extern volatile __bit                   LATC2               __at(0x7C5A);	// @ (0xF8B * 8 + 2)
#define                                 LATC2_bit           BANKMASK(LATC), 2
// LATC<LATC3>
extern volatile __bit                   LATC3               __at(0x7C5B);	// @ (0xF8B * 8 + 3)
#define                                 LATC3_bit           BANKMASK(LATC), 3
// LATC<LATC4>
extern volatile __bit                   LATC4               __at(0x7C5C);	// @ (0xF8B * 8 + 4)
#define                                 LATC4_bit           BANKMASK(LATC), 4
// LATC<LATC5>
extern volatile __bit                   LATC5               __at(0x7C5D);	// @ (0xF8B * 8 + 5)
#define                                 LATC5_bit           BANKMASK(LATC), 5
// LATC<LATC6>
extern volatile __bit                   LATC6               __at(0x7C5E);	// @ (0xF8B * 8 + 6)
#define                                 LATC6_bit           BANKMASK(LATC), 6
// LATC<LATC7>
extern volatile __bit                   LATC7               __at(0x7C5F);	// @ (0xF8B * 8 + 7)
#define                                 LATC7_bit           BANKMASK(LATC), 7
// LATD<LATD0>
extern volatile __bit                   LATD0               __at(0x7C60);	// @ (0xF8C * 8 + 0)
#define                                 LATD0_bit           BANKMASK(LATD), 0
// LATD<LATD1>
extern volatile __bit                   LATD1               __at(0x7C61);	// @ (0xF8C * 8 + 1)
#define                                 LATD1_bit           BANKMASK(LATD), 1
// LATD<LATD2>
extern volatile __bit                   LATD2               __at(0x7C62);	// @ (0xF8C * 8 + 2)
#define                                 LATD2_bit           BANKMASK(LATD), 2
// LATE<LATE0>
extern volatile __bit                   LATE0               __at(0x7C68);	// @ (0xF8D * 8 + 0)
#define                                 LATE0_bit           BANKMASK(LATE), 0
// LATE<LATE1>
extern volatile __bit                   LATE1               __at(0x7C69);	// @ (0xF8D * 8 + 1)
#define                                 LATE1_bit           BANKMASK(LATE), 1
// LATE<LATE2>
extern volatile __bit                   LATE2               __at(0x7C6A);	// @ (0xF8D * 8 + 2)
#define                                 LATE2_bit           BANKMASK(LATE), 2
// LATE<LATE3>
extern volatile __bit                   LATE3               __at(0x7C6B);	// @ (0xF8D * 8 + 3)
#define                                 LATE3_bit           BANKMASK(LATE), 3
// LATE<LATE4>
extern volatile __bit                   LATE4               __at(0x7C6C);	// @ (0xF8D * 8 + 4)
#define                                 LATE4_bit           BANKMASK(LATE), 4
// LATE<LATE5>
extern volatile __bit                   LATE5               __at(0x7C6D);	// @ (0xF8D * 8 + 5)
#define                                 LATE5_bit           BANKMASK(LATE), 5
// LATE<LATE6>
extern volatile __bit                   LATE6               __at(0x7C6E);	// @ (0xF8D * 8 + 6)
#define                                 LATE6_bit           BANKMASK(LATE), 6
// LATE<LATE7>
extern volatile __bit                   LATE7               __at(0x7C6F);	// @ (0xF8D * 8 + 7)
#define                                 LATE7_bit           BANKMASK(LATE), 7
// LATF<LATF1>
extern volatile __bit                   LATF1               __at(0x7C71);	// @ (0xF8E * 8 + 1)
#define                                 LATF1_bit           BANKMASK(LATF), 1
// LATF<LATF2>
extern volatile __bit                   LATF2               __at(0x7C72);	// @ (0xF8E * 8 + 2)
#define                                 LATF2_bit           BANKMASK(LATF), 2
// LATF<LATF3>
extern volatile __bit                   LATF3               __at(0x7C73);	// @ (0xF8E * 8 + 3)
#define                                 LATF3_bit           BANKMASK(LATF), 3
// LATF<LATF4>
extern volatile __bit                   LATF4               __at(0x7C74);	// @ (0xF8E * 8 + 4)
#define                                 LATF4_bit           BANKMASK(LATF), 4
// LATF<LATF5>
extern volatile __bit                   LATF5               __at(0x7C75);	// @ (0xF8E * 8 + 5)
#define                                 LATF5_bit           BANKMASK(LATF), 5
// LATF<LATF6>
extern volatile __bit                   LATF6               __at(0x7C76);	// @ (0xF8E * 8 + 6)
#define                                 LATF6_bit           BANKMASK(LATF), 6
// LATF<LATF7>
extern volatile __bit                   LATF7               __at(0x7C77);	// @ (0xF8E * 8 + 7)
#define                                 LATF7_bit           BANKMASK(LATF), 7
// LATG<LATG0>
extern volatile __bit                   LATG0               __at(0x7C78);	// @ (0xF8F * 8 + 0)
#define                                 LATG0_bit           BANKMASK(LATG), 0
// LATG<LATG1>
extern volatile __bit                   LATG1               __at(0x7C79);	// @ (0xF8F * 8 + 1)
#define                                 LATG1_bit           BANKMASK(LATG), 1
// LATG<LATG2>
extern volatile __bit                   LATG2               __at(0x7C7A);	// @ (0xF8F * 8 + 2)
#define                                 LATG2_bit           BANKMASK(LATG), 2
// LATG<LATG3>
extern volatile __bit                   LATG3               __at(0x7C7B);	// @ (0xF8F * 8 + 3)
#define                                 LATG3_bit           BANKMASK(LATG), 3
// LATG<LATG4>
extern volatile __bit                   LATG4               __at(0x7C7C);	// @ (0xF8F * 8 + 4)
#define                                 LATG4_bit           BANKMASK(LATG), 4
// LATH<LATH0>
extern volatile __bit                   LATH0               __at(0x7C80);	// @ (0xF90 * 8 + 0)
#define                                 LATH0_bit           BANKMASK(LATH), 0
// LATH<LATH1>
extern volatile __bit                   LATH1               __at(0x7C81);	// @ (0xF90 * 8 + 1)
#define                                 LATH1_bit           BANKMASK(LATH), 1
// LATH<LATH2>
extern volatile __bit                   LATH2               __at(0x7C82);	// @ (0xF90 * 8 + 2)
#define                                 LATH2_bit           BANKMASK(LATH), 2
// LATH<LATH3>
extern volatile __bit                   LATH3               __at(0x7C83);	// @ (0xF90 * 8 + 3)
#define                                 LATH3_bit           BANKMASK(LATH), 3
// LATH<LATH4>
extern volatile __bit                   LATH4               __at(0x7C84);	// @ (0xF90 * 8 + 4)
#define                                 LATH4_bit           BANKMASK(LATH), 4
// LATH<LATH5>
extern volatile __bit                   LATH5               __at(0x7C85);	// @ (0xF90 * 8 + 5)
#define                                 LATH5_bit           BANKMASK(LATH), 5
// LATH<LATH6>
extern volatile __bit                   LATH6               __at(0x7C86);	// @ (0xF90 * 8 + 6)
#define                                 LATH6_bit           BANKMASK(LATH), 6
// LATH<LATH7>
extern volatile __bit                   LATH7               __at(0x7C87);	// @ (0xF90 * 8 + 7)
#define                                 LATH7_bit           BANKMASK(LATH), 7
// LATJ<LATJ4>
extern volatile __bit                   LATJ4               __at(0x7C8C);	// @ (0xF91 * 8 + 4)
#define                                 LATJ4_bit           BANKMASK(LATJ), 4
// LATJ<LATJ5>
extern volatile __bit                   LATJ5               __at(0x7C8D);	// @ (0xF91 * 8 + 5)
#define                                 LATJ5_bit           BANKMASK(LATJ), 5
// LATB<LB0>
extern volatile __bit                   LB0                 __at(0x7C50);	// @ (0xF8A * 8 + 0)
#define                                 LB0_bit             BANKMASK(LATB), 0
// LATB<LB1>
extern volatile __bit                   LB1                 __at(0x7C51);	// @ (0xF8A * 8 + 1)
#define                                 LB1_bit             BANKMASK(LATB), 1
// LATB<LB2>
extern volatile __bit                   LB2                 __at(0x7C52);	// @ (0xF8A * 8 + 2)
#define                                 LB2_bit             BANKMASK(LATB), 2
// LATB<LB3>
extern volatile __bit                   LB3                 __at(0x7C53);	// @ (0xF8A * 8 + 3)
#define                                 LB3_bit             BANKMASK(LATB), 3
// LATB<LB4>
extern volatile __bit                   LB4                 __at(0x7C54);	// @ (0xF8A * 8 + 4)
#define                                 LB4_bit             BANKMASK(LATB), 4
// LATB<LB5>
extern volatile __bit                   LB5                 __at(0x7C55);	// @ (0xF8A * 8 + 5)
#define                                 LB5_bit             BANKMASK(LATB), 5
// LATB<LB6>
extern volatile __bit                   LB6                 __at(0x7C56);	// @ (0xF8A * 8 + 6)
#define                                 LB6_bit             BANKMASK(LATB), 6
// LATB<LB7>
extern volatile __bit                   LB7                 __at(0x7C57);	// @ (0xF8A * 8 + 7)
#define                                 LB7_bit             BANKMASK(LATB), 7
// LATC<LC0>
extern volatile __bit                   LC0                 __at(0x7C58);	// @ (0xF8B * 8 + 0)
#define                                 LC0_bit             BANKMASK(LATC), 0
// LATC<LC1>
extern volatile __bit                   LC1                 __at(0x7C59);	// @ (0xF8B * 8 + 1)
#define                                 LC1_bit             BANKMASK(LATC), 1
// LATC<LC2>
extern volatile __bit                   LC2                 __at(0x7C5A);	// @ (0xF8B * 8 + 2)
#define                                 LC2_bit             BANKMASK(LATC), 2
// LATC<LC3>
extern volatile __bit                   LC3                 __at(0x7C5B);	// @ (0xF8B * 8 + 3)
#define                                 LC3_bit             BANKMASK(LATC), 3
// LATC<LC4>
extern volatile __bit                   LC4                 __at(0x7C5C);	// @ (0xF8B * 8 + 4)
#define                                 LC4_bit             BANKMASK(LATC), 4
// LATC<LC5>
extern volatile __bit                   LC5                 __at(0x7C5D);	// @ (0xF8B * 8 + 5)
#define                                 LC5_bit             BANKMASK(LATC), 5
// LATC<LC6>
extern volatile __bit                   LC6                 __at(0x7C5E);	// @ (0xF8B * 8 + 6)
#define                                 LC6_bit             BANKMASK(LATC), 6
// LATC<LC7>
extern volatile __bit                   LC7                 __at(0x7C5F);	// @ (0xF8B * 8 + 7)
#define                                 LC7_bit             BANKMASK(LATC), 7
// LATD<LD0>
extern volatile __bit                   LD0                 __at(0x7C60);	// @ (0xF8C * 8 + 0)
#define                                 LD0_bit             BANKMASK(LATD), 0
// LATD<LD1>
extern volatile __bit                   LD1                 __at(0x7C61);	// @ (0xF8C * 8 + 1)
#define                                 LD1_bit             BANKMASK(LATD), 1
// LATD<LD2>
extern volatile __bit                   LD2                 __at(0x7C62);	// @ (0xF8C * 8 + 2)
#define                                 LD2_bit             BANKMASK(LATD), 2
// LATE<LE0>
extern volatile __bit                   LE0                 __at(0x7C68);	// @ (0xF8D * 8 + 0)
#define                                 LE0_bit             BANKMASK(LATE), 0
// LATE<LE1>
extern volatile __bit                   LE1                 __at(0x7C69);	// @ (0xF8D * 8 + 1)
#define                                 LE1_bit             BANKMASK(LATE), 1
// LATE<LE2>
extern volatile __bit                   LE2                 __at(0x7C6A);	// @ (0xF8D * 8 + 2)
#define                                 LE2_bit             BANKMASK(LATE), 2
// LATE<LE3>
extern volatile __bit                   LE3                 __at(0x7C6B);	// @ (0xF8D * 8 + 3)
#define                                 LE3_bit             BANKMASK(LATE), 3
// LATE<LE4>
extern volatile __bit                   LE4                 __at(0x7C6C);	// @ (0xF8D * 8 + 4)
#define                                 LE4_bit             BANKMASK(LATE), 4
// LATE<LE5>
extern volatile __bit                   LE5                 __at(0x7C6D);	// @ (0xF8D * 8 + 5)
#define                                 LE5_bit             BANKMASK(LATE), 5
// LATE<LE6>
extern volatile __bit                   LE6                 __at(0x7C6E);	// @ (0xF8D * 8 + 6)
#define                                 LE6_bit             BANKMASK(LATE), 6
// LATE<LE7>
extern volatile __bit                   LE7                 __at(0x7C6F);	// @ (0xF8D * 8 + 7)
#define                                 LE7_bit             BANKMASK(LATE), 7
// PORTA<LEDA>
extern volatile __bit                   LEDA                __at(0x7C00);	// @ (0xF80 * 8 + 0)
#define                                 LEDA_bit            BANKMASK(PORTA), 0
// PORTA<LEDB>
extern volatile __bit                   LEDB                __at(0x7C01);	// @ (0xF80 * 8 + 1)
#define                                 LEDB_bit            BANKMASK(PORTA), 1
// LATF<LF1>
extern volatile __bit                   LF1                 __at(0x7C71);	// @ (0xF8E * 8 + 1)
#define                                 LF1_bit             BANKMASK(LATF), 1
// LATF<LF2>
extern volatile __bit                   LF2                 __at(0x7C72);	// @ (0xF8E * 8 + 2)
#define                                 LF2_bit             BANKMASK(LATF), 2
// LATF<LF3>
extern volatile __bit                   LF3                 __at(0x7C73);	// @ (0xF8E * 8 + 3)
#define                                 LF3_bit             BANKMASK(LATF), 3
// LATF<LF4>
extern volatile __bit                   LF4                 __at(0x7C74);	// @ (0xF8E * 8 + 4)
#define                                 LF4_bit             BANKMASK(LATF), 4
// LATF<LF5>
extern volatile __bit                   LF5                 __at(0x7C75);	// @ (0xF8E * 8 + 5)
#define                                 LF5_bit             BANKMASK(LATF), 5
// LATF<LF6>
extern volatile __bit                   LF6                 __at(0x7C76);	// @ (0xF8E * 8 + 6)
#define                                 LF6_bit             BANKMASK(LATF), 6
// LATF<LF7>
extern volatile __bit                   LF7                 __at(0x7C77);	// @ (0xF8E * 8 + 7)
#define                                 LF7_bit             BANKMASK(LATF), 7
// LATG<LG0>
extern volatile __bit                   LG0                 __at(0x7C78);	// @ (0xF8F * 8 + 0)
#define                                 LG0_bit             BANKMASK(LATG), 0
// LATG<LG1>
extern volatile __bit                   LG1                 __at(0x7C79);	// @ (0xF8F * 8 + 1)
#define                                 LG1_bit             BANKMASK(LATG), 1
// LATG<LG2>
extern volatile __bit                   LG2                 __at(0x7C7A);	// @ (0xF8F * 8 + 2)
#define                                 LG2_bit             BANKMASK(LATG), 2
// LATG<LG3>
extern volatile __bit                   LG3                 __at(0x7C7B);	// @ (0xF8F * 8 + 3)
#define                                 LG3_bit             BANKMASK(LATG), 3
// LATG<LG4>
extern volatile __bit                   LG4                 __at(0x7C7C);	// @ (0xF8F * 8 + 4)
#define                                 LG4_bit             BANKMASK(LATG), 4
// LATH<LH0>
extern volatile __bit                   LH0                 __at(0x7C80);	// @ (0xF90 * 8 + 0)
#define                                 LH0_bit             BANKMASK(LATH), 0
// LATH<LH1>
extern volatile __bit                   LH1                 __at(0x7C81);	// @ (0xF90 * 8 + 1)
#define                                 LH1_bit             BANKMASK(LATH), 1
// LATH<LH2>
extern volatile __bit                   LH2                 __at(0x7C82);	// @ (0xF90 * 8 + 2)
#define                                 LH2_bit             BANKMASK(LATH), 2
// LATH<LH3>
extern volatile __bit                   LH3                 __at(0x7C83);	// @ (0xF90 * 8 + 3)
#define                                 LH3_bit             BANKMASK(LATH), 3
// LATH<LH4>
extern volatile __bit                   LH4                 __at(0x7C84);	// @ (0xF90 * 8 + 4)
#define                                 LH4_bit             BANKMASK(LATH), 4
// LATH<LH5>
extern volatile __bit                   LH5                 __at(0x7C85);	// @ (0xF90 * 8 + 5)
#define                                 LH5_bit             BANKMASK(LATH), 5
// LATH<LH6>
extern volatile __bit                   LH6                 __at(0x7C86);	// @ (0xF90 * 8 + 6)
#define                                 LH6_bit             BANKMASK(LATH), 6
// LATH<LH7>
extern volatile __bit                   LH7                 __at(0x7C87);	// @ (0xF90 * 8 + 7)
#define                                 LH7_bit             BANKMASK(LATH), 7
// EIE<LINKIE>
extern volatile __bit                   LINKIE              __at(0x77DC);	// @ (0xEFB * 8 + 4)
#define                                 LINKIE_bit          BANKMASK(EIE), 4
// EIR<LINKIF>
extern volatile __bit                   LINKIF              __at(0x7B04);	// @ (0xF60 * 8 + 4)
#define                                 LINKIF_bit          BANKMASK(EIR), 4
// LATJ<LJ4>
extern volatile __bit                   LJ4                 __at(0x7C8C);	// @ (0xF91 * 8 + 4)
#define                                 LJ4_bit             BANKMASK(LATJ), 4
// LATJ<LJ5>
extern volatile __bit                   LJ5                 __at(0x7C8D);	// @ (0xF91 * 8 + 5)
#define                                 LJ5_bit             BANKMASK(LATJ), 5
// PORTA<LVDIN>
extern volatile __bit                   LVDIN               __at(0x7C05);	// @ (0xF80 * 8 + 5)
#define                                 LVDIN_bit           BANKMASK(PORTA), 5
// MACON1<MARXEN>
extern volatile __bit                   MARXEN              __at(0x7500);	// @ (0xEA0 * 8 + 0)
#define                                 MARXEN_bit          BANKMASK(MACON1), 0
// ERXFCON<MCEN>
extern volatile __bit                   MCEN                __at(0x76C1);	// @ (0xED8 * 8 + 1)
#define                                 MCEN_bit            BANKMASK(ERXFCON), 1
// MICMD<MIIRD>
extern volatile __bit                   MIIRD               __at(0x7590);	// @ (0xEB2 * 8 + 0)
#define                                 MIIRD_bit           BANKMASK(MICMD), 0
// MICMD<MIISCAN>
extern volatile __bit                   MIISCAN             __at(0x7591);	// @ (0xEB2 * 8 + 1)
#define                                 MIISCAN_bit         BANKMASK(MICMD), 1
// ERXFCON<MPEN>
extern volatile __bit                   MPEN                __at(0x76C3);	// @ (0xED8 * 8 + 3)
#define                                 MPEN_bit            BANKMASK(ERXFCON), 3
// SSP1ADD<MSK0>
extern volatile __bit                   MSK0                __at(0x7E40);	// @ (0xFC8 * 8 + 0)
#define                                 MSK0_bit            BANKMASK(SSP1ADD), 0
// SSP1ADD<MSK01>
extern volatile __bit                   MSK01               __at(0x7E40);	// @ (0xFC8 * 8 + 0)
#define                                 MSK01_bit           BANKMASK(SSP1ADD), 0
// SSP1ADD<MSK1>
extern volatile __bit                   MSK1                __at(0x7E41);	// @ (0xFC8 * 8 + 1)
#define                                 MSK1_bit            BANKMASK(SSP1ADD), 1
// SSP1ADD<MSK11>
extern volatile __bit                   MSK11               __at(0x7E41);	// @ (0xFC8 * 8 + 1)
#define                                 MSK11_bit           BANKMASK(SSP1ADD), 1
// SSP1ADD<MSK2>
extern volatile __bit                   MSK2                __at(0x7E42);	// @ (0xFC8 * 8 + 2)
#define                                 MSK2_bit            BANKMASK(SSP1ADD), 2
// SSP1ADD<MSK21>
extern volatile __bit                   MSK21               __at(0x7E42);	// @ (0xFC8 * 8 + 2)
#define                                 MSK21_bit           BANKMASK(SSP1ADD), 2
// SSP1ADD<MSK3>
extern volatile __bit                   MSK3                __at(0x7E43);	// @ (0xFC8 * 8 + 3)
#define                                 MSK3_bit            BANKMASK(SSP1ADD), 3
// SSP1ADD<MSK31>
extern volatile __bit                   MSK31               __at(0x7E43);	// @ (0xFC8 * 8 + 3)
#define                                 MSK31_bit           BANKMASK(SSP1ADD), 3
// SSP1ADD<MSK4>
extern volatile __bit                   MSK4                __at(0x7E44);	// @ (0xFC8 * 8 + 4)
#define                                 MSK4_bit            BANKMASK(SSP1ADD), 4
// SSP1ADD<MSK41>
extern volatile __bit                   MSK41               __at(0x7E44);	// @ (0xFC8 * 8 + 4)
#define                                 MSK41_bit           BANKMASK(SSP1ADD), 4
// SSP1ADD<MSK5>
extern volatile __bit                   MSK5                __at(0x7E45);	// @ (0xFC8 * 8 + 5)
#define                                 MSK5_bit            BANKMASK(SSP1ADD), 5
// SSP1ADD<MSK51>
extern volatile __bit                   MSK51               __at(0x7E45);	// @ (0xFC8 * 8 + 5)
#define                                 MSK51_bit           BANKMASK(SSP1ADD), 5
// SSP1ADD<MSK6>
extern volatile __bit                   MSK6                __at(0x7E46);	// @ (0xFC8 * 8 + 6)
#define                                 MSK6_bit            BANKMASK(SSP1ADD), 6
// SSP1ADD<MSK61>
extern volatile __bit                   MSK61               __at(0x7E46);	// @ (0xFC8 * 8 + 6)
#define                                 MSK61_bit           BANKMASK(SSP1ADD), 6
// SSP1ADD<MSK7>
extern volatile __bit                   MSK7                __at(0x7E47);	// @ (0xFC8 * 8 + 7)
#define                                 MSK7_bit            BANKMASK(SSP1ADD), 7
// SSP1ADD<MSK71>
extern volatile __bit                   MSK71               __at(0x7E47);	// @ (0xFC8 * 8 + 7)
#define                                 MSK71_bit           BANKMASK(SSP1ADD), 7
// STATUS<NEGATIVE>
extern volatile __bit                   NEGATIVE            __at(0x7EC4);	// @ (0xFD8 * 8 + 4)
#define                                 NEGATIVE_bit        BANKMASK(STATUS), 4
// SSP1STAT<NOT_A>
extern volatile __bit                   NOT_A               __at(0x7E3D);	// @ (0xFC7 * 8 + 5)
#define                                 NOT_A_bit           BANKMASK(SSP1STAT), 5
// SSP1STAT<NOT_ADDRESS>
extern volatile __bit                   NOT_ADDRESS         __at(0x7E3D);	// @ (0xFC7 * 8 + 5)
#define                                 NOT_ADDRESS_bit     BANKMASK(SSP1STAT), 5
// RCON<NOT_BOR>
extern volatile __bit                   NOT_BOR             __at(0x7E80);	// @ (0xFD0 * 8 + 0)
#define                                 NOT_BOR_bit         BANKMASK(RCON), 0
// RCON<NOT_CM>
extern volatile __bit                   NOT_CM              __at(0x7E85);	// @ (0xFD0 * 8 + 5)
#define                                 NOT_CM_bit          BANKMASK(RCON), 5
// ADCON0<NOT_DONE>
extern volatile __bit                   NOT_DONE            __at(0x7E11);	// @ (0xFC2 * 8 + 1)
#define                                 NOT_DONE_bit        BANKMASK(ADCON0), 1
// RCON<NOT_PD>
extern volatile __bit                   NOT_PD              __at(0x7E82);	// @ (0xFD0 * 8 + 2)
#define                                 NOT_PD_bit          BANKMASK(RCON), 2
// RCON<NOT_POR>
extern volatile __bit                   NOT_POR             __at(0x7E81);	// @ (0xFD0 * 8 + 1)
#define                                 NOT_POR_bit         BANKMASK(RCON), 1
// INTCON2<NOT_RBPU>
extern volatile __bit                   NOT_RBPU            __at(0x7F8F);	// @ (0xFF1 * 8 + 7)
#define                                 NOT_RBPU_bit        BANKMASK(INTCON2), 7
// RCON<NOT_RI>
extern volatile __bit                   NOT_RI              __at(0x7E84);	// @ (0xFD0 * 8 + 4)
#define                                 NOT_RI_bit          BANKMASK(RCON), 4
// PORTF<NOT_SS>
extern volatile __bit                   NOT_SS              __at(0x7C2F);	// @ (0xF85 * 8 + 7)
#define                                 NOT_SS_bit          BANKMASK(PORTF), 7
// PORTF<NOT_SS1>
extern volatile __bit                   NOT_SS1             __at(0x7C2F);	// @ (0xF85 * 8 + 7)
#define                                 NOT_SS1_bit         BANKMASK(PORTF), 7
// T1CON<NOT_T1SYNC>
extern volatile __bit                   NOT_T1SYNC          __at(0x7E6A);	// @ (0xFCD * 8 + 2)
#define                                 NOT_T1SYNC_bit      BANKMASK(T1CON), 2
// T3CON<NOT_T3SYNC>
extern volatile __bit                   NOT_T3SYNC          __at(0x7D8A);	// @ (0xFB1 * 8 + 2)
#define                                 NOT_T3SYNC_bit      BANKMASK(T3CON), 2
// RCON<NOT_TO>
extern volatile __bit                   NOT_TO              __at(0x7E83);	// @ (0xFD0 * 8 + 3)
#define                                 NOT_TO_bit          BANKMASK(RCON), 3
// SSP1STAT<NOT_W>
extern volatile __bit                   NOT_W               __at(0x7E3A);	// @ (0xFC7 * 8 + 2)
#define                                 NOT_W_bit           BANKMASK(SSP1STAT), 2
// SSP1STAT<NOT_WRITE>
extern volatile __bit                   NOT_WRITE           __at(0x7E3A);	// @ (0xFC7 * 8 + 2)
#define                                 NOT_WRITE_bit       BANKMASK(SSP1STAT), 2
// MISTAT<NVALID>
extern volatile __bit                   NVALID              __at(0x7452);	// @ (0xE8A * 8 + 2)
#define                                 NVALID_bit          BANKMASK(MISTAT), 2
// RCSTA1<OERR>
extern volatile __bit _DEPRECATED       OERR                __at(0x7D59);	// @ (0xFAB * 8 + 1)
#define                                 OERR_bit            BANKMASK(RCSTA1), 1
// RCSTA1<OERR1>
extern volatile __bit                   OERR1               __at(0x7D59);	// @ (0xFAB * 8 + 1)
#define                                 OERR1_bit           BANKMASK(RCSTA1), 1
// RCSTA2<OERR2>
extern volatile __bit                   OERR2               __at(0x7B59);	// @ (0xF6B * 8 + 1)
#define                                 OERR2_bit           BANKMASK(RCSTA2), 1
// PIE2<OSCFIE>
extern volatile __bit                   OSCFIE              __at(0x7D07);	// @ (0xFA0 * 8 + 7)
#define                                 OSCFIE_bit          BANKMASK(PIE2), 7
// PIR2<OSCFIF>
extern volatile __bit                   OSCFIF              __at(0x7D0F);	// @ (0xFA1 * 8 + 7)
#define                                 OSCFIF_bit          BANKMASK(PIR2), 7
// IPR2<OSCFIP>
extern volatile __bit                   OSCFIP              __at(0x7D17);	// @ (0xFA2 * 8 + 7)
#define                                 OSCFIP_bit          BANKMASK(IPR2), 7
// OSCCON<OSTS>
extern volatile __bit                   OSTS                __at(0x7E9B);	// @ (0xFD3 * 8 + 3)
#define                                 OSTS_bit            BANKMASK(OSCCON), 3
// STATUS<OV>
extern volatile __bit                   OV                  __at(0x7EC3);	// @ (0xFD8 * 8 + 3)
#define                                 OV_bit              BANKMASK(STATUS), 3
// STATUS<OVERFLOW>
extern volatile __bit                   OVERFLOW            __at(0x7EC3);	// @ (0xFD8 * 8 + 3)
#define                                 OVERFLOW_bit        BANKMASK(STATUS), 3
// ECCP1DEL<P1DC0>
extern volatile __bit                   P1DC0               __at(0x7BC8);	// @ (0xF79 * 8 + 0)
#define                                 P1DC0_bit           BANKMASK(ECCP1DEL), 0
// ECCP1DEL<P1DC1>
extern volatile __bit                   P1DC1               __at(0x7BC9);	// @ (0xF79 * 8 + 1)
#define                                 P1DC1_bit           BANKMASK(ECCP1DEL), 1
// ECCP1DEL<P1DC2>
extern volatile __bit                   P1DC2               __at(0x7BCA);	// @ (0xF79 * 8 + 2)
#define                                 P1DC2_bit           BANKMASK(ECCP1DEL), 2
// ECCP1DEL<P1DC3>
extern volatile __bit                   P1DC3               __at(0x7BCB);	// @ (0xF79 * 8 + 3)
#define                                 P1DC3_bit           BANKMASK(ECCP1DEL), 3
// ECCP1DEL<P1DC4>
extern volatile __bit                   P1DC4               __at(0x7BCC);	// @ (0xF79 * 8 + 4)
#define                                 P1DC4_bit           BANKMASK(ECCP1DEL), 4
// ECCP1DEL<P1DC5>
extern volatile __bit                   P1DC5               __at(0x7BCD);	// @ (0xF79 * 8 + 5)
#define                                 P1DC5_bit           BANKMASK(ECCP1DEL), 5
// ECCP1DEL<P1DC6>
extern volatile __bit                   P1DC6               __at(0x7BCE);	// @ (0xF79 * 8 + 6)
#define                                 P1DC6_bit           BANKMASK(ECCP1DEL), 6
// CCP1CON<P1M0>
extern volatile __bit                   P1M0                __at(0x7DEE);	// @ (0xFBD * 8 + 6)
#define                                 P1M0_bit            BANKMASK(CCP1CON), 6
// CCP1CON<P1M1>
extern volatile __bit                   P1M1                __at(0x7DEF);	// @ (0xFBD * 8 + 7)
#define                                 P1M1_bit            BANKMASK(CCP1CON), 7
// ECCP1DEL<P1RSEN>
extern volatile __bit                   P1RSEN              __at(0x7BCF);	// @ (0xF79 * 8 + 7)
#define                                 P1RSEN_bit          BANKMASK(ECCP1DEL), 7
// ECCP2DEL<P2DC0>
extern volatile __bit                   P2DC0               __at(0x7B38);	// @ (0xF67 * 8 + 0)
#define                                 P2DC0_bit           BANKMASK(ECCP2DEL), 0
// ECCP2DEL<P2DC1>
extern volatile __bit                   P2DC1               __at(0x7B39);	// @ (0xF67 * 8 + 1)
#define                                 P2DC1_bit           BANKMASK(ECCP2DEL), 1
// ECCP2DEL<P2DC2>
extern volatile __bit                   P2DC2               __at(0x7B3A);	// @ (0xF67 * 8 + 2)
#define                                 P2DC2_bit           BANKMASK(ECCP2DEL), 2
// ECCP2DEL<P2DC3>
extern volatile __bit                   P2DC3               __at(0x7B3B);	// @ (0xF67 * 8 + 3)
#define                                 P2DC3_bit           BANKMASK(ECCP2DEL), 3
// ECCP2DEL<P2DC4>
extern volatile __bit                   P2DC4               __at(0x7B3C);	// @ (0xF67 * 8 + 4)
#define                                 P2DC4_bit           BANKMASK(ECCP2DEL), 4
// ECCP2DEL<P2DC5>
extern volatile __bit                   P2DC5               __at(0x7B3D);	// @ (0xF67 * 8 + 5)
#define                                 P2DC5_bit           BANKMASK(ECCP2DEL), 5
// ECCP2DEL<P2DC6>
extern volatile __bit                   P2DC6               __at(0x7B3E);	// @ (0xF67 * 8 + 6)
#define                                 P2DC6_bit           BANKMASK(ECCP2DEL), 6
// CCP2CON<P2M0>
extern volatile __bit                   P2M0                __at(0x7DD6);	// @ (0xFBA * 8 + 6)
#define                                 P2M0_bit            BANKMASK(CCP2CON), 6
// CCP2CON<P2M1>
extern volatile __bit                   P2M1                __at(0x7DD7);	// @ (0xFBA * 8 + 7)
#define                                 P2M1_bit            BANKMASK(CCP2CON), 7
// ECCP2DEL<P2RSEN>
extern volatile __bit                   P2RSEN              __at(0x7B3F);	// @ (0xF67 * 8 + 7)
#define                                 P2RSEN_bit          BANKMASK(ECCP2DEL), 7
// ECCP3DEL<P3DC0>
extern volatile __bit                   P3DC0               __at(0x7B48);	// @ (0xF69 * 8 + 0)
#define                                 P3DC0_bit           BANKMASK(ECCP3DEL), 0
// ECCP3DEL<P3DC1>
extern volatile __bit                   P3DC1               __at(0x7B49);	// @ (0xF69 * 8 + 1)
#define                                 P3DC1_bit           BANKMASK(ECCP3DEL), 1
// ECCP3DEL<P3DC2>
extern volatile __bit                   P3DC2               __at(0x7B4A);	// @ (0xF69 * 8 + 2)
#define                                 P3DC2_bit           BANKMASK(ECCP3DEL), 2
// ECCP3DEL<P3DC3>
extern volatile __bit                   P3DC3               __at(0x7B4B);	// @ (0xF69 * 8 + 3)
#define                                 P3DC3_bit           BANKMASK(ECCP3DEL), 3
// ECCP3DEL<P3DC4>
extern volatile __bit                   P3DC4               __at(0x7B4C);	// @ (0xF69 * 8 + 4)
#define                                 P3DC4_bit           BANKMASK(ECCP3DEL), 4
// ECCP3DEL<P3DC5>
extern volatile __bit                   P3DC5               __at(0x7B4D);	// @ (0xF69 * 8 + 5)
#define                                 P3DC5_bit           BANKMASK(ECCP3DEL), 5
// ECCP3DEL<P3DC6>
extern volatile __bit                   P3DC6               __at(0x7B4E);	// @ (0xF69 * 8 + 6)
#define                                 P3DC6_bit           BANKMASK(ECCP3DEL), 6
// CCP3CON<P3M0>
extern volatile __bit                   P3M0                __at(0x7DBE);	// @ (0xFB7 * 8 + 6)
#define                                 P3M0_bit            BANKMASK(CCP3CON), 6
// CCP3CON<P3M1>
extern volatile __bit                   P3M1                __at(0x7DBF);	// @ (0xFB7 * 8 + 7)
#define                                 P3M1_bit            BANKMASK(CCP3CON), 7
// ECCP3DEL<P3RSEN>
extern volatile __bit                   P3RSEN              __at(0x7B4F);	// @ (0xF69 * 8 + 7)
#define                                 P3RSEN_bit          BANKMASK(ECCP3DEL), 7
// PORTC<PA1>
extern volatile __bit                   PA1                 __at(0x7C12);	// @ (0xF82 * 8 + 2)
#define                                 PA1_bit             BANKMASK(PORTC), 2
// PORTC<PA2>
extern volatile __bit                   PA2                 __at(0x7C11);	// @ (0xF82 * 8 + 1)
#define                                 PA2_bit             BANKMASK(PORTC), 1
// PORTE<PA2E>
extern volatile __bit                   PA2E                __at(0x7C27);	// @ (0xF84 * 8 + 7)
#define                                 PA2E_bit            BANKMASK(PORTE), 7
// MACON3<PADCFG0>
extern volatile __bit                   PADCFG0             __at(0x7515);	// @ (0xEA2 * 8 + 5)
#define                                 PADCFG0_bit         BANKMASK(MACON3), 5
// MACON3<PADCFG1>
extern volatile __bit                   PADCFG1             __at(0x7516);	// @ (0xEA2 * 8 + 6)
#define                                 PADCFG1_bit         BANKMASK(MACON3), 6
// MACON3<PADCFG2>
extern volatile __bit                   PADCFG2             __at(0x7517);	// @ (0xEA2 * 8 + 7)
#define                                 PADCFG2_bit         BANKMASK(MACON3), 7
// MACON1<PASSALL>
extern volatile __bit                   PASSALL             __at(0x7501);	// @ (0xEA0 * 8 + 1)
#define                                 PASSALL_bit         BANKMASK(MACON1), 1
// PORTH<PB1>
extern volatile __bit                   PB1                 __at(0x7C3F);	// @ (0xF87 * 8 + 7)
#define                                 PB1_bit             BANKMASK(PORTH), 7
// PORTE<PB1E>
extern volatile __bit                   PB1E                __at(0x7C26);	// @ (0xF84 * 8 + 6)
#define                                 PB1E_bit            BANKMASK(PORTE), 6
// PORTE<PB2>
extern volatile __bit                   PB2                 __at(0x7C22);	// @ (0xF84 * 8 + 2)
#define                                 PB2_bit             BANKMASK(PORTE), 2
// PORTH<PB3>
extern volatile __bit                   PB3                 __at(0x7C3D);	// @ (0xF87 * 8 + 5)
#define                                 PB3_bit             BANKMASK(PORTH), 5
// PORTE<PB3E>
extern volatile __bit                   PB3E                __at(0x7C24);	// @ (0xF84 * 8 + 4)
#define                                 PB3E_bit            BANKMASK(PORTE), 4
// PORTH<PC1>
extern volatile __bit                   PC1                 __at(0x7C3E);	// @ (0xF87 * 8 + 6)
#define                                 PC1_bit             BANKMASK(PORTH), 6
// PORTE<PC1E>
extern volatile __bit                   PC1E                __at(0x7C25);	// @ (0xF84 * 8 + 5)
#define                                 PC1E_bit            BANKMASK(PORTE), 5
// PORTE<PC2>
extern volatile __bit                   PC2                 __at(0x7C21);	// @ (0xF84 * 8 + 1)
#define                                 PC2_bit             BANKMASK(PORTE), 1
// PORTH<PC3>
extern volatile __bit                   PC3                 __at(0x7C3C);	// @ (0xF87 * 8 + 4)
#define                                 PC3_bit             BANKMASK(PORTH), 4
// PORTE<PC3E>
extern volatile __bit                   PC3E                __at(0x7C23);	// @ (0xF84 * 8 + 3)
#define                                 PC3E_bit            BANKMASK(PORTE), 3
// ADCON1<PCFG0>
extern volatile __bit                   PCFG0               __at(0x7E08);	// @ (0xFC1 * 8 + 0)
#define                                 PCFG0_bit           BANKMASK(ADCON1), 0
// ADCON1<PCFG1>
extern volatile __bit                   PCFG1               __at(0x7E09);	// @ (0xFC1 * 8 + 1)
#define                                 PCFG1_bit           BANKMASK(ADCON1), 1
// ADCON1<PCFG2>
extern volatile __bit                   PCFG2               __at(0x7E0A);	// @ (0xFC1 * 8 + 2)
#define                                 PCFG2_bit           BANKMASK(ADCON1), 2
// ADCON1<PCFG3>
extern volatile __bit                   PCFG3               __at(0x7E0B);	// @ (0xFC1 * 8 + 3)
#define                                 PCFG3_bit           BANKMASK(ADCON1), 3
// RCON<PD>
extern volatile __bit                   PD                  __at(0x7E82);	// @ (0xFD0 * 8 + 2)
#define                                 PD_bit              BANKMASK(RCON), 2
// PORTE<PD2>
extern volatile __bit                   PD2                 __at(0x7C20);	// @ (0xF84 * 8 + 0)
#define                                 PD2_bit             BANKMASK(PORTE), 0
// INTCON<PEIE>
extern volatile __bit                   PEIE                __at(0x7F96);	// @ (0xFF2 * 8 + 6)
#define                                 PEIE_bit            BANKMASK(INTCON), 6
// INTCON<PEIE_GIEL>
extern volatile __bit                   PEIE_GIEL           __at(0x7F96);	// @ (0xFF2 * 8 + 6)
#define                                 PEIE_GIEL_bit       BANKMASK(INTCON), 6
// SSP1CON2<PEN>
extern volatile __bit                   PEN                 __at(0x7E2A);	// @ (0xFC5 * 8 + 2)
#define                                 PEN_bit             BANKMASK(SSP1CON2), 2
// SSP1CON2<PEN1>
extern volatile __bit                   PEN1                __at(0x7E2A);	// @ (0xFC5 * 8 + 2)
#define                                 PEN1_bit            BANKMASK(SSP1CON2), 2
// PORTB<PGC>
extern volatile __bit                   PGC                 __at(0x7C0E);	// @ (0xF81 * 8 + 6)
#define                                 PGC_bit             BANKMASK(PORTB), 6
// PORTB<PGD>
extern volatile __bit                   PGD                 __at(0x7C0F);	// @ (0xF81 * 8 + 7)
#define                                 PGD_bit             BANKMASK(PORTB), 7
// MACON3<PHDREN>
extern volatile __bit                   PHDREN              __at(0x7513);	// @ (0xEA2 * 8 + 3)
#define                                 PHDREN_bit          BANKMASK(MACON3), 3
// ESTAT<PHYRDY>
extern volatile __bit                   PHYRDY              __at(0x77E8);	// @ (0xEFD * 8 + 0)
#define                                 PHYRDY_bit          BANKMASK(ESTAT), 0
// ECON2<PKTDEC>
extern volatile __bit                   PKTDEC              __at(0x77F6);	// @ (0xEFE * 8 + 6)
#define                                 PKTDEC_bit          BANKMASK(ECON2), 6
// EIE<PKTIE>
extern volatile __bit                   PKTIE               __at(0x77DE);	// @ (0xEFB * 8 + 6)
#define                                 PKTIE_bit           BANKMASK(EIE), 6
// EIR<PKTIF>
extern volatile __bit                   PKTIF               __at(0x7B06);	// @ (0xF60 * 8 + 6)
#define                                 PKTIF_bit           BANKMASK(EIR), 6
// OSCTUNE<PLLEN>
extern volatile __bit                   PLLEN               __at(0x7CDE);	// @ (0xF9B * 8 + 6)
#define                                 PLLEN_bit           BANKMASK(OSCTUNE), 6
// ERXFCON<PMEN>
extern volatile __bit                   PMEN                __at(0x76C4);	// @ (0xED8 * 8 + 4)
#define                                 PMEN_bit            BANKMASK(ERXFCON), 4
// RCON<POR>
extern volatile __bit                   POR                 __at(0x7E81);	// @ (0xFD0 * 8 + 1)
#define                                 POR_bit             BANKMASK(RCON), 1
// OSCTUNE<PPRE>
extern volatile __bit                   PPRE                __at(0x7CDC);	// @ (0xF9B * 8 + 4)
#define                                 PPRE_bit            BANKMASK(OSCTUNE), 4
// OSCTUNE<PPST0>
extern volatile __bit                   PPST0               __at(0x7CDD);	// @ (0xF9B * 8 + 5)
#define                                 PPST0_bit           BANKMASK(OSCTUNE), 5
// OSCTUNE<PPST1>
extern volatile __bit                   PPST1               __at(0x7CDF);	// @ (0xF9B * 8 + 7)
#define                                 PPST1_bit           BANKMASK(OSCTUNE), 7
// T0CON<PSA>
extern volatile __bit                   PSA                 __at(0x7EAB);	// @ (0xFD5 * 8 + 3)
#define                                 PSA_bit             BANKMASK(T0CON), 3
// ECCP1AS<PSS1AC0>
extern volatile __bit                   PSS1AC0             __at(0x7DB2);	// @ (0xFB6 * 8 + 2)
#define                                 PSS1AC0_bit         BANKMASK(ECCP1AS), 2
// ECCP1AS<PSS1AC1>
extern volatile __bit                   PSS1AC1             __at(0x7DB3);	// @ (0xFB6 * 8 + 3)
#define                                 PSS1AC1_bit         BANKMASK(ECCP1AS), 3
// ECCP1AS<PSS1BD0>
extern volatile __bit                   PSS1BD0             __at(0x7DB0);	// @ (0xFB6 * 8 + 0)
#define                                 PSS1BD0_bit         BANKMASK(ECCP1AS), 0
// ECCP1AS<PSS1BD1>
extern volatile __bit                   PSS1BD1             __at(0x7DB1);	// @ (0xFB6 * 8 + 1)
#define                                 PSS1BD1_bit         BANKMASK(ECCP1AS), 1
// ECCP2AS<PSS2AC0>
extern volatile __bit                   PSS2AC0             __at(0x7B42);	// @ (0xF68 * 8 + 2)
#define                                 PSS2AC0_bit         BANKMASK(ECCP2AS), 2
// ECCP2AS<PSS2AC1>
extern volatile __bit                   PSS2AC1             __at(0x7B43);	// @ (0xF68 * 8 + 3)
#define                                 PSS2AC1_bit         BANKMASK(ECCP2AS), 3
// ECCP2AS<PSS2BD0>
extern volatile __bit                   PSS2BD0             __at(0x7B40);	// @ (0xF68 * 8 + 0)
#define                                 PSS2BD0_bit         BANKMASK(ECCP2AS), 0
// ECCP2AS<PSS2BD1>
extern volatile __bit                   PSS2BD1             __at(0x7B41);	// @ (0xF68 * 8 + 1)
#define                                 PSS2BD1_bit         BANKMASK(ECCP2AS), 1
// ECCP3AS<PSS3AC0>
extern volatile __bit                   PSS3AC0             __at(0x7B52);	// @ (0xF6A * 8 + 2)
#define                                 PSS3AC0_bit         BANKMASK(ECCP3AS), 2
// ECCP3AS<PSS3AC1>
extern volatile __bit                   PSS3AC1             __at(0x7B53);	// @ (0xF6A * 8 + 3)
#define                                 PSS3AC1_bit         BANKMASK(ECCP3AS), 3
// ECCP3AS<PSS3BD0>
extern volatile __bit                   PSS3BD0             __at(0x7B50);	// @ (0xF6A * 8 + 0)
#define                                 PSS3BD0_bit         BANKMASK(ECCP3AS), 0
// ECCP3AS<PSS3BD1>
extern volatile __bit                   PSS3BD1             __at(0x7B51);	// @ (0xF6A * 8 + 1)
#define                                 PSS3BD1_bit         BANKMASK(ECCP3AS), 1
// PORTA<RA0>
extern volatile __bit _DEPRECATED       RA0                 __at(0x7C00);	// @ (0xF80 * 8 + 0)
#define                                 RA0_bit             BANKMASK(PORTA), 0
// PORTA<RA1>
extern volatile __bit _DEPRECATED       RA1                 __at(0x7C01);	// @ (0xF80 * 8 + 1)
#define                                 RA1_bit             BANKMASK(PORTA), 1
// PORTA<RA2>
extern volatile __bit _DEPRECATED       RA2                 __at(0x7C02);	// @ (0xF80 * 8 + 2)
#define                                 RA2_bit             BANKMASK(PORTA), 2
// PORTA<RA3>
extern volatile __bit _DEPRECATED       RA3                 __at(0x7C03);	// @ (0xF80 * 8 + 3)
#define                                 RA3_bit             BANKMASK(PORTA), 3
// PORTA<RA4>
extern volatile __bit _DEPRECATED       RA4                 __at(0x7C04);	// @ (0xF80 * 8 + 4)
#define                                 RA4_bit             BANKMASK(PORTA), 4
// PORTA<RA5>
extern volatile __bit _DEPRECATED       RA5                 __at(0x7C05);	// @ (0xF80 * 8 + 5)
#define                                 RA5_bit             BANKMASK(PORTA), 5
// PORTA<RA7>
extern volatile __bit                   RA7                 __at(0x7C07);	// @ (0xF80 * 8 + 7)
#define                                 RA7_bit             BANKMASK(PORTA), 7
// PORTB<RB0>
extern volatile __bit _DEPRECATED       RB0                 __at(0x7C08);	// @ (0xF81 * 8 + 0)
#define                                 RB0_bit             BANKMASK(PORTB), 0
// PORTB<RB1>
extern volatile __bit _DEPRECATED       RB1                 __at(0x7C09);	// @ (0xF81 * 8 + 1)
#define                                 RB1_bit             BANKMASK(PORTB), 1
// PORTB<RB2>
extern volatile __bit _DEPRECATED       RB2                 __at(0x7C0A);	// @ (0xF81 * 8 + 2)
#define                                 RB2_bit             BANKMASK(PORTB), 2
// PORTB<RB3>
extern volatile __bit _DEPRECATED       RB3                 __at(0x7C0B);	// @ (0xF81 * 8 + 3)
#define                                 RB3_bit             BANKMASK(PORTB), 3
// PORTB<RB4>
extern volatile __bit _DEPRECATED       RB4                 __at(0x7C0C);	// @ (0xF81 * 8 + 4)
#define                                 RB4_bit             BANKMASK(PORTB), 4
// PORTB<RB5>
extern volatile __bit _DEPRECATED       RB5                 __at(0x7C0D);	// @ (0xF81 * 8 + 5)
#define                                 RB5_bit             BANKMASK(PORTB), 5
// PORTB<RB6>
extern volatile __bit _DEPRECATED       RB6                 __at(0x7C0E);	// @ (0xF81 * 8 + 6)
#define                                 RB6_bit             BANKMASK(PORTB), 6
// PORTB<RB7>
extern volatile __bit _DEPRECATED       RB7                 __at(0x7C0F);	// @ (0xF81 * 8 + 7)
#define                                 RB7_bit             BANKMASK(PORTB), 7
// INTCON<RBIE>
extern volatile __bit                   RBIE                __at(0x7F93);	// @ (0xFF2 * 8 + 3)
#define                                 RBIE_bit            BANKMASK(INTCON), 3
// INTCON<RBIF>
extern volatile __bit                   RBIF                __at(0x7F90);	// @ (0xFF2 * 8 + 0)
#define                                 RBIF_bit            BANKMASK(INTCON), 0
// INTCON2<RBIP>
extern volatile __bit                   RBIP                __at(0x7F88);	// @ (0xFF1 * 8 + 0)
#define                                 RBIP_bit            BANKMASK(INTCON2), 0
// INTCON2<RBPU>
extern volatile __bit                   RBPU                __at(0x7F8F);	// @ (0xFF1 * 8 + 7)
#define                                 RBPU_bit            BANKMASK(INTCON2), 7
// PORTC<RC0>
extern volatile __bit _DEPRECATED       RC0                 __at(0x7C10);	// @ (0xF82 * 8 + 0)
#define                                 RC0_bit             BANKMASK(PORTC), 0
// PORTC<RC1>
extern volatile __bit _DEPRECATED       RC1                 __at(0x7C11);	// @ (0xF82 * 8 + 1)
#define                                 RC1_bit             BANKMASK(PORTC), 1
// PIE1<RC1IE>
extern volatile __bit                   RC1IE               __at(0x7CED);	// @ (0xF9D * 8 + 5)
#define                                 RC1IE_bit           BANKMASK(PIE1), 5
// PIR1<RC1IF>
extern volatile __bit                   RC1IF               __at(0x7CF5);	// @ (0xF9E * 8 + 5)
#define                                 RC1IF_bit           BANKMASK(PIR1), 5
// IPR1<RC1IP>
extern volatile __bit                   RC1IP               __at(0x7CFD);	// @ (0xF9F * 8 + 5)
#define                                 RC1IP_bit           BANKMASK(IPR1), 5
// PORTC<RC2>
extern volatile __bit _DEPRECATED       RC2                 __at(0x7C12);	// @ (0xF82 * 8 + 2)
#define                                 RC2_bit             BANKMASK(PORTC), 2
// PIE3<RC2IE>
extern volatile __bit                   RC2IE               __at(0x7D1D);	// @ (0xFA3 * 8 + 5)
#define                                 RC2IE_bit           BANKMASK(PIE3), 5
// PIR3<RC2IF>
extern volatile __bit                   RC2IF               __at(0x7D25);	// @ (0xFA4 * 8 + 5)
#define                                 RC2IF_bit           BANKMASK(PIR3), 5
// IPR3<RC2IP>
extern volatile __bit                   RC2IP               __at(0x7D2D);	// @ (0xFA5 * 8 + 5)
#define                                 RC2IP_bit           BANKMASK(IPR3), 5
// PORTC<RC3>
extern volatile __bit _DEPRECATED       RC3                 __at(0x7C13);	// @ (0xF82 * 8 + 3)
#define                                 RC3_bit             BANKMASK(PORTC), 3
// PORTC<RC4>
extern volatile __bit _DEPRECATED       RC4                 __at(0x7C14);	// @ (0xF82 * 8 + 4)
#define                                 RC4_bit             BANKMASK(PORTC), 4
// PORTC<RC5>
extern volatile __bit _DEPRECATED       RC5                 __at(0x7C15);	// @ (0xF82 * 8 + 5)
#define                                 RC5_bit             BANKMASK(PORTC), 5
// PORTC<RC6>
extern volatile __bit _DEPRECATED       RC6                 __at(0x7C16);	// @ (0xF82 * 8 + 6)
#define                                 RC6_bit             BANKMASK(PORTC), 6
// PORTC<RC7>
extern volatile __bit _DEPRECATED       RC7                 __at(0x7C17);	// @ (0xF82 * 8 + 7)
#define                                 RC7_bit             BANKMASK(PORTC), 7
// RCSTA2<RC8_92>
extern volatile __bit                   RC8_92              __at(0x7B5E);	// @ (0xF6B * 8 + 6)
#define                                 RC8_92_bit          BANKMASK(RCSTA2), 6
// RCSTA2<RC92>
extern volatile __bit                   RC92                __at(0x7B5E);	// @ (0xF6B * 8 + 6)
#define                                 RC92_bit            BANKMASK(RCSTA2), 6
// RCSTA2<RCD82>
extern volatile __bit                   RCD82               __at(0x7B58);	// @ (0xF6B * 8 + 0)
#define                                 RCD82_bit           BANKMASK(RCSTA2), 0
// SSP1CON2<RCEN>
extern volatile __bit                   RCEN                __at(0x7E2B);	// @ (0xFC5 * 8 + 3)
#define                                 RCEN_bit            BANKMASK(SSP1CON2), 3
// SSP1CON2<RCEN1>
extern volatile __bit                   RCEN1               __at(0x7E2B);	// @ (0xFC5 * 8 + 3)
#define                                 RCEN1_bit           BANKMASK(SSP1CON2), 3
// BAUDCON1<RCIDL>
extern volatile __bit _DEPRECATED       RCIDL               __at(0x7BF6);	// @ (0xF7E * 8 + 6)
#define                                 RCIDL_bit           BANKMASK(BAUDCON1), 6
// BAUDCON1<RCIDL1>
extern volatile __bit                   RCIDL1              __at(0x7BF6);	// @ (0xF7E * 8 + 6)
#define                                 RCIDL1_bit          BANKMASK(BAUDCON1), 6
// BAUDCON2<RCIDL2>
extern volatile __bit                   RCIDL2              __at(0x7BE6);	// @ (0xF7C * 8 + 6)
#define                                 RCIDL2_bit          BANKMASK(BAUDCON2), 6
// PIE1<RCIE>
extern volatile __bit                   RCIE                __at(0x7CED);	// @ (0xF9D * 8 + 5)
#define                                 RCIE_bit            BANKMASK(PIE1), 5
// PIR1<RCIF>
extern volatile __bit                   RCIF                __at(0x7CF5);	// @ (0xF9E * 8 + 5)
#define                                 RCIF_bit            BANKMASK(PIR1), 5
// IPR1<RCIP>
extern volatile __bit                   RCIP                __at(0x7CFD);	// @ (0xF9F * 8 + 5)
#define                                 RCIP_bit            BANKMASK(IPR1), 5
// BAUDCON1<RCMT1>
extern volatile __bit                   RCMT1               __at(0x7BF6);	// @ (0xF7E * 8 + 6)
#define                                 RCMT1_bit           BANKMASK(BAUDCON1), 6
// BAUDCON2<RCMT2>
extern volatile __bit                   RCMT2               __at(0x7BE6);	// @ (0xF7C * 8 + 6)
#define                                 RCMT2_bit           BANKMASK(BAUDCON2), 6
// PORTD<RD0>
extern volatile __bit _DEPRECATED       RD0                 __at(0x7C18);	// @ (0xF83 * 8 + 0)
#define                                 RD0_bit             BANKMASK(PORTD), 0
// PORTD<RD1>
extern volatile __bit _DEPRECATED       RD1                 __at(0x7C19);	// @ (0xF83 * 8 + 1)
#define                                 RD1_bit             BANKMASK(PORTD), 1
// T3CON<RD163>
extern volatile __bit                   RD163               __at(0x7D8F);	// @ (0xFB1 * 8 + 7)
#define                                 RD163_bit           BANKMASK(T3CON), 7
// PORTD<RD2>
extern volatile __bit _DEPRECATED       RD2                 __at(0x7C1A);	// @ (0xF83 * 8 + 2)
#define                                 RD2_bit             BANKMASK(PORTD), 2
// PORTE<RDE>
extern volatile __bit                   RDE                 __at(0x7C20);	// @ (0xF84 * 8 + 0)
#define                                 RDE_bit             BANKMASK(PORTE), 0
// LATA<RDPU>
extern volatile __bit                   RDPU                __at(0x7C4F);	// @ (0xF89 * 8 + 7)
#define                                 RDPU_bit            BANKMASK(LATA), 7
// PORTE<RE0>
extern volatile __bit _DEPRECATED       RE0                 __at(0x7C20);	// @ (0xF84 * 8 + 0)
#define                                 RE0_bit             BANKMASK(PORTE), 0
// PORTE<RE1>
extern volatile __bit _DEPRECATED       RE1                 __at(0x7C21);	// @ (0xF84 * 8 + 1)
#define                                 RE1_bit             BANKMASK(PORTE), 1
// PORTE<RE2>
extern volatile __bit _DEPRECATED       RE2                 __at(0x7C22);	// @ (0xF84 * 8 + 2)
#define                                 RE2_bit             BANKMASK(PORTE), 2
// PORTE<RE3>
extern volatile __bit _DEPRECATED       RE3                 __at(0x7C23);	// @ (0xF84 * 8 + 3)
#define                                 RE3_bit             BANKMASK(PORTE), 3
// PORTE<RE4>
extern volatile __bit _DEPRECATED       RE4                 __at(0x7C24);	// @ (0xF84 * 8 + 4)
#define                                 RE4_bit             BANKMASK(PORTE), 4
// PORTE<RE5>
extern volatile __bit _DEPRECATED       RE5                 __at(0x7C25);	// @ (0xF84 * 8 + 5)
#define                                 RE5_bit             BANKMASK(PORTE), 5
// PORTE<RE6>
extern volatile __bit _DEPRECATED       RE6                 __at(0x7C26);	// @ (0xF84 * 8 + 6)
#define                                 RE6_bit             BANKMASK(PORTE), 6
// PORTE<RE7>
extern volatile __bit _DEPRECATED       RE7                 __at(0x7C27);	// @ (0xF84 * 8 + 7)
#define                                 RE7_bit             BANKMASK(PORTE), 7
// SSP1STAT<READ_WRITE>
extern volatile __bit                   READ_WRITE          __at(0x7E3A);	// @ (0xFC7 * 8 + 2)
#define                                 READ_WRITE_bit      BANKMASK(SSP1STAT), 2
// LATA<REPU>
extern volatile __bit                   REPU                __at(0x7C4E);	// @ (0xF89 * 8 + 6)
#define                                 REPU_bit            BANKMASK(LATA), 6
// PORTF<RF1>
extern volatile __bit _DEPRECATED       RF1                 __at(0x7C29);	// @ (0xF85 * 8 + 1)
#define                                 RF1_bit             BANKMASK(PORTF), 1
// PORTF<RF2>
extern volatile __bit _DEPRECATED       RF2                 __at(0x7C2A);	// @ (0xF85 * 8 + 2)
#define                                 RF2_bit             BANKMASK(PORTF), 2
// PORTF<RF3>
extern volatile __bit _DEPRECATED       RF3                 __at(0x7C2B);	// @ (0xF85 * 8 + 3)
#define                                 RF3_bit             BANKMASK(PORTF), 3
// PORTF<RF4>
extern volatile __bit _DEPRECATED       RF4                 __at(0x7C2C);	// @ (0xF85 * 8 + 4)
#define                                 RF4_bit             BANKMASK(PORTF), 4
// PORTF<RF5>
extern volatile __bit _DEPRECATED       RF5                 __at(0x7C2D);	// @ (0xF85 * 8 + 5)
#define                                 RF5_bit             BANKMASK(PORTF), 5
// PORTF<RF6>
extern volatile __bit _DEPRECATED       RF6                 __at(0x7C2E);	// @ (0xF85 * 8 + 6)
#define                                 RF6_bit             BANKMASK(PORTF), 6
// PORTF<RF7>
extern volatile __bit _DEPRECATED       RF7                 __at(0x7C2F);	// @ (0xF85 * 8 + 7)
#define                                 RF7_bit             BANKMASK(PORTF), 7
// PORTG<RG0>
extern volatile __bit _DEPRECATED       RG0                 __at(0x7C30);	// @ (0xF86 * 8 + 0)
#define                                 RG0_bit             BANKMASK(PORTG), 0
// PORTG<RG1>
extern volatile __bit _DEPRECATED       RG1                 __at(0x7C31);	// @ (0xF86 * 8 + 1)
#define                                 RG1_bit             BANKMASK(PORTG), 1
// PORTG<RG2>
extern volatile __bit _DEPRECATED       RG2                 __at(0x7C32);	// @ (0xF86 * 8 + 2)
#define                                 RG2_bit             BANKMASK(PORTG), 2
// PORTG<RG3>
extern volatile __bit _DEPRECATED       RG3                 __at(0x7C33);	// @ (0xF86 * 8 + 3)
#define                                 RG3_bit             BANKMASK(PORTG), 3
// PORTG<RG4>
extern volatile __bit _DEPRECATED       RG4                 __at(0x7C34);	// @ (0xF86 * 8 + 4)
#define                                 RG4_bit             BANKMASK(PORTG), 4
// PORTH<RH0>
extern volatile __bit _DEPRECATED       RH0                 __at(0x7C38);	// @ (0xF87 * 8 + 0)
#define                                 RH0_bit             BANKMASK(PORTH), 0
// PORTH<RH1>
extern volatile __bit _DEPRECATED       RH1                 __at(0x7C39);	// @ (0xF87 * 8 + 1)
#define                                 RH1_bit             BANKMASK(PORTH), 1
// PORTH<RH2>
extern volatile __bit _DEPRECATED       RH2                 __at(0x7C3A);	// @ (0xF87 * 8 + 2)
#define                                 RH2_bit             BANKMASK(PORTH), 2
// PORTH<RH3>
extern volatile __bit _DEPRECATED       RH3                 __at(0x7C3B);	// @ (0xF87 * 8 + 3)
#define                                 RH3_bit             BANKMASK(PORTH), 3
// PORTH<RH4>
extern volatile __bit _DEPRECATED       RH4                 __at(0x7C3C);	// @ (0xF87 * 8 + 4)
#define                                 RH4_bit             BANKMASK(PORTH), 4
// PORTH<RH5>
extern volatile __bit _DEPRECATED       RH5                 __at(0x7C3D);	// @ (0xF87 * 8 + 5)
#define                                 RH5_bit             BANKMASK(PORTH), 5
// PORTH<RH6>
extern volatile __bit _DEPRECATED       RH6                 __at(0x7C3E);	// @ (0xF87 * 8 + 6)
#define                                 RH6_bit             BANKMASK(PORTH), 6
// PORTH<RH7>
extern volatile __bit _DEPRECATED       RH7                 __at(0x7C3F);	// @ (0xF87 * 8 + 7)
#define                                 RH7_bit             BANKMASK(PORTH), 7
// RCON<RI>
extern volatile __bit                   RI                  __at(0x7E84);	// @ (0xFD0 * 8 + 4)
#define                                 RI_bit              BANKMASK(RCON), 4
// PORTJ<RJ4>
extern volatile __bit _DEPRECATED       RJ4                 __at(0x7C44);	// @ (0xF88 * 8 + 4)
#define                                 RJ4_bit             BANKMASK(PORTJ), 4
// PORTJ<RJ5>
extern volatile __bit _DEPRECATED       RJ5                 __at(0x7C45);	// @ (0xF88 * 8 + 5)
#define                                 RJ5_bit             BANKMASK(PORTJ), 5
// PORTA<RJPU>
extern volatile __bit                   RJPU                __at(0x7C07);	// @ (0xF80 * 8 + 7)
#define                                 RJPU_bit            BANKMASK(PORTA), 7
// SSP1CON2<RSEN>
extern volatile __bit                   RSEN                __at(0x7E29);	// @ (0xFC5 * 8 + 1)
#define                                 RSEN_bit            BANKMASK(SSP1CON2), 1
// SSP1CON2<RSEN1>
extern volatile __bit                   RSEN1               __at(0x7E29);	// @ (0xFC5 * 8 + 1)
#define                                 RSEN1_bit           BANKMASK(SSP1CON2), 1
// SSP1STAT<RW>
extern volatile __bit                   RW                  __at(0x7E3A);	// @ (0xFC7 * 8 + 2)
#define                                 RW_bit              BANKMASK(SSP1STAT), 2
// SSP1STAT<RW1>
extern volatile __bit                   RW1                 __at(0x7E3A);	// @ (0xFC7 * 8 + 2)
#define                                 RW1_bit             BANKMASK(SSP1STAT), 2
// PORTC<RX>
extern volatile __bit                   RX                  __at(0x7C17);	// @ (0xF82 * 8 + 7)
#define                                 RX_bit              BANKMASK(PORTC), 7
// PORTC<RX1>
extern volatile __bit                   RX1                 __at(0x7C17);	// @ (0xF82 * 8 + 7)
#define                                 RX1_bit             BANKMASK(PORTC), 7
// PORTG<RX2>
extern volatile __bit                   RX2                 __at(0x7C32);	// @ (0xF86 * 8 + 2)
#define                                 RX2_bit             BANKMASK(PORTG), 2
// RCSTA1<RX9>
extern volatile __bit _DEPRECATED       RX9                 __at(0x7D5E);	// @ (0xFAB * 8 + 6)
#define                                 RX9_bit             BANKMASK(RCSTA1), 6
// RCSTA1<RX91>
extern volatile __bit                   RX91                __at(0x7D5E);	// @ (0xFAB * 8 + 6)
#define                                 RX91_bit            BANKMASK(RCSTA1), 6
// RCSTA2<RX92>
extern volatile __bit                   RX92                __at(0x7B5E);	// @ (0xF6B * 8 + 6)
#define                                 RX92_bit            BANKMASK(RCSTA2), 6
// RCSTA1<RX9D>
extern volatile __bit _DEPRECATED       RX9D                __at(0x7D58);	// @ (0xFAB * 8 + 0)
#define                                 RX9D_bit            BANKMASK(RCSTA1), 0
// RCSTA1<RX9D1>
extern volatile __bit                   RX9D1               __at(0x7D58);	// @ (0xFAB * 8 + 0)
#define                                 RX9D1_bit           BANKMASK(RCSTA1), 0
// RCSTA2<RX9D2>
extern volatile __bit                   RX9D2               __at(0x7B58);	// @ (0xF6B * 8 + 0)
#define                                 RX9D2_bit           BANKMASK(RCSTA2), 0
// PIE3<RXB0IE>
extern volatile __bit                   RXB0IE              __at(0x7D18);	// @ (0xFA3 * 8 + 0)
#define                                 RXB0IE_bit          BANKMASK(PIE3), 0
// PIE3<RXB1IE>
extern volatile __bit                   RXB1IE              __at(0x7D19);	// @ (0xFA3 * 8 + 1)
#define                                 RXB1IE_bit          BANKMASK(PIE3), 1
// PIE3<RXBNIE>
extern volatile __bit                   RXBNIE              __at(0x7D19);	// @ (0xFA3 * 8 + 1)
#define                                 RXBNIE_bit          BANKMASK(PIE3), 1
// PIR3<RXBNIF>
extern volatile __bit                   RXBNIF              __at(0x7D21);	// @ (0xFA4 * 8 + 1)
#define                                 RXBNIF_bit          BANKMASK(PIR3), 1
// IPR3<RXBNIP>
extern volatile __bit                   RXBNIP              __at(0x7D29);	// @ (0xFA5 * 8 + 1)
#define                                 RXBNIP_bit          BANKMASK(IPR3), 1
// ESTAT<RXBUSY>
extern volatile __bit                   RXBUSY              __at(0x77EA);	// @ (0xEFD * 8 + 2)
#define                                 RXBUSY_bit          BANKMASK(ESTAT), 2
// BAUDCON1<RXCKP>
extern volatile __bit                   RXCKP               __at(0x7BF5);	// @ (0xF7E * 8 + 5)
#define                                 RXCKP_bit           BANKMASK(BAUDCON1), 5
// BAUDCON1<RXDTP>
extern volatile __bit _DEPRECATED       RXDTP               __at(0x7BF5);	// @ (0xF7E * 8 + 5)
#define                                 RXDTP_bit           BANKMASK(BAUDCON1), 5
// BAUDCON1<RXDTP1>
extern volatile __bit                   RXDTP1              __at(0x7BF5);	// @ (0xF7E * 8 + 5)
#define                                 RXDTP1_bit          BANKMASK(BAUDCON1), 5
// BAUDCON2<RXDTP2>
extern volatile __bit                   RXDTP2              __at(0x7BE5);	// @ (0xF7C * 8 + 5)
#define                                 RXDTP2_bit          BANKMASK(BAUDCON2), 5
// ECON1<RXEN>
extern volatile __bit                   RXEN                __at(0x7E92);	// @ (0xFD2 * 8 + 2)
#define                                 RXEN_bit            BANKMASK(ECON1), 2
// EIE<RXERIE>
extern volatile __bit                   RXERIE              __at(0x77D8);	// @ (0xEFB * 8 + 0)
#define                                 RXERIE_bit          BANKMASK(EIE), 0
// EIR<RXERIF>
extern volatile __bit                   RXERIF              __at(0x7B00);	// @ (0xF60 * 8 + 0)
#define                                 RXERIF_bit          BANKMASK(EIR), 0
// MACON1<RXPAUS>
extern volatile __bit                   RXPAUS              __at(0x7502);	// @ (0xEA0 * 8 + 2)
#define                                 RXPAUS_bit          BANKMASK(MACON1), 2
// ECON1<RXRST>
extern volatile __bit                   RXRST               __at(0x7E96);	// @ (0xFD2 * 8 + 6)
#define                                 RXRST_bit           BANKMASK(ECON1), 6
// SSP1STAT<R_NOT_W>
extern volatile __bit                   R_NOT_W             __at(0x7E3A);	// @ (0xFC7 * 8 + 2)
#define                                 R_NOT_W_bit         BANKMASK(SSP1STAT), 2
// SSP1STAT<R_W>
extern volatile __bit                   R_W                 __at(0x7E3A);	// @ (0xFC7 * 8 + 2)
#define                                 R_W_bit             BANKMASK(SSP1STAT), 2
// SSP1STAT<R_nW>
extern volatile __bit                   R_nW                __at(0x7E3A);	// @ (0xFC7 * 8 + 2)
#define                                 R_nW_bit            BANKMASK(SSP1STAT), 2
// MISTAT<SCAN>
extern volatile __bit                   SCAN                __at(0x7451);	// @ (0xE8A * 8 + 1)
#define                                 SCAN_bit            BANKMASK(MISTAT), 1
// PORTC<SCK>
extern volatile __bit                   SCK                 __at(0x7C13);	// @ (0xF82 * 8 + 3)
#define                                 SCK_bit             BANKMASK(PORTC), 3
// PORTC<SCK1>
extern volatile __bit                   SCK1                __at(0x7C13);	// @ (0xF82 * 8 + 3)
#define                                 SCK1_bit            BANKMASK(PORTC), 3
// BAUDCON1<SCKP1>
extern volatile __bit                   SCKP1               __at(0x7BF4);	// @ (0xF7E * 8 + 4)
#define                                 SCKP1_bit           BANKMASK(BAUDCON1), 4
// BAUDCON2<SCKP2>
extern volatile __bit                   SCKP2               __at(0x7BE4);	// @ (0xF7C * 8 + 4)
#define                                 SCKP2_bit           BANKMASK(BAUDCON2), 4
// PORTC<SCL>
extern volatile __bit                   SCL                 __at(0x7C13);	// @ (0xF82 * 8 + 3)
#define                                 SCL_bit             BANKMASK(PORTC), 3
// PORTC<SCL1>
extern volatile __bit                   SCL1                __at(0x7C13);	// @ (0xF82 * 8 + 3)
#define                                 SCL1_bit            BANKMASK(PORTC), 3
// OSCCON<SCS0>
extern volatile __bit                   SCS0                __at(0x7E98);	// @ (0xFD3 * 8 + 0)
#define                                 SCS0_bit            BANKMASK(OSCCON), 0
// OSCCON<SCS1>
extern volatile __bit                   SCS1                __at(0x7E99);	// @ (0xFD3 * 8 + 1)
#define                                 SCS1_bit            BANKMASK(OSCCON), 1
// PORTC<SDA>
extern volatile __bit                   SDA                 __at(0x7C14);	// @ (0xF82 * 8 + 4)
#define                                 SDA_bit             BANKMASK(PORTC), 4
// PORTC<SDA1>
extern volatile __bit                   SDA1                __at(0x7C14);	// @ (0xF82 * 8 + 4)
#define                                 SDA1_bit            BANKMASK(PORTC), 4
// PORTC<SDI>
extern volatile __bit                   SDI                 __at(0x7C14);	// @ (0xF82 * 8 + 4)
#define                                 SDI_bit             BANKMASK(PORTC), 4
// PORTC<SDI1>
extern volatile __bit                   SDI1                __at(0x7C14);	// @ (0xF82 * 8 + 4)
#define                                 SDI1_bit            BANKMASK(PORTC), 4
// PORTC<SDO>
extern volatile __bit                   SDO                 __at(0x7C15);	// @ (0xF82 * 8 + 5)
#define                                 SDO_bit             BANKMASK(PORTC), 5
// PORTC<SDO1>
extern volatile __bit                   SDO1                __at(0x7C15);	// @ (0xF82 * 8 + 5)
#define                                 SDO1_bit            BANKMASK(PORTC), 5
// SSP1CON2<SEN>
extern volatile __bit                   SEN                 __at(0x7E28);	// @ (0xFC5 * 8 + 0)
#define                                 SEN_bit             BANKMASK(SSP1CON2), 0
// SSP1CON2<SEN1>
extern volatile __bit                   SEN1                __at(0x7E28);	// @ (0xFC5 * 8 + 0)
#define                                 SEN1_bit            BANKMASK(SSP1CON2), 0
// TXSTA1<SENDB>
extern volatile __bit _DEPRECATED       SENDB               __at(0x7D63);	// @ (0xFAC * 8 + 3)
#define                                 SENDB_bit           BANKMASK(TXSTA1), 3
// TXSTA1<SENDB1>
extern volatile __bit                   SENDB1              __at(0x7D63);	// @ (0xFAC * 8 + 3)
#define                                 SENDB1_bit          BANKMASK(TXSTA1), 3
// TXSTA2<SENDB2>
extern volatile __bit                   SENDB2              __at(0x7B63);	// @ (0xF6C * 8 + 3)
#define                                 SENDB2_bit          BANKMASK(TXSTA2), 3
// SSP1STAT<SMP>
extern volatile __bit                   SMP                 __at(0x7E3F);	// @ (0xFC7 * 8 + 7)
#define                                 SMP_bit             BANKMASK(SSP1STAT), 7
// SSP1STAT<SMP1>
extern volatile __bit                   SMP1                __at(0x7E3F);	// @ (0xFC7 * 8 + 7)
#define                                 SMP1_bit            BANKMASK(SSP1STAT), 7
// T1CON<SOSCEN>
extern volatile __bit                   SOSCEN              __at(0x7E6B);	// @ (0xFCD * 8 + 3)
#define                                 SOSCEN_bit          BANKMASK(T1CON), 3
// T3CON<SOSCEN3>
extern volatile __bit                   SOSCEN3             __at(0x7D8B);	// @ (0xFB1 * 8 + 3)
#define                                 SOSCEN3_bit         BANKMASK(T3CON), 3
// STKPTR<SP0>
extern volatile __bit                   SP0                 __at(0x7FE0);	// @ (0xFFC * 8 + 0)
#define                                 SP0_bit             BANKMASK(STKPTR), 0
// STKPTR<SP1>
extern volatile __bit                   SP1                 __at(0x7FE1);	// @ (0xFFC * 8 + 1)
#define                                 SP1_bit             BANKMASK(STKPTR), 1
// STKPTR<SP2>
extern volatile __bit                   SP2                 __at(0x7FE2);	// @ (0xFFC * 8 + 2)
#define                                 SP2_bit             BANKMASK(STKPTR), 2
// STKPTR<SP3>
extern volatile __bit                   SP3                 __at(0x7FE3);	// @ (0xFFC * 8 + 3)
#define                                 SP3_bit             BANKMASK(STKPTR), 3
// STKPTR<SP4>
extern volatile __bit                   SP4                 __at(0x7FE4);	// @ (0xFFC * 8 + 4)
#define                                 SP4_bit             BANKMASK(STKPTR), 4
// RCSTA1<SPEN>
extern volatile __bit _DEPRECATED       SPEN                __at(0x7D5F);	// @ (0xFAB * 8 + 7)
#define                                 SPEN_bit            BANKMASK(RCSTA1), 7
// RCSTA1<SPEN1>
extern volatile __bit                   SPEN1               __at(0x7D5F);	// @ (0xFAB * 8 + 7)
#define                                 SPEN1_bit           BANKMASK(RCSTA1), 7
// RCSTA2<SPEN2>
extern volatile __bit                   SPEN2               __at(0x7B5F);	// @ (0xF6B * 8 + 7)
#define                                 SPEN2_bit           BANKMASK(RCSTA2), 7
// RCSTA1<SREN>
extern volatile __bit _DEPRECATED       SREN                __at(0x7D5D);	// @ (0xFAB * 8 + 5)
#define                                 SREN_bit            BANKMASK(RCSTA1), 5
// RCSTA1<SREN1>
extern volatile __bit                   SREN1               __at(0x7D5D);	// @ (0xFAB * 8 + 5)
#define                                 SREN1_bit           BANKMASK(RCSTA1), 5
// RCSTA2<SREN2>
extern volatile __bit                   SREN2               __at(0x7B5D);	// @ (0xF6B * 8 + 5)
#define                                 SREN2_bit           BANKMASK(RCSTA2), 5
// RCSTA1<SRENA>
extern volatile __bit                   SRENA               __at(0x7D5D);	// @ (0xFAB * 8 + 5)
#define                                 SRENA_bit           BANKMASK(RCSTA1), 5
// PORTF<SS>
extern volatile __bit                   SS                  __at(0x7C2F);	// @ (0xF85 * 8 + 7)
#define                                 SS_bit              BANKMASK(PORTF), 7
// PORTF<SS1>
extern volatile __bit                   SS1                 __at(0x7C2F);	// @ (0xF85 * 8 + 7)
#define                                 SS1_bit             BANKMASK(PORTF), 7
// PIE1<SSP1IE>
extern volatile __bit                   SSP1IE              __at(0x7CEB);	// @ (0xF9D * 8 + 3)
#define                                 SSP1IE_bit          BANKMASK(PIE1), 3
// PIR1<SSP1IF>
extern volatile __bit                   SSP1IF              __at(0x7CF3);	// @ (0xF9E * 8 + 3)
#define                                 SSP1IF_bit          BANKMASK(PIR1), 3
// IPR1<SSP1IP>
extern volatile __bit                   SSP1IP              __at(0x7CFB);	// @ (0xF9F * 8 + 3)
#define                                 SSP1IP_bit          BANKMASK(IPR1), 3
// SSP1CON1<SSPEN>
extern volatile __bit                   SSPEN               __at(0x7E35);	// @ (0xFC6 * 8 + 5)
#define                                 SSPEN_bit           BANKMASK(SSP1CON1), 5
// SSP1CON1<SSPEN1>
extern volatile __bit                   SSPEN1              __at(0x7E35);	// @ (0xFC6 * 8 + 5)
#define                                 SSPEN1_bit          BANKMASK(SSP1CON1), 5
// PIE1<SSPIE>
extern volatile __bit                   SSPIE               __at(0x7CEB);	// @ (0xF9D * 8 + 3)
#define                                 SSPIE_bit           BANKMASK(PIE1), 3
// PIR1<SSPIF>
extern volatile __bit                   SSPIF               __at(0x7CF3);	// @ (0xF9E * 8 + 3)
#define                                 SSPIF_bit           BANKMASK(PIR1), 3
// IPR1<SSPIP>
extern volatile __bit                   SSPIP               __at(0x7CFB);	// @ (0xF9F * 8 + 3)
#define                                 SSPIP_bit           BANKMASK(IPR1), 3
// SSP1CON1<SSPM0>
extern volatile __bit                   SSPM0               __at(0x7E30);	// @ (0xFC6 * 8 + 0)
#define                                 SSPM0_bit           BANKMASK(SSP1CON1), 0
// SSP1CON1<SSPM01>
extern volatile __bit                   SSPM01              __at(0x7E30);	// @ (0xFC6 * 8 + 0)
#define                                 SSPM01_bit          BANKMASK(SSP1CON1), 0
// SSP1CON1<SSPM1>
extern volatile __bit                   SSPM1               __at(0x7E31);	// @ (0xFC6 * 8 + 1)
#define                                 SSPM1_bit           BANKMASK(SSP1CON1), 1
// SSP1CON1<SSPM11>
extern volatile __bit                   SSPM11              __at(0x7E31);	// @ (0xFC6 * 8 + 1)
#define                                 SSPM11_bit          BANKMASK(SSP1CON1), 1
// SSP1CON1<SSPM2>
extern volatile __bit                   SSPM2               __at(0x7E32);	// @ (0xFC6 * 8 + 2)
#define                                 SSPM2_bit           BANKMASK(SSP1CON1), 2
// SSP1CON1<SSPM21>
extern volatile __bit                   SSPM21              __at(0x7E32);	// @ (0xFC6 * 8 + 2)
#define                                 SSPM21_bit          BANKMASK(SSP1CON1), 2
// SSP1CON1<SSPM3>
extern volatile __bit                   SSPM3               __at(0x7E33);	// @ (0xFC6 * 8 + 3)
#define                                 SSPM3_bit           BANKMASK(SSP1CON1), 3
// SSP1CON1<SSPM31>
extern volatile __bit                   SSPM31              __at(0x7E33);	// @ (0xFC6 * 8 + 3)
#define                                 SSPM31_bit          BANKMASK(SSP1CON1), 3
// SSP1CON1<SSPOV>
extern volatile __bit                   SSPOV               __at(0x7E36);	// @ (0xFC6 * 8 + 6)
#define                                 SSPOV_bit           BANKMASK(SSP1CON1), 6
// SSP1CON1<SSPOV1>
extern volatile __bit                   SSPOV1              __at(0x7E36);	// @ (0xFC6 * 8 + 6)
#define                                 SSPOV1_bit          BANKMASK(SSP1CON1), 6
// SSP1STAT<START>
extern volatile __bit                   START               __at(0x7E3B);	// @ (0xFC7 * 8 + 3)
#define                                 START_bit           BANKMASK(SSP1STAT), 3
// SSP1STAT<START1>
extern volatile __bit                   START1              __at(0x7E3B);	// @ (0xFC7 * 8 + 3)
#define                                 START1_bit          BANKMASK(SSP1STAT), 3
// STKPTR<STKFUL>
extern volatile __bit                   STKFUL              __at(0x7FE7);	// @ (0xFFC * 8 + 7)
#define                                 STKFUL_bit          BANKMASK(STKPTR), 7
// STKPTR<STKOVF>
extern volatile __bit                   STKOVF              __at(0x7FE7);	// @ (0xFFC * 8 + 7)
#define                                 STKOVF_bit          BANKMASK(STKPTR), 7
// STKPTR<STKPTR0>
extern volatile __bit                   STKPTR0             __at(0x7FE0);	// @ (0xFFC * 8 + 0)
#define                                 STKPTR0_bit         BANKMASK(STKPTR), 0
// STKPTR<STKPTR1>
extern volatile __bit                   STKPTR1             __at(0x7FE1);	// @ (0xFFC * 8 + 1)
#define                                 STKPTR1_bit         BANKMASK(STKPTR), 1
// STKPTR<STKPTR2>
extern volatile __bit                   STKPTR2             __at(0x7FE2);	// @ (0xFFC * 8 + 2)
#define                                 STKPTR2_bit         BANKMASK(STKPTR), 2
// STKPTR<STKPTR3>
extern volatile __bit                   STKPTR3             __at(0x7FE3);	// @ (0xFFC * 8 + 3)
#define                                 STKPTR3_bit         BANKMASK(STKPTR), 3
// STKPTR<STKPTR4>
extern volatile __bit                   STKPTR4             __at(0x7FE4);	// @ (0xFFC * 8 + 4)
#define                                 STKPTR4_bit         BANKMASK(STKPTR), 4
// STKPTR<STKUNF>
extern volatile __bit                   STKUNF              __at(0x7FE6);	// @ (0xFFC * 8 + 6)
#define                                 STKUNF_bit          BANKMASK(STKPTR), 6
// SSP1STAT<STOP>
extern volatile __bit                   STOP                __at(0x7E3C);	// @ (0xFC7 * 8 + 4)
#define                                 STOP_bit            BANKMASK(SSP1STAT), 4
// SSP1STAT<STOP1>
extern volatile __bit                   STOP1               __at(0x7E3C);	// @ (0xFC7 * 8 + 4)
#define                                 STOP1_bit           BANKMASK(SSP1STAT), 4
// WDTCON<SWDTE>
extern volatile __bit                   SWDTE               __at(0x7E88);	// @ (0xFD1 * 8 + 0)
#define                                 SWDTE_bit           BANKMASK(WDTCON), 0
// WDTCON<SWDTEN>
extern volatile __bit                   SWDTEN              __at(0x7E88);	// @ (0xFD1 * 8 + 0)
#define                                 SWDTEN_bit          BANKMASK(WDTCON), 0
// TXSTA1<SYNC>
extern volatile __bit _DEPRECATED       SYNC                __at(0x7D64);	// @ (0xFAC * 8 + 4)
#define                                 SYNC_bit            BANKMASK(TXSTA1), 4
// TXSTA1<SYNC1>
extern volatile __bit                   SYNC1               __at(0x7D64);	// @ (0xFAC * 8 + 4)
#define                                 SYNC1_bit           BANKMASK(TXSTA1), 4
// TXSTA2<SYNC2>
extern volatile __bit                   SYNC2               __at(0x7B64);	// @ (0xF6C * 8 + 4)
#define                                 SYNC2_bit           BANKMASK(TXSTA2), 4
// T0CON<T08BIT>
extern volatile __bit                   T08BIT              __at(0x7EAE);	// @ (0xFD5 * 8 + 6)
#define                                 T08BIT_bit          BANKMASK(T0CON), 6
// PORTA<T0CKI>
extern volatile __bit                   T0CKI               __at(0x7C04);	// @ (0xF80 * 8 + 4)
#define                                 T0CKI_bit           BANKMASK(PORTA), 4
// T0CON<T0CS>
extern volatile __bit                   T0CS                __at(0x7EAD);	// @ (0xFD5 * 8 + 5)
#define                                 T0CS_bit            BANKMASK(T0CON), 5
// INTCON<T0IE>
extern volatile __bit                   T0IE                __at(0x7F95);	// @ (0xFF2 * 8 + 5)
#define                                 T0IE_bit            BANKMASK(INTCON), 5
// INTCON<T0IF>
extern volatile __bit                   T0IF                __at(0x7F92);	// @ (0xFF2 * 8 + 2)
#define                                 T0IF_bit            BANKMASK(INTCON), 2
// INTCON2<T0IP>
extern volatile __bit                   T0IP                __at(0x7F8A);	// @ (0xFF1 * 8 + 2)
#define                                 T0IP_bit            BANKMASK(INTCON2), 2
// T0CON<T0PS0>
extern volatile __bit                   T0PS0               __at(0x7EA8);	// @ (0xFD5 * 8 + 0)
#define                                 T0PS0_bit           BANKMASK(T0CON), 0
// T0CON<T0PS1>
extern volatile __bit                   T0PS1               __at(0x7EA9);	// @ (0xFD5 * 8 + 1)
#define                                 T0PS1_bit           BANKMASK(T0CON), 1
// T0CON<T0PS2>
extern volatile __bit                   T0PS2               __at(0x7EAA);	// @ (0xFD5 * 8 + 2)
#define                                 T0PS2_bit           BANKMASK(T0CON), 2
// T0CON<T0SE>
extern volatile __bit                   T0SE                __at(0x7EAC);	// @ (0xFD5 * 8 + 4)
#define                                 T0SE_bit            BANKMASK(T0CON), 4
// PORTC<T13CKI>
extern volatile __bit                   T13CKI              __at(0x7C10);	// @ (0xF82 * 8 + 0)
#define                                 T13CKI_bit          BANKMASK(PORTC), 0
// T1CON<T1CKPS0>
extern volatile __bit                   T1CKPS0             __at(0x7E6C);	// @ (0xFCD * 8 + 4)
#define                                 T1CKPS0_bit         BANKMASK(T1CON), 4
// T1CON<T1CKPS1>
extern volatile __bit                   T1CKPS1             __at(0x7E6D);	// @ (0xFCD * 8 + 5)
#define                                 T1CKPS1_bit         BANKMASK(T1CON), 5
// T1CON<T1INSYNC>
extern volatile __bit                   T1INSYNC            __at(0x7E6A);	// @ (0xFCD * 8 + 2)
#define                                 T1INSYNC_bit        BANKMASK(T1CON), 2
// T1CON<T1OSCEN>
extern volatile __bit                   T1OSCEN             __at(0x7E6B);	// @ (0xFCD * 8 + 3)
#define                                 T1OSCEN_bit         BANKMASK(T1CON), 3
// PORTC<T1OSI>
extern volatile __bit                   T1OSI               __at(0x7C11);	// @ (0xF82 * 8 + 1)
#define                                 T1OSI_bit           BANKMASK(PORTC), 1
// PORTC<T1OSO>
extern volatile __bit                   T1OSO               __at(0x7C10);	// @ (0xF82 * 8 + 0)
#define                                 T1OSO_bit           BANKMASK(PORTC), 0
// T1CON<T1RD16>
extern volatile __bit                   T1RD16              __at(0x7E6F);	// @ (0xFCD * 8 + 7)
#define                                 T1RD16_bit          BANKMASK(T1CON), 7
// T1CON<T1RUN>
extern volatile __bit                   T1RUN               __at(0x7E6E);	// @ (0xFCD * 8 + 6)
#define                                 T1RUN_bit           BANKMASK(T1CON), 6
// T1CON<T1SYNC>
extern volatile __bit                   T1SYNC              __at(0x7E6A);	// @ (0xFCD * 8 + 2)
#define                                 T1SYNC_bit          BANKMASK(T1CON), 2
// T2CON<T2CKPS0>
extern volatile __bit                   T2CKPS0             __at(0x7E50);	// @ (0xFCA * 8 + 0)
#define                                 T2CKPS0_bit         BANKMASK(T2CON), 0
// T2CON<T2CKPS1>
extern volatile __bit                   T2CKPS1             __at(0x7E51);	// @ (0xFCA * 8 + 1)
#define                                 T2CKPS1_bit         BANKMASK(T2CON), 1
// T2CON<T2OUTPS0>
extern volatile __bit                   T2OUTPS0            __at(0x7E53);	// @ (0xFCA * 8 + 3)
#define                                 T2OUTPS0_bit        BANKMASK(T2CON), 3
// T2CON<T2OUTPS1>
extern volatile __bit                   T2OUTPS1            __at(0x7E54);	// @ (0xFCA * 8 + 4)
#define                                 T2OUTPS1_bit        BANKMASK(T2CON), 4
// T2CON<T2OUTPS2>
extern volatile __bit                   T2OUTPS2            __at(0x7E55);	// @ (0xFCA * 8 + 5)
#define                                 T2OUTPS2_bit        BANKMASK(T2CON), 5
// T2CON<T2OUTPS3>
extern volatile __bit                   T2OUTPS3            __at(0x7E56);	// @ (0xFCA * 8 + 6)
#define                                 T2OUTPS3_bit        BANKMASK(T2CON), 6
// T3CON<T3CCP1>
extern volatile __bit                   T3CCP1              __at(0x7D8B);	// @ (0xFB1 * 8 + 3)
#define                                 T3CCP1_bit          BANKMASK(T3CON), 3
// T3CON<T3CCP2>
extern volatile __bit                   T3CCP2              __at(0x7D8E);	// @ (0xFB1 * 8 + 6)
#define                                 T3CCP2_bit          BANKMASK(T3CON), 6
// T3CON<T3CKPS0>
extern volatile __bit                   T3CKPS0             __at(0x7D8C);	// @ (0xFB1 * 8 + 4)
#define                                 T3CKPS0_bit         BANKMASK(T3CON), 4
// T3CON<T3CKPS1>
extern volatile __bit                   T3CKPS1             __at(0x7D8D);	// @ (0xFB1 * 8 + 5)
#define                                 T3CKPS1_bit         BANKMASK(T3CON), 5
// T3CON<T3INSYNC>
extern volatile __bit                   T3INSYNC            __at(0x7D8A);	// @ (0xFB1 * 8 + 2)
#define                                 T3INSYNC_bit        BANKMASK(T3CON), 2
// T3CON<T3RD16>
extern volatile __bit                   T3RD16              __at(0x7D8F);	// @ (0xFB1 * 8 + 7)
#define                                 T3RD16_bit          BANKMASK(T3CON), 7
// T3CON<T3SYNC>
extern volatile __bit                   T3SYNC              __at(0x7D8A);	// @ (0xFB1 * 8 + 2)
#define                                 T3SYNC_bit          BANKMASK(T3CON), 2
// T4CON<T4CKPS0>
extern volatile __bit                   T4CKPS0             __at(0x7BB0);	// @ (0xF76 * 8 + 0)
#define                                 T4CKPS0_bit         BANKMASK(T4CON), 0
// T4CON<T4CKPS1>
extern volatile __bit                   T4CKPS1             __at(0x7BB1);	// @ (0xF76 * 8 + 1)
#define                                 T4CKPS1_bit         BANKMASK(T4CON), 1
// T4CON<T4OUTPS0>
extern volatile __bit                   T4OUTPS0            __at(0x7BB3);	// @ (0xF76 * 8 + 3)
#define                                 T4OUTPS0_bit        BANKMASK(T4CON), 3
// T4CON<T4OUTPS1>
extern volatile __bit                   T4OUTPS1            __at(0x7BB4);	// @ (0xF76 * 8 + 4)
#define                                 T4OUTPS1_bit        BANKMASK(T4CON), 4
// T4CON<T4OUTPS2>
extern volatile __bit                   T4OUTPS2            __at(0x7BB5);	// @ (0xF76 * 8 + 5)
#define                                 T4OUTPS2_bit        BANKMASK(T4CON), 5
// T4CON<T4OUTPS3>
extern volatile __bit                   T4OUTPS3            __at(0x7BB6);	// @ (0xF76 * 8 + 6)
#define                                 T4OUTPS3_bit        BANKMASK(T4CON), 6
// INTCON<TMR0IE>
extern volatile __bit                   TMR0IE              __at(0x7F95);	// @ (0xFF2 * 8 + 5)
#define                                 TMR0IE_bit          BANKMASK(INTCON), 5
// INTCON<TMR0IF>
extern volatile __bit                   TMR0IF              __at(0x7F92);	// @ (0xFF2 * 8 + 2)
#define                                 TMR0IF_bit          BANKMASK(INTCON), 2
// INTCON2<TMR0IP>
extern volatile __bit                   TMR0IP              __at(0x7F8A);	// @ (0xFF1 * 8 + 2)
#define                                 TMR0IP_bit          BANKMASK(INTCON2), 2
// T0CON<TMR0ON>
extern volatile __bit                   TMR0ON              __at(0x7EAF);	// @ (0xFD5 * 8 + 7)
#define                                 TMR0ON_bit          BANKMASK(T0CON), 7
// T1CON<TMR1CS>
extern volatile __bit                   TMR1CS              __at(0x7E69);	// @ (0xFCD * 8 + 1)
#define                                 TMR1CS_bit          BANKMASK(T1CON), 1
// PIE1<TMR1IE>
extern volatile __bit                   TMR1IE              __at(0x7CE8);	// @ (0xF9D * 8 + 0)
#define                                 TMR1IE_bit          BANKMASK(PIE1), 0
// PIR1<TMR1IF>
extern volatile __bit                   TMR1IF              __at(0x7CF0);	// @ (0xF9E * 8 + 0)
#define                                 TMR1IF_bit          BANKMASK(PIR1), 0
// IPR1<TMR1IP>
extern volatile __bit                   TMR1IP              __at(0x7CF8);	// @ (0xF9F * 8 + 0)
#define                                 TMR1IP_bit          BANKMASK(IPR1), 0
// T1CON<TMR1ON>
extern volatile __bit                   TMR1ON              __at(0x7E68);	// @ (0xFCD * 8 + 0)
#define                                 TMR1ON_bit          BANKMASK(T1CON), 0
// PIE1<TMR2IE>
extern volatile __bit                   TMR2IE              __at(0x7CE9);	// @ (0xF9D * 8 + 1)
#define                                 TMR2IE_bit          BANKMASK(PIE1), 1
// PIR1<TMR2IF>
extern volatile __bit                   TMR2IF              __at(0x7CF1);	// @ (0xF9E * 8 + 1)
#define                                 TMR2IF_bit          BANKMASK(PIR1), 1
// IPR1<TMR2IP>
extern volatile __bit                   TMR2IP              __at(0x7CF9);	// @ (0xF9F * 8 + 1)
#define                                 TMR2IP_bit          BANKMASK(IPR1), 1
// T2CON<TMR2ON>
extern volatile __bit                   TMR2ON              __at(0x7E52);	// @ (0xFCA * 8 + 2)
#define                                 TMR2ON_bit          BANKMASK(T2CON), 2
// T3CON<TMR3CS>
extern volatile __bit                   TMR3CS              __at(0x7D89);	// @ (0xFB1 * 8 + 1)
#define                                 TMR3CS_bit          BANKMASK(T3CON), 1
// PIE2<TMR3IE>
extern volatile __bit                   TMR3IE              __at(0x7D01);	// @ (0xFA0 * 8 + 1)
#define                                 TMR3IE_bit          BANKMASK(PIE2), 1
// PIR2<TMR3IF>
extern volatile __bit                   TMR3IF              __at(0x7D09);	// @ (0xFA1 * 8 + 1)
#define                                 TMR3IF_bit          BANKMASK(PIR2), 1
// IPR2<TMR3IP>
extern volatile __bit                   TMR3IP              __at(0x7D11);	// @ (0xFA2 * 8 + 1)
#define                                 TMR3IP_bit          BANKMASK(IPR2), 1
// T3CON<TMR3ON>
extern volatile __bit                   TMR3ON              __at(0x7D88);	// @ (0xFB1 * 8 + 0)
#define                                 TMR3ON_bit          BANKMASK(T3CON), 0
// PIE3<TMR4IE>
extern volatile __bit                   TMR4IE              __at(0x7D1B);	// @ (0xFA3 * 8 + 3)
#define                                 TMR4IE_bit          BANKMASK(PIE3), 3
// PIR3<TMR4IF>
extern volatile __bit                   TMR4IF              __at(0x7D23);	// @ (0xFA4 * 8 + 3)
#define                                 TMR4IF_bit          BANKMASK(PIR3), 3
// IPR3<TMR4IP>
extern volatile __bit                   TMR4IP              __at(0x7D2B);	// @ (0xFA5 * 8 + 3)
#define                                 TMR4IP_bit          BANKMASK(IPR3), 3
// T4CON<TMR4ON>
extern volatile __bit                   TMR4ON              __at(0x7BB2);	// @ (0xF76 * 8 + 2)
#define                                 TMR4ON_bit          BANKMASK(T4CON), 2
// RCON<TO>
extern volatile __bit                   TO                  __at(0x7E83);	// @ (0xFD0 * 8 + 3)
#define                                 TO_bit              BANKMASK(RCON), 3
// TRISA<TRISA0>
extern volatile __bit                   TRISA0              __at(0x7C90);	// @ (0xF92 * 8 + 0)
#define                                 TRISA0_bit          BANKMASK(TRISA), 0
// TRISA<TRISA1>
extern volatile __bit                   TRISA1              __at(0x7C91);	// @ (0xF92 * 8 + 1)
#define                                 TRISA1_bit          BANKMASK(TRISA), 1
// TRISA<TRISA2>
extern volatile __bit                   TRISA2              __at(0x7C92);	// @ (0xF92 * 8 + 2)
#define                                 TRISA2_bit          BANKMASK(TRISA), 2
// TRISA<TRISA3>
extern volatile __bit                   TRISA3              __at(0x7C93);	// @ (0xF92 * 8 + 3)
#define                                 TRISA3_bit          BANKMASK(TRISA), 3
// TRISA<TRISA4>
extern volatile __bit                   TRISA4              __at(0x7C94);	// @ (0xF92 * 8 + 4)
#define                                 TRISA4_bit          BANKMASK(TRISA), 4
// TRISA<TRISA5>
extern volatile __bit                   TRISA5              __at(0x7C95);	// @ (0xF92 * 8 + 5)
#define                                 TRISA5_bit          BANKMASK(TRISA), 5
// TRISB<TRISB0>
extern volatile __bit                   TRISB0              __at(0x7C98);	// @ (0xF93 * 8 + 0)
#define                                 TRISB0_bit          BANKMASK(TRISB), 0
// TRISB<TRISB1>
extern volatile __bit                   TRISB1              __at(0x7C99);	// @ (0xF93 * 8 + 1)
#define                                 TRISB1_bit          BANKMASK(TRISB), 1
// TRISB<TRISB2>
extern volatile __bit                   TRISB2              __at(0x7C9A);	// @ (0xF93 * 8 + 2)
#define                                 TRISB2_bit          BANKMASK(TRISB), 2
// TRISB<TRISB3>
extern volatile __bit                   TRISB3              __at(0x7C9B);	// @ (0xF93 * 8 + 3)
#define                                 TRISB3_bit          BANKMASK(TRISB), 3
// TRISB<TRISB4>
extern volatile __bit                   TRISB4              __at(0x7C9C);	// @ (0xF93 * 8 + 4)
#define                                 TRISB4_bit          BANKMASK(TRISB), 4
// TRISB<TRISB5>
extern volatile __bit                   TRISB5              __at(0x7C9D);	// @ (0xF93 * 8 + 5)
#define                                 TRISB5_bit          BANKMASK(TRISB), 5
// TRISB<TRISB6>
extern volatile __bit                   TRISB6              __at(0x7C9E);	// @ (0xF93 * 8 + 6)
#define                                 TRISB6_bit          BANKMASK(TRISB), 6
// TRISB<TRISB7>
extern volatile __bit                   TRISB7              __at(0x7C9F);	// @ (0xF93 * 8 + 7)
#define                                 TRISB7_bit          BANKMASK(TRISB), 7
// TRISC<TRISC0>
extern volatile __bit                   TRISC0              __at(0x7CA0);	// @ (0xF94 * 8 + 0)
#define                                 TRISC0_bit          BANKMASK(TRISC), 0
// TRISC<TRISC1>
extern volatile __bit                   TRISC1              __at(0x7CA1);	// @ (0xF94 * 8 + 1)
#define                                 TRISC1_bit          BANKMASK(TRISC), 1
// TRISC<TRISC2>
extern volatile __bit                   TRISC2              __at(0x7CA2);	// @ (0xF94 * 8 + 2)
#define                                 TRISC2_bit          BANKMASK(TRISC), 2
// TRISC<TRISC3>
extern volatile __bit                   TRISC3              __at(0x7CA3);	// @ (0xF94 * 8 + 3)
#define                                 TRISC3_bit          BANKMASK(TRISC), 3
// TRISC<TRISC4>
extern volatile __bit                   TRISC4              __at(0x7CA4);	// @ (0xF94 * 8 + 4)
#define                                 TRISC4_bit          BANKMASK(TRISC), 4
// TRISC<TRISC5>
extern volatile __bit                   TRISC5              __at(0x7CA5);	// @ (0xF94 * 8 + 5)
#define                                 TRISC5_bit          BANKMASK(TRISC), 5
// TRISC<TRISC6>
extern volatile __bit                   TRISC6              __at(0x7CA6);	// @ (0xF94 * 8 + 6)
#define                                 TRISC6_bit          BANKMASK(TRISC), 6
// TRISC<TRISC7>
extern volatile __bit                   TRISC7              __at(0x7CA7);	// @ (0xF94 * 8 + 7)
#define                                 TRISC7_bit          BANKMASK(TRISC), 7
// TRISD<TRISD0>
extern volatile __bit                   TRISD0              __at(0x7CA8);	// @ (0xF95 * 8 + 0)
#define                                 TRISD0_bit          BANKMASK(TRISD), 0
// TRISD<TRISD1>
extern volatile __bit                   TRISD1              __at(0x7CA9);	// @ (0xF95 * 8 + 1)
#define                                 TRISD1_bit          BANKMASK(TRISD), 1
// TRISD<TRISD2>
extern volatile __bit                   TRISD2              __at(0x7CAA);	// @ (0xF95 * 8 + 2)
#define                                 TRISD2_bit          BANKMASK(TRISD), 2
// TRISE<TRISE0>
extern volatile __bit                   TRISE0              __at(0x7CB0);	// @ (0xF96 * 8 + 0)
#define                                 TRISE0_bit          BANKMASK(TRISE), 0
// TRISE<TRISE1>
extern volatile __bit                   TRISE1              __at(0x7CB1);	// @ (0xF96 * 8 + 1)
#define                                 TRISE1_bit          BANKMASK(TRISE), 1
// TRISE<TRISE2>
extern volatile __bit                   TRISE2              __at(0x7CB2);	// @ (0xF96 * 8 + 2)
#define                                 TRISE2_bit          BANKMASK(TRISE), 2
// TRISE<TRISE3>
extern volatile __bit                   TRISE3              __at(0x7CB3);	// @ (0xF96 * 8 + 3)
#define                                 TRISE3_bit          BANKMASK(TRISE), 3
// TRISE<TRISE4>
extern volatile __bit                   TRISE4              __at(0x7CB4);	// @ (0xF96 * 8 + 4)
#define                                 TRISE4_bit          BANKMASK(TRISE), 4
// TRISE<TRISE5>
extern volatile __bit                   TRISE5              __at(0x7CB5);	// @ (0xF96 * 8 + 5)
#define                                 TRISE5_bit          BANKMASK(TRISE), 5
// TRISE<TRISE6>
extern volatile __bit                   TRISE6              __at(0x7CB6);	// @ (0xF96 * 8 + 6)
#define                                 TRISE6_bit          BANKMASK(TRISE), 6
// TRISE<TRISE7>
extern volatile __bit                   TRISE7              __at(0x7CB7);	// @ (0xF96 * 8 + 7)
#define                                 TRISE7_bit          BANKMASK(TRISE), 7
// TRISF<TRISF1>
extern volatile __bit                   TRISF1              __at(0x7CB9);	// @ (0xF97 * 8 + 1)
#define                                 TRISF1_bit          BANKMASK(TRISF), 1
// TRISF<TRISF2>
extern volatile __bit                   TRISF2              __at(0x7CBA);	// @ (0xF97 * 8 + 2)
#define                                 TRISF2_bit          BANKMASK(TRISF), 2
// TRISF<TRISF3>
extern volatile __bit                   TRISF3              __at(0x7CBB);	// @ (0xF97 * 8 + 3)
#define                                 TRISF3_bit          BANKMASK(TRISF), 3
// TRISF<TRISF4>
extern volatile __bit                   TRISF4              __at(0x7CBC);	// @ (0xF97 * 8 + 4)
#define                                 TRISF4_bit          BANKMASK(TRISF), 4
// TRISF<TRISF5>
extern volatile __bit                   TRISF5              __at(0x7CBD);	// @ (0xF97 * 8 + 5)
#define                                 TRISF5_bit          BANKMASK(TRISF), 5
// TRISF<TRISF6>
extern volatile __bit                   TRISF6              __at(0x7CBE);	// @ (0xF97 * 8 + 6)
#define                                 TRISF6_bit          BANKMASK(TRISF), 6
// TRISF<TRISF7>
extern volatile __bit                   TRISF7              __at(0x7CBF);	// @ (0xF97 * 8 + 7)
#define                                 TRISF7_bit          BANKMASK(TRISF), 7
// TRISG<TRISG0>
extern volatile __bit                   TRISG0              __at(0x7CC0);	// @ (0xF98 * 8 + 0)
#define                                 TRISG0_bit          BANKMASK(TRISG), 0
// TRISG<TRISG1>
extern volatile __bit                   TRISG1              __at(0x7CC1);	// @ (0xF98 * 8 + 1)
#define                                 TRISG1_bit          BANKMASK(TRISG), 1
// TRISG<TRISG2>
extern volatile __bit                   TRISG2              __at(0x7CC2);	// @ (0xF98 * 8 + 2)
#define                                 TRISG2_bit          BANKMASK(TRISG), 2
// TRISG<TRISG3>
extern volatile __bit                   TRISG3              __at(0x7CC3);	// @ (0xF98 * 8 + 3)
#define                                 TRISG3_bit          BANKMASK(TRISG), 3
// TRISG<TRISG4>
extern volatile __bit                   TRISG4              __at(0x7CC4);	// @ (0xF98 * 8 + 4)
#define                                 TRISG4_bit          BANKMASK(TRISG), 4
// TRISH<TRISH0>
extern volatile __bit                   TRISH0              __at(0x7CC8);	// @ (0xF99 * 8 + 0)
#define                                 TRISH0_bit          BANKMASK(TRISH), 0
// TRISH<TRISH1>
extern volatile __bit                   TRISH1              __at(0x7CC9);	// @ (0xF99 * 8 + 1)
#define                                 TRISH1_bit          BANKMASK(TRISH), 1
// TRISH<TRISH2>
extern volatile __bit                   TRISH2              __at(0x7CCA);	// @ (0xF99 * 8 + 2)
#define                                 TRISH2_bit          BANKMASK(TRISH), 2
// TRISH<TRISH3>
extern volatile __bit                   TRISH3              __at(0x7CCB);	// @ (0xF99 * 8 + 3)
#define                                 TRISH3_bit          BANKMASK(TRISH), 3
// TRISH<TRISH4>
extern volatile __bit                   TRISH4              __at(0x7CCC);	// @ (0xF99 * 8 + 4)
#define                                 TRISH4_bit          BANKMASK(TRISH), 4
// TRISH<TRISH5>
extern volatile __bit                   TRISH5              __at(0x7CCD);	// @ (0xF99 * 8 + 5)
#define                                 TRISH5_bit          BANKMASK(TRISH), 5
// TRISH<TRISH6>
extern volatile __bit                   TRISH6              __at(0x7CCE);	// @ (0xF99 * 8 + 6)
#define                                 TRISH6_bit          BANKMASK(TRISH), 6
// TRISH<TRISH7>
extern volatile __bit                   TRISH7              __at(0x7CCF);	// @ (0xF99 * 8 + 7)
#define                                 TRISH7_bit          BANKMASK(TRISH), 7
// TRISJ<TRISJ4>
extern volatile __bit                   TRISJ4              __at(0x7CD4);	// @ (0xF9A * 8 + 4)
#define                                 TRISJ4_bit          BANKMASK(TRISJ), 4
// TRISJ<TRISJ5>
extern volatile __bit                   TRISJ5              __at(0x7CD5);	// @ (0xF9A * 8 + 5)
#define                                 TRISJ5_bit          BANKMASK(TRISJ), 5
// TXSTA1<TRMT>
extern volatile __bit _DEPRECATED       TRMT                __at(0x7D61);	// @ (0xFAC * 8 + 1)
#define                                 TRMT_bit            BANKMASK(TXSTA1), 1
// TXSTA1<TRMT1>
extern volatile __bit                   TRMT1               __at(0x7D61);	// @ (0xFAC * 8 + 1)
#define                                 TRMT1_bit           BANKMASK(TXSTA1), 1
// TXSTA2<TRMT2>
extern volatile __bit                   TRMT2               __at(0x7B61);	// @ (0xF6C * 8 + 1)
#define                                 TRMT2_bit           BANKMASK(TXSTA2), 1
// OSCTUNE<TUN4>
extern volatile __bit                   TUN4                __at(0x7CDC);	// @ (0xF9B * 8 + 4)
#define                                 TUN4_bit            BANKMASK(OSCTUNE), 4
// OSCTUNE<TUN5>
extern volatile __bit                   TUN5                __at(0x7CDD);	// @ (0xF9B * 8 + 5)
#define                                 TUN5_bit            BANKMASK(OSCTUNE), 5
// PORTC<TX>
extern volatile __bit                   TX                  __at(0x7C16);	// @ (0xF82 * 8 + 6)
#define                                 TX_bit              BANKMASK(PORTC), 6
// PORTC<TX1>
extern volatile __bit                   TX1                 __at(0x7C16);	// @ (0xF82 * 8 + 6)
#define                                 TX1_bit             BANKMASK(PORTC), 6
// PIE1<TX1IE>
extern volatile __bit                   TX1IE               __at(0x7CEC);	// @ (0xF9D * 8 + 4)
#define                                 TX1IE_bit           BANKMASK(PIE1), 4
// PIR1<TX1IF>
extern volatile __bit                   TX1IF               __at(0x7CF4);	// @ (0xF9E * 8 + 4)
#define                                 TX1IF_bit           BANKMASK(PIR1), 4
// IPR1<TX1IP>
extern volatile __bit                   TX1IP               __at(0x7CFC);	// @ (0xF9F * 8 + 4)
#define                                 TX1IP_bit           BANKMASK(IPR1), 4
// PORTG<TX2>
extern volatile __bit                   TX2                 __at(0x7C31);	// @ (0xF86 * 8 + 1)
#define                                 TX2_bit             BANKMASK(PORTG), 1
// PIE3<TX2IE>
extern volatile __bit                   TX2IE               __at(0x7D1C);	// @ (0xFA3 * 8 + 4)
#define                                 TX2IE_bit           BANKMASK(PIE3), 4
// PIR3<TX2IF>
extern volatile __bit                   TX2IF               __at(0x7D24);	// @ (0xFA4 * 8 + 4)
#define                                 TX2IF_bit           BANKMASK(PIR3), 4
// IPR3<TX2IP>
extern volatile __bit                   TX2IP               __at(0x7D2C);	// @ (0xFA5 * 8 + 4)
#define                                 TX2IP_bit           BANKMASK(IPR3), 4
// TXSTA2<TX8_92>
extern volatile __bit                   TX8_92              __at(0x7B66);	// @ (0xF6C * 8 + 6)
#define                                 TX8_92_bit          BANKMASK(TXSTA2), 6
// TXSTA1<TX9>
extern volatile __bit _DEPRECATED       TX9                 __at(0x7D66);	// @ (0xFAC * 8 + 6)
#define                                 TX9_bit             BANKMASK(TXSTA1), 6
// TXSTA1<TX91>
extern volatile __bit                   TX91                __at(0x7D66);	// @ (0xFAC * 8 + 6)
#define                                 TX91_bit            BANKMASK(TXSTA1), 6
// TXSTA2<TX92>
extern volatile __bit                   TX92                __at(0x7B66);	// @ (0xF6C * 8 + 6)
#define                                 TX92_bit            BANKMASK(TXSTA2), 6
// TXSTA1<TX9D>
extern volatile __bit _DEPRECATED       TX9D                __at(0x7D60);	// @ (0xFAC * 8 + 0)
#define                                 TX9D_bit            BANKMASK(TXSTA1), 0
// TXSTA1<TX9D1>
extern volatile __bit                   TX9D1               __at(0x7D60);	// @ (0xFAC * 8 + 0)
#define                                 TX9D1_bit           BANKMASK(TXSTA1), 0
// TXSTA2<TX9D2>
extern volatile __bit                   TX9D2               __at(0x7B60);	// @ (0xF6C * 8 + 0)
#define                                 TX9D2_bit           BANKMASK(TXSTA2), 0
// ESTAT<TXABRT>
extern volatile __bit                   TXABRT              __at(0x77E9);	// @ (0xEFD * 8 + 1)
#define                                 TXABRT_bit          BANKMASK(ESTAT), 1
// PIE3<TXB0IE>
extern volatile __bit                   TXB0IE              __at(0x7D1A);	// @ (0xFA3 * 8 + 2)
#define                                 TXB0IE_bit          BANKMASK(PIE3), 2
// PIE3<TXB1IE>
extern volatile __bit                   TXB1IE              __at(0x7D1B);	// @ (0xFA3 * 8 + 3)
#define                                 TXB1IE_bit          BANKMASK(PIE3), 3
// PIE3<TXB2IE>
extern volatile __bit                   TXB2IE              __at(0x7D1C);	// @ (0xFA3 * 8 + 4)
#define                                 TXB2IE_bit          BANKMASK(PIE3), 4
// PIE3<TXBNIE>
extern volatile __bit                   TXBNIE              __at(0x7D1C);	// @ (0xFA3 * 8 + 4)
#define                                 TXBNIE_bit          BANKMASK(PIE3), 4
// PIR3<TXBNIF>
extern volatile __bit                   TXBNIF              __at(0x7D24);	// @ (0xFA4 * 8 + 4)
#define                                 TXBNIF_bit          BANKMASK(PIR3), 4
// IPR3<TXBNIP>
extern volatile __bit                   TXBNIP              __at(0x7D2C);	// @ (0xFA5 * 8 + 4)
#define                                 TXBNIP_bit          BANKMASK(IPR3), 4
// BAUDCON1<TXCKP>
extern volatile __bit _DEPRECATED       TXCKP               __at(0x7BF4);	// @ (0xF7E * 8 + 4)
#define                                 TXCKP_bit           BANKMASK(BAUDCON1), 4
// BAUDCON1<TXCKP1>
extern volatile __bit                   TXCKP1              __at(0x7BF4);	// @ (0xF7E * 8 + 4)
#define                                 TXCKP1_bit          BANKMASK(BAUDCON1), 4
// BAUDCON2<TXCKP2>
extern volatile __bit                   TXCKP2              __at(0x7BE4);	// @ (0xF7C * 8 + 4)
#define                                 TXCKP2_bit          BANKMASK(BAUDCON2), 4
// MACON3<TXCRCEN>
extern volatile __bit                   TXCRCEN             __at(0x7514);	// @ (0xEA2 * 8 + 4)
#define                                 TXCRCEN_bit         BANKMASK(MACON3), 4
// TXSTA2<TXD82>
extern volatile __bit                   TXD82               __at(0x7B60);	// @ (0xF6C * 8 + 0)
#define                                 TXD82_bit           BANKMASK(TXSTA2), 0
// TXSTA1<TXEN>
extern volatile __bit _DEPRECATED       TXEN                __at(0x7D65);	// @ (0xFAC * 8 + 5)
#define                                 TXEN_bit            BANKMASK(TXSTA1), 5
// TXSTA1<TXEN1>
extern volatile __bit                   TXEN1               __at(0x7D65);	// @ (0xFAC * 8 + 5)
#define                                 TXEN1_bit           BANKMASK(TXSTA1), 5
// TXSTA2<TXEN2>
extern volatile __bit                   TXEN2               __at(0x7B65);	// @ (0xF6C * 8 + 5)
#define                                 TXEN2_bit           BANKMASK(TXSTA2), 5
// EIE<TXERIE>
extern volatile __bit                   TXERIE              __at(0x77D9);	// @ (0xEFB * 8 + 1)
#define                                 TXERIE_bit          BANKMASK(EIE), 1
// EIR<TXERIF>
extern volatile __bit                   TXERIF              __at(0x7B01);	// @ (0xF60 * 8 + 1)
#define                                 TXERIF_bit          BANKMASK(EIR), 1
// IPR1<TXIP>
extern volatile __bit                   TXIP                __at(0x7CFC);	// @ (0xF9F * 8 + 4)
#define                                 TXIP_bit            BANKMASK(IPR1), 4
// MACON1<TXPAUS>
extern volatile __bit                   TXPAUS              __at(0x7503);	// @ (0xEA0 * 8 + 3)
#define                                 TXPAUS_bit          BANKMASK(MACON1), 3
// ECON1<TXRST>
extern volatile __bit                   TXRST               __at(0x7E97);	// @ (0xFD2 * 8 + 7)
#define                                 TXRST_bit           BANKMASK(ECON1), 7
// ECON1<TXRTS>
extern volatile __bit                   TXRTS               __at(0x7E93);	// @ (0xFD2 * 8 + 3)
#define                                 TXRTS_bit           BANKMASK(ECON1), 3
// SSP1STAT<UA>
extern volatile __bit                   UA                  __at(0x7E39);	// @ (0xFC7 * 8 + 1)
#define                                 UA_bit              BANKMASK(SSP1STAT), 1
// SSP1STAT<UA1>
extern volatile __bit                   UA1                 __at(0x7E39);	// @ (0xFC7 * 8 + 1)
#define                                 UA1_bit             BANKMASK(SSP1STAT), 1
// ERXFCON<UCEN>
extern volatile __bit                   UCEN                __at(0x76C7);	// @ (0xED8 * 8 + 7)
#define                                 UCEN_bit            BANKMASK(ERXFCON), 7
// PORTA<ULPWUIN>
extern volatile __bit                   ULPWUIN             __at(0x7C00);	// @ (0xF80 * 8 + 0)
#define                                 ULPWUIN_bit         BANKMASK(PORTA), 0
// ADCON1<VCFG0>
extern volatile __bit                   VCFG0               __at(0x7E0C);	// @ (0xFC1 * 8 + 4)
#define                                 VCFG0_bit           BANKMASK(ADCON1), 4
// ADCON1<VCFG01>
extern volatile __bit                   VCFG01              __at(0x7E0C);	// @ (0xFC1 * 8 + 4)
#define                                 VCFG01_bit          BANKMASK(ADCON1), 4
// ADCON1<VCFG1>
extern volatile __bit                   VCFG1               __at(0x7E0D);	// @ (0xFC1 * 8 + 5)
#define                                 VCFG1_bit           BANKMASK(ADCON1), 5
// ADCON1<VCFG11>
extern volatile __bit                   VCFG11              __at(0x7E0D);	// @ (0xFC1 * 8 + 5)
#define                                 VCFG11_bit          BANKMASK(ADCON1), 5
// PORTA<VREFM>
extern volatile __bit                   VREFM               __at(0x7C02);	// @ (0xF80 * 8 + 2)
#define                                 VREFM_bit           BANKMASK(PORTA), 2
// PORTA<VREFP>
extern volatile __bit                   VREFP               __at(0x7C03);	// @ (0xF80 * 8 + 3)
#define                                 VREFP_bit           BANKMASK(PORTA), 3
// BAUDCON1<W4E>
extern volatile __bit                   W4E                 __at(0x7BF1);	// @ (0xF7E * 8 + 1)
#define                                 W4E_bit             BANKMASK(BAUDCON1), 1
// PR2<WAIT0>
extern volatile __bit                   WAIT0               __at(0x7E5C);	// @ (0xFCB * 8 + 4)
#define                                 WAIT0_bit           BANKMASK(PR2), 4
// PR2<WAIT1>
extern volatile __bit                   WAIT1               __at(0x7E5D);	// @ (0xFCB * 8 + 5)
#define                                 WAIT1_bit           BANKMASK(PR2), 5
// SSP1CON1<WCOL>
extern volatile __bit                   WCOL                __at(0x7E37);	// @ (0xFC6 * 8 + 7)
#define                                 WCOL_bit            BANKMASK(SSP1CON1), 7
// SSP1CON1<WCOL1>
extern volatile __bit                   WCOL1               __at(0x7E37);	// @ (0xFC6 * 8 + 7)
#define                                 WCOL1_bit           BANKMASK(SSP1CON1), 7
// PR2<WM0>
extern volatile __bit                   WM0                 __at(0x7E58);	// @ (0xFCB * 8 + 0)
#define                                 WM0_bit             BANKMASK(PR2), 0
// PR2<WM1>
extern volatile __bit                   WM1                 __at(0x7E59);	// @ (0xFCB * 8 + 1)
#define                                 WM1_bit             BANKMASK(PR2), 1
// EECON1<WR>
extern volatile __bit                   WR                  __at(0x7D31);	// @ (0xFA6 * 8 + 1)
#define                                 WR_bit              BANKMASK(EECON1), 1
// PORTE<WRE>
extern volatile __bit                   WRE                 __at(0x7C21);	// @ (0xF84 * 8 + 1)
#define                                 WRE_bit             BANKMASK(PORTE), 1
// EECON1<WREN>
extern volatile __bit                   WREN                __at(0x7D32);	// @ (0xFA6 * 8 + 2)
#define                                 WREN_bit            BANKMASK(EECON1), 2
// EECON1<WRERR>
extern volatile __bit                   WRERR               __at(0x7D33);	// @ (0xFA6 * 8 + 3)
#define                                 WRERR_bit           BANKMASK(EECON1), 3
// BAUDCON1<WUE>
extern volatile __bit _DEPRECATED       WUE                 __at(0x7BF1);	// @ (0xF7E * 8 + 1)
#define                                 WUE_bit             BANKMASK(BAUDCON1), 1
// BAUDCON1<WUE1>
extern volatile __bit                   WUE1                __at(0x7BF1);	// @ (0xF7E * 8 + 1)
#define                                 WUE1_bit            BANKMASK(BAUDCON1), 1
// BAUDCON2<WUE2>
extern volatile __bit                   WUE2                __at(0x7BE1);	// @ (0xF7C * 8 + 1)
#define                                 WUE2_bit            BANKMASK(BAUDCON2), 1
// STATUS<ZERO>
extern volatile __bit                   ZERO                __at(0x7EC2);	// @ (0xFD8 * 8 + 2)
#define                                 ZERO_bit            BANKMASK(STATUS), 2
// SSP1STAT<nA>
extern volatile __bit                   nA                  __at(0x7E3D);	// @ (0xFC7 * 8 + 5)
#define                                 nA_bit              BANKMASK(SSP1STAT), 5
// SSP1STAT<nADDRESS>
extern volatile __bit                   nADDRESS            __at(0x7E3D);	// @ (0xFC7 * 8 + 5)
#define                                 nADDRESS_bit        BANKMASK(SSP1STAT), 5
// RCON<nBOR>
extern volatile __bit                   nBOR                __at(0x7E80);	// @ (0xFD0 * 8 + 0)
#define                                 nBOR_bit            BANKMASK(RCON), 0
// RCON<nCM>
extern volatile __bit                   nCM                 __at(0x7E85);	// @ (0xFD0 * 8 + 5)
#define                                 nCM_bit             BANKMASK(RCON), 5
// ADCON0<nDONE>
extern volatile __bit                   nDONE               __at(0x7E11);	// @ (0xFC2 * 8 + 1)
#define                                 nDONE_bit           BANKMASK(ADCON0), 1
// RCON<nPD>
extern volatile __bit                   nPD                 __at(0x7E82);	// @ (0xFD0 * 8 + 2)
#define                                 nPD_bit             BANKMASK(RCON), 2
// RCON<nPOR>
extern volatile __bit                   nPOR                __at(0x7E81);	// @ (0xFD0 * 8 + 1)
#define                                 nPOR_bit            BANKMASK(RCON), 1
// INTCON2<nRBPU>
extern volatile __bit                   nRBPU               __at(0x7F8F);	// @ (0xFF1 * 8 + 7)
#define                                 nRBPU_bit           BANKMASK(INTCON2), 7
// RCON<nRI>
extern volatile __bit                   nRI                 __at(0x7E84);	// @ (0xFD0 * 8 + 4)
#define                                 nRI_bit             BANKMASK(RCON), 4
// PORTF<nSS>
extern volatile __bit                   nSS                 __at(0x7C2F);	// @ (0xF85 * 8 + 7)
#define                                 nSS_bit             BANKMASK(PORTF), 7
// PORTF<nSS1>
extern volatile __bit                   nSS1                __at(0x7C2F);	// @ (0xF85 * 8 + 7)
#define                                 nSS1_bit            BANKMASK(PORTF), 7
// T1CON<nT1SYNC>
extern volatile __bit                   nT1SYNC             __at(0x7E6A);	// @ (0xFCD * 8 + 2)
#define                                 nT1SYNC_bit         BANKMASK(T1CON), 2
// T3CON<nT3SYNC>
extern volatile __bit                   nT3SYNC             __at(0x7D8A);	// @ (0xFB1 * 8 + 2)
#define                                 nT3SYNC_bit         BANKMASK(T3CON), 2
// RCON<nTO>
extern volatile __bit                   nTO                 __at(0x7E83);	// @ (0xFD0 * 8 + 3)
#define                                 nTO_bit             BANKMASK(RCON), 3
// SSP1STAT<nW>
extern volatile __bit                   nW                  __at(0x7E3A);	// @ (0xFC7 * 8 + 2)
#define                                 nW_bit              BANKMASK(SSP1STAT), 2
// SSP1STAT<nWRITE>
extern volatile __bit                   nWRITE              __at(0x7E3A);	// @ (0xFC7 * 8 + 2)
#define                                 nWRITE_bit          BANKMASK(SSP1STAT), 2

#endif // _PIC18F86J65_H_
