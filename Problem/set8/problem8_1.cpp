#include <iostream>
#include <iomanip>

int main()
{

    double sum = 0;

    for (int i = 2; i <= 222; i += 2)
    {
        sum = sum + (1.0 / i);
    }

    std::cout << std::fixed << std::setprecision(10) << sum;

    return 0;
}