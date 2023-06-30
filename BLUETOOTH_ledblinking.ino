#include "BluetoothSerial.h"

BluetoothSerial SerialBT;
int led = 2;
char cmd;


void setup() {
  Serial.begin(115200);
  SerialBT.begin("ESP32test"); //Bluetooth device name
  Serial.println("The device started, now you can pair it with bluetooth!");
  pinMode(led, OUTPUT);

}

void loop() {
  if(SerialBT.available())
  {
    cmd = SerialBT.read();
    Serial.print("cmd is =  ");
    Serial.println(cmd);
  

  if(cmd=='1')
  {
    digitalWrite(2,HIGH);
    Serial.println(" led trun ON");
    delay(1000);
  }
  if(cmd=='0')
  {
     digitalWrite(2,HIGH);
     delay(1000);
    digitalWrite(2,LOW);
    Serial.println(" led trun ON and OFF ");
    delay(1000);
  }

  

  } //serial
  

}
