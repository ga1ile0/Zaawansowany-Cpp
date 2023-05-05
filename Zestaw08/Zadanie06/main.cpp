#include <iostream>
#include "functors.h"

int main6() {
    First x;
    Second y;
    std::cout << integrate2d(x + y,1,5, 2, 4, 0.001) << std::endl;

    return 0;
}