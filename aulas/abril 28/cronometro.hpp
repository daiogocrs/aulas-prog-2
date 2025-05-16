//guardas de inclusao
#ifndef CRONOMETRO_HPP
#define CRONOMETRO_HPP

#include <iostream>

using namespace std;

class Cronometro
{
private:
    int *m_valor;

public:
    Cronometro(int valor);
    ~Cronometro();

    void Decrementar();
    int GetValor();
};


#endif
