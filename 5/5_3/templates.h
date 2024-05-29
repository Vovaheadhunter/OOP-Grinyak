#ifndef TEMPlATES_H
#define TEMPlATES_H

#include<iostream>

const int MAXSIZE = 10;

class Full{};
class Empty{};
class Alreadyin{};

template <class T>
class Container {
private:
    T data[MAXSIZE];
    int size;
public:
    Container();
    void add(T x);
    void del();
    void info();
};

template <class T>
Container<T>::Container() {
    size = 0;
}


template <class T>
void Container<T>::add(T x) {
    for (int i = 0; i < size; i++) {
        if (data[i] == x) {
            throw Alreadyin();}
    }
    if (size < MAXSIZE) {
        data[size] = x;
        size++;
    } else {
        throw Full();
    }
}


template <class T>
void Container<T>::del() {
    if (size > 0) size--;
    else throw Empty();
}

template <class T>
void Container<T>::info() {
    for (int i = 0; i < size - 1; i++) {
        std::cout << data[i] << ", ";
    }
    if (size > 0) {
        std::cout << data[size - 1];
    }
    std::cout << "\n";
}



#endif //TEMPlATES_H
