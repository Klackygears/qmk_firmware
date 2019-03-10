##SWAP_HANDS_ENABLE = yes
TAP_DANCE_ENABLE = yes
SRC += klacker.c


EXTRAFLAGS += -flto


##ifeq ($(strip $(TAP_DANCE_ENABLE)), yes)
##  SRC += tap_dances.c
##endif
