#include "dekart.h"
#include "polar.h"

int main()
{
Polar F;
Dekart G;

Polar A(12.5 , 180); 
std::cout << "A in Polar: ";
A.info();
Dekart D(A);
std::cout << "A in Cartesian: ";
D.info();

std::cout << "\n";

Dekart B(12, 12);
std::cout << "B in Cartesian: ";
B.info();
Polar C(B);
std::cout << "B in Polar: ";
C.info();

G = A;
G.info();

F = B;
F.info();



return 0;
}

