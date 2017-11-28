#define F_CPU 1000000UL

#include <avr/io.h>
#include <util/delay.h>



int main()
{
    DDRB = 0xFF;
    DDRC = 0x00;
    PORTC = 0xFF;
    int a;

    while(1)
    {
        
            for ( a = 0; a <= 0xFF; a++ ){
                if ( PINC == 0b11111110 ) {
                _delay_ms(10);
                PORTB = a;
                    }   else    {
                a = 0;
                PORTB = 0x00;
                }
            }
        
    }
}