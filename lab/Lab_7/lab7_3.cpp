#include <iostream>

using namespace std;

int adiff_old(int a, int b)
{

    int c = 0;

    while (a >= 360)
    {
        a -= 360;
    }

    while (b >= 360)
    {
        b -= 360;
    }

    if (a >= b)
    {
        c = a - b;
    }
    else
    {
        c = b - a;
    }

    if (c > 180)
    {
        c = 360 - c;
    }
    if (c < -180)
    {
        c = c + 360;
        c = -c;
    }

    cout << a << "\t\t" << b << "\t\t";

    return c;
}

int adiff(int a, int b)
{

    int norm_a = (a % 360 + 360) % 360;
    int norm_b = (b % 360 + 360) % 360;

    int diff;
    if (norm_a >= norm_b)
    {
        diff = norm_a - norm_b;
    }
    else
    {
        diff = norm_b - norm_a;
    }

    if (diff > 180)
    {
        diff = 360 - diff;
    }

    return diff;
}

int main()
{

    cout << "angle a\t\t" << "angle b\t\t" << "angle c" << endl;

    cout << adiff(180, 270) << endl;

    cout << adiff(210, 45) << endl;

    cout << adiff(0, 360) << endl;

    cout << adiff(10, 350) << endl;

    cout << adiff(95, 260) << endl;

    cout << adiff(90, -90) << endl;

    cout << adiff(1000, 280) << endl;

    cout << adiff(60, 244) << endl;

    cout << "----------" << endl;

    cout << adiff(355, 5) << endl;   // 10
    cout << adiff(300, 30) << endl;  // 90
    cout << adiff(359, 1) << endl;   // 2
    cout << adiff(720, 365) << endl; // 5
    cout << adiff(390, 40) << endl;  // 10
    cout << adiff(800, 200) << endl; // 120
    cout << adiff(-10, 10) << endl;  // 20
    cout << adiff(-45, -90) << endl; // 45

    cout << adiff(-725, 5) << endl; // 10

    cout << adiff(0, 180) << endl;   // 180
    cout << adiff(45, 225) << endl;  // 180
    cout << adiff(123, 123) << endl; // 0
    cout << adiff(10, 191) << endl;  // 179
    cout << adiff(0, 270) << endl;   // 90

    return 0;
}