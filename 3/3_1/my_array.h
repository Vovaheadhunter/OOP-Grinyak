#ifndef MYARRAY_H
#define MYARRAY_H

const int MAX = 10;

class MyArray 
{
    public:
    float data[MAX];
    int size;
    MyArray();
    void operator -- ();
    void operator -- (int);
    void operator + (float x);
    void info();
};

#endif
