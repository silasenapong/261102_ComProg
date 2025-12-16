#include <iostream>

std::string tommy(int face, int behav)
{

    if (behav < 50)
    {

        if (face < 50)
        {
            return "Unfriend";
        }
        else if (face >= 50 && face < 80)
        {
            return "One-night-stand";
        }
        else
        {
            return "One-night-stand";
        }
    }
    else
    {
        if (face < 50)
        {
            return "Friend";
        }
        else if (face >= 50 && face < 80)
        {
            return "Friend";
        }
        else
        {
            return "Girlfriend";
        }
    }
}

int main()
{

    int face, behav;
    std::cin >> face >> behav;

    std::cout << tommy(face, behav);

    return 0;
}