#include <iostream>
#include <vector>
#include <ctime>

using namespace std;

class Monster
{
public:
    int hp;
    int atk;
    int def;
    vector<string> skills;
    Monster(double, double, double, vector<string>);
    Monster operator+(Monster);
};

Monster::Monster(double h, double a, double d, vector<string> s)
{
    hp = h;
    atk = a;
    def = d;
    skills = s;
}

Monster Monster::operator+(Monster m)
{
    vector<string> skill_range;
    vector<string> skill_result;

    for (int i = 0; i < skills.size(); i++)
    {
        skill_range.push_back(skills[i]);
    }

    for (int i = 0; i < m.skills.size(); i++)
    {
        skill_range.push_back(m.skills[i]);
    }

    for (int i = 0; i < skill_range.size(); i++)
    {
        int random = rand() % 2;

        if (random == 1)
        {
            skill_result.push_back(skill_range[i]);
        }
    }

    int hp_range = hp + m.hp;
    int atk_range = atk + m.atk;
    int def_range = def + m.def;

    int hp_result = rand() % hp_range + 1;
    int atk_result = rand() % atk_range + 1;
    int def_result = rand() % def_range + 1;

    Monster NewMon(hp_result, atk_result, def_result, skill_result);

    return NewMon;
}

int main()
{
    srand(time(0));

    vector<string> Pikachu_skills;
    Pikachu_skills.push_back("Tail Whip");
    Pikachu_skills.push_back("Spark");
    Pikachu_skills.push_back("Thunder");
    Monster Pikachu(100, 40, 20, Pikachu_skills);

    vector<string> Nidoran_skills;
    Nidoran_skills.push_back("Tail Whip");
    Nidoran_skills.push_back("Double Kick");
    Nidoran_skills.push_back("Toxic Spikes");
    Nidoran_skills.push_back("Poison Fang");
    Monster Nidoran(200, 25, 50, Nidoran_skills);

    Monster Nidochu = Nidoran + Pikachu;
    cout << "HP = " << Nidochu.hp;
    cout << "\t ATK = " << Nidochu.atk;
    cout << "\t DEF = " << Nidochu.def << "\n";
    cout << "SKILLS: \n";

    for (int i = 0; i < Nidochu.skills.size(); i++)
    {
        cout << "\t" << Nidochu.skills[i] << "\n";
    }

    return 0;
}
