#include "animal.h"
#include "dog.h"
#include "cat.h"
#include "cow.h"

int main(){
Animal *a1;
Cow c1("Buryonka");
Cat k1("Yasha");
Dog d1("Hamlet");

c1.info();
a1 = &c1;
a1 -> voice();

std::cout << "\n";

k1.info();
a1 = &k1;
a1 -> voice();

std::cout << "\n";

d1.info();
a1 = &d1;
a1 -> voice();


return 0;
}
