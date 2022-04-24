#include "header.h"
#include "LCD.c"
#include "display_control.c"

void convertndisplay(unsigned char value);
unsigned char data;
int main(void)
{
DDRB |=(1<<PB1);//Set Direction for LED 2
DDRB |=(1<<PB2);//Set Direction for LED 1
DDRC |=(1<<PC1);//Set Direction for MOTOR 2
DDRC |=(1<<PC2);//Set Direction for MOTOR 1
lcd_init();//calling init LED
lcd_print("Temperature:");
DDRC |= (1<<0);//Set Direction for TEMPERATURE SENSOR
ADCSRA = 0x87;//Set Control Status Register
ADMUX = 0xE0;//Initialize Mux
while(1){
    ADCSRA |= (1<<ADSC);
    while((ADCSRA & (1<<ADIF))==0);
    data=ADCH;
    convertndisplay(data);
    _delay_ms(500);
}
return 0;
}
