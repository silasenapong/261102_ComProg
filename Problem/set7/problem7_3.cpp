#include <iostream>

int main()
{

    int x, y, z;
    std::cin >> x >> y;

    if (x >= 20 && y >= 20 && x + y >= 50)
    {
        if (y > x)
        {
            y *= 2;
        }
    }

    return 0;
}