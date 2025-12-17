#include <iostream>
#include <string>

int main()
{

    std::string order;
    std::cin >> order;

    int cup1 = 1, cup2 = 0, cup3 = 0, temp;

    for (int i = 0; i < order.size(); i++)
    {
        if (order[i] == 'A')
        {
            temp = cup1;
            cup1 = cup2;
            cup2 = temp;
        }
        else if (order[i] == 'B')
        {
            temp = cup2;
            cup2 = cup3;
            cup3 = temp;
        }
        else if (order[i] == 'C')
        {
            temp = cup3;
            cup3 = cup1;
            cup1 = temp;
        }
    }

    if (cup1 == 1)
    {
        std::cout << 1;
    }
    else if (cup2 == 1)
    {
        std::cout << 2;
    }
    else if (cup3 == 1)
    {
        std::cout << 3;
    }
    else
    {
        std::cout << "Error";
    }

    return 0;
}