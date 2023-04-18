#ifndef _FACTORIAL_
#define _FACTORIAL_

#include <iostream>
#include <cstdio>

template<size_t N>
struct factorial{
    enum{
        val = (N * factorial <N-1>::val)
    };
};

template<>
struct factorial<0>{
    enum{
        val = 1
    };
};

#endif