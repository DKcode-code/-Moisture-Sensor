#include <Arduino.h>
#include "MoistureSensor.hpp"

MoistureSensor::MoistureSensor(int pin)
    : pin(pin)
{
}

int MoistureSensor::read()
{
    return analogRead(pin);
}