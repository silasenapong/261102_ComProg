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

    string input_str, reverse_str, lower_str, lower_reverse_str;

    cout << "Input text: ";
    cin >> input_str;

    reverse_str = func1(input_str);
    lower_str = func2(input_str);

    lower_reverse_str = func2(reverse_str);

    cout << "Reversed text: " << reverse_str << endl;

    if (lower_reverse_str == lower_str)
    {
        cout << "Palindrome: Yes" << endl;
    }
    else
    {
        cout << "Palindrome: No" << endl;
    }

    return 0;
}
