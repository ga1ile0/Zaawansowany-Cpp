#include <iostream>
#include <cstring>

template<typename T>
struct sum_traits;

template<>
struct sum_traits<char> {
    [[maybe_unused]] typedef int sum_type;
};
template<>
struct sum_traits<int> {
    [[maybe_unused]] typedef long int sum_type;
};
template<>
struct sum_traits<float> {
    [[maybe_unused]] typedef float sum_type;
};
template<>
struct sum_traits<double> {
    [[maybe_unused]] typedef double sum_type;
};

template<typename T>
typename sum_traits<T>::sum_type sum(T *beg, T *end) {
    typedef typename sum_traits<T>::sum_type sum_type;
    sum_type total = sum_type();
    while (beg != end) {
        total += *beg;
        beg++;
    }
    return total;
}

int main1() {

    /// char
    char name[] = "Test123";
    auto length = strlen(name);
    std::cout << sum(name, &name[length]) << std::endl;

    /// int
    int numbers[] = {1, 2, 3, 4};
    length = 4;
    std::cout << sum(numbers, &numbers[length]) << std::endl;

    /// double
    double numbers2[] = {1.1, 2.2, 3.3, 4.5};
    length = 4;
    std::cout << sum(numbers2, &numbers2[length]) << std::endl;

    return 0;
}