#include <iostream>

template <typename T>
void swap(T d[], int x, int y);

template <typename T>
void show(T d[], int N);

template <typename T>
void bubbleSort(T d[], int N);

int main()
{

    int arr[] = {12, 56, 9, 24, 86, 770, 23, 13, 87, 9, 354, 67};
    int size = sizeof(arr) / sizeof(arr[0]);

    // std::cout << size;

    std::cout << "Original : ";
    show(arr, size);

    std::cout << "\nSorting process : \n";
    bubbleSort(arr, size);

    return 0;
}

template <typename T>
void swap(T d[], int x, int y)
{
    T temp = d[x];
    d[x] = d[y];
    d[y] = temp;
}

template <typename T>
void show(T d[], int N)
{
    for (int i = 0; i < N; i++)
    {
        std::cout << d[i] << " ";
    }
}

template <typename T>
void moveMax2End(T d[], int N)
{
    for (int i = 0; i < N - 1; i++)
    {
        if (d[i] > d[i + 1])
        {
            swap(d, i, i + 1);
        }
    }
}

template <typename T>
void bubbleSort(T d[], int N)
{
    for (int i = 0; i < N; i++)
    {
        moveMax2End(d, N);
        show(d, N);
        std::cout << std::endl;
    }
}
