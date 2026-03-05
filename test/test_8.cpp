#include <iostream>

int add(int *a, int *b);

int main()
{

    int aa = 2;
    int bb = 5;

    int *a = &aa;
    int *b = &bb;

    std::cout << add(a, b);

    return 0;
}

int add(int *a, int *b)
{

    // deref before use

    std::cout << "a = " << a << " *a = " << *a << std::endl;
    std::cout << "b = " << b << " *b = " << *b << std::endl;

    int c = *b - *a;
    std::cout << c << std::endl;

    for (int i = *a; i < 5; i++)
    {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    return *a + *b;
}