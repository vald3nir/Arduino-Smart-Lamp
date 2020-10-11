#include <Arduino.h>
#include "Colors.h"
#include "Adafruit_NeoPixel.h"

#define LED_PIN 8
#define NUM_PIXELS 16

Adafruit_NeoPixel pixels(NUM_PIXELS, LED_PIN, NEO_GRB + NEO_KHZ800);

void initColors()
{
    pixels.begin();
}

void setPixel(int pixel, byte red, byte green, byte blue)
{
    pixels.setPixelColor(pixel, pixels.Color(red, green, blue));
}

void setAll(byte red, byte green, byte blue)
{
    for (int i = 0; i < NUM_PIXELS; i++)
    {
        setPixel(i, red, green, blue);
    }
    pixels.show();
}

void turnOff()
{
    setAll(0, 0, 0);
}

void showColorWhite()
{
    setAll(255, 255, 255);
}

void showColorRed()
{
    setAll(255, 0, 0);
}

void showColorGreen()
{
    setAll(0, 255, 0);
}

void showColorBlue()
{
    setAll(0, 0, 255);
}

void showColorYellow()
{
    setAll(255, 140, 0);
}

void showColorPurple()
{
    setAll(80, 0, 80);
}

void showCustomColor(int r, int g, int b)
{
    setAll(r, g, b);
}

void blinkColor(int delayValue, int color)
{
    for (int i = 0; i < 20; i++)
    {
        selectColorByIndexMode(color);
        delay(delayValue);
        turnOff();
        delay(delayValue);
    }
}

void selectColorByIndexMode(int colorIndex)
{
    switch (colorIndex)
    {
    case INDEX_COLOR_RED:
        showColorRed();
        break;
    case INDEX_COLOR_GREEN:
        showColorGreen();
        break;
    case INDEX_COLOR_BLUE:
        showColorBlue();
        break;
    case INDEX_COLOR_PURPLE:
        showColorPurple();
        break;
    case INDEX_COLOR_YELLOW:
        showColorYellow();
        break;
    case INDEX_COLOR_WHITE:
        showColorWhite();
        break;
    case INDEX_TURN_OFF:
        turnOff();
        break;
    default:
        turnOff();
        break;
    }
}