#ifndef COMPNUMBER_H
#define COMPNUMBER_H

#include<iostream>
#include"numbertype.h"

struct Compnumber
{
    int re;
    int im; 
};

void infoNumber(Compnumber n) ;
Compnumber sum(Compnumber n1, Compnumber n2) ;
Compnumber subtract(Compnumber n1, Compnumber n2) ;
Type Numbertype(Compnumber n) ;

#endif 