#include <iostream>

using namespace std;

template <typename Type>
void insert(const Type[], Type[], int, Type, int);

int main()
{
    int N = 4;
    int x[N] = {1, 4, 9, 7}, y[N + 1], z[N + 1];

    insert(x, y, N, 69, 2); // insert value 69 at index 2
    insert(x, z, N, 77, 0); // insert value 77 at index 0

    cout << "x = ";
    for (int i = 0; i < N; i++)
    {
        cout << x[i] << " ";
    }

    cout << "\ny = ";
    for (int i = 0; i < N + 1; i++)
    {
        cout << y[i] << " ";
    }

    cout << "\nz = ";
    for (int i = 0; i < N + 1; i++)
    {
        cout << z[i] << " ";
    }

    return 0;
}

template <typename Type>
void insert(const Type arr[], Type arr_mod[], int N, Type value, int index)
{
    for (int i = 0; i < index; i++)
    {
        arr_mod[i] = arr[i];
    }

    arr_mod[index] = value;

    for (int i = index; i < N; i++)
    {
        arr_mod[i + 1] = arr[i];
    }
}
