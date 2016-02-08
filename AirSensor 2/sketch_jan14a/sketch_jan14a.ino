
/* Connection pins:

Arduino       MQ-135
  A0            A0
 +5V            VCC
 GND            GND
 
*/

#include "MQ135.h"

int analogPin = 0;

MQ135 gasSensor = MQ135(analogPin);

#define RZERO 1926.52 // 76.63

int i = 0;

double result;
double rzero;

void setup() {
  Serial.begin(9600);
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
  delay(200);
}

