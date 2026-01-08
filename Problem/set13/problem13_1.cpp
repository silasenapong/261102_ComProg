#include <iostream>

template <typename T>
void swap(T d[], int x, int y);

template <typename T>
void insertionSort(T d[], int N);

int main()
{

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
void insertionSort(T d[], int N)
{
}