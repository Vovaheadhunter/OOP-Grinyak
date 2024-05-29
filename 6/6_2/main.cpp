#include "car.h"


int main(){
    std::stack<Car> originalStack;
    originalStack.push(Car("freight"));
    originalStack.push(Car("passanger"));
    originalStack.push(Car("passanger"));
    originalStack.push(Car("freight"));
    originalStack.push(Car("freight"));
    originalStack.push(Car("freight"));
    originalStack.push(Car("passanger"));
    originalStack.push(Car("freight"));

    std::stack<Car> passengerStack;
    std::stack<Car> freightStack;

    filterCars(originalStack, passengerStack, freightStack);

    std::cout << "passanger stack:" << "\n";
    while (!passengerStack.empty()) {
        passengerStack.top().info();
        passengerStack.pop();
    }


    std::cout << "Freight Stack:" << "\n";
    while(!freightStack.empty()) {
        freightStack.top().info();
        freightStack.pop();
    }






    return 0;
}