# QMK Standard Build Options
#   change to "no" to disable the options, or define them in the Makefile in
#   the appropriate keymap folder that will get included automatically
#
#   See TOP/keyboards/helix/rules.mk for a list of options that can be set.
#   See TOP/docs/config_options.md for more information.
#
LTO_ENABLE = yes  # if firmware size over limit, try this option
EXTRAKEY_ENABLE = yes       # Audio control and System control(+450)
RGBLIGHT_ENABLE = yes        # Enable WS2812 RGB underlight.
LED_BACK_ENABLE = yes
BOOTLOADER = qmk-dfu
BOOTMAGIC_LITE = no
CONSOLE_ENABLE = no
COMMAND_ENABLE = no
MOUSEKEY_ENABLE = no
SPACE_CADET_ENABLE = no
GRAVE_ESC_ENABLE = no
MAGIC_ENABLE = no
MUSIC_ENABLE = no

TAP_DANCE_ENABLE = no
COMBO_ENABLE = no

OLED_ENABLE = yes
OLED_DRIVER = SSD1306

HELIX_ROWS = 5              # Helix Rows is 4 or 5
LOCAL_GLCDFONT = yes         # use each keymaps "helixfont.h" insted of "common/glcdfont.c"
LED_ANIMATIONS = no        # LED animations
IOS_DEVICE_ENABLE = no      # connect to IOS device (iPad,iPhone)

OLED_SELECT = core

ifeq ($(strip $(OLED_ENABLE)), yes)
    SRC += oled_display.c
endif

# convert Helix-specific options (that represent combinations of standard options)
#   into QMK standard options.
include $(strip $(KEYBOARD_LOCAL_FEATURES_MK))
