#ifndef _functors_
#define _functors_

#include<cmath>

template<typename F>
double integrate(F f, double min, double max, double ds) {
    double integral = .0;
    for (double x = min; x < max; x += ds) {
        integral += f(x);
    }
    return integral * ds;
};


class Variable {
public:
    double operator()(double x) {
        return x;
    }
};


class Constant {
    double _c;
public:
    explicit Constant(double c) : _c(c) {};

    double operator()(double x) const { return _c; }
};

#endif