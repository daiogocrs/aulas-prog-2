#include "ingresso.hpp"

class IngressoVip : public Ingresso
{
protected:
    float m_addcost;
    string m_food;
    bool m_specialSeat;
public:
    IngressoVip();
    IngressoVip(string movie, string session, float cost, float addcos, string food, bool specialseat);

    string GetInfo();
};
