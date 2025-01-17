#define BLYNK_PRINT Serial
#define BLYNK_TEMPLATE_ID "id"
#define BLYNK_TEMPLATE_NAME "nome"
#define BLYNK_AUTH_TOKEN "token"

#define sensor 13

#include <BlynkSimpleEsp32.h>

BlynkTimer timer;

int res;
int estado;
int ultimo_estado;

void VirtualWrite()
{
  estado = digitalRead(sensor);

  if (estado != ultimo_estado)
  {
    res = res + 1;
    Serial.println(res);
  }
  else
  {
    Serial.println(res);
  }

    ultimo_estado = estado;

    Blynk.virtualWrite(V10, res);
}

void setup() {
  pinMode(sensor, INPUT);
  Blynk.begin(BLYNK_AUTH_TOKEN, "ssid", "pass", "blynk.cloud", 80);
  timer.setInterval(1000L, VirtualWrite);
  Serial.begin(9600);
}

void loop() {
    Blynk.run();
    timer.run();
}
