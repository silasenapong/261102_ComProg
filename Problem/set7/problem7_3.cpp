#include <iostream>
#include <cmath>

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

        z = (x + y) / 2;
    }
    else
    {
        z = sqrt(pow(x, 2) + pow(y, 2));

        if (z > 50)
        {
            z = 50;
        }
    }

    std::cout << z;

    return 0;
}