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
