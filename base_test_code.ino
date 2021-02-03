#include"Directions.h"

//Declare pinouts inside Motor()

Motor motor1(1,2,3);
Motor motor2(23,4);
Motor motor3(3,4,4);
Motor motor4(2,3,4);

Direction bot(motor1, motor2, motor3, motor4);

void setup() {
  Serial.begin (9600);
}

void loop() {
  //Test individual Motors
  bot.testMotors(100);
  delay(3000);

  //Test bot direction
  bot.forward(100,100,100,100);
  delay(3000);
  bot.backward(100,100,100,100);
  delay(3000);
  bot.left(100,100,100,100);
  delay(3000);
  bot.right(100,100,100,100);
  delay(3000);
  bot.upLeft(100,100,100,100);
  delay(3000);
  bot.upRight(100,100,100,100);
  delay(3000);
  bot.downLeft(100,100,100,100);
  delay(3000);
  bot.downRight(100,100,100,100);
  delay(3000);
  bot.brake();
  delay(3000);
}
