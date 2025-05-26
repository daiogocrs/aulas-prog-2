#include "conta.hpp"

void ContaCorrente::Depositar(float v)
{
    m_saldo += v;
}

void ContaCorrente::operator +=(float v)
{
    Depositar(v);
}

bool ContaCorrente::Sacar(float v)
{
    if(m_saldo-v >= 0)
    {
        m_saldo = m_saldo-v;
        return true;
    }
    else
    {
        return false;
    }
}

bool ContaEspecial::Sacar(float v)
{
    if(m_saldo-v >= -m_limite)
    {
        m_saldo = m_saldo-v;
        return true;
    }
    else
    {
        return false;
    }
}

bool ContaCorrente::operator -=(float v)
{
    return Sacar(v);
}

bool ContaCorrente::Transferir(ContaCorrente &dest, float v)
{
    if(m_saldo-v >= 0)
    {
        m_saldo=m_saldo-v;
        //dest += v;
        dest.Depositar(v);
        return true;
    }
    return false;
}

//#2
ContaEspecial::ContaEspecial(Cliente *cliente, float saldo, float limite)
{
    m_titular = cliente;
    m_saldo = saldo;
    m_limite = limite;
}


//#2
ContaPlatinum::ContaPlatinum(Cliente *cliente, float saldo, float limite, float milhas)
{
    m_titular = cliente;
    m_saldo = saldo;
    m_limite = limite;
    m_milhas = milhas;
}
