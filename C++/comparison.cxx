#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout << "Enter the value of a, b, c: " << endl;
    cin >> a >> b >> c;

    cout << "The values are : " << a << " " << b << " " << c << endl;

    if (a > b && a > c)
    {
        cout << "A is the greatest" << endl;
    }
    else if (b > c && b > a)
    {
        cout << "B is the greatest" << endl;
    }
    else if (c > a && c > b)
    {
        cout << "C is the greatest" << endl;
    }
    else
    {
        cout << "All are equal" << endl;
    }
}