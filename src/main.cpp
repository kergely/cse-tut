#include <iostream>
#include "func.hpp"

int main() {
    double x = 5;
    std::vector<double> a{1.0,0.0,2.0};
    std::cout << Polinom(x,a) << std::endl;
    return 0;
}