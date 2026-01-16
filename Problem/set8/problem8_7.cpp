
/*
    rope length = 100 cm
    fire time 10s (if start at 0)
    loop input until = 100 or (< 0 or > 100)
    1s rope burn 10cm
*/

#include <iostream>
#include <algorithm>

int input(int position[]);
void show(int position[], int count);
void cal(int position[], int count);

int main()
{

    int position[100] = {0};

    int count = input(position);

    cal(position, count);

    return 0;
}

int input(int position[])
{
    int current_position = 0, last_position = -1, count = 0;

    while (true)
    {
        std::cout << "Input the burner location: ";
        std::cin >> current_position;

        if (current_position < 0 || current_position > 100)
        {
            break;
        }

        if (current_position <= last_position)
        {
            std::cout << "Next location must be greater than " << last_position << ".\n";
            continue;
        }

        position[count] = current_position;
        last_position = current_position;
        count++;

        if (current_position == 100)
        {
            break;
        }

        // std::cout << "Count : " << count << std::endl;
    }
    return count;
}

void show(int position[], int count)
{
    for (int i = 0; i < count; i++)
    {
        if (position[i] > 0)
        {
            std::cout << "Burn position is : " << position[i] << std::endl;
        }
    }
}

void cal(int position[], int count)
{
    if (count == 0)
        return;

    double max_dist = (double)position[0];

    max_dist = std::max(max_dist, (double)(100 - position[count - 1]));

    for (int i = 0; i < count - 1; i++)
    {
        double gap = (position[i + 1] - position[i]) / 2.0;
        max_dist = std::max(max_dist, gap);
    }

    double time = max_dist / 10.0;

    std::cout << "Burning completes in " << time << " sec." << std::endl;
}
