#include "person.hpp"
#include <vector>


int main()
{
    Person p1, p2, p3;
    p1.SetNome("Antonio Carlos Sobieranski");
    p1.SetEndereco("Rua X");
    p1.SetProfissao("Bancario");
    p1.SetSalario(80000);

    p2.SetNome("Maria de Oliveria");
    p2.SetEndereco("Rua Y");
    p2.SetProfissao("Contadora");
    p2.SetSalario(40000);

    p3.SetNome("Pedro Alves Cabral");
    p3.SetEndereco("Rua Z");
    p3.SetProfissao("Navegador");
    p3.SetSalario(200);

    vector<Person> vecPessoas;
    vecPessoas.push_back(p1);
    vecPessoas.push_back(p2);
    vecPessoas.push_back(p3);

    for(size_t i=0; i<vecPessoas.size(); i++)
    {
        cout << "Nome: " << vecPessoas[i].GetNome() << " - " << vecPessoas[i].GetEndereco() << " - " << vecPessoas[i].GetProfissao() << " - " << vecPessoas[i].GetSalario() << endl << endl;
    }

    return 0;
}
