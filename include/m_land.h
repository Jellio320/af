#ifndef M_LAND_H_H
#define M_LAND_H_H

#include "ultra64.h"

// Town name character count
#define LAND_NAME_SIZE 6
#define LAND_NAME_MURA_SIZE (LAND_NAME_SIZE + 2)

typedef struct LandInfo {
    char unk00[0xA];
} LandInfo; // size >= 0xA

#endif
