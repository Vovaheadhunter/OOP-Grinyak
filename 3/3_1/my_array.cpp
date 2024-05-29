#include "my_array.h"
#include <iostream>

MyArray::MyArray()
{
    size = 0;
}

void MyArray::info()
{
    for(int i=0; i<size; i++)
    {
        std::cout << data[i] << ", ";
    }
    std::cout << "\n";
}

void MyArray::operator+(float x)
{
    data[size] = x;
    size++;
}

void MyArray::operator--() // postfix
{
    size--;
}

void MyArray::operator--(int) // prefix
{
    --size;
}
