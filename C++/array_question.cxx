#include <iostream>
#include <array>

using namespace std;

int main()
{

    // int size;
    // cout << "Enter the grades you want to type in: " << endl;
    // cin >> size;

    // int *Sgrades = nullptr;
    // Sgrades = new int[size];

    // // int *n = new int[size];
    // int sum=0;

    // for (int i = 0; i < size; i++)
    // {
    //     cout << "Enter grades " << i + 1 << " ";
    //     cin >> Sgrades[i];
    // }
    // for (int i = 0; i < size; i++)
    // {
    //     cout << Sgrades[i] << " ";
    // }
    // cout << '\n'
    //      << "The sum of the array elements: " << endl;
    // for (int i = 0; i < size; i++)
    // {
    //     // n[i] = Sgrades[i] + Sgrades[i + 1];
    //     // sum += n[i];
    //     sum += Sgrades[i];
    // }
    // // cout << Sgrades[size];
    // cout << sum;

    // delete[] Sgrades;

    int size;
    cout << "Enter the number of elements of an array: " << endl;
    cin >> size;

    int *arr = new int[size];

    cout << "Enter the elements of array: " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "element " << i + 1 << " ";
        cin >> arr[i];
    }

    cout << "Output: " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    int sum = 0;
    cout << "The sum of elements are: " << endl;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    cout << sum;

    delete[] arr;

    return 0;
}