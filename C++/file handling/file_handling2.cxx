#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main()
{
    ifstream fin;
    fin.open("Newfile.txt");

    char c;
    // fin >> c;
    c = fin.get();

    while (!fin.eof())
    {
        cout << c;
        // fin >> c;
        c = fin.get();
    }

    fin.close();

    return 0;
}