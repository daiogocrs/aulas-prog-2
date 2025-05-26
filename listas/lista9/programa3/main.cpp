#include "cliente.hpp"
#include "conta.hpp"
#include <vector>

int main()
{
    vector<Cliente> listaClientes;

    listaClientes.push_back(Cliente("Joao da Silva", "Contador", 12000));

    listaClientes.push_back(Cliente("Maria de Oliveira", "Vendedora", 7000));

    listaClientes.push_back(Cliente("Ricardo Amaral", "Motorista", 8000));

    listaClientes.push_back(Cliente("Pedro Pimenta", "Bancario", 25000));

    ContaCorrente c1(&listaClientes[0], 10000);
    ContaCorrente c2(&listaClientes[1], 10000);
    ContaCorrente c3(&listaClientes[0], 20000);
    ContaEspecial c4(&listaClientes[2], 0, 10000);
    ContaEspecial c5(&listaClientes[3]);

    //TODO ContaPlatinum c6(.....);
    //TODO ContaPlatinum c7(.....);
    //TODO ContaPlatinum c8(.....);

    c1.Sacar(11000);
    c4.Sacar(11000);

    //TODO
    //C4 -= 10000; //FUNCIONA ?
    //c4.Transferir(&c1, 10001);
    //c1.Transferir(&c4, 900);


    return 0;
}
