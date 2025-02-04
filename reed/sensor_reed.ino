#include <stdio.h>
#define sensor 12
#define Led 32

int res = 0;
int estado = 0;
int ultimo_estado = 0;

void setup() {
  pinMode(sensor, INPUT);
  pinMode(Led, OUTPUT);
  Serial.begin(9600);
}

void loop() {

    estado = digitalRead(sensor);

    if (estado == HIGH)
    {
      digitalWrite(Led, HIGH);
    }
    else
    {
      digitalWrite(Led, LOW);
    }
    delay(350);

    contar();

    ultimo_estado = estado;

}

void contar()
{
  if (estado != ultimo_estado)
  {
    res = res + 0.25;
    Serial.println(res);
    delay(350);
  }
  else
  {
    Serial.println(res);
  }
  
}
