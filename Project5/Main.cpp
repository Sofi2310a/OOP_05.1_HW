#include "City.h"

int main()
{
    CityUA::PrintData();
    cout << endl;
    CityUA city1("Odesa", 1000000);
    city1.Print();
    CityUA city2;
    city2.Init("Kyiv", 2500000);
    city2.Print();
    cout << "Count of city: " << CityUA::getCount() << endl;

    return 0;
}