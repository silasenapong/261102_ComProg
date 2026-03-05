#include <iostream>

int main()
{
    std::string id;
    int first, second;

    std::cout << "enter student id : ";
    std::cin >> id;

    first = id[0] - '0';
    second = id[1] = '0';

    std::cout << first << " " << second << std::endl;
    std::cout << "you are : " << first + second;

    return 0;
}