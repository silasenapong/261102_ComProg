#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int &, int &, int &, int &);

int main()
{
    int a = 50, b = 100, c = 500, d = 1000;

    srand(time(0));

    for (int i = 0; i < 10; i++)
    {
        shuffle(a, b, c, d);
        cout << a << " " << b << " " << c << " " << d << endl;
    }

    return 0;
}

// Do not modify source code above this line

void shuffle(int &w, int &x, int &y, int &z)
{
    int arr[4] = {w, x, y, z};

    for (int i = 3; i > 0; i--)
    {
        int j = rand() % (i + 1);

        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }

    w = arr[0];
    x = arr[1];
    y = arr[2];
    z = arr[3];
}