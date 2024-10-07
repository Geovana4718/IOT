#include <Servo.h>

const int trigPin = 9;
const int echoPin = 10;
const int ledPin = 4;
const int servoPin = 6;

Servo meuServo;

void setup() {
    pinMode(trigPin, OUTPUT);
    pinMode(echoPin, INPUT);
    pinMode(ledPin, OUTPUT);
    
    meuServo.attach(servoPin);
    meuServo.write(0);
    Serial.begin(9600);
}

void loop() {
    long duration, distance;

   
    digitalWrite(trigPin, LOW);
    delayMicroseconds(2);
    digitalWrite(trigPin, HIGH);
    delayMicroseconds(10);
    digitalWrite(trigPin, LOW);

    duration = pulseIn(echoPin, HIGH);
    distance = (duration * 0.034) / 2;

    Serial.print("Distância: ");
    Serial.println(distance);

    if (distance < 30) {
        digitalWrite(ledPin, HIGH);
        meuServo.write(90); 
        delay(1000);
        meuServo.write(0);
        digitalWrite(ledPin, LOW);
    }

    delay(100);
}
