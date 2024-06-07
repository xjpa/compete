#include <iostream>

int main()
{
    int p;
    std::cin >> p;
    double x1 = 100.0 / p;
    double x2 = 100.0 / (100 - p);
    std::cout << x1 << std::endl;
    std::cout << x2 << std::endl;
}