#define BLYNK_PRINT Serial
#define BLYNK_TEMPLATE_ID "id"
#define BLYNK_TEMPLATE_NAME "DHT11"
#define BLYNK_AUTH_TOKEN "token"

#include <BlynkSimpleEsp32.h>
#include <DHT.h>
#include <stdio.h>

#define DHTYPE DHT11
#define DHTPIN A14 // Pino 13 no ESP
#define sensor 12 // Pino 12 no ESP

DHT dht(DHTPIN, DHTYPE);

BlynkTimer timer;

int res;
int estado;
int ultimo_estado;

void VirtualWrite()
{
  // DHT11 CODE 
  double temp = dht.readTemperature();
  double umi = dht.readHumidity();

  if(isnan(temp) || isnan(umi))
  {
    Serial.println("Falha na leitura do sensor!");
  }
  else
  {
    Serial.print("Temperatura (C): ");
    Serial.println(temp);
    Serial.print("Umidade (%): ");
    Serial.println(umi);
  }
  Blynk.virtualWrite(V0, temp);
  Blynk.virtualWrite(V5, umi);

  // REED CODE
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
  
}

void setup() 
{
  Serial.begin(9600);
  dht.begin();
  Blynk.begin(BLYNK_AUTH_TOKEN, "ssid", "senha", "blynk.cloud", 80);
  timer.setInterval(1000L, VirtualWrite);
}

void loop() 
{
  Blynk.run();
  timer.run();
}
