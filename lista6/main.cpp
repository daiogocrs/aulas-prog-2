#include "player.hpp"
#include <vector>

int main()
{
    //seed para evitar que o random seja sempre mesmo valor
    vector<Player> players;

    Player p1;
    Player p2("Jhones", 50, 10, 0);
    Player p3("Rachel", 70, 8, 5);
    Player p4("Pedrao", 30);

    players.push_back(p1);
    players.push_back(p2);
    players.push_back(p3);
    players.push_back(p4);
    players.push_back(Player("Super F.Hero", 200, 20, 3));

    for(size_t i=0; i<500; i++)
    {
        string name = "Player ";
        name+=i;
        float l = rand()%20;
        float a = rand()%20;
        float d = rand()%5;

        players.push_back(Player(name, l, a, d));
    }

    //mostrar todos
    for(size_t i=0; i<players.size(); i++)
    {
        cout << "Player Index " << i << " Name:" << players[i].GetName() << " L:" << players[i].GetLife() << " A:" << players[i].GetAttack() << " D:" << players[i].GetDefense() << endl;
    }

    while(players.size() > 1)
    {
        size_t i = rand()%players.size();
        size_t j = rand()%players.size();

        if(players[i].Attack(players[j]))
        {
            cout << "Player " << i << " has attacked Player " << j << endl;

            if(players[j].GetLife() <= 0)
            {
                players.erase(players.begin() + j);
                cout << "Player " << j << " has died" << endl;
            }
        }
    }

    cout << "winner: " << players[0].GetName() << " L: " << players[0].GetLife() << endl;

    return 0;
};
