#include <iostream>
#include <string>

using namespace std;

string func1(string x)
{
    int i = 0, L = x.size();
    string y = "";
    while (i < L)
    {
        y += x[L - i - 1];
        i++;
    }
    return y;
}

string func2(string x)
{
    int i = 0, L = x.size();
    string y = "";
    while (i < L)
    {
        y += toupper(x[i]);
        i++;
    }
    return y;
}

string func3(string x)
{
    int i = 0, L = x.size();
    string y = "";
    while (i < L)
    {
        y += tolower(x[i]);
        i++;
    }
    return y;
}

int main()
{

    string s, sl, sr;

    cout << "Input text: ";
    cin >> s;

    sl = func3(s);
    sr = func1(sl);
    cout << "Reversed text: " << sr << endl;

    if (sr == sl)
    {
        cout << "Palindrome: YES" << endl;
    }
    else
    {
        cout << "Palindrome: NO" << endl;
    }

    return 0;
}
