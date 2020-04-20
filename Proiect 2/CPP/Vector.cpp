#include "Vector.h"
#include<iostream>


Vector::Vector(int dimMax):dimMax(dimMax)
{
    v=new Complex[dimMax];
    dim=0;
    cout<<"Vector\n";
}
Vector::~Vector()
{
    dimMax=0;
    delete[]v;
    dim=0;
    cout<<"Distruge vector\n";
}
Complex* Vector::getVector()
{
    return v;

}
Vector::Vector(const Vector& other)
{
    dim=other.dim;
    dimMax=other.dimMax;
    v=new Complex[dimMax];
    for(int i=0;i<dim;i++)
    {
        v[i]=other.v[i];
    }
    cout<<"Copiaza vector\n";
}
int Vector::getDimMax()
{
    return dimMax;
}
Complex* Vector::getV()
{
    return v;
}
void Vector::setDimMax(int dimMax)
{
    dimMax=dimMax;
}
void Vector::setV(Complex* v)
{
    v=v;
}
istream& Vector::operator>>(istream& in)
{
    in>>dimMax;

    for(int i=0;i<dimMax;i++)
    {
        in>>v[i];
        dim++;
    }
    return in;

}
ostream& Vector::operator<<(ostream& out)
{
    for(int i=0;i<dim;i++)
        out<<v[i]<<" ";
    return out;
}
Vector& Vector::operator=(const Vector& other)
{
    if(this!=&other)
    {
        dim=other.dim;
        dimMax=other.dimMax;
        v=new Complex[dimMax];
        for(int i=0;i<dim;i++)
        {
            v[i]=other.v[i];
        }
        cout<<"Atribuie vector\n";


    }
    return *this;
}
void Vector::adaugare(Complex nr)
{       if(dim<dimMax)
        {
            v[++dim]=nr;
        }
        else
            throw "Eroare! Vector vid\n";
}
void Vector::stergere(int poz)
{   if(dim)
{
    for(int i=poz;i<dim;i++)
    {
        v[i]=v[i+1];
    }
    dim--;
}
    else
        throw "Eroare! Vector vid\n";
}
bool Vector::imaginar()
{bool ok=true;
    for(int i=0;i<dim;i++)
    {
        if(!v[i].pur_imaginar())
            ok=false;


    }
    return ok;
}

