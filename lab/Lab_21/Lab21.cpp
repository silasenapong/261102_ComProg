#include <iostream>
#include <cmath>
using namespace std;

class ComplexNumber
{
public:
    double real;
    double imag;

    ComplexNumber(double, double);

    friend ComplexNumber operator+(const ComplexNumber &, const ComplexNumber &);
    friend ComplexNumber operator-(const ComplexNumber &, const ComplexNumber &);
    friend ComplexNumber operator*(const ComplexNumber &, const ComplexNumber &);
    friend ComplexNumber operator/(const ComplexNumber &, const ComplexNumber &);

    friend bool operator==(const ComplexNumber &, const ComplexNumber &);

    double abs();
    double angle();
};

ComplexNumber::ComplexNumber(double x = 0, double y = 0)
{
    real = x;
    imag = y;
}

ComplexNumber operator+(const ComplexNumber &a, const ComplexNumber &c)
{
    return ComplexNumber(a.real + c.real, a.imag + c.imag);
}

ComplexNumber operator-(const ComplexNumber &a, const ComplexNumber &c)
{
    return ComplexNumber(a.real - c.real, a.imag - c.imag);
}

ComplexNumber operator*(const ComplexNumber &a, const ComplexNumber &c)
{
    return ComplexNumber((a.real * c.real) - (a.imag * c.imag), (a.real * c.imag) + (a.imag * c.real));
}

ComplexNumber operator/(const ComplexNumber &a, const ComplexNumber &c)
{
    double bottom = pow(c.real, 2) + pow(c.imag, 2);

    double real = ((a.real * c.real) + (a.imag * c.imag)) / bottom;

    double imag = ((a.imag * c.real) - (a.real * c.imag)) / bottom;

    return ComplexNumber(real, imag);
}

bool operator==(const ComplexNumber &a, const ComplexNumber &c)
{
    if (a.real == c.real && a.imag == c.imag)
    {
        return true;
    }
    else
    {
        return false;
    }
}

double ComplexNumber::abs()
{
    return sqrt(pow(real, 2) + pow(imag, 2));
}

double ComplexNumber::angle()
{
    return (180.0 / M_PI) * atan2(imag, real);
}

ostream &operator<<(ostream &os, const ComplexNumber &c)
{
    if (c.real == 0 && c.imag == 0)
        return os << "0";

    if (c.real != 0)
        os << c.real;

    if (c.imag > 0)
        os << (c.real != 0 ? "+" : "") << c.imag << "i";
    else if (c.imag < 0)
        os << c.imag << "i";

    return os;
}

int main()
{
    ComplexNumber a(1.5, 2), b(3.2, -2.5), c(-1, 1.2);
    cout << a << "\n";
    cout << b << "\n";
    cout << c << "\n";
    cout << a + 2.5 << "\n";
    cout << 2.5 + a << "\n";
    cout << a - 1.5 << "\n";
    cout << 1.5 - a << "\n";
    cout << b + ComplexNumber(0, 2.5) << "\n";
    cout << c - c << "\n";
    cout << "-----------------------------------\n";

    ComplexNumber d = (a + b) / c;
    ComplexNumber e = b / (a - c);
    cout << d << "\n";
    cout << e << "\n";
    cout << c * 2 << "\n";
    cout << 0.5 * c << "\n";
    cout << 1 / c << "\n";
    cout << "-----------------------------------\n";

    cout << ComplexNumber(1, 1).abs() << "\n";
    cout << ComplexNumber(-1, 1).abs() << "\n";
    cout << ComplexNumber(1.5, 2.4).abs() << "\n";
    cout << ComplexNumber(3, 4).abs() << "\n";
    cout << ComplexNumber(69, -9).abs() << "\n";
    cout << "-----------------------------------\n";

    cout << ComplexNumber(1, 1).angle() << "\n";
    cout << ComplexNumber(-1, 1).angle() << "\n";
    cout << ComplexNumber(-1, -1).angle() << "\n";
    cout << ComplexNumber(1, -1).angle() << "\n";
    cout << ComplexNumber(5, 2).angle() << "\n";
    cout << "-----------------------------------\n";

    cout << (ComplexNumber(1, 1) == ComplexNumber(1, 2)) << "\n";
    cout << (ComplexNumber(1, 1) == 1) << "\n";
    cout << (0 == ComplexNumber()) << "\n";
}