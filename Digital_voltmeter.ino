#include "LiquidCrystal.h"

LiquidCrystal lcd(2, 3, 4, 5, 6, 7);

float voltage = 0.0;
float temp=0.0;
int analog_value;

void setup()
{
   lcd.begin(16, 2); 
   lcd.setCursor (0,0);
   lcd.print(" Arduino based ");
   lcd.setCursor(0,1); 
   lcd.print("Digital Voltmeter");
delay(2000);
}
void loop() 
{

   
   analog_value = analogRead(A0);
   voltage = (analog_value * 5.0) / 1024.0; 

   if (voltage < 0.1) 
   {
     voltage=0.0;
   } 
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("Voltage= ");
    lcd.print(voltage);
    lcd.setCursor(13,1);
    lcd.print("V");
    delay(30);
}
