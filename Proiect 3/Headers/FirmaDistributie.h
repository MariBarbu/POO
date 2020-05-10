#pragma once
#include<iostream>
#include "Film.h"
#include "Actor.h"
using namespace std;
template <class T>
class FirmaDistributie
{
    Film* filme;
    T* persoane ;
    static int numar_pers;
    static int numar_actori;
    static int numar_filme;
    public:
        FirmaDistributie();
        FirmaDistributie(Film* filme, T* persoane);
        FirmaDistributie(const FirmaDistributie<T>& other);
        //friend istream& operator>>(istream&, FirmaDistributie<T>&);
        //friend ostream& operator<<(ostream&, FirmaDistributie<T>&);
        virtual ~FirmaDistributie();
        void adauga_film();
        void adauga_personal();

};

template<>
class FirmaDistributie<Actor>
{
    Actor* actori ;
    static int numar_actori;
    static int numar_actoriPrincipali;
    public:
        FirmaDistributie();
        FirmaDistributie(Actor* persoane);
        FirmaDistributie(const FirmaDistributie<Actor>& other);
        virtual ~FirmaDistributie();
        void adauga_actor(Actor actor);

};

