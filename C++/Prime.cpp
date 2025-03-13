#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    // if (n % 2 == 0)
    // {
    //     cout << "Even number";
    //     cout << endl;
    // }
    // else
    // {
    //     cout << "Odd number";
    // }
    bool isprime = true;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            isprime = false;
            break;
        }
    }
    if (isprime == true)
    {
        cout << "Prime number";
    }
    else
    {
        cout << "not a prime number";
    }

    return 0;
}