#include <iostream>
#include <cmath>

double sum(int n);

int main()
{

    std::cout << sum(3);

    return 0;
}

double sum(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return 1 + ((double)n / sum(n - 1));
    }
}
