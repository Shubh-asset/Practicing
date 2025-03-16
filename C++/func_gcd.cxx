#include <iostream>
#include <math.h>
using namespace std;
// int a, b;
int input();
int gcd(int &, int &);

int main()
{
    int a, b;
    cout << "Enter the values of a and b: ";
    cin >> a >> b;
    cout << a << " " << b << endl;
    int result;
    result = gcd(a, b);
    cout << result;

    return 0;
}

int input()
{
    int a, b;
    cout << "Enter the values of a and b: ";
    cin >> a >> b;
    cout << a << " " << b << endl;
}

int gcd(int &a, int &b)
{
    //     if (a % 2 == 0 && b % 2 == 0)
    //     {
    //         // a = a / 2;
    //         // b = b / 2;
    //         remainder(a, 2);
    //         remainder(b, 2);
    //     }
    //     cout << a << " " << b << endl;
    // for (int i = 1, j = 1; i <= a && j <= b; i++, j++)
    // {

    //     if (a % i == 0 && b % j == 0)
    //     {
    //         cout << i << " " << j;
    //     }
    //     if (i == j)
    //     {
    //         return i || j;
    //     }
    // }

    // while (b != 0)
    // {
    //     int remainder = b;
    //     if (a < b)
    //     {
    //         b = a % b;
    //         a = remainder;
    //     }
    //     else if (b < a)
    //     {
    //         b = b % a;
    //         a = remainder;
    //     }
    // }
    while (b != 0)
    {
        int remainder = b;
        b = a % b;
        a = remainder;
    }
    return a;
}