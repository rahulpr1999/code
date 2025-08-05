include <avr/io.h>
#include <util/delay.h>
int main (void)
{
    DDRB = DDRB | (1<<4); // set PB4 as output
    while(1)
    {
        PORTB = PORTB | (1<<4);
        _delay_ms(10);
        PORTB = PORTB & ~(1<<4);
        _delay_ms(10);
    }
    return 0;
}
