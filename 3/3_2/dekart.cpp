#include "polar.h"
#include <cmath>

const double pi = 3.14159265358979323846;

Dekart::Dekart(){
    x = 0;
    y = 0;
}

Dekart::Dekart(float ox, float oy){
    x = ox;
    y = oy;
}

void Dekart::info(){
    std::cout << "( " << x << " ; " << y << " )" << "\n";
}

Dekart::Dekart(Polar p){
    x = p.r * cos(p.angle / 180 * pi );
    y = p.r * round(sin(p.angle / 180 * pi ));
}

Dekart Dekart::operator = (Polar p){
    x = p.r * cos(p.angle / 180 * pi );
    y = p.r * round(sin(p.angle / 180 * pi ));
}