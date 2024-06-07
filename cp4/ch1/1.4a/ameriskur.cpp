#include <iostream>
#include <iomanip>

int main()
{
    long double n;
    std::cin >> n;
    std::cout << std::setprecision(10) << n * 0.09144;
    return 0;
}