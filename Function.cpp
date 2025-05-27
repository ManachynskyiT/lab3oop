#include "Function.h"

double Function::value(double x) {
    return (x * x) / 4.0 + x - 13.2502;
}

double Function::derivative(double x) {
    return x / 2.0 + 1;
}
