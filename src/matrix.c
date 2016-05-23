#include <avr/io.h>
#include <util/delay.h>

#include "matrix.h"

#ifdef DEBOUNCE_ENABLED
#define DEBOUNCE_AMOUNT 5
#endif


static void         init_cols(void);
static matrix_row_t read_cols(void);
static void         select_row(uint8_t row);
static void         unselect_rows(void);

/*
 * 1: pressed
 * 0: unpressed
 */
static matrix_row_t matrix_state[MATRIX_ROWS];

#ifdef DEBOUNCE_ENABLED
static matrix_row_t matrix_debounced_state[MATRIX_ROWS];
static uint8_t matrix_debounce_counter;
#endif

void matrix_initialize(void)
{
  unselect_rows();
  init_cols();

  uint8_t i;
  for (i = 0; i < MATRIX_ROWS; ++i) {
    matrix_state[i] = 0;
#ifdef DEBOUNCE_ENABLED
    matrix_debounced_state[i] = 0;
    matrix_debounce_counter = DEBOUNCE_AMOUNT;
#endif
  }
}

matrix_row_t matrix_get_row(uint8_t row_num)
{
  return matrix_state[row_num];
}

bool matrix_switch_pressed_at(uint8_t row_num, uint8_t col_num)
{
  return matrix_state[row_num] & (1 << col_num);
}

void matrix_scan(void)
{
  uint8_t i;

  for (i = 0; i < MATRIX_ROWS; ++i) {
    select_row(i);
    _delay_us(500);
    matrix_row_t row = read_cols();
    matrix_state[i] = row;
    unselect_rows();

#ifdef DEBOUNCE_ENABLED
    if (matrix_state[i] != row) {
      matrix_debounce_counter = DEBOUNCE_AMOUNT;
    }
#endif
  }

#ifdef DEBOUNCE_ENABLED
  if (matrix_debounce_counter) {
    --matrix_debounce_counter;
    _delay_ms(1);
  } else {
    for (i = 0; i < MATRIX_ROWS; ++i) {
      matrix_debounced_state[i] = matrix_state[i];
    }
  }
#endif
}

/* Column pin configuration
 * pins (sorted): F1  F0  E6  D7  D6  D4  C7  C6  B7  B5  B4  B3  B1  B0
 */
static void init_cols(void)
{
  // Input with pull-up(DDR:0, PORT:1)
  DDRF  &= ~(1<<PF1 | 1<<PF0);
  PORTF |=  (1<<PF1 | 1<<PF0);
  DDRE  &= ~(1<<PE6);
  PORTE |=  (1<<PE6);
  DDRD  &= ~(1<<PD7 | 1<<PD6 | 1<<PD4);
  PORTD |=  (1<<PD7 | 1<<PD6 | 1<<PD4);
  DDRC  &= ~(1<<PC7 | 1<<PC6);
  PORTC |=  (1<<PC7 | 1<<PC6);
  DDRB  &= ~(1<<PB7 | 1<<PB5 | 1<<PB4 | 1<<PB3 | 1<<PB1 | 1<<PB0);
  PORTB |=  (1<<PB7 | 1<<PB5 | 1<<PB4 | 1<<PB3 | 1<<PB1 | 1<<PB0);
}

/* Column pin configuration
 * col: 0   1   2   3   4   5   6   7   8   9   10  11  12  13
 * pin: F0  F1  E6  C7  C6  B7  D4  B1  B0  B5  B4  D7  D6  B3  (Rev.CHN)
 * pin: F0  F1  E6  C7  C6  B7  D4  B0  B1  B5  B4  D7  D6  B3  (Rev.CNY)
 */
static matrix_row_t read_cols(void)
{
  return
    (PINF&(1<<PF0) ? 0 : (1<<0)) |
    (PINF&(1<<PF1) ? 0 : (1<<1)) |
    (PINE&(1<<PE6) ? 0 : (1<<2)) |
    (PINC&(1<<PC7) ? 0 : (1<<3)) |
    (PINC&(1<<PC6) ? 0 : (1<<4)) |
    (PINB&(1<<PB7) ? 0 : (1<<5)) |
    (PIND&(1<<PD4) ? 0 : (1<<6)) |
    (PINB&(1<<PB1) ? 0 : (1<<7)) |
    (PINB&(1<<PB0) ? 0 : (1<<8)) |
    (PINB&(1<<PB5) ? 0 : (1<<9)) |
    (PINB&(1<<PB4) ? 0 : (1<<10)) |
    (PIND&(1<<PD7) ? 0 : (1<<11)) |
    (PIND&(1<<PD6) ? 0 : (1<<12)) |
    (PINB&(1<<PB3) ? 0 : (1<<13));
}

/* Row pin configuration
 * row: 0   1   2   3   4
 * pin: D0  D1  D2  D3  D5
 */
static void select_row(uint8_t row)
{
  // Output low(DDR:1, PORT:0) to select
  switch (row) {
    case 0:
      DDRD  |= (1<<0);
      PORTD &= ~(1<<0);
      break;
    case 1:
      DDRD  |= (1<<1);
      PORTD &= ~(1<<1);
      break;
    case 2:
      DDRD  |= (1<<2);
      PORTD &= ~(1<<2);
      break;
    case 3:
      DDRD  |= (1<<3);
      PORTD &= ~(1<<3);
      break;
    case 4:
      DDRD  |= (1<<5);
      PORTD &= ~(1<<5);
      break;
  }
}

static void unselect_rows(void)
{
  // Hi-Z(DDR:0, PORT:0) to unselect
  DDRD  &= ~0b00101111;
  PORTD &= ~0b00101111;
}
