/*
 * File:   newmain.c
 * Author: thinh
 *
 * Created on April 2s6, 2021, 7:57 AM
 */
#pragma config FOSC = HS        // Oscillator Selection bits (HS oscillator: High-speed crystal/resonator on RA6/OSC2/CLKOUT and RA7/OSC1/CLKIN)
#pragma config WDTE = OFF       // Watchdog Timer Enable bit (WDT disabled and can be enabled by SWDTEN bit of the WDTCON register)
#pragma config PWRTE = OFF      // Power-up Timer Enable bit (PWRT disabled)
#pragma config MCLRE = ON       // RE3/MCLR pin function select bit (RE3/MCLR pin function is MCLR)
#pragma config CP = OFF         // Code Protection bit (Program memory code protection is disabled)
#pragma config CPD = OFF        // Data Code Protection bit (Data memory code protection is disabled)
#pragma config BOREN = OFF      // Brown Out Reset Selection bits (BOR disabled)
#pragma config IESO = OFF       // Internal External Switchover bit (Internal/External Switchover mode is disabled)
#pragma config FCMEN = OFF      // Fail-Safe Clock Monitor Enabled bit (Fail-Safe Clock Monitor is disabled)
#pragma config LVP = OFF        // Low Voltage Programming Enable bit (RB3 pin has digital I/O, HV on MCLR must be used for programming)

// CONFIG2
#pragma config BOR4V = BOR40V   // Brown-out Reset Selection bit (Brown-out Reset set to 4.0V)
#pragma config WRT = OFF        // Flash Program Memory Self Write Enable bits (Write protection off)

// #pragma config statements should precede project file includes.
// Use project enums instead of #define for ON and OFF.

#define _XTAL_FREQ 4000000
#include <xc.h>
#define timeTest 30 // declare time delay 
// #define timeFlash 300 // declare time delay 

void declarePort() { // khai bao port
    ANSEL = ANSELH = 0;
    TRISD = 0;
    TRISC = 0;
    TRISB = WPUB = 0x03;
    PORTC = 0;
    PORTD = 0;
    nRBPU = 0;
}

void sangDuoi(unsigned int n) {
    while(n > 0) {
        PORTC = 0;
        __delay_ms(timeTest);
        unsigned char score = 0;
        while(score < 8) {
            PORTD = (0x80 >> score);
            __delay_ms(timeTest);
            score++;
        }
        n--;
    }
}

void sangDan(unsigned int n) {
    while(n > 0) {
        unsigned char index = 0;
        unsigned char hold = 0x80;
        PORTC = 0;
        __delay_ms(timeTest);
        while(index < 8) {
            PORTD = hold;
            __delay_ms(timeTest);
            hold = (hold >> 1) | hold;
            index++;
        }
        hold = 0x80;
        n--;
    }
}

void sangDon(unsigned int n) {
     while(n > 0) {
        PORTD = 0;
        __delay_ms(timeTest);
        unsigned char sum = 0x00, i = 0, j, hold = 0x80;
        while(i < 8) {
            j = 0;
            while(j < (8 - i)) {
                PORTD = (hold >> j) | sum;
                __delay_ms(timeTest);
                j++;
            }
            sum = PORTD;
            i++;
        }
        n--;
    }
}

void flashLed(unsigned int n) {
    while(n--) {
        PORTD = 0xff;
        __delay_ms(timeTest);
        PORTD = 0;
        __delay_ms(timeTest);
    }
}

void processRbFirst() {
    flashLed(4);
    sangDuoi(2);
    PORTD = 0;
}

void processRbSecond() {
    sangDan(1);
    sangDon(2);
    PORTD = 0;
}

void main(void) {
    declarePort();
    while(1) {
        sangDuoi(1);
        sangDan(1);
        sangDon(1);
        // if(!RB0) {
        //     while(!RB0);
        //     processRbFirst();
        // }else if(!RB1) {
        //     while(!RB1);
        //     processRbSecond();
        // }
    }
}

    