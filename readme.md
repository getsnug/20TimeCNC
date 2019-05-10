# CNC 20 Time Project
## Requirements
* Arduino Uno
* Built CNC
* Adafruit motor shield V2
* Arduino IDE
* Computer with a USB port
## Installing Arduino AF Libraries:
1. Open the Arduino IDE
2. From the toolbar select Toos>Manage Libraries
3. Type Adafruit Motor Shield V2 into the search bar
4. Click install
## Files:
* This project only has one file with code, which controls all of the important CNC functions
## Running the Code:
1. If you have not set up the arduino before:
  a. plug it into your computer with the USB connector
  b. Open the Arduino IDE with the main ino file open
  c. Click the Upload button in the upper right hand corner
2. In the Arduino IDE go to the tool bar and select Tools>Serial Monitor
3. Make sure that the bottom right hand corner of the Serial Monitor is set to 9600 BAUD, or whatever you set it to be in the Arduino code.
4. Enter the coordinates you want the CNC to trace in the serial input bar in the format x,y. Coordinates for the CNC are now Absolute so make sure not to ask it to leave its bounds.
