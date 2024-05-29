#include "cow.h"

Cow::Cow():Animal(){}

Cow::Cow(std::string name):Animal(name) {}

void Cow::info() {
    std::cout << "This is cow: " << name << "\n";
}

void Cow::voice() {
    std::cout << "Moo" << "\n";
}