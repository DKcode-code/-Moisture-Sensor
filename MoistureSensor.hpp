#pragma once

class MoistureSensor
{
public:
    MoistureSensor(int pin);
    int read();

private:
    int pin;
};