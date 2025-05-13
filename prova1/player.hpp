#ifndef PLAYER_HPP
#define PLAYER_HPP

#include <iostream>
#include <string>
#include <vector>
#include <fstream>

using namespace std;

class Player
{
private: 
    string m_name;
    int m_life, m_attack, m_defense;

public:
    Player();
    Player(string name, int life, int attack, int defense);
    string GetName();
    int GetLife();
    int GetAttack();
    int GetDefense();
    bool Attack(Player &alvo);
};

#endif