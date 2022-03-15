#include <stdio.h>
#include <stdbool.h>

int RED = 49;
int GREEN = 47;
int YELLOW = 51;
int BLUE = 53;
int pin; 

void setup() {
  // put your setup code here, to run once:
  pinMode(RED,OUTPUT);
  pinMode(YELLOW,OUTPUT);
  pinMode(GREEN,OUTPUT);
  pinMode(BLUE,OUTPUT);
  //
  //Blue 53, Green 51, Yellow 49, Red 47
  //Green 53, Red 49, Yellow 49, Blue 47
}

int something = 0;

void loop() {
  // put your main code here, to run repeatedly:
  
  delay(2000);
  if (1) {
  
    digitalWrite(RED, HIGH);
    digitalWrite(YELLOW, LOW);
    digitalWrite(GREEN, LOW);
    digitalWrite(BLUE, LOW);
    
  } //If
  delay(2000);
  
  if(1) {
    digitalWrite(RED, LOW);
    digitalWrite(YELLOW, HIGH);
    digitalWrite(GREEN, LOW);
    digitalWrite(BLUE, LOW);
    
  } //If
  delay(2000);
  
  //if (something == YELLOW) {
  if (1) {
  
    digitalWrite(RED, LOW);
    digitalWrite(YELLOW, LOW);
    digitalWrite(GREEN, HIGH);
    digitalWrite(BLUE, LOW);
    
  } //If
  delay(2000);
  
  //if (something == BLUE) {
  if (1) {
    digitalWrite(RED, LOW);
    digitalWrite(YELLOW, LOW);
    digitalWrite(GREEN, LOW);
    digitalWrite(BLUE, HIGH);
    
  } //If
  delay(2000);

  Serial.print("Loop");

} //Loop
