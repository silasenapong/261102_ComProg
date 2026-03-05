#include <iostream>

int main()
{

    std::string str;
    std::cin >> str;

    int size = str.size();

    for (int i = 0; i < size; i++)
    {
        std::cout << (i % 3 == 2 ? "..*." : "..#.");
    }
    std::cout << ".\n";

    for (int i = 0; i < size; i++)
    {
        std::cout << (i % 3 == 2 ? ".*.*" : ".#.#");
    }
    std::cout << ".\n";

    for (int i = 0; i < size; i++)
    {
        if (i != 0 && i % 3 != 1)
            std::cout << "*." << str[i] << ".";
        else
            std::cout << "#." << str[i] << ".";
    }
    std::cout << (size % 3 == 0 ? "*" : "#") << "\n";

    for (int i = 0; i < size; i++)
    {
        std::cout << (i % 3 == 2 ? ".*.*" : ".#.#");
    }
    std::cout << ".\n";

    for (int i = 0; i < size; i++)
    {
        std::cout << (i % 3 == 2 ? "..*." : "..#.");
    }
    std::cout << ".\n";

    return 0;
}
