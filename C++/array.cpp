#include <iostream>

using namespace std;

// int main()
// {
//     // extern int a[3];
//     // int arr[3];

//     // same elements
//     extern int array[];
//     for (int i = 0; i < 5; i++)
//     {
//         array[i] = 1;
//     }

//     for (int i = 0; i < 5; i++)
//     {
//         cout << array[i] << " ";
//     }

//     return 0;
// }

int main()
{
    int arrr[][3] = {{1, 2, 3},
                     {4, 5, 6}};
    int arr[3][4];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> arr[i][j];
        }
    }

    return 0;
}