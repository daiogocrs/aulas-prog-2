#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream fileptr;
    fileptr.open("saida.txt");
    string texto;

    if(fileptr.is_open())
    {
        //getline(std::cin);
        getline(fileptr,texto);

        cout << "Texto lido do arquivo: " << texto << endl;
    }
    else
    {
        cout << "Erro de tentativa de leitura" << endl;
    }

    fileptr.close();

    return 0;
}