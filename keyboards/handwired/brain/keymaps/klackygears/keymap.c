#include QMK_KEYBOARD_H
#include "klackygears.h"

//For an explanation of what's going on here with the keymap wrappers, check out drashna's user folder.


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_WINBASE] = LAYOUT_wrapper(
             _______________DVORAK_L1___________________, KC_ESC,          KC_GAMER, _______________DVORAK_R1___________________,
    RGB_TOG, _______________DVORAK_L2___________________, _______,         KC_GAMR1, _______________DVORAK_R2___________________, RGB_TOG,
    RGB_MOD, _______________WINDVK_L3___________________, _______,         KC_GAMR2, _______________WINDVK_R3___________________, RGB_MOD,
             _______, _______,             __________________WIN_THUMB_CLUSTER_V2______________,                _______, _______,
                                        KC_NO,   KC_NO,   KC_NO,           KC_NO,   KC_NO,   KC_NO
  ),

  [_MACBASE] = LAYOUT_wrapper(
             _______________DVORAK_L1___________________, KC_ESC,       _______, _______________DVORAK_R1___________________,
    RGB_TOG, _______________DVORAK_L2___________________, _______,      _______, _______________DVORAK_R2___________________, RGB_TOG,
    RGB_MOD, _______________MACDVK_L3___________________, _______,      _______, _______________MACDVK_R3___________________, RGB_MOD,
             _______, _______,               __________________MAC_THUMB_CLUSTER_V2______________,          _______, _______,
                                        KC_NO,   KC_NO,   KC_NO,        KC_NO,   KC_NO,   KC_NO
  ),


  [_QWERTY] = LAYOUT_wrapper(
             _________________QWERTY_L1_________________, KC_ESC,       _______, _________________QWERTY_R1_________________,
    KC_CAPS, _________________QWERTY_L2_________________, _______,      _______, _________________QWERTY_R2_________________, KC_ENT,
    KC_LSFT, _________________QWERTY_L3_________________, _______,      _______, _________________QWERTY_R3_________________, KC_RSFT,
             KC_LCTL, KC_LALT,      KC_LGUI, MO(_MNMB), MO(_SYMB),      MO(_SYMB), MO(_MNMB), KC_RGUI,  MO(_MDIA), MO(_FUNC),
                                         KC_LSFT, KC_SPC,  KC_SPC,      KC_SPC,  KC_SPC,  KC_RSFT
  ),
  //Cyberpunk 2077
  [_GAMER] = LAYOUT_wrapper(
             KC_R,    KC_X,    KC_W,    KC_F,    KC_4,      KC_ESC,        KC_WINBASE, _________________RGB_1_____________________,
    KC_T,    KC_Q,    KC_A,    KC_S,    KC_D,    KC_3,      KC_I,          KC_GAMR1, _________________RGB_2_____________________, RGB_TOG,
    KC_P,    KC_E, KC_LALT,    KC_Z,    KC_1,    KC_2,      KC_M,          KC_GAMR2, _________________MEDIA_____________________, RGB_MOD,
             KC_J,    KC_V,          KC_CAPS,    KC_LSFT,   KC_SPC,        _______, KC_UP,   KC_N,            _______, _______,
                                     KC_TAB,     KC_LCTL,   KC_C,          KC_LEFT, KC_DOWN, KC_RIGHT
  ),
  //Borderlands
  [_GAMR1] = LAYOUT_wrapper(
             KC_R,    KC_G,    KC_W,    KC_E,    KC_1,      KC_ESC,        KC_WINBASE, _________________RGB_1_____________________,
    KC_TAB,  KC_V,    KC_A,    KC_S,    KC_D,    KC_2,        KC_L,        KC_GAMR1, _________________RGB_2_____________________, RGB_TOG,
    KC_T,    KC_I,    KC_F,    KC_Q,    KC_4,    KC_3,        KC_M,        KC_GAMR2, _________________MEDIA_____________________, RGB_MOD,
             KC_X,    KC_K,             KC_C,    KC_LSFT,   KC_SPC,        _______, KC_UP,   _______,           KC_TAB, KC_LALT,
                                        KC_Z,    KC_LCTL,  KC_LCTL,        KC_LEFT, KC_DOWN, KC_RIGHT
  ),
  //Outriders
  [_GAMR2] = LAYOUT_wrapper(
             KC_R,    KC_3,    KC_W,    KC_E,    KC_4,      KC_ESC,        KC_WINBASE, _________________RGB_1_____________________,
    KC_TAB,  KC_F,    KC_A,    KC_S,    KC_D,    KC_5,      KC_DEL,        KC_GAMR1,   _________________RGB_2_____________________, RGB_TOG,
    KC_O,    KC_I,    KC_2,    KC_Q,    KC_1,    KC_6,        KC_V,        KC_GAMR2,   _________________MEDIA_____________________, RGB_MOD,
             KC_X,    KC_G,             KC_H,    KC_LSFT,  KC_LCTL,        _______,    KC_UP,   KC_V,              KC_TAB, KC_LALT,
                                        KC_Y,    KC_SPC,      KC_Z,        KC_LEFT,    KC_DOWN, KC_RIGHT
  ),
  /*Jedi - Fallen Order
  [_GAMR2] = LAYOUT_wrapper(
             KC_R,    KC_Q,    KC_W,    KC_E,    KC_1,      KC_ESC,        KC_WINBASE, _________________RGB_1_____________________,
    KC_TAB,  KC_F,    KC_A,    KC_S,    KC_D,    KC_2, LSFT(KC_F2),        KC_GAMR1, _________________RGB_2_____________________, RGB_TOG,
    KC_TAB,  KC_TAB,  KC_X,    KC_Z,    KC_C,    KC_3,        KC_M,        KC_GAMR2, _________________MEDIA_____________________, RGB_MOD,
             KC_LCTL, KC_LALT,       KC_LCTL,    KC_LSFT,   KC_SPC,        _______, KC_UP,   _______,           _______, _______,
                                     KC_NO,      KC_LSFT,  KC_LSFT,        KC_LEFT, KC_DOWN, KC_RIGHT
  ),*/
  [_SYMB] = LAYOUT_wrapper(
             _________________PUNC_L1_ALT_______________, _______,      _______, _________________PUNC_R1___________________,
    _______, _________________PUNC_L3___________________, _______,      _______, _________________PUNC_R2___________________, _______,
    RGB_MOD, _________________PUNC_L3_ALT_______________, _______,      _______, _________________PUNC_R3___________________, _______,
             _______, _______,          _______, _______, KC_DEL,       KC_CAPS, BUZY,    _______,          _______, _______,
                                        _______, _______, KC_DEL,       KC_CAPS, _______, _______
  ),

  [_FUNC] = LAYOUT_wrapper(
             _____________FUNC_L1_______________________,    _______,      _______, _______, _____________FUNC_1_______________,
    _______, ________MAC_MISSION_CTRL__________, LGUI(KC_L), _______,      _______, _______, _____________FUNC_2_______________, _______,
    RGB_MOD, _____________FUNC_L3_______________________,    _______,      _______, _______, _____________FUNC_3_______________, _______,
             _______, _______,          _______, _______,    _______,      KC_CAPS, _______, _______,          _______, _______,
                                        _______, _______,    _______,      KC_CAPS, _______, _______
  ),

  [_MNMB] = LAYOUT_wrapper(
             _________________MACNAV_L1_________________, _______,      _______, _________________NUMB_R1___________________,
    _______, _________________MACNAV_L2_________________, _______,      _______, _________________NUMB_R2___________________, _______,
    RGB_MOD, _________________MACNAV_L3_________________, _______,      _______, _________________NUMB_R3_MAC_______________, _______,
             _______, _______,          _______, _______, _______,      _______, RSFT_T(KC_ENT), KC_RSFT,   _______, _______,
                                        _______, _______, _______,      _______, RSFT_T(KC_ENT), KC_RSFT
  ),


  [_NUMB] = LAYOUT_wrapper(
             _________________WINNAV_L1_________________, _______,      _______, _________________NUMB_R1___________________,
    _______, _________________WINNAV_L2_________________, _______,      _______, _________________NUMB_R2___________________, _______,
    RGB_MOD, _________________WINNAV_L3_________________, _______,      _______, _________________NUMB_R3_WIN_______________, _______,
             _______, _______,          _______, _______, _______,      _______, RSFT_T(KC_ENT), KC_RSFT,   _______, _______,
                                        _______, _______, _______,      _______, RSFT_T(KC_ENT), KC_RSFT
  ),

   [_MDIA] = LAYOUT_wrapper(
             _________________LYOUT_____________________, _______,      RGB_TOG, _________________RGB_1_____________________,
    _______, _________________KC_BLANK__________________, _______,      _______, _________________RGB_2_____________________, _______,
    RGB_MOD, _________________KC_BLANK__________________, _______,      _______, _________________MEDIA_____________________, _______,
             _______, _______,          _______, _______, _______,      _______, _______, _______,          _______, _______,
                                        _______, _______, _______,      _______, _______, _______
  )

  };
