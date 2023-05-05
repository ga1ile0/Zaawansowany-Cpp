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
}

template<typename F>
double integrate2d(F f, double minX, double maxX, double minY, double maxY, double ds) {
    double integral = .0;
    for (double y = minY; y < maxY; y += ds) {
        integral += integrate(f, minX, maxX, ds);
    }
    return integral * ds;
}

class First {
public:
    double operator()(double x) {
        return x;
    }

    double operator()(double x, double) {
        return x;
    }
};

class Second {
public:
    double operator()(double y) {
        return y;
    }

    double operator()(double, double y) {
        return y;
    }
};

class Constant {
    double _c;
public:
    explicit Constant(double c) : _c(c) {};

    double operator()(double) const { return _c; }

    double operator()(double, double) const { return _c; }
};

/// addition

template<typename LHS, typename RHS>
class AddExpr {
    LHS _lhs;
    RHS _rhs;
public:
    AddExpr(const LHS &l, const RHS &r) : _lhs(l), _rhs(r) {};

    double operator()(double x) {
        return _lhs(x) + _rhs(x);
    }

    double operator()(double x, double y) {
        return _lhs(x, y) + _rhs(x, y);
    }
};

template<typename LHS, typename RHS>
AddExpr<LHS, RHS> operator+(const LHS &l,
                            const RHS &r) {
    return AddExpr<LHS, RHS>(l, r);
}


template<typename LHS>
AddExpr<LHS, Constant> operator+(const LHS &l,
                                 double r) {
    return AddExpr<LHS, Constant>(l, Constant(r));
}

template<typename RHS>
AddExpr<Constant, RHS> operator+(double l,
                                 const RHS &r) {
    return AddExpr<Constant, RHS>(Constant(l), r);
}

#endif
