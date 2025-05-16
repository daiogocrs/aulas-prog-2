#include <iostream>
#include <limits>

using namespace std;

int main()
{
    float A[10];
    //float *A = new float[10];

    //leitura do inputs em ponto flutuante
    cout << "Entre com 10 valores em sequencia:" << endl;
    for(int i=0; i<10; i++)
    {
        cin >> A[i];
    }

    //min, max, average
    float min=numeric_limits<float>::max();
    float max=numeric_limits<float>::min();
    float avg=0;
    //TODO: usar limites numericos do C++ (numerical limits)

    cout << "Limite numerico float: " << max << endl;

    for(int i=0; i<10; i++)
    {
        if(A[i] < min) min=A[i];
        if(A[i] > max) max=A[i];
        avg+=A[i];
    }
    avg=avg/10;

    cout << "Valor min: " << min << " Valor max: " << max << " Avg: " << avg << endl;

    return 0;
}