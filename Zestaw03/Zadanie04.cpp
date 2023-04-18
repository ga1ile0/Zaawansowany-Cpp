#include <iostream>
#include <vector>

template<typename T, int N = 100, typename R = T *>
class Stack;

template<typename T, int N>
class Stack<T, N, T *> {
    T _rep[N];
    unsigned int _top;
    public:
        Stack() : _top(0) {}

        void push(T x){
            _rep[_top++] = x;
        }

        T pop(){
            return _rep[--_top];
        }
};

template<typename T, int N, typename E>
class Stack{
    E _rep;
    public:
        Stack() = default;

        void push(T x){
            _rep.push_back(x);
        }

        T pop(){
            T top = _rep.back();
            _rep.pop_back();
            return top;
        }
};

auto main() -> int{
    Stack<int, 100, int *> stack1;
    Stack<int, 100> s_default;
    Stack<int, 0, std::vector<int>> s_container;

    s_container.push(10);
    std::cout << s_container.pop();
    
}