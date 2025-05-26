#ifndef CARTAO_WEB_HPP
#define CARTAO_WEB_HPP

#include <iostream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

class CartaoWeb
{
protected:
    string m_dest, m_email;
    string m_msg;

public:
    CartaoWeb(string dest, string email) : m_dest(dest), m_email(email) {};
    virtual void CriarMensagem() {};
    string GetMessage() { return m_msg; };

    // xdotool
};

class Aniversario : public CartaoWeb
{
public:
    Aniversario(string dest, string email) : CartaoWeb(dest, email) {};
    void CriarMensagem() 
    { 
        stringstream sst;
        sst << "Ola " << m_dest << ", feliz aniversario!" << endl;
        m_msg = sst.str();
    };
};

class Natal : public CartaoWeb
{
public:
    Natal(string dest, string email) : CartaoWeb(dest, email) {};
    void CriarMensagem() 
    {
        stringstream sst;
        sst << "Ola " << m_dest << ", feliz natal!" << endl;
        m_msg = sst.str();
    }
};

class AnoNovo : public CartaoWeb
{
public:
    AnoNovo(string dest, string email) : CartaoWeb(dest, email) {};
    void CriarMensagem() 
    {
        stringstream sst;
        sst << "Ola " << m_dest << ", feliz ano novo!" << endl;
        m_msg = sst.str();
    }
};

class Namoro : public CartaoWeb
{
public:
    Namoro(string dest, string email) : CartaoWeb(dest, email) {};
    void CriarMensagem() 
    {
        stringstream sst;
        sst << "Ola " << m_dest << ", como esta meu xuxu hj?" << endl;
        m_msg = sst.str();
    }
};

#endif