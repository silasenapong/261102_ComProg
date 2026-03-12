#include <iostream>

using namespace std;

struct Rect
{
    double x, y, w, h;
};

Rect merge(Rect &a, Rect &b)
{
    double left, right, top, bottom;

    if (a.x < b.x)
    {
        left = a.x;
    }
    else
    {
        left = b.x;
    }

    if (a.x + a.w < b.x + b.w)
    {
        right = b.x + b.w;
    }
    else
    {
        right = a.x + a.w;
    }

    if (a.y < b.y)
    {
        top = b.y;
    }
    else
    {
        top = a.y;
    }

    if (a.y + a.h < b.y + b.h)
    {
        bottom = b.y + b.h;
    }
    else
    {
        bottom = a.y + a.h;
    }

    Rect c;

    c.x = left;
    c.y = top;
    c.w = right - left;
    c.y = bottom - left;

    return c;
};

int main()
{
    Rect R1, R2, R3;

    cout << "Please input Rect 1 (x y w h): ";
    cin >> R1.x >> R1.y >> R1.w >> R1.h;

    cout << "Please input Rect 2 (x y w h): ";
    cin >> R2.x >> R2.y >> R2.w >> R2.h;

    R3 = merge(R1, R2);

    cout << "Merged Rect = ";
    cout << R3.x << " " << R3.y << " " << R3.w << " " << R3.h << " ";

    return 0;
}