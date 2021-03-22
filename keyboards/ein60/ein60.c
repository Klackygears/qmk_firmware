/* Copyright 2021 klackygears
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
#include "ein60.h"

#ifdef RGB_MATRIX_ENABLE

  // Logical Layout
  // Columns
  //  0  1  2  3  4  5  6  7  8  9 10 11 12 13
  //                                            ROWS
  // 38  1  2  3  4  5  6  7  8  9 10 11 12 13   0
  // 37                                     14   1
  // 36                                     15   2
  // 35                                     16   3
  // 34                                     17   3
  // 33                                     18   4
  // 32 31 30 29 28 27 26 25 24 23 22 21 20 19   5
  //



led_config_t g_led_config = { {
    {    0,  1,  2,  3,  4,  5,  6,  7,  8,  9  },
    {   10, 11, 12, 13, 14, 15, 16, 17, 18, 19  },
    {   20, 21, 22, 23, 24, 25, 26, 27, 28, 29  },
    {   30, 31, 32, 33, 34, 35, 36, 37, NO_LED, NO_LED  }
}, {
    {  15,  0 }, {  30,  0 }, {  45,  0 }, {  60,  0 }, {  75,  0 }, {  90,  0 }, { 105,  0 }, { 119,  0 }, { 134,  0 }, { 149,  0 }, { 164,  0 }, { 179,  0 }, { 194,  0 }, { 209,  0 },
    { 224, 11 }, { 224, 21 }, { 224, 32 }, { 224, 43 }, { 224, 53 }, { 209, 64 }, { 194, 64 }, { 179, 64 }, { 164, 64 }, { 149, 64 }, { 134, 64 }, { 119, 64 }, { 105, 64 }, {  90, 64 },
    {  75, 64 }, {  60, 64 }, {  45, 64 }, {  30, 64 }, {  15, 64 }, {   0, 53 }, {   0, 43 }, {   0, 32 }, {   0, 21 }, {   0, 11 },
}, {
     2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
     2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
     2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
     2, 2, 2, 2, 2, 2, 2, 2,
} };
#endif
