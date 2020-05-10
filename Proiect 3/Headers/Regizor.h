#pragma once
#include<iostream>
#include<string>
#include<Personal.h>
using namespace std;
class Regizor: public virtual Personal
{
    static int suma;
public:
    Regizor();
    Regizor(string cnp, string nume, string nume_film, string tip, int durata, double incasari);
    virtual ~Regizor();
    Regizor(const Regizor& other);
    Regizor& operator=(const Regizor& other);
    friend istream& operator>>(istream& in, Regizor& ob);
    friend ostream& operator<<(ostream& out, Regizor& ob);
    void afisare();
    int bonus();
    int salariu_pers();
    static int get_suma(); ///functie statica

};

