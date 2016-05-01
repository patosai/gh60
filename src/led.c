#include <stdbool.h>

#include <avr/io.h>
#include <util/delay.h>

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

  TCCR1A |= ((1<<WGM10)        // 8 bit fast PWM
              | (1<<COM1A1)    // Clear OC1A on compare match, clear them at bottom
              | (1<<COM1B1));  //Clear OC1B on compare match, clear them at bottom
  TCCR1B |= ((1<<WGM12)        // 8 bit fast PWM
              | (1<<CS11));    // 1/8 prescale

  OCR1B = 255;
}

void led_backlight_off(void) {
  DDRB &= ~(1<<PB6);
  PORTB |= (1<<PB6);
}

void led_backlight_blink(uint8_t num_times) {
  const uint8_t delay = 250;
  for (uint8_t i = 0; i < num_times; ++i) {
    led_backlight_off();
    _delay_ms(delay);
    led_backlight_on();
    _delay_ms(delay);
  }
}
