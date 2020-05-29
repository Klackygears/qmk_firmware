/* Copyright 2019 gtips
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

#pragma once


#define PERMISSIVE_HOLD

#define PREVENT_STUCK_MODIFIERS

#define TAPPING_TERM 150
#define IGNORE_MOD_TAP_INTERRUPT
// place overrides here
//   #define RGB_MATRIX_STARTUP_VAL 50
//   #define RGB_MATRIX_MAXIMUM_BRIGHTNESS 150
//   #define DISABLE_RGB_MATRIX_ALPHAS_MODS
//   #define DISABLE_RGB_MATRIX_GRADIENT_UP_DOWN
//   #define DISABLE_RGB_MATRIX_BAND_PINWHEEL_SAT
//   #define DISABLE_RGB_MATRIX_BAND_PINWHEEL_VAL
//   #define DISABLE_RGB_MATRIX_BAND_SPIRAL_SAT
//   #define DISABLE_RGB_MATRIX_BAND_SPIRAL_VAL
//   #define DISABLE_RGB_MATRIX_CYCLE_ALL
//   #define DISABLE_RGB_MATRIX_CYCLE_LEFT_RIGHT
//   #define DISABLE_RGB_MATRIX_CYCLE_UP_DOWN
//   #define DISABLE_RGB_MATRIX_CYCLE_UP_DOWN
//   #define DISABLE_RGB_MATRIX_CYCLE_OUT_IN_DUAL
//   #define DISABLE_RGB_MATRIX_RAINBOW_MOVING_CHEVRON



// #ifdef RGB_DI_PIN
//   #define RGBLED_NUM 11
//   #define RGBLIGHT_HUE_STEP 16
//   #define RGBLIGHT_SAT_STEP 16
//   #define RGBLIGHT_VAL_STEP 16
//   #define RGBLIGHT_LIMIT_VAL 255 /* The maximum brightness level */
//   #define RGBLIGHT_SLEEP  /* If defined, the RGB lighting will be switched off when the host goes to sleep */
// // /*== all animations enable ==*/
//   #define RGBLIGHT_ANIMATIONS
// /*== or choose animations ==*/
//   #define RGBLIGHT_EFFECT_BREATHING
//   #define RGBLIGHT_EFFECT_RAINBOW_MOOD
//   #define RGBLIGHT_EFFECT_RAINBOW_SWIRL
//   #define RGBLIGHT_EFFECT_SNAKE
//   #define RGBLIGHT_EFFECT_KNIGHT
//   #define RGBLIGHT_EFFECT_CHRISTMAS
//   #define RGBLIGHT_EFFECT_STATIC_GRADIENT
//   #define RGBLIGHT_EFFECT_RGB_TEST
//   #define RGBLIGHT_EFFECT_ALTERNATING
//#endif

#ifdef RGB_MATRIX_ENABLE
  #define DISABLE_RGB_MATRIX_GRADIENT_UP_DOWN
  #define DISABLE_RGB_MATRIX_BREATHING
  #define DISABLE_RGB_MATRIX_BAND_SAT
  #define DISABLE_RGB_MATRIX_BAND_VAL
  #define DISABLE_RGB_MATRIX_BAND_PINWHEEL_SAT
  #define DISABLE_RGB_MATRIX_BAND_PINWHEEL_VAL
  #define DISABLE_RGB_MATRIX_BAND_SPIRAL_SAT
  #define DISABLE_RGB_MATRIX_BAND_SPIRAL_VAL
  #define DISABLE_RGB_MATRIX_CYCLE_ALL
  #define DISABLE_RGB_MATRIX_CYCLE_LEFT_RIGHT
  #define DISABLE_RGB_MATRIX_CYCLE_UP_DOWN
  #define DISABLE_RGB_MATRIX_CYCLE_OUT_IN
  #define DISABLE_RGB_MATRIX_CYCLE_OUT_IN_DUAL
  #define DISABLE_RGB_MATRIX_RAINBOW_MOVING_CHEVRON
  #define DISABLE_RGB_MATRIX_DUAL_BEACON
  #define DISABLE_RGB_MATRIX_CYCLE_PINWHEEL
  #define DISABLE_RGB_MATRIX_CYCLE_SPIRAL
  #define DISABLE_RGB_MATRIX_RAINBOW_BEACON
  #define DISABLE_RGB_MATRIX_RAINBOW_PINWHEELS
  #define DISABLE_RGB_MATRIX_JELLYBEAN_RAINDROPS
  #define DISABLE_RGB_MATRIX_RAINDROPS

  #define RGB_MATRIX_KEYPRESSES
#endif
