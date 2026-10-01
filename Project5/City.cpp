#include "City.h"

string CityUA::language = "Ukrainian";
string CityUA::capital = "Kyiv";
string CityUA::president = "Zelenski";
int CityUA::population_country = 30000000;
int CityUA::Count = 0;

CityUA::CityUA()
{
    Count++;
}

CityUA::CityUA(string n, int pop)
{
    name = n;
    population_city = pop;
    Count++;
}

void CityUA::Init(string n, int a)
{
    name = n;
    population_city = a;
}

void CityUA::Print() const
{
    cout << "City: " << name << ", Population: " << population_city << endl;
}

void CityUA::setName(const string& n)
{
    name = n;
}

string CityUA::getName() const
{
    return name;
}

void CityUA::setPopulationCity(int pop)
{
    if (pop >= 0)
    {
        population_city = pop;
    }
}

int CityUA::getPopulationCity() const
{
    return population_city;
}

void CityUA::PrintData()
{
    cout << "Country: Ukraine" << endl;
    cout << "Language: " << language << endl;
    cout << "Capital: " << capital << endl;
    cout << "President: " << president << endl;
    cout << "Country population: " << population_country << endl;
    cout << "Total city objects created: " << Count << endl;
}

int CityUA::getCount()
{
    return Count;
}