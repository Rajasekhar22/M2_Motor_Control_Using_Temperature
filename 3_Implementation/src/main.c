#define F_CPU 8000000UL
#include <avr/io.h>
#include <util/delay.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "LCD16x2_4bit.h"
#include "LCD16x2_4bit.c"

int val;
long R;
double Thermister;

void ADC_Init()
{
	DDRC &=~(1<<PC0);		/* Make ADC port as input */
	ADCSRA = 0x87;		/* Enable ADC, fr/128  */
}

int adc()
{
	ADMUX = 0x40;		/* Vref: Avcc, ADC channel: 0 */
	ADCSRA |= (1<<ADSC);	/* start conversion */
	while ((ADCSRA &(1<<ADIF))==0);	/* monitor end of conversion interrupt flag */
	ADCSRA |=(1<<ADIF);	/* set the ADIF bit of ADCSRA register */
	return(ADCW);		/* return the ADCW */
}


int main(void)
{
    DDRD &=~ (1<<PD5);/**/
    DDRB |= (1<<PB3);
    DDRD |= (1<<PD1);
    PORTD |= (1<<PD5);
    DDRD |= (1<<PD2);
	PORTD |= (1<<PD6);
	char array[20],ohm=0xF4;
	double temp;
	LCD_Init();		/* initialize 16x2 LCD */
	ADC_Init();		/* initialize ADC */
	LCD_Clear();		/* clear LCD */
	LCD_String_xy(0, 0,"Temp: ");
    while(1)
    {
		temp = adc()+18*2;/* store temperature value on temp resistor */
		itoa(temp,array,10);
		LCD_String_xy(0, 7,array);
		LCD_Char(0xDF);	/* ASCII value of '°' */
		LCD_String("C   ");

		_delay_ms(1000);/* wait for 1 second */

		/*if(!(PIND& (1<<PD5))){
            PORTB &=~(1<<PB2);
            PORTD &=~(1<<PD2);
            PORTD |= (1<<PD1);
            PORTB |= (1<<PB3);
        }*/
        if(!(PIND & (1<<PD6))){
            PORTB |= (1<<PB3);
            PORTD |= (1<<PD1);
		    PORTD &=~ (1<<PD2);
            PORTB &=~ (1<<PB2);
        }
        else if(PIND & (1<<PD6)){
            PORTB &=~(1<<PB3);
            PORTD &=~(1<<PD1);
		    PORTD |= (1<<PD2);
            PORTB |= (1<<PB2);
        }
    }
    return 0;
}
