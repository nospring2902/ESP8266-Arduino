#include <ESP8266WiFi.h>
const char* ssid = "ten wifi esp ket noi";
const char* password = "mk wifi ket noi";

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

  WiFi.mode(WiFi_STA);

// cau hinh wifi se ket noi toi
  // IPAddress staticip(192.168.1.99);
  // IPAddress gateway(192.168.1.1);
  // IPAddress subnet (255.255.255.0);

  // WiFi.config(staticip, gateway, subnet);
  
  WiFi.begin(ssid, password);

  while(WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }

  Serial.println("Wifi connected!");
  Serial.print("IP host: ");
  Serial.println(WiFi.localIP());

}

void loop() {
  // put your main code here, to run repeatedly:

}
