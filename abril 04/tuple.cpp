#include <iostream>
#include <tuple>
#include <vector>

using namespace std;

int main()
{
    vector< tuple<string, string, string, double> > Agenda;

    Agenda.push_back(make_tuple("Antonio Carlos","48 xxxxxx", "Pesquisador", 50000));
    Agenda.push_back(make_tuple("Ricardo Silva","48 xxxxxx", "Vendedor", 30000));
    Agenda.push_back(make_tuple("Maria Oliveira","48 xxxxxx", "Bancario", 30000));
    Agenda.push_back(make_tuple("Pedro Ramos","48 xxxxxx", "Contador", 10000));


    for(size_t i=0; i<Agenda.size(); i++)
    {
        cout << "Nome: " << get<0>(Agenda[i]) << " Telefone: " << get<1>(Agenda[i]) << " Profissao: " << get<2>(Agenda[i]) << " Salario: " << get<3>(Agenda[i]) << endl;
    }

    return 0;
}