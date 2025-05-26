#include <iostream>
#include <vector>

using namespace std;

class Peao
{
public:
    virtual void Identificar()
    {
        cout << "Eu sou um peao" << endl;
    }
};

class Guerreiro : public Peao
{
public:
    void Identificar()
    {
        cout << "Eu sou um guerreiro" << endl;
    }
};

class Heroi : public Guerreiro
{
public:
    void Identificar()
    {
        cout << "Eu sou um heroi" << endl;
    }
};

int main()
{
    Peao p1;
    Peao p2;
    Guerreiro p3;
    Heroi p4;
    
    p1.Identificar();
    p2.Identificar();
    p3.Identificar();
    p4.Identificar();
    
    vector<Peao*> players;

    players.push_back(&p1);
    players.push_back(&p2);
    players.push_back(&p3);
    players.push_back(&p4);

    for (size_t i = 0; i < 10; i++)
    {
        players[i]->Identificar();
    }

    return 0;
}