#include QMK_KEYBOARD_H
#include "klackygears.h"
//#include "users/klackygears/klackygears.h"
#include "stdio.h"
#include "users/klackygears/tap_dances.c"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {


  [_WINBASE] = LAYOUT_3x6_3_wrapper( \

      KC_ESC,    _______________DVORAK_L1___________________,                   _______________DVORAK_R1___________________, _______, \
      KC_LSFT,   _______________DVORAK_L2___________________,                   _______________DVORAK_R2___________________, KC_RSFT, \
      _______,   _______________WINDVK_L3___________________,                   _______________WINDVK_R3___________________, _______, \
                                           __________________WIN_THUMB_CLUSTER_V2______________ \
      ),

  [_QWERTY] = LAYOUT_3x6_3_wrapper( \

      KC_TAB,    _________________QWERTY_L1_________________,                   _________________QWERTY_R1_________________, KC_BSPC, \
      KC_CAPS,   _________________QWERTY_L2_________________,                   _________________QWERTY_R2_________________, KC_ENT, \
      KC_LSFT,   _________________QWERTY_L3_________________,                   _________________QWERTY_R3_________________, _______, \
                                          __________________WIN_THUMB_CLUSTER_V2______________ \
      ),

  [_GAMER] = LAYOUT_3x6_3_wrapper( \

      KC_TAB,    _________________QWERTY_L1_________________,                   _________________QWERTY_R1_________________, TO(_WINBASE), \
      KC_LCTL,   _________________QWERTY_L2_________________,                   _________________QWERTY_R2_________________, KC_ENT, \
      KC_LSFT,   _________________QWERTY_L3_________________,                   _________________QWERTY_R3_________________, KC_RSFT, \
                                          MO(_NGMR), MT(MOD_LSFT,KC_SPC), KC_SPC, ________WIN_THUMB_R______ \
      ),

  [_NGMR] = LAYOUT_3x6_3_wrapper( \

      KC_TAB,     KC_6,    KC_7,    KC_8,    KC_9,    KC_0,                     _________________KC_BLANK__________________, TO(_WINBASE), \
      KC_LCTL,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                     _________________KC_BLANK__________________, KC_ENT, \
      KC_LSFT,   _________________KC_BLANK__________________,                   _________________MEDIA_____________________, KC_RSFT, \
                                           _______, _______, _______, _______, _______, _______ \
      ),

  [_SYMB] = LAYOUT_3x6_3_wrapper( \

      _______, _________________PUNC_L1_ALT_______________,                   _________________PUNC_R1___________________, MAKEKF,  \
      _______, _________________PUNC_L3___________________,                   _________________PUNC_R2___________________, _______, \
      _______, _________________PUNC_L3_ALT_______________,                   _________________PUNC_R3___________________, _______, \
                                          _______, _______, KC_DEL,  KC_CAPS, _______, _______ \
      ),

  [_FUNC] = LAYOUT_3x6_3_wrapper( \

      _______, _____________FUNC_L1_______________________,                   KC_WINBASE, _____________FUNC_1_______________, _______, \
      _______, ________MAC_MISSION_CTRL__________, LGUI(KC_L),                KC_MACBASE, _____________FUNC_2_______________, _______, \
      _______, _____________FUNC_L3_______________________,                   KC_GRV,     _____________FUNC_3_______________, _______, \
                                          _______, _______, _______, KC_CAPS, KC_LSFT,   MO(_MDIA) \
      ),

  [_MNMB] = LAYOUT_3x6_3_wrapper( \

      _______, _________________MACNAV_L1_________________,                   _________________NUMB_R1___________________, _______, \
      _______, _________________MACNAV_L2_________________,                   _________________NUMB_R2___________________, _______, \
      _______, _________________MACNAV_L3_________________,                   _________________NUMB_R3_MAC_______________, _______, \
                                          _______, _______, KC_BSPC, _______, KC_LSFT,  KC_0 \
      ),

  [_NUMB] = LAYOUT_3x6_3_wrapper( \

      _______, _________________WINNAV_L1_________________,                   _________________NUMB_R1___________________, _______, \
      _______, _________________WINNAV_L2_________________,                   _________________NUMB_R2___________________, _______, \
      _______, _________________WINNAV_L3_________________,                   _________________NUMB_R3_WIN_______________, _______, \
                                          _______, _______, KC_BSPC, _______, KC_LSFT,  KC_0 \
      ),


  [_MDIA] =  LAYOUT_3x6_3_wrapper( \

      _______, _________________LYOUT_____________________,                   _________________RGB_1_____________________, _______, \
      _______, _________________KC_BLANK__________________,                   _________________RGB_2_____________________, _______, \
      _______, _________________KC_BLANK__________________,                   _________________MEDIA_____________________, _______, \
                                          _______, _______, _______, _______, _______, _______ \
      )

};

#ifdef ENCODER_MAP_ENABLE
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
  [0] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_MPRV, KC_MNXT), ENCODER_CCW_CW(RM_VALD, RM_VALU), ENCODER_CCW_CW(KC_RGHT, KC_LEFT), },
  [1] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_MPRV, KC_MNXT), ENCODER_CCW_CW(RM_VALD, RM_VALU), ENCODER_CCW_CW(KC_RGHT, KC_LEFT), },
  [2] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_MPRV, KC_MNXT), ENCODER_CCW_CW(RM_VALD, RM_VALU), ENCODER_CCW_CW(KC_RGHT, KC_LEFT), },
  [3] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_MPRV, KC_MNXT), ENCODER_CCW_CW(RM_VALD, RM_VALU), ENCODER_CCW_CW(KC_RGHT, KC_LEFT), },
};
#endif
