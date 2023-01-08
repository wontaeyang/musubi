#pragma once

#include "config_common.h"

#define MATRIX_COLS   5
#define MATRIX_ROWS   8

#define DIODE_DIRECTION COL2ROW
#define MATRIX_ROW_PINS { GP3, GP4, GP2, GP1 }
#define MATRIX_COL_PINS { GP6, GP29, GP28, GP27, GP26 }

#define SOFT_SERIAL_PIN GP0
#define USE_SERIAL
#define SELECT_SOFT_SERIAL_SPEED 0

#define EE_HANDS
