
#include "MoistureSensor.hpp"

MoistureSensor moisture(A0);

void setup()
{
  // Should we use seperate files for every thing or would you like one centeral file?
  Serial.begin(9600);
  Serial.println(moisture.read());
}

void loop() {}
