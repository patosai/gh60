#ifndef _KEYMAP_H_
#define _KEYMAP_H_

#define KEYMAP_LAYERS 2

#include <stdint.h>

#include "keycodes.h"
#include "matrix.h"

void keymap_set_current_layer(uint8_t new_layer);

keycode_t keymap_key_at(matrix_row_t row, matrix_row_t col);

#endif
