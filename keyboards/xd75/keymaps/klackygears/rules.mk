# Copyright 2013 Jun Wako <wakojun@gmail.com>
#
# This program is free software: you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation, either version 2 of the License, or
# (at your option) any later version.
#
# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.
#
# You should have received a copy of the GNU General Public License
# along with this program.  If not, see <http://www.gnu.org/licenses/>.


BOOTLOADER = qmk-dfu
EXTRAFLAGS += -flto

EXTRAKEY_ENABLE = yes
TAP_DANCE_ENABLE = yes

BACKLIGHT_ENABLE = no


RGBLIGHT_ENABLE = no

    POST_CONFIG_H += $(QUANTUM_DIR)/rgblight_post_config.h
    OPT_DEFS += -DRGBLIGHT_ENABLE
    SRC += $(QUANTUM_DIR)/color.c \
        rgblight.c \
        ws2812.c
    CIE1931_CURVE = yes
    LED_BREATHING_TABLE = yes
