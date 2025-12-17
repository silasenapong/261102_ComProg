#include <iostream>

int main()
{

    int num[10];

    for (int i = 0; i < 10; i++)
    {
        std::cin >> num[i];
    }

    for (int i = 0; i < 10; i++)
    {
        if (num[i] % 42 != 0)
        {
        }
    }

    return 0;
}