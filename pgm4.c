#include <avr/io.h>
#include <util/delay.h>
int main (void)
{
    DDRA = DDRA & ~(1<<1);
    DDRD = DDRD | (1<<7);
    while(1)
    {
        if(PINA & (1<<1))
            PORTD = PORTD | (1<<7);
        else
            PORTD = PORTD & ~(1<<7);
    }
    return 0;
}
