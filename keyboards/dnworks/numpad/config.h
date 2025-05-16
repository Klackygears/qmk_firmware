/*
<<<<<<<< HEAD:keyboards/dnworks/numpad/config.h
Copyright 2023 zeix (@itsme-zeix)
========
Copyright 2020 James Smith <bronzegears@gmail.com>
>>>>>>>> c978fc327f9d784bb75ec473570c1557a85f1415:keyboards/eco/keymaps/klackygears/config.h

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

<<<<<<<< HEAD:keyboards/dnworks/numpad/config.h
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 500U
========
#define USE_SERIAL

#define PERMISSIVE_HOLD
#define PREVENT_STUCK_MODIFIERS
#define TAPPING_TERM 150
#define IGNORE_MOD_TAP_INTERRUPT

#define BOOTMAGIC_LITE_ROW 0
#define BOOTMAGIC_LITE_COLUMN 0

#define RGB_DI_PIN C7

#define RGBLED_NUM 28    // Number of LEDs

#define RGBLIGHT_LIMIT_VAL 120


>>>>>>>> c978fc327f9d784bb75ec473570c1557a85f1415:keyboards/eco/keymaps/klackygears/config.h
