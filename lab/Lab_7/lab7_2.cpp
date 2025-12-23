#include <iostream>

using namespace std;

int main()
{

    int i = 0, P[9999], k, result;

    while (i < 9999)
    {
        P[i] = i + 1;
        i++;
        cout << P[i] << endl;
    }

    cin >> k;

    if (k > 0)
    {
        i = 0;
        result = 0;

        while (i < 5000)
        {
            if (P[i] % k == 0)
            {
                result = result - P[i];
            }
            else
            {
                result = result + P[i];
            }

            i++;
            // cout << i << endl;
        }

        cout << result;
    }
    else
    {
        cout << "Invalid input!!!";
    }

    return 0;
}