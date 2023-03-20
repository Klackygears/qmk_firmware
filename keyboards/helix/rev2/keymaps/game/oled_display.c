/* Copyright 2020 yushakobo
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

#include <stdio.h>
#include <string.h>
#include QMK_KEYBOARD_H

#ifdef SSD1306OLED
  #include "ssd1306.h"
#endif

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.
enum layer_number {
    _QWERTY = 0,
    _SYMB,
    _FUNC,
    _MDIA
};

//SSD1306 OLED update loop, make sure to add #define SSD1306OLED in config.h
#if defined(SSD1306OLED) || defined(OLED_ENABLE)

#    if defined(OLED_ENABLE)
oled_rotation_t oled_init_user(oled_rotation_t rotation) {
    if (is_keyboard_master()) {
        return OLED_ROTATION_270;
    } else {
        return OLED_ROTATION_180;
    }
}
#    else
#        define oled_write(data,flag)    matrix_write(matrix, data)
#        define oled_write_P(data,flag)  matrix_write_P(matrix, data)
#    endif

#    ifdef SSD1306OLED
void matrix_scan_user(void) {
    iota_gfx_task();  // this is what updates the display continuously
}

void matrix_update(struct CharacterMatrix *dest,
                   const struct CharacterMatrix *source) {
    if (memcmp(dest->display, source->display, sizeof(dest->display))) {
        memcpy(dest->display, source->display, sizeof(dest->display));
        dest->dirty = true;
    }
}
#    endif

//assign the right code to your layers for OLED display
#define L_BASE 0
#define L_SYMB (1<<_SYMB)
#define L_MDIA (1<<_MDIA)

#    ifdef SSD1306OLED
static void render_logo(struct CharacterMatrix *matrix) {
#    else
static void render_logo(void) {
#    endif

    static const char helix_logo[] PROGMEM ={
        0x80,0x81,0x82,0x83,0x84,0x85,0x86,0x87,0x88,0x89,0x8a,0x8b,0x8c,0x8d,0x8e,0x8f,0x90,0x91,0x92,0x93,0x94,
        0xa0,0xa1,0xa2,0xa3,0xa4,0xa5,0xa6,0xa7,0xa8,0xa9,0xaa,0xab,0xac,0xad,0xae,0xaf,0xb0,0xb1,0xb2,0xb3,0xb4,
        0xc0,0xc1,0xc2,0xc3,0xc4,0xc5,0xc6,0xc7,0xc8,0xc9,0xca,0xcb,0xcc,0xcd,0xce,0xcf,0xd0,0xd1,0xd2,0xd3,0xd4,
        0};
    oled_write_P(helix_logo, false);
}

#    ifdef SSD1306OLED
static void render_rgbled_status(bool full, struct CharacterMatrix *matrix) {
#    else
static void render_rgbled_status(bool full) {
#    endif

}

#    ifdef SSD1306OLED
static void render_layer_status(struct CharacterMatrix *matrix) {
#    else
static void render_layer_status(void) {
#    endif
  // Define layers here, Have not worked out how to have text displayed for each layer. Copy down the number you see and add a case for it below
    static const char sm_logo[][2][3] PROGMEM = {{{0x95,0x96,0},{0xb5,0xb6,0}},{{0x97,0x98,0},{0xb7,0xb8,0}},{{0x99,0x9a,0},{0xb9,0xba,0}},{{0x9b,0x9c,0},{0xbb,0xbc,0}}};

     static const char PROGMEM keeb_face[][6] = {
        {0xd5,0xd6,0xd7,0xd8,0xd9,0},
        {0xd5,0xdc,0xdd,0xde,0xd9,0},
        {0xd5,0xdf,0xdd,0x9f,0xd9,0},
        {0xd5,0xdf,0xd7,0x9f,0xd9,0},
        {0xd5,0xd6,0xdd,0xd8,0xd9,0},
        {0xd5,0xdc,0xd7,0xde,0xd9,0}
     };

    char buf[10];
    //oled_write_P(PSTR("-> "), false);
    switch (layer_state) {
    case L_BASE:
        oled_write_P(keeb_face[0], false);
        oled_write_P(PSTR("\n"), false);
        oled_write_P(PSTR(" "), false);
        oled_write_P(sm_logo[0][0], false);
        oled_write_P(PSTR("\n"), false);
        oled_write_P(PSTR(" "), false);
        oled_write_P(sm_logo[0][1], false);
        oled_write_P(PSTR("\n"), false);
        oled_write_P(PSTR("\n"), false);
        oled_write_P(PSTR(" "), false);
        oled_write_P(sm_logo[0][0], false);
        oled_write_P(PSTR("\n"), false);
        oled_write_P(PSTR(" "), false);
        oled_write_P(sm_logo[0][1], false);
        oled_write_P(PSTR("\n"), false);
        oled_write_P(PSTR("\n"), false);
        oled_write_P(PSTR(" "), false);
        oled_write_P(sm_logo[0][0], false);
        oled_write_P(PSTR("\n"), false);
        oled_write_P(PSTR(" "), false);
        oled_write_P(sm_logo[0][1], false);
        break;
    case L_SYMB:
        oled_write_P(keeb_face[3], false);
        oled_write_P(PSTR("\n"), false);
        oled_write_P(sm_logo[1][0], false);
        oled_write_P(PSTR("\n"), false);
        oled_write_P(sm_logo[1][1], false);
        oled_write_P(PSTR("\n"), false);
        oled_write_P(PSTR("\n"), false);
        oled_write_P(PSTR("\n"), false);
        break;
    case L_MDIA:
        oled_write_P(keeb_face[5], false);
        oled_write_P(PSTR("\n"), false);
        oled_write_P(PSTR("Media"), false);
        oled_write_P(PSTR("\n"), false);
        oled_write_P(PSTR("\n"), false);
        oled_write_P(PSTR("\n"), false);
        break;
    default:
        oled_write_P(PSTR("ERROR"), false);
        oled_write_P(PSTR("\n"), false);
        //snprintf(buf,sizeof(buf), "%ld", layer_state);
        oled_write(buf, false);
    }

    oled_write_P(PSTR("\n"), false);
}

#    ifdef SSD1306OLED
void render_status(struct CharacterMatrix *matrix) {
#    else
void render_status(void) {
#    endif

#    ifdef SSD1306OLED
    render_layer_status(matrix);
#    else
    render_layer_status();
#    endif

    // Host Keyboard LED Status
    led_t led_state = host_keyboard_led_state();
    oled_write_P(led_state.num_lock ? PSTR("NMLOK") : PSTR("       "), false);
    oled_write_P(led_state.caps_lock ? PSTR("CAP") : PSTR("    "), false);
    oled_write_P(led_state.scroll_lock ? PSTR("SCLK") : PSTR("    "), false);
    oled_write_P(PSTR("\n"), false);
#    ifdef SSD1306OLED
    render_rgbled_status(true, matrix);
#    else
    render_rgbled_status(true);
    oled_write_P(PSTR(""), false);
#    endif
}


#    ifdef SSD1306OLED
#        if OLED_UPDATE_INTERVAL > 0
uint16_t oled_update_timeout;
#        endif

void iota_gfx_task_user(void) {
    struct CharacterMatrix matrix;

#        if DEBUG_TO_SCREEN
    if (debug_enable) {
        return;
    }
#        endif

#if      OLED_UPDATE_INTERVAL > 0
    if (timer_elapsed(oled_update_timeout) < OLED_UPDATE_INTERVAL) {
        return;
    }
    oled_update_timeout = timer_read();
#endif
    matrix_clear(&matrix);
    if (is_keyboard_master()) {
        render_status(&matrix);
    } else {
        render_logo(&matrix);
    }
    matrix_update(&display, &matrix);
}
#    else
bool oled_task_user(void) {

#        if DEBUG_TO_SCREEN
    if (debug_enable) {
        return;
    }
#        endif

    if (is_keyboard_master()) {
        render_status();
    } else {
        render_logo();
    }
    return false;
}
#    endif
#endif
