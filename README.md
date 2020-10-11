# Arduino Smart Lamp

Smart lamp using Arduino microcontroller connected to a ring of LEDs

## Technologies Used

### Microcontroller

| Arduino Uno || ESP 32 |
| :---:   | :---: | :---: |
| ![arduino](https://user-images.githubusercontent.com/23506996/143781428-ecd5c6dc-c827-4854-93c6-014ceb9bfc3b.png) | OR | ![image](https://user-images.githubusercontent.com/23506996/193470529-bb0e3825-4612-4f8c-aee0-c2d5bfaca400.png)   |

### NeoPixel Ring - 12 x 5050 RGB LED with Integrated Drivers

![led_ring](https://user-images.githubusercontent.com/23506996/143781442-fccdfd51-adf1-47b3-80f1-4a973fb83df0.jpg)

Library Used -> [Adafruit NeoPixel](https://github.com/adafruit/Adafruit_NeoPixel)

### KY-038 (Audio Sensor)

![ky038](https://user-images.githubusercontent.com/23506996/143781455-c3c05c4f-cac5-4da4-a95f-6ce18e68070d.png)

## Modes of operation

### Used as a christmas tree

- Random colors
- Random flasher speed
- To use this mode just comment the following excerpt: #define SONG_PIN

### Using sound sensor [palms] to change the lamp color

- Color control through palms
- To use this mode just remove the comment the following excerpt: #define SONG_PIN

## Circuit With Arduino

![image](https://user-images.githubusercontent.com/23506996/193470289-2ad43fc8-27bb-4f1a-80a4-0ebc292a3bb3.png)

## Demo

![lamp](https://user-images.githubusercontent.com/23506996/143781446-f1e96d3f-bd5f-47e1-85de-dc842d22ad5f.jpg)

![demo](https://user-images.githubusercontent.com/23506996/143781444-73dbf373-0add-4eae-905a-f84cbc71e76c.gif)

![ezgif com-gif-maker](https://user-images.githubusercontent.com/23506996/206853203-8df8d62a-8bb1-4377-b1dd-e941beccd184.gif)



