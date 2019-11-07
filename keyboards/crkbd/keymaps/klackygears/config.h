/*
This is the c configuration file for the keymap

Copyright 2012 Jun Wako <wakojun@gmail.com>
Copyright 2015 Jack Humbert

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

//#define USE_MATRIX_I2C

/* Select hand configuration */

#define MASTER_LEFT
// #define MASTER_RIGHT
// #define EE_HANDS

#define SSD1306OLED

#define USE_SERIAL_PD2
#define PERMISSIVE_HOLD

#define PREVENT_STUCK_MODIFIERS
//#define TAPPING_FORCE_HOLD
#define TAPPING_TERM 150
#define IGNORE_MOD_TAP_INTERRUPT
//#define RETRO_TAPPING

#undef RGBLED_NUM
//#define RGBLIGHT_ANIMATIONS


#undef RGBLED_NUM
#define RGBLED_NUM 16


//#define RGBLIGHT_LED_MAP {0,8,1,9,2,10,3,11,4,12,5,13,6,14,7,15}
//#define RGBLIGHT_LED_MAP {7,15,6,14,5,13,4,12,3,11,2,10,1,9,0,8}
//#define RGBLIGHT_LED_MAP {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15}
//#define RGBLIGHT_LED_MAP {0,15,1,14,2,13,3,12,4,11,5,10,6,9,7,8}
//#define RGBLIGHT_LED_MAP {0,8,1,9,2,10,3,11,4,12,5,13,6,14,7,15}
#define RGBLIGHT_LED_MAP {0,2,4,6,8,10,12,14,1,3,5,7,9,11,13,15}

//#define RGBLIGHT_LIMIT_VAL 120
#define RGBLIGHT_HUE_STEP 5
#define RGBLIGHT_SAT_STEP 17
#define RGBLIGHT_VAL_STEP 17



//#if defined(LED_ANIMATIONS)
//  #define RGBLIGHT_EFFECT_BREATHING
//   #define RGBLIGHT_EFFECT_RAINBOW_MOOD
   #define RGBLIGHT_EFFECT_RAINBOW_SWIRL
//   #define RGBLIGHT_EFFECT_RAINBOW_SPARKLE
     #define RGBLIGHT_EFFECT_SNAKE
     #undef  RGBLIGHT_EFFECT_SNAKE_LENGTH
     #define RGBLIGHT_EFFECT_SNAKE_LENGTH 5
//   #define RGBLIGHT_EFFECT_KNIGHT
//   #undef  RGBLIGHT_EFFECT_KNIGHT_LENGTH
//   #define RGBLIGHT_EFFECT_KNIGHT_LENGTH 5
//   #define RGBLIGHT_EFFECT_CHRISTMAS
//   #define RGBLIGHT_EFFECT_STATIC_GRADIENT
//   #define RGBLIGHT_EFFECT_RGB_TEST
//   #define RGBLIGHT_EFFECT_ALTERNATING
//     #define RGBLIGHT_EFFECT_BEAM
//     #define RGBLIGHT_EFFECT_HYPERBEAM
//#endif

#undef PRODUCT
#define PRODUCT klackygears Corne Keyboard

#define OLED_FONT_H "keyboards/crkbd/keymaps/klackygears/glcdfont.c"
