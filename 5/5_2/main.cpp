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
    contInt.add(7);
    contInt.info();

    contInt.del();
    contInt.del();
    contInt.info();

    contInt.add(10);
    contInt.info();


    Container<Time> contTime;

    contTime.add(Time(10,14,25));
    contTime.add(Time(3,4,5));
    contTime.add(Time(11,45,30));
    contTime.add(Time(20,21,54));
    contTime.info();

    contTime.add(Time(20,21,54));
    contTime.info();



    return 0;
}