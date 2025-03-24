#include <iostream>

using namespace std;

int main()
{
    /*int a = 9;
    int *pNum = nullptr;
    pNum = new int;
    *pNum = 20;

    cout << "Address: " << pNum << endl;
    cout << "Value: " << *pNum << endl;

    delete pNum;

    cout << *pNum;
    */

    int size;
    cout << "Enter the grades you want to type in: " << endl;
    cin >> size;

    char *Sgrades = nullptr;
    Sgrades = new char[size];

    for (int i = 0; i < size; i++)
    {
        cout << "Enter grade " << i + 1 << " ";
        cin >> Sgrades[i];
    }
    for (int i = 0; i < size; i++)
    {
        cout << Sgrades[i] << " ";
    }

    delete[] Sgrades;

    return 0;
}