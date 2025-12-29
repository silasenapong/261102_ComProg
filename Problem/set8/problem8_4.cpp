#include <iostream>

void printPattern1(int num1, int num2)
{

    int k = 0;
    for (int i = 0; i < num1; i++)
    {

        for (int j = 0 + k; j < num2 + k; j++)
        {
            if (j % 2 == 0)
            {
                std::cout << 'O';
            }
            else
            {
                std::cout << 'X';
            }
        }

        std::cout << std::endl;
    }
}

int main()
{

    printPattern1(3, 5);
    printPattern1(5, 3);

    return 0;
}