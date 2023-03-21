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

[_QWERTY] = LAYOUT_fpm101_wrapper(
    KC_ESC,    KC_1,      KC_2,      KC_3,      KC_4,      KC_5,       KC_LPRN,                                            KC_RPRN,   KC_6,      KC_7,      KC_8,      KC_9,      KC_0,      KC_BSPC,
    KC_TAB,    KC_Q,      KC_W,      KC_E,      KC_R,      KC_T,                                                                         _________________RGB_1_____________________,        KC_BSLS,
    KC_CAPS,   KC_A,      KC_S,      KC_D,      KC_F,      KC_G,       KC_LCBR,                                            KC_RCBR,      _________________RGB_2_____________________,        KC_QUOT,
    KC_LSFT,   KC_Z,      KC_X,      KC_C,      KC_V,      KC_B,       _WINBASE,                                           _WINBASE,  KC_N,      KC_M,         KC_COMM,   KC_DOT, KC_SLSH,   KC_ENT,
                          KC_MUTE,   KC_LGUI,   _WINBASE,  KC_SPC,     KC_LALT,     KC_MS_BTN1, KC_MS_BTN2, KC_MS_BTN3,    KC_RALT,   KC_SPC,    _WINBASE,     KC_RGUI,   KC_MUTE
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
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case LOWER:
            if (record->event.pressed) {
                layer_on(_LOWER);
                update_tri_layer(_LOWER, _RAISE, _ADJUST);
            } else {
                layer_off(_LOWER);
                update_tri_layer(_LOWER, _RAISE, _ADJUST);
            }
            return false;
            break;
        case RAISE:
            if (record->event.pressed) {
                layer_on(_RAISE);
                update_tri_layer(_LOWER, _RAISE, _ADJUST);
            } else {
                layer_off(_RAISE);
                update_tri_layer(_LOWER, _RAISE, _ADJUST);
            }
            return false;
            break;
        case ADJUST:
            if (record->event.pressed) {
                layer_on(_ADJUST);
            } else {
                layer_off(_ADJUST);
            }
            return false;
            break;
        default:
            break;
    }

    return true;
}
 */
