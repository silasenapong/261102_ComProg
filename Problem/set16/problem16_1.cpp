#include <iostream>
#include <iomanip>

using namespace std;

void myMatrix(int ***p, int N);
void freeSpace(int **p, int N);

int main()
{
    int **p;
    int N;

    cout << "N = ";
    cin >> N;

    myMatrix(&p, N);

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cout << setw(4) << p[i][j];
        }
        cout << "\n";
    }

    freeSpace(p, N);

    return 0;
}

void myMatrix(int ***p, int N)
{
    for (int i = 0; i < N; i++)
    {
    }
}

void freeSpace(int **p, int N)
{
}