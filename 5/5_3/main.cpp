#include "templates.h"
#include "time.h"

int main(){
    Container<int> contInt;

    contInt.add(10);
    contInt.add(3);
    contInt.add(8);
    contInt.add(1);
    contInt.add(5);
    contInt.add(2);
    contInt.add(4);
    contInt.add(6);
    contInt.add(7);
    contInt.add(9);
    contInt.info();

    try { contInt.add(11); }
    catch (Full) {std::cout << "container is full." << "\n";}

    contInt.del();
    contInt.del();
    contInt.info();

    try { contInt.add(10); }
    catch (Alreadyin) {std::cout << "Value already in container. It won't be added." <<"\n";}


    Container<Time> contTime;

    contTime.add(Time(10,14,25));
    contTime.add(Time(3,4,5));
    contTime.add(Time(11,45,30));
    contTime.add(Time(20,21,54));
    contTime.info();

    contTime.del();
    contTime.del();
    contTime.del();
    contTime.del();

    try { contTime.del(); }
    catch (Empty) {std::cout << "Container is empty." <<"\n";}





    return 0;
}