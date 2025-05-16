#ifndef CLIENT_HPP
#define CLIENT_HPP

#include <iostream>

using namespace std;

class Client
{
private:
    string m_name;
    string m_address;
    string m_job;
    float m_income;

public:
    Client(string name,string address,string job,float income);
    void update(string name,string address,string job,float income);
    string GetInformation();
};

#endif
