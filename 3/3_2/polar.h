#ifndef POLAR_H
#define POLAR_H

#include<iostream>
#include "dekart.h"

class Dekart;

class Polar
{
public:
    float r, angle;
    Polar();
    Polar(float R, float ANGLE);
    Polar(Dekart p);
    void info();
    Polar operator = (Dekart p);
};


#endif // POLAR_H
