#include<pic16f877a.h>
int main()
{
    unsigned char i = 0;
    TRISB = 0;
    for(i=0;i<0xff;i++)
        PORTB = i;
    while(1);
}
