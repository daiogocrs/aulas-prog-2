#include <iostream>

using namespace std;

class Person
{
    //atributos
private:
    string m_nome, m_endereco, m_profissao;
    float m_salario;

    //metodos
public:
    //construtores e destrutores
    Person();
    Person(string nome, string endereco, string profissao, float salario);


    //metodos de acesso Leitura (Get), Escrita (Set)
    string GetNome();
    void SetNome(string nome);
    string GetEndereco();
    void SetEndereco(string endereco);
    string GetProfissao();
    void SetProfissao(string profissao);
    float GetSalario();
    void SetSalario(float salario);

};
