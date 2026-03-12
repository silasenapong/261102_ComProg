#include <iostream>

int main()
{

    int cap = 0;

    std::cout << "Enter cap : ";
    std::cin >> cap;

    int **c = new int *[cap];
    for (int i = 0; i < cap; i++)
    {
        c[i] = new int[cap];
    }

    for (int i = 0; i < cap; i++)
    {
        std::cout << "Input row " << i + 1 << " : ";
        for (int j = 0; j < cap; j++)
        {
            std::cin >> c[i][j];
        }
    }

    for (int i = 0; i < cap; i++)
    {
        for (int j = 0; j < cap; j++)
        {
            std::cout << c[i][j] << " ";
        }
        std::cout << std::endl;
    }

    for (int i = 0; i < cap; i++)
    {
        delete[] c[i];
    }

    delete[] c;

    return 0;
}