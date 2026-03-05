#include <iostream>

const int size = 4;

int FindTrace(int matrix[size][size])
{
    int sum = 0;

    for (int i = 0; i < size; i++)
    {
        sum += matrix[i][i];
    }

    return sum;
}

void show(int matrix[size][size])
{
    std::cout << std::endl;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;
}

int main()
{
    int matrix[size][size] = {0};

    std::cout << "Input matrix : " << std::endl;

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            std::cin >> matrix[i][j];
        }
        std::cout << std::endl;
    }

    show(matrix);
    std::cout << FindTrace(matrix);

    return 0;
}