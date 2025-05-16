#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

bool LoadEbookList(string path, vector<string> &pathList);
bool LoadEbookContent(string path, string &ebookContent);

int main()
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

    //imprimir um ebooks ESPECIFICO para leitura
    string content;
    if(!LoadEbookContent(ebooksPaths[1], content))
    {
        cout << "Error, ebook " << ebooksPaths[1] << " not found" << endl;
        return 2;
    }

    //imprimindo o ebook para leitura
    cout << "Ebook: " << ebooksPaths[1] << " -> " << content << endl;

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