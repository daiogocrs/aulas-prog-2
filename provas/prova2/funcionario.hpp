#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP

#include <iostream>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

class Funcionario
{
protected:
    string nome;
    float salario, bonus, salarioBruto, descontos, salarioLiquido;
    int dependentes;

public:
    Funcionario(string n, float s, int d) : nome(n), salario(s), dependentes(d) {}
    virtual void CalcularSalario() = 0;
    virtual void CalcularDescontos()
    {
        if (salarioBruto > 20000)
            descontos = salarioBruto * 0.22;
        else if (salarioBruto > 10000)
            descontos = salarioBruto * 0.14;
        else if (salarioBruto > 5000)
            descontos = salarioBruto * 0.08;
        else
            descontos = salarioBruto * 0.04;
    }
    virtual void SetVendas(float) {}
    void SetBonus(float b)
    {
        bonus += b;
    }
    string ImprimirFolhaPagamento()
    {
        stringstream out;
        out << "Funcionario: " << nome << 
        " Salario bruto: " << salarioBruto << 
        " Descontos: " << descontos  << 
        " Salario liquido: " << salarioLiquido << endl;
        return out.str();
    }
    virtual ~Funcionario() {}
};

class Gerente : public Funcionario
{
public:
    Gerente(string n, float s, int d) : Funcionario(n, s, d) {}
    void CalcularSalario() override
    {
        salarioBruto = salario + bonus + (dependentes * 500);
        CalcularDescontos();
        salarioLiquido = salarioBruto - descontos;
    }
};

class Crediario : public Funcionario
{
public:
    Crediario(string n, float s, int d) : Funcionario(n, s, d) {}
    void CalcularSalario() override
    {
        salarioBruto = salario + bonus + (dependentes * 300);
        CalcularDescontos();
        salarioLiquido = salarioBruto - descontos;
    }
};

class Vendedor : public Funcionario
{
public:
    Vendedor(string n, float s, int d) : Funcionario(n, s, d) {}
    void SetVendas(float v)
    {
        salario += v * 0.035;
    }
    void CalcularSalario() override
    {
        salarioBruto = salario + bonus + (dependentes * 300);
        CalcularDescontos();
        salarioLiquido = salarioBruto - descontos;
    }
};

#endif