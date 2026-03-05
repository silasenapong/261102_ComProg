#include <iostream>

class Test
{
public:
    int id;

private:
    int score;
};

int main()
{

    Test x;
    x.id = 10;

    std::cout << x.id;

    return 0;
}