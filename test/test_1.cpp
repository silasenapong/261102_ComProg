#include <iostream>
#include <ctime>

int main()
{

    srand(time(0));

    int i = rand() % 100 + 1;

    if (i <= 99)
    {
        std::cout << "Pai" << std::endl;
    }
    else
    {
        std::cout << "Ski(pai)" << std::endl;
    }

    return 0;
}