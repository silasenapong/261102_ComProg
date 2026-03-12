#include <iostream>
#include <vector>

std::vector<float> removeNegatives(std::vector<float> v);
void show(std::vector<float> v);

int main()
{

    std::vector<float> vec1 = {1, 2, 3, 4, 5, 6};
    std::vector<float> vec2 = {0.5, -2.0, -3.7, 1.2};
    std::vector<float> vec3 = {0, 0, 1, 1.2, 2.3, -2.5};
    std::vector<float> vec4 = {-1, -2, -3, -4};

    show(removeNegatives(vec1));
    show(removeNegatives(vec2));
    show(removeNegatives(vec3));
    show(removeNegatives(vec4));

    return 0;
}

std::vector<float> removeNegatives(std::vector<float> v)
{
    std::vector<float> tempVec;

    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] >= 0)
        {
            tempVec.push_back(v[i]);
        }
    }

    return tempVec;
}

void show(std::vector<float> v)
{
    for (int i = 0; i < v.size(); i++)
    {
        std::cout << v[i] << " ";
    }
    std::cout << "\n";
}
