#include <iostream>

using namespace std;

class Ingresso
{
protected:
    string m_movie, m_session;
    float m_cost;
public:
    Ingresso();
    Ingresso(string movie, string session, float cost);
    string GetInfo();
};
