#include <iostream>
#include <ctime>

template <typename T>
void swap(T d[], int x, int y);

template <typename T>
void show(T d[], int N);

template <typename T>
void insertionSort(T d[], int N);

void fill_arr(int arr[], int size);

int main()
{
    srand(time(0));

    int size = rand() % 1000 + 1;
    int arr[size];

    fill_arr(arr, size);

    std::cout << "Original array : \n";
    show(arr, size);

    std::cout << std::endl;

    insertionSort(arr, size);
    std::cout << "Sorted array : \n";
    show(arr, size);

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
        if (i > 0 && i % 10 == 0)
        {
            std::cout << d[i] << std::endl;
        }
        else
        {
            std::cout << d[i] << " ";
        }
    }
}

template <typename T>
void insertionSort(T d[], int N)
{
    for (int i = 1; i < N; i++)
    {
        T key = d[i];
        int j = i - 1;

        while (j >= 0 && d[j] < key)
        {
            d[j + 1] = d[j];
            j--;
        }

        d[j + 1] = key;
    }
}

void fill_arr(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        arr[i] = rand() % 100000 + 1;
    }
}