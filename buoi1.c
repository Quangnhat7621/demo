#include <at89x51.h>
void delay(int interval)
{
    int i, j;
    for(i = 0; i < interval; i++)
    {
        for(j = 0; j < 255; j++);
    }
}
void main()
{
    P0 = 0xAA;
    delay(500);
    P0 = 0x55;
    delay(500);
}