#pragma once

#if defined(COMBO_ENABLE)
#    define COMBO_COUNT 43
#    define COMBO_TERM 30
#endif  // !COMBO_ENABLE

#if defined(TAP_DANCE_ENABLE)
#    define PERMISSIVE_HOLD
#    define PREVENT_STUCK_MODIFIERS
    #if defined(TAPPING_TERM)
        #undef TAPPING_TERM
        #define TAPPING_TERM 150
    #endif
#    define IGNORE_MOD_TAP_INTERRUPT
#endif  // tap dance settup

#ifdef AUDIO_ENABLE
#    define AUDIO_CLICKY
#    define AUDIO_CLICKY_FREQ_RANDOMNESS 1.5f

#    ifdef USER_SONG_LIST
#        define STARTUP_SONG SONG(RICK_ROLL)
#        define GOODBYE_SONG SONG(SONIC_RING)
#        define DEFAULT_LAYER_SONGS \
            { SONG(QWERTY_SOUND), SONG(COLEMAK_SOUND), SONG(DVORAK_SOUND), SONG(OVERWATCH_THEME) }
#        define UNICODE_SONG_MAC  SONG(MARIO_THEME)
#        define UNICODE_SONG_LNX  SONG(MARIO_POWERUP)
#        define UNICODE_SONG_WIN  SONG(MARIO_ONEUP)
#        define UNICODE_SONG_BSD  SONG(RICK_ROLL)
#        define UNICODE_SONG_WINC SONG(RICK_ROLL)
#    else
#        define STARTUP_SONG SONG(STARTUP_SOUND)
#        define GOODBYE_SONG SONG(GOODBYE_SOUND)
#    ifdef DEFAULT_LAYER_SONGS
#    else
#        define DEFAULT_LAYER_SONGS \
            { SONG(QWERTY_SOUND), SONG(COLEMAK_SOUND), SONG(DVORAK_SOUND), SONG(WORKMAN_SOUND) }
#    endif
#        define UNICODE_SONG_MAC  SONG(QWERTY_SOUND)
#        define UNICODE_SONG_LNX  SONG(COLEMAK_SOUND)
#        define UNICODE_SONG_WIN  SONG(DVORAK_SOUND)
#        define UNICODE_SONG_BSD  SONG(WORKMAN_SOUND)
#        define UNICODE_SONG_WINC SONG(PLOVER_GOODBYE_SOUND)
#    endif
#endif  // !AUDIO_ENABLE
