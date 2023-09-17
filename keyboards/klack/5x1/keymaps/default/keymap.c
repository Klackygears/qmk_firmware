
#include QMK_KEYBOARD_H

#define BASE 0

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* 5x1
 * .--------------------------------------------.
 * |   1    |   2    |   3    |   4    |   5    |
 * '--------+--------+--------+-----------------'
 */

  [BASE] = LAYOUT_5x1(
  RGB_TOG, RGB_MOD, RGB_HUI, RGB_VAI, KC_LSFT
  )

};
