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
