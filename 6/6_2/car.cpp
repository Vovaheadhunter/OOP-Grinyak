#include "car.h"

class unknowntype{};


Car::Car() {type = false;}


Car::Car(std::string type) {
    if (type == "freight") this->type = false;
    else if (type == "passanger") this->type = true;
    else throw unknowntype();
}


void Car::info() {
    if (type) std::cout << "passanger" << "\n";
    else std::cout << "freight" << "\n";
}


void filterCars(std::stack<Car>& originalStack, std::stack<Car>& passengerStack, std::stack<Car>& freightStack) {
    while (!originalStack.empty()) {
        if (originalStack.top().type) passengerStack.push(originalStack.top());
        else freightStack.push(originalStack.top());
        originalStack.pop();
    }
}