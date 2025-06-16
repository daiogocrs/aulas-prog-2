#ifndef CLIENTE_HPP
#define CLIENTE_HPP

#include <iostream>

using namespace std;

class Cliente
{
private:
    string m_nome, m_profissao;
    float m_salario;

public:
    Cliente() {};

    Cliente(string n, string p, float s) : m_nome(n), m_profissao(p), m_salario(s) {};

    //atualizar dados de profissao e salario de um cliente
    void AtualizarDados(string p, float s);

    //retorna o nome do cliente
    string GetNome() const {
        return m_nome;
    }
    //retorna a profissao do cliente
    string GetProfissao() const {
        return m_profissao;
    }
    //retorna o salario do cliente
    float GetSalario() const {
        return m_salario;
    }

};
//doxygen


#endif
