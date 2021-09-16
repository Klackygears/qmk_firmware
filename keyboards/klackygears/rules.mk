SRC += klackygears.c


ifeq ($(strip $(TAP_DANCE_ENABLE)), yes)
  SRC += tap_dances.c
endif


ifeq ($(strip $(COMBO_ENABLE)), yes)
    SRC += combo.c
endif
