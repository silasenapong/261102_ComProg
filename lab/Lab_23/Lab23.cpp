#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <cstdlib>
#include <sstream>

using namespace std;

char score2grade(int score)
{
    if (score >= 80)
        return 'A';
    if (score >= 70)
        return 'B';
    if (score >= 60)
        return 'C';
    if (score >= 50)
        return 'D';
    else
        return 'F';
}

string toUpperStr(string x)
{
    string y = x;
    for (unsigned i = 0; i < x.size(); i++)
        y[i] = toupper(x[i]);
    return y;
}

void importDataFromFile(string filename, vector<string> &names, vector<int> &scores, vector<char> &grades)
{
    ifstream read(filename);
    string textline;

    char format[] = "%[^:]:%d %d %d";

    char name[100];
    int score1, score2, score3;

    while (getline(read, textline))
    {
        sscanf(textline.c_str(), format, name, &score1, &score2, &score3);

        int sum = score1 + score2 + score3;

        names.push_back(name);
        scores.push_back(sum);
        grades.push_back(score2grade(sum));
    }

    read.close();
}

void getCommand(string &command, string &key)
{
    string input;
    command = "";
    key = "";

    cout << "Please input your command:\n";

    if (getline(cin, input))
    {
        stringstream ss(input);

        if (ss >> command)
        {
            getline(ss >> ws, key);
        }
    }
}

void searchName(vector<string> &names, vector<int> &scores, vector<char> &grades, string key)
{
    bool found = false;

    cout << "---------------------------------\n";

    for (unsigned int i = 0; i < scores.size(); i++)
    {
        if (toUpperStr(names[i]) == key)
        {
            cout << names[i] << "'s score = " << scores[i] << "\n";
            cout << names[i] << "'s grade = " << grades[i] << "\n";

            found = true;
        }
    }

    if (!found)
    {
        cout << "Cannot found.\n";
    }

    cout << "---------------------------------\n";
}

void searchGrade(vector<string> &names, vector<int> &scores, vector<char> &grades, string key)
{
    bool found = false;

    cout << "---------------------------------\n";

    for (unsigned int i = 0; i < scores.size(); i++)
    {
        if (toupper(grades[i]) == key[0])
        {
            cout << names[i] << " (" << scores[i] << ")\n";
            found = true;
        }
    }

    if (!found)
    {
        cout << "Cannot found.\n";
    }

    cout << "---------------------------------\n";
}

int main()
{
    string filename = "name_score.txt";
    vector<string> names;
    vector<int> scores;
    vector<char> grades;
    importDataFromFile(filename, names, scores, grades);

    do
    {
        string command, key;
        getCommand(command, key);
        command = toUpperStr(command);
        key = toUpperStr(key);
        if (command == "EXIT")
            break;
        else if (command == "GRADE")
            searchGrade(names, scores, grades, key);
        else if (command == "NAME")
            searchName(names, scores, grades, key);
        else
        {
            cout << "---------------------------------\n";
            cout << "Invalid command.\n";
            cout << "---------------------------------\n";
        }
    } while (true);

    return 0;
}