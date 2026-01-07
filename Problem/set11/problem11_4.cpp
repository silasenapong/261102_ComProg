#include <iostream>
#include <cmath>

double sum_of_root(int n);

int main()
{

    std::cout << sum_of_root(3) << std::endl;
    std::cout << sum_of_root(4) << std::endl;
    std::cout << sum_of_root(5) << std::endl;
    std::cout << sum_of_root(6) << std::endl;

    return 0;
}

double sum_of_root(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else
    {
        return sqrt(n * sum_of_root(n - 1));
    }
}
