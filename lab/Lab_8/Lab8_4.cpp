#include <iostream>

int main()
{

    std::string character;
    int age, height, bounty;
    std::cout << "Enter your age: ";
    std::cin >> age;

    if (age <= 25)
    {
        std::cout << "Enter your height: ";
        std::cin >> height;

        if (height < 100)
        {
            character = "Chopper";
        }
        else if (height < 180)
        {
            character = "Usopp";
        }
        else
        {
            std::cout << "Enter your bounty: ";
            std::cin >> bounty;

            if (bounty > 1100000000)
            {
                character = "Zoro";
            }
            else
            {
                character = "Sanji";
            }
        }
    }
    else
    {
        if (age <= 60)
        {
            std::cout << "Enter your bounty: ";
            std::cin >> bounty;

            if (bounty > 500000000)
            {
                character = "Jinbe";
            }
            else
            {
                character = "Franky";
            }
        }
        else
        {
            character = "Brook";
        }
    }

    std::cout << "Your character = " << character;

    return 0;
}