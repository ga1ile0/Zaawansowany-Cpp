#include <iostream>

template<typename T, int N = 1000>
class Stack{
    public:
        Stack() = default;
};

template<typename T>
class Stack<T, 666> {
public:
    Stack() = default;
};

template<typename T, int N>
class Stack<T *, N> {
public:
    Stack() = default;
};

template<int N>
class Stack<double, N> {
public:
    Stack() = default;
};

template<int N>
class Stack<int *, N> {
public:
    Stack() = default;
};

template<>
class Stack<double, 666> {
public:
    Stack() = default;
};

template<>
class Stack<double *, 44> {
public:
    Stack() = default;
};

auto main() -> int{
    Stack<int, 666> stack1;
    std::cout << typeid(stack1).name() << std::endl;

    Stack<double *, 30> stack2;
    std::cout << typeid(stack2).name() << std::endl;

    Stack<double, 30> stack3;
    std::cout << typeid(stack3).name() << std::endl;

    Stack<int *, 10> stack4;
    std::cout << typeid(stack4).name() << std::endl;

    Stack<double, 666> stack5;
    std::cout << typeid(stack5).name() << std::endl;

    Stack<double *, 44> stack6;
    std::cout << typeid(stack6).name() << std::endl;
}