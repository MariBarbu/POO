#include "FirmaDistributie.h"
#include<iostream>
#include<typeinfo>
#include "Actor.h"
using namespace std;
template<class T>
FirmaDistributie<T>::FirmaDistributie()
{
    persoane=new T[1000];
    filme=new Film[100];
}
template<class T>
FirmaDistributie<T>::FirmaDistributie(Film *filme, T* persoane)
{
    persoane=new T[1000];
    filme=new Film[100];
}
template<class T>
FirmaDistributie<T>::FirmaDistributie(const FirmaDistributie<T>& other){
      persoane= new T[1000];
      filme=new Film[100];
      for(int i = 0; i <numar_pers; ++i)
        this->persoane[i] = other.persoane[i];
    for(int i = 0; i <numar_filme; ++i)
        this->filme[i] = other.filme[i];
  }
template<class T>
FirmaDistributie<T>::~FirmaDistributie()
{
    delete[]persoane;
    delete[]filme;
    numar_pers--;
    numar_filme--;
    numar_actori--;
}

template<class T>
void FirmaDistributie<T>::adauga_film(){
filme[numar_filme]=this->film;
numar_filme++;
}

template<class T>
void FirmaDistributie<T>::adauga_personal(){
persoane[numar_pers]=this->ob;
if(typeid(T)==typeid(Actor))
    numar_actori++;
numar_pers++;
}

FirmaDistributie<Actor>::FirmaDistributie()
{
    actori=new Actor[1000];
}
FirmaDistributie<Actor>::FirmaDistributie(Actor* persoane)
{
    actori=new Actor[1000];
}
FirmaDistributie<Actor>::FirmaDistributie(const FirmaDistributie<Actor>& other){
      actori= new Actor[1000];
      for(int i = 0; i <numar_actori; ++i)
        this->actori[i] = other.actori[i];
  }
FirmaDistributie<Actor>::~FirmaDistributie()
{
    delete[]actori;
    numar_actoriPrincipali--;
    numar_actori--;
}

void FirmaDistributie<Actor>::adauga_actor(Actor actor){
actori[numar_actori]=actor;
if(actor.actor_principal())
    numar_actoriPrincipali++;
numar_actori++;
}


