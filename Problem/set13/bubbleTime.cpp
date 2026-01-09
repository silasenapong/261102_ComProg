#include <iostream>
#include <ctime>

void fill_array(int arr[], int size);
void show(int arr[], int size);
void swap(int arr[], int x, int y);
void bubbleSort(int arr[], int size);

int main()
{
    srand(time(0));

    int size = 100;
    int array_1[size];

    fill_array(array_1, size);
    show(array_1, size);
    std::cout << std::endl;

    clock_t start = clock();
    bubbleSort(array_1, size);
    clock_t end = clock();
    double elapsed = double(end - start) / CLOCKS_PER_SEC;
    std::cout << "Elapsed Time: " << elapsed << " seconds." << std::endl;

    show(array_1, size);

    return 0;
}

void fill_array(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        arr[i] = rand() % 10000 + 1;
    }
}

void show(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        if (i % 10 == 0)
        {
            std::cout << arr[i] << std::endl;
        }
        else
        {
            std::cout << arr[i] << " ";
        }
    }

    std::cout << std::endl;
}

void swap(int arr[], int x, int y)
{
    int temp = arr[x];
    arr[x] = arr[y];
    arr[y] = temp;
}

void bubbleSort(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            swap(arr, i, i + 1);
        }
    }
}