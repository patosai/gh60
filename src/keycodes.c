#include "keycodes.h"

bool key_is_modifier(keycode_t key) {
  return (key >= 0xE0) && (key <= 0xE7);
}

keycode_t key_to_modifier(keycode_t key) {
  return (1 << (key & 0x0F));
}

bool key_is_layer_command(keycode_t key) {
  return key >= 0xFC;
}

uint8_t key_layer_to_num(keycode_t key) {
  return key - 0xFC;
}
