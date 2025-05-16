#ifndef HEADER_HPP
#define HEADER_HPP

#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <sstream>

using namespace std;

class Route
{
private: 
    string *m_origin, *m_destination;
    float *m_distanceKm;
public:
    Route(string ori, string dest, float Km);
    ~Route();
    string GetOrigin();
    string GetDestination();
    float GetDistanceKm();
};

class Vehicle
{
private: 
    string m_plate, m_model, m_brand;
    float m_initialKM;
    vector<Route*> m_trips;

public:
    //construtor de um veículo, somente uma forma de construir um veiculo
    Vehicle(string plate, string model, string brand, float initialKM);

    //aqui se inclui uma viagem em um determinado veiculo, se deve inserir a 
    //cidade origem, destino e a distancia 
    void IncludeTrip(string origin, string destination, float distance);

    //remover uma viagem em determinado veiculo
    bool RemoveTrip(size_t index);
    
    //funçao generia, possibilita pesquisar uma substring em cidade origem ou destino
    string SearchTripBySubstring(string wordToSearch);

    //retornar todas as viagens de todos os veiculos
    string GetAllTrips();
};

#endif