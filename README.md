GH60 Satan Firmware
====================
This is a custom firmware for the GH60 Satan. It uses the LUFA USB stack so you need to flash the LUFA DFU bootloader hex file to your atmega32u4.

Modify `src/keymap.c` to your liking. The list of all keys is in `include/keycodes.h`

### Features
* LED support (for my version, it's basically Caps Lock and everything else)
* Layers (up to 4)
* Debouncing

## Building
`make`

You will need to have avr-gcc.

## Flashing to the board
Again, this firmware uses the LUFA USB stack so make sure you've got the LUFA bootloader on your atmega.

`make flash` flashes the built firmware to the board.
`make launch` will run the program on the board. You can also just power cycle your GH60; the bootloader will automatically run the firmware unless you've changed your fuses.
