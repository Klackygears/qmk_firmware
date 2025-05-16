<<<<<<<< HEAD:keyboards/jankycaps/janky9/keymaps/default/keymap.c
/* Copyright 2025
========
/* Copyright 2022 Sadek Baroudi
>>>>>>>> c978fc327f9d784bb75ec473570c1557a85f1415:keyboards/klackygears_fp/src/fp_rgblight.h
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
<<<<<<<< HEAD:keyboards/jankycaps/janky9/keymaps/default/keymap.c
 
========

#pragma once
>>>>>>>> c978fc327f9d784bb75ec473570c1557a85f1415:keyboards/klackygears_fp/src/fp_rgblight.h
#include QMK_KEYBOARD_H
#include "keyboards/klackygears_fp/src/fp.h"

<<<<<<<< HEAD:keyboards/jankycaps/janky9/keymaps/default/keymap.c
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_ortho_3x3(
        KC_1,  KC_2, KC_3,
        KC_4,  KC_5, KC_6,
        KC_7,  KC_8, KC_9
    ),
};
========
#ifdef RGBLIGHT_ENABLE
#    ifndef FP_LAYER_LIGHTING_MODE
#        define FP_LAYER_LIGHTING_MODE RGBLIGHT_MODE_STATIC_LIGHT
#    endif
#endif

layer_state_t fp_layer_state_set_rgblight(layer_state_t state);
bool fp_process_record_rgblight(uint16_t keycode, keyrecord_t *record);
void fp_post_init_rgblight(void);
>>>>>>>> c978fc327f9d784bb75ec473570c1557a85f1415:keyboards/klackygears_fp/src/fp_rgblight.h
