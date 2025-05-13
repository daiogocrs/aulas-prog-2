#include "player.hpp"

Player::Player()
{
    m_name = "";
    m_life = 0;
    m_attack = 0;
    m_defense = 0;
}

Player::Player(string name, int life, int attack, int defense)
{
    m_name = name;
    m_life = life;
    m_attack = attack;
    m_defense = defense;
}

string Player::GetName() 
{
    return m_name;
}

int Player::GetLife() 
{ 
    return m_life; 
}

int Player::GetAttack() 
{ 
    return m_attack; 
}

int Player::GetDefense() 
{ 
    return m_defense; 
}

bool Player::Attack(Player &alvo) 
{ 
    if(m_attack > alvo.m_defense) 
    { 
        alvo.m_life -= (m_attack - alvo.m_defense); 
        return true; 
    } 
    return false;
}