#include <iostream>
#include "functors.h"

int main() {

    Variable x;
    std::cout << integrate(x + 1.,0,2,0.001) << std::endl;

    return 0;
}