#include <ESP8266WiFi.h>
const char* ssid = "HOME";
const char* password = "12345678";

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
   Wifi.mode(WIFI_AP); // phat wifi
  
  // cau hinh wifi
  // IPAddress staticip(192.168.1.2);
  // IPAddress gateway(192.169.1.1);
  // IPAddress subnet(255.255.255.0);
  // WiFi.softAPConfig(staticip, gateway, subnet); 
 
  WiFi.softAP(ssid, password); // che do mac dinh
  Serial.println();
  Serial.print("IP host: ");
  Serial.println(WiFi.sofAPIP());

}

void loop() {
  // put your main code here, to run repeatedly:

}
