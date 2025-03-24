#include <iostream>

using namespace std;

int main()
{
    int a, b;
    int *swap;

    cout << "Enter the values of a and b: " << endl;
    cin >> a >> b;

    cout << "values of a and is: " << endl;

    cout << "A: " << a;
    cout << '\n'
         << "B: " << b;

    cout << '\n'
         << "After swapping: " << endl;

    // *swap = a;
    // a = b;
    // *swap = b;

    // a = b;
    // *swap = a;
    // b = a;

    *swap = a;
    a = b;
    b = *swap;

    cout << a << " " << b;

    return 0;
}
