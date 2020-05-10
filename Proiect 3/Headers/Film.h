#pragma once
#include<iostream>
#include<string>
#include<vector>
#include<set>
using namespace std;
class Film
{
protected:
    string nume;
    string tip;
    int durata;
    double incasari;
public:
    Film();
    Film(string nume, string tip, int durata, double incasari);
    virtual ~Film();
    Film (const Film& other);
    Film& operator= (const Film& other);
    friend istream& operator>>(istream& in, Film& ob);
    friend ostream& operator<<(ostream& out, Film& ob);
    double salariu(int procent)const; ///funtie const
    int get_durata();
};

