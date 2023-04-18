#include <iostream>

template<typename T, typename U>
T convert(U u){
    return static_cast<T>(u);
}

template<>
int convert<int, double>(double u){
    return static_cast<int>(u);
}

template<>
double convert<double, int>(int u){
    return static_cast<int>(u);
}

auto main() -> int{
    auto r1 = convert<int>(3.67);
    std::cout << r1 << std::endl;

    auto r2 = convert<double>(2);
    std::cout << r2 << std::endl;

}