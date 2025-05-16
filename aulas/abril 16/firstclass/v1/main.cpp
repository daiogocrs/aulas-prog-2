#include <iostream>
#include <vector>

using namespace std;

class Person
{
//atributos
private:
    string nome, endereco, profissao;
    float salario;

//metodos
public:
    //metodos de acesso Leitura (Get), Escrita (Set)
    string GetNome()
    {
        return nome;
    }
    void SetNome(string n)
    {
        nome = n;
    }
    string GetEndereco()
    {
        return endereco;
    }
    void SetEndereco(string e)
    {
        endereco = e;
    }
    string GetProfissao()
    {
        return profissao;
    }
    void SetProfissao(string p)
    {
        profissao = p;
    }
    float GetSalario()
    {
        return salario;
    }
    void SetSalario(float s)
    {
        salario = s;
    }
};

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