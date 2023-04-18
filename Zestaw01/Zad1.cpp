#include <iostream>

template<typename T>
T maksimum(T a, T b){
    return (a < b) ? b : a;
}

int main(){
    std::cout << maksimum<int>(3, 3) << std::endl;
    std::cout << maksimum<float>(21.45, 21.46) << std::endl;
    std::cout << maksimum<std::string>("Długie zdanie", "Inne długie zdanie") << std::endl;
}