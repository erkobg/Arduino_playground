// Example testing sketch for various DHT humidity/temperature sensors
// Written by ladyada, public domain

#include "DHT.h"

#define DHTPIN 8     // what digital pin we're connected to

// Uncomment whatever type you're using!

#define DHTTYPE DHT11   // DHT 11

//#define DHTTYPE DHT22   // DHT 22  (AM2302), AM2321
//#define DHTTYPE DHT21   // DHT 21 (AM2301)

// Connect pin 1 (on the left) of the sensor to +5V
// NOTE: If using a board with 3.3V logic like an Arduino Due connect pin 1
// to 3.3V instead of 5V!
// Connect pin 2 of the sensor to whatever your DHTPIN is
// Connect pin 4 (on the right) of the sensor to GROUND
// Connect a 10K resistor from pin 2 (data) to pin 1 (power) of the sensor

// Initialize DHT sensor.
// Note that older versions of this library took an optional third parameter to
// tweak the timings for faster processors.  This parameter is no longer needed
// as the current DHT reading algorithm adjusts itself to work on faster procs.

DHT dht(DHTPIN, DHTTYPE);

void setup() {
//The digital pin #8 (UEXT_PWR_E) is used to allow 3.3V output on the UEXT; we 
//set it LOW to allow powering the module from UEXT pin #1 of OLIMEXINO-32U4
  pinMode(8, OUTPUT);
  digitalWrite(8, HIGH);
  
  Serial.begin(9600);
  Serial.println("DHTxx test!");

}

void loop() {
  // Wait a few seconds between measurements.
  delay(1000);
  digitalWrite(8, HIGH);
 delay(1000);
   digitalWrite(8, LOW);
 
}


