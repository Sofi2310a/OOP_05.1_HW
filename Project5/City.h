#pragma once
#include <iostream>
using namespace std;

class CityUA
{
    string name;
    int population_city;
    static string language;
    static string capital;
    static string president;
    static int population_country;
    static int Count;

public:
    CityUA();
    CityUA(string n, int pop);
    void Init(string n, int a);
    void Print() const;
    void setName(const string& n);
    string getName() const;
    void setPopulationCity(int pop);
    int getPopulationCity() const;
    static void PrintData();
    static int getCount();
};