#include <iostream>
#include <cmath>

int sum_of_pow(int n);

int main()
{

    std::cout << sum_of_pow(4) << std::endl;
    std::cout << sum_of_pow(5) << std::endl;
    std::cout << sum_of_pow(6) << std::endl;

    return 0;
}

int sum_of_pow(int n)
{

    if (n == 1)
    {
        return 2;
    }
    else
    {
        return pow(2, n) + sum_of_pow(n - 1);
    }
}
