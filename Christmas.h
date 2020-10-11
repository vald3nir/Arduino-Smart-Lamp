#ifndef MODE_CHRISTMAS
#define MODE_CHRISTMAS

#include "Colors.h"

// ------------------------------------------------------------------
// FEATURE PROTOTYPES
// ------------------------------------------------------------------

void setupFeature();
void runFeature();

// ------------------------------------------------------------------
// FEATURE IMPLEMENTATIONS
// ------------------------------------------------------------------

void setupFeature()
{
}

int colorsIndex[] = {INDEX_COLOR_RED, INDEX_COLOR_GREEN, INDEX_COLOR_BLUE, INDEX_COLOR_PURPLE, INDEX_COLOR_YELLOW};

void runFeature()
{
    int delay = random(50, 100);
    int index = random(0, sizeof(colorsIndex) / sizeof(colorsIndex[0]));
    int color = colorsIndex[index];
    blinkColor(delay, color);
}

#endif
