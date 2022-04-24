#include "header.h"

void lcdcmd(unsigned char cmd)
{
    PORTD &=~ (1<<RS);//SET RS PIN TO LOW IN LCD
    PORTD &=~ (1<<RW);//SET RW PIN TO LOW IN LCD
    LCD=cmd & 0xF0;
    PORTD |= (1<<EN);//SET EN PIN TO HIGH IN LCD
    _delay_ms(1);
    PORTD &=~(1<<EN);//SET EN PIN TO LOW IN LCD

    LCD = cmd<<4;
    PORTD |= (1<<EN);//SET EN PIN TO HIGH IN LCD
    _delay_ms(1);
    PORTD &=~(1<<EN);//SET EN PIN TO LOW IN LCD
}
void lcddata(unsigned char data)
{
    PORTD |= (1<<RS);//SET RS PIN TO HIGH IN LCD
    PORTD &=~(1<<RW);//SET RW PIN TO LOW IN LCD
    LCD = data & 0xF0;
    PORTD |=(1<<EN);//SET EN PIN TO HIGH IN LCD
    _delay_ms(1);
    PORTD &=~(1<<EN);//SET EN PIN TO LOW IN LCD

    LCD=data<<4;
    PORTD |= (1<<EN);//SET EN PIN TO HIGH IN LCD
    _delay_ms(1);
    PORTD &=~(1<<EN);//SET EN PIN TO LOW IN LCD
}
void lcd_init(void)
{
    DDRB = 0xFF;//SET DATA DIRECTION
    DDRD = 0xFF;//SET DATA DIRECTION
    PORTD &=~ (1<<EN);//SET EN PIN TO LOW IN LCD
    /*SETTING LCD*/
    lcdcmd(0x33);
    lcdcmd(0x32);
    lcdcmd(0x28);
    lcdcmd(0x0E);
    lcdcmd(0x01);
    _delay_ms(2);//SET DELAY OF 2
}
/*PRINT TEMPERATURE TO LCD*/
void lcd_print(char *str)
{
    unsigned char i=0;
    while(str[i]!=0){
        lcddata(str[i]);
        i++;
    }
}
