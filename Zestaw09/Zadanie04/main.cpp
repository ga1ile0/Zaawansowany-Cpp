#include <iostream>

class Test{
    private:
        int num;
    public:
        explicit Test(int num) : num(num) {}
        static void hello() {std::cout << "hello" << std::endl;}
};

int main(){
   // to initialize object
    // template< class T, class... Args > unique_ptr<T> make_unique( Args&&... args );
    auto obj = std::make_unique<Test>(10);

    // to initialize table
    // template< class T > unique_ptr<T> make_unique( std::size_t size );
    auto p = std::make_unique<int[]>(5); 
}