#include "Regizor.h"


    Regizor:: Regizor():Personal(){}

    Regizor:: Regizor(string cnp,string nume, string nume_film, string tip, int durata, double incasari):Personal(cnp, nume, nume_film, tip, durata, incasari){}
    Regizor:: ~Regizor(){
    }
    Regizor:: Regizor(const Regizor& other): Personal(other){}
    Regizor& Regizor:: operator=(const Regizor& other){
        cnp=other.cnp;
        nume=other.nume;
        film=other.film;
        return *this;
    }

    istream& operator>>(istream& in, Regizor& ob){
    in>>dynamic_cast<Personal&>(ob);
    return in;
    }
    ostream& operator<<(ostream& out, Regizor& ob){
    out<<dynamic_cast<Personal&>(ob);
    out<<"Suma:  "<<ob.suma<<"\n";
    return out;
    }
    void Regizor::afisare(){
        cout<<"Date despre regizor: \n";
        cout<<*this;
    }
int Regizor::bonus(){
return suma;
}

 int Regizor::salariu_pers(){
    return film.salariu(procent)+bonus();
    }
int Regizor::get_suma(){
   return suma;
}
