#ifndef EMPREGADO_HPP
#define EMPREGADO_HPP

#include <iostream>
#include <vector>

using namespace std;

class Empregado
{
protected:
    string m_nome;
    float m_salario;

public:
    Empregado(){};
    Empregado(string nome, float salario);
    string GetNome();
    float GetSalario();
};


class Gerente : public Empregado
{
protected:
    string m_depto;
    size_t m_dependentes; //somente o gerente tem esse beneficio, soma-se ao salario 300 por dependente
    float m_bonus; //bonus de produtividade da filial

public:
    Gerente(){};
    Gerente(string nome, float salario, string depto, float bonus=500, size_t dependentes=0);
    float GetSalario();
};


class Vendedor : public Empregado
{
protected:
    float m_percComissao; //em percentual
    vector< pair < string, float >> m_vendas;

public:
    Vendedor(){};
    Vendedor(string nome, float salario, float percCom=0.025);
    void LancarVenda(string produto, float valor);
    float GetSalario();
};

#endif
