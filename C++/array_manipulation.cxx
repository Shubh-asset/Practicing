#include <iostream>
#include <array>
#include <vector>

using namespace std;

int main()
{
    int n;

    cout << "Enter the size of the array: " << endl;
    cin >> n;

    // int rev[n];
    vector<int> rev(n);

    cout << "Enter the values for array to be reversed: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> rev[i];
    }

    cout << "Output of an array: " << endl;
    for (int i = 0; i < n; i++)
    {

        cout << rev[i] << " ";
    }

    cout << "\nReversed array\n";
    for (int i = 0; i < n; i++)
    {
        cout << rev[n - i - 1] << " ";
    }

    cout << '\n'
         << "lenght of an array: " << rev.size();

    return 0;
}
