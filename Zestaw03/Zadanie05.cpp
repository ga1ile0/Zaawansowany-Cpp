#include <iostream>
#include <set>

template<typename Iter>
void func(Iter a, Iter b){
    while(a != b){
        std::cout << *a << " ";
        ++a;
    }
}

auto main() -> int{
    std::set<int> set;
    set.insert(17);
    set.insert(21);
    set.insert(24);

    func(set.begin(), set.end());
}