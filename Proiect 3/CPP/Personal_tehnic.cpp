#include<iostream>
#include<string>
#include "Personal_tehnic.h"
#include "Personal.h"
#include "Film.h"

        Personal_tehnic:: Personal_tehnic(): Personal(){}
        Personal_tehnic:: Personal_tehnic(string cnp, string nume, string nume_film, string tip, int durata, double incasari):Personal(cnp, nume,
                nume_film, tip, durata, incasari){}
        Personal_tehnic:: ~Personal_tehnic(){
        }
       Personal_tehnic:: Personal_tehnic(const Personal_tehnic& other):Personal(other){}
        Personal_tehnic& Personal_tehnic:: operator=(const Personal_tehnic& other){
            cnp=other.cnp;
            nume=other.nume;
            film=other.film;
            return *this;
            }
        istream& operator>>(istream& in, Personal_tehnic& ob){
            in>>dynamic_cast<Personal&>(ob);
            return in;
            }
        ostream& operator<<(ostream& out, Personal_tehnic& ob){
            out<<dynamic_cast<Personal&>(ob);
            return out;}
        void Personal_tehnic:: afisare(){
            cout<<"Date despre actor: \n";
            cout<<*this;
            cout<<"Bonus:  "<<bonus()<<" \n";
        }
