#include <iostream>

int main()
{

    char alpha;
    std::cin >> alpha;

    switch (alpha)
    {
    case 'A':
        std::cout << "Awesome";
        break;

    case 'B':
        std::cout << "great";
        break;

    case 'C':
        std::cout << "Good";
        break;

    case 'F':
        std::cout << "Noob";
        break;

    default:
        std::cout << "Error: Invalid Input";
        break;
    }

    return 0;
}