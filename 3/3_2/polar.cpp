#include "dekart.h"
#include <stdlib.h>
#include <cmath>

const double pi2 = 3.14159265358979323846;

Polar::Polar(){
    r = 0;
    angle = 0;
}

Polar::Polar(float R, float ANGLE){
    r = abs(R);
    if (ANGLE >= 360) angle = remainder(ANGLE, 360);
    else angle = ANGLE;
    while (angle < 0){
        angle += 360;
    }
}

void Polar::info()
{
    std::cout << "( " << r << " ; " << angle << "\370" << " )" << "\n";
}

Polar::Polar(Dekart p){
    r = sqrt( p.x * p.x  + p.y * p.y);
    angle = atan2(p.y, p.x) / pi2 * 180;
    if (angle < 0) angle += 360;
}

Polar Polar::operator = (Dekart p){
    r = sqrt( p.x * p.x  + p.y * p.y);
    angle = atan2(p.y, p.x) / pi2 * 180;
    if (angle < 0) angle += 360;
}