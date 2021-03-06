#pragma once

/* Enable C linkage for C++ Compilers: */
#if defined(__cplusplus)
extern "C" {
#endif

#include "../common/chip_type_project.h"

#if (__PROJECT_CHIP_TYPE_SEL__ == PROJECT_CHIP_8267)
#include "light_switch_8267.h"
#else   // for (__PROJECT_CHIP_TYPE_SEL__ == PROJECT_CHIP_8266)
#include "light_switch_8266.h"
#endif

/* Disable C linkage for C++ Compilers: */
#if defined(__cplusplus)
}
#endif
