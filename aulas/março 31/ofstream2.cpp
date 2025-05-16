#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream fp;
    fp.open("saida.txt");
    if(fp.is_open())
    {
        fp << "Ola mundo, hoje o dia foi bastante abafado, e estamos sendo devorados por mosquitos." << endl;
    }
    else
    {
        cout << "Erro de abertura de arquivo" << endl;
        return 1;
    }
    fp.close();
    return 0;
}