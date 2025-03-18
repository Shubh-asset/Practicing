#include <iostream>
using namespace std;

int main()
{
    // extern int a[3];
    // int arr[3];

    // same elements
    extern int array[];
    for (int i = 0; i < 5; i++)
    {
        array[i] = 1;
    }

    for (int i = 0; i < 5; i++)
    {
        cout << array[i] << " ";
    }

    return 0;
}