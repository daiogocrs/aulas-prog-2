#ifndef CARTAO_WEB_HPP
#define CARTAO_WEB_HPP

#include <iostream>
#include <sstream>

using namespace std;

class CartaoWeb
{
protected:
    string m_dest, m_email;
    string m_message;

public:
    CartaoWeb(string dest, string email) : m_dest(dest), m_email(email) {};

    virtual void CriarMensagem() {};
    string GetMessage() {
        return m_message;
    }
    //xdotool
};

class Aniversario : public CartaoWeb
{
public:
    Aniversario(string dest, string email) : CartaoWeb(dest,email) {};

    void CriarMensagem() {
        stringstream sst;
        sst << "Querido(a) " << m_dest << ". Nesta data especial, do seu aniversario, gostariamos de desejar as mais sinceras....." << endl;
        m_message = sst.str();
    };
};

class Namoro : public CartaoWeb
{
public:
    Namoro(string dest, string email) : CartaoWeb(dest,email) {};

    void CriarMensagem() {
        stringstream sst;
        sst << "Amor da minha vida, " << m_dest << ". Gostaria que voce soubesse que desde a primeira vez que nos encontramos, rolou algo especial e......" << endl;
        m_message = sst.str();
    };
};

class Natal : public CartaoWeb
{
public:
    Natal(string dest, string email) : CartaoWeb(dest,email) {};

    void CriarMensagem() {
        stringstream sst;
        sst << "Querido " << m_dest << ". Que nesta data as esperanças se renovem e......" << endl;
        m_message = sst.str();
    };
};

class Divida : public CartaoWeb
{
public:
    Divida(string dest, string email) : CartaoWeb(dest,email) {};

    void CriarMensagem() {
        stringstream sst;
        sst << "Prezado Sr(a) " << m_dest << ". Consta que em nossos sistemas se encontra em aberto a divida. Favor entrar em contato com a loja para regularizacao da sua situacao." << endl;
        m_message = sst.str();
    };
};


#endif
