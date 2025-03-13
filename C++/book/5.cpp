//**Structures
#include <iostream>
#include <vector>

using namespace std;

struct Vector
{
    int sz;
    double *elem;
    // vector(int s):elem{new double[s]}, sz{s}{}
};

void vector_init(Vector &v, int s)
{
    v.elem = new double[s];
    v.sz = s;
}

double read_sum(int s)
{
    Vector v(s);
    for (int i = 0; i != v.size())
}

int main()
{
    Vector v;
    vector_init(v, 5);

    for (int i = 0; i < v.sz; ++i)
    {
        v.elem[i] = i * 1.1;
    }
    cout << "Vector elements are: ";
    for (int i = 0; i < v.sz; ++i)
    {
        cout << v.elem[i] << " ";
    }
    delete[] v.elem; // avoid memory leaks

    return 0;
}