#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream fileptr;
    fileptr.open("prometheus.txt");
    string texto;

    if(fileptr.is_open())
    {
        string tmp;
        while(getline(fileptr,tmp))
        {
            texto += tmp + '\n';
        }

        cout << "Texto lido do arquivo: " << texto << endl;
    }
    else
    {
        cout << "Erro de tentativa de leitura" << endl;
    }

    fileptr.close();

    return 0;
}