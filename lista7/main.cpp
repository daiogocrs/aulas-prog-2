#include "client.hpp"
#include <vector>

using namespace std;

Client Cadastrar();

int main()
{
    vector<Client> clientes;

    while(true)
    {
        cout << "1.Cadastrar Cliente" << endl;
        cout << "2.Atualizar Cliente" << endl;
        cout << "3.Remover Cliente" << endl;
        cout << "4.Pesquisar Cliente por Substring (* todos)" << endl;

        cout << "5.Criar uma Conta" << endl;
        cout << "0.Sair" << endl;

        char option;
        cin >> option;

        if(option == '1')
        {
            Client novo = Cadastrar();
            clientes.push_back(novo);
            continue;
        }
        if(option == '5')
        {
        }
        if(option == '0')
            break;
    }


    return 0;
}

Client Cadastrar()
{
    cout << "Entre em sequencia: Nome, Endereco, Profissao, Salario: ";
    string tnome, tendereco, tprof;
    float tsalario;
    cin.ignore();
    getline(cin, tnome);
    getline(cin, tendereco);
    getline(cin, tprof);
    cin >> tsalario;

    Client novo(tnome,tendereco, tprof, tsalario);
    return novo;
}
