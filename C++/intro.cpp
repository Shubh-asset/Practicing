#include <iostream>
using namespace std;

// Addition
/*
int main()
{
    float num1, num2, avg, sum;
    cout << "Enter the number 1: ";
    cin >> num1;
    cout << "Enter the number 2: ";
    cin >> num2;

    sum = num1 + num2;
    avg = sum / 2;

    cout << "The sum is: " << sum << " And average is: " << avg;*/

// Condition
/*int a, b, sum;
cout << "Enter the value of a: ";
cin >> a;
cout << "Enter the value of b: ";
cin >> b;

sum = a + b;
cout << "The sum is: " << sum;

if (sum < (a * b))
{
    cout << "\nthe multiplication is strong";
}
else if (sum > (a * b))
{
    cout << "\nthe Addition is stronger.";
}
else
{
    cout << "\nThey both are equal.";
}
return 0;
}
*/

// Switch

/*
int main()
{
    int choice;

    while (1)
    {
        cout << "**Bank management system" << endl;
        cout << "1. Create account\n2. Deposit Money\n3. Check balance\n4. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice)
        {

        case 1:
            cout << "Creating an account";
            break;

        case 2:
            cout << "Depositing the money";
            break;

        case 3:
            cout << "Checking the balance";
            break;

        case 4:
            cout << "Thank you for using this ATM";
            return 0;
            break;

        default:
            cout << "Kindly enter the right choice!" << endl;
            // exit(0);
            break;
        }
    }
return 0;
}
*/

// Functions
/*
double square(double x)
{
    return x * x;
}
void print_result(double x)
{
    cout << "The square of " << x << " is " << square(x);
}

int main()
{
    print_result(4);
    return 0;
}
*/

// Data types
int main()
{
    char a = 'd';
    int b = 4;
    cout << a << "\n";
    cout << sizeof(b);
    return 0;
}
