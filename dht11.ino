#include <DHT.h>
#include <stdio.h>

#define DHTPIN A14 // A14 = D13(no esp32)
#define DHTYPE DHT11

DHT dht(DHTPIN, DHTYPE);

float temp = dht.readTemperature();
float hum = dht.readHumidity();

void setup()
{
  Serial.begin(9600);
  dht.begin();
}

void loop()
{
  float *tempee;
  float *humm;

  tempee = &temp;
  humm = &hum;
 
  if(isnan(tempee) || isnan(humm))
  {
    Serial.println("Falha na leitura do sensor!");
  }
  else
  {
    Serial.print("Temperatura: ");
    Serial.println(temp);
    Serial.print("Umidade: ");
    Serial.println(humm);
    //delay(2000);
  }
}