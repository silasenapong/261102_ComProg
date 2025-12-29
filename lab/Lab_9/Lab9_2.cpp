#include <iostream>

void printO(int x, int y)
{

    if (x <= 0 || y <= 0)
    {
        std::cout << "Invalid input";
    }
    else
    {
        for (int i = 0; i < x; i++)
        {
            for (int j = 0; j < y; j++)
            {
                std::cout << 'O';
            }

            std::cout << std::endl;
        }
    }
}

int main()
{

    printO(2, 2);

    return 0;
}