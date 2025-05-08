#include "account.hpp"

ContaCorrente::ContaCorrente(Client *client, float balance)
{
    m_client = client;
    m_balance = balance;
}

ContaCorrente::~ContaCorrente()
{

}

void ContaCorrente::UpdateClient(Client *client)
{
    m_client = client;
}

bool ContaCorrente::Deposit(float value)
{
    m_balance += value;
    return true;
}

bool ContaCorrente::Withdraw(float value)
{
    if(m_balance-value >= 0)
    {
        m_balance -= value;
        return true;
    }
    return false;
}

bool ContaCorrente::Transfer(ContaCorrente &account, float value)
{
    if(m_balance-value >= 0)
    {
        m_balance -= value;
        account.Deposit(value);
        return true;
    }
    return false;
}

float ContaCorrente::GetBalance()
{
    return m_balance;
}

string ContaCorrente::GetClientInformation()
{
    return m_client->GetInformation();
}
