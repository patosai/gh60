GH60 Satan Firmware
====================
This is a custom firmware for the GH60 Satan. It uses the LUFA USB stack so you need to flash the LUFA DFU bootloader hex file to your atmega32u4.

### Features
* LED support (for my version, it's basically Caps Lock and everything else)
* Layers (up to 4)
* No debouncing (haven't run into those problems yet)

## Building
`make`

You will need to have avr-gcc.

## Flashing to the board
Now I hope you flashed the LUFA DFU bootloader. I use `dfu-programmer` to upload the firmware; make sure you have that.

`make flash` will do everything for you after you build the project. Takes like 5 seconds.
`make launch` will run the program on the board. It will boot into the program automatically unless you dun goof'd with your fuses.
