#include "Stiva.h"
#include<iostream>
#include "Myexception.h"
using namespace std;

Stiva::Stiva(int dimMax):Vector(dimMax)
{
    varf=-1;
    cout<<"Stiva\n";
}

Stiva::~Stiva()
{
    cout<<"Distruge stiva\n";
}
Stiva::Stiva(const Stiva& other):Vector(other)
{
    varf=other.varf;
    cout<<"Copiaza Stiva\n";
}
istream& operator>>(istream& in, Stiva S)
{
    in>>S.dimMax;

    for(int i=0; i<S.dimMax; i++)
    {
        in>>S.v[i];
        S.dim++;
    }
    return in;
}
ostream& operator<<(ostream& out, Stiva S)
{
    for(int i=0; i<S.dim; i++)
        out<<S.v[i]<<" ";
    return out;
}
Stiva& Stiva::operator=(const Stiva& other)
{
    if(this!=&other)
    {
        varf=other.varf;
        dimMax=other.dimMax;
        v=new Complex[dimMax];
        for(int i=0; i<dim; i++)
        {
            v[i]=other.v[i];
        }
        cout<<"Atribuie stiva\n";
    }
    return *this;
}
void Stiva::adaugare(Complex nr)
{
    if(dim<dimMax)
    {
        v[++varf]=nr;
        dim++;
        cout<<"adauga stiva\n";
    }
    else
            throw (Myexception( "Eroare! Stiva plina\n"));
}
Complex Stiva::stergere()
{
    if(dim)
        {
            dim--;
            return v[varf--];
        }
    else
    {
            throw (Myexception("Eroare! Stiva vida\n"));
    }


}
void Stiva::StivaPurImaginara()
{
    if (this->imaginar())
        cout<<"Stiva este pur imaginara\n";
    else
        cout<<"Stiva nu este pur imaginara\n";
}

void Stiva::tip()
{
    cout<<"LIFO\n";
}
