#include <Servo.h>
Servo servo1;
int trigPin = 3;
int echoPin = 2;
long distance;
long duration;
void setup()
{
servo1.attach(4);
pinMode(trigPin, OUTPUT);
pinMode(echoPin, INPUT);
Serial.begin(9600);
}
void loop() {
 ultra(); //You can do it also with switch
 servo1.write(0);
 if(distance == 8){
 servo1.write(10);
 }if(distance == 7){
 servo1.write(15);
 }if(distance == 6){
 servo1.write(25);
 }if(distance == 5){
 servo1.write(30);
 }if(distance == 4){
 servo1.write(30);
 }if(distance == 3){
 servo1.write(35);
 }if(distance == 2){
 servo1.write(45);
 }
 Serial.print("Distance: ");
 Serial.println(distance);
}
void ultra(){
 digitalWrite(trigPin, LOW);
 delayMicroseconds(2);
 digitalWrite(trigPin, HIGH);
 delayMicroseconds(10);
 digitalWrite(trigPin, LOW);
 duration = pulseIn(echoPin, HIGH);
 distance = duration*0.034/2;
 
 
