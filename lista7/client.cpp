#include "client.hpp"
#include <sstream>


Client::Client(string name,string address,string job,float income)
{
    m_name = name;
    m_address = address;
    m_job = job;
    m_income = income;
}

string Client::GetInformation()
{
    stringstream stt;
    stt << "Client name: " << m_name << " Job: " << m_job << " Income: " << m_income;

    return stt.str();
}

void Client::update(string name,string address,string job,float income)
{
    m_name = name;
    m_address = address;
    m_job = job;
    m_income = income;
}
