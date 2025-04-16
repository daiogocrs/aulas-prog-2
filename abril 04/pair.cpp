#include <iostream>
#include <utility>
#include <vector>

using namespace std;

int main()
{
    pair<string, string> p1, p2, p3, p4, p5("Ricardo de Oliveira","55 xxxxxxx");
    p1.first = "Antonio Sobieranski";
    p1.second = "(48) 000000000";
    p2.first = "Joao da Silva";
    p2.second = "(48) 000000000";
    p3.first = "Pedro Pimenta";
    p3.second = "(48) 000000000";
    p4.first = "Maria Teixeira";
    p4.second = "(48) 000000000";

    //cout << p1.first << " - " << p1.second;

    vector< pair<string, string> > Agenda;
    Agenda.push_back(p1);
    Agenda.push_back(p2);
    Agenda.push_back(p3);
    Agenda.push_back(p4);
    Agenda.push_back(p5);

    Agenda.push_back(make_pair("Maria Clara","49 xxxxxxxxxx"));


    for(size_t i=0; i<Agenda.size(); i++)
    {
        cout << "Nome: " << Agenda[i].first << " Telefone: " << Agenda[i].second << endl;
    }

    return 0;
}