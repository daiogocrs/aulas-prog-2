#include "header.hpp"

Vehicle::Vehicle(string plate, string model, string brand, float initialKM)
    : m_plate(plate), m_model(model), m_brand(brand), m_initialKM(initialKM)
{
}

void Vehicle::IncludeTrip(string origin, string destination, float distance)
{
    Route *route = new Route(origin, destination, distance);
    m_trips.push_back(route);
}

bool Vehicle::RemoveTrip(size_t index)
{
    if (index < m_trips.size())
    {
        delete m_trips[index];
        m_trips.erase(m_trips.begin() + index);
        return true;
    }
    return false;
}

string Vehicle::SearchTripBySubstring(string wordToSearch)
{
    ostringstream result;
    for (auto route : m_trips)
    {
        if (route->GetOrigin().find(wordToSearch) != string::npos ||
            route->GetDestination().find(wordToSearch) != string::npos)
        {
            result << "Veiculo " << m_plate << ": "
                   << route->GetOrigin() << " -> " << route->GetDestination()
                   << " (" << route->GetDistanceKm() << " km)\n";
        }
    }
    return result.str();
}

string Vehicle::GetAllTrips()
{
    ostringstream result;
    result << "\n[ " << m_plate << " | " << m_model << " | " << m_brand
           << " | KM Inicial: " << m_initialKM << " ]\n";

    if (m_trips.empty())
    {
        result << "  Nenhuma viagem registrada.\n";
    }
    else
    {
        float totalKm = 0;
        for (size_t i = 0; i < m_trips.size(); ++i)
        {
            Route *r = m_trips[i];
            result << "  Viagem " << i << ": " << r->GetOrigin() << " -> " << r->GetDestination()
                   << " | " << r->GetDistanceKm() << " km\n";
            totalKm += r->GetDistanceKm();
        }
        result << "  Quilometragem total: " << totalKm + m_initialKM << " km\n";
    }

    return result.str();
}
