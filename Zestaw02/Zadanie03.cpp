#include <iostream>
#include <list>

template<class InputIterator, class T>
T accumulate(InputIterator first, InputIterator last, T init){
    T total = init;
    for(; first != last; ++first){
        total += *first;
    }
    return total;
}

auto main() -> int{
    std::list<int> list;

    for(int i = 10; i < 50 ; i += 10){
        list.push_back(i);
    }
    std::cout << accumulate(list.begin(), list.end(), 0) << std::endl;
}