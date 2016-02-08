

// include the library code:
#include <LiquidCrystal.h>
#include "MQ135.h"


int analogPin = 0;

MQ135 gasSensor = MQ135(analogPin);

#define RZERO 1926.52 // 76.63

int i = 0;

double result;
double rzero;

const int buzzerPin = 4;

// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(7, 8, 9, 10, 11, 12);

void setup() {
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
  // initialize the serial communications:
  Serial.begin(9600);
   pinMode(buzzerPin, OUTPUT);
}
void loop() {

 if (i==0) {
   rzero = gasSensor.getRZero(); // float
 }
 if (i>0) {  
   result = gasSensor.getRZero();
   rzero = (rzero + result)/2;
  }
  
  float ppm = gasSensor.getPPM();
  float ppm2 = gasSensor.getCorrectedPPM(22, 40);
   lcd.clear();
   Serial.print(rzero);
  Serial.print(" (");
  Serial.print(result);
  Serial.print(" )\t\t");
  Serial.print(ppm);
  Serial.print(" ppm");
  Serial.print("\tcoorectedPPM = ");
  Serial.print(ppm2);
  Serial.println(" ppm");
  i++;
  lcd.print("CO2 ");
       lcd.print(ppm,2);
       lcd.print(" ppm");
  if(ppm>0.10)
  {
    lcd.print(" !!!!!!!!!!");
     beep(50);
  }
  delay(200);
  
}
void beep(unsigned char delayms){
  tone(buzzerPin, 261);
  delay(delayms);          // wait for a delayms ms
   noTone(buzzerPin);
}  

