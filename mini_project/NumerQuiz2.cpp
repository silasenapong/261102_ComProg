#include <iostream>
#include <iomanip>
#include <cmath>

double FuncX(double x)
{
    return pow(x, 3) - x - 1;
}

double FindMid(double (&range)[])
{
    return (range[0] + range[1]) / 2;
}

int main()
{

    double range[] = {1.0, 2.0};

    double Ea = 0;

    for (int i = 0; i < 3; i++)
    {

        double mid = FindMid(range);
        double fxm = FuncX(mid);
        double Et = ((2 - mid) / 2) * 100;

        std::cout << "Iter\t" << "XL\t" << "XR\t" << "XM\t" << "FxM\t" << "Et\t" << "Ea\n";
        std::cout << i + 1 << std::fixed << std::setprecision(3) << "\t" << range[0] << "\t"
                  << range[1] << "\t" << mid << "\t" << fxm << "\t" << Et << "\t" << Ea << "\n\n";

        if (fxm > 0)
        {
            range[1] = mid;
        }
        else if (fxm < 0)
        {
            range[0] = mid;
        }
        else
        {
            break;
        }
    }

    return 0;
}
