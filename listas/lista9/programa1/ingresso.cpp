#include "ingresso.hpp"
#include <sstream>

Ingresso::Ingresso()
{
}
Ingresso::Ingresso(string movie, string session, float cost)
{
    m_movie=movie;
    m_session=session;
    m_cost=cost;
}
string Ingresso::GetInfo()
{
    stringstream nossastring;
    nossastring << "Nome do Filme: " << m_movie << " Sessao: " << m_session << " Valor do Ingresso: " << m_cost;

    return nossastring.str();
}
