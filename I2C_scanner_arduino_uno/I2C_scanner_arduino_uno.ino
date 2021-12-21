// ##### ##### ##### ##### ##### ##### ##### ##### ##### ##### ##### ##### ##### ##### ##### #####
//
//  Testprogramm for scanning I2C devices in the network
//
//  - Baudrate: 9600
//
//  Author: Bernad Kariyattil Boban
//  Date:   21.12.2021
//
//  - Board: Arduino UNO
//  - Libraries: Wire.h ,I2CScanner.h
//
//
// ##### ##### ##### ##### ##### ##### ##### ##### ##### ##### ##### ##### ##### ##### ##### #####

#include "I2CScanner.h"
#include <Wire.h>

I2CScanner scanner;

//if you use other boards with not default SDA and SCL pins, define these 2 lines, else delete them  
#define SDA_PIN 4 
#define SCL_PIN 5

void setup() 
{ 
  //uncomment the next line if you use custom sda and scl pins for example with other boards (sda = 4, scl = 5)
  //Wire.begin(SDA_PIN, SCL_PIN);
  
  Serial.begin(9600);
  while (!Serial) {};

  scanner.Init();
}

void loop() 
{
  scanner.Scan();
  delay(5000);
}
