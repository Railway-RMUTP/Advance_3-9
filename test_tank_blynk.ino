#define BLYNK_PRINT Serial

#include <WiFi.h>
#include <WiFiClient.h>
#include <BlynkSimpleEsp32.h>


char auth[] = "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx";

// Your WiFi credentials.
// Set password to "" for open networks.
char ssid[] = "xxxxxx";
char pass[] = "xxxxxxxxx";



void setup() {
  // put your setup code here, to run once:
  pinMode(4, OUTPUT);
  pinMode(16, OUTPUT);
  pinMode(17, OUTPUT);
  pinMode(5, OUTPUT);


  Blynk.begin(auth, ssid, pass);
  Serial.begin(9600);
}

void loop() {


  Blynk.run();



}


BLYNK_WRITE(V1)
{
  if (param.asInt() == 1) {

    digitalWrite(4, LOW);
    digitalWrite(16, HIGH);
    digitalWrite(17, LOW);
    digitalWrite(5, HIGH);
  } else
  {
    digitalWrite(4, LOW);
    digitalWrite(16, LOW);
    digitalWrite(17, LOW);
    digitalWrite(5, LOW);
  }
}

BLYNK_WRITE(V2)
{
  if (param.asInt() == 1) {

    digitalWrite(4, HIGH);
    digitalWrite(16, LOW);
    digitalWrite(17, HIGH);
    digitalWrite(5, LOW);
  } else
  {
    digitalWrite(4, LOW);
    digitalWrite(16, LOW);
    digitalWrite(17, LOW);
    digitalWrite(5, LOW);
  }
}

BLYNK_WRITE(V3)
{
  if (param.asInt() == 1) {

    digitalWrite(4, LOW);
    digitalWrite(16, HIGH);
    digitalWrite(17, LOW);
    digitalWrite(5, LOW);
  } else
  {
    digitalWrite(4, LOW);
    digitalWrite(16, LOW);
    digitalWrite(17, LOW);
    digitalWrite(5, LOW);
  }
}

BLYNK_WRITE(V4)
{
  if (param.asInt() == 1) {

    digitalWrite(4, LOW);
    digitalWrite(16, LOW);
    digitalWrite(17, LOW);
    digitalWrite(5, HIGH);
  } else
   {
    digitalWrite(4, LOW);
    digitalWrite(16, LOW);
    digitalWrite(17, LOW);
    digitalWrite(5, LOW);
  }
}
