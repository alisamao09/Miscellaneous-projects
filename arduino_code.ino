#include <LiquidCrystal.h>
//sound sensor and water level sensor : h2o means parameters for water and others are for sound
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2,h2o=0;;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);
void setup(){ lcd.begin(16, 2);
  pinMode(h2o,INPUT);  
  Serial.begin(9600); // open serial port, set the baud rate to 9600 bps
}
void loop(){int val;
      int i=analogRead(h2o); // Incoming analog signal read and appointed sensor
      Serial.println(i); 
      val=analogRead(0);   //connect mic sensor to Analog 0
      Serial.print("");
      Serial.println(val,DEC);//print the sound value to serial        
      lcd.setCursor(0, 0);
lcd.print("h2o");
lcd.print(val);
lcd.print("   ");
delay(200);}
# Reference: https://create.arduino.cc/projecthub/m_karim02/arduino-sound-sensor-module-sound-sensor-with-arduino-code-868d55
