#include <iostream>

int main()
{

    int arr[] = {10, 20, 30, 40, 50};

    int size = *(&arr + 1) - arr;

    std::cout << size << " " << *(&arr + 1) << " " << arr;

    return 0;
}