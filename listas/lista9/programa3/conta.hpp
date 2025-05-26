#ifndef CONTA_HPP
#define CONTA_HPP

#include "cliente.hpp"

class ContaCorrente
{
protected:
    Cliente *m_titular;
    float m_saldo;

public:
    ContaCorrente() {};

    ContaCorrente(Cliente *cliente, float saldo=0) : m_titular(cliente), m_saldo(saldo) {
        cout << "ola, construtor ContaCorrente foi chamado" << endl;
    };

    void Depositar(float v);
    void operator += (float v);

    bool Sacar(float v);
    bool operator -= (float v);

    //transferencia convencional
    bool Transferir(ContaCorrente &dest, float v);

};

class ContaEspecial : public ContaCorrente
{
protected:
    float m_limite;

public:
    ContaEspecial() {};

    //#1
    //ContaEspecial(Cliente *cliente, float saldo=0, float limite=1000) :
    //    ContaCorrente(cliente, saldo), m_limite(limite) {}

    //#2
    ContaEspecial(Cliente *cliente, float saldo=0, float limite=1000);

    bool Sacar(float v);

};

class ContaPlatinum : public ContaEspecial
{
protected:
    float m_milhas;

public:
    ContaPlatinum() {};

    //#1
    //ContaPlatinum(Cliente *cliente, float saldo=0, float limite=1000, float //milhas=0) : ContaEspecial(cliente, saldo, limite), m_milhas(milhas) {};

    //#2
    ContaPlatinum(Cliente *cliente, float saldo=0, float limite=1000, float milhas=0);
};

#endif
