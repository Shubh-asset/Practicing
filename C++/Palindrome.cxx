#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    cout << "Enter the name whose palindrome you want to check: ";
    cin >> s;

    cout << "Your word is: " << s << endl;

    // checking palindrome
    cout << "The palindrome function: " << endl;
    int i, j = 0;
    int is_palindrome = true;

    while (i < j)
    {
        if (s[i] != s[j])
        {
            is_palindrome = false;
            break;
        }
        else
        {
            i += 1;
            j -= 1;
        }
    }

    if (is_palindrome == true)
    {
        cout << s << " is a palindrome." << endl;
    }
    else
    {
        cout << s << " is not a palindrome." << endl;
    }

    return 0;
}