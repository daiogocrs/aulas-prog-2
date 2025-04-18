#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <utility>
#include <fstream>

using namespace std;

vector<pair<char, char>> criarTabela() {
    int i;
    char original, codificado;

    vector<pair<char, char>> tabela;

    for (i = 32; i <= 126; i++) { 
        original = (char)i;
        codificado = (char)((i - 32 + 5) % 95 + 32);
        tabela.push_back(make_pair(original, codificado));
    }

    return tabela;
}

void salvarTabelaEmArquivo(const vector<pair<char, char>>& tabela) {
    ofstream arquivo("tabela_codificacao.txt");

    if (arquivo.is_open()) {
        arquivo << "Original -> Codificado\n";
        for (const auto& par : tabela) {
            arquivo << par.first << " -> " << par.second << "\n";
        }
        arquivo.close();
        cout << "\nTabela de codificação salva em 'tabela_codificacao.txt'\n";
    } else {
        cout << "Erro ao abrir o arquivo para salvar a tabela!\n";
    }
}

string criptografar(const string& texto, const vector<pair<char, char>>& tabela) {
    string resultado = "";
    bool substituido = false;

    for (char c : texto) {
        for (auto& par : tabela) {
            if (c == par.first) {
                resultado += par.second;
                substituido = true;
                break;
            }
        }
        if (!substituido) resultado += c; 
    }
    return resultado;
}

string descriptografar(const string& texto, const vector<pair<char, char>>& tabela) {
    string resultado = "";
    bool substituido = false;
    char c;

    for (char c : texto) {
        for (auto& par : tabela) {
            if (c == par.second) {
                resultado += par.first;
                substituido = true;
                break;
            }
        }
        if (!substituido) resultado += c; 
    }
    return resultado;
}

int main() {
    vector<pair<char, char>> tabela = criarTabela();

    salvarTabelaEmArquivo(tabela);

    string texto;
    cout << "\nDigite um texto para criptografar: ";
    getline(cin, texto);

    string codificado = criptografar(texto, tabela);
    cout << "\nTexto Criptografado: " << codificado << endl;

    string decodificado = descriptografar(codificado, tabela);
    cout << "Texto Decodificado: " << decodificado << endl;

    return 0;
}
