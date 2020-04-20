#include "Coada.h"
#include<iostream>
#include "Myexception.h"
using namespace std;

Coada::Coada(int dimMax):Vector(dimMax)
{
    varf=-1;
    cout<<"Coada\n";
}

Coada::~Coada()
{
    cout<<"Distruge coada\n";
}
Coada::Coada(const Coada& other):Vector(other)
{
    varf=other.varf;
    cout<<"Copiaza Coada\n";
}
istream& operator>>(istream& in, Coada C)
{
    in>>C.dimMax;

    for(int i=0; i<C.dimMax; i++)
    {
        in>>C.v[i];
        C.dim++;
    }
    return in;
}
ostream& operator<<(ostream& out, Coada C)
{
    for(int i=0; i<C.dim; i++)
        out<<C.v[i]<<" ";
    return out;
}
Coada& Coada::operator=(const Coada& other)
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
        cout<<"Atribuie coada\n";
    }
    return *this;
}
void Coada::adaugare(Complex nr)
{
    if(dim<dimMax)
    {
        v[++varf]=nr;
        dim++;
        cout<<"adauga coada\n";
    }
    else
            throw (Myexception("Eroare! Coada plina\n"));
}
Complex Coada::stergere()
{
    if(dim)
        {   for(int i=0;i<dim;i++)
                {
                    v[i]=v[i+1];
                }
            dim--;
            varf--;
            return v[0];
        }
    else
    {
            throw (Myexception("Eroare! Coada vida\n"));
    }


}
void Coada::CoadaPurImaginara()
{
    if (this->imaginar())
        cout<<"Coada este pur imaginara\n";
    else
        cout<<"Coada nu este pur imaginara\n";
}
void Coada::tip()
{
    cout<<"FIFO\n";
}

