#include <iostream>
#include <iomanip>
#include <fstream>
#include <cmath>
#include <string>

using namespace std;

int main()
{

    string num;
    int n = 0;
    float sum = 0, sum2 = 0, mean, Standard_deviation;

    ifstream read("score.txt");

    while (getline(read, num))
    {
        sum += stof(num);
        sum2 += pow(stof(num), 2);

        n++;
    }

    mean = sum / n;

    Standard_deviation = sqrt((sum2 / n) - pow(mean, 2));

    cout << "Number of data = " << n << endl;
    cout << setprecision(3);
    cout << "Mean = " << mean << endl;
    cout << "Standard deviation = " << Standard_deviation;

    read.close();
    return 0;
}