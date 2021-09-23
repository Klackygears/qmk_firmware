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
 [_MACBASE] = LAYOUT_wrapper( \


      _______________DVORAK_L1___________________,             _______________DVORAK_R1___________________, \
      _______________DVORAK_L2___________________,             _______________DVORAK_R2___________________, \
      _______________MACDVK_L3___________________,             _______________MACDVK_R3___________________, \
                             __________________MAC_THUMB_CLUSTER_V2______________ \
      ),

  [_WINBASE] = LAYOUT_wrapper( \

      _______________DVORAK_L1___________________,                   _______________DVORAK_R1___________________, \
      _______________DVORAK_L2___________________,                   _______________DVORAK_R2___________________, \
      _______________WINDVK_L3___________________,                   _______________WINDVK_R3___________________, \
                            __________________WIN_THUMB_CLUSTER_V2______________ \
      ),

  [_QWERTY] = LAYOUT_wrapper( \

      _________________QWERTY_L1_________________,             _________________QWERTY_R1_________________, \
      _________________QWERTY_L2_________________,             _________________QWERTY_R2_________________, \
      _________________QWERTY_L3_________________,             _________________QWERTY_R3_________________, \
                             __________________WIN_THUMB_CLUSTER_V2______________ \
      ),

  [_GAMER] = LAYOUT_wrapper( \

      _________________QWERTY_L1_________________,             _________________QWERTY_R1_________________, \
      _________________QWERTY_L2_________________,             _________________QWERTY_R2_________________, \
      _________________QWERTY_L3_________________,             _________________QWERTY_R3_________________, \
                             MO(_NGMR), MT(MOD_LSFT,KC_SPC), KC_SPC, ________WIN_THUMB_R______ \
      ),

  [_NGMR] = LAYOUT_wrapper( \

      KC_6,    KC_7,    KC_8,    KC_9,    KC_0,               _________________KC_BLANK__________________, \
      KC_1,    KC_2,    KC_3,    KC_4,    KC_5,               _________________KC_BLANK__________________, \
      _________________KC_BLANK__________________,            _________________MEDIA_____________________, \
                             _______, _______, _______, _______, _______, _______ \
      ),

  [_SYMB] = LAYOUT_wrapper( \

      _________________PUNC_L1_ALT_______________,             _________________PUNC_R1___________________,  \
      _________________PUNC_L3___________________,             _________________PUNC_R2___________________, \
      _________________PUNC_L3_ALT_______________,             _________________PUNC_R3___________________, \
                             KC_NLCK, KC_SLCK, KC_DEL,  KC_CAPS, _______, _______ \
      ),

  [_FUNC] = LAYOUT_wrapper( \

      _____________FUNC_L1_______________________,             KC_WINBASE, _____________FUNC_1_______________, \
      ________MAC_MISSION_CTRL__________, LGUI(KC_L),          KC_MACBASE, _____________FUNC_2_______________, \
      _____________FUNC_L3_______________________,             KC_GRV,     _____________FUNC_3_______________, \
                             _______, _______, KC_LSFT, KC_CAPS, KC_LSFT, MO(_MDIA) \
      ),

  [_MNMB] = LAYOUT_wrapper( \

      _________________MACNAV_L1_________________,             _________________NUMB_R1___________________, \
      _________________MACNAV_L2_________________,             _________________NUMB_R2___________________, \
      _________________MACNAV_L3_________________,             _________________NUMB_R3_MAC_______________, \
                             _______, _______, KC_LSFT, _______, KC_LSFT,  KC_0 \
      ),

  [_NUMB] = LAYOUT_wrapper( \

      _________________WINNAV_L1_________________,             _________________NUMB_R1___________________, \
      _________________WINNAV_L2_________________,             _________________NUMB_R2___________________, \
      _________________WINNAV_L3_________________,             _________________NUMB_R3_WIN_______________, \
                             _______, _______, KC_LSFT, _______, KC_LSFT,  KC_0 \
      ),


  [_MDIA] =  LAYOUT_wrapper( \

      _________________LYOUT_____________________,             _________________RGB_1_____________________, \
        MU_ON,  MU_OFF,  MU_MOD, _______, _______,            _________________RGB_2_____________________, \
      _________________KC_BLANK__________________,             _________________MEDIA_____________________, \
                             _______, _______, _______, _______, _______, _______ \
      )

};
