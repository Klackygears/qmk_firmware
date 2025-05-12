#include QMK_KEYBOARD_H

#include "klackygears.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {


[_WINBASE] = LAYOUT_wrapper( \
    LT(_FUNC, KC_ESC),  KC_F1,   KC_F2,   KC_F3,   KC_F4,           KC_F5,           KC_Y,    KC_U,    KC_I,   KC_O,    KC_P,               KC_F11,  KC_F12,
    _______,            KC_F6,   KC_F7,   KC_F8,   KC_F9,           KC_F10,          KC_0,    KC_H,    KC_J,   KC_K,    KC_L,               KC_LBRC, LT(_MDIA, KC_ENT),
    _______,            KC_6,    KC_7,    KC_8,    LT(_FUNC, KC_9), LT(_SYMB, KC_0), KC_N,    KC_M,   KC_COMM, KC_DOT,  LT(_FUNC, KC_SLSH), KC_RALT, KC_RSFT
),

[_SYMB] = LAYOUT_wrapper( \
    _______, KC_PMNS, KC_P7,   KC_P8,   KC_P9,   _______, _______, _______, _______, _______, _______, _______, _______,
    _______, KC_PPLS, KC_P4,   KC_P5,   KC_P6,   _______, _______, _______, _______, _______, _______, _______, _______,
    _______, KC_P0,   KC_P1,   KC_P2,   KC_P3,   _______, _______, _______, _______, _______, _______, _______, _______
),


[_FUNC] = LAYOUT_wrapper( \
    _______, MAKEKF,  _______, _______, KC_PAST,  _______, _______, _______, KC_HOME, KC_PGUP, _______, _______, _______,
    _______, KC_LEFT, KC_UP,   KC_DOWN, KC_RIGHT, _______, _______, _______, KC_END,  KC_PGDN, _______, _______, _______,
    _______, _______, _______, _______, _______,  _______, _______, _______, _______, _______, _______, _______, _______
),

[_MDIA] =  LAYOUT_wrapper( \
    _______, _______, _______, _______, _______, _______, _______, _________________RGB_1_____________________, _______,
    _______, _______, _______, _______, _______, _______, _______, _________________RGB_2_____________________, _______,
    _______, _______, _______, _______, _______, _______, _______, _________________MEDIA_____________________, _______
),

};


/*
void matrix_scan_kb(void) {


    switch(biton32(layer_state)) {
      case _FUNC:
        rgblight_setrgb_at(255, 0, 0, 9);
      break;
      case _SYMB:
        rgblight_setrgb_at(200, 55, 100, 7);
      break;
      case _MDIA:
        rgblight_setrgb_at(255, 255, 255, 6);
      break;
    }

};
 */

layer_state_t default_layer_state_set_user(layer_state_t state) {
    rgblight_set_layer_state(1, layer_state_cmp(state, _SYMB));
    return state;
}
