<<<<<<<< HEAD:keyboards/artifact/lvl/rev_hs01/rev_hs01.c
/* Copyright 2024 Yiancar-Designs
========
/* Copyright 2022 Sadek Baroudi
>>>>>>>> c978fc327f9d784bb75ec473570c1557a85f1415:keyboards/klackygears_fp/src/fp_color.h
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
#include "quantum.h"

<<<<<<<< HEAD:keyboards/artifact/lvl/rev_hs01/rev_hs01.c
void led_init_ports(void) {
    // Set our LED pins as open drain outputs
    gpio_set_pin_output_open_drain(LED_CAPS_LOCK_PIN);
}
========
#define FP_HSV_LAVENDER          184, 200, 255
#define FP_HSV_LEMON              43, 200, 255
#define FP_HSV_LIME               63, 225, 255
#define FP_HSV_MELON               0, 180, 255
#define FP_HSV_MINT               84, 185, 255
#define FP_HSV_PEACH_ORANGE       21, 205, 255
>>>>>>>> c978fc327f9d784bb75ec473570c1557a85f1415:keyboards/klackygears_fp/src/fp_color.h
