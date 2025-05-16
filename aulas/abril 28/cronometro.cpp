#include "cronometro.hpp"

Cronometro::Cronometro(int valor)
{
    m_valor = new int;
    *m_valor = valor;

    //ou
    //m_valor = new int(valor);

    cout << "Inicializando cronometro para: " << *m_valor << endl;
}

Cronometro::~Cronometro()
{
    cout << "Cronometro encerrado, desalocando dados do objeto" << endl;

    //Porque desalocar memoria no destrutor ?
    //evitar vazamento de memoria apos a execucao do programa
    //valgrind --leak-check=full ./exe
    delete m_valor;
}

void Cronometro::Decrementar()
{
    //*(m_valor)--;
    *m_valor = *m_valor - 1;
    cout << "Valor atual: " << *m_valor << endl;
}

int Cronometro::GetValor()
{
    return *m_valor;
}
