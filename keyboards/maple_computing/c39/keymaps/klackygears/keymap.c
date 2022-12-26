#include QMK_KEYBOARD_H

#include "klackygears.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {


[_WINBASE] = LAYOUT_wrapper( \
    _______,   XXXXXXX, XXXXXXX, XXXXXXX, KC_MUTE, KC_VOLD, KC_VOLU, XXXXXXX, XXXXXXX, XXXXXXX, KC_HOME, KC_PGUP, MO(_MDIA),
    MO(_FUNC), KC_PAST, KC_PSLS, KC_MINS, KC_MINS, KC_GRV,  XXXXXXX, KC_GRV,  KC_LBRC, KC_RBRC, KC_END,  KC_PGDN, _______,
    _______,   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11, KC_F12
),

[_SYMB] = LAYOUT_wrapper( \
    _______, KC_PMNS, KC_P7,   KC_P8,   KC_P9,   _______, _______, _______, _______, _______, _______, _______, _______,
    _______, KC_PPLS, KC_P4,   KC_P5,   KC_P6,   _______, _______, _______, _______, _______, _______, _______, _______,
    _______, KC_P0,   KC_P1,   KC_P2,   KC_P3,   _______, _______, _______, _______, _______, _______, _______, KC_NUM
),


[_FUNC] = LAYOUT_wrapper( \
    _______, MAKEKF,  KC_HOME, KC_END,  KC_PAST,  KC_PGUP, _______, _______, _______, _______, _______, RALT(KC_Y), _______,
    _______, KC_LEFT, KC_UP,   KC_DOWN, KC_RIGHT, KC_PGDN, _______, _______, _______, _______, _______, _______,    KC_BSPC,
    _______, _______, _______, _______, _______,  _______, _______, _______, _______, _______, _______, _______,    _______
),

[_MDIA] =  LAYOUT_wrapper( \
    QK_BOOT, _______, _______, _______, _______, _______, _______, _________________RGB_1_____________________, _______,
    _______, _______, _______, _______, _______, _______, _______, _________________RGB_2_____________________, _______,
    _______, _______, _______, _______, _______, _______, _______, _________________MEDIA_____________________, _______
),

};



#if defined(RGBLIGHT_ENABLE) && defined(RGBLIGHT_LAYERS)
const rgblight_segment_t PROGMEM _WINBASE_layer[] = RGBLIGHT_LAYER_SEGMENTS({0, 0, HSV_OFF});
const rgblight_segment_t PROGMEM _SYMB_layer[] = RGBLIGHT_LAYER_SEGMENTS({0, 15, HSV_GOLDENROD});
const rgblight_segment_t PROGMEM _FUNC_layer[] = RGBLIGHT_LAYER_SEGMENTS({0, 15, HSV_RED});
const rgblight_segment_t PROGMEM _MDIA_layer[] = RGBLIGHT_LAYER_SEGMENTS({0, 15, HSV_WHITE});

const rgblight_segment_t* const PROGMEM user_rgb_layers[] = RGBLIGHT_LAYERS_LIST(
    _WINBASE_layer,
    _SYMB_layer,
    _FUNC_layer,
    _MDIA_layer
);

void keyboard_post_init_user(void) {
    rgblight_layers = user_rgb_layers;
}
layer_state_t default_layer_state_set_user(layer_state_t state) {
    rgblight_set_layer_state(0, layer_state_cmp(state, _WINBASE));

    return state;
}

layer_state_t layer_state_set_user(layer_state_t state) {

/* Add some indication for current function layer.
 *
 * N.B.: rgblight_set_layer_state calls rgblight_mode_noeeprom.

    rgblight_set_layer_state(1, layer_state_cmp(state, _SYMB));
    rgblight_set_layer_state(2, layer_state_cmp(state, _FUNC));
    rgblight_set_layer_state(3, layer_state_cmp(state, _MDIA));
*/
    return state;
}
#endif
