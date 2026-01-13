#include <iostream>
#include <string>

using namespace std;

int main()
{

    string name[] = {"Luffy", "Zoro", "Sanji", "Nami", "Naruto", "Sakura",
                     "All Might", "Saitama", "Eren", "Mikasa"};
    int id[] = {123, 196, 225, 329, 420, 451, 515, 666, 690, 787};
    double gpa[] = {1.50, 2.12, 4.00, 3.69, 2.50, 2.76, 3.54, 2.14, 3.50, 1.88};

    double num;

    int size = sizeof(id) / sizeof(id[0]);

    cout << "Please input GPA: ";
    cin >> num;

    for (int i = 0; i < size; i++)
    {
        if (gpa[i] >= num)
        {
            cout << id[i] << " " << name[i] << " " << gpa[i] << endl;
        }
    }

    return 0;
}