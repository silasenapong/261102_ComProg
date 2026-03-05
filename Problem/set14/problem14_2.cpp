#include <iostream>

void myfunc(int &x, int &y)
{
    int temp = x;
    x += y / 2;
    y += temp / 2;
}

void myfunc2(int *i, int *j)
{
    int temp = *i;
    *i += *j / 2;
    *j += temp / 2;
}

int main()
{

    int x = 4;
    int y = 4;

    myfunc(x, y);

    std::cout << "x = " << x << std::endl
              << "y = " << y << std::endl;

    int i = 4;
    int j = 4;

    myfunc2(&i, &j);

    std::cout << "x = " << x << std::endl
              << "y = " << y;

    return 0;
}