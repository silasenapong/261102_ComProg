#include <iostream>
#include <typeinfo>

using namespace std;

template <typename T>
T shifting(T, int);

int main()
{
    cout << shifting('A', 5.5) << " "
         << typeid(shifting('A', 5.5)).name() << endl; // string x char /
    cout << shifting(5, 5.5) << " "
         << typeid(shifting(5, 5.5)).name() << endl; // int
    cout << shifting(6.9f, 2) << " "
         << typeid(shifting(6.9f, 2)).name() << endl; // float

    // cout << shifting(5.5,’A’);
    // cuz maybe type error int and char but argument in func is flex and int
}

template <typename T>
T shifting(T x, int y)
{
    return x + y;
}