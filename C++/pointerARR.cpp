#include <iostream>
using namespace std;

int main()
{
    int v[5] = {1, 2, 3, 4, 5};
    int *p = &v[5];
    // int x = *p;
    cout << "The characters are: " << p[2];
    return 0;
}