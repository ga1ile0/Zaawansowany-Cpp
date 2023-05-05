#include <iostream>
#include "functors.h"

int main() {

    Variable x;
    std::cout << integrate(1./sin(x+ 1.),0,1,0.001) << std::endl;

    return 0;
}
