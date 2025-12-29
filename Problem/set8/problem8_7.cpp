
/*
    rope length = 100 cm
    fire time 10s (if start at 0)
    loop input until = 100 or (< 0 or > 100)
*/

#include <iostream>

int main()
{

    int num;

    do
    {

        std::cin >> num;

    } while (num >= 0 && num <= 100);

    return 0;
}