// Определить шаблоны функций, возвращающих количество элементов массива, которые
// меньше и больше заданного (т.е. два шаблона функций). Продемонстрировать работу
// шаблона на массивах объектов как встроенного типа, так и собственного класса. Для этого
// создать собственный класс и перегрузить в нём нужные функции-операции.


#include <iostream>
#include "time.h"
#include "templates.h"



int main(){
    double arrDouble[] = {10, 5.1, -3, 3, 15};
    std::cout << biggerThan(arrDouble, 5.0) << "\n";
    std::cout << smallerThan(arrDouble, 5.0) << "\n";


    Time arrTime[] = {
            Time(),
            Time(12,23,45),
            Time(23,45,13),
            Time(3,12,26),
            Time(6, 5, 3)
    };

    Time t(6,0,0);

    std::cout << biggerThan(arrTime, t) << "\n";
    std::cout << smallerThan(arrTime, t) << "\n";

    return 0;
}