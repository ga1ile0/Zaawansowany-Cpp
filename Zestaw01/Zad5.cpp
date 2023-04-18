#include <iostream>

template<typename T = int, size_t N = 100>
class Stack{
    private: 
        T rep[N];
        size_t _top;
    public:
        Stack() : _top(0) {};

        void push(T x){
            rep[_top++] = x;
        }

        T pop(){
            return rep[--_top];
        }

        bool isEmpty(){
            return (_top == 0);
        }
    typedef T value_type;
};

template<typename S>
auto sum(S s){
    typename S::value_type total = 0;;
    while(!s.isEmpty()){
        total += s.pop();
    }
    return total;
}

auto main() -> int{
    Stack<int, 20> stack;
    for(int i = 0; i < 5; i++){
        stack.push(i);
    }
    auto result = sum(stack);
    std::cout << result << std::endl;
}