#include <iostream>

class People
{
public:
    char gender;
    int age;
    long long int money;
    double height;
    double weight;
    People *in_relation_with;
    bool flirt(People &);
};

bool People::flirt(People &target)
{

    bool condition[5] = {false};

    if (target.gender == 'F')
    {
        condition[0] = true;
    }

    if (target.age < age)
    {
        condition[1] = true;
    }

    if (target.money < money)
    {
        condition[2] = true;
    }

    if (target.height < height)
    {
        condition[3] = true;
    }

    if (target.weight < weight)
    {
        condition[4] = true;
    }

    for (int i = 0; i < 5; i++)
    {
        if (condition[i] == false)
        {
            return false;
        }
    }

    in_relation_with = target.in_relation_with;
    target.in_relation_with = in_relation_with;
    return true;
}

int main()
{
    People p1, p2;

    p1.gender = 'M';
    p1.age = 22;
    p1.money = 1000000;
    p1.height = 175.3;
    p1.weight = 65.9;

    p2.gender = 'F';
    p2.age = 20;
    p2.money = 10000;
    p2.height = 161.7;
    p2.weight = 53.7;

    if (p1.flirt(p2))
    {
        std::cout << "Dream come true\n";
    }
    else
    {
        std::cout << "Damm\n";
    }

    return 0;
}
