#include <iostream>

using namespace std;

#define NumMaxRegistros 500

struct RegistroAgenda
{
    string nome;
    string telefone;
};

bool NovoRegistro(RegistroAgenda *agenda, unsigned int NumRegistros);
bool ImprimirTodos(RegistroAgenda *agenda, unsigned int NumRegistros);
bool RemoverRegistroIndice(RegistroAgenda *agenda, unsigned int NumRegistros);
bool FindSubstrings(RegistroAgenda *agenda, unsigned int NumRegistros);


int main()
{
    RegistroAgenda MinhaAgenda[NumMaxRegistros];
    unsigned int NumRegistros = 0;


    char option;
    while(true)
    {
        cout << "Agenda de Contatos da UFxC" << endl;
        cout << "1. Inserir Registro" << endl;
        cout << "2. Remover Registro por Indice" << endl;
        cout << "3. Pesquisar Nomes por Substring" << endl;
        cout << "4. Listar Todos os Registros" << endl;
        cout << "5. Sair do Sistema" << endl;

        cout << "Digite uma das opcoes acima: " << endl;

        cin >> option;

        if(option == '1')
        {
            cin.ignore();
            bool status = NovoRegistro(MinhaAgenda, NumRegistros);
            if(status == true)
            {
                cout << "Novo registro inserido com sucesso" << endl;
                NumRegistros++;
            }
            else
                cout << "Erro, limite de registros atingido" << endl;

            continue;
        }
        if(option == '2')
        {
            bool status = RemoverRegistroIndice(MinhaAgenda, NumRegistros);
            if(status == false)
            {
                cout << "Erro, indice invalido" << endl;
            }
            NumRegistros--;
            continue;
        }
        if(option == '3')
        {
            bool status = FindSubstrings(MinhaAgenda, NumRegistros);
            if(status == false)
            {
                cout << "Substring nao localizada na agenda" << endl;
            }
            continue;
        }
        if(option == '4')
        {
            ImprimirTodos(MinhaAgenda, NumRegistros);
            continue;
        }
        if(option == '5')
        {
            break;
        }
        cout << endl;

        //cin.ignore();  //fflush
    }

    return 0;
}

bool NovoRegistro(RegistroAgenda *agenda, unsigned int NumRegistros)
{
    if(NumRegistros >= NumMaxRegistros) return false;

    string tmp1, tmp2;

    cout << "Digite o nome da pessoa: ";
    getline(cin, tmp1);

    cout << "Digite o telefone da pessoa: ";
    getline(cin, tmp2);

    agenda[NumRegistros].nome = tmp1;
    agenda[NumRegistros].telefone = tmp2;

    return true;
}

bool ImprimirTodos(RegistroAgenda *agenda, unsigned int NumRegistros)
{
    cout << "Relatorio de Registros da Agenda de Contatos" << endl;
    for(unsigned int i=0; i<NumRegistros; i++)
    {
        cout << "Nome: " << agenda[i].nome << endl;
        cout << "Telefone: " << agenda[i].telefone << endl << endl;
    }
    return true;
}

bool RemoverRegistroIndice(RegistroAgenda *agenda, unsigned int NumRegistros)
{
    cout << "Entre com o valor de indice para remover de 0 a " << NumRegistros-1 << endl;
    unsigned int index;
    cin >> index;

    if(index >= NumRegistros)
    {
        return false;
    }

    for(unsigned int i=index; i<NumRegistros-1; i++)
    {
        agenda[i].nome = agenda[i+1].nome;
        agenda[i].telefone = agenda[i+1].telefone;
    }
    agenda[NumRegistros-1].nome = "";
    agenda[NumRegistros-1].telefone = "";

    return true;
}

bool FindSubstrings(RegistroAgenda *agenda, unsigned int NumRegistros)
{
    string busca;
    cout << "Entre com uma substring para buscar: ";

    cin.ignore();
    getline(cin, busca);

    bool encontrou = false;
    for(unsigned int i=0; i<NumRegistros; i++)
    {
        size_t pos = agenda[i].nome.find(busca);
        if(pos < agenda[i].nome.length())
        {
            cout << "Substring " << busca << " encontrada na string: " << agenda[i].nome << endl;
            encontrou = true;
        }
    }
    return encontrou;
}