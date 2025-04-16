#include <iostream>

int main()
{
    int opcao;
    std::cout << "Entre com uma opcao: " << std::endl;
    std::cout << "1.Abrir Arquivo" << std::endl;
    std::cout << "2.Imprimir Arquivo" << std::endl;
    std::cout << "0.Sair" << std::endl;

    std::cin >> opcao;

    return opcao;
}