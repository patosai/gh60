#ifndef _KEYCODES_H_
#define _KEYCODES_H_

#include <stdbool.h>
#include <stdint.h>

typedef uint8_t keycode_t;

bool key_is_modifier(keycode_t key);
keycode_t key_to_modifier(keycode_t key);

/* Modifiers */
#define KC_LCTRL  0xE0
#define KC_LSHIFT 0xE1
#define KC_LALT   0xE2
#define KC_LGUI   0xE3
#define KC_RCTRL  0xE4
#define KC_RSHIFT 0xE5
#define KC_RALT   0xE6
#define KC_RGUI   0xE7

/* Modifiers - internal used internally */
#define MOD_LCTRL  (1 << 0)
#define MOD_LSHIFT (1 << 1)
#define MOD_LALT   (1 << 2)
#define MOD_LGUI   (1 << 3)
#define MOD_RCTRL  (1 << 4)
#define MOD_RSHIFT (1 << 5)
#define MOD_RALT   (1 << 6)
#define MOD_RGUI   (1 << 7)

/* Keys */
#define KC_NONE           0x00 // Reserved (no event indicated)
#define KC_ROLL_OVER      0x01 // ErrorRollOver
#define KC_POST_FAIL      0x02 // POSTFail
#define KC_UNDEFINED      0x03 // ErrorUndefined
#define KC_A              0x04 // a and A
#define KC_B              0x05 // b and B
#define KC_C              0x06 // c and C
#define KC_D              0x07 // d and D
#define KC_E              0x08 // e and E
#define KC_F              0x09 // f and F
#define KC_G              0x0A // g and G
#define KC_H              0x0B // h and H
#define KC_I              0x0C // i and I
#define KC_J              0x0D // j and J
#define KC_K              0x0E // k and K
#define KC_L              0x0F // l and L
#define KC_M              0x10 // m and M
#define KC_N              0x11 // n and N
#define KC_O              0x12 // o and O
#define KC_P              0x13 // p and P
#define KC_Q              0x14 // q and Q
#define KC_R              0x15 // r and R
#define KC_S              0x16 // s and S
#define KC_T              0x17 // t and T
#define KC_U              0x18 // u and U
#define KC_V              0x19 // v and V
#define KC_W              0x1A // w and W
#define KC_X              0x1B // x and X
#define KC_Y              0x1C // y and Y
#define KC_Z              0x1D // z and Z
#define KC_1              0x1E // 1 and !
#define KC_2              0x1F // 2 and @
#define KC_3              0x20 // 3 and #
#define KC_4              0x21 // 4 and $
#define KC_5              0x22 // 5 and %
#define KC_6              0x23 // 6 and ^
#define KC_7              0x24 // 7 and &
#define KC_8              0x25 // 8 and *
#define KC_9              0x26 // 9 and (
#define KC_0              0x27 // 0 and )
#define KC_ENTER          0x28 // Return (ENTER)
#define KC_ESCAPE         0x29 // ESCAPE
#define KC_BSPACE         0x2A // DELETE (Backspace)
#define KC_TAB            0x2B // Tab
#define KC_SPACE          0x2C // Spacebar
#define KC_MINUS          0x2D // - and (underscore)
#define KC_EQUAL          0x2E // = and +
#define KC_LBRACKET       0x2F // [ and {
#define KC_RBRACKET       0x30 // ] and }
#define KC_BSLASH         0x31 // \ and |
#define KC_NONUS_HASH     0x32 // Non-US # and ~
#define KC_SCOLON         0x33 // ; and :
#define KC_QUOTE          0x34 // ‘ and “
#define KC_GRAVE          0x35 // Grave Accent and Tilde
#define KC_COMMA          0x36 // Keyboard, and <
#define KC_DOT            0x37 // . and >
#define KC_SLASH          0x38 // / and ?
#define KC_CAPSLOCK       0x39 // Caps Lock
#define KC_F1             0x3A // F1
#define KC_F2             0x3B // F2
#define KC_F3             0x3C // F3
#define KC_F4             0x3D // F4
#define KC_F5             0x3E // F5
#define KC_F6             0x3F // F6
#define KC_F7             0x40 // F7
#define KC_F8             0x41 // F8
#define KC_F9             0x42 // F9
#define KC_F10            0x43 // F10
#define KC_F11            0x44 // F11
#define KC_F12            0x45 // F12
#define KC_PSCREEN        0x46 // PrintScreen1
#define KC_SCKLOCK        0x47 // Scroll Lock11
#define KC_PAUSE          0x48 // Pause1
#define KC_INSERT         0x49 // Insert1
#define KC_HOME           0x4A // Home1
#define KC_PGUP           0x4B // PageUp1
#define KC_DELETE         0x4C // Delete Forward
#define KC_END            0x4D // End1
#define KC_PGDOWN         0x4E // PageDown1
#define KC_RIGHT          0x4F // RightArrow1
#define KC_LEFT           0x50 // LeftArrow1
#define KC_DOWN           0x51 // DownArrow1
#define KC_UP             0x52 // UpArrow1
#define KC_NUMLOCK        0x53 // Keypad Num Lock and Clear11
#define KC_KP_SLASH       0x54 // Keypad /1
#define KC_KP_ASTERISK    0x55 // Keypad *
#define KC_KP_MINUS       0x56 // Keypad -
#define KC_KP_PLUS        0x57 // Keypad +
#define KC_KP_ENTER       0x58 // Keypad ENTER5
#define KC_KP_1           0x59 // Keypad 1 and End
#define KC_KP_2           0x5A // Keypad 2 and Down Arrow
#define KC_KP_3           0x5B // Keypad 3 and PageDn
#define KC_KP_4           0x5C // Keypad 4 and Left Arrow
#define KC_KP_5           0x5D // Keypad 5
#define KC_KP_6           0x5E // Keypad 6 and Right Arrow
#define KC_KP_7           0x5F // Keypad 7 and Home
#define KC_KP_8           0x60 // Keypad 8 and Up Arrow
#define KC_KP_9           0x61 // Keypad 9 and PageUp
#define KC_KP_0           0x62 // Keypad 0 and Insert
#define KC_KP_DOT         0x63 // Keypad . and Delete
#define KC_NONUS_BSLASH   0x64 // Non-US \ and |
#define KC_APPLICATION    0x65 // Application10
#define KC_POWER          0x66 // Power9
#define KC_KP_EQUAL       0x67 // Keypad =
#define KC_F13            0x68 // F13
#define KC_F14            0x69 // F14
#define KC_F15            0x6A // F15
#define KC_F16            0x6B // F16
#define KC_F17            0x6C // F17
#define KC_F18            0x6D // F18
#define KC_F19            0x6E // F19
#define KC_F20            0x6F // F20
#define KC_F21            0x70 // F21
#define KC_F22            0x71 // F22
#define KC_F23            0x72 // F23
#define KC_F24            0x73 // F24
#define KC_EXECUTE        0x74 // Execute
#define KC_HELP           0x75 // Help
#define KC_MENU           0x76 // Menu
#define KC_SELECT         0x77 // Select
#define KC_STOP           0x78 // Stop
#define KC_AGAIN          0x79 // Again
#define KC_UNDO           0x7A // Undo
#define KC_CUT            0x7B // Cut
#define KC_COPY           0x7C // Copy
#define KC_PASTE          0x7D // Paste
#define KC_FIND           0x7E // Find
#define KC_MUTE           0x7F // Mute
#define KC_VOLUP          0x80 // Volume Up
#define KC_VOLDOWN        0x81 // Volume Down
#define KC_LOCKING_CAPS   0x82 // Locking Caps Lock12
#define KC_LOCKING_NUM    0x83 // Locking Num Lock12
#define KC_LOCKING_SCROLL 0x84 // Locking Scroll Lock12
#define KC_KP_COMMA       0x85 // Keypad Comma27
#define KC_KP_EQUAL_AS400 0x86 // Keypad Equal Sign29
#define KC_INT1           0x87 // International115,28
#define KC_INT2           0x88 // International216
#define KC_INT3           0x89 // International317
#define KC_INT4           0x8A // International418
#define KC_INT5           0x8B // International519
#define KC_INT6           0x8C // International620
#define KC_INT7           0x8D // International721
#define KC_INT8           0x8E // International822
#define KC_INT9           0x8F // International922
#define KC_LANG1          0x90 // LANG125
#define KC_LANG2          0x91 // LANG226
#define KC_LANG3          0x92 // LANG330
#define KC_LANG4          0x93 // LANG431
#define KC_LANG5          0x94 // LANG532
#define KC_LANG6          0x95 // LANG68
#define KC_LANG7          0x96 // LANG78
#define KC_LANG8          0x97 // LANG88
#define KC_LANG9          0x98 // LANG98
#define KC_ALT_ERASE      0x99 // Alternate Erase7
#define KC_SYSREQ         0x9A // SysReq/Attention1
#define KC_CANCEL         0x9B // Cancel
#define KC_CLEAR          0x9C // Clear
#define KC_PRIOR          0x9D // Prior
#define KC_RETURN         0x9E // Return
#define KC_SEPARATOR      0x9F // Separator
#define KC_OUT            0xA0 // Out
#define KC_OPER           0xA1 // Oper
#define KC_CLEAR_AGAIN    0xA2 // Clear/Again
#define KC_CRSEL          0xA3 // CrSel/Props
#define KC_EXSEL          0xA4 // ExSel

/* More keys */
#define KC_KEYPAD_00                         0xB0
#define KC_KEYPAD_000                        0xB1
#define KC_THOUSANDS_SEPARATOR               0xB2
#define KC_DECIMAL_SEPARATOR                 0xB3
#define KC_CURRENCY_UNIT                     0xB4
#define KC_CURRENCY_SUB_UNIT                 0xB5
#define KC_KEYPAD_OPENING_PARENTHESIS        0xB6
#define KC_KEYPAD_CLOSING_PARENTHESIS        0xB7
#define KC_KEYPAD_OPENING_BRACE              0xB8
#define KC_KEYPAD_CLOSING_BRACE              0xB9
#define KC_KEYPAD_TAB                        0xBA
#define KC_KEYPAD_BACKSPACE                  0xBB
#define KC_KEYPAD_A                          0xBC
#define KC_KEYPAD_B                          0xBD
#define KC_KEYPAD_C                          0xBE
#define KC_KEYPAD_D                          0xBF
#define KC_KEYPAD_E                          0xC0
#define KC_KEYPAD_F                          0xC1
#define KC_KEYPAD_XOR                        0xC2
#define KC_KEYPAD_CARET                      0xC3
#define KC_KEYPAD_PERCENTAGE                 0xC4
#define KC_KEYPAD_LESS_THAN_SIGN             0xC5
#define KC_KEYPAD_GREATER_THAN_SIGN          0xC6
#define KC_KEYPAD_AMP                        0xC7
#define KC_KEYPAD_AMP_AMP                    0xC8
#define KC_KEYPAD_PIPE                       0xC9
#define KC_KEYPAD_PIPE_PIPE                  0xCA
#define KC_KEYPAD_COLON                      0xCB
#define KC_KEYPAD_HASHMARK                   0xCC
#define KC_KEYPAD_SPACE                      0xCD
#define KC_KEYPAD_AT                         0xCE
#define KC_KEYPAD_EXCLAMATION_SIGN           0xCF
#define KC_KEYPAD_MEMORY_STORE               0xD0
#define KC_KEYPAD_MEMORY_RECALL              0xD1
#define KC_KEYPAD_MEMORY_CLEAR               0xD2
#define KC_KEYPAD_MEMORY_ADD                 0xD3
#define KC_KEYPAD_MEMORY_SUBTRACT            0xD4
#define KC_KEYPAD_MEMORY_MULTIPLY            0xD5
#define KC_KEYPAD_MEMORY_DIVIDE              0xD6
#define KC_KEYPAD_PLUS_AND_MINUS             0xD7
#define KC_KEYPAD_CLEAR                      0xD8
#define KC_KEYPAD_CLEAR_ENTRY                0xD9
#define KC_KEYPAD_BINARY                     0xDA
#define KC_KEYPAD_OCTAL                      0xDB
#define KC_KEYPAD_DECIMAL                    0xDC
#define KC_KEYPAD_HEXADECIMAL                0xDD
#define KC_MEDIA_PLAY                        0xE8
#define KC_MEDIA_STOP                        0xE9
#define KC_MEDIA_PREVIOUS_TRACK              0xEA
#define KC_MEDIA_NEXT_TRACK                  0xEB
#define KC_MEDIA_EJECT                       0xEC
#define KC_MEDIA_VOLUME_UP                   0xED
#define KC_MEDIA_VOLUME_DOWN                 0xEE
#define KC_MEDIA_MUTE                        0xEF
#define KC_MEDIA_WWW                         0xF0
#define KC_MEDIA_BACKWARD                    0xF1
#define KC_MEDIA_FORWARD                     0xF2
#define KC_MEDIA_CANCEL                      0xF3
#define KC_MEDIA_SEARCH                      0xF4
#define KC_MEDIA_SLEEP                       0xF8
#define KC_MEDIA_LOCK                        0xF9
#define KC_MEDIA_RELOAD                      0xFA
#define KC_MEDIA_CALCULATOR                  0xFB

#endif
