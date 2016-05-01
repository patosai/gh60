#ifndef _LED_H_
#define _LED_H_

#include <stdint.h>

void led_caps_lock_on(void);
void led_caps_lock_off(void);

void led_backlight_on(void);
void led_backlight_off(void);

void led_backlight_blink(void);

#endif
