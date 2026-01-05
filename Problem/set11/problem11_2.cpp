#include <iostream>
#include <ctime>
using namespace std;

long long int fibonacci_recursive(long long int x);
long long int fibonacci_loop(long long x);

/*
int main()
{

    // recursive
    clock_t start = clock();
    cout << "Result: " << fibonacci_recursive(40) << "\n";
    clock_t end = clock();
    double elapsed = double(end - start) / CLOCKS_PER_SEC;
    cout << "Elapsed Time: " << elapsed << " seconds.";

    return 0;

    // 102334155
    // 0.720669
}
*/

int main()
{

    // loop
    clock_t start = clock();
    cout << "Result: " << fibonacci_loop(40) << "\n";
    clock_t end = clock();
    double elapsed = double(end - start) / CLOCKS_PER_SEC;
    cout << "Elapsed Time: " << elapsed << " seconds.";

    return 0;
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

/*
    x = 5
    prev1 = 1, prev2 = 0

    for (int i = 2; i <= x; i++) {
        curr = prev1 + prev2; curr = 1
        prev2 = prev1; prev2 = 1
        prev1 = curr; prev1 = 1
    }
    return curr;
*/