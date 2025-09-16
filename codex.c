/*
 * Author: KMA
 */
#include <avr/io.h>

int main(void)
{
    DDRB = 0xFF;
    DDRD = 0xFF;

    uint8_t numbers[] = {3,4,7,10,15,20,9,21,22,29};
    uint8_t count = 10;
    uint8_t even1=0, odd1=0;

    for (uint8_t i=0; i<count; i++)
    {
        if (numbers[i] % 2 == 0)
        {
            even1++;
        }
        else
        {
            odd1++;
        }
    }

    PORTB = even1;
    PORTD = odd1;

    return 0;
}
