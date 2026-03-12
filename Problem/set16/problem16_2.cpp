#include <iostream>
#include <vector>
#include <fstream>
#include <string>

int main()
{

    std::ifstream read("score.txt");
    std::string textline;

    std::vector<float> score;

    while (std::getline(read, textline))
    {
        score.push_back(stof(textline));
    }

    for (int i = 0; i < score.size(); i++)
    {
        std::cout << score[i] << " ";
    }

    return 0;
}