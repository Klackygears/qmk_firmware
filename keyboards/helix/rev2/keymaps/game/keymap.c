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
#ifdef PROTOCOL_LUFA
#include "lufa.h"
#include "split_util.h"
#endif
#ifdef AUDIO_ENABLE
  #include "audio.h"
#endif

//#if HELIX_ROWS == 5
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [_QWERTY] = LAYOUT_wrapper(
      KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                  KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_BSPC,
      KC_ESC,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                  KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSLASH,
      KC_TAB,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                  KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_ENT,
      KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_F3, KC_F1, KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT ,
      KC_LCTL, KC_LALT, KC_LGUI, KC_SPC,  KC_SPC,  KC_SPC,  KC_F5, KC_F2, _______, _______, _______, MO(_SYMB), MO(_MDIA), MO(_MDIA)
    ),

     /* Symbol
    * ,-----------------------------------------.             ,-----------------------------------------.
    * |   ~  |   !  |   @  |   #  |   $  |   %  |             |   ^  |   &  |   *  |   (  |   )  |      |
    * |------+------+------+------+------+------|             |------+------+------+------+------+------|
    * |   ~  |   !  |   @  |   #  |   $  |   %  |             |   ^  |   &  |   *  |   (  |   )  |      |
    * |------+------+------+------+------+------|             |------+------+------+------+------+------|
    * |      |  F1  |  F2  |  F3  |  F4  |  F5  |             |  F6  |   _  |   +  |   {  |   }  |  |   |
    * |------+------+------+------+------+------+------+------+------+------+------+------+------+------|
    * | CAPS |  F7  |  F8  |  F9  |  F10 |  F11 |  (   |   )  |  F12 |      |      | Home | End  |      |
    * |------+------+------+------+------+------+------+------+------+------+------+------+------+------|
    * |      |      |      |      |      |      |      |      |      |      | Next | Vol- | Vol+ | Play |
    * `-------------------------------------------------------------------------------------------------'
    */

    [_SYMB] = LAYOUT_wrapper(
      KC_TILD, KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC,                   KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, _______,
      KC_TILD, KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC,                   KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, _______,
      _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                     KC_F6,   KC_UNDS, KC_PLUS, KC_LCBR, KC_RCBR, KC_PIPE,
      _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
      _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
      ),

    [_MDIA] =  LAYOUT_wrapper(
      KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,                     KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,
      _______, _______, _______, _______, _______, _______,                   RGBRST,  RGB_HUI, RGB_SAI, RGB_VAI, RGB_SPI, _______,
      _______, _______, _______, _______, _______, _______,                   RGB_MOD, RGB_HUD, RGB_SAD, RGB_VAD, RGB_SPD, _______,
      _______, _______, _______, _______, _______, _______, _______, _______, KC_MPLY, KC_MUTE, KC_VOLD, KC_VOLU, _______, _______,
      _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
      )

};



// define variables for reactive RGB
bool TOG_STATUS = false;

