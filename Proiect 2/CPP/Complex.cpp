#include "Complex.h"
#include<iostream>
using namespace std;

Complex::Complex(float x, float y): re(x), im(y)
{
 cout<<"Complex\n";
}

Complex::~Complex()
{
    cout<<"Distruge complex\n";
}
Complex::Complex(const Complex& other)
{
    this->re=other.re;
    this->im=other.im;
    cout<<"Copiaza Complex\n";
}
void Complex::setReal(float x)
{
    re=x;
}
void Complex::setImaginar(float y)
{
    im=y;
}
float Complex::getReal()
{
    return re;
}
float Complex::getImaginar()
{
    return im;
}
istream& operator>>(istream&in, Complex a)
{
    in>>a.re;
    in>>a.im;
    return in;
}
ostream& operator<<(ostream&out, const Complex &a)
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
Complex& Complex::operator=(const Complex &z)
{
    if ( this != &z)
    {
        re=z.re;
        im=z.im;
    }
    cout<<"Atribuie Complex\n";
    return *this;

}
bool Complex::operator==(const Complex& z) const
{
    if(re==z.re && im==z.im)
        return true;
    else
        return false;
}
bool Complex::pur_imaginar()
{
    if(re==0)
        return true;
    else
        return false;
}
