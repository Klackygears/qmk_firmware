
# Build Options
#   change to "no" to disable the options, or define them in the Makefile in
#   the appropriate keymap folder that will get included automatically
#
EXTRAKEY_ENABLE = yes       # Audio control and System control(+450)
RGBLIGHT_ENABLE = yes        # Enable WS2812 RGB underlight.
BOOTLOADER = qmk-dfu

TAP_DANCE_ENABLE = yes

OLED_ENABLE = yes
OLED_DRIVER = SSD1306

# define HELIX_CUSTOMISE_MSG
#   $(info Helix customize)
#   $(info -  OLED_ENABLE=$(OLED_ENABLE))
#   $(info -  LED_BACK_ENABLE=$(LED_BACK_ENABLE))
#   $(info -  LED_UNDERGLOW_ENABLE=$(LED_UNDERGLOW_ENABLE))
#   $(info -  LED_ANIMATION=$(LED_ANIMATIONS))
#   $(info -  IOS_DEVICE_ENABLE=$(IOS_DEVICE_ENABLE))
# endef

# Helix keyboard customize
# you can edit follows 7 Variables
#  jp: 以下の7つの変数を必要に応じて編集します。
HELIX_ROWS = 5              # Helix Rows is 4 or 5
OLED_ENABLE = yes           # OLED_ENABLE
LOCAL_GLCDFONT = yes         # use each keymaps "helixfont.h" insted of "common/glcdfont.c"
