/*
 * This file is the code to run my arduino CNC, see the readme in order to learn how to set
 * it up and look at the writeup for more detailed descriptions of what parts of the code do.
*/
#include <AFMotor.h>

AF_Stepper xControl(200,1);//creates the x axis motor object
AF_Stepper yControl(200,2);//creates the y axis motor object
const float cncSpeed = 30;//speed that cnc operates at
const int stepsPermm = 5;//int that represents the number of steps in one milimeter, in my case this was around 5
float xCoor = 0;
float yCoor = 0;
void setup() {
  Serial.begin(9600);//Connect to computer to accept input
  Serial.prfloatln("connected");
  xControl.setSpeed(cncSpeed);
  yControl.setSpeed(cncSpeed);//Sets an initial speed value, will be changed later
//release motors so zero can be found by hand
  xControl.release();
  yControl.release();
}
float incomingByte = 0;
void loop() {
  if (Serial.available() > 0) {//get new coordinate to go to
    incomingByte = Serial.read();//read in new coordinate with format x,y where x and y are mm
  }
  String *arr = strtok(incomingByte, ",");//tokenize string and store in arr
//split up tokenized string floato x and y variables
  float x = arr[0].toFloat();
  float y = arr[1].toFloat();
  float xSpeed = 0;
  float ySpeed = 0;
  float deltaX = xCoor - x;
  float deltaY = yCoor - y;
  xCoor = x;//update global coordinates
  yCoor = y;//update global coordinates
  float ratio = (cncSpeed)**2/((deltaX)**2+(deltaY)**2)//one must find the individual x and y speeds in order to properly draw a line
  xSpeed = sqrt(abs(deltaX**2*ratio))//find speed to set x stepper motor to
  ySpeed = sqrt(abs(deltaY**2*ratio))//find speed to set y stepper motor to
//Actually setting speeds
  xControl.setSpeed(xSpeed);
  yControl.setSpeed(ySpeed);
//move the steppers the right distances
  xControl.move(deltaX*stepsPermm);//moves stepper motor the correct amount
  yControl.move(deltaY*stepsPermm);//moves stepper motor the correct amount
}
