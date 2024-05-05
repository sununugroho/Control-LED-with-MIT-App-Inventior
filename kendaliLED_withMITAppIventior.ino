#define BLYNK_PRINT Serial

/* Fill-in your Template ID (only if using Blynk.Cloud) */
#define BLYNK_TEMPLATE_ID "TMPL6zEXzHkWt"
#define BLYNK_TEMPLATE_NAME "BlynkAPI"
#define BLYNK_AUTH_TOKEN "0_uKL4UwTuUWiNjiqIlkFxHRRrfTpTX0"

#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

// You should get Auth Token in the Blynk App.
// Go to the Project Settings (nut icon).
char auth[] = BLYNK_AUTH_TOKEN;
char ssid[] = "sss";
char password[] ="999999999";

#define led1 D3
#define led2 D2

BLYNK_WRITE(V0)
{
int pinValue = param.asInt();
digitalWrite(led1,pinValue);
}

BLYNK_WRITE(V1)
{
int pinValue1 = param.asInt();
digitalWrite(led2,pinValue1);
}

void setup()
{
// Debug console
Serial.begin(9600);
pinMode(led1,OUTPUT);
pinMode(led2,OUTPUT);
Blynk.begin(auth,ssid,password);

// Setup a function to be called every second

}

void loop()
{
Blynk.run();
}