#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);
const int trigPin=9;
const int echoPin=10;
long mesafe;
long sure;

void setup() {
lcd.begin();  
pinMode(trigPin,OUTPUT);
pinMode(echoPin,INPUT);
lcd.print("boy: ");

}

void loop() {

digitalWrite(9,0);
delayMicroseconds(2);
digitalWrite(9,1);
delayMicroseconds(10);
digitalWrite(9,0);
int sure=pulseIn(10,1);

int mesafe=(sure/2)/29.1;
int boy=190-mesafe;
lcd.setCursor(0,1);

lcd.print(mesafe);
lcd.print("cm");
delay(500);


}
