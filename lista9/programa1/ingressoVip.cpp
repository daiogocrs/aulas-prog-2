#include "ingressoVip.hpp"
#include <sstream>

IngressoVip::IngressoVip()
{
}

IngressoVip::IngressoVip(string movie, string session, float cost, float addcos, string food, bool specialseat)
{
    //nao eh a melhor forma de fazer, pois os atributos da superclasse, devem ser inicializado com construtor
    m_movie = movie;
    m_session = session;
    m_cost = cost;

    m_addcost = addcos;
    m_food = food;
    m_specialSeat = specialseat;
}

string IngressoVip::GetInfo()
{
    stringstream nossastring;
    nossastring << "Nome do Filme: " << m_movie << " Sessao: " << m_session << " Valor do Ingresso: " << m_cost << " Addcost: " << m_addcost << "  Food: " << m_food << "  Special Seat ?: " << m_specialSeat;

    return nossastring.str();
}
