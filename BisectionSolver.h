#pragma once
#include "Function.h"

class BisectionSolver {
private:
    Function func;
    double a, b, eps;

public:
    BisectionSolver(double a, double b, double eps);
    double solve();
    
};
