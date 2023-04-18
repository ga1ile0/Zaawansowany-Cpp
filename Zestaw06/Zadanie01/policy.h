#ifndef _policy_
#define _policy_
#include <cstdio>
#include <iostream>
#include "color.h"

template<int R = 0, int G = 0, int B = 0>
struct default_on_error{
    static Color perform(){
        return Color(R, G, B);
    }
};

struct std_exception_on_error{
    static Color perform(){
        throw std::range_error("Color does not exist");
    }
};
#endif