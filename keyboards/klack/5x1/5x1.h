#pragma once

#include "quantum.h"


// This a shortcut to help you visually see your layout.
// The first section contains all of the arguments
// The second converts the arguments into a two-dimensional array

#define LAYOUT_5x1( \
    A0, A1, A2, A3, A4 \
) \
{ \
    { A0, A1, A2, A3, A4 }, \
}
