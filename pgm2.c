include <avr/io.h>
int main (void)
{
    unsigned char list[] = "012345ABCD";
    unsigned char z;
    DDRD = 0xFF;
    for(z=0; z<10; z++)
        PORTD = list[z];
    while(1);
    return 0;
}
