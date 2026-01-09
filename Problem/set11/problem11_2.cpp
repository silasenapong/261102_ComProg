#include <iostream>
#include <ctime>
using namespace std;

long long int fibonacci_recursive(long long int x);
long long int fibonacci_loop(long long x);
void call_recursive(int num);
void call_loop(int num);

int main()
{
    int num = 40;

    call_loop(num);
    call_recursive(num);

    return 0;
}

void call_recursive(int num)
{
    clock_t start = clock();
    cout << "Resursive\n";
    cout << "Result: " << fibonacci_recursive(num) << "\n";
    clock_t end = clock();
    double elapsed = double(end - start) / CLOCKS_PER_SEC;
    cout << "Elapsed Time: " << elapsed << " seconds.\n\n";
}

void call_loop(int num)
{
    clock_t start = clock();
    cout << "Loop\n";
    cout << "Result: " << fibonacci_loop(num) << "\n";
    clock_t end = clock();
    double elapsed = double(end - start) / CLOCKS_PER_SEC;
    cout << "Elapsed Time: " << elapsed << " seconds.\n\n";
}

long long int fibonacci_recursive(long long int x)
{
    if (x == 0)
    {
        return 0;
    }
    else if (x == 1)
    {
        return 1;
    }
    else
    {
        return fibonacci_recursive(x - 1) + fibonacci_recursive(x - 2);
    }
}

long long int fibonacci_loop(long long x)
{

    long long int result = 0;

    if (x == 0)
    {
        return 0;
    }
    else if (x == 1)
    {
        return 1;
    }
    else
    {

        int prev1 = 1, prev2 = 0, curr;

        for (int i = 2; i <= x; i++)
        {
            curr = prev1 + prev2;
            prev2 = prev1;
            prev1 = curr;
        }
        return curr;
    }
}
