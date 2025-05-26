#include "cartao.hpp"

int main() 
{
    vector<CartaoWeb*> spammer;

    spammer.push_back(new Aniversario("Joao", "V7oRt@example.com"));
    spammer.push_back(new Natal("Maria", "V7oRt@example.com"));
    spammer.push_back(new AnoNovo("Pedro", "V7oRt@example.com"));
    spammer.push_back(new Namoro("Japinha do Hospício", "V7oRt@example.com"));

    for (size_t i = 0; i < spammer.size(); i++)
    {
        spammer[i]->CriarMensagem();
        spammer[i]->GetMessage();
    }

    return 0;
}
