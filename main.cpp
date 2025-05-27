#include <iostream>
#include "BisectionSolver.h"
#include "NewtonSolver.h"

int main() {
    double a, b, eps;

    std::cout << "Write a: ";
    std::cin >> a;
    std::cout << "Write b: ";
    std::cin >> b;
    std::cout << "Write eps: ";
    std::cin >> eps;

    BisectionSolver bisection(a, b, eps);
    double rootBisection = bisection.solve();
    std::cout << "Root(Dyhotomia method): " << rootBisection << std::endl;
    std::cout << "f(Dyhotomia solution) = " << (rootBisection * rootBisection) / 4.0 + rootBisection - 1.2502 << "\n";

    double start;
    std::cout << "\nEnter the initial approximation for Newton's method: ";
    std::cin >> start;

    NewtonSolver newton(start, eps);
    double rootNewton = newton.solve();
    std::cout << "Root (Newton's method): " << rootNewton << std::endl;
    std::cout << "f(Dyhotomia solution) = " << (rootNewton * rootNewton) / 4.0 + rootNewton - 1.2502 << "\n";

    return 0;
}
