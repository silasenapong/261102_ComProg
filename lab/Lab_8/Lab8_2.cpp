#include <iostream>

char findGrade(float score)
{

    if (score > 90)
    {
        return 'A';
    }
    else if (score > 75)
    {
        return 'B';
    }
    else if (score > 60)
    {
        return 'C';
    }
    else if (score > 45)
    {
        return 'D';
    }
    else
    {
        return 'F';
    }
}

int main()
{

    float score;
    std::cout << "Enter yr score : ";
    std::cin >> score;
    std::cout << findGrade(score);

    return 0;
}