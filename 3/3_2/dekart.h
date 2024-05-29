#ifndef DEKART_H
#define DEKART_H

#include<iostream>
#include "polar.h"

class Polar;

class Dekart
{
public:
    float x , y;
    Dekart();
    Dekart(float ox, float oy);
    Dekart(Polar p);
    void info();
    void perevod(Polar p);
    Dekart operator = (Polar p);
};

#endif // DEKART_H
