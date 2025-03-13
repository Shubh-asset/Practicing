#include <iostream>
#include <cmath>
#include <string>
using namespace std;

//**BASICS**//

double square(double x)
{
    return x * x;
}

void print_square(double x)
{
    cout << "\nThe square of " << x << " is " << square(x);
}

double d = 2.25;
int i = 4;
void random_func()
{

    d = d + i;
    i = d * i;
}

//**Types, arithmetic and variables**//C++/book/intro/basic facilties
int main()
{
    // double m;
    // cout << "Enter the number for squaring: ";
    // cin >> m;
    // print_square(m);

    // cout << "\nRandom function: ";
    // random_func();
    // cout << "Printing \nd: " << d << " \ni: " << i;

    int i = 7.2;
    // int i1{7.2};
    // int i2 = {7.2};
    cout << "\n"
         << i << " ";

    // not initializing the type
    auto a = sqrt(4);
    cout << "\n"
         << a << "\n";

    return 0;
}