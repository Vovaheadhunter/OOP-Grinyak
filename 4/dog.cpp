#include "dog.h"

Dog::Dog():Animal(){}

Dog::Dog(std::string name):Animal(name) {}

void Dog::info() {
    std::cout << "This is Dog: " << name << "\n";
}

void Dog::voice() {
    std::cout << "Woof" << "\n";
}