#include <iostream>
#include <cmath>

int cal1(int n)
{

    int sum;

    if (n == 1)
    {
    }
    else
    {
        // n-1
        return cal1(pow(2, n)) + cal1(pow(2, n - 1));
    }
}

int main()
{

    cal1(5);

    return 0;
}
