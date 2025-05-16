#include "header.hpp"

Route::Route(string ori, string dest, float Km)
{
    m_origin = new string(ori);
    m_destination = new string(dest);
    m_distanceKm = new float(Km);
}

Route::~Route()
{
    delete m_origin;
    delete m_destination;
    delete m_distanceKm;
}

string Route::GetOrigin()
{
    return *m_origin;
}
string Route::GetDestination()
{
    return *m_destination;
}
float Route::GetDistanceKm()
{
    return *m_distanceKm;
}