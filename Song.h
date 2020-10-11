#ifndef MODE_SONG
#define MODE_SONG

#include "Colors.h"

// ------------------------------------------------------------------
// FEATURE PROTOTYPES
// ------------------------------------------------------------------

void setupFeature();
void runFeature();

// ------------------------------------------------------------------
// FEATURE IMPLEMENTATIONS
// ------------------------------------------------------------------

#define SONG_PIN 3
int colorsIndex[] = {INDEX_COLOR_RED, INDEX_COLOR_GREEN, INDEX_COLOR_BLUE,
                     INDEX_COLOR_PURPLE, INDEX_COLOR_YELLOW, INDEX_COLOR_WHITE};
int colorIndex = colorsIndex[0];

void incrementIndex()
{
    if (colorIndex == INDEX_TURN_OFF)
    {
        colorIndex = 0;
    }
    else
    {
        colorIndex++;
    }
}

void setupFeature()
{
    pinMode(SONG_PIN, INPUT);
}

void runFeature()
{
    if (digitalRead(SONG_PIN) == HIGH)
    {
        selectColorByIndexMode(colorIndex);
        incrementIndex();
        delay(1000);
    }
}

#endif
