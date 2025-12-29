#include <iostream>

void printPattern2(int num)
{
    if (num > 0)
    {
        for (int i = 0; i < num; i++)
        {
            for (int j = 0; j < i + 1; j++)
            {
                std::cout << 'O';
            }

            for (int k = 0; k < num - i - 1; k++)
            {
                std::cout << 'X';
            }

            std::cout << std::endl;
        }
    }
    else
    {
        std::cout << "Invalid input" << std::endl;
    }
    std::cout << std::endl;
}

int main()
{

    printPattern2(3);
    printPattern2(4);
    printPattern2(5);
    printPattern2(0);
    printPattern2(-1);

    return 0;
}