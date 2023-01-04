#include "WiFi.h"
 
const char* ssid = "test RSSI";
const char* password =  "meow";
 
void setup() {
 
  Serial.begin(115200);
  // WiFi.softAP(ssid, password);
  
  //WiFi.setTxPower(WIFI_POWER_19_5dBm); //debug
  WiFi.softAP(ssid); // без пароля
  //WiFi.setTxPower(WIFI_POWER_19_5dBm); //debug
 
  Serial.println();
  Serial.print("IP address: ");
  Serial.println(WiFi.softAPIP());
 
}
 
void loop() {}
