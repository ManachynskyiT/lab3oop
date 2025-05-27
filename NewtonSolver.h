#pragma once
#include "Function.h"

class NewtonSolver {
private:
    Function func;
    double x0, eps;
    int maxIterations;

public:
    NewtonSolver(double x0, double eps, int maxIterations = 1000);
    double solve();
};
