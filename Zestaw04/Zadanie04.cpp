#include<iostream>
#include <vector>
#include <cstring>

template<typename T>
struct sum_traits;

template<>
struct sum_traits<char> {
    typedef int sum_type;

    [[maybe_unused]] static sum_type zero() { return 0; }
};

template<>
struct sum_traits<int> {
    typedef int sum_type;

    [[maybe_unused]] static sum_type zero() { return 0; }
};

template<>
struct sum_traits<float> {
    typedef double sum_type;

    [[maybe_unused]] static sum_type zero() { return 0.0; }
};

template<>
struct sum_traits<double> {
    typedef double sum_type;

    [[maybe_unused]] static sum_type zero() { return 0.0; }
};

template<typename Traits, typename T>
typename Traits::sum_type sum(T *beg, T *end) {
    typedef typename Traits::sum_type sum_type;
    sum_type total = sum_type();
    while (beg != end) {
        total += *beg;
        beg++;
    }
    return total;
};

template<typename T>
typename sum_traits<T>::sum_type sum(T *beg, T *end) {
    return sum<sum_traits<T>, T>(beg, end);
}

struct char_sum {
    [[maybe_unused]] typedef char sum_type;
};

template<typename IT>
typename sum_traits<typename std::iterator_traits<IT>::value_type>::sum_type sum(IT beg, IT *end) {

    typedef typename std::iterator_traits<IT>::value_type value_type;
    typedef typename sum_traits<value_type>::sum_type sum_type;

    sum_type total = sum_traits<value_type>::zero();
    while (beg != end) {
        total += *beg;
        beg++;
    }

    return total;
}

int main4() {

    /// char
    char name[] = "Test123";
    auto length = strlen(name);
    std::cout << sum(name, &name[length]) << std::endl;

    /// int
    int numbers[] = {1, 2, 3, 4};
    length = 4;
    std::cout << sum(numbers, &numbers[length]) << std::endl;

    /// float
    float numbers2[] = {1.1, 2.2, 3.3, 4.5};
    length = 4;
    std::cout << sum(numbers2, &numbers2[length]) << std::endl;

    /// double
    double numbers3[] = {1.1, 2.2, 3.3, 4.5};
    length = 4;
    std::cout << sum(numbers3, &numbers3[length]) << std::endl;

    return 0;
}