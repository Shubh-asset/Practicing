#include <iostream>
using namespace std;

bool accept()
{
    cout << "do you want to continue (y or n)\n";

    char answer = 0;
    cin >> answer;

    if (answer == 'y')
    {
        return true;
    }
    return false;
}
bool accept2()
{
    cout << "do you want to continue? (y or n)\n";
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

int main()
{
    accept2();

    return 0;
}