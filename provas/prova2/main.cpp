#include "funcionario.hpp"

using namespace std;

int main()
{
    vector<Funcionario*> qpessoal;
    qpessoal.push_back(new Gerente("Tobias Teixeira", 18000, 2)); //nome, salario base, num dependentes
    qpessoal.push_back(new Crediario("Anelise Vicente", 6200, 3));
    qpessoal.push_back(new Vendedor("Roberto Pacheco", 1900, 0));
    qpessoal.push_back(new Vendedor("Andreia Macedo", 2500, 1));
    qpessoal.push_back(new Vendedor("Pedro Silva", 2500, 0));

    //3% de comissão somados no salário bruto - somente vendedores
    qpessoal.at(4)->SetVendas(254842);
    qpessoal.at(3)->SetVendas(466890);
    qpessoal.at(2)->SetVendas(784122);

    //pagamento de bônus somados no salário bruto
    qpessoal.at(4)->SetBonus(350); //bonus por ser o funcionário feliz
    qpessoal.at(3)->SetBonus(380); //bonus por ser o fazedor de cafe da turma
    qpessoal.at(1)->SetBonus(1482432*0.0025); //Bonus: total de vendas da loja * 0.25% (crediario)
    qpessoal.at(0)->SetBonus(1482432*0.01); //Bonus: total de vendas da loja * 1.00% (gerente)

    //rodando folha de pagamento
    for(size_t i=0; i<qpessoal.size(); i++)
        qpessoal.at(i)->CalcularSalario();

    //imprimindo contra-cheques
    for(size_t i=0; i<qpessoal.size(); i++)
        cout << qpessoal.at(i)->ImprimirFolhaPagamento() << endl;

    for(size_t i=0; i<qpessoal.size(); i++)
        delete qpessoal.at(i);

    return 0;
}