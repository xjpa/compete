#include <iostream>
using namespace std;

int main()
{
    int n;
    int reversedNum = 0;
    cin >> n;
    while (n > 0)
    {
        int lastDigit = n % 10;
        reversedNum = (reversedNum * 10) + lastDigit;
        n = n / 10;
    }
    cout << reversedNum;
}