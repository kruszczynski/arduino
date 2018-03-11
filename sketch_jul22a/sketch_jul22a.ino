// include the library code:
#include <LiquidCrystal.h>
#include <dht.h>

// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

int MoistureInput=A0;
int AnotherMoistureInput=A1;
int moistureValue;
int anotherValue;
int chk;

dht DHT;

int DHT11_PIN=A3;

void setup()
{
  pinMode(MoistureInput, INPUT);
  pinMode(AnotherMoistureInput, INPUT);
  pinMode(DHT11_PIN, INPUT);

  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
}

void loop() {
  lcd.clear();

  moistureValue=analogRead(MoistureInput);
  anotherValue=analogRead(AnotherMoistureInput);
  // lcd.print(moistureValue);
  // lcd.print(", ");
  // lcd.print(anotherValue);

  lcd.setCursor(0, 0);
  chk = DHT.read11(DHT11_PIN);
  lcd.print("temp: ");
  lcd.print(DHT.temperature);
  lcd.setCursor(0, 1);
  lcd.print(" hum: ");
  lcd.print(DHT.humidity);

  delay(500);
}
