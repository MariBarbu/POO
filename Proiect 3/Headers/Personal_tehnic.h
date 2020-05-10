#pragma once
#include<iostream>
#include<string>
#include "Personal.h"
#include "Film.h"
class Personal_tehnic: public virtual Personal
{
    public:
        Personal_tehnic();
        Personal_tehnic(string cnp, string nume, string nume_film, string tip, int durata, double incasari);
        virtual ~Personal_tehnic();
        Personal_tehnic(const Personal_tehnic& other);
        Personal_tehnic& operator=(const Personal_tehnic& other);
        friend istream& operator>>(istream& in, Personal_tehnic& ob);
        friend ostream& operator<<(ostream& out, Personal_tehnic& ob);
        void afisare();

};
