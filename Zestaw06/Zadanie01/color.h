#ifndef COLOR_H
#define COLOR_H
#include <iostream>

class Color{
    private:
        int r;
        int b;
        int g;
    public:
        Color(){
            this->r = 0;
            this->g = 0;
            this->b = 0;
        }
        Color(int r, int g, int b){
            this->r = r;
            this->g = g;
            this->b = b;
        }
        void print() const {
            std::cout << this->r << " " << this->g << " " << this->b << std::endl;
        }
};
#endif