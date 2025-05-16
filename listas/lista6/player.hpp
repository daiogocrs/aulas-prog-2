#include <iostream>

using namespace std;

class Player
{
private:
    string m_name;
    float m_life, m_attack, m_defense;

public:
    Player();
    Player(string name, float life=20, float att=3, float def=1);

    string GetName() { return m_name; };
    float GetLife();
    float GetAttack();
    float GetDefense();
    void SetLife(float life);

    bool Attack(Player &alvo);
};
