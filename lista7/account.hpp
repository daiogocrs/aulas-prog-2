#ifndef ACCOUNTS_HPP
#define ACCOUNTS_HPP

#include "client.hpp"

class ContaCorrente
{
private:
    Client *m_client;
    float m_balance;

public:
    //constructors and destructor
    ContaCorrente(Client *client, float balance=0);
    ~ContaCorrente();

    //getters and setters
    void UpdateClient(Client *client);
    bool Deposit(float value);
    bool Withdraw(float value);
    bool Transfer(ContaCorrente &account, float value);

    string GetClientInformation();
    float GetBalance();
};

#endif
