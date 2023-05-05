#include <iostream>
#include "functors.h"

int main() {

    Variable x;
    std::cout << integrate(x,0,1,0.001) << std::endl;
    std::cout << integrate(Constant(1.0),0,1,0.001) << std::endl;

    return 0;
}