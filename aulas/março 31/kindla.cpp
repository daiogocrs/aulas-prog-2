#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

bool LoadEbookList(string path, vector<string> &pathList);
bool LoadEbookContent(string path, string &ebookContent);

int main()
{
    vector<string> ebooksPaths;
    char option;

    //mostrar menu de opcoes
    while(true)
    {
    cout << "KINDLA - Sistema de leitura de eBook" << endl;
    cout << "Selecione uma opcao abaixo: " << endl;
    cout << "1. Mostrar eBooks Disponiveis" << endl;
    cout << "2. Ler um eBook (selecionar por indice)" << endl;
    cout << "3. Pesquisar" << endl;
    cout << "4. Alterar Texto" << endl;
    cout << "5. Sair do Sistema" << endl;

    if(option == '1')
    {
        //lendo arquivo geral de ebooks
        vector<string> ebooksPaths;
        if(!LoadEbookList("ebooks.txt", ebooksPaths))
        {
            cout << "Error on ebooks.txt file" << endl;
            return 1;
        }

        //imprimir arquivo geral de ebooks
        for(int i=0; i<ebooksPaths.size(); i++)
        cout << ebooksPaths[i] << endl;
    }

    if(option == '2')
    {
        //ler um ebooks ESPECIFICO para leitura
        string content;
        if(!LoadEbookContent(ebooksPaths[1], content))
        {
            cout << "Error, ebook " << ebooksPaths[1] << " not found" << endl;
            return 2;
        }

        //imprimindo o ebook para leitura
        cout << "Ebook: " << ebooksPaths[1] << " -> " << content << endl;
    }

    if(option == '3')
    {
        vector<string> ebooksPaths;
        if(!LoadEbookList("ebooks.txt", ebooksPaths))
        {
            cout << "Error on ebooks.txt file" << endl;
            return 1;
        }

        string palavraChave;
        cout << "Digite a palavra/frase que deseja buscar: ";
        cin.ignore();
        getline(cin, palavraChave);

        bool encontrado = false;

        for(int i=0; i<ebooksPaths.size(); i++)
        {
            string content;
            if(LoadEbookContent(ebooksPaths[i], content))
            {
                if(content.find(palavraChave) != string::npos)
                {
                    cout << "Palavra encontrada no ebook: " << ebooksPaths[i] << endl;
                    encontrado = true;
                }
            }
        }

        if(!encontrado)
        {
            cout << "Palavra nao encontrada em nenhum ebook." << endl;
        }
    }


    if(option == '4')
    {
        
    }

    if(option == '5')
    {
        break;
    }

    }

    return 0;
}

bool LoadEbookList(string path, vector<string> &pathList)
{
    ifstream filereader;
    filereader.open(path);  //path.c_str()
    if(!filereader.is_open())
        return false;

    string tmp;
    while(getline(filereader, tmp))
    {
        pathList.push_back(tmp);
    }

    return true;
}

bool LoadEbookContent(string path, string &ebookContent)
{
    ifstream filereader;
    filereader.open(path);  //path.c_str()
    if(!filereader.is_open())
        return false;

    string tmp;
    while(getline(filereader, tmp))
    {
        ebookContent += tmp + '\n';
    }

    return true;
}