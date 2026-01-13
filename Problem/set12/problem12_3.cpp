#include <iostream>

const int size = 3;

void input_mat(int matrix[size][size]);
void show(int matrix[size][size]);
void findDet(int matrix[size][size]);

int main()
{
    // std::cout << "Please input matrix size: ";
    // std::cin >> size;
    double matrix[size][size];

    return 0;
}

void input_mat(int matrix[size][size])
{
    for (int i = 0; i < size; i++)
    {
        std::cout << "Input elements of row " << i + 1 << ": ";

        for (int j = 0; j < size; j++)
        {
            std::cin >> matrix[i][j];
        }
    }
}

void show(int matrix[size][size])
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

int findDet(int matrix[size][size])
{
    if (size == 1)
    {
        return matrix[0][0];
    }
}