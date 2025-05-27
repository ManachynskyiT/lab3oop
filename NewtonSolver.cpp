#include <iostream>
#include <cmath>
#include "NewtonSolver.h"

NewtonSolver::NewtonSolver(double x0, double eps, int maxIterations)
    : x0(x0), eps(eps), maxIterations(maxIterations) {}

double NewtonSolver::solve() {
    double x = x0;
    for (int i = 0; i < maxIterations; ++i) {
        double fx = func.value(x);
        double dfx = func.derivative(x);

        if (fabs(dfx) < eps) {
            std::cout << "The derivative is close to zero. Newton's method cannot be continued..\n";
            return NAN;
        }

        double xNext = x - fx / dfx;

        if (fabs(xNext - x) < eps) {
            return xNext;
        }

        x = xNext;
    }

    std::cout << "Number of iterations exceeded.\n";
    return NAN;
}
