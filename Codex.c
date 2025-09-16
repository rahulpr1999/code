#include <avr/io.h>

int main(void)
{
    DDRB = 0xFF;

    unsigned int n1=0, n2=1, n3;

    PORTB = n1;
    PORTB = n2;

    while (1)
    {
        n3 = n1 + n2;
        if (n3 > 99)
        {
            break;
        }
        PORTB = n3;
        n1 = n2;
        n2 = n3;
    }

    PORTB = 0x00;
    while(1);
}
