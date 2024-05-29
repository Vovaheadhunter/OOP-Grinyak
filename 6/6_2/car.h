#ifndef CAR_H
#define CAR_H

#include "stack"
#include <iostream>

class Car{
public:
    // так как вагоны должны быть двух типов, можно использовать bool для хранения типа вагона, где 1 - пассажирский 0 - грузовой
    bool type;
    Car();
    Car(std::string type);
    void info();
};

void filterCars(std::stack<Car>& originalStack, std::stack<Car>& passengerStack, std::stack<Car>& freightStack);

#endif //CAR_H


