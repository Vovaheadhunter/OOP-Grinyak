#include "animal.h"

Animal::Animal() {
    name = "NO NAME";
}

Animal::Animal(std::string name) {
    this->name = name;
}

void Animal::info() {
    std::cout << "This is Animal: " << name << "\n";
}