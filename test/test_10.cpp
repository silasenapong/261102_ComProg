#include <iostream>

int main()
{

    int capacity = 0;

    std::cout << "Enter cap : ";
    std::cin >> capacity;

    int *num = new int[capacity];

    for (int i = 0; i < capacity; i++)
    {
        std::cout << "Enter number " << i + 1 << " : ";
        std::cin >> num[i];
    }

    for (int i = 0; i < capacity; i++)
    {
        std::cout << i + 1 << " : " << num[i] << "\n";
    }

    delete[] num;
    num = nullptr;

    return 0;
}