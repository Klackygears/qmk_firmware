# MCU name
#MCU = atmega32u4

# Build Options
#   change yes to no to disable
#
#PIN_COMPATIBLE=promicro
#CONVERT_TO=stemcell
#PIN_COMPATIBLE = elite_c
BOARD = GENERIC_RP_RP2040
#FIRMWARE_FORMAT = 

BOOTMAGIC_ENABLE = yes      # Enable Bootmagic Lite
EXTRAKEY_ENABLE = yes       # Audio control and System control
CONSOLE_ENABLE = no         # Console for debug
COMMAND_ENABLE = no         # Commands for debug and configuration
NKRO_ENABLE = no            # Enable N-Key Rollover
BACKLIGHT_ENABLE = no       # Enable keyboard backlight functionality
RGBLIGHT_ENABLE = no        # Enable keyboard RGB underglow
AUDIO_ENABLE = no           # Audio output
POINTING_DEVICE_ENABLE = yes
POINTING_DEVICE_DRIVER = pmw3320
MOUSEKEY_ENABLE = yes       # Mouse keys
ENCODER_ENABLE = no
