#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <utility>

using namespace std;

vector<pair<char, char>> gerarTabelaROT13() {
    vector<pair<char, char>> tabela;

    for (char c = 'A'; c <= 'Z'; c++) {
        char substituto = ((c - 'A' + 13) % 26) + 'A';
        tabela.push_back(make_pair(c, substituto));
    }

    for (char c = 'a'; c <= 'z'; c++) {
        char substituto = ((c - 'a' + 13) % 26) + 'a';
        tabela.push_back(make_pair(c, substituto));
    }

    return tabela;
}

char substituiComTabela(char c, const vector<pair<char, char>>& tabela) {
    for (const auto& par : tabela) {
        if (par.first == c) {
            return par.second;
        }
    }
    return c;
}

string aplicaROT13ComTabela(const string& frase, const vector<pair<char, char>>& tabela) {
    string resultado = "";
    for (char c : frase) {
        resultado += substituiComTabela(c, tabela);
    }
    return resultado;
}

int main() {
    vector<pair<char, char>> tabelaROT13 = gerarTabelaROT13();

    cout << "Tabela de Substituicao - Regra ROT13" << endl;
    cout << setw(10) << "Original" << setw(15) << "Substituto" << endl;
    cout << "--------------------------" << endl;

    for (const auto& par : tabelaROT13) {
        if (isupper(par.first))
            cout << setw(10) << par.first << setw(15) << par.second << endl;
    }

    cout << "\nDigite uma frase para criptografar: ";
    string frase;
    getline(cin, frase);

    string criptografada = aplicaROT13ComTabela(frase, tabelaROT13);
    cout << "\nFrase Criptografada: " << criptografada << endl;

    string descriptografada = aplicaROT13ComTabela(criptografada, tabelaROT13);
    cout << "Frase Descriptografada: " << descriptografada << endl;

    return 0;
}
