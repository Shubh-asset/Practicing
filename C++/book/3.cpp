//**Test and Loops**//
#include <iostream>
using namespace std;

bool accept()
{
    cout << "Do you want to continue (y or n)\n";
    char answer = 0;
    cin >> answer;

    if (answer == 'y')
    {
        cout << "hello";
        return true;
    }
    else
    {
        return false;
    }
}
bool accept2()
{
    cout << "Do you want to continue (y or n)\n";
    char answer = 0;
    cin >> answer;

    switch (answer)
    {
    case 'y':
        return true;
    case 'n':
        return false;
    default:
        cout << "I'll take it as no";
        return false;
    }
}
bool accept3()
{
    int tries = 1;
    while (tries < 4)
    {
        cout << "\nDo you want to continue (y or n)\n";
        char answer = 0;

        cin >> answer;

        switch (answer)
        {
        case 'y':
            return true;
        case 'n':
            return false;
        default:
            cout << "Unable to understand";
            ++tries;
        }
    }
    cout << "\nI'll take it as no";
    return false;
}

int main()
{
    accept3();
    return 0;
}