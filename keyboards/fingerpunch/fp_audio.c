/* Copyright 2022 Sadek Baroudi
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

#include "keyboards/fingerpunch/fp_audio.h"

#ifdef AUDIO_ENABLE

#include "song_list.h"
#include "musical_notes.h"


#define FP_MOUSE_SOUND_1 EIGHTH_NOTE(_B2),
#define FP_MOUSE_SOUND_2 EIGHTH_NOTE(_B3),
#define FP_MOUSE_SOUND_3 EIGHTH_NOTE(_B2), EIGHTH_NOTE(_B2),

#define FP_CUT_SOUND EIGHTH_NOTE(_B4), EIGHTH_NOTE(_B3), EIGHTH_NOTE(_B4),
#define FP_COPY_SOUND EIGHTH_NOTE(_B3), EIGHTH_NOTE(_B4),
#define FP_PASTE_SOUND EIGHTH_NOTE(_B4), EIGHTH_NOTE(_B3),

#define FP_SAVE_SOUND EIGHTH_NOTE(_F4), EIGHTH_NOTE(_F5),

float fp_mouse_sound_1[][2] = SONG(FP_MOUSE_SOUND_1);
float fp_mouse_sound_2[][2] = SONG(FP_MOUSE_SOUND_2);
float fp_mouse_sound_3[][2] = SONG(FP_MOUSE_SOUND_3);

float fp_cut_sound[][2] = SONG(FP_CUT_SOUND);
float fp_copy_sound[][2] = SONG(FP_COPY_SOUND);
float fp_paste_sound[][2] = SONG(FP_PASTE_SOUND);

float fp_save_sound[][2] = SONG(FP_SAVE_SOUND);

layer_state_t fp_layer_state_set_audio(layer_state_t state) {
    switch (get_highest_layer(state)) {
        default:
            break;
    }
    return state;
}

bool fp_process_record_audio(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
#       ifndef FP_DISABLE_CUSTOM_KEYCODES
        // NOTE TO SELF: IF I EVER ADD KEYCODES HERE, DETERMINE WHETHER THEY ARE CONSIDERED CUSTOM KEYCODES OR NOT
        // In the case of the mouse buttons and ctrl-x,c,v,s features below, they are treated independently, so they aren't effected by FP_DISABLE_CUSTOM_KEYCODES
#       endif // FP_DISABLE_CUSTOM_KEYCODES
#       ifdef FP_AUDIO_MOUSE_BUTTONS
        case KC_BTN1:
            if (record->event.pressed) {
                PLAY_SONG(fp_mouse_sound_1);
            }
            break;
        case KC_BTN2:
            if (record->event.pressed) {
                PLAY_SONG(fp_mouse_sound_2);
            }
            break;
        case KC_BTN3:
            if (record->event.pressed) {
                PLAY_SONG(fp_mouse_sound_3);
            }
            break;
#       endif
#       ifdef FP_AUDIO_CUT_COPY_PASTE
        case KC_C: // copy
            if (record->event.pressed) {
#               ifdef FP_MAC_PREFERRED
                if ((get_mods() & MOD_MASK_GUI) || (get_oneshot_mods() & MOD_MASK_GUI)) {
#               else
                if ((get_mods() & MOD_MASK_CTRL) || (get_oneshot_mods() & MOD_MASK_CTRL)) {
#               endif
                    PLAY_SONG(fp_copy_sound);
                }
            }
            break;
        case KC_X: // cut
            if (record->event.pressed) {
#               ifdef FP_MAC_PREFERRED
                if ((get_mods() & MOD_MASK_GUI) || (get_oneshot_mods() & MOD_MASK_GUI)) {
#               else
                if ((get_mods() & MOD_MASK_CTRL) || (get_oneshot_mods() & MOD_MASK_CTRL)) {
#               endif
                    PLAY_SONG(fp_cut_sound);
                }
            }
            break;
        case KC_V: // paste
            if (record->event.pressed) {
#               ifdef FP_MAC_PREFERRED
                if ((get_mods() & MOD_MASK_GUI) || (get_oneshot_mods() & MOD_MASK_GUI)) {
#               else
                if ((get_mods() & MOD_MASK_CTRL) || (get_oneshot_mods() & MOD_MASK_CTRL)) {
#               endif
                    PLAY_SONG(fp_paste_sound);
                }
            }
            break;
#       endif
#       ifdef FP_AUDIO_SAVE
        case KC_S: // save
        case LALT_T(KC_S): // for my keymap, since I use homerow mods
            if (record->event.pressed) {
#               ifdef FP_MAC_PREFERRED
                if ((get_mods() & MOD_MASK_GUI) || (get_oneshot_mods() & MOD_MASK_GUI)) {
#               else
                if ((get_mods() & MOD_MASK_CTRL) || (get_oneshot_mods() & MOD_MASK_CTRL)) {
#               endif
                    PLAY_SONG(fp_save_sound);
                }
            }
            break;
#endif
        default:
            break;
    }

    return true;
}
#endif
