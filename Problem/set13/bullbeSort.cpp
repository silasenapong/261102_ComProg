#include <iostream>

template <typename T>
void swap(T d[], int x, int y);

template <typename T>
void show(T d[], int N);

template <typename T>
bool moveMax2End(T d[], int N);

template <typename T>
void bubbleSort(T d[], int N);

int main()
{

    int arr[1000] = {};
    int size = sizeof(arr) / sizeof(arr[0]);

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
bool moveMax2End(T d[], int N)
{
    bool swap_flag = false;

    for (int i = 0; i < N - 1; i++)
    {
        if (d[i] > d[i + 1])
        {
            swap(d, i, i + 1);
            swap_flag = true;
        }
    }

    return swap_flag;
}

template <typename T>
void bubbleSort(T d[], int N)
{
    for (int i = 0; i < N; i++)
    {

        bool didswap = moveMax2End(d, N);
        show(d, N);
        std::cout << std::endl;

        if (!didswap)
        {
            break;
        }
    }
}
