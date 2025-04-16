#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream fileptr;
    fileptr.open("saida.txt");

    string text;
    cout << "Entre com um texto para salvar no arquivo: ";
    getline(cin, text);

    if(fileptr.is_open()) //if(fileptr.good())
    {
        fileptr << text << endl;
    }
    else
    {
        cout << "error to open file" << endl;
        return 1;
    }
    fileptr.close();
    return 0;
}