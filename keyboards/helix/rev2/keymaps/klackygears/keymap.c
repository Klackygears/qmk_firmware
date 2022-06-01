/* Copyright 2020 yushakobo
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
#include "bootloader.h"
#include "klackygears.h"
#include "bootloader.h"
#ifdef PROTOCOL_LUFA
#include "lufa.h"
#include "split_util.h"
#endif
#ifdef AUDIO_ENABLE
  #include "audio.h"
#endif

//#if HELIX_ROWS == 5
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {



    [_WINBASE] = LAYOUT_wrapper(
      KC_ESC,   _________________NUMBER_L__________________,                   _________________NUMBER_R__________________, KC_BSPC,
      KC_ESC,   _______________DVORAK_L1___________________,                   _______________DVORAK_R1___________________, _______,
      KC_TAB,   _______________DVORAK_L2___________________,                   _______________DVORAK_R2___________________, RGB_TOG,
      KC_LSFT,  _______________WINDVK_L3___________________, _______, _______, _______________WINDVK_R3___________________, RGB_MOD,
      KC_1,     KC_2,    KC_3,   ________WIN_THUMB_L______,   KC_SPC,  KC_SPC, ________WIN_THUMB_R______, KC_1,     TG(_GAMR2), TG(_GAMER)
    ),

    [_QWERTY] = LAYOUT_wrapper( \
      KC_ESC,   _________________NUMBER_L__________________,                   _________________NUMBER_R__________________, KC_BSPC,
      KC_CAPS,  _________________QWERTY_L1_________________,                   _________________QWERTY_R1_________________, KC_BSLASH,
      KC_TAB,   _________________QWERTY_L2_________________,                   _________________QWERTY_R2_________________, KC_ENT,
      KC_LSFT,  _________________QWERTY_L3_________________, _______, _______, _________________QWERTY_R3_________________, KC_RSFT,
      KC_LCTL, KC_LGUI, KC_LALT, _______, MO(_MNMB), MO(_SYMB), KC_SPC, KC_SPC, MO(_SYMB), MO(_MNMB), MO(_MDIA), MO(_FUNC), _______, _______
    ),

    [_MACBASE] = LAYOUT_wrapper( \
      RGB_MOD,   _______, ________MAC_MISSION_CTRL__________,                   _________________KC_BLANK__________________, _______, \
      KC_ESC,    _______________DVORAK_L1___________________,                   _______________DVORAK_R1___________________, _______, \
      KC_LSFT,   _______________DVORAK_L2___________________,                   _______________DVORAK_R2___________________, KC_RSFT, \
      KC_LSFT,   _______________MACDVK_L3___________________, _______, _______, _______________MACDVK_R3___________________, KC_RSFT, \
      MO(_MDIA), KC_ENT, KC_LALT, KC_TAB, __________________MAC_THUMB_CLUSTER_V2______________, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT \
      ),

    //1st Game Layer
    [_GAMER] = LAYOUT_wrapper(
      KC_ESC,   _________________NUMBER_L__________________,                    _________________NUMBER_R__________________,  KC_WINBASE,
      KC_ESC,      KC_R,    KC_G,    KC_W,    KC_E,    KC_1,                     KC_T,    KC_Z,    _______, _______, KC_UP,    KC_WINBASE,
      OSL(_GAMR1), KC_V,    KC_A,    KC_S,    KC_D,    KC_2,                     KC_P,    KC_LBRC, KC_RBRC, KC_LEFT, KC_DOWN,  KC_RIGHT,
      KC_C,        KC_I,    KC_F,    KC_Q,    KC_4,    KC_3,   _______, _______, _________________MEDIA_____________________,  SPAM,
      KC_Z,        KC_X,    KC_C,    KC_LCTL, KC_LSFT, KC_SPC, KC_F3,   KC_F5,   KC_Q,   KC_C,     KC_B,    KC_ENT,  _______,  _______
    ),

    //2nd Game Layer
    [_GAMR1] = LAYOUT_wrapper(
      KC_ESC,  _________________NUMBER_L__________________,                     _________________NUMBER_R__________________, KC_WINBASE,
      KC_R,    _________________NUMB_R1_Game______________,                     KC_T,    KC_Z,    _______, _______, KC_UP,   KC_WINBASE,
      KC_H,    _________________NUMB_R2_Game______________,                     KC_P,    KC_LBRC, KC_RBRC, KC_LEFT, KC_DOWN, KC_RIGHT,
      KC_TAB,  _________________NUMB_R3_Game______________,   _______, _______, _________________MEDIA_____________________, _______,
      KC_Z,       KC_X,    KC_C,    KC_LCTL, KC_LSFT, KC_SPC, KC_F3,   KC_F5,   KC_Q,   KC_C,     KC_B,    KC_ENT,  _______,  _______
    ),

    [_GAMR2] = LAYOUT_wrapper(
      KC_ESC,  _________________NUMBER_L__________________,                     _________________NUMBER_R__________________, KC_WINBASE,
      KC_U,    KC_R,    KC_Q,     KC_W,     KC_E,     KC_T,                     KC_T,    KC_Z,    _______, _______, KC_UP,   KC_WINBASE,
      KC_TAB,  KC_F,    KC_A,     KC_S,     KC_D,     KC_G,                     KC_P,    KC_LBRC, KC_RBRC, KC_LEFT, KC_DOWN, KC_RIGHT,
      KC_I,    KC_B,    KC_X,     KC_C,     KC_V,     KC_Z,    KC_F2,   KC_F4,  _________________MEDIA_____________________, KC_RSFT,
      KC_LCTL, KC_N,    KC_V,     KC_LALT,  KC_LCTL,  KC_LSFT, KC_SPC,  KC_F1,  _______, _______, _______, KC_ENT,  _______, _______
      ),

  [_SYMB] = LAYOUT_wrapper(
      _______, _________________KC_BLANK__________________,                   _________________KC_BLANK__________________, _______,
      _______, _________________PUNC_L1_ALT_______________,                   _________________PUNC_R1___________________, _______,
      _______, _________________PUNC_L3___________________,                   _________________PUNC_R2___________________, _______,
      _______, _________________PUNC_L3_ALT_______________, _______, _______, _________________PUNC_R3___________________, _______,
      _______, _______, KC_NLCK, KC_SLCK, KC_DEL,  _______, _______, _______, KC_CAPS, _________________KC_BLANK__________________
      ),

  [_FUNC] = LAYOUT_wrapper(
      _______, _________________KC_BLANK__________________,                   _________________KC_BLANK__________________, _______,
      _______, _____________FUNC_L1_______________________,                   _______, _____________FUNC_1_______________, _______,
      _______, ________MAC_MISSION_CTRL__________, LGUI(KC_L),                _______, _____________FUNC_2_______________, _______,
      _______, _____________FUNC_L3_______________________, _______, KC_ESC,  KC_GRV,  _____________FUNC_3_______________, _______,
      _______, KC_PSCR, _______, _______, KC_LSCR, _______, KC_DEL,  _______, KC_CAPS, _________________KC_BLANK__________________
      ),

  [_MNMB] = LAYOUT_wrapper(
      _______, _________________NUMBER_L__________________,                   _________________NUMBER_R__________________, _______,
      _______, _________________MACNAV_L1_________________,                   _________________NUMB_R1___________________, _______,
      _______, _________________MACNAV_L2_________________,                   _________________NUMB_R2___________________, _______,
      _______, _________________MACNAV_L3_________________, _______, _______, _________________NUMB_R3_MAC_______________, _______,
      _________________KC_BLANK__________________, _______, _______, _______, KC_LSFT, KC_LSFT, _______, _______, _______, _______
      ),

  [_NUMB] = LAYOUT_wrapper(
      _______, _________________NUMBER_L__________________,                   _________________NUMBER_R__________________, _______,
      _______, _________________WINNAV_L1_________________,                   _________________NUMB_R1___________________, _______,
      _______, _________________WINNAV_L2_________________,                   _________________NUMB_R2___________________, _______,
      _______, _________________WINNAV_L3_________________, _______, _______, _________________NUMB_R3_WIN_______________, _______,
      _________________KC_BLANK__________________, _______, _______, _______, KC_LSFT, KC_LSFT, _______, _______, _______, _______
      ),


  [_MDIA] =  LAYOUT_wrapper(
      _______, _________________KC_BLANK__________________,                   _________________LYOUT_____________________, _______,
      _______, _________________LYOUT_____________________,                   _________________RGB_1_____________________, KC_SLEP,
      _______, _________________KC_BLANK__________________,                   _________________RGB_2_____________________, _______,
      _______, _________________KC_BLANK__________________, _______, KC_SLEP, _________________MEDIA_____________________, _______,
      _______, _________________KC_BLANK__________________, _______, _______, _________________MEDIA_V2__________________, _______
      )

};



// define variables for reactive RGB
bool TOG_STATUS = false;
