#include<iostream>
#include "my_array.h"

using namespace std;

int main()
{
    MyArray arr1;
    arr1 + 3;
    arr1 + 4;
    arr1 + 5;
    arr1.info();
    arr1--;
    --arr1;
    arr1.info();
    return 0;
}
