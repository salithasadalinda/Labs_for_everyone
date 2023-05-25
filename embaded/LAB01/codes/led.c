#include <avr/io.h>
#include <util/delay.h>

#define BLINK_DELAY_MS 1000

int main(void) {
  DDRB = DDRB | (1 << 5); /* configure pin 5 of PORTB for output */

  while (1) {
    PORTB |= (1 << 5);    /* set pin 5 high to turn on the LED */
    _delay_ms(BLINK_DELAY_MS);
    PORTB &= ~(1 << 5);   /* set pin 5 low to turn off the LED */
    _delay_ms(BLINK_DELAY_MS);
  }

  return 0;
}


