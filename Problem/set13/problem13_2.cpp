#include <iostream>
#include <ctime>

template <typename T>
void swap(T d[], int x, int y);

template <typename T>
void show(T d[], int N);

template <typename T>
void selectionSort(T d[], int N);

void fill_arr(int arr[], int size);

int main()
{
    srand(time(0));
    int size = 300;
    int arr[size];

    fill_arr(arr, size);
    std::cout << "Original Array : \n";
    show(arr, size);

    selectionSort(arr, size);
    std::cout << "\nSorted Array : \n";
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

        if (i % 10 == 0 && i != 0)
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
void selectionSort(T d[], int N)
{
    for (int i = 0; i < N; i++)
    {
        for (int j = i + 1; j < N; j++)
        {
            if (d[i] > d[j])
            {
                swap(d, i, j);
            }
        }
    }
}

void fill_arr(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        arr[i] = rand() % 1000 + 1;
    }
}