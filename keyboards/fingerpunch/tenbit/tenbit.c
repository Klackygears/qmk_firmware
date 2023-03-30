/* Copyright 2021 Sadek Baroudi <sadekbaroudi@gmail.com>
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

#include "tenbit.h"

#ifdef RGB_MATRIX_ENABLE
// 6 column config
led_config_t g_led_config = { {
    {0,  1,  2,  3,  4,  5,  6,  7,  8,  9,  10, 11},
    {23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12},
    {24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35},
    {47, 46, 45, 44, 43, 42, 41, 40, 39, 38, 37, 36},
    {48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59}
}, {
    {0,0},    {19,0},   {40,0},   {60,0},   {80,0},   {101,0},  {121,0},  {142,0},  {162,0},  {182,0},  {203,0},  {223,0},  // row 0
    {223,15}, {203,15}, {182,15}, {162,15}, {142,15}, {121,15}, {101,15}, {80,15},  {60,15},  {40,15},  {19,15},  {0,15},   // row 1 (backwards)
    {0,31},   {19,31},  {40,31},  {60,31},  {80,31},  {101,31}, {121,31}, {142,31}, {162,31}, {182,31}, {203,31}, {223,31}, // row 2
    {223,47}, {203,47}, {182,47}, {162,47}, {142,47}, {121,47}, {101,47}, {80,47},  {60,47},  {40,47},  {19,47},  {0,47},   // row 3 (backwards)
    {0,63},   {19,63},  {40,63},  {60,63},  {80,63},  {101,63}, {121,63}, {142,63}, {162,63}, {182,63}, {203,63}, {223,63}  // row 4
}, {
    1,  4,  4,  4,  4,  4,  4,  4,  4,  4,  4,  1, // row 0
    1,  4,  4,  4,  4,  4,  4,  4,  4,  4,  4,  1, // row 1 (backwards)
    1,  12, 12, 12, 12, 4,  4,  12, 12, 12, 12, 1, // row 2
    1,  4,  4,  4,  4,  4,  4,  4,  4,  4,  4,  1, // row 3 (backwards)
    1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1  // row 4
} };
#endif
