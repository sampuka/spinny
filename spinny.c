#include <avr/io.h>
#include <util/delay.h>

int main()
{
    DDRB = 0xFF;

    unsigned char x;
    while(1)
	for (unsigned char i = 0; i < 8; i++)
	{
	    x = 1<<i;
	    PORTB = x;
	    _delay_ms(200);
	}
}
