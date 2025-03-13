//**Pointers, Arrays and Strings
#include <iostream>
#include <vector>

using namespace std;

// int main()
// {
//     char a[5] = {'a', 'b', 'c', 'd', 'e'}; //[] array of 5
//     char *p; // * pointer to char
//     p = &a[0];
//     char x = *p;
//     cout << x;
//     return 0;
// }

void copy_int()
{
    int i[5] = {1, 2, 3, 4, 5};
    int v[5];
    for (auto j = 0; j <= 5; ++j)
    {
        v[j] = i[j];
    }
}
void print()
{
    int v[] = {0, 1, 2, 3, 4, 5};
    for (auto x : v)
    {
        cout << x << "\n";
    }
    cout << "\n";
    vector<int> v1 = {10, 21, 32, 43, 54, 65};
    for (auto x : v1)
    {
        cout << x << '\n';
    }
}
void increment()
{
    int v[] = {0, 1, 2, 3, 4, 5};
    for (auto &x : v)
    {
        x++;
    }
}

int count_x(char *p, char x)
{
    if (p == nullptr)
    {
        return 0;
    }
    int count = 0;
    for (; *p != 0; ++p)
    {
        if (*p == x)
        {
            ++count;
        }
    }
    return count;
}
int main()
{
    copy_int();
    print();
    increment();
    count_x('x');
    // cout << "The elements of i are: ";
    // for (auto j = 0; j <= 5; j++)
    // {
    //     cout << i[j] << " ";
    // }
    // cout << "\nAfter interchanging the elements of i and v are: ";
    // for (auto i = 0; i <= 5; i++)
    // {
    //     cout << v[i] << " ";
    // }
    // double* pd = nullptr;
    // Link<Record>* pl = nullptr;
    // //int x = nullptr;  //error

    return 0;
}