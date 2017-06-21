#ifndef _MATRIX_H_
#define _MATRIX_H_

#include <stdbool.h>
#include <stdint.h>

#define MATRIX_ROWS 5
#define MATRIX_COLS 14

#if (MATRIX_COLS <= 8)
typedef uint8_t  matrix_row_t;
#elif (MATRIX_COLS <= 16)
typedef uint16_t matrix_row_t;
#elif (MATRIX_COLS <= 32)
typedef uint32_t matrix_row_t;
#else
#error "MATRIX_COLS is too large"
#endif

/*
 * Initialize the matrix
 */
void matrix_initialize(void);

/*
 * Get row status
 */
matrix_row_t matrix_get_row(uint8_t row_num);

/*
 * True if switch at (row, col) is pressed
 */
bool matrix_switch_pressed_at(uint8_t row_num, uint8_t col_num);

/*
 * Scan the keyboard switch matrix
 */
void matrix_scan(void);

#endif
