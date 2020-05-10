#include "Film.h"
#include<My_exception.h>

    Film:: Film():nume(""), tip(""), durata(0), incasari(0){}
    Film:: Film(string nume, string tip, int durata, double incasari):nume(nume), tip(tip),
        durata(durata), incasari(incasari){}
    Film:: ~Film(){
        nume="";
        tip="";
        durata=0;
        incasari=0;
    }
    Film:: Film (const Film& other):nume(other.nume), tip(other.tip), durata(other.durata),
        incasari(other.incasari){}
    Film& Film:: operator= (const Film& other){
            nume=other.nume;
            tip=other.tip;
            durata=other.durata;
            incasari=other.incasari;
            return *this;
    }
    istream& operator>>(istream& in, Film& ob){
        cout<<"Nume film: ";
        in>>ob.nume;\
        cout<<"Tip film:  ";
        in>>ob.tip;
        cout<<"Durata film: ";
        in>>ob.durata;
        cout<<"Incasari: ";
        in>>ob.incasari;
        return in;
    }
    ostream& operator<<(ostream& out, Film& ob){
        out<<"Nume film : "<<ob.nume<<"\n";
        out<<"Tip:  "<<ob.tip<<"\n";
        out<<"Durata:  "<<ob.durata<<"\n";
        out<<"Incasari:  "<<ob.incasari<<"\n";
        return out;
    }
 double Film:: salariu(int procent)const{
 return procent*incasari/100;
}
int Film:: get_durata(){
return durata;}
