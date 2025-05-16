#include <iostream>
#include <limits>

using namespace std;

int main(int argc, char* argv[])
{
    //unsigned int qtde=argc;
    size_t qtde=atoi(argv[1]);

    float A[qtde];
    //float *A = new float[10];

    //leitura do inputs em ponto flutuante
    cout << "Entre com " << qtde << " valores em sequencia:" << endl;
    for(size_t i=0; i<qtde; i++)
    {
        cin >> A[i];
    }

    //min, max, average
    float min=numeric_limits<float>::max();
    float max=numeric_limits<float>::min();
    float avg=0;
    //TODO: usar limites numericos do C++ (numerical limits)

    cout << "Limite numerico float: " << max << endl;

    for(size_t i=0; i<qtde; i++)
    {
        if(A[i] < min) min=A[i];
        if(A[i] > max) max=A[i];
        avg+=A[i];
    }
    avg=avg/qtde;

    cout << "Valor min: " << min << " Valor max: " << max << " Avg: " << avg << endl;

    return 0;
}