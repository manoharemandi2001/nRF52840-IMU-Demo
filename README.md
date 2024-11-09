
**XIAO-IMU-Reader**

**Overview**
This project demonstrates how to interface with the onboard IMU sensor (LSM6DS3) of the Seeed Studio XIAO nRF52840 (Sense) board to read real-time accelerometer and gyroscope data using the Arduino IDE.

**Features**
Reads and displays accelerometer data (X, Y, Z axes).
Reads and displays gyroscope data (X, Y, Z axes).
Easy-to-understand code with initialization checks for error handling.

**Hardware Requirements**
Seeed Studio XIAO nRF52840 (Sense) board.
USB cable for programming and data transfer.

**Software Requirements**
Arduino IDE (version X.X.X or newer).
LSM6DS3 library for IMU sensor interfacing.
Wire library for I2C communication (included with Arduino).

**Code Explanation**
The main script reads accelerometer and gyroscope data using the LSM6DS3 library functions:

**Accelerometer:** readFloatAccelX(), readFloatAccelY(), readFloatAccelZ().
**Gyroscope:** readFloatGyroX(), readFloatGyroY(), readFloatGyroZ().
**The output is printed to the Serial Monitor for easy observation.**

**Usage**
Upload the code to the XIAO nRF52840 (Sense) board.
Open the Serial Monitor (set the baud rate to 9600).
View real-time data for both accelerometer and gyroscope readings.

**Demo**
Check out the attached video to see the project in action! 🎥

**Takeaways**
Through this project, I learned:
The practical aspects of interfacing with an IMU sensor.
Real-time sensor data handling and processing in Arduino.
Enhancing embedded programming skills with C/C++.

**Acknowledgements**
Special thanks to the developers of the LSM6DS3 library and the Arduino community for their helpful resources.
