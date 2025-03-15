#include <iostream>
using namespace std;

int input();
int gcd(int &, int &);

int main()
{
    input();

    return 0;
}

int input()
{

    int a, b;
    cin >> a >> b;
    cout << a << " " << b << endl;
}
int gcd(int &a, int &b)
{
    if (a == 0 || b == 0)
    {
        cout << "Enter the valid number!" << endl;
    }
    else
    {
        if (a % 2 == 0 || b % 2 == 0)
        {
            a /= 2;
            b /= 2;
        }
    }
}