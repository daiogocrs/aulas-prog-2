#include <iostream>
#include <vector>

using namespace std;

struct RegistroAgenda
{
    string nome;
    string telefone;
};

bool NovoRegistro(vector<RegistroAgenda> &A);
bool ImprimirTodos(const vector<RegistroAgenda> &A);
bool RemoverRegistroIndice(vector<RegistroAgenda> &A);
bool FindSubstrings(const vector<RegistroAgenda> &A);


int main()
{
    vector<RegistroAgenda> MinhaAgenda;

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
            bool status = NovoRegistro(MinhaAgenda);
            if(status == true)
            {
                cout << "Novo registro inserido com sucesso" << endl;
            }
            else
                cout << "Erro, limite de registros atingido" << endl;

            continue;
        }

        if(option == '2')
        {
            bool status = RemoverRegistroIndice(MinhaAgenda);
            if(status == false)
            {
                cout << "Erro, indice invalido" << endl;
            }
            continue;
        }
        if(option == '3')
        {
            bool status = FindSubstrings(MinhaAgenda);
            if(status == false)
            {
                cout << "Substring nao localizada na agenda" << endl;
            }
            continue;
        }
        if(option == '4')
        {
            ImprimirTodos(MinhaAgenda);
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

bool NovoRegistro(vector<RegistroAgenda> &A)
{
    string tmp1, tmp2;

    cout << "Digite o nome da pessoa: ";
    getline(cin, tmp1);

    cout << "Digite o telefone da pessoa: ";
    getline(cin, tmp2);

    RegistroAgenda novoAgenda;
    novoAgenda.nome = tmp1;
    novoAgenda.telefone = tmp2;

    A.push_back(novoAgenda);

    return true;
}

bool ImprimirTodos(const vector<RegistroAgenda> &A)
{
    cout << "Relatorio de Registros da Agenda de Contatos" << endl;
    for(unsigned int i=0; i<A.size(); i++)
    {
        cout << "Nome: " << A[i].nome << endl;
        cout << "Telefone: " << A[i].telefone << endl << endl;
    }

    return true;
}

bool RemoverRegistroIndice(vector<RegistroAgenda> &A)
{
    cout << "Entre com o valor de indice para remover de 0 a " << A.size()-1 << endl;
    unsigned int index;
    cin >> index;

    if(index >= A.size())
    {
        return false;
    }

    A.erase(A.begin()+index);

    return true;
}

bool FindSubstrings(const vector<RegistroAgenda> &A)
{
    string busca;
    cout << "Entre com uma substring para buscar: ";

    cin.ignore();
    getline(cin, busca);

    bool encontrou = false;
    for(unsigned int i=0; i<A.size(); i++)
    {
        size_t pos = A[i].nome.find(busca);
        if(pos < A[i].nome.length())
        {
            cout << "Substring " << busca << " encontrada na string: " << A[i].nome << endl;
            encontrou = true;
        }
    }
    return encontrou;
}