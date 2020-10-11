#ifndef COLORS_H
#define COLORS_H

// ------------------------------------------------------------------
// DEFINITIONS
// ------------------------------------------------------------------
#define INDEX_TURN_OFF -1
#define INDEX_COLOR_RED 0
#define INDEX_COLOR_GREEN 1
#define INDEX_COLOR_BLUE 2
#define INDEX_COLOR_PURPLE 3
#define INDEX_COLOR_YELLOW 4
#define INDEX_COLOR_WHITE 5

// ------------------------------------------------------------------
// PROTOTYPES
// ------------------------------------------------------------------

void initColors();
void turnOff();
void showColorWhite();
void showColorRed();
void showColorGreen();
void showColorBlue();
void showColorPurple();
void showColorYellow();
void showCustomColor(int r, int g, int b);
void blinkColor(int delayValue, int color);
void selectColorByIndexMode(int colorIndex);

#endif
