#include <iostream>

int main()
{

    int num, min;
    bool IsAssign = true;

    while (true)
    {
        std::cout << "Input number: ";
        std::cin >> num;

        if (IsAssign)
        {
            if (num > 0)
            {
                min = num;
                IsAssign = false;
            }
            else
            {
                std::cout << "Minimum = N/A";
                break;
            }
        }

        if (num > 0)
        {
            if (num < min)
            {
                min = num;
            }
        }
        else
        {
            std::cout << "Minimum = " << min;
            break;
        }
    }

    return 0;
}