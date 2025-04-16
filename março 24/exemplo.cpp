#include <iostream>
#include <vector>

using namespace std;

struct Person
{
    string nome;
    string telefone;
};

void Preencher0(vector<Person> A); //por copia //ERRADO
void Preencher1(vector<Person> *A); //pointer
void Preencher2(vector<Person> &A); //referencia

int main()
{
    vector<Person> Agenda;
    Preencher0(Agenda);
    Preencher1(&Agenda);
    Preencher2(Agenda);

    for(size_t i=0; i<Agenda.size(); i++)
    {
        cout << "Nome: " << Agenda.at(i).nome << endl;
        cout << "Telefone: " << Agenda.at(i).telefone << endl << endl;
    }
    return 0;
}

void Preencher0(vector<Person> A)
{
    Person p;
    p.nome = "Antonio Carlos";
    p.telefone = "0000000000";
    A.push_back(p);

    int a=10;
}

void Preencher1(vector<Person> *A)
{
    Person p;
    p.nome = "Joao da Silva";
    p.telefone = "0000000000";
    A->push_back(p);
}

void Preencher2(vector<Person> &A)
{
    Person p;
    p.nome = "Maria Pereira";
    p.telefone = "0000000000";
    A.push_back(p);
}