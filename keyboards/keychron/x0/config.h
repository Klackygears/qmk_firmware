<<<<<<<< HEAD:keyboards/keychron/x0/config.h
/* Copyright 2023 @ Keychron(https://www.keychron.com)
========
/* Copyright 2022 Sadek Baroudi
>>>>>>>> c978fc327f9d784bb75ec473570c1557a85f1415:keyboards/fingerpunch/src/fp_audio.h
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

<<<<<<<< HEAD:keyboards/keychron/x0/config.h
/* I2C Driver Configuration */
#define I2C1_SCL_PIN B8
#define I2C1_SDA_PIN B9
#define I2C1_CLOCK_SPEED 400000
#define I2C1_DUTY_CYCLE FAST_DUTY_CYCLE_2
========
layer_state_t fp_layer_state_set_audio(layer_state_t state);
bool fp_process_record_audio(uint16_t keycode, keyrecord_t *record);
>>>>>>>> c978fc327f9d784bb75ec473570c1557a85f1415:keyboards/fingerpunch/src/fp_audio.h
