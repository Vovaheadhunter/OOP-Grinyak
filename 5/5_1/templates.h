#ifndef TEMPLATES_H
#define TEMPLATES_H

#include<iostream>
#include <array>

template <class T, size_t N>
int biggerThan(const T (&arr)[N], const T& n){
    int count = 0;
    for(size_t i = 0; i < N ; i++){
        if (arr[i] > n) count++;
    }
    return count;
}


template <class T, size_t N>
int smallerThan(const T (&arr)[N], const T& n){
    int count = 0;
    for(size_t i = 0; i < N ; i++){
        if (n > arr[i]) count++;
    }
    return count;
}


#endif //TEMPLATES_H
