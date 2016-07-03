#ifndef _KEYBOARD_H_
#define _KEYBOARD_H_

#include <avr/io.h>
#include <avr/wdt.h>
#include <avr/power.h>
#include <avr/interrupt.h>
#include <stdbool.h>
#include <string.h>

#include <LUFA/Drivers/USB/USB.h>
#include <LUFA/Platform/Platform.h>

#include "keycodes.h"
#include "usb/descriptors.h"

/* Function Prototypes: */
void initialize_hardware(void);
void fill_keyboard_report(USB_KeyboardReport_Data_t* keyboardReport);
void check_for_layer_change_command(keycode_t key);

void EVENT_USB_Device_Connect(void);
void EVENT_USB_Device_Disconnect(void);
void EVENT_USB_Device_ConfigurationChanged(void);
void EVENT_USB_Device_ControlRequest(void);
void EVENT_USB_Device_StartOfFrame(void);

bool CALLBACK_HID_Device_CreateHIDReport(USB_ClassInfo_HID_Device_t* const HIDInterfaceInfo,
                     uint8_t* const ReportID,
                     const uint8_t ReportType,
                     void* ReportData,
                     uint16_t* const ReportSize);
void CALLBACK_HID_Device_ProcessHIDReport(USB_ClassInfo_HID_Device_t* const HIDInterfaceInfo,
                      const uint8_t ReportID,
                      const uint8_t ReportType,
                      const void* ReportData,
                      const uint16_t ReportSize);

#endif
