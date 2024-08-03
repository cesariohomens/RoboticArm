#include <Arduino.h>
#include <WiFi.h>
#include "wifi.h"
#include "servos.h"
#include "webserver.h"

void setup() {
  Serial.begin(961200);

  // Initialize WiFi
  setupWiFi();

  // Initialize Servos
  setupServos();

  // Initialize Web Server
  setupWebServer();
}

void loop() {
  // Handle client requests to Web Server
  handleClientRequests();
}
