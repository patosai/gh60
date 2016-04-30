#include <avr/io.h>
#include <stdbool.h>

#include "led.h"

/*
 * Caps lock - B2
 * Backlight - B6
 */

void led_caps_lock_on(void) {
  DDRB |= (1<<PB2);
  PORTB &= ~(1<<PB2);
}

void led_caps_lock_off(void) {
  DDRB &= ~(1<<PB2);
  PORTB |= (1<<PB2);
}

void led_backlight_on(void) {
  DDRB |= (1<<PB6);

  TCCR1A |= ((1<<WGM10)    // 8 bit fast PWM
            | (1<<COM1A1)  // Clear OC1A on compare match, clear them at bottom 
            | (1<<COM1B1));  //Clear OC1B on compare match, clear them at bottom 
  TCCR1B= ((1<<WGM12) // 8 bit fast PWM  
            | (1<<CS11));   // 1/8 prescale

  OCR1B = 255;
}

void led_backlight_off(void) {
  DDRB &= ~(1<<PB6);
  PORTB |= (1<<PB6);
}
