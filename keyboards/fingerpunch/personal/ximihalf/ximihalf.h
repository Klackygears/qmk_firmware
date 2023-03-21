#pragma once
#include "quantum.h"

void pointing_device_set_default_cpi(void);

#define LAYOUT_ximi( \
  K00, K01, K02, K03, K04, K05, \
  K10, K11, K12, K13, K14, K15, \
  K20, K21, K22, K23, K24, K25, \
                 K06, K16, K26, \
                 K07, K17, K27  \
  ) \
  { \
    { K00, K01, K02, K03, K04, K05, K06, K07 }, \
    { K10, K11, K12, K13, K14, K15, K16, K17 }, \
    { K20, K21, K22, K23, K24, K25, K26, K27 } \
  }

#include "keyboards/fingerpunch/src/fp.h"
