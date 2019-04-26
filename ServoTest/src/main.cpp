#include <Arduino.h>
#include <Servo.h>

int btnState1 = 0;
int btnState2 = 0;

Servo servo1;

int servoN=0;
void setup() {
  // put your setup code here, to run once:
  pinMode(7,INPUT);
  pinMode(6,INPUT);

  servo1.attach(12);

  Serial.begin(9600);
  Serial.println("boa");


  servo1.write(servoN);
}

void loop() {
  
btnState1 = digitalRead(7);
  btnState2 = digitalRead(6);

  if(btnState1==0){
    Serial.println("esquerda");
servoN=servoN+1;
    servo1.write(servoN);
  }else
  {
         

  }
  if(btnState2==0){
    Serial.println("Direita");
servoN=servoN-1;
    servo1.write(servoN);
    Serial.println(servoN);

  }else
  {
         

  }
   delay(10);

}