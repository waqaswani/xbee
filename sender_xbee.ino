/*
Arduino IDE version: 1.8.12
Tested on : Arduino Uno, Xbee shield,Xbee S2C PRO
Microcontroller:ATMEGA 328p
Written by:Mohammad Waqas
Date:24/02/2020
*/


#include "DHT.h" //including library for dht

#define DHTPIN A0     // A0 pin of arduino connected to dht

#define DHTTYPE DHT11   //dht11 sensor

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(9600);
  Serial.println(F("DHTxx test!"));

  dht.begin();
}

void loop() {
  
  delay(2000);

 
  
  int t = dht.readTemperature();//Function for reading temperature in celsius
  
  Serial.print('<');  //start bit
  Serial.print(t);
  Serial.print('>'); //stop bit
  
}
