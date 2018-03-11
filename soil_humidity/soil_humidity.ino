// include the library code:
#include <LiquidCrystal.h>

// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

int MoistureInput=A0;
int AnotherMoistureInput=A1;
int moistureValue;
int anotherValue;

void setup()
{
  pinMode(MoistureInput, INPUT);
  pinMode(AnotherMoistureInput, INPUT);

  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
}

void loop() {
  lcd.clear();

  moistureValue=analogRead(MoistureInput);
  anotherValue=analogRead(AnotherMoistureInput);
  lcd.print(moistureValue);
  lcd.print(", ");
  lcd.print(anotherValue);

  delay(500);
}
