#include <avr/io.h>
#include <util/delay.h>

#define BLINK_DELAY_MS


int main(void)

{
DDRB = DDRB | (1<<5); /*configure pin 5 of PORTB for output*/
DDRB = DDRB | (1<<4); /*configure pin 5 of PORTB for output*/
DDRB = DDRB | (1<<3); /*configure pin 5 of PORTB for output*/
DDRB = DDRB | (1<<2); /*configure pin 5 of PORTB for output*/
DDRB = DDRB | (1<<1); /*configure pin 5 of PORTB for output*/


while(1)
{
	PORTB |= (1 << 5); /* set pin 5 high to led turn on*/
	_delay_ms(100);
	PORTB &= ~(1 << 5); /*set pin 5 low to turn led off*/
	
	PORTB |= (1 << 3); /* set pin 5 high to led turn on*/
	_delay_ms(80);
	PORTB &= ~(1 << 3); /*set pin 5 low to turn led off*/
	
	PORTB |= (1 << 1); /* set pin 5 high to led turn on*/
	_delay_ms(60);
	PORTB &= ~(1 << 1); /*set pin 5 low to turn led off*/
	
	PORTB |= (1 << 2); /* set pin 5 high to led turn on*/
	_delay_ms(70);
	PORTB &= ~(1 << 2); /*set pin 5 low to turn led off*/
	
	PORTB |= (1 << 4); /* set pin 5 high to led turn on*/
	_delay_ms(50);
	PORTB &= ~(1 << 4); /*set pin 5 low to turn led off*/

}

}
