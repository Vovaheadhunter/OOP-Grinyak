// Описать класс «Вагон». Предусмотреть в нём элемент данных, хранящий информацию
// о типе вагона (должны быть вагоны двух типов: грузовые и пассажирские). Написать
// программу для моделирования работы сортировочного тупика: в тупик загоняются вагоны
// в произвольном порядке, а потом распределяются оттуда по двум направлениям, в каждом
// из которых оказываются вагоны одного типа. Использовать для представления данных
// шаблонный класс stack.


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