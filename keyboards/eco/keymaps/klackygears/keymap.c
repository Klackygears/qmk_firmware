
// Default ECO Layout
// KLE here : http://www.keyboard-layout-editor.com/#/gists/0733eca6b4cb88ff9d7de746803f4039

#include QMK_KEYBOARD_H
#include "klackygears.h"

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.




// Defines for task manager and such


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {


  [_WINBASE] = LAYOUT_wrapper(
    /*KC_ESC,  KC_Q,   KC_W,    KC_E,   KC_R,     KC_T,     KC_Y,   KC_U,   KC_I,     KC_O,     KC_P,    KC_LBRC, KC_RBRC, KC_BSPC,
    KC_TAB,  KC_A,   KC_S,    KC_D,   KC_F,     KC_G,     KC_H,   KC_J,   KC_K,     KC_L,     KC_SCLN, KC_QUOT, KC_ENT,  KC_BSLS,
    KC_LSFT, KC_Z,   KC_X,    KC_C,   KC_V,     KC_B,     KC_N,   KC_M,   KC_COMM,  KC_DOT,   KC_SLSH, KC_RSFT, KC_UP,   KC_DEL,
    KC_LCTL, KC_LGUI,KC_LALT, KC_DEL, KC_A, KC_A, KC_SPC, KC_SPC, KC_A, KC_A, KC_RCTL, KC_LEFT, KC_DOWN, KC_RGHT*/
    _______________DVORAK_L1___________________, _______, _______, _______, _______, _______________DVORAK_R1___________________,
    _______________DVORAK_L2___________________, _______, _______, _______, LGUI(KC_L), _______________DVORAK_R2___________________,
    _______________WINDVK_L3___________________, KC_ESC,  _______, _______, _______, _______________WINDVK_R3___________________,
    _______, _______, LT(_FUNC,KC_ENT), LT(_NUMB,KC_BSPC), _______, _______, MT(MOD_LSFT,KC_SPC), _______, _______, _______, LT(_SYMB,KC_TAB), LT(_SYMB,KC_ENT), _______, _______
  ),


  [_MACBASE] = LAYOUT_wrapper(
    _______________DVORAK_L1___________________, _______, _______, _______, _______, _______________DVORAK_R1___________________,
    _______________DVORAK_L2___________________, _______, _______, _______, _______, _______________DVORAK_R2___________________,
    _______________MACDVK_L3___________________, _______, _______, _______, _______, _______________WINDVK_R3___________________,
    _______, _______, LT(_FUNC,KC_ENT), LT(_MNMB,KC_BSPC), _______, _______, MT(MOD_LSFT,KC_SPC), _______, _______, _______, LT(_SYMB,KC_TAB), LT(_SYMB,KC_ENT), _______, _______
  ),


  [_SYMB] = LAYOUT_wrapper(
    _________________PUNC_L1_ALT_______________, _______, _______, _______, _______, _________________PUNC_R1___________________,
    _________________PUNC_L3___________________, _______, _______, _______, _______, _________________PUNC_R2___________________,
    _________________PUNC_L3_ALT_______________, _______, _______, _______, _______, _________________PUNC_R3___________________,
    _______, _______, _______, KC_DEL, _______, _______, _______, _______, _______, _______, KC_CAPS, _______, _______, _______
  ),

  [_FUNC] = LAYOUT_wrapper(
    _____________FUNC_L1_______________________, _______, _______, _______, _______, _______, _____________FUNC_1_______________,
    ________MAC_MISSION_CTRL__________, LGUI(KC_L), _______, _______, _______, _______, _______, _____________FUNC_2_______________,
    _____________FUNC_L3_______________________, _______, _______, _______, _______, _______, _____________FUNC_3_______________,
    _______, _______, _______, KC_DEL, _______, _______, _______, _______, _______, _______, KC_CAPS, _______, _______, _______
  ),

  [_MNMB] = LAYOUT_wrapper(
    _________________MACNAV_L1_________________, _______, _______, _______, _______, _________________NUMB_R1___________________,
    _________________MACNAV_L2_________________, _______, _______, _______, _______, _________________NUMB_R2___________________,
    _________________MACNAV_L3_________________, _______, _______, _______, _______, _________________NUMB_R3_MAC_______________,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, RSFT_T(KC_ENT), _______, _______
  ),

  [_NUMB] = LAYOUT_wrapper(
    _________________WINNAV_L1_________________, _______, _______, _______, _______, _________________NUMB_R1___________________,
    _________________WINNAV_L2_________________, _______, _______, _______, _______, _________________NUMB_R2___________________,
    _________________WINNAV_L3_________________, _______, _______, _______, _______, _________________NUMB_R3_WIN_______________,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, RSFT_T(KC_ENT), _______, _______
  ),

   [_MDIA] = LAYOUT_wrapper(
    _________________LYOUT_____________________, _______, _______, _______, RGB_TOG, _________________RGB_1_____________________,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _________________RGB_2_____________________,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _________________MEDIA_____________________,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
  )

};

