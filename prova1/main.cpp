/*Os times se encontram nos arquivos “orcs.txt” e “vikings.txt”, e são explicados conforme
abaixo:
Cada linha corresponde a um guerreiro e suas características. O nome é uma string de
tamanho ilimitado, que termina no primeiro “;” (ponto-e-vírgula). A vida é um valor inteiro
que inicia logo após o primeiro “;” até o segundo “;”. O valor de ataque inicia no segundo
“;” e termina no terceiro “;”. E o valor de defesa é o último valor inteiro.
Desta forma, a implementação do main (este trecho de código NÃO DEVE ser alterado) se
encontra abaixo:
Pede-se: Implementar a classe Player e o restante do código para que este main esteja
operacional. As manipulações de cadeias de caracteres devem ser desenvolvidas com
std::string, e o não cumprimento acarretará em descontos na nota.
Note: um ataque só terá sucesso se o valor de ataque do agressor, for maior do que o
valor de defesa do alvo. Neste caso, o valor do dano na vida do alvo será a diferença do
valor de ataque do agressor, menos a defesa do alvo.*/

#include "player.hpp"

vector<Player> LoadTeam(string path);

int main()
{
    //carregando arquivos times
    vector<Player> Orcs = LoadTeam("orcs.txt");
    vector<Player> Vikings = LoadTeam("vikings.txt");

    //iniciando a batalha, parar somente quando um time for aniquilado
    while(Orcs.size() > 0 && Vikings.size() > 0)
    {
        size_t i = rand()%Orcs.size();
        size_t j = rand()%Vikings.size();

        Orcs[i].Attack(Vikings[j]);
        Vikings[j].Attack(Orcs[i]);

        if(Orcs[i].GetLife() < 1) Orcs.erase(Orcs.begin()+i);
        if(Vikings[j].GetLife() < 1) Vikings.erase(Vikings.begin()+j);

        cout << "Pop (orc x vik): " << Orcs.size() << " x " << Vikings.size() << endl;
    }

    if(Orcs.size())
    {
        cout << "Orcs team wins. Number of Warriors: " << Orcs.size() << endl;
        for (int i = 0; i < Orcs.size(); i++)
        {
            cout << " -> " << Orcs[i].GetName() << ", Life: " << Orcs[i].GetLife() << endl;
        }
    }
    else
    {
        cout << "Vikings team wins. Number of Warriors: " << Vikings.size() << endl;
        for (int i = 0; i < Vikings.size(); i++)
        {
            cout << " -> " << Vikings[i].GetName() << ", Life: " << Vikings[i].GetLife() << endl;
        }
    }

    return 0;
}

vector<Player> LoadTeam(string path)
{
    ifstream filereader;
    filereader.open(path);

    vector<Player> players;

    string name, tmp;
    int life, attack, defense;

    while(getline(filereader, tmp))
    {
        name = tmp.substr(0, tmp.find(";"));
        life = atoi(tmp.substr(tmp.find(";")+1, tmp.find(";")-tmp.find(";")-1).c_str());
        attack = atoi(tmp.substr(tmp.find(";")+1, tmp.find(";")-tmp.find(";")-1).c_str());
        defense = atoi(tmp.substr(tmp.find(";")+1, tmp.find(";")-tmp.find(";")-1).c_str());

        players.push_back(Player(name, life, attack, defense));
    }

    return players;
}