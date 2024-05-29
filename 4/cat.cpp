#include "cat.h"

Cat::Cat():Animal(){}

Cat::Cat(std::string name):Animal(name) {}

void Cat::info() {
    std::cout << "This is Cat: " << name << "\n";
}

void Cat::voice() {
    std::cout << "Meow" << "\n";
}