#include <iostream>

void printPattern1(int num1, int num2)
{

    if (num1 <= 0 || num2 <= 0)
    {
        std::cout << "Invalid input" << std::endl;
    }
    else
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

            k++;

            std::cout << std::endl;
        }
    }
}

int main()
{

    printPattern1(3, 5);
    printPattern1(5, 3);
    printPattern1(0, 3);
    printPattern1(7, -1);

    return 0;
}