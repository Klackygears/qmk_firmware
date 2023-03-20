/* Copyright 2020 klackygears
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#include QMK_KEYBOARD_H
#include "klackygears.h"


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_WINBASE] = LAYOUT_wrapper(
    KC_ESC, _______, _______, KC_ESC,   _________________NUMBER_L__________________, _________________NUMBER_R__________________, KC_BSPC,
    _______________DVORAK_L1___________________, _______, _______, _______, _______, _______, _______________DVORAK_R1___________________,
    _______________DVORAK_L2___________________, _______, _______, _______, _______, _______, _______________DVORAK_R2___________________,
    _______________WINDVK_L3___________________, _______, _______, _______, _______, _______, _______________WINDVK_R3___________________,
    RGB_TOG, _______, ________WIN_THUMB_L______, _______, _______, _______, _______, _______, ________WIN_THUMB_R______, TG(_GAMR1), TG(_GAMER)
  ),


  [_GAMER] = LAYOUT_wrapper(
    KC_ESC,  KC_F3,   KC_F5,   KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,     KC_7,    KC_8,    KC_9,    KC_0,    KC_BSPC,
    KC_7,    KC_8,    KC_9,    KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,     KC_U,    KC_I,    KC_O,    KC_P,    KC_QUOT,
    KC_4,    KC_5,    KC_6,    KC_CAPS, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,     KC_J,    KC_K,    KC_L,    KC_SCLN, KC_ENT,
    KC_1,    KC_2,    KC_3,    KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,     KC_M,    KC_COMM, KC_DOT,  KC_SLSH, LT(_MDIA,KC_RSFT),
    KC_0,    KC_F1,   KC_F2,   KC_F3,   KC_LSFT, KC_LALT, KC_LCTL, KC_SPC,  KC_LEFT, KC_RIGHT, KC_LSFT, KC_LALT, KC_RCTL, _______, _______
  ),


  [_GAMR1] = LAYOUT_wrapper(
    KC_ESC,  KC_F3,   KC_F5,   KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,     KC_7,    KC_8,    KC_9,    KC_0,              KC_BSPC,
    KC_7,    KC_8,    KC_9,    KC_GRV,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,     KC_U,    KC_I,    KC_O,    KC_P,              KC_QUOT,
    KC_4,    KC_5,    KC_6,    KC_TAB,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,     KC_J,    KC_K,    KC_L,    KC_SCLN,           KC_ENT,
    KC_1,    KC_2,    KC_3,    KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,     KC_M,    KC_COMM, KC_DOT,  LT(_MDIA,KC_SLSH), KC_RSFT,
    KC_0,    KC_F1,   KC_F2,   KC_F3,   KC_LCTL, KC_LALT, KC_LSFT, KC_SPC,  KC_LEFT, KC_RIGHT, KC_LSFT, KC_LALT, KC_RCTL, _______,           _______
  ),



  [_GAMR2] = LAYOUT_wrapper(
    _______, _______, _______, KC_ESC,  _________________KC_BLANK__________________,    _________________KC_BLANK__________________, _______,
    _______, _______, KC_TAB,      KC_R,   KC_G,    KC_W,    KC_E,    KC_1,    _______, _______, _______, _______, _______, _______, _______,
    _______, _______, MO(_GAMR2),  KC_V,   KC_A,    KC_S,    KC_D,    KC_2,    _______, _______, _______, _______, _______, _______, _______,
    _______, _______, KC_C,        KC_I,   KC_F,    KC_Q,    KC_4,    KC_3,    KC_H,    KC_L,    _______, _______, _______, _______, _______,
    _______, _______, KC_Z,        KC_X,   KC_C,    KC_LCTL, KC_LSFT, KC_SPC,  KC_F3,   KC_F5,   _______, _______, _______, _______, _______
  ),


  [_SYMB] = LAYOUT_wrapper(
    KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_NLCK, KC_SLSH, KC_ASTR, KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,
    _________________PUNC_L1_ALT_______________, _______, KC_P7,   KC_P8,   KC_P9,  _______, _________________PUNC_R1___________________,
    _________________PUNC_L3___________________, _______, KC_P4,   KC_P5,   KC_P6,  _______, _________________PUNC_R2___________________,
    _________________PUNC_L3_ALT_______________, _______, KC_P1,   KC_P2,   KC_P3,  _______, _________________PUNC_R3___________________,
    _______, _______, _______, _______, KC_DEL, _________________KC_BLANK__________________, KC_CAPS, _______, BUZY, _______, _______
  ),


  [_FUNC] = LAYOUT_wrapper(
    KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_NLCK, KC_SLSH, KC_ASTR, KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,
    _____________FUNC_L1_______________________, _______, _______, _______, _______, _______, _______, _____________FUNC_1_______________,
    ________MAC_MISSION_CTRL__________, _______, LGUI(KC_L), _______, _______, _______, _______, _______, _____________FUNC_2_______________,
    _____________FUNC_L3_______________________, _______, _______, _______, _______, KC_GRV,  _______, _____________FUNC_3_______________,
    _________________KC_BLANK__________________, _________________KC_BLANK__________________, KC_CAPS, _______, _______, _______, _______
  ),


  [_MNMB] = LAYOUT_wrapper(
    KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,     KC_MINS, KC_PLUS, KC_QUES,  KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_DEL,
    _________________MACNAV_L1_________________, _______, _______, _______, _______, _______, _________________NUMB_R1___________________,
    _________________MACNAV_L2_________________, _______, _______, _______, _______, _______, _________________NUMB_R2___________________,
    _________________MACNAV_L3_________________, _______, _______, _______, _______, _______, _________________NUMB_R3_MAC_______________,
    _________________KC_BLANK__________________, _________________KC_BLANK__________________, KC_RSFT, _______, _______, _______, _______
  ),


  [_NUMB] = LAYOUT_wrapper(
    KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,     KC_MINS, KC_PLUS, KC_QUES,  KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_DEL,
    _________________WINNAV_L1_________________, _______, _______, _______, _______, _______, _________________NUMB_R1___________________,
    _________________WINNAV_L2_________________, _______, _______, _______, _______, _______, _________________NUMB_R2___________________,
    _________________WINNAV_L3_________________, _______, _______, _______, _______, _______, _________________NUMB_R3_WIN_______________,
    _________________KC_BLANK__________________, _________________KC_BLANK__________________, KC_RSFT, _______, _______, _______, _______
  ),


  [_MDIA] = LAYOUT_wrapper(
    _________________KC_BLANK__________________, _________________KC_BLANK__________________, _________________KC_BLANK__________________,
    _________________LYOUT_____________________, _______, _______, _______, _______, _______, _________________RGB_1_____________________,
    _________________KC_BLANK__________________, _______, _______, _______, _______, _______, _________________RGB_2_____________________,
    _________________KC_BLANK__________________, _______, _______, _______, _______, _______, _________________MEDIA_____________________,
    _________________KC_BLANK__________________, _________________KC_BLANK__________________, _________________KC_BLANK__________________
  )

};




// void matrix_init_user(void) {


// }

#ifdef RGBLIGHT_EFFECT_SNAKE
__attribute__ ((weak))
const uint8_t RGBLED_SNAKE_INTERVALS[] PROGMEM = {35, 25, 15};
#endif

#ifdef RGBLIGHT_EFFECT_KNIGHT
__attribute__ ((weak))
const uint8_t RGBLED_KNIGHT_INTERVALS[] PROGMEM = {35, 29, 17};
#endif

#if defined(RGBLIGHT_ENABLE) && defined(RGBLIGHT_LAYERS)
const rgblight_segment_t PROGMEM _WINBASE_layer[] = RGBLIGHT_LAYER_SEGMENTS({0, 0, HSV_OFF});
const rgblight_segment_t PROGMEM _GAMER_layer[] = RGBLIGHT_LAYER_SEGMENTS({40, 4, HSV_GOLD});
const rgblight_segment_t PROGMEM _GAMR1_layer[] = RGBLIGHT_LAYER_SEGMENTS({40, 4, HSV_CHARTREUSE});
const rgblight_segment_t PROGMEM _GAMR2_layer[] = RGBLIGHT_LAYER_SEGMENTS({40, 4, HSV_SPRINGGREEN});
const rgblight_segment_t PROGMEM _FUNC_layer[] = RGBLIGHT_LAYER_SEGMENTS({40, 4, HSV_RED});
const rgblight_segment_t PROGMEM _MDIA_layer[] = RGBLIGHT_LAYER_SEGMENTS({40, 4, HSV_WHITE});

const rgblight_segment_t* const PROGMEM user_rgb_layers[] = RGBLIGHT_LAYERS_LIST(
    _WINBASE_layer,
    _GAMER_layer,
    _GAMR1_layer,
    _GAMR2_layer,
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
 */
    //rgblight_set_layer_state(1, layer_state_cmp(state, _WINBASE));
    rgblight_set_layer_state(2, layer_state_cmp(state, _GAMER));
    rgblight_set_layer_state(3, layer_state_cmp(state, _GAMR1));
    rgblight_set_layer_state(4, layer_state_cmp(state, _GAMR2));
    rgblight_set_layer_state(5, layer_state_cmp(state, _FUNC));
    rgblight_set_layer_state(6, layer_state_cmp(state, _MDIA));

    return state;
}
#endif
