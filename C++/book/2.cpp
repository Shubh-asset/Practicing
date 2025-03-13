//**Constants**//
#include <iostream>
#include <cmath>
using namespace std;

constexpr double squar(double x)
{
    return x * x;
}

int main()
{
    const int i = 7;
    int var = 7;
    constexpr double max1 = squar(i);
    // constexpr double max2 = squar(var);
    const double max3 = 1.4 * squar(var);

    cout << max1 << endl;

    return 0;
}