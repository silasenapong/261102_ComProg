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

    std::cout << gender;

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

    p1.flirt(p2);

    std::cout << p1.in_relation_with << "\n";

    return 0;
}
