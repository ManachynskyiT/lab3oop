#include <iostream>
#include <cmath>
#include "BisectionSolver.h"

BisectionSolver::BisectionSolver(double a, double b, double eps)
    : a(a), b(b), eps(eps) {}

double BisectionSolver::solve() {
    if (func.value(a) * func.value(b) >= 0) {
        std::cout << "There is no solution or several solutions on the segment [" << a << ", " << b << "].\n";
        return NAN;
    }

    double c;
    while ((b - a) > eps) {
        c = (a + b) / 2.0;

        if (fabs(func.value(c)) < eps) {
            break;
        }

        if (func.value(a) * func.value(c) < 0) {
            b = c;
        } else {
            a = c;
        }
    }
    double halfTab;

    halfTab = c;
    std::cout << "Dyhotomia solution: x = " << halfTab << "\n";
    std::cout << "f(Dyhotomia solution) = " << (halfTab * halfTab) / 4.0 + halfTab - 1.2502 << "\n";

    return halfTab;
}
