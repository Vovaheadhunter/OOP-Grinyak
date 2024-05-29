#include "compnumber.h"

void infoNumber(Compnumber n) {
    if (n.im == 0) {
        std::cout << n.re;
    } else if (n.im > 0) {
        std::cout << n.re << " + " << n.im << "i" << "\n";
    } else {
        std::cout << n.re << " - " << -n.im << "i" << "\n";
    }
}

Compnumber sum(Compnumber n1, Compnumber n2) {
    Compnumber result = {n1.re + n2.re, n1.im + n2.im};
    return result;
}

Compnumber subtract(Compnumber n1, Compnumber n2) {
    Compnumber result = {n1.re - n2.re, n1.im - n2.im};
    return result;
}

Type Numbertype(Compnumber n) {
    Type result;
    if (n.re != 0 && n.im != 0) {
        result = COMPLEX;
    } else if (n.re == 0 && n.im != 0) {
        result = IMAGINARY;
    } else {
        result = REAL;
    }
    
    return result;
}