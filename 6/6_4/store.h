#ifndef STORE_H
#define STORE_H

#include <iostream>

template <typename T, int MAX_SIZE>
class Store {
private:
    T data[MAX_SIZE];
    int size;
public:
    Store();
    void add(const T& x);
    void del();
    class iterator {
    private:
        int index;
        int indexprev;
        Store* pdata;
    public:
        iterator();
        iterator(int i, Store* p);
        Store::iterator operator++();
        Store::iterator operator--();
        bool operator !=(Store::iterator x);
        bool operator ==(Store::iterator x);
        T& operator*();
    };
    Store::iterator begin();
    Store::iterator end();
    Store::iterator last();
};

template <typename T, int MAX_SIZE>
Store<T, MAX_SIZE>::Store() { size = 0; }


template <typename T, int MAX_SIZE>
void Store<T, MAX_SIZE>::add(const T& x) {
    if (size < MAX_SIZE) {
        data[size] = x;
        size++;
    }
}


template <typename T, int MAX_SIZE>
void Store<T, MAX_SIZE>::del() {
    if (size > 0) { size--; }
}


template <typename T, int MAX_SIZE>
Store<T, MAX_SIZE>::iterator::iterator() {
    index = 0;
    pdata = nullptr;
    indexprev = 0;
}


template <typename T, int MAX_SIZE>
Store<T, MAX_SIZE>::iterator::iterator(int i, Store* p) {
    index = i;
    pdata = p;
    indexprev = i;
}


template <typename T, int MAX_SIZE>
typename Store<T, MAX_SIZE>::iterator Store<T, MAX_SIZE>::iterator::operator++() {
    while (index < pdata->size - 1) {
        if (pdata->data[index] > pdata->data[indexprev]) {
            indexprev = index;
            return *this;
        }
        index++;
    }
    index++;
    indexprev = index;
    return *this;
}



template <typename T, int MAX_SIZE>
typename Store<T, MAX_SIZE>::iterator Store<T, MAX_SIZE>::iterator::operator--() {
    while (index > 0) {
        if (pdata->data[index] > pdata->data[indexprev]) {
            indexprev = index;
            return *this;
        }
        index--;
    }
    indexprev = index;
    return *this;
}


template <typename T, int MAX_SIZE>
bool Store<T, MAX_SIZE>::iterator::operator==(typename Store<T, MAX_SIZE>::iterator x) {
    return (index == x.index && pdata == x.pdata);
}

template <typename T, int MAX_SIZE>
bool Store<T, MAX_SIZE>::iterator::operator!=(typename Store<T, MAX_SIZE>::iterator x) {
    return (index != x.index || pdata != x.pdata);
}

// Iterator Dereference
template <typename T, int MAX_SIZE>
T& Store<T, MAX_SIZE>::iterator::operator*() {
    if (pdata) return pdata->data[index];
    else throw 0;
}


template <typename T, int MAX_SIZE>
typename Store<T, MAX_SIZE>::iterator Store<T, MAX_SIZE>::begin() {
    return iterator(0, this);
}

template <typename T, int MAX_SIZE>
typename Store<T, MAX_SIZE>::iterator Store<T, MAX_SIZE>::end() {
    return iterator(size, this);
}


template <typename T, int MAX_SIZE>
typename Store<T, MAX_SIZE>::iterator Store<T, MAX_SIZE>::last() {
    return iterator(size-1, this);
}

#endif //STORE_H
