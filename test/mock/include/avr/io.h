#ifndef _AVR_IO_H_
#define _AVR_IO_H_

#include <stdint.h>

uint32_t DDRB;
uint32_t DDRC;
uint32_t DDRD;
uint32_t DDRE;
uint32_t DDRF;

uint32_t PINB;
uint32_t PINC;
uint32_t PIND;
uint32_t PINE;
uint32_t PINF;

uint32_t PORTB;
uint32_t PORTC;
uint32_t PORTD;
uint32_t PORTE;
uint32_t PORTF;

uint32_t PB0;
uint32_t PB1;
uint32_t PB2;
uint32_t PB3;
uint32_t PB4;
uint32_t PB5;
uint32_t PB6;
uint32_t PB7;
uint32_t PC6;
uint32_t PC7;
uint32_t PD4;
uint32_t PD6;
uint32_t PD7;
uint32_t PE6;
uint32_t PF0;
uint32_t PF1;

uint8_t TCCR1A;
uint8_t TCCR1B;
uint8_t COM1A1;
uint8_t COM1B1;
uint8_t OCR1B;
uint8_t CS11;
uint8_t WGM10;
uint8_t WGM12;

#endif
