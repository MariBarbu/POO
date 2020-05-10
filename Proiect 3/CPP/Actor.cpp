#include "Actor.h"
#include "Personal.h"
#include "Film.h"

        Actor:: Actor(): Personal(), principal(0){}
        Actor:: Actor(string cnp, string nume, string nume_film, string tip, int durata, double incasari, bool principal):Personal(cnp, nume,
                nume_film, tip, durata, incasari), principal(principal){}
        Actor:: ~Actor(){
        principal=0;
        }
        Actor:: Actor(const Actor& other):Personal(other), principal(other.principal){}
        Actor& Actor:: operator=(const Actor& other){
            cnp=other.cnp;
            nume=other.nume;
            film=other.film;
            principal=other.principal;
            return *this;
            }
        istream& operator>>(istream& in, Actor& ob){
            in>>dynamic_cast<Personal&>(ob);
            cout<<"Este personaj principal? 1-DA  2-NU: ";
            in>>ob.principal;
            return in;
            }
        ostream& operator<<(ostream& out, Actor& ob){
            out<<dynamic_cast<Personal&>(ob);
            if(ob.principal==1)
                out<<"Actor principal \n";
            return out;}
        int Actor:: bonus(){
            if(principal)
                return film.salariu(10);
            else
                return 0;
        }
        void Actor:: afisare(){
            cout<<"Date despre actor: \n";
            cout<<*this;
            cout<<"Bonus:  "<<bonus()<<" \n";
        }

    int Actor::salariu_pers(){
    return film.salariu(procent)+bonus();
    }

    int Actor:: actor_principal(){
    return principal;
    }
