#include "player.hpp"

Player::Player()
{
    m_name = "No name";
    m_life=20;
    m_attack=3;
    m_defense=1;
}

Player::Player(string name, float life, float att, float def)
{
    m_name = name;
    m_life=life;
    m_attack=att;
    m_defense=def;
}

float Player::GetLife()
{
    return m_life;
}

float Player::GetAttack()
{
    return m_attack;
}

float Player::GetDefense()
{
    return m_defense;
}

void Player::SetLife(float life)
{
    m_life = life;
}

bool Player::Attack(Player &alvo)
{
    //m_life=20;
    //m_attack=3;
    //m_defense=1;

    //if(m_attack > alvo.m_defense)
    if(m_attack > alvo.GetDefense())
    {
        alvo.m_life = alvo.m_life - m_attack + alvo.m_defense;
        return true;
    }
    else
    {
        return false;
    }
}



