
/*
    rope length = 100 cm
    fire time 10s (if start at 0)
    loop input until = 100 or (< 0 or > 100)
    1s rope burn 10cm
*/

#include <iostream>

void input(int position[]);
void show(int position[], int l);

int main()
{

    int length = 100;
    int position[length] = {0};

    return 0;
}

void input(int position[])
{
    int current_position, last_position = 0, count = 0;

    while (true)
    {
        std::cout << "Input the burner location: ";
        std::cin >> current_position;

        if (current_position < 0 || current_position >= 100)
        {
            break;
        }

        if (current_position <= last_position)
        {
            std::cout << "Next location must be greater than " << ".\n";
            continue;
        }

        last_position = current_position;
        count++;
    }
}

void show(int position[], int length)
{
    for (int i = 0; i < length; i++)
    {
        if (position[i] > 0)
        {
            std::cout << "Cuttent position is : " << position[i] << std::endl;
        }
    }
}