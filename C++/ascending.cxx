#include <iostream>
using namespace std;

int i, j, temp;
int n = 5;
int arr[n];

int rearrange()
{
    for (int i = 0; i <= arr[n]; i++)
    {
        for (int j = 0; j <= arr[n]; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main()
{

    cout << "Enter the values of array: " << endl;
    for (i = 0; i < arr[n]; i++)
    {
        cin >> arr[i];
    }
    cout << "The elements are:\n";
    for (i = 0; i < arr[n]; i++)
    {
        cout << arr[i] << endl;
    }
}