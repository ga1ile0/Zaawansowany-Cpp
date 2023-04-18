#include <iostream>
#include <string>

class Animal{
    public:
        virtual void makeSound() = 0;
};

class Dog : public Animal {
    public:
        void makeSound() override{
            std::cout << "Hau" << std::endl;
        }
};

class Cat : public Animal{
    public:
        void makeSound() override{
            std::cout << "Miau" << std::endl;
        }
};

template<typename T> 
void makeSounds(T arr[], size_t n){
    for(size_t i = 0; i < n; ++i){
        arr[i].makeSound();
    }
}


auto main() -> int{
    std::cout << "Dynamic polimorfizm: " << std::endl;

    Animal * animals[2];
    animals[0] = new Dog();
    animals[1] = new Cat();

    for(auto animal : animals){
        animal->makeSound();
    }

    std::cout << "Static polimorfizm: " << std::endl;

    Dog dogs[2];
    dogs[0] = Dog();
    dogs[1] = Dog();

    Cat cats[2];
    cats[0] = Cat();
    cats[1] = Cat();

    makeSounds(dogs, 2);
    makeSounds(cats, 2);





}