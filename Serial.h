#ifndef MODE_SERIAL
#define MODE_SERIAL

#include "Colors.h"

// ------------------------------------------------------------------
// FEATURE PROTOTYPES
// ------------------------------------------------------------------

void setupFeature();
void runFeature();
void SelectcolorById(int index);

// ------------------------------------------------------------------
// FEATURE IMPLEMENTATIONS
// ------------------------------------------------------------------

void setupFeature()
{
    Serial.begin(9600);
    while (!Serial)
    {
        ; // wait for serial port to connect. Needed for native USB port only
    }
}

void runFeature()
{
    if (Serial.available() > 0)
    {
        SelectcolorById(Serial.read()); // incoming serial byte
    }
}

void SelectcolorById(int index)
{
    switch (index)
    {
    case 48: // byte 0
        selectColorByIndexMode(INDEX_TURN_OFF);
        break;
    case 49: // byte 1
        selectColorByIndexMode(INDEX_COLOR_GREEN);
        break;
    case 50: // byte 2
        selectColorByIndexMode(INDEX_COLOR_BLUE);
        break;
    case 51: // byte 3
        selectColorByIndexMode(INDEX_COLOR_PURPLE);
        break;
    case 52: // byte 4
        selectColorByIndexMode(INDEX_COLOR_YELLOW);
        break;
    case 53: // byte 5
        selectColorByIndexMode(INDEX_COLOR_WHITE);
        break;
    case 54: // byte 6
        selectColorByIndexMode(INDEX_COLOR_RED);
        break;
    default:
        break;
    }
}

#endif