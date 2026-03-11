#include <iostream>

int main()
{

    int N = 0, M = 0;

    std::cout << "N, M = ";
    std::cin >> N >> M;

    // create 2D array
    int **array = new int *[N];
    for (int i = 0; i < N; i++)
    {
        array[i] = new int[M];
    }

    // delete 2D array
    for (int i = 0; i < N; i++)
    {
        delete[] array[i];
    }
    delete[] array;

    return 0;
}
