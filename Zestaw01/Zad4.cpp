#include <iostream>

template<template<int N> class C, int K>
void f(C<K>){
    std::cout << K << std::endl;
}

template<int N>
struct SomeClass {};

auto main() -> int{
    SomeClass<1> c1;
    SomeClass<2> c2;

    f(c1);
    f(c2); 
}