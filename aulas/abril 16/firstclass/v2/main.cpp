#include <iostream>
#include <vector>

using namespace std;

class Person
{
//atributos
private:
    string m_nome, m_endereco, m_profissao;
    float m_salario;

//metodos
public:
    //metodos de acesso Leitura (Get), Escrita (Set)
    string GetNome()
    {
        return m_nome;
    }
    void SetNome(string nome)
    {
        m_nome = nome;
    }
    string GetEndereco()
    {
        return m_endereco;
    }
    void SetEndereco(string endereco)
    {
        m_endereco = endereco;
    }
    string GetProfissao()
    {
        return m_profissao;
    }
    void SetProfissao(string profissao)
    {
        m_profissao = profissao;
    }
    float GetSalario()
    {
        return m_salario;
    }
    void SetSalario(float salario)
    {
       m_salario = salario;
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