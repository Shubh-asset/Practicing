#include <iostream>
#include <string>
using namespace std;

int main()
{
    //**Strings in C language**//
    /*char f[10];
    char g[20];
    char h[20];

    cout << "Enter your first name: ";
    cin >> f;

    cout << '\n'
         << f;
    */

    //**Strings in C++ language */

    // string str;
    // str = {"hello everyone"};
    // cout << str << endl;

    // string str2(5, 'a');
    // cout << str2 << endl;

    // string str3 = {"abcde", 2};
    // cout << str3;

    // concatenation
    string str4, str5;
    cout << "Enter your name: " << endl;
    cin >> str4;
    cout << "Enter you Sur-name: " << endl;
    cin >> str5;

    cout << "Your full name is: " << str4 + " " + str5 << endl;

    cout << str4[0] << endl
         << endl;

    for (char c : str4)
    {
        cout << c << endl;
    }
    return 0;
}