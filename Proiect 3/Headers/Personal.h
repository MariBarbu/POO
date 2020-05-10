#pragma once
#include<iostream>
#include<string>
#include<vector>
#include<set>
#include"Film.h"
using namespace std;


class Personal
{
protected:
    string cnp;
    string nume;
    Film film;
    static int procent;


public:
    Personal();
    Personal(string cnp, string nume, string nume_film, string tip, int durata, double incasari);
    virtual ~Personal();
    Personal(const Personal& other);
    Personal& operator=(const Personal& other);
    friend istream& operator>>(istream& in, Personal& ob);
    friend ostream& operator<<(ostream& out, Personal& ob);
    void virtual afisare();
    int virtual bonus();
    int virtual salariu_pers()const;
    Film virtual get_film();
    //bool operator<(const Personal& other);

};


