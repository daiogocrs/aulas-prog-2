#include "empregado.hpp"

Empregado::Empregado(string nome, float salario)
{
    m_nome = nome;
    m_salario = salario;
}

string Empregado::GetNome()
{
    return m_nome;
}

float Empregado::GetSalario()
{
    return m_salario;
}

Gerente::Gerente(string nome, float salario, string depto, float bonus, size_t dependentes)
{
    //tem jeito melhor de fazer isso
    m_nome = nome;
    m_salario = salario;

    m_depto = depto;
    m_bonus = bonus;
    m_dependentes = dependentes;
}

float Gerente::GetSalario()
{
    return m_salario + m_bonus + m_dependentes*300;
}

Vendedor::Vendedor(string nome, float salario, float percCom)
{
    //tem jeito melhor de fazer isso
    m_nome = nome;
    m_salario = salario;

    m_percComissao = percCom;
}

void Vendedor::LancarVenda(string produto, float valor)
{
    pair<string, float> venda;
    venda.first = produto;
    venda.second = valor;
    m_vendas.push_back(venda);
}

float Vendedor::GetSalario()
{
    float totalVendasVendedor=0;

    for(size_t i=0; i<m_vendas.size(); i++)
        totalVendasVendedor+=m_vendas[i].second;

    return m_salario + totalVendasVendedor*m_percComissao;
}

















