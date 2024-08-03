#include "WiFi.h"
#include "wifi.h"

void setupWiFi() {
  WiFi.softAP("robotic_arm", "robot123");
  WiFi.softAPConfig(IPAddress(192, 168, 3, 1), IPAddress(192, 168, 3, 1), IPAddress(255, 255, 255, 0));
  Serial.println("WiFi Setup Done");
}
