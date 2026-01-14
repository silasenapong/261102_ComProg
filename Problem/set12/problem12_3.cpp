#include <iostream>

const int size = 3;

void input_mat(double matrix[size][size]);
void show(double matrix[size][size]);
double findDet(double matrix[size][size]);

int main()
{
    // std::cout << "Please input matrix size: ";
    // std::cin >> size;
    double matrix[size][size];

    input_mat(matrix);

    std::cout << "Original matrix : " << std::endl;
    show(matrix);

    return 0;
}

void input_mat(double matrix[size][size])
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

void show(double matrix[size][size])
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

double findDet(double matrix[size][size])
{
    if (size == 1)
    {
        return matrix[0][0];
    }

    return 0;
}