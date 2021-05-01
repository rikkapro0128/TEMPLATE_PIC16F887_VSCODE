subtitle "Microchip MPLAB XC8 C Compiler v2.32 (Free license) build 20210201212658 Og1 "

pagewidth 120

	opt flic

	processor	16F887
include "C:\Program Files\Microchip\xc8\v2.32\pic\include\proc\16f887.cgen.inc"
getbyte	macro	val,pos
	(((val) >> (8 * pos)) and 0xff)
endm
byte0	macro	val
	(getbyte(val,0))
endm
byte1	macro	val
	(getbyte(val,1))
endm
byte2	macro	val
	(getbyte(val,2))
endm
byte3	macro	val
	(getbyte(val,3))
endm
byte4	macro	val
	(getbyte(val,4))
endm
byte5	macro	val
	(getbyte(val,5))
endm
byte6	macro	val
	(getbyte(val,6))
endm
byte7	macro	val
	(getbyte(val,7))
endm
getword	macro	val,pos
	(((val) >> (8 * pos)) and 0xffff)
endm
word0	macro	val
	(getword(val,0))
endm
word1	macro	val
	(getword(val,2))
endm
word2	macro	val
	(getword(val,4))
endm
word3	macro	val
	(getword(val,6))
endm
gettword	macro	val,pos
	(((val) >> (8 * pos)) and 0xffffff)
endm
tword0	macro	val
	(gettword(val,0))
endm
tword1	macro	val
	(gettword(val,3))
endm
tword2	macro	val
	(gettword(val,6))
endm
getdword	macro	val,pos
	(((val) >> (8 * pos)) and 0xffffffff)
endm
dword0	macro	val
	(getdword(val,0))
endm
dword1	macro	val
	(getdword(val,4))
endm
clrc	macro
	bcf	3,0
	endm
clrz	macro
	bcf	3,2
	endm
setc	macro
	bsf	3,0
	endm
setz	macro
	bsf	3,2
	endm
skipc	macro
	btfss	3,0
	endm
skipz	macro
	btfss	3,2
	endm
skipnc	macro
	btfsc	3,0
	endm
skipnz	macro
	btfsc	3,2
	endm
# 55 "C:\Program Files\Microchip\xc8\v2.32\pic\include\proc\pic16f887.h"
INDF equ 00h ;# 
# 62 "C:\Program Files\Microchip\xc8\v2.32\pic\include\proc\pic16f887.h"
TMR0 equ 01h ;# 
# 69 "C:\Program Files\Microchip\xc8\v2.32\pic\include\proc\pic16f887.h"
PCL equ 02h ;# 
# 76 "C:\Program Files\Microchip\xc8\v2.32\pic\include\proc\pic16f887.h"
STATUS equ 03h ;# 
# 162 "C:\Program Files\Microchip\xc8\v2.32\pic\include\proc\pic16f887.h"
FSR equ 04h ;# 
# 169 "C:\Program Files\Microchip\xc8\v2.32\pic\include\proc\pic16f887.h"
PORTA equ 05h ;# 
# 231 "C:\Program Files\Microchip\xc8\v2.32\pic\include\proc\pic16f887.h"
PORTB equ 06h ;# 
# 293 "C:\Program Files\Microchip\xc8\v2.32\pic\include\proc\pic16f887.h"
PORTC equ 07h ;# 
# 355 "C:\Program Files\Microchip\xc8\v2.32\pic\include\proc\pic16f887.h"
PORTD equ 08h ;# 
# 417 "C:\Program Files\Microchip\xc8\v2.32\pic\include\proc\pic16f887.h"
PORTE equ 09h ;# 
# 455 "C:\Program Files\Microchip\xc8\v2.32\pic\include\proc\pic16f887.h"
PCLATH equ 0Ah ;# 
# 462 "C:\Program Files\Microchip\xc8\v2.32\pic\include\proc\pic16f887.h"
INTCON equ 0Bh ;# 
# 540 "C:\Program Files\Microchip\xc8\v2.32\pic\include\proc\pic16f887.h"
PIR1 equ 0Ch ;# 
# 596 "C:\Program Files\Microchip\xc8\v2.32\pic\include\proc\pic16f887.h"
PIR2 equ 0Dh ;# 
# 653 "C:\Program Files\Microchip\xc8\v2.32\pic\include\proc\pic16f887.h"
TMR1 equ 0Eh ;# 
# 660 "C:\Program Files\Microchip\xc8\v2.32\pic\include\proc\pic16f887.h"
TMR1L equ 0Eh ;# 
# 667 "C:\Program Files\Microchip\xc8\v2.32\pic\include\proc\pic16f887.h"
TMR1H equ 0Fh ;# 
# 674 "C:\Program Files\Microchip\xc8\v2.32\pic\include\proc\pic16f887.h"
T1CON equ 010h ;# 
# 768 "C:\Program Files\Microchip\xc8\v2.32\pic\include\proc\pic16f887.h"
TMR2 equ 011h ;# 
# 775 "C:\Program Files\Microchip\xc8\v2.32\pic\include\proc\pic16f887.h"
T2CON equ 012h ;# 
# 846 "C:\Program Files\Microchip\xc8\v2.32\pic\include\proc\pic16f887.h"
SSPBUF equ 013h ;# 
# 853 "C:\Program Files\Microchip\xc8\v2.32\pic\include\proc\pic16f887.h"
SSPCON equ 014h ;# 
# 923 "C:\Program Files\Microchip\xc8\v2.32\pic\include\proc\pic16f887.h"
CCPR1 equ 015h ;# 
# 930 "C:\Program Files\Microchip\xc8\v2.32\pic\include\proc\pic16f887.h"
CCPR1L equ 015h ;# 
# 937 "C:\Program Files\Microchip\xc8\v2.32\pic\include\proc\pic16f887.h"
CCPR1H equ 016h ;# 
# 944 "C:\Program Files\Microchip\xc8\v2.32\pic\include\proc\pic16f887.h"
CCP1CON equ 017h ;# 
# 1041 "C:\Program Files\Microchip\xc8\v2.32\pic\include\proc\pic16f887.h"
RCSTA equ 018h ;# 
# 1136 "C:\Program Files\Microchip\xc8\v2.32\pic\include\proc\pic16f887.h"
TXREG equ 019h ;# 
# 1143 "C:\Program Files\Microchip\xc8\v2.32\pic\include\proc\pic16f887.h"
RCREG equ 01Ah ;# 
# 1150 "C:\Program Files\Microchip\xc8\v2.32\pic\include\proc\pic16f887.h"
CCPR2 equ 01Bh ;# 
# 1157 "C:\Program Files\Microchip\xc8\v2.32\pic\include\proc\pic16f887.h"
CCPR2L equ 01Bh ;# 
# 1164 "C:\Program Files\Microchip\xc8\v2.32\pic\include\proc\pic16f887.h"
CCPR2H equ 01Ch ;# 
# 1171 "C:\Program Files\Microchip\xc8\v2.32\pic\include\proc\pic16f887.h"
CCP2CON equ 01Dh ;# 
# 1241 "C:\Program Files\Microchip\xc8\v2.32\pic\include\proc\pic16f887.h"
ADRESH equ 01Eh ;# 
# 1248 "C:\Program Files\Microchip\xc8\v2.32\pic\include\proc\pic16f887.h"
ADCON0 equ 01Fh ;# 
# 1349 "C:\Program Files\Microchip\xc8\v2.32\pic\include\proc\pic16f887.h"
OPTION_REG equ 081h ;# 
# 1419 "C:\Program Files\Microchip\xc8\v2.32\pic\include\proc\pic16f887.h"
TRISA equ 085h ;# 
# 1481 "C:\Program Files\Microchip\xc8\v2.32\pic\include\proc\pic16f887.h"
TRISB equ 086h ;# 
# 1543 "C:\Program Files\Microchip\xc8\v2.32\pic\include\proc\pic16f887.h"
TRISC equ 087h ;# 
# 1605 "C:\Program Files\Microchip\xc8\v2.32\pic\include\proc\pic16f887.h"
TRISD equ 088h ;# 
# 1667 "C:\Program Files\Microchip\xc8\v2.32\pic\include\proc\pic16f887.h"
TRISE equ 089h ;# 
# 1705 "C:\Program Files\Microchip\xc8\v2.32\pic\include\proc\pic16f887.h"
PIE1 equ 08Ch ;# 
# 1761 "C:\Program Files\Microchip\xc8\v2.32\pic\include\proc\pic16f887.h"
PIE2 equ 08Dh ;# 
# 1818 "C:\Program Files\Microchip\xc8\v2.32\pic\include\proc\pic16f887.h"
PCON equ 08Eh ;# 
# 1865 "C:\Program Files\Microchip\xc8\v2.32\pic\include\proc\pic16f887.h"
OSCCON equ 08Fh ;# 
# 1930 "C:\Program Files\Microchip\xc8\v2.32\pic\include\proc\pic16f887.h"
OSCTUNE equ 090h ;# 
# 1982 "C:\Program Files\Microchip\xc8\v2.32\pic\include\proc\pic16f887.h"
SSPCON2 equ 091h ;# 
# 2044 "C:\Program Files\Microchip\xc8\v2.32\pic\include\proc\pic16f887.h"
PR2 equ 092h ;# 
# 2051 "C:\Program Files\Microchip\xc8\v2.32\pic\include\proc\pic16f887.h"
SSPADD equ 093h ;# 
# 2058 "C:\Program Files\Microchip\xc8\v2.32\pic\include\proc\pic16f887.h"
SSPMSK equ 093h ;# 
# 2063 "C:\Program Files\Microchip\xc8\v2.32\pic\include\proc\pic16f887.h"
MSK equ 093h ;# 
# 2180 "C:\Program Files\Microchip\xc8\v2.32\pic\include\proc\pic16f887.h"
SSPSTAT equ 094h ;# 
# 2349 "C:\Program Files\Microchip\xc8\v2.32\pic\include\proc\pic16f887.h"
WPUB equ 095h ;# 
# 2419 "C:\Program Files\Microchip\xc8\v2.32\pic\include\proc\pic16f887.h"
IOCB equ 096h ;# 
# 2489 "C:\Program Files\Microchip\xc8\v2.32\pic\include\proc\pic16f887.h"
VRCON equ 097h ;# 
# 2559 "C:\Program Files\Microchip\xc8\v2.32\pic\include\proc\pic16f887.h"
TXSTA equ 098h ;# 
# 2645 "C:\Program Files\Microchip\xc8\v2.32\pic\include\proc\pic16f887.h"
SPBRG equ 099h ;# 
# 2707 "C:\Program Files\Microchip\xc8\v2.32\pic\include\proc\pic16f887.h"
SPBRGH equ 09Ah ;# 
# 2777 "C:\Program Files\Microchip\xc8\v2.32\pic\include\proc\pic16f887.h"
PWM1CON equ 09Bh ;# 
# 2847 "C:\Program Files\Microchip\xc8\v2.32\pic\include\proc\pic16f887.h"
ECCPAS equ 09Ch ;# 
# 2929 "C:\Program Files\Microchip\xc8\v2.32\pic\include\proc\pic16f887.h"
PSTRCON equ 09Dh ;# 
# 2973 "C:\Program Files\Microchip\xc8\v2.32\pic\include\proc\pic16f887.h"
ADRESL equ 09Eh ;# 
# 2980 "C:\Program Files\Microchip\xc8\v2.32\pic\include\proc\pic16f887.h"
ADCON1 equ 09Fh ;# 
# 3014 "C:\Program Files\Microchip\xc8\v2.32\pic\include\proc\pic16f887.h"
WDTCON equ 0105h ;# 
# 3067 "C:\Program Files\Microchip\xc8\v2.32\pic\include\proc\pic16f887.h"
CM1CON0 equ 0107h ;# 
# 3132 "C:\Program Files\Microchip\xc8\v2.32\pic\include\proc\pic16f887.h"
CM2CON0 equ 0108h ;# 
# 3197 "C:\Program Files\Microchip\xc8\v2.32\pic\include\proc\pic16f887.h"
CM2CON1 equ 0109h ;# 
# 3248 "C:\Program Files\Microchip\xc8\v2.32\pic\include\proc\pic16f887.h"
EEDATA equ 010Ch ;# 
# 3253 "C:\Program Files\Microchip\xc8\v2.32\pic\include\proc\pic16f887.h"
EEDAT equ 010Ch ;# 
# 3260 "C:\Program Files\Microchip\xc8\v2.32\pic\include\proc\pic16f887.h"
EEADR equ 010Dh ;# 
# 3267 "C:\Program Files\Microchip\xc8\v2.32\pic\include\proc\pic16f887.h"
EEDATH equ 010Eh ;# 
# 3274 "C:\Program Files\Microchip\xc8\v2.32\pic\include\proc\pic16f887.h"
EEADRH equ 010Fh ;# 
# 3281 "C:\Program Files\Microchip\xc8\v2.32\pic\include\proc\pic16f887.h"
SRCON equ 0185h ;# 
# 3338 "C:\Program Files\Microchip\xc8\v2.32\pic\include\proc\pic16f887.h"
BAUDCTL equ 0187h ;# 
# 3390 "C:\Program Files\Microchip\xc8\v2.32\pic\include\proc\pic16f887.h"
ANSEL equ 0188h ;# 
# 3452 "C:\Program Files\Microchip\xc8\v2.32\pic\include\proc\pic16f887.h"
ANSELH equ 0189h ;# 
# 3502 "C:\Program Files\Microchip\xc8\v2.32\pic\include\proc\pic16f887.h"
EECON1 equ 018Ch ;# 
# 3547 "C:\Program Files\Microchip\xc8\v2.32\pic\include\proc\pic16f887.h"
EECON2 equ 018Dh ;# 
# 55 "C:\Program Files\Microchip\xc8\v2.32\pic\include\proc\pic16f887.h"
INDF equ 00h ;# 
# 62 "C:\Program Files\Microchip\xc8\v2.32\pic\include\proc\pic16f887.h"
TMR0 equ 01h ;# 
# 69 "C:\Program Files\Microchip\xc8\v2.32\pic\include\proc\pic16f887.h"
PCL equ 02h ;# 
# 76 "C:\Program Files\Microchip\xc8\v2.32\pic\include\proc\pic16f887.h"
STATUS equ 03h ;# 
# 162 "C:\Program Files\Microchip\xc8\v2.32\pic\include\proc\pic16f887.h"
FSR equ 04h ;# 
# 169 "C:\Program Files\Microchip\xc8\v2.32\pic\include\proc\pic16f887.h"
PORTA equ 05h ;# 
# 231 "C:\Program Files\Microchip\xc8\v2.32\pic\include\proc\pic16f887.h"
PORTB equ 06h ;# 
# 293 "C:\Program Files\Microchip\xc8\v2.32\pic\include\proc\pic16f887.h"
PORTC equ 07h ;# 
# 355 "C:\Program Files\Microchip\xc8\v2.32\pic\include\proc\pic16f887.h"
PORTD equ 08h ;# 
# 417 "C:\Program Files\Microchip\xc8\v2.32\pic\include\proc\pic16f887.h"
PORTE equ 09h ;# 
# 455 "C:\Program Files\Microchip\xc8\v2.32\pic\include\proc\pic16f887.h"
PCLATH equ 0Ah ;# 
# 462 "C:\Program Files\Microchip\xc8\v2.32\pic\include\proc\pic16f887.h"
INTCON equ 0Bh ;# 
# 540 "C:\Program Files\Microchip\xc8\v2.32\pic\include\proc\pic16f887.h"
PIR1 equ 0Ch ;# 
# 596 "C:\Program Files\Microchip\xc8\v2.32\pic\include\proc\pic16f887.h"
PIR2 equ 0Dh ;# 
# 653 "C:\Program Files\Microchip\xc8\v2.32\pic\include\proc\pic16f887.h"
TMR1 equ 0Eh ;# 
# 660 "C:\Program Files\Microchip\xc8\v2.32\pic\include\proc\pic16f887.h"
TMR1L equ 0Eh ;# 
# 667 "C:\Program Files\Microchip\xc8\v2.32\pic\include\proc\pic16f887.h"
TMR1H equ 0Fh ;# 
# 674 "C:\Program Files\Microchip\xc8\v2.32\pic\include\proc\pic16f887.h"
T1CON equ 010h ;# 
# 768 "C:\Program Files\Microchip\xc8\v2.32\pic\include\proc\pic16f887.h"
TMR2 equ 011h ;# 
# 775 "C:\Program Files\Microchip\xc8\v2.32\pic\include\proc\pic16f887.h"
T2CON equ 012h ;# 
# 846 "C:\Program Files\Microchip\xc8\v2.32\pic\include\proc\pic16f887.h"
SSPBUF equ 013h ;# 
# 853 "C:\Program Files\Microchip\xc8\v2.32\pic\include\proc\pic16f887.h"
SSPCON equ 014h ;# 
# 923 "C:\Program Files\Microchip\xc8\v2.32\pic\include\proc\pic16f887.h"
CCPR1 equ 015h ;# 
# 930 "C:\Program Files\Microchip\xc8\v2.32\pic\include\proc\pic16f887.h"
CCPR1L equ 015h ;# 
# 937 "C:\Program Files\Microchip\xc8\v2.32\pic\include\proc\pic16f887.h"
CCPR1H equ 016h ;# 
# 944 "C:\Program Files\Microchip\xc8\v2.32\pic\include\proc\pic16f887.h"
CCP1CON equ 017h ;# 
# 1041 "C:\Program Files\Microchip\xc8\v2.32\pic\include\proc\pic16f887.h"
RCSTA equ 018h ;# 
# 1136 "C:\Program Files\Microchip\xc8\v2.32\pic\include\proc\pic16f887.h"
TXREG equ 019h ;# 
# 1143 "C:\Program Files\Microchip\xc8\v2.32\pic\include\proc\pic16f887.h"
RCREG equ 01Ah ;# 
# 1150 "C:\Program Files\Microchip\xc8\v2.32\pic\include\proc\pic16f887.h"
CCPR2 equ 01Bh ;# 
# 1157 "C:\Program Files\Microchip\xc8\v2.32\pic\include\proc\pic16f887.h"
CCPR2L equ 01Bh ;# 
# 1164 "C:\Program Files\Microchip\xc8\v2.32\pic\include\proc\pic16f887.h"
CCPR2H equ 01Ch ;# 
# 1171 "C:\Program Files\Microchip\xc8\v2.32\pic\include\proc\pic16f887.h"
CCP2CON equ 01Dh ;# 
# 1241 "C:\Program Files\Microchip\xc8\v2.32\pic\include\proc\pic16f887.h"
ADRESH equ 01Eh ;# 
# 1248 "C:\Program Files\Microchip\xc8\v2.32\pic\include\proc\pic16f887.h"
ADCON0 equ 01Fh ;# 
# 1349 "C:\Program Files\Microchip\xc8\v2.32\pic\include\proc\pic16f887.h"
OPTION_REG equ 081h ;# 
# 1419 "C:\Program Files\Microchip\xc8\v2.32\pic\include\proc\pic16f887.h"
TRISA equ 085h ;# 
# 1481 "C:\Program Files\Microchip\xc8\v2.32\pic\include\proc\pic16f887.h"
TRISB equ 086h ;# 
# 1543 "C:\Program Files\Microchip\xc8\v2.32\pic\include\proc\pic16f887.h"
TRISC equ 087h ;# 
# 1605 "C:\Program Files\Microchip\xc8\v2.32\pic\include\proc\pic16f887.h"
TRISD equ 088h ;# 
# 1667 "C:\Program Files\Microchip\xc8\v2.32\pic\include\proc\pic16f887.h"
TRISE equ 089h ;# 
# 1705 "C:\Program Files\Microchip\xc8\v2.32\pic\include\proc\pic16f887.h"
PIE1 equ 08Ch ;# 
# 1761 "C:\Program Files\Microchip\xc8\v2.32\pic\include\proc\pic16f887.h"
PIE2 equ 08Dh ;# 
# 1818 "C:\Program Files\Microchip\xc8\v2.32\pic\include\proc\pic16f887.h"
PCON equ 08Eh ;# 
# 1865 "C:\Program Files\Microchip\xc8\v2.32\pic\include\proc\pic16f887.h"
OSCCON equ 08Fh ;# 
# 1930 "C:\Program Files\Microchip\xc8\v2.32\pic\include\proc\pic16f887.h"
OSCTUNE equ 090h ;# 
# 1982 "C:\Program Files\Microchip\xc8\v2.32\pic\include\proc\pic16f887.h"
SSPCON2 equ 091h ;# 
# 2044 "C:\Program Files\Microchip\xc8\v2.32\pic\include\proc\pic16f887.h"
PR2 equ 092h ;# 
# 2051 "C:\Program Files\Microchip\xc8\v2.32\pic\include\proc\pic16f887.h"
SSPADD equ 093h ;# 
# 2058 "C:\Program Files\Microchip\xc8\v2.32\pic\include\proc\pic16f887.h"
SSPMSK equ 093h ;# 
# 2063 "C:\Program Files\Microchip\xc8\v2.32\pic\include\proc\pic16f887.h"
MSK equ 093h ;# 
# 2180 "C:\Program Files\Microchip\xc8\v2.32\pic\include\proc\pic16f887.h"
SSPSTAT equ 094h ;# 
# 2349 "C:\Program Files\Microchip\xc8\v2.32\pic\include\proc\pic16f887.h"
WPUB equ 095h ;# 
# 2419 "C:\Program Files\Microchip\xc8\v2.32\pic\include\proc\pic16f887.h"
IOCB equ 096h ;# 
# 2489 "C:\Program Files\Microchip\xc8\v2.32\pic\include\proc\pic16f887.h"
VRCON equ 097h ;# 
# 2559 "C:\Program Files\Microchip\xc8\v2.32\pic\include\proc\pic16f887.h"
TXSTA equ 098h ;# 
# 2645 "C:\Program Files\Microchip\xc8\v2.32\pic\include\proc\pic16f887.h"
SPBRG equ 099h ;# 
# 2707 "C:\Program Files\Microchip\xc8\v2.32\pic\include\proc\pic16f887.h"
SPBRGH equ 09Ah ;# 
# 2777 "C:\Program Files\Microchip\xc8\v2.32\pic\include\proc\pic16f887.h"
PWM1CON equ 09Bh ;# 
# 2847 "C:\Program Files\Microchip\xc8\v2.32\pic\include\proc\pic16f887.h"
ECCPAS equ 09Ch ;# 
# 2929 "C:\Program Files\Microchip\xc8\v2.32\pic\include\proc\pic16f887.h"
PSTRCON equ 09Dh ;# 
# 2973 "C:\Program Files\Microchip\xc8\v2.32\pic\include\proc\pic16f887.h"
ADRESL equ 09Eh ;# 
# 2980 "C:\Program Files\Microchip\xc8\v2.32\pic\include\proc\pic16f887.h"
ADCON1 equ 09Fh ;# 
# 3014 "C:\Program Files\Microchip\xc8\v2.32\pic\include\proc\pic16f887.h"
WDTCON equ 0105h ;# 
# 3067 "C:\Program Files\Microchip\xc8\v2.32\pic\include\proc\pic16f887.h"
CM1CON0 equ 0107h ;# 
# 3132 "C:\Program Files\Microchip\xc8\v2.32\pic\include\proc\pic16f887.h"
CM2CON0 equ 0108h ;# 
# 3197 "C:\Program Files\Microchip\xc8\v2.32\pic\include\proc\pic16f887.h"
CM2CON1 equ 0109h ;# 
# 3248 "C:\Program Files\Microchip\xc8\v2.32\pic\include\proc\pic16f887.h"
EEDATA equ 010Ch ;# 
# 3253 "C:\Program Files\Microchip\xc8\v2.32\pic\include\proc\pic16f887.h"
EEDAT equ 010Ch ;# 
# 3260 "C:\Program Files\Microchip\xc8\v2.32\pic\include\proc\pic16f887.h"
EEADR equ 010Dh ;# 
# 3267 "C:\Program Files\Microchip\xc8\v2.32\pic\include\proc\pic16f887.h"
EEDATH equ 010Eh ;# 
# 3274 "C:\Program Files\Microchip\xc8\v2.32\pic\include\proc\pic16f887.h"
EEADRH equ 010Fh ;# 
# 3281 "C:\Program Files\Microchip\xc8\v2.32\pic\include\proc\pic16f887.h"
SRCON equ 0185h ;# 
# 3338 "C:\Program Files\Microchip\xc8\v2.32\pic\include\proc\pic16f887.h"
BAUDCTL equ 0187h ;# 
# 3390 "C:\Program Files\Microchip\xc8\v2.32\pic\include\proc\pic16f887.h"
ANSEL equ 0188h ;# 
# 3452 "C:\Program Files\Microchip\xc8\v2.32\pic\include\proc\pic16f887.h"
ANSELH equ 0189h ;# 
# 3502 "C:\Program Files\Microchip\xc8\v2.32\pic\include\proc\pic16f887.h"
EECON1 equ 018Ch ;# 
# 3547 "C:\Program Files\Microchip\xc8\v2.32\pic\include\proc\pic16f887.h"
EECON2 equ 018Dh ;# 
	debug_source C
	FNCALL	_main,_declarePort
	FNCALL	_main,_sangDan
	FNCALL	_main,_sangDon
	FNCALL	_main,_sangDuoi
	FNROOT	_main
	global	_PORTD
_PORTD	set	0x8
	global	_PORTC
_PORTC	set	0x7
	global	_WPUB
_WPUB	set	0x95
	global	_TRISB
_TRISB	set	0x86
	global	_TRISC
_TRISC	set	0x87
	global	_TRISD
_TRISD	set	0x88
	global	_nRBPU
_nRBPU	set	0x40F
	global	_ANSELH
_ANSELH	set	0x189
	global	_ANSEL
_ANSEL	set	0x188
; #config settings
	config pad_punits      = on
	config apply_mask      = off
	config ignore_cmsgs    = off
	config default_configs = off
	config default_idlocs  = off
	config FOSC = "HS"
	config WDTE = "OFF"
	config PWRTE = "OFF"
	config MCLRE = "ON"
	config CP = "OFF"
	config CPD = "OFF"
	config BOREN = "OFF"
	config IESO = "OFF"
	config FCMEN = "OFF"
	config LVP = "OFF"
	config BOR4V = "BOR40V"
	config WRT = "OFF"
	file	"out\template.s"
	line	#
psect cinit,class=CODE,delta=2
global start_initialization
start_initialization:

global __initialization
__initialization:
psect cinit,class=CODE,delta=2,merge=1
global end_of_initialization,__end_of__initialization

;End of C runtime variable initialization code

end_of_initialization:
__end_of__initialization:
clrf status
ljmp _main	;jump to C main() function
psect	cstackCOMMON,class=COMMON,space=1,noexec
global __pcstackCOMMON
__pcstackCOMMON:
?_declarePort:	; 1 bytes @ 0x0
??_declarePort:	; 1 bytes @ 0x0
?_sangDuoi:	; 1 bytes @ 0x0
?_sangDan:	; 1 bytes @ 0x0
?_sangDon:	; 1 bytes @ 0x0
?_main:	; 1 bytes @ 0x0
	global	sangDuoi@n
sangDuoi@n:	; 2 bytes @ 0x0
	global	sangDan@n
sangDan@n:	; 2 bytes @ 0x0
	global	sangDon@n
sangDon@n:	; 2 bytes @ 0x0
	ds	2
??_sangDuoi:	; 1 bytes @ 0x2
??_sangDan:	; 1 bytes @ 0x2
??_sangDon:	; 1 bytes @ 0x2
	ds	2
	global	sangDan@index
sangDan@index:	; 1 bytes @ 0x4
	global	sangDon@hold
sangDon@hold:	; 1 bytes @ 0x4
	ds	1
	global	sangDuoi@score
sangDuoi@score:	; 1 bytes @ 0x5
	global	sangDan@hold
sangDan@hold:	; 1 bytes @ 0x5
	global	sangDon@sum
sangDon@sum:	; 1 bytes @ 0x5
	ds	1
	global	sangDon@i
sangDon@i:	; 1 bytes @ 0x6
	ds	1
	global	sangDon@j
sangDon@j:	; 1 bytes @ 0x7
	ds	1
??_main:	; 1 bytes @ 0x8
;!
;!Data Sizes:
;!    Strings     0
;!    Constant    0
;!    Data        0
;!    BSS         0
;!    Persistent  0
;!    Stack       0
;!
;!Auto Spaces:
;!    Space          Size  Autos    Used
;!    COMMON           14      8       8
;!    BANK0            80      0       0
;!    BANK1            80      0       0
;!    BANK3            96      0       0
;!    BANK2            96      0       0

;!
;!Pointer List with Targets:
;!
;!    None.


;!
;!Critical Paths under _main in COMMON
;!
;!    _main->_sangDon
;!
;!Critical Paths under _main in BANK0
;!
;!    None.
;!
;!Critical Paths under _main in BANK1
;!
;!    None.
;!
;!Critical Paths under _main in BANK3
;!
;!    None.
;!
;!Critical Paths under _main in BANK2
;!
;!    None.

;;
;;Main: autosize = 0, tempsize = 0, incstack = 0, save=0
;;

;!
;!Call Graph Tables:
;!
;! ---------------------------------------------------------------------------------
;! (Depth) Function   	        Calls       Base Space   Used Autos Params    Refs
;! ---------------------------------------------------------------------------------
;! (0) _main                                                 0     0      0     665
;!                        _declarePort
;!                            _sangDan
;!                            _sangDon
;!                           _sangDuoi
;! ---------------------------------------------------------------------------------
;! (1) _sangDuoi                                             6     4      2     175
;!                                              0 COMMON     6     4      2
;! ---------------------------------------------------------------------------------
;! (1) _sangDon                                              8     6      2     268
;!                                              0 COMMON     8     6      2
;! ---------------------------------------------------------------------------------
;! (1) _sangDan                                              6     4      2     222
;!                                              0 COMMON     6     4      2
;! ---------------------------------------------------------------------------------
;! (1) _declarePort                                          0     0      0       0
;! ---------------------------------------------------------------------------------
;! Estimated maximum stack depth 1
;! ---------------------------------------------------------------------------------
;!
;! Call Graph Graphs:
;!
;! _main (ROOT)
;!   _declarePort
;!   _sangDan
;!   _sangDon
;!   _sangDuoi
;!

;! Address spaces:

;!Name               Size   Autos  Total    Cost      Usage
;!BITCOMMON            E      0       0       0        0.0%
;!EEDATA             100      0       0       0        0.0%
;!NULL                 0      0       0       0        0.0%
;!CODE                 0      0       0       0        0.0%
;!COMMON               E      8       8       1       57.1%
;!BITSFR0              0      0       0       1        0.0%
;!SFR0                 0      0       0       1        0.0%
;!BITSFR1              0      0       0       2        0.0%
;!SFR1                 0      0       0       2        0.0%
;!STACK                0      0       0       2        0.0%
;!ABS                  0      0       0       3        0.0%
;!BITBANK0            50      0       0       4        0.0%
;!BITSFR3              0      0       0       4        0.0%
;!SFR3                 0      0       0       4        0.0%
;!BANK0               50      0       0       5        0.0%
;!BITSFR2              0      0       0       5        0.0%
;!SFR2                 0      0       0       5        0.0%
;!BITBANK1            50      0       0       6        0.0%
;!BANK1               50      0       0       7        0.0%
;!BITBANK3            60      0       0       8        0.0%
;!BANK3               60      0       0       9        0.0%
;!BITBANK2            60      0       0      10        0.0%
;!BANK2               60      0       0      11        0.0%
;!DATA                 0      0       0      12        0.0%

	global	_main

;; *************** function _main *****************
;; Defined at:
;;		line 111 in file "./main.c"
;; Parameters:    Size  Location     Type
;;		None
;; Auto vars:     Size  Location     Type
;;		None
;; Return value:  Size  Location     Type
;;                  1    wreg      void 
;; Registers used:
;;		wreg, status,2, status,0, pclath, cstack
;; Tracked objects:
;;		On entry : B00/0
;;		On exit  : 0/0
;;		Unchanged: 0/0
;; Data sizes:     COMMON   BANK0   BANK1   BANK3   BANK2
;;      Params:         0       0       0       0       0
;;      Locals:         0       0       0       0       0
;;      Temps:          0       0       0       0       0
;;      Totals:         0       0       0       0       0
;;Total ram usage:        0 bytes
;; Hardware stack levels required when called: 1
;; This function calls:
;;		_declarePort
;;		_sangDan
;;		_sangDon
;;		_sangDuoi
;; This function is called by:
;;		Startup code after reset
;; This function uses a non-reentrant model
;;
psect	maintext,global,class=CODE,delta=2,split=1,group=0
	file	"./main.c"
	line	111
global __pmaintext
__pmaintext:	;psect for function _main
psect	maintext
	file	"./main.c"
	line	111
	global	__size_of_main
	__size_of_main	equ	__end_of_main-_main
	
_main:	
;incstack = 0
	callstack 7
; Regs used in _main: [wreg+status,2+status,0+pclath+cstack]
	line	112
	
l778:	
	fcall	_declarePort
	line	113
	
l70:	
	line	114
	movlw	01h
	movwf	(sangDuoi@n)
	movlw	0
	movwf	((sangDuoi@n))+1
	fcall	_sangDuoi
	line	115
	movlw	01h
	movwf	(sangDan@n)
	movlw	0
	movwf	((sangDan@n))+1
	fcall	_sangDan
	line	116
	movlw	01h
	movwf	(sangDon@n)
	movlw	0
	movwf	((sangDon@n))+1
	fcall	_sangDon
	goto	l70
	global	start
	ljmp	start
	callstack 0
	line	125
GLOBAL	__end_of_main
	__end_of_main:
	signat	_main,89
	global	_sangDuoi

;; *************** function _sangDuoi *****************
;; Defined at:
;;		line 40 in file "./main.c"
;; Parameters:    Size  Location     Type
;;  n               2    0[COMMON] unsigned int 
;; Auto vars:     Size  Location     Type
;;  score           1    5[COMMON] unsigned char 
;; Return value:  Size  Location     Type
;;                  1    wreg      void 
;; Registers used:
;;		wreg, status,2, status,0
;; Tracked objects:
;;		On entry : 0/0
;;		On exit  : 0/0
;;		Unchanged: 0/0
;; Data sizes:     COMMON   BANK0   BANK1   BANK3   BANK2
;;      Params:         2       0       0       0       0
;;      Locals:         1       0       0       0       0
;;      Temps:          3       0       0       0       0
;;      Totals:         6       0       0       0       0
;;Total ram usage:        6 bytes
;; Hardware stack levels used: 1
;; This function calls:
;;		Nothing
;; This function is called by:
;;		_main
;;		_processRbFirst
;; This function uses a non-reentrant model
;;
psect	text1,local,class=CODE,delta=2,merge=1,group=0
	line	40
global __ptext1
__ptext1:	;psect for function _sangDuoi
psect	text1
	file	"./main.c"
	line	40
	global	__size_of_sangDuoi
	__size_of_sangDuoi	equ	__end_of_sangDuoi-_sangDuoi
	
_sangDuoi:	
;incstack = 0
	callstack 7
; Regs used in _sangDuoi: [wreg+status,2+status,0]
	line	41
	
l702:	
	goto	l718
	line	42
	
l704:	
	bcf	status, 5	;RP0=0, select bank0
	bcf	status, 6	;RP1=0, select bank0
	clrf	(7)	;volatile
	line	43
	
l706:	
	asmopt push
asmopt off
movlw	39
movwf	((??_sangDuoi+0)+0+1),f
	movlw	245
movwf	((??_sangDuoi+0)+0),f
	u207:
decfsz	((??_sangDuoi+0)+0),f
	goto	u207
	decfsz	((??_sangDuoi+0)+0+1),f
	goto	u207
asmopt pop

	line	44
	
l708:	
	clrf	(sangDuoi@score)
	line	45
	goto	l28
	line	46
	
l710:	
	incf	(sangDuoi@score),w
	movwf	(??_sangDuoi+0)+0
	movlw	080h
	movwf	(??_sangDuoi+1)+0
	movlw	0
	movwf	(??_sangDuoi+1)+0+1
	goto	u114
u115:
	rlf	(??_sangDuoi+1)+1,w
	rrf	(??_sangDuoi+1)+1,f
	rrf	(??_sangDuoi+1)+0,f
u114:
	decfsz	(??_sangDuoi+0)+0,f
	goto	u115
	movf	0+(??_sangDuoi+1)+0,w
	bcf	status, 5	;RP0=0, select bank0
	bcf	status, 6	;RP1=0, select bank0
	movwf	(8)	;volatile
	line	47
	
l712:	
	asmopt push
asmopt off
movlw	39
movwf	((??_sangDuoi+0)+0+1),f
	movlw	245
movwf	((??_sangDuoi+0)+0),f
	u217:
decfsz	((??_sangDuoi+0)+0),f
	goto	u217
	decfsz	((??_sangDuoi+0)+0+1),f
	goto	u217
asmopt pop

	line	48
	
l714:	
	movlw	low(01h)
	movwf	(??_sangDuoi+0)+0
	movf	(??_sangDuoi+0)+0,w
	addwf	(sangDuoi@score),f
	line	49
	
l28:	
	line	45
	movlw	low(08h)
	subwf	(sangDuoi@score),w
	skipc
	goto	u121
	goto	u120
u121:
	goto	l710
u120:
	line	50
	
l716:	
	movlw	01h
	subwf	(sangDuoi@n),f
	movlw	0
	skipc
	decf	(sangDuoi@n+1),f
	subwf	(sangDuoi@n+1),f
	line	41
	
l718:	
	movf	((sangDuoi@n)),w
iorwf	((sangDuoi@n+1)),w
	btfss	status,2
	goto	u131
	goto	u130
u131:
	goto	l704
u130:
	line	52
	
l32:	
	return
	callstack 0
GLOBAL	__end_of_sangDuoi
	__end_of_sangDuoi:
	signat	_sangDuoi,4217
	global	_sangDon

;; *************** function _sangDon *****************
;; Defined at:
;;		line 71 in file "./main.c"
;; Parameters:    Size  Location     Type
;;  n               2    0[COMMON] unsigned int 
;; Auto vars:     Size  Location     Type
;;  j               1    7[COMMON] unsigned char 
;;  i               1    6[COMMON] unsigned char 
;;  sum             1    5[COMMON] unsigned char 
;;  hold            1    4[COMMON] unsigned char 
;; Return value:  Size  Location     Type
;;                  1    wreg      void 
;; Registers used:
;;		wreg, status,2, status,0
;; Tracked objects:
;;		On entry : 0/0
;;		On exit  : 0/0
;;		Unchanged: 0/0
;; Data sizes:     COMMON   BANK0   BANK1   BANK3   BANK2
;;      Params:         2       0       0       0       0
;;      Locals:         4       0       0       0       0
;;      Temps:          2       0       0       0       0
;;      Totals:         8       0       0       0       0
;;Total ram usage:        8 bytes
;; Hardware stack levels used: 1
;; This function calls:
;;		Nothing
;; This function is called by:
;;		_main
;;		_processRbSecond
;; This function uses a non-reentrant model
;;
psect	text2,local,class=CODE,delta=2,merge=1,group=0
	line	71
global __ptext2
__ptext2:	;psect for function _sangDon
psect	text2
	file	"./main.c"
	line	71
	global	__size_of_sangDon
	__size_of_sangDon	equ	__end_of_sangDon-_sangDon
	
_sangDon:	
;incstack = 0
	callstack 7
; Regs used in _sangDon: [wreg+status,2+status,0]
	line	72
	
l738:	
	goto	l768
	line	73
	
l740:	
	bcf	status, 5	;RP0=0, select bank0
	bcf	status, 6	;RP1=0, select bank0
	clrf	(8)	;volatile
	line	74
	
l742:	
	asmopt push
asmopt off
movlw	39
movwf	((??_sangDon+0)+0+1),f
	movlw	245
movwf	((??_sangDon+0)+0),f
	u227:
decfsz	((??_sangDon+0)+0),f
	goto	u227
	decfsz	((??_sangDon+0)+0+1),f
	goto	u227
asmopt pop

	line	75
	
l744:	
	clrf	(sangDon@sum)
	
l746:	
	clrf	(sangDon@i)
	
l748:	
	movlw	low(080h)
	movwf	(??_sangDon+0)+0
	movf	(??_sangDon+0)+0,w
	movwf	(sangDon@hold)
	line	76
	goto	l764
	line	77
	
l750:	
	clrf	(sangDon@j)
	line	78
	goto	l758
	line	79
	
l752:	
	movf	(sangDon@hold),w
	movwf	(??_sangDon+0)+0
	incf	(sangDon@j),w
	goto	u164
u165:
	clrc
	rrf	(??_sangDon+0)+0,f
u164:
	addlw	-1
	skipz
	goto	u165
	movf	0+(??_sangDon+0)+0,w
	iorwf	(sangDon@sum),w
	bcf	status, 5	;RP0=0, select bank0
	bcf	status, 6	;RP1=0, select bank0
	movwf	(8)	;volatile
	line	80
	
l754:	
	asmopt push
asmopt off
movlw	39
movwf	((??_sangDon+0)+0+1),f
	movlw	245
movwf	((??_sangDon+0)+0),f
	u237:
decfsz	((??_sangDon+0)+0),f
	goto	u237
	decfsz	((??_sangDon+0)+0+1),f
	goto	u237
asmopt pop

	line	81
	
l756:	
	movlw	low(01h)
	movwf	(??_sangDon+0)+0
	movf	(??_sangDon+0)+0,w
	addwf	(sangDon@j),f
	line	78
	
l758:	
	movlw	0
	movwf	(??_sangDon+0)+0+1
	movf	(sangDon@i),w
	sublw	08h
	movwf	(??_sangDon+0)+0
	skipc
	decf	(??_sangDon+0)+0+1,f
	movf	1+(??_sangDon+0)+0,w
	xorlw	80h
	sublw	080h
	skipz
	goto	u175
	movf	0+(??_sangDon+0)+0,w
	subwf	(sangDon@j),w
u175:

	skipc
	goto	u171
	goto	u170
u171:
	goto	l752
u170:
	line	83
	
l760:	
	bcf	status, 5	;RP0=0, select bank0
	bcf	status, 6	;RP1=0, select bank0
	movf	(8),w	;volatile
	movwf	(??_sangDon+0)+0
	movf	(??_sangDon+0)+0,w
	movwf	(sangDon@sum)
	line	84
	
l762:	
	movlw	low(01h)
	movwf	(??_sangDon+0)+0
	movf	(??_sangDon+0)+0,w
	addwf	(sangDon@i),f
	line	76
	
l764:	
	movlw	low(08h)
	subwf	(sangDon@i),w
	skipc
	goto	u181
	goto	u180
u181:
	goto	l750
u180:
	line	86
	
l766:	
	movlw	01h
	subwf	(sangDon@n),f
	movlw	0
	skipc
	decf	(sangDon@n+1),f
	subwf	(sangDon@n+1),f
	line	72
	
l768:	
	movf	((sangDon@n)),w
iorwf	((sangDon@n+1)),w
	btfss	status,2
	goto	u191
	goto	u190
u191:
	goto	l740
u190:
	line	88
	
l53:	
	return
	callstack 0
GLOBAL	__end_of_sangDon
	__end_of_sangDon:
	signat	_sangDon,4217
	global	_sangDan

;; *************** function _sangDan *****************
;; Defined at:
;;		line 54 in file "./main.c"
;; Parameters:    Size  Location     Type
;;  n               2    0[COMMON] unsigned int 
;; Auto vars:     Size  Location     Type
;;  hold            1    5[COMMON] unsigned char 
;;  index           1    4[COMMON] unsigned char 
;; Return value:  Size  Location     Type
;;                  1    wreg      void 
;; Registers used:
;;		wreg, status,2, status,0
;; Tracked objects:
;;		On entry : 0/0
;;		On exit  : 0/0
;;		Unchanged: 0/0
;; Data sizes:     COMMON   BANK0   BANK1   BANK3   BANK2
;;      Params:         2       0       0       0       0
;;      Locals:         2       0       0       0       0
;;      Temps:          2       0       0       0       0
;;      Totals:         6       0       0       0       0
;;Total ram usage:        6 bytes
;; Hardware stack levels used: 1
;; This function calls:
;;		Nothing
;; This function is called by:
;;		_main
;;		_processRbSecond
;; This function uses a non-reentrant model
;;
psect	text3,local,class=CODE,delta=2,merge=1,group=0
	line	54
global __ptext3
__ptext3:	;psect for function _sangDan
psect	text3
	file	"./main.c"
	line	54
	global	__size_of_sangDan
	__size_of_sangDan	equ	__end_of_sangDan-_sangDan
	
_sangDan:	
;incstack = 0
	callstack 7
; Regs used in _sangDan: [wreg+status,2+status,0]
	line	55
	
l720:	
	goto	l736
	line	56
	
l722:	
	clrf	(sangDan@index)
	line	57
	
l724:	
	movlw	low(080h)
	movwf	(??_sangDan+0)+0
	movf	(??_sangDan+0)+0,w
	movwf	(sangDan@hold)
	line	58
	
l726:	
	bcf	status, 5	;RP0=0, select bank0
	bcf	status, 6	;RP1=0, select bank0
	clrf	(7)	;volatile
	line	59
	asmopt push
asmopt off
movlw	39
movwf	((??_sangDan+0)+0+1),f
	movlw	245
movwf	((??_sangDan+0)+0),f
	u247:
decfsz	((??_sangDan+0)+0),f
	goto	u247
	decfsz	((??_sangDan+0)+0+1),f
	goto	u247
asmopt pop

	line	60
	goto	l37
	line	61
	
l728:	
	movf	(sangDan@hold),w
	bcf	status, 5	;RP0=0, select bank0
	bcf	status, 6	;RP1=0, select bank0
	movwf	(8)	;volatile
	line	62
	asmopt push
asmopt off
movlw	39
movwf	((??_sangDan+0)+0+1),f
	movlw	245
movwf	((??_sangDan+0)+0),f
	u257:
decfsz	((??_sangDan+0)+0),f
	goto	u257
	decfsz	((??_sangDan+0)+0+1),f
	goto	u257
asmopt pop

	line	63
	
l730:	
	movf	(sangDan@hold),w
	movwf	(??_sangDan+0)+0
	clrc
	rrf	(??_sangDan+0)+0,w
	iorwf	(sangDan@hold),w
	movwf	(??_sangDan+1)+0
	movf	(??_sangDan+1)+0,w
	movwf	(sangDan@hold)
	line	64
	
l732:	
	movlw	low(01h)
	movwf	(??_sangDan+0)+0
	movf	(??_sangDan+0)+0,w
	addwf	(sangDan@index),f
	line	65
	
l37:	
	line	60
	movlw	low(08h)
	subwf	(sangDan@index),w
	skipc
	goto	u141
	goto	u140
u141:
	goto	l728
u140:
	line	66
	
l734:	
	line	67
	movlw	01h
	subwf	(sangDan@n),f
	movlw	0
	skipc
	decf	(sangDan@n+1),f
	subwf	(sangDan@n+1),f
	line	55
	
l736:	
	movf	((sangDan@n)),w
iorwf	((sangDan@n+1)),w
	btfss	status,2
	goto	u151
	goto	u150
u151:
	goto	l722
u150:
	line	69
	
l41:	
	return
	callstack 0
GLOBAL	__end_of_sangDan
	__end_of_sangDan:
	signat	_sangDan,4217
	global	_declarePort

;; *************** function _declarePort *****************
;; Defined at:
;;		line 30 in file "./main.c"
;; Parameters:    Size  Location     Type
;;		None
;; Auto vars:     Size  Location     Type
;;		None
;; Return value:  Size  Location     Type
;;                  1    wreg      void 
;; Registers used:
;;		wreg, status,2
;; Tracked objects:
;;		On entry : 0/0
;;		On exit  : 0/0
;;		Unchanged: 0/0
;; Data sizes:     COMMON   BANK0   BANK1   BANK3   BANK2
;;      Params:         0       0       0       0       0
;;      Locals:         0       0       0       0       0
;;      Temps:          0       0       0       0       0
;;      Totals:         0       0       0       0       0
;;Total ram usage:        0 bytes
;; Hardware stack levels used: 1
;; This function calls:
;;		Nothing
;; This function is called by:
;;		_main
;; This function uses a non-reentrant model
;;
psect	text4,local,class=CODE,delta=2,merge=1,group=0
	line	30
global __ptext4
__ptext4:	;psect for function _declarePort
psect	text4
	file	"./main.c"
	line	30
	global	__size_of_declarePort
	__size_of_declarePort	equ	__end_of_declarePort-_declarePort
	
_declarePort:	
;incstack = 0
	callstack 7
; Regs used in _declarePort: [wreg+status,2]
	line	31
	
l604:	
	bsf	status, 5	;RP0=1, select bank3
	bsf	status, 6	;RP1=1, select bank3
	clrf	(393)^0180h	;volatile
	clrf	(392)^0180h	;volatile
	line	32
	bsf	status, 5	;RP0=1, select bank1
	bcf	status, 6	;RP1=0, select bank1
	clrf	(136)^080h	;volatile
	line	33
	clrf	(135)^080h	;volatile
	line	34
	
l606:	
	movlw	low(03h)
	movwf	(149)^080h	;volatile
	movwf	(134)^080h	;volatile
	line	35
	
l608:	
	bcf	status, 5	;RP0=0, select bank0
	bcf	status, 6	;RP1=0, select bank0
	clrf	(7)	;volatile
	line	36
	
l610:	
	clrf	(8)	;volatile
	line	37
	
l612:	
	bsf	status, 5	;RP0=1, select bank1
	bcf	status, 6	;RP1=0, select bank1
	bcf	(1039/8)^080h,(1039)&7	;volatile
	line	38
	
l23:	
	return
	callstack 0
GLOBAL	__end_of_declarePort
	__end_of_declarePort:
	signat	_declarePort,89
global	___latbits
___latbits	equ	2
	global	btemp
	btemp set 07Eh

	DABS	1,126,2	;btemp
	global	wtemp0
	wtemp0 set btemp+0
	end
