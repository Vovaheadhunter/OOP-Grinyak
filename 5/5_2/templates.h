#ifndef TEMPlATES_H
#define TEMPlATES_H

#include<iostream>

const int MAXSIZE = 100;

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
            std::cout << "Value " << x << " already in container. It won't be added." << "\n";
            return;
        }
    }

    if (size < MAXSIZE) {
        data[size] = x;
        size++;
    } else {
        std::cout << "Error: max size reached" << "\n";
    }
}


template <class T>
void Container<T>::del() {
    if (size > 0) size--;
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
