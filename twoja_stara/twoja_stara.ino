// include the library code:
#include <LiquidCrystal.h>

// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
  // Print a message to the LCD.
  lcd.print("Twoja stara");
  lcd.setCursor(0, 1);
  lcd.print("zapierdala");
}

void loop() {
  // Turn off the display:
  lcd.setCursor(0, 1);
  lcd.print("                  ");
  delay(500);
  // Turn on the display:
  lcd.setCursor(0, 1);
  lcd.print("zapierdala");
  delay(500);
}
