#include <iostream>
#include <iomanip>
#include <cmath>

int size = 4;

void show(double result[][6]);
void cal(double result[][6]);

int main()
{
    double result[size][6] = {0};

    // init value
    result[0][1] = 1.5;
    result[0][5] = 100;

    cal(result);
    show(result);

    return 0;
}

void show(double result[][6])
{

    std::cout << "i\tXi\tFxi\tFpxi\tXi+1\tEa\n";

    for (int j = 0; j < size; j++)
    {
        std::cout << std::fixed << std::setprecision(4)
                  << result[j][0] << "\t" << result[j][1] << "\t"
                  << result[j][2] << "\t" << result[j][3] << "\t"
                  << result[j][4] << "\t" << result[j][5] << "\t" << std::endl;
    }
}

void cal(double result[][6])
{
    for (int i = 0; i < size; i++)
    {
        result[i][0] = i;
        result[i][2] = pow(result[i][1], 3) - result[i][1] - 1;
        result[i][3] = (3 * pow(result[i][1], 2)) - 1;
        result[i][4] = result[i][1] - (result[i][2] / result[i][3]);

        if (i != 0)
        {
            result[i][5] = ((result[i][4] - result[i - 1][4]) / result[i][4]) * 100.0;
        }

        result[i + 1][1] = result[i][4];
    }
}
