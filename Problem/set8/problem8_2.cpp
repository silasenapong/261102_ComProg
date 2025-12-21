#include <iostream>
#include <cmath>

int main()
{

    int index = 0, sum = 0;

    for (int i = 3; i <= 333; i += 3)
    {
        if (index % 2 == 0)
        {
            sum = sum + pow(i, 2);
        }
        else
        {
            sum = sum + pow(i, 3);
        }

        index++;
    }

    std::cout << sum;

    return 0;
}