#include <iostream>
#include <string>

using namespace std;

void func1()
{
    // string s = "A";
    // cout << (s == 'A');
}

void func2()
{
    string s = "A";
    s += "B";
    cout << s << "\n";
}

void func3()
{
    char s[] = "AAAAAAAAAAA 69";
    char x[3];
    int y;
    sscanf(s, "%s %d", x, &y);
    cout << x << y << "\n";
}

void func4()
{
    char s[] = "42,45 69:72";
    int a, b, c, d;
    sscanf(s, "%d %d %d %d", &a, &b, &c, &d);
    cout << a << b << c << d << "\n";
    sscanf(s, "%d,%d %d:%d", &a, &b, &c, &d);
    cout << a << b << c << d << "\n";
}

int main()
{

    func1();
    func2();
    func3();
    func4();

    return 0;
}