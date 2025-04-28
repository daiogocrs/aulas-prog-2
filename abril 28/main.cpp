#include "cronometro.hpp"

int main()
{
    Cronometro p1(25);

    while(p1.GetValor() > 0)
    {
        p1.Decrementar();
    }
    cout << "Contagem encerrada" << endl;

    return 0;
}
