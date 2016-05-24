On Windows and Linux, I like to use the regular keymap. Note I've moved Escape to the bottom right since I really need the tilde at the regular spot (going to home directories, etc.).

```C
{ KC_GRAVE,    KC_1,    KC_2,    KC_3,     KC_4,    KC_5,     KC_6,    KC_7,     KC_8,    KC_9,     KC_0,      KC_MINUS,    KC_EQUAL,    KC_BSPACE },
{ KC_TAB,      KC_Q,    KC_W,    KC_E,     KC_R,    KC_T,     KC_Y,    KC_U,     KC_I,    KC_O,     KC_P,      KC_LBRACKET, KC_RBRACKET, KC_BSLASH },
{ KC_CAPSLOCK, KC_A,    KC_S,    KC_D,     KC_F,    KC_G,     KC_H,    KC_J,     KC_K,    KC_L,     KC_SCOLON, KC_QUOTE,    KC_NONE,     KC_ENTER },
{ KC_LSHIFT,   KC_NONE, KC_Z,    KC_X,     KC_C,    KC_V,     KC_B,    KC_N,     KC_M,    KC_COMMA, KC_DOT,    KC_SLASH,    KC_NONE,     KC_RSHIFT },
{ KC_LCTRL,    KC_LGUI, KC_LALT, KC_NONE,  KC_NONE, KC_SPACE, KC_NONE, KC_NONE,  KC_NONE, KC_NONE,  KC_LAYER_0, KC_LAYER_1, KC_MUTE, KC_ESCAPE }
```

On OS X, I swap the Alt (Alt) and Command (Win) keys so I don't need to stretch my fingers as far.

```C
{ KC_GRAVE,    KC_1,    KC_2,    KC_3,     KC_4,    KC_5,     KC_6,    KC_7,     KC_8,    KC_9,     KC_0,      KC_MINUS,    KC_EQUAL,    KC_BSPACE },
{ KC_TAB,      KC_Q,    KC_W,    KC_E,     KC_R,    KC_T,     KC_Y,    KC_U,     KC_I,    KC_O,     KC_P,      KC_LBRACKET, KC_RBRACKET, KC_BSLASH },
{ KC_CAPSLOCK, KC_A,    KC_S,    KC_D,     KC_F,    KC_G,     KC_H,    KC_J,     KC_K,    KC_L,     KC_SCOLON, KC_QUOTE,    KC_NONE,     KC_ENTER },
{ KC_LSHIFT,   KC_NONE, KC_Z,    KC_X,     KC_C,    KC_V,     KC_B,    KC_N,     KC_M,    KC_COMMA, KC_DOT,    KC_SLASH,    KC_NONE,     KC_RSHIFT },
{ KC_LCTRL,    KC_LALT, KC_LGUI, KC_NONE,  KC_NONE, KC_SPACE, KC_NONE, KC_NONE,  KC_NONE, KC_NONE,  KC_LAYER_0, KC_LAYER_1, KC_MUTE, KC_ESCAPE }
```

You can find all the possible keys in `include/keycodes.h`
