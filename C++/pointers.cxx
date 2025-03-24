#include <iostream>

using namespace std;

int main()
{
    /*int a = 10;
    int *p = &a;
    int a2 = *p;

    cout << a2;
    cout << " " << p;
    cout << " " << a;
    */
    int a = 10;
    int *p = &a;

    int **ppc = &p; // pointer to pointer to char
    int mm = **ppc;
    cout << mm << endl;
    // dereferencing
    *p = 6;
    int pp = *p;
    cout << pp;

    void *mk = &a;
    // auto lk = *mk;
    cout << " " << endl
         << mk;
}