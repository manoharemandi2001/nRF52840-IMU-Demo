#include "LSM6DS3.h"
#include "Wire.h"

LSM6DS3 myIMU(I2C_MODE, 0x6A);    //I2C device address 0x6A
 
void setup() {

    Serial.begin(9600);
    while (!Serial);

    //Call .begin() to configure the IMUs
    if (myIMU.begin() != 0) 
    {
        Serial.println("Device error");
    } 
    else 
    {
        Serial.println("Device OK!");
    }
}
 
void loop() {
    //Accelerometer
    Serial.print("\nAccelerometer:\n");
    Serial.print(" X1 = ");
    Serial.println(myIMU.readFloatAccelX(), 4);
    Serial.print(" Y1 = ");
    Serial.println(myIMU.readFloatAccelY(), 4);
    Serial.print(" Z1 = ");
    Serial.println(myIMU.readFloatAccelZ(), 4);
 
    //Gyroscope
    Serial.print("\nGyroscope:\n");
    Serial.print(" X1 = ");
    Serial.println(myIMU.readFloatGyroX(), 4);
    Serial.print(" Y1 = ");
    Serial.println(myIMU.readFloatGyroY(), 4);
    Serial.print(" Z1 = ");
    Serial.println(myIMU.readFloatGyroZ(), 4);
 
 
    delay(1000);
}