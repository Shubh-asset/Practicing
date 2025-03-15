#include <iostream>
using namespace std;

int factorial(int n)
{
    int m = 1;
    for (int i = 1; i <= n; i++)
    {
        m *= i;
    }
    return m;
    // cout << n << endl;
}

int main()
{
    int a = 4;
    cout << factorial(a) << endl;

    return 0;
}
