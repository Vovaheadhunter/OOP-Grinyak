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