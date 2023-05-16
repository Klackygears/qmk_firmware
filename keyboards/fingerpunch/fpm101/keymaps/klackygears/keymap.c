#include QMK_KEYBOARD_H
#include "klackygears.h"

// Defines names for use in layer keycodes and the keymap
/* enum layer_names {
    _QWERTY,
    _COLEMAK,
    _LOWER,
    _RAISE,
    _ADJUST
}; */

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

[_WINBASE] = LAYOUT_fpm101_wrapper(
    KC_ESC,    KC_1,      KC_2,      KC_3,      KC_4,      KC_5,      EE_CLR,                                          KC_RPRN,   KC_6,      KC_7,      KC_8,      KC_9,      KC_0,      KC_BSPC,
    KC_TAB,      _______________DVORAK_L1___________________,                                                               _________________RGB_1_____________________, KC_BSPC,
    AU_TOGG,     _______________DVORAK_L2___________________,  KC_LCBR,                                          KC_RCBR,   _________________RGB_2_____________________, RGB_TOG,
    CK_TOGG,     _______________WINDVK_L3___________________,  _WINBASE,                                         _WINBASE,  _______________WINDVK_R3___________________, RGB_MOD,
                        KC_MUTE,   KC_LGUI,   ________WIN_THUMB_L______,   KC_MS_BTN1, KC_MS_BTN2, KC_MS_BTN3,   ________WIN_THUMB_R______,  _WINBASE,  KC_MUTE
),


[_MDIA] = LAYOUT_fpm101_wrapper(
    KC_ESC,    KC_1,      KC_2,      KC_3,      KC_4,      KC_5,      KC_LPRN,                                          KC_RPRN,   KC_6,      KC_7,      KC_8,      KC_9,      KC_0,      KC_BSPC,
    KC_TAB,    KC_Q,      KC_W,      KC_F,      KC_P,      KC_B,                                                                   KC_J,      KC_L,      KC_U,      KC_Y,      KC_SCLN,   KC_BSLS,
    KC_CAPS,   KC_A,      KC_R,      KC_S,      KC_T,      KC_G,      KC_LCBR,                                          KC_RCBR,   KC_M,      KC_N,      KC_E,      KC_I,      KC_O,      KC_QUOT,
    KC_LSFT,   KC_Z,      KC_X,      KC_C,      KC_D,      KC_V,      _WINBASE,                                         _WINBASE,  KC_K,      KC_H,      KC_COMM,   KC_DOT,    KC_SLSH,   KC_ENT,
                          KC_MUTE,   KC_LGUI,   _WINBASE,  KC_SPC,    KC_LALT,   KC_MS_BTN1, KC_MS_BTN2, KC_MS_BTN3,    KC_RALT,   KC_SPC,    _WINBASE,  KC_RGUI,   KC_MUTE
)
};


/*
#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
    [_QWERTY] =   { ENCODER_CCW_CW(KC_1, KC_2), ENCODER_CCW_CW(KC_1, KC_2) },
    [_MDIA]   =   { ENCODER_CCW_CW(KC_1, KC_2), ENCODER_CCW_CW(KC_1, KC_2) },
};
#endif
 */

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
                // super ctrl tab
                // switch between browser windows, or files in vscode
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
                    tap_code(KC_1);
                    #else
                    tap_code(KC_2);
                    #endif
                } else {
                    #ifdef ENCODERS_A_REVERSE
                    tap_code(KC_2);
                    #else
                    tap_code(KC_1);
                    #endif
                }
                break;
        }
    }

    return true;
}

