#include "HEADER.h"
#include <stdio.h>
#include <stdlib.h>

int main() {  
    TRISA = 0x00;
    TRISCbits.RC1 = 1;
    
    while(1){
        if(PORTCbits.RC1 == 0){
            PORTA = 0x00;
        }else{
        PORTA = 0b10111110;     // 0
        __delay_ms(1000);
        PORTA = 0b10100000;     // 1
        __delay_ms(1000);
        PORTA = 0b01110110;     // 2
        __delay_ms(1000);
        PORTA = 0b11110010;     // 3
        __delay_ms(1000);
        PORTA = 0b11101000;     // 4
        __delay_ms(1000);
        PORTA = 0b11011010;     // 5
        __delay_ms(1000);
        PORTA = 0b11011110;     // 6
        __delay_ms(1000);
        PORTA = 0b10110000;     // 7
        __delay_ms(1000);
        PORTA = 0b11111110;     // 8
        __delay_ms(1000);
        PORTA = 0b11111010;     // 9
        __delay_ms(1000);
        }
    }
    return (0);
}

