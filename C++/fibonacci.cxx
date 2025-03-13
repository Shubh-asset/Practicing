#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int m;
    cout << "Enter the number of elements in the series:\n";
    cin >> m;
    vector<int> n(m);
    cout << "Enter the series of numbers: \n";

    for (int i = 0; i < m; i++)
    {
        cin >> n[i];
    }
    cout << "The numbers are displayed as:\n";
    for (int i = 0; i < m; i++)
    {
        cout << n[i] << " ";
    }
    //**fibonacci series**//
    cout << "\n------The fibonacci series is-----\n";
    if (m >= 2)
    {
        cout << n[0] << " " << n[1] << " ";
        for (int i = 2; i < m + 10; i++)
        {
            n[i] = n[i - 1] + n[i - 2];
            cout << n[i] << " ";
        }
    }
    else if (m == 1)
    {
        cout << n[0];
    }
    return 0;
}
