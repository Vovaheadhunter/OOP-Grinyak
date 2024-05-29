#include "compnumber.h"

using namespace std;

int main() {

    Compnumber n1 = {10, 0};
    Compnumber n2 = {0, 10};
    Compnumber n3 = {10, -5};
    Compnumber n4 = {5, 3};
    cout << "complex number: " << "\n";
    infoNumber(n3);
    cout << "sum of complex numbers: " << "\n";
    infoNumber(sum(n3, n4));
    cout << "subtraction of complex number: " << "\n";
    infoNumber(subtract(n3, n4));

    cout << "type of n1: ";
    cout << Numbertype(n1) << "\n";

    cout << "type of n2: ";
    cout << Numbertype(n2) << "\n";

    cout << "type of n3: ";
    cout << Numbertype(n3)<< "\n";
}