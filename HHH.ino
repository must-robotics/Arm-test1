#include <ServoEasing.h>

#include <Servo.h>

Servo Base;
Servo Shoulder;
Servo WristX;
Servo WristZ;
Servo Head;
Servo Elbow;
Servo Gripper;
int potpin = A1;  // analog pin used to connect the potentiometer
int val;    // variable to read the value from the analog pin
int angle;
int pos;

void setup() {
  // put your setup code here, to run once:
  
  Base.attach(53);
  WristX.attach(46);
  WristZ.attach(48);
  Head.attach(50);
  Elbow.attach(51);
  Gripper.attach(49);
 Shoulder.attach(52);
Serial.begin(9600);
}
 void homearm(){
  Shoulder.write(61);//the initial angle at the start //
   Elbow.write(30);//the initial angle at the start //
    WristX.write(45);//the initial angle at the start //
    WristZ.write(0);//the initial angle at the start //
    Base.write(90);//the initial angle at the start //
    Gripper.write(140);//the initial angle at the start //
    Head.write(140);//the initial angle at the start //
 }
void pickobject()
{
     Base.write(65);//the initial angle at the start //
      Head.write(0);//the initial angle at the start //
      WristX.write(100);//the initial angle at the start //
     WristZ.write(26);//the initial angle at the start //
     Shoulder.write(24);//the initial angle at the start //
   delay (1000);
   Shoulder.write(45);
   Elbow.write(180);//the initial angle at the start //

   Gripper.write(45);//the initial angle at the start //
   delay (1000);
  Gripper.write(30);//the initial angle at the start //
  delay (1000);
  
  }

void placeobject()
{
   Base.write(150);//the initial angle at the start //
  

    Head.write(30);//the initial angle at the start //
  
 
    WristX.write(10);//the initial angle at the start //
  
  
    WristZ.write(26);//the initial angle at the start //
  
  
   Shoulder.write(24);//the initial angle at the start //
   delay (1000);
   Shoulder.write(45);
   delay (1000);
   Elbow.write(180);//the initial angle at the start //
   delay (1000);
// Gripper.write(30);//the initial angle at the start //
   Gripper.write(0);//the initial angle at the start //
   delay (500);

   // Elbow.write(90);
}


 void loop() {
  homearm();

 
    
 /*   Shoulder.write(100);//the initial angle at the start //
    delay(1000);
    Elbow.write(155);
    delay(1000);
     WristX.write(100);//the initial angle at the start //
     delay(1000);
       WristZ.write(60);//the initial angle at the start //
     delay(1000);
    Gripper.write(0);//the initial angle at the start //
    delay(1000);
     Base.write(45);//the initial angle at the start //
    delay(1000);
    Elbow.write(155);
    delay(1000);
     Gripper.write(30);//the initial angle at the start //
    delay(1000);
     Base.write(65);//the initial angle at the start //
    delay(1000);
    
      
    Gripper.write(30);//the initial angle at the start //
    delay(100000);*/
    
    /*Elbow.write(180);//the initial angle at the start //
    WristX.write(100);//the initial angle at the start //
    WristZ.write(45);//the initial angle at the start //
    Base.write(65);//the initial angle at the start //
    Gripper.write(0);//the initial angle at the start //
*/



    
  /* delay(1000);
   Gripper.write(30);
     delay(1000);
      Shoulder.write(90);
   delay(1000);
     Elbow.write(180);
     delay(1000);
 
   Gripper.write(0);
     delay(1000000);
    
    */


 /*val = analogRead(potpin);            // reads the value of the potentiometer (value between 0 and 1023)
  angle = map(val, 0, 1023, 0, 180);     // scale it to use it with the servo (value between 0 and 180)
  //Shoulder.write(angle); 
  Serial.println(angle);// sets the servo position according to the scaled value
 delay(15); 

*/







}
