#include <iostream>

class Test{
    public:
        static void hello() {std::cout << "hello" << std::endl;}
        ~Test(){
            std::cout << "destruction" << std::endl;
        }
};

std::shared_ptr<Test> test1() {
    std::cout << "test1()" << std::endl;
    auto ptr = std::make_shared<Test>();
    ptr->hello();
    return ptr;
}

void test2(std::shared_ptr<Test> ptr) {
    std::cout << "test2()" << std::endl;
    ptr->hello();
}

int main() {

    test2(test1());
    std::cout << "after call" << std::endl;

    return 0;
}