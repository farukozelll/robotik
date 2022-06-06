#include <Wire.h> 
#include <LiquidCrystal_I2C.h>
int in1 = 6; //Declaring where our module is wired
int in2 = 7;
int ConA = 9;// Don't forget this is a PWM DI/DO
int speed1;

int seconds = 0;
int sensorValue = 0;
int potPin = A0;
int potDegeri = 0;
int motorDegeri = 0;

LiquidCrystal_I2C lcd(0x27, 16, 2);
 
void setup() {
 Serial.begin(9600);
pinMode(6, OUTPUT);//***
pinMode(7, OUTPUT); 
pinMode(9, OUTPUT);//***

lcd.begin();                                   
lcd.backlight();
  pinMode(A0, INPUT);
  Serial.begin(9600);
  
  lcd.print("POT---MOTOR");
}
 
void TurnMotorA(){ //We create a function which control the direction and speed
digitalWrite(in1, LOW); //Switch between this HIGH and LOW to change direction
digitalWrite(in2, HIGH);
speed1 = analogRead(A0);
speed1 = speed1*0.2492668622; //We read thea analog value from the potentiometer calibrate it
analogWrite(ConA,speed1);// Then inject it to our motor
Serial.println(speed1);
motorDegeri = map(speed1, 0, 1023, 0, 255);

 lcd.setCursor(0, 1);
  lcd.print(speed1);
  lcd.print("--");
  lcd.print(motorDegeri);
  lcd.setBacklight(1);
  delay(1000);
lcd.clear();

}
void loop() {
M(); //one function that keeps looping you can add another one with different direction or stop
 
}
void M(){
  
  potDegeri = analogRead(potPin);
  motorDegeri = map(potDegeri, 0, 1023, 0, 255);
  analogWrite(3,motorDegeri);
  Serial.print(potDegeri);
  delay(10);
  Serial.println(motorDegeri);
  lcd.setCursor(0, 1);
  lcd.print(potDegeri);
  lcd.print("--");
  lcd.print(motorDegeri);
  lcd.setBacklight(1);
  delay(500);
/*  lcd_1.setBacklight(0);
  delay(500); // Wait for 500 millisecond(s)*/
  seconds += 1;
  
  }
