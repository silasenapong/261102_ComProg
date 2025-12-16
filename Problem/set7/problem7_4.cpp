#include <iostream>
using namespace std;

void func_1()
{
    int x = 3;
    switch (x)
    {
    case 7:
        x *= 2;
        x++;
        break;
    case 3:
        x++;
    case 5:
        x %= 3;
        x += 4;
        break;
    case 0:
    case 2:
        x /= 2;
        x--;
        break;
    default:
        x++;
    }
    cout << "x = " << x;
}

void func_2()
{
    int num = 20;

    if (num >= 10)
    {
        cout << "A";
        cout << "B";
    }
    else if (num >= 5)
        cout << "C";
    else
        cout << "D";
    cout << "E";

    cout << "F";
}

int main()
{

    func_1();
    func_2();

    return 0;
}