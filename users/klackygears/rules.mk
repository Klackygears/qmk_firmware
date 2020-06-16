SRC += klackygears.c

#EXTRAFLAGS += -flto  compiles, does weird things to the helix


ifeq ($(strip $(TAP_DANCE_ENABLE)), yes)
  SRC += tap_dances.c
endif
