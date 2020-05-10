#include "Personal.h"
#include<string.h>
#include<My_exception.h>

    Personal:: Personal():cnp(""),nume(""), film(){}
    Personal:: Personal(string cnp, string nume, string nume_film, string tip, int durata, double incasari):film(nume_film, tip, durata, incasari),
            cnp(cnp), nume(nume){
       }
    Personal:: ~Personal(){
    cnp="";
    nume="";
    }
    Personal:: Personal(const Personal& other):cnp(other.cnp),nume(other.nume), film(other.film) {}
    Personal& Personal:: operator=(const Personal& other){
    cnp=other.cnp;
    nume=other.nume;
    film=other.film;
    return *this;
    }
    istream& operator>>(istream& in, Personal& ob){
    cout<<"CNP: ";
    in>>ob.cnp;
    cout<<"Nume: ";
    in>>ob.nume;
    in>>ob.film;
    return in;
    }
    ostream& operator<<(ostream& out, Personal& ob){
    out<<"Cnp:  "<<ob.cnp<<"\n";
    out<<"Nume:  "<<ob.nume<<"\n";
    out<<"Salariu:  "<<ob.salariu_pers()<<"\n";
    out<<"Film:  \n";
    out<<ob.film;
    if(ob.film.get_durata()>4)
        throw (My_exception("Eroare! Filmul nu poate sa dureze mai mult de 4 ore!"));
    return out;
    }
    int Personal::bonus(){
    return 0;}

    int Personal::salariu_pers()const{
        if(film.salariu(procent)==0)
            throw (My_exception("Eroare! Filmul a dat faliment"));
    return film.salariu(procent);
    }

    void Personal:: afisare(){
    cout<<"Date despre personal: \n";
    cout<<*this;
    }
    Film Personal:: get_film(){
    return film;}
    /*bool Personal::operator<(const Personal& other){
    if(strcmp(nume, other.nume)<=0)
        return 1;
    else return 0;
    }
    */


