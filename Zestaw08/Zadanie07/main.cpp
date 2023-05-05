#include <iostream>
#include "vector.h"

int main7() {
    Vector v1(5, 1.);
    Vector v2(5, 2.);

    auto res = v1 * 1.2 + v1 * v2 + v2 * 0.5;
    res.print();

    return 0;
}
