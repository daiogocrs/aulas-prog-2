#include "cartao.hpp"
#include <vector>

int main()
{
    vector<CartaoWeb*> spammer;

    spammer.push_back(new Aniversario("Antonio Carlos", "a.sobieranski@ufsc.br"));

    Aniversario* c2 = new Aniversario("fulano", "email");
    spammer.push_back(c2);

    spammer.push_back(new Namoro("Maria de Souza", "maria@gmail.com"));

    spammer.push_back(new Natal("Pedro Pereira", "pedro@gmail.com"));

    spammer.push_back(new Divida("Jim Lau", "jim.lau@ufsc.br"));

    for(size_t i=0; i<spammer.size(); i++)
    {
        spammer[i]->CriarMensagem(); //late biding  - dinamico
        cout << spammer[i]->GetMessage() << endl;   //early binding - estatico
    }

    return 0;
};
