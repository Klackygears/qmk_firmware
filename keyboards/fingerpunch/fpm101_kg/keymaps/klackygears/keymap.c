#include QMK_KEYBOARD_H
#include "klackygears.h"
/*
// Defines names for use in layer keycodes and the keymap
 enum layer_names {
    _QWERTY,
    _COLEMAK,
    _LOWER,
    _RAISE,
    _ADJUST,
    _MDIA
};
 */
/* enum custom_keycodes {
    QWERTY = SAFE_RANGE,
    LOWER,
    RAISE,
    ADJUST
}; */



// All the KC_MUTE keycodes below represent the encoders. If you aren't using encoders, you can ignore these:
//            -->  KC_MUTE,   KC_LCTL,   KC_LGUI,   LOWER,     KC_SPC,    KC_LALT,   KC_MS_BTN1, KC_MS_BTN2, KC_MS_BTN3,    KC_RALT,   KC_SPC,    RAISE,     KC_RGUI,   KC_RCTL,   KC_MUTE, <--
//                                                                                            --> KC_MUTE <--
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[_QWERTY] = LAYOUT_fpm101(
    KC_ESC,    KC_1,      KC_2,      KC_3,      KC_4,      KC_5,       DB_TOGG,                                            KC_RPRN,   KC_6,      KC_7,      KC_8,      KC_9,      KC_0,      KC_BSPC,
    KC_TAB,    KC_Q,      KC_W,      KC_F,      KC_P,      KC_B,                                                                         KC_SPC,     RGB_HUI,    RGB_SAI,    RGB_VAI,    RGB_SPI,        KC_BSLS,
    KC_CAPS,   KC_Q,      KC_W,      KC_F,      KC_P,      KC_B,       KC_LCBR,                                            KC_RCBR,      RGB_MOD,    RGB_HUD,    RGB_SAD,    RGB_VAD,    RGB_SPD,        KC_QUOT,
    KC_LSFT,   KC_Z,      KC_X,      KC_C,      KC_V,      KC_B,       _QWERTY,                                           _QWERTY,  KC_N,      KC_M,         KC_COMM,   KC_DOT, KC_SLSH,   KC_ENT,
                          KC_MUTE,   KC_LGUI,   _QWERTY,  KC_SPC,     KC_LALT,     KC_MS_BTN1, KC_MS_BTN2, KC_MS_BTN3,    KC_RALT,   KC_SPC,    _QWERTY,     KC_RGUI,   KC_MUTE
),


[_MDIA] = LAYOUT_fpm101(
    KC_ESC,    KC_1,      KC_2,      KC_3,      KC_4,      KC_5,      KC_LPRN,                                          KC_RPRN,   KC_6,      KC_7,      KC_8,      KC_9,      KC_0,      KC_BSPC,
    KC_TAB,    KC_Q,      KC_W,      KC_F,      KC_P,      KC_B,                                                                   KC_J,      KC_L,      KC_U,      KC_Y,      KC_SCLN,   KC_BSLS,
    KC_CAPS,   KC_A,      KC_R,      KC_S,      KC_T,      KC_G,      KC_LCBR,                                          KC_RCBR,   KC_M,      KC_N,      KC_E,      KC_I,      KC_O,      KC_QUOT,
    KC_LSFT,   KC_Z,      KC_X,      KC_C,      KC_D,      KC_V,      _QWERTY,                                         _QWERTY,  KC_K,      KC_H,      KC_COMM,   KC_DOT,    KC_SLSH,   KC_ENT,
                          KC_MUTE,   KC_LGUI,   _QWERTY,  KC_SPC,    KC_LALT,   KC_MS_BTN1, KC_MS_BTN2, KC_MS_BTN3,    KC_RALT,   KC_SPC,    _QWERTY,  KC_RGUI,   KC_MUTE
)
};


__attribute__((weak)) bool encoder_update_keymap(uint8_t index, bool clockwise) { return true; }

bool encoder_update_user(uint8_t index, bool clockwise) {
    if (!encoder_update_keymap(index, clockwise)) {
        return true;
    }

    // default behavior if undefined
    if (index == 0) {
        switch(biton32(layer_state)){
            default:
                // volume up and down
                if (clockwise){
                    #ifdef ENCODERS_A_REVERSE
                    tap_code(KC_VOLD);
                    #else
                    tap_code(KC_VOLU);
                    #endif
                } else{
                    #ifdef ENCODERS_A_REVERSE
                    tap_code(KC_VOLU);
                    #else
                    tap_code(KC_VOLD);
                    #endif
                }
                break;
        }
    } else if (index == 1) {
        switch(biton32(layer_state)){
            default:
                if (clockwise){
                    #ifdef ENCODERS_B_REVERSE
                    tap_code16(KC_1);
                    #else
                    tap_code16(KC_2);
                    #endif
                } else{
                    #ifdef ENCODERS_B_REVERSE
                    tap_code16(KC_2);
                    #else
                    tap_code16(KC_1);
                    #endif
                }
                break;
        }
    }
    else if (index == 2) {
        switch(biton32(layer_state)){
            default:
                // scroll wheel


                if (clockwise) {
                    #ifdef ENCODERS_A_REVERSE
                    tap_code(KC_PGUP);
                    #else
                    tap_code(KC_PGDN);
                    #endif
                } else {
                    #ifdef ENCODERS_A_REVERSE
                    tap_code(KC_PGDN);
                    #else
                    tap_code(KC_PGUP);
                    #endif
                }
                break;
        }
    }

    return true;
}
