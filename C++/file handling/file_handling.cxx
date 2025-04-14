#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main()
{
    ofstream fout;
    fout.open("Newfile.txt");

    fout << "Hello everyone";

    fout.close();

    return 0;
}