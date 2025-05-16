#include "header.hpp"

Vehicle* BuscarVeiculoPorPlaca(const vector<Vehicle*>& vehicles, const string& plate);

int main()
{
    vector<Vehicle*> vehicles;
    int option;

    while (true)
    {
        cout << "\n===== MENU =====\n"
             << "1. Cadastrar Veiculo\n"
             << "2. Remover Veiculo\n"
             << "3. Adicionar uma Rota a um Veiculo\n"
             << "4. Remover uma Rota a um Veiculo\n"
             << "5. Relatorio por Veiculo (pesquisar placa)\n"
             << "6. Relatorio Geral\n"
             << "7. Pesquisar por substring (origem/destino)\n"
             << "0. Sair\n"
             << "Escolha uma opcao: ";

        cin >> option;
        cin.ignore();

        if (option == 1)
        {
            string plate, model, brand;
            float initialKM;
            cout << "Placa: ";
            getline(cin, plate);
            cout << "Modelo: ";
            getline(cin, model);
            cout << "Marca: ";
            getline(cin, brand);
            cout << "Quilometragem inicial: ";
            cin >> initialKM;
            cin.ignore();

            vehicles.push_back(new Vehicle(plate, model, brand, initialKM));
            cout << "Veiculo cadastrado com sucesso!\n";
        }
        else if (option == 2)
        {
            string plate;
            cout << "Informe a placa: ";
            getline(cin, plate);
            bool removed = false;

            for (auto it = vehicles.begin(); it != vehicles.end(); ++it)
            {
                if ((*it)->SearchTripBySubstring("").find(plate) != string::npos)
                {
                    delete *it;
                    vehicles.erase(it);
                    cout << "Veiculo removido com sucesso.\n";
                    removed = true;
                    break;
                }
            }

            if (!removed)
                cout << "Veiculo nao encontrado.\n";
        }
        else if (option == 3)
        {
            string plate;
            cout << "Placa: ";
            getline(cin, plate);
            
            Vehicle* v = BuscarVeiculoPorPlaca(vehicles, plate);

            if (v)
            {
                string ori, dest;
                float dist;
                cout << "Origem: ";
                getline(cin, ori);
                cout << "Destino: ";
                getline(cin, dest);
                cout << "Distancia: ";
                cin >> dist;
                cin.ignore();
                v->IncludeTrip(ori, dest, dist);
                cout << "Rota adicionada!\n";
            }
            else
            {
                cout << "Veiculo nao encontrado.\n";
            }
        }
        else if (option == 4)
        {
            string plate;
            cout << "Placa: ";
            getline(cin, plate);
           
            Vehicle* v = BuscarVeiculoPorPlaca(vehicles, plate);

            if (v)
            {
                size_t index;
                cout << "Indice da rota: ";
                cin >> index;
                cin.ignore();
                if (v->RemoveTrip(index))
                    cout << "Rota removida com sucesso!\n";
                else
                    cout << "Indice invalido.\n";
            }
            else
            {
                cout << "Veiculo nao encontrado.\n";
            }
        }
        else if (option == 5)
        {
            string plate;
            cout << "Placa: ";
            getline(cin, plate);
            bool found = false;

            Vehicle* v = BuscarVeiculoPorPlaca(vehicles, plate);

            if (!found)
                cout << "Veiculo nao encontrado.\n";
        }
        else if (option == 6)
        {
            for (auto& v : vehicles)
                cout << v->GetAllTrips();
        }
        else if (option == 7)
        {
            string word;
            cout << "Substring: ";
            getline(cin, word);
            bool found = false;

            for (auto& v : vehicles)
            {
                string result = v->SearchTripBySubstring(word);
                if (!result.empty())
                {
                    cout << result;
                    found = true;
                }
            }

            if (!found)
                cout << "Nenhuma viagem encontrada.\n";
        }
        else if (option == 0)
        {
            break;
        }
        else
        {
            cout << "Opcao invalida.\n";
        }
    }

    for (auto& v : vehicles)
        delete v;

    return 0;
}

Vehicle* BuscarVeiculoPorPlaca(const vector<Vehicle*>& vehicles, const string& plate)
{
    for (auto v : vehicles)
    {
        // Aqui usamos GetAllTrips e vemos se a placa aparece no início da string
        if (v->GetAllTrips().find(plate) != string::npos)
        {
            return v;
        }
    }
    return nullptr;
}