#include "DHT.h"
#include <ESP8266WiFi.h>
#include <PubSubClient.h>
#include <aREST.h>
float temperature;
float humidity;
void setup() {

  // Start Serial
  Serial.begin(115200);
  
  setupDHT();
  
  setupARest();

}

void loop() {

    loopDHT();
//  loopDHT_Fake();
  
  loopARest();
  uploadData();

}
