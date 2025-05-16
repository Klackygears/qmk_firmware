<<<<<<<< HEAD:keyboards/marksard/leftover30/keymaps/default_isoenter/config.h
/* Copyright 2020 marksard
========
/* Copyright 2022 Sadek Baroudi
>>>>>>>> c978fc327f9d784bb75ec473570c1557a85f1415:keyboards/fingerpunch/src/fp_haptic.h
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
#include QMK_KEYBOARD_H
#include "keyboards/fingerpunch/src/fp.h"

<<<<<<<< HEAD:keyboards/marksard/leftover30/keymaps/default_isoenter/config.h
// place overrides here
#define TAPPING_TERM 200
#define TAPPING_LAYER_TERM 150 // Custom LT Tapping term
#define TAPPING_TERM_PER_KEY
========
layer_state_t fp_layer_state_set_haptic(layer_state_t state);
bool fp_process_record_haptic(uint16_t keycode, keyrecord_t *record);
>>>>>>>> c978fc327f9d784bb75ec473570c1557a85f1415:keyboards/fingerpunch/src/fp_haptic.h
