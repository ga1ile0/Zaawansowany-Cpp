#include <iostream>

template<typename T, typename U>
T convert(U x){
    return (T) x; //można dynamic_cast i do tego catch
}

auto main() ->int{
    std::cout << convert<char>(100) << std::endl;
    std::cout << convert<int>('d') << std::endl;
    
}