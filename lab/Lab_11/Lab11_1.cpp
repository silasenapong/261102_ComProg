#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{
    srand(time(0));
    int i = rand() % 9;
    std::string grade[] = {"A", "B+", "B", "C+", "C", "D+", "D", "F", "W"};

    std::cout << "Press Enter 3 times to reveal your future.\n";

    std::cin.get();
    std::cin.get();
    std::cin.get();

    std::cout << "You will get " << grade[i] << " in this 261102.";

    return 0;
}