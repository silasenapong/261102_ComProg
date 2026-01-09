#include <iostream>

int main()
{
    int size;
    std::cout << "Please input matrix size: ";
    std::cin >> size;

    double matrix[size][size];

    // input matrix
    for (int i = 0; i < size; i++)
    {
        std::cout << "Input elements of row " << i + 1 << ": ";

        for (int j = 0; j < size; j++)
        {
            std::cin >> matrix[i][j];
        }
    }

    // show matrix
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }

    // cal det

    return 0;
}
