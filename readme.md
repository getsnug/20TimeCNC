# CNC 20 Time Project
## Requirements
* Arduino Uno
* Built CNC
* Adafruit motor shield V2
* Arduino IDE
* Computer with a USB port
## Installing Arduino AF Libraries:
1. Open the Arduino IDE
2. From the toolbar select Toos>Manage Libraries(Figure 1)
3. Type Adafruit Motor Shield V2 into the search bar
4. Click install
## Files:
* This project only has one file with code, which controls all of the important CNC functions
## Running the Code:
1. If you have not set up the arduino before:  
    a. Plug it into your computer with the USB connector  
    b. Open the Arduino IDE with the main ino file open  
    c. Click the Upload button in the upper right hand corner  
2. In the Arduino IDE go to the tool bar and select Tools>Serial Monitor (Figure 1)
3. Make sure that the bottom right hand corner of the Serial Monitor is set to 9600 BAUD, or whatever you set it to be in the Arduino code.
4. Enter the coordinates you want the CNC to trace in the serial input bar in the format x,y. Coordinates for the CNC are now Absolute so make sure not to ask it to leave its bounds.
## Trouble Shooting:
* If you run into an issue connecting to the Arduino make sure that you have the proper device selected under the Tools menu.(See figure 1)
* Most issues regarding syntax errors may stem from not having the correct libraries installed.
* If there are no errors thrown by the Arduino, and the steppers won't move, check your wiring and then your power supply.

Figure 1:
![trouble loading...](https://github.com/getsnug/20TimeCNC/blob/master/Screenshot%20(2)_LI.jpg "Figure 1:")
