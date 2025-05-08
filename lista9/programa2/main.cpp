#include "empregado.hpp"

int main()
{
    Vendedor e1("Maria da Silva", 4500, 0.03);
    Vendedor e2("Pedro Pereira", 3500, 0.02);
    Vendedor e3("Mario de Oliveira", 3200, 0.025);
    Vendedor e4("Alaciades Pedroso", 4000, 0.03);
    Gerente  e5("Arlindo Ferreira", 15000, "Filial Ararangua", 2500, 8);

    //somente pedro vendeu
    e2.LancarVenda("Refrigerador", 12000);
    e2.LancarVenda("TV 70", 20000);
    e2.LancarVenda("Computador", 30000);

    e4.LancarVenda("Carro", 100000);

    //imprimindo a folha de pagamento
    cout << e1.GetNome() << " Remuneracao: " << e1.GetSalario() << endl;

    cout << e2.GetNome() << " Remuneracao: " << e2.GetSalario() << endl;

    cout << e3.GetNome() << " Remuneracao: " << e3.GetSalario() << endl;

    cout << e4.GetNome() << " Remuneracao: " << e4.GetSalario() << endl;

    cout << e5.GetNome() << " Remuneracao: " << e5.GetSalario() << endl;

    return 0;
}
