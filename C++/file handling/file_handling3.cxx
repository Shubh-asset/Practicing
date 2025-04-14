#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> arr(6);
    cout << "enter the values: ";

    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }

    ofstream fout;
    fout.open("anotherfile.txt");
    // fout<<"original data";

    for (int i = 0; i < 6; i++)
    {
        fout << arr[i] << " ";
    }
    fout << "Sorted data\n";

    sort(arr.begin(), arr.end());
    for (int i = 0; i < 5; i++)
    {
        fout << arr[i] << " ";
    };

    fout.close();

    // ifstream fin;
    // fin.open("anotherfile.txt");
    // int i;

    // while (fin >> i)
    // {
    //     cout << i << " ";
    // }

    // fin.close();

    return 0;
}