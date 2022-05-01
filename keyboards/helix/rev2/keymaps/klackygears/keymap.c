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



  [_MACBASE] = LAYOUT_wrapper( \
      RGB_MOD,   _______, ________MAC_MISSION_CTRL__________,                   _________________KC_BLANK__________________, _______, \
      KC_ESC,    _______________DVORAK_L1___________________,                   _______________DVORAK_R1___________________, _______, \
      KC_LSFT,   _______________DVORAK_L2___________________,                   _______________DVORAK_R2___________________, KC_RSFT, \
      KC_LSFT,   _______________MACDVK_L3___________________, _______, _______, _______________MACDVK_R3___________________, KC_RSFT, \
      MO(_MDIA), KC_ENT, KC_LALT, KC_TAB, __________________MAC_THUMB_CLUSTER_V2______________, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT \
      ),

  [_WINBASE] = LAYOUT_wrapper( \
      RGB_MOD,   _______, ________MAC_MISSION_CTRL__________,                   _________________KC_BLANK__________________, _______, \
      KC_ESC,    _______________DVORAK_L1___________________,                   _______________DVORAK_R1___________________, _______, \
      KC_LSFT,   _______________DVORAK_L2___________________,                   _______________DVORAK_R2___________________, KC_RSFT, \
      KC_LSFT,   _______________WINDVK_L3___________________, _______, _______, _______________WINDVK_R3___________________, KC_RSFT, \
      MO(_MDIA), KC_ENT, KC_LALT, KC_TAB, __________________WIN_THUMB_CLUSTER_V2______________, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT \
      ),

  [_QWERTY] = LAYOUT_wrapper( \
      KC_GESC,  _________________NUMBER_L__________________,                   _________________NUMBER_R__________________, MO(_MDIA), \
      KC_TAB,   _________________QWERTY_L1_________________,                   _________________QWERTY_R1_________________, KC_BSLASH, \
      KC_CAPS,  _________________QWERTY_L2_________________,                   _________________QWERTY_R2_________________, KC_ENT, \
      KC_LSPO,  _________________QWERTY_L3_________________, _______, _______, _________________QWERTY_R3_________________, KC_RSPC, \
      KC_LCTRL, KC_LALT, KC_LGUI, KC_SPC, __________________MAC_THUMB_CLUSTER_V2______________, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT \
      ),

  [_SYMB] = LAYOUT_wrapper( \
      _______, _________________KC_BLANK__________________,                   _________________KC_BLANK__________________, _______, \
      _______, _________________PUNC_L1_ALT_______________,                   _________________PUNC_R1___________________, _______, \
      _______, _________________PUNC_L3___________________,                   _________________PUNC_R2___________________, _______, \
      _______, _________________PUNC_L3_ALT_______________, _______, _______, _________________PUNC_R3___________________, _______, \
      _________________KC_BLANK__________________, _______, KC_DEL,  KC_CAPS, _______, _________________KC_BLANK__________________ \
      ),

  [_FUNC] = LAYOUT_wrapper( \
      _______, _________________KC_BLANK__________________,                   _________________KC_BLANK__________________, _______, \
      _______, _____________FUNC_L1_______________________,                   _______, _____________FUNC_1_______________, _______, \
      _______, ________MAC_MISSION_CTRL__________, LGUI(KC_L),                _______, _____________FUNC_2_______________, _______, \
      _______, _____________FUNC_L3_______________________, _______, KC_ESC,  KC_GRV,  _____________FUNC_3_______________, _______, \
      _______, _______, _______, _______, _______, _______, KC_DEL,  KC_CAPS, _______, _________________KC_BLANK__________________ \
      ),

  [_MNMB] = LAYOUT_wrapper( \
      _______, _________________NUMBER_L__________________,                   _________________NUMBER_R__________________, _______, \
      _______, _________________MACNAV_L1_________________,                   _________________NUMB_R1___________________, _______, \
      _______, _________________MACNAV_L2_________________,                   _________________NUMB_R2___________________, _______, \
      _______, _________________MACNAV_L3_________________, _______, _______, _________________NUMB_R3_MAC_______________, _______, \
      _________________KC_BLANK__________________, _______, _______, _______, KC_LSFT, KC_0, _______, _______, _______, _______ \
      ),

  [_NUMB] = LAYOUT_wrapper( \
      _______, _________________NUMBER_L__________________,                   _________________NUMBER_R__________________, _______, \
      _______, _________________WINNAV_L1_________________,                   _________________NUMB_R1___________________, _______, \
      _______, _________________WINNAV_L2_________________,                   _________________NUMB_R2___________________, _______, \
      _______, _________________WINNAV_L3_________________, _______, _______, _________________NUMB_R3_WIN_______________, _______, \
      _________________KC_BLANK__________________, _______, _______, _______, KC_LSFT, KC_0, _______, _______, _______, _______ \
      ),


  [_MDIA] =  LAYOUT_wrapper( \
      _______, _________________KC_BLANK__________________,                   _________________LYOUT_____________________, _______, \
      _______, _________________LYOUT_____________________,                   _________________RGB_1_____________________, KC_SLEP, \
      _______, _________________KC_BLANK__________________,                   _________________RGB_2_____________________, _______, \
      _______, _________________KC_BLANK__________________, _______, KC_SLEP, _________________MEDIA_____________________, _______, \
      _______, _________________KC_BLANK__________________, _______, _______, _________________MEDIA_V2__________________, _______ \
      )

};



// define variables for reactive RGB
bool TOG_STATUS = false;

void persistent_default_layer_set(uint16_t default_layer) {
  eeconfig_update_default_layer(default_layer);
  default_layer_set(default_layer);
}

// Setting MDIA layer RGB back to default
void update_tri_layer_RGB(uint8_t layer1, uint8_t layer2, uint8_t layer3) {
  if (IS_LAYER_ON(layer1) && IS_LAYER_ON(layer2)) {
    #ifdef RGBLIGHT_ENABLE
      //rgblight_mode(RGB_current_mode);
    #endif
    layer_on(layer3);
  } else {
    layer_off(layer3);
  }
}

void matrix_init_user(void) {
    #ifdef AUDIO_ENABLE
        startup_user();
    #endif
   // #ifdef RGBLIGHT_ENABLE
   //   RGB_current_mode = rgblight_config.mode;
   // #endif
    //SSD1306 OLED init, make sure to add #define SSD1306OLED in config.h
    #ifdef SSD1306OLED
        iota_gfx_init(!has_usb());   // turns on the display
    #endif
}

//SSD1306 OLED update loop, make sure to add #define SSD1306OLED in config.h
#ifdef SSD1306OLED

// hook point for 'led_test' keymap
//   'default' keymap's led_test_init() is empty function, do nothing
//   'led_test' keymap's led_test_init() force rgblight_mode_noeeprom(RGBLIGHT_MODE_RGB_TEST);
__attribute__ ((weak))
void led_test_init(void) {}


void matrix_scan_user(void) {

     led_test_init();
     iota_gfx_task();  // this is what updates the display continuously
}


void matrix_update(struct CharacterMatrix *dest,
                          const struct CharacterMatrix *source) {
  if (memcmp(dest->display, source->display, sizeof(dest->display))) {
    memcpy(dest->display, source->display, sizeof(dest->display));
    dest->dirty = true;
  }
}

//assign the right code to your layers for OLED display
#define L_BASE 0
#define L_WIN  (_WINBASE)
#define L_SYMB (1<<_SYMB)
#define L_FUNC (1<<_FUNC)
#define L_MNMB (1<<_MNMB)
#define L_NUMB (1<<_NUMB)
#define L_MDIA (1<<_MDIA)
#define L_MDIA_TRI (L_MDIA|L_MNMB|L_SYMB)

static void render_logo(struct CharacterMatrix *matrix) {

  static char logo[]={
    0x80,0x81,0x82,0x83,0x84,0x85,0x86,0x87,0x88,0x89,0x8a,0x8b,0x8c,0x8d,0x8e,0x8f,0x90,0x91,0x92,0x93,0x94,
    0xa0,0xa1,0xa2,0xa3,0xa4,0xa5,0xa6,0xa7,0xa8,0xa9,0xaa,0xab,0xac,0xad,0xae,0xaf,0xb0,0xb1,0xb2,0xb3,0xb4,
    0xc0,0xc1,0xc2,0xc3,0xc4,0xc5,0xc6,0xc7,0xc8,0xc9,0xca,0xcb,0xcc,0xcd,0xce,0xcf,0xd0,0xd1,0xd2,0xd3,0xd4,
    0};
  matrix_write(matrix, logo);
  //matrix_write_P(&matrix, PSTR(" Split keyboard kit"));
}



void render_status(struct CharacterMatrix *matrix) {

  // Render to mode icon
  static char logo[][2][3]={{{0x95,0x96,0},{0xb5,0xb6,0}},{{0x97,0x98,0},{0xb7,0xb8,0}}};
  switch (default_layer_state){
    case _MACBASE:
    matrix_write(matrix, logo[1][0]);
    matrix_write_P(matrix, PSTR("\n"));
    matrix_write(matrix, logo[1][1]);
    break;
    case L_WIN:
    matrix_write(matrix, logo[0][0]);
    matrix_write_P(matrix, PSTR("\n"));
    matrix_write(matrix, logo[0][1]);
    break;
  }

  // Define layers here, Have not worked out how to have text displayed for each layer. Copy down the number you see and add a case for it below
  char buf[40];
  snprintf(buf,sizeof(buf), "Undef-%ld", layer_state);
  matrix_write_P(matrix, PSTR("\nLAYER: "));
    switch (layer_state) {
        case L_BASE:
           matrix_write_P(matrix, PSTR("Primary"));
           break;
        case L_MNMB:
           matrix_write_P(matrix, PSTR("MAC Num"));
           break;
        case L_NUMB:
           matrix_write_P(matrix, PSTR("WIN Num"));
           break;
        case L_SYMB:
           matrix_write_P(matrix, PSTR("Punc"));
           break;
        case L_FUNC:
           matrix_write_P(matrix, PSTR("Func"));
           break;
        case L_MDIA:
        case L_MDIA_TRI:
           matrix_write_P(matrix, PSTR("Media"));
           break;
        default:
           matrix_write(matrix, buf);
    }

  // Host Keyboard LED Status
  char led[40];
  snprintf(led, sizeof(led), "\n%s  %s  %s",
            (host_keyboard_leds() & (1<<USB_LED_NUM_LOCK)) ? "" : "",
            (host_keyboard_leds() & (1<<USB_LED_CAPS_LOCK)) ? "CAPS" : "    ",
            (host_keyboard_leds() & (1<<USB_LED_SCROLL_LOCK)) ? "SCLK" : "    ");
  matrix_write(matrix, led);
}


void iota_gfx_task_user(void) {
  struct CharacterMatrix matrix;

#if DEBUG_TO_SCREEN
  if (debug_enable) {
    return;
  }
#endif

  matrix_clear(&matrix);
  if(is_master){
    render_status(&matrix);
  }else{
    render_logo(&matrix);
  }
  matrix_update(&display, &matrix);
}

#endif
