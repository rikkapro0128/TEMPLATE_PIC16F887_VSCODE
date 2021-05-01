
#ifndef	_HTC_H_
#warning Header file pic1671x.h included directly. Use #include <htc.h> instead.
#endif

/* 
 *	Header file for the Microchip :
 *	PIC 16C71 chip
 *	PIC 16C710 chip
 *	PIC 16C711 chip
 *	Midrange Micrcontrollers
 */

volatile unsigned char INDF	__at(0x00);
volatile unsigned char TMR0	__at(0x01);
volatile unsigned char PCL	__at(0x02);
volatile unsigned char STATUS	__at(0x03);
volatile	unsigned char	FSR	__at(0x04);
volatile unsigned char PORTA	__at(0x05);
volatile unsigned char PORTB	__at(0x06);
volatile unsigned char ADCON0	__at(0x08);
volatile unsigned char ADRES	__at(0x09);
volatile	unsigned char	PCLATH	__at(0x0A);
volatile unsigned char INTCON	__at(0x0B);

volatile	unsigned char	     	OPTION	__at(0x81);
volatile	unsigned char      	TRISA	__at(0x85);
volatile	unsigned char      	TRISB	__at(0x86);
volatile unsigned char      	ADCON1	__at(0x88);

#ifndef _16C71
volatile unsigned char      	PCON	__at(0x87);

/*	PCON bits	*/
volatile       __bit	POR	__at(0x87*8+1);
volatile       __bit	BOR	__at(0x87*8+0);
#endif

/*	STATUS bits	*/
volatile __bit	RP0	__at(0x03*8+5);
volatile __bit 	TO	__at(0x03*8+4);
volatile __bit 	PD	__at(0x03*8+3);
volatile __bit	ZERO	__at(0x03*8+2);
volatile __bit	DC	__at(0x03*8+1);
volatile __bit	CARRY	__at(0x03*8+0);

/*      PORTA bits      */
volatile __bit	RA4	__at(0x05*8+4);
volatile __bit	RA3	__at(0x05*8+3);
volatile __bit	RA2	__at(0x05*8+2);
volatile __bit	RA1	__at(0x05*8+1);
volatile __bit	RA0	__at(0x05*8+0);

/*      PORTB bits      */
volatile __bit	RB7	__at(0x06*8+7);
volatile __bit	RB6	__at(0x06*8+6);
volatile __bit	RB5	__at(0x06*8+5);
volatile __bit	RB4	__at(0x06*8+4);
volatile __bit	RB3	__at(0x06*8+3);
volatile __bit	RB2	__at(0x06*8+2);
volatile __bit	RB1	__at(0x06*8+1);
volatile __bit	RB0	__at(0x06*8+0);

/*	ADCON0 bits */
volatile __bit	ADCS1	__at(0x08*8+7);
volatile __bit	ADCS0	__at(0x08*8+6);
volatile __bit	CHS1	__at(0x08*8+4);
volatile __bit	CHS0	__at(0x08*8+3);
volatile __bit	ADGO	__at(0x08*8+2);
// Alternate definition for compatibility with other devices
volatile __bit	GODONE	__at(0x08*8+2);
volatile __bit	ADIF	__at(0x08*8+1);
volatile __bit	ADON	__at(0x08*8+0);

/*	INTCON bits */
volatile __bit	GIE	__at(0x0B*8+7);
volatile __bit	ADIE	__at(0x0B*8+6);
volatile __bit	T0IE	__at(0x0B*8+5);
volatile __bit	INTE	__at(0x0B*8+4);
volatile __bit	RBIE	__at(0x0B*8+3);
volatile __bit	T0IF	__at(0x0B*8+2);
volatile __bit	INTF	__at(0x0B*8+1);
volatile __bit	RBIF	__at(0x0B*8+0);

/*	OPTION bits	*/
volatile	__bit	RBPU	__at(0x81*8+7);
volatile	__bit	INTEDG	__at(0x81*8+6);
volatile	__bit	T0CS	__at(0x81*8+5);
volatile	__bit	T0SE	__at(0x81*8+4);
volatile	__bit	PSA	__at(0x81*8+3);
volatile	__bit	PS2	__at(0x81*8+2);
volatile	__bit	PS1	__at(0x81*8+1);
volatile	__bit	PS0	__at(0x81*8+0);

/*      TRISA bits      */
volatile       __bit	TRISA5	__at(0x85*8+5);
volatile       __bit	TRISA4	__at(0x85*8+4);
volatile       __bit	TRISA3	__at(0x85*8+3);
volatile       __bit	TRISA2	__at(0x85*8+2);
volatile       __bit	TRISA1	__at(0x85*8+1);
volatile       __bit	TRISA0	__at(0x85*8+0);

/*      TRISB bits      */
volatile       __bit	TRISB7	__at(0x86*8+7);
volatile       __bit	TRISB6	__at(0x86*8+6);
volatile       __bit	TRISB5	__at(0x86*8+5);
volatile       __bit	TRISB4	__at(0x86*8+4);
volatile       __bit	TRISB3	__at(0x86*8+3);
volatile       __bit	TRISB2	__at(0x86*8+2);
volatile       __bit	TRISB1	__at(0x86*8+1);
volatile       __bit	TRISB0	__at(0x86*8+0);

/*	ADCON1 bits	*/
volatile       __bit	PCFG1	__at(0x88*8+1);
volatile       __bit	PCFG0	__at(0x88*8+0);

#define CONFIG_ADDR	0x2007

