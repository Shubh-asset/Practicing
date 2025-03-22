#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str = {"Hello Shubh"};
    string ::iterator it;
    for (it = str.begin(); it != str.end(); it++)
    {
        cout << *it;
    }

    cout << '\n'
         << "Size of the string: " << str.size() << endl;
    cout << "length of the string: " << str.length() << endl;
    cout << "capacity of the string: " << str.capacity() << endl;
    cout << "Max size of the string: " << str.max_size() << endl
         << endl;
    // cout<<"Size of the string: "<<str.size()<<endl;

    // start to end with designated characters
    cout << str.substr(0, 3) << endl;
    cout << str.find("Sh", 1);

    return 0;
}