#include <iostream>

template<size_t N, typename T>
T dot_product(T * a, T * b){
    T result = 0.0;
    for(size_t i = 0; i < N; ++i){
        result += a[i] * b[i];
    }
    return result;
}

auto main() -> int{
    int a[] = {0, 2, 4, 6};
    int b[] = {1, 3, 5, 7};

    std::cout << dot_product<4>(a, b) << std::endl;
}