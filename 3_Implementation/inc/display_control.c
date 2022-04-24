#include "header.h"

void convertndisplay(unsigned char value)
{
    unsigned char x,d1,d2;
    x=value/10;
    d1=x;
    d2=value%10;
    lcdcmd(0x8D);
    lcddata(d1+0x30);
    lcddata(d2+0x30);
    /*THIS IF ELSE IS TO CONTROL THE MOTOR BY MEASUREING TEMPERATURE*/
    if(((d1*10)+d2)>50)
    {
        PORTC &=~ (1<<PC2);
        PORTC|= (1<<PC1);
        PORTB|=(1<<PB1);
        _delay_ms(1000);
    }
    else if(((d1*10)+d2)<20){
        PORTC&=~ (1<<PC1);
        PORTC |= (1<<PC2);
        PORTB |= (1<<PB2);
        _delay_ms(1000);
    }
    else{
        PORTC|= (1<<PC1);
        PORTB|=(1<<PB1);
        PORTC |= (1<<PC2);
        PORTB |= (1<<PB2);

    }
}

