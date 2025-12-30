#include <iostream>
#include <fstream>

using namespace std;

int main()
{

    float min, max;
    int count = 0;
    string num;

    cout << "Enter range of the scores [min, max] for counting: ";
    cin >> min >> max;

    if (min >= max)
    {
        cout << "Invalid input. (max >= min)";
    }
    else
    {
        ifstream read("score.txt");

        while (getline(read, num))
        {
            if (stof(num) >= min && stof(num) <= max)
            {
                count++;
            }
        }

        cout << "The number of students who have scores in this range = " << count << endl;
        read.close();
    }

    return 0;
}