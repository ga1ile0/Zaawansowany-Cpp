#ifndef _SIN_
#define _SIN_

#include <cstdio>
#include "../Zadanie01/factorial.h"
#include "../Zadanie03/pow.h"
#include "../Zadanie05_06/inner.h"

template<int N>
double sin(double x){
    return sin<N-1>(x) + (N % 2 ? 1 : -1) * pow1<(2 * N - 1)>(x) / factorial<2 * N - 1>::val;
}

template<>
double sin<0>(double x){
    return 0;
}




#endif