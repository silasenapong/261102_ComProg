#include <iostream>

int main()
{

    int a = 69;
    int *b = &a;
    int **c = &b;

    std::cout << a << " " << *b << " " << **c;

    return 0;
}