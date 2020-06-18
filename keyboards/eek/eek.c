/* Copyright 2020 klackygears
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
#include "eek.h"

// Optional override functions below.
// You can leave any or all of these undefined.
// These are only required if you want to perform custom actions.



#ifdef RGB_MATRIX_ENABLE

  // Physical Layout
  // Columns
  // 0  1  2  3  4
  //                   ROWS
  //  4  3  2  1  0      0
  //  5  6  7  8  9      1
  // 14 13 12 11 10      2
  //       15 16 17      3

  // Physical Layout v1.3
  // Columns
  //  0  1  2  3  4  5  6  7  8  9
  //                                 ROWS
  //  0  1  2  3  4  5  6  7  8  9     0
  // 19 18 17 16 15 14 13 12 11 10     1
  // 20 21 22 23 24 25 26 27 28 29     2
  //       35 34 33 32 31 30           3



led_config_t g_led_config = { {
    {    4,   3,   2,   1,   0,  0,   1,  2,  3,  4  },
    {    5,   6,   7,   8,   9,  9,   8,  7,  6,  5  },
    {   14,  13,  12,  11,  10,  10, 11, 12, 13, 14  },
    { NO_LED, NO_LED, 15, 16, 17, 17, 16, 15, NO_LED, NO_LED }
}, {
    {  93, 13 }, {  77,  7 }, {  62,  0 }, {  46,  0 }, {  31,  0 },
    {  85, 24 }, {  70, 17 }, {  54, 10 }, {  39, 10 }, {  23, 10 },
    {  77, 34 }, {  62, 27 }, {  46, 20 }, {  31, 20 }, {  15, 20 },
    {  39, 34 }, {  54, 37 }, {  70, 44 },
    { 131, 13 }, { 147,  7 }, { 162,  0 }, { 178,  0 }, { 193,  0 },
    { 201, 10 }, { 185, 10 }, { 170, 10 }, { 154, 17 }, { 139, 24 },
    { 147, 34 }, { 162, 27 }, { 178, 20 }, { 193, 20 }, { 209, 20 },
    { 185, 34 }, { 170, 37 }, { 154, 44 },
}, {
     4, 4, 4, 4, 4,
     4, 4, 4, 4, 4,
     4, 4, 4, 4, 4,
     1, 1, 1, 4, 4,
     4, 4, 4, 4, 4,
     4, 4, 4, 4, 4,
     4, 4, 4, 1, 1,
     1,
// above is v1.2, below is v1.3
    /* {    0,  1,  2,  3,  4,  5,  6,  7,  8,  9  },
    {   19, 18, 17, 16, 15, 14, 13, 12, 11, 10  },
    {   20, 21, 22, 23, 24, 25, 26, 27, 28, 29  },
    { NO_LED, NO_LED, 35, 34, 33, 32, 31, 30, NO_LED, NO_LED }
}, {
    {  31,  0 }, {  46,  0 }, {  62,  0 }, {  77,  7 }, {  93, 13 }, { 131, 13 }, { 147,  7 }, { 162,  0 }, { 178,  0 }, { 193,  0 },
    { 201, 10 }, { 185, 10 }, { 170, 10 }, { 154, 17 }, { 139, 24 }, {  85, 24 }, {  70, 17 }, {  54, 10 }, {  39, 10 }, {  23, 10 },
    {  15, 20 }, {  31, 20 }, {  46, 20 }, {  62, 27 }, {  77, 34 }, { 147, 34 }, { 162, 27 }, { 178, 20 }, { 193, 20 }, { 209, 20 },
    { 185, 34 }, { 170, 37 }, { 154, 44 }, {  70, 44 }, {  54, 37 }, {  39, 34 },
}, {
     4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
     4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
     4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
     1, 1, 1, 1, 1, 1, */
} };
#endif


void matrix_init_kb(void) {
  // put your keyboard start-up code here
  // runs once when the firmware starts up

/* #ifdef RGB_MATRIX_ENABLE
    if (!isLeftHand) {
        g_led_config = (led_config_t){ {
            {  51,  50,  45,  44,  37,  36 },
            {  52,  49,  46,  43,  38,  35 },
            {  53,  48,  47,  42,  39,  34 },
            { NO_LED, NO_LED, NO_LED,  41,  40,  33 },
            {  24,  23,  18,  17,  10,   9 },
            {  25,  22,  19,  16,  11,   8 },
            {  26,  21,  20,  15,  12,   7 },
            { NO_LED, NO_LED, NO_LED,  14,  13,   6 }
        }, {
            { 139,  16 }, { 174,  13 }, { 208,  20 }, { 208,  38 }, { 174,  48 }, { 139,  52 }, { 129,  63 },
            { 139,  39 }, { 139,  21 }, { 139,   4 }, { 156,   2 }, { 156,  19 }, { 156,  37 }, { 144,  58 },
            { 164,  55 }, { 174,  35 }, { 174,  13 }, { 174,   0 }, { 191,   3 }, { 191,  20 }, { 191,  37 },
            { 208,  42 }, { 208,  24 }, { 208,   7 }, { 224,   7 }, { 224,  24 }, { 224,  41 }, {  85,  16 },
            {  50,  13 }, {  16,  20 }, {  16,  38 }, {  50,  48 }, {  85,  52 }, {  95,  63 }, {  85,  39 },
            {  85,  21 }, {  85,   4 }, {  68,   2 }, {  68,  19 }, {  68,  37 }, {  80,  58 }, {  60,  55 },
            {  50,  35 }, {  50,  13 }, {  50,   0 }, {  33,   3 }, {  33,  20 }, {  33,  37 }, {  16,  42 },
            {  16,  24 }, {  16,   7 }, {   0,   7 }, {   0,  24 }, {   0,  41 }
        }, {
            2, 2, 2, 2, 2, 2, 1,
            4, 4, 4, 4, 4, 4, 1,
            1, 4, 4, 4, 4, 4, 4,
            4, 4, 4, 1, 1, 1, 2,
            2, 2, 2, 2, 2, 1, 4,
            4, 4, 4, 4, 4, 1, 1,
            4, 4, 4, 4, 4, 4, 4,
            4, 4, 1, 1, 1
        } };
    }
#endif */
  matrix_init_user();
}
/*
void matrix_scan_kb(void) {
  // put your looping keyboard code here
  // runs every cycle (a lot)

  matrix_scan_user();
}

bool process_record_kb(uint16_t keycode, keyrecord_t *record) {
  // put your per-action keyboard code here
  // runs for every action, just before processing by the firmware

  return process_record_user(keycode, record);
}

void led_set_kb(uint8_t usb_led) {
  // put your keyboard LED indicator (ex: Caps Lock LED) toggling code here

  led_set_user(usb_led);
}

*/
