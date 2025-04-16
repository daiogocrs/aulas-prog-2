#include "person.hpp"

string Person::GetNome()
{
    return m_nome;
}

void Person::SetNome(string nome)
{
    m_nome = nome;
}

string Person::GetEndereco()
{
    return m_endereco;
}
void Person::SetEndereco(string endereco)
{
    m_endereco = endereco;
}
string Person::GetProfissao()
{
    return m_profissao;
}
void Person::SetProfissao(string profissao)
{
    m_profissao = profissao;
}
float Person::GetSalario()
{
    return m_salario;
}
void Person::SetSalario(float salario)
{
    m_salario = salario;
}
