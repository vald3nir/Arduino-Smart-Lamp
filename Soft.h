#ifndef MODE_SOFT
#define MODE_SOFT

#include "Colors.h"

// ------------------------------------------------------------------
// FEATURE PROTOTYPES
// ------------------------------------------------------------------

void setupFeature();
void runFeature();

// ------------------------------------------------------------------
// FEATURE IMPLEMENTATIONS
// ------------------------------------------------------------------

int colorsIndex[] = {INDEX_COLOR_RED, INDEX_COLOR_GREEN, INDEX_COLOR_BLUE,
                     INDEX_COLOR_PURPLE, INDEX_COLOR_YELLOW, INDEX_COLOR_WHITE};

int getColorIndex()
{
    int index = random(0, sizeof(colorsIndex) / sizeof(colorsIndex[0]));
    return colorsIndex[index];
}

void setupFeature()
{
}

void runFeature()
{
    selectColorByIndexMode(getColorIndex());
    delay(1000 * 60 * 60 * 15); // 15 min
}

#endif
