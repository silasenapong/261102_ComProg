#include <iostream>
using namespace std;

int main()
{

    int a = 5;
    char b = 'A';
    char &c = b;
    int *x = &a;
    char *y = &b;
    int **z = &x;

    std::cout << a << " " << b << " " << c << " " << x << " " << (void *)y << " " << z << std::endl;

    std::cout << &a << " " << (void *)&b << " " << (void *)&c << " " << &x << " " << (void *)&y << " " << &z << std::endl;

    c = 'F';

    std::cout << a << " " << b << " " << c << " " << x << " " << (void *)y << " " << z << std::endl;

    *y = 'W';

    std::cout << a << " " << b << " " << c << " " << x << " " << (void *)y << " " << z << std::endl;

    *x = 6;

    std::cout << a << " " << b << " " << c << " " << x << " " << (void *)y << " " << z << std::endl;

    **z = 7;

    std::cout << a << " " << b << " " << c << " " << x << " " << (void *)y << " " << z << std::endl;

    return 0;
}
