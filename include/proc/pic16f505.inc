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

#ifndef _PIC16F505_INC_
#define _PIC16F505_INC_

/*
 * Assembly Header file for the Microchip PIC Microcontroller
 * PIC16F505
 */

/*
 * Device Registers
 */

// Register: INDF
#define INDF INDF
INDF                                     equ 0000h
// bitfield definitions
INDF_INDF_POSN                           equ 0000h
INDF_INDF_POSITION                       equ 0000h
INDF_INDF_SIZE                           equ 0008h
INDF_INDF_LENGTH                         equ 0008h
INDF_INDF_MASK                           equ 00FFh

// Register: TMR0
#define TMR0 TMR0
TMR0                                     equ 0001h
// bitfield definitions
TMR0_TMR0_POSN                           equ 0000h
TMR0_TMR0_POSITION                       equ 0000h
TMR0_TMR0_SIZE                           equ 0008h
TMR0_TMR0_LENGTH                         equ 0008h
TMR0_TMR0_MASK                           equ 00FFh

// Register: PCL
#define PCL PCL
PCL                                      equ 0002h
// bitfield definitions
PCL_PCL_POSN                             equ 0000h
PCL_PCL_POSITION                         equ 0000h
PCL_PCL_SIZE                             equ 0008h
PCL_PCL_LENGTH                           equ 0008h
PCL_PCL_MASK                             equ 00FFh

// Register: STATUS
#define STATUS STATUS
STATUS                                   equ 0003h
// bitfield definitions
STATUS_C_POSN                            equ 0000h
STATUS_C_POSITION                        equ 0000h
STATUS_C_SIZE                            equ 0001h
STATUS_C_LENGTH                          equ 0001h
STATUS_C_MASK                            equ 0001h
STATUS_DC_POSN                           equ 0001h
STATUS_DC_POSITION                       equ 0001h
STATUS_DC_SIZE                           equ 0001h
STATUS_DC_LENGTH                         equ 0001h
STATUS_DC_MASK                           equ 0002h
STATUS_Z_POSN                            equ 0002h
STATUS_Z_POSITION                        equ 0002h
STATUS_Z_SIZE                            equ 0001h
STATUS_Z_LENGTH                          equ 0001h
STATUS_Z_MASK                            equ 0004h
STATUS_nPD_POSN                          equ 0003h
STATUS_nPD_POSITION                      equ 0003h
STATUS_nPD_SIZE                          equ 0001h
STATUS_nPD_LENGTH                        equ 0001h
STATUS_nPD_MASK                          equ 0008h
STATUS_nTO_POSN                          equ 0004h
STATUS_nTO_POSITION                      equ 0004h
STATUS_nTO_SIZE                          equ 0001h
STATUS_nTO_LENGTH                        equ 0001h
STATUS_nTO_MASK                          equ 0010h
STATUS_PA0_POSN                          equ 0005h
STATUS_PA0_POSITION                      equ 0005h
STATUS_PA0_SIZE                          equ 0001h
STATUS_PA0_LENGTH                        equ 0001h
STATUS_PA0_MASK                          equ 0020h
STATUS_RBWUF_POSN                        equ 0007h
STATUS_RBWUF_POSITION                    equ 0007h
STATUS_RBWUF_SIZE                        equ 0001h
STATUS_RBWUF_LENGTH                      equ 0001h
STATUS_RBWUF_MASK                        equ 0080h
STATUS_CARRY_POSN                        equ 0000h
STATUS_CARRY_POSITION                    equ 0000h
STATUS_CARRY_SIZE                        equ 0001h
STATUS_CARRY_LENGTH                      equ 0001h
STATUS_CARRY_MASK                        equ 0001h
STATUS_ZERO_POSN                         equ 0002h
STATUS_ZERO_POSITION                     equ 0002h
STATUS_ZERO_SIZE                         equ 0001h
STATUS_ZERO_LENGTH                       equ 0001h
STATUS_ZERO_MASK                         equ 0004h

// Register: FSR
#define FSR FSR
FSR                                      equ 0004h
// bitfield definitions
FSR_FSR_POSN                             equ 0000h
FSR_FSR_POSITION                         equ 0000h
FSR_FSR_SIZE                             equ 0008h
FSR_FSR_LENGTH                           equ 0008h
FSR_FSR_MASK                             equ 00FFh

// Register: OSCCAL
#define OSCCAL OSCCAL
OSCCAL                                   equ 0005h
// bitfield definitions
OSCCAL_CAL_POSN                          equ 0001h
OSCCAL_CAL_POSITION                      equ 0001h
OSCCAL_CAL_SIZE                          equ 0007h
OSCCAL_CAL_LENGTH                        equ 0007h
OSCCAL_CAL_MASK                          equ 00FEh
OSCCAL_CAL0_POSN                         equ 0001h
OSCCAL_CAL0_POSITION                     equ 0001h
OSCCAL_CAL0_SIZE                         equ 0001h
OSCCAL_CAL0_LENGTH                       equ 0001h
OSCCAL_CAL0_MASK                         equ 0002h
OSCCAL_CAL1_POSN                         equ 0002h
OSCCAL_CAL1_POSITION                     equ 0002h
OSCCAL_CAL1_SIZE                         equ 0001h
OSCCAL_CAL1_LENGTH                       equ 0001h
OSCCAL_CAL1_MASK                         equ 0004h
OSCCAL_CAL2_POSN                         equ 0003h
OSCCAL_CAL2_POSITION                     equ 0003h
OSCCAL_CAL2_SIZE                         equ 0001h
OSCCAL_CAL2_LENGTH                       equ 0001h
OSCCAL_CAL2_MASK                         equ 0008h
OSCCAL_CAL3_POSN                         equ 0004h
OSCCAL_CAL3_POSITION                     equ 0004h
OSCCAL_CAL3_SIZE                         equ 0001h
OSCCAL_CAL3_LENGTH                       equ 0001h
OSCCAL_CAL3_MASK                         equ 0010h
OSCCAL_CAL4_POSN                         equ 0005h
OSCCAL_CAL4_POSITION                     equ 0005h
OSCCAL_CAL4_SIZE                         equ 0001h
OSCCAL_CAL4_LENGTH                       equ 0001h
OSCCAL_CAL4_MASK                         equ 0020h
OSCCAL_CAL5_POSN                         equ 0006h
OSCCAL_CAL5_POSITION                     equ 0006h
OSCCAL_CAL5_SIZE                         equ 0001h
OSCCAL_CAL5_LENGTH                       equ 0001h
OSCCAL_CAL5_MASK                         equ 0040h
OSCCAL_CAL6_POSN                         equ 0007h
OSCCAL_CAL6_POSITION                     equ 0007h
OSCCAL_CAL6_SIZE                         equ 0001h
OSCCAL_CAL6_LENGTH                       equ 0001h
OSCCAL_CAL6_MASK                         equ 0080h

// Register: PORTB
#define PORTB PORTB
PORTB                                    equ 0006h
// bitfield definitions
PORTB_RB0_POSN                           equ 0000h
PORTB_RB0_POSITION                       equ 0000h
PORTB_RB0_SIZE                           equ 0001h
PORTB_RB0_LENGTH                         equ 0001h
PORTB_RB0_MASK                           equ 0001h
PORTB_RB1_POSN                           equ 0001h
PORTB_RB1_POSITION                       equ 0001h
PORTB_RB1_SIZE                           equ 0001h
PORTB_RB1_LENGTH                         equ 0001h
PORTB_RB1_MASK                           equ 0002h
PORTB_RB2_POSN                           equ 0002h
PORTB_RB2_POSITION                       equ 0002h
PORTB_RB2_SIZE                           equ 0001h
PORTB_RB2_LENGTH                         equ 0001h
PORTB_RB2_MASK                           equ 0004h
PORTB_RB3_POSN                           equ 0003h
PORTB_RB3_POSITION                       equ 0003h
PORTB_RB3_SIZE                           equ 0001h
PORTB_RB3_LENGTH                         equ 0001h
PORTB_RB3_MASK                           equ 0008h
PORTB_RB4_POSN                           equ 0004h
PORTB_RB4_POSITION                       equ 0004h
PORTB_RB4_SIZE                           equ 0001h
PORTB_RB4_LENGTH                         equ 0001h
PORTB_RB4_MASK                           equ 0010h
PORTB_RB5_POSN                           equ 0005h
PORTB_RB5_POSITION                       equ 0005h
PORTB_RB5_SIZE                           equ 0001h
PORTB_RB5_LENGTH                         equ 0001h
PORTB_RB5_MASK                           equ 0020h

// Register: PORTC
#define PORTC PORTC
PORTC                                    equ 0007h
// bitfield definitions
PORTC_RC0_POSN                           equ 0000h
PORTC_RC0_POSITION                       equ 0000h
PORTC_RC0_SIZE                           equ 0001h
PORTC_RC0_LENGTH                         equ 0001h
PORTC_RC0_MASK                           equ 0001h
PORTC_RC1_POSN                           equ 0001h
PORTC_RC1_POSITION                       equ 0001h
PORTC_RC1_SIZE                           equ 0001h
PORTC_RC1_LENGTH                         equ 0001h
PORTC_RC1_MASK                           equ 0002h
PORTC_RC2_POSN                           equ 0002h
PORTC_RC2_POSITION                       equ 0002h
PORTC_RC2_SIZE                           equ 0001h
PORTC_RC2_LENGTH                         equ 0001h
PORTC_RC2_MASK                           equ 0004h
PORTC_RC3_POSN                           equ 0003h
PORTC_RC3_POSITION                       equ 0003h
PORTC_RC3_SIZE                           equ 0001h
PORTC_RC3_LENGTH                         equ 0001h
PORTC_RC3_MASK                           equ 0008h
PORTC_RC4_POSN                           equ 0004h
PORTC_RC4_POSITION                       equ 0004h
PORTC_RC4_SIZE                           equ 0001h
PORTC_RC4_LENGTH                         equ 0001h
PORTC_RC4_MASK                           equ 0010h
PORTC_RC5_POSN                           equ 0005h
PORTC_RC5_POSITION                       equ 0005h
PORTC_RC5_SIZE                           equ 0001h
PORTC_RC5_LENGTH                         equ 0001h
PORTC_RC5_MASK                           equ 0020h

// Register: TRISB
#define TRISB TRISB

// Register: TRISC
#define TRISC TRISC

/*
 * Bit Access Macros
 */

#ifndef BANKMASK
#define BANKMASK(addr) ((addr) and 01Fh)
#endif
#define CAL0                             BANKMASK(OSCCAL), 1
#define CAL1                             BANKMASK(OSCCAL), 2
#define CAL2                             BANKMASK(OSCCAL), 3
#define CAL3                             BANKMASK(OSCCAL), 4
#define CAL4                             BANKMASK(OSCCAL), 5
#define CAL5                             BANKMASK(OSCCAL), 6
#define CAL6                             BANKMASK(OSCCAL), 7
#define CARRY                            BANKMASK(STATUS), 0
#define DC                               BANKMASK(STATUS), 1
#define PA0                              BANKMASK(STATUS), 5
#define RB0                              BANKMASK(PORTB), 0
#define RB1                              BANKMASK(PORTB), 1
#define RB2                              BANKMASK(PORTB), 2
#define RB3                              BANKMASK(PORTB), 3
#define RB4                              BANKMASK(PORTB), 4
#define RB5                              BANKMASK(PORTB), 5
#define RBWUF                            BANKMASK(STATUS), 7
#define RC0                              BANKMASK(PORTC), 0
#define RC1                              BANKMASK(PORTC), 1
#define RC2                              BANKMASK(PORTC), 2
#define RC3                              BANKMASK(PORTC), 3
#define RC4                              BANKMASK(PORTC), 4
#define RC5                              BANKMASK(PORTC), 5
#define ZERO                             BANKMASK(STATUS), 2
#define nPD                              BANKMASK(STATUS), 3
#define nTO                              BANKMASK(STATUS), 4

/*
 * Device Psects
 */

#ifdef _XC_INC_

// Memory Spaces
#define SPACE_CODE   0
#define SPACE_DATA   1
#define SPACE_EEPROM 3

psect udata_shr,class=COMMON,space=SPACE_DATA,noexec
psect udata,class=RAM,space=SPACE_DATA,noexec
psect udata_bank0,class=BANK0,space=SPACE_DATA,noexec
psect udata_bank1,class=BANK1,space=SPACE_DATA,noexec
psect udata_bank2,class=BANK2,space=SPACE_DATA,noexec
psect udata_bank3,class=BANK3,space=SPACE_DATA,noexec
psect code,class=CODE,space=SPACE_CODE,delta=2
psect data,class=STRCODE,space=SPACE_CODE,delta=2,noexec

#endif // _XC_INC_

#endif // _PIC16F505_INC_