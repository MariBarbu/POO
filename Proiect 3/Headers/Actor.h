#pragma once
#include<iostream>
#include<string>
#include "Personal.h"
#include "Film.h"
class Actor: public virtual Personal
{
    bool principal;//0 nu e principal, 1 e principal
    public:
        Actor();
        Actor(string cnp, string nume, string nume_film, string tip, int durata, double incasari, bool principal);
        virtual ~Actor();
        Actor(const Actor& other);
        Actor& operator=(const Actor& other);
        friend istream& operator>>(istream& in, Actor& ob);
        friend ostream& operator<<(ostream& out, Actor& ob);
        void afisare();
        int bonus();
        int salariu_pers();
        int actor_principal();

};


