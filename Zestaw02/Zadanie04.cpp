#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

template<typename T> 
class SequenceGen {
    private:
        T _start; 
        T _step;
    public:
        SequenceGen(T start = T(),T step = 1 ) :  _start(start), _step(step){};

        T operator()(){
            T tmp=_start; 
            _start+=_step; 
            return tmp;
        }
};

int main() {
    const size_t n = 20 ;
    std::vector<int> v(n);
    generate_n(v.begin(),n,SequenceGen<int>(1,2));
    
    // Find an element bigger than 4 using std::bind and find_if
    auto it = find_if(v.begin(), v.end(), std::bind(std::greater<int>(), std::placeholders::_1, 4));
    
    if (it != v.end()) {
        std::cout << "Found an element bigger than 4: " << *it << std::endl;
    } else {
        std::cout << "No element bigger than 4 was found." << std::endl;
    }
    
    return 0;
}
