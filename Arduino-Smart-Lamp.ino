#include <Arduino.h>
#include "Colors.h"

// -------------------------------------------------------
// Features
//  -------------------------------------------------------

#include "Serial.h"
// #include "Christmas.h"
// #include "Song.h"

//  -------------------------------------------------------

void setup()
{
  Serial.begin(9600);
  initColors();
  setupFeature();
}

void loop()
{
  runFeature();
}
