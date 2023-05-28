#INTROSPECTION_KEYMAP_C = klackygears.c
SRC += klackygears.c

# ifeq ($(strip $(MACROS_ENABLED)), yes)
#     OPT_DEFS += -DMACROS_ENABLED
# endif

# # ifeq ($(strip $(TAP_DANCE_ENABLE)), yes)
# # #  SRC += tap_dances.c
# #   INTROSPECTION_KEYMAP_C = tap_dances.c
# # endif

ifeq ($(strip $(COMBO_ENABLE)), yes)
#    SRC += combo.c
     INTROSPECTION_KEYMAP_C = combo.c
endif

ifneq ("$(wildcard $(USER_PATH)/secrets.c)","")
  SRC += secrets.c
endif

ifeq ($(strip $(NO_SECRETS)), yes)
    OPT_DEFS += -DNO_SECRETS
endif
