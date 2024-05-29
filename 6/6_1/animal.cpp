#include "animal.h"


Animal::Animal() {
    name = "No name";
    type = "No type";
}


Animal::Animal(std::string name, std::string type) {
    this->name = name;
    this->type = type;
}


void Animal::info() const {
    std::cout << type << " named " << name << "\n";
}


bool Animal::operator < (Animal b) const {
    if (type != b.type) return type < b.type;
    else return name < b.name;
}


std::set<Animal> getAnimalOfType(std::deque<Animal> dequeOfAnimal, std::string type) {
    std::set<Animal> animalset;

    for (std::deque<Animal>::iterator it = dequeOfAnimal.begin(); it != dequeOfAnimal.end(); it++){
        if(it->type == type) animalset.insert(*it);
    }
    return animalset;
}