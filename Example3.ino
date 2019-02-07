
// Initial Program for GitHub

#include <Wire.h>
#include "rgb_lcd.h"

rgb_lcd lcd;

void setup() {
  // put your setup code here, to run once:
  // put your setup code here, to run once:
  // Some Code
  lcd.begin(16, 2);
  lcd.print("My first Program 2");
  delay(2000);


}

void loop() {
  // put your main code here, to run repeatedly:
for (int positionCounter = 0; positionCounter < 13; positionCounter++) {
        // scroll one position left:
        lcd.scrollDisplayLeft();
        // wait a bit:
        delay(150);
    }

    for (int positionCounter = 0; positionCounter < 29; positionCounter++) {
        // scroll one position right:
        lcd.scrollDisplayRight();
        // wait a bit:
        delay(150);
    }


    for (int positionCounter = 0; positionCounter < 16; positionCounter++) {
        // scroll one position left:
        lcd.scrollDisplayLeft();
        // wait a bit:
        delay(150);
    }
    delay(1000);
}
