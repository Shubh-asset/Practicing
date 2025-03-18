#include <iostream>
#include <vector>

using namespace std;

int main()
{
    // vector<int> numbers;
    // int value;
    // for (int i = 0; i < 3; i++)
    // {
    //     cout << "Enter the value: " << '\n';
    //     cin >> value;
    //     numbers.push_back(value);
    // }

    // vector<int> numbers(5, 5);

    // vector<int> numbers(4);
    // fill(numbers.begin(), numbers.end(), 5);
    // for (int i = 0; i < numbers.size(); i++)
    // {
    //     cout << numbers[i] << endl;
    // }

    vector<int> num(5);
    for (int i = 0; i < num.size(); i++)
    {
        cin >> num[i];
    }
    cout << "\n";
    num.at(1) = 66;
    for (int i = 0; i < num.size(); i++)
    {
        cout << num[i] << " ";
    }

    return 0;
}