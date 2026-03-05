#include <iostream>

void show_bool(bool mod[42]);

int main()
{

    int num[10] = {0}, nums = 0, count = 0;
    bool mod[42] = {false};

    for (int i = 0; i < 10; i++)
    {
        std::cin >> num[i];
    }

    for (int i = 0; i < 10; i++)
    {
        nums = num[i] % 42;
        mod[nums] = true;
    }

    for (int i = 0; i < 42; i++)
    {
        if (mod[i] == true)
        {
            count++;
        }
    }

    std::cout << count;

    return 0;
}

void show_bool(bool mod[42])
{
    for (int i = 0; i < 42; i++)
    {
        std::cout << mod[i] << std::endl;
    }
}