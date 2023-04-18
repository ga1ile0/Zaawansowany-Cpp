#include <iostream>
#include "color_fact.h"

auto main() -> int {
    ColorFactory factory1;
    ColorFactory<default_on_error<>> factory2;
    ColorFactory<default_on_error<1, 1, 1>> factory3;

    try{
        std::cout << "factory1" << std::endl;
        factory1.returnColor("red").print();
    }catch(...){
        std::cout << "exception caught.\n";
    }

    try {
        std::cout << "factory2" << std::endl;
        factory2.returnColor("red").print();
    } catch(...) {
        std::cout << "exception caught.\n";
    }

    try {
        std::cout << "factory3" << std::endl;
        factory3.returnColor("red").print();
    } catch(...) {
        std::cout << "exception caught.\n";
    }
}