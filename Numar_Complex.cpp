#include "Numar_Complex.h"
#include<iostream>
#include<math.h>
using namespace std;
Numar_Complex::Numar_Complex(double x, double y)
{
    re=x;
    im=y;

}

Numar_Complex::Numar_Complex( const Numar_Complex &ob1)
{
    re=ob1.re;
    im=ob1.im;

}
Numar_Complex::~Numar_Complex()
{
    re=0;
    im=0;

}
void Numar_Complex::setNumar_Complex(double x, double y)
{
    re=x;
    im=y;
}
int Numar_Complex::getNumar_Complex()
{
    return re;
    return im;
}




istream& operator>>(istream&in, Numar_Complex a)
{
    in>>a.re;
    in>>a.im;
    return in;
}
ostream& operator<<(ostream&out, const Numar_Complex &a)
{
    if(a.re==0)
    {
        if (a.im>0)
            out<<"i*"<<a.im;
        else if(a.im<0)
            out<<"-i*"<<-a.im;
        else
            out<<"0";
    }
    else
    {
        if(a.im==0)
            out<<a.re;
        else
        {
            if(a.im>0)
                out<<a.re<<"+i*"<<a.im;
            else
                out<<a.re<<"-i*"<<-a.im;
        }
    }
    out<<"\n";
}
void elemente(Numar_Complex *v)
{
    int n;
    cin>>n;
    v=new Numar_Complex[n];
    for(int i=0; i<n; ++i)

        {cin>>v[i].re;
        cin>>v[i].im;

        }
    for(int i=0; i<n; i++)
        cout<<v[i];
    delete[] v;
}
double modul(Numar_Complex a)
{
    double rez;
    rez = sqrt(pow(a.re,2)+pow(a.im,2));
    return rez;
}
Numar_Complex Numar_Complex::operator+(const Numar_Complex &a)
{
    this->re=this->re+a.re;
    this->im=this->im+a.im;
    return *this;
}
Numar_Complex Numar_Complex::operator*(const Numar_Complex &a)
{
    Numar_Complex rez;
    rez.re=this->re*a.re-this->im*a.im;
    rez.im=this->re*a.im+a.re*this->im;
    return rez;
}
Numar_Complex Numar_Complex::operator/(const Numar_Complex &a)
{
    Numar_Complex rez;
    rez.re=(this->re*a.re+this->im*a.im)/(a.re*a.re+a.im*a.im);
    rez.im=(a.re*this->im-this->re*a.im)/(a.re*a.re+a.im*a.im);
    return rez;
}
Numar_Complex Numar_Complex::operator*(double n)
{
    Numar_Complex rez;
    rez.re=re*n;
    rez.im=im*n;
    return rez;
}
void sqrt(Numar_Complex a, Numar_Complex *rez)
{

    rez[0].re = sqrt((a.re + sqrt(pow(a.re,2) + pow(a.im,2))) /2);
    rez[0].im = a.im / sqrt(2* (a.re + sqrt(pow(a.re,2) + pow(a.im,2))));
    rez[1].re = -sqrt((a.re + sqrt(pow(a.re,2) + pow(a.im,2))) /2);
    rez[1].im = -a.im / sqrt(2* (a.re + sqrt(pow(a.re,2) + pow(a.im,2))));
}
void ecuatie(Numar_Complex a,Numar_Complex b,Numar_Complex c,Numar_Complex *rez)
{
    rez=new Numar_Complex[4];
    Numar_Complex delta1, delta2,*delta,num;
    delta=new Numar_Complex[2];
    delta1=b.operator*(b);
    delta2=a.operator*(c);
    delta2=delta2.operator*(-4);
    delta1=delta1.operator+(delta2);
    sqrt(delta1,delta);
    num=a.operator*(2);
    rez[0]=b.operator*(-1);
    rez[0]=rez[0].operator+(delta[0]);
    rez[0]=rez[0].operator/(num);
    delta[0]=delta[0].operator*(-1);
    rez[1]=b.operator*(-1);
    rez[1]=rez[1].operator+(delta[0]);
    rez[1]=rez[1].operator/(num);
    rez[2]=b.operator*(-1);
    rez[2]=rez[2].operator+(delta[1]);
    rez[2]=rez[2].operator/(num);
    delta[1]=delta[1].operator*(-1);
    rez[2]=b.operator*(-1);
    rez[3]=rez[3].operator+(delta[1]);
    rez[3]=rez[3].operator/(num);
    delete[]rez;
    delete[]delta;

}
