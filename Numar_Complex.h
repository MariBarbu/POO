#ifndef NUMAR_COMPLEX_H
#define NUMAR_COMPLEX_H
#include<iostream>

using namespace std;
class Numar_Complex
{
    double re;
    double im;
public:
    Numar_Complex(double x=0, double y=0);
    Numar_Complex(const Numar_Complex &ob1);
    ~Numar_Complex();
    void setNumar_Complex(double x=0, double y=0);
    int getNumar_Complex();
    friend void elemente(Numar_Complex *v);
    friend istream& operator>>(istream&in, Numar_Complex a);
    friend ostream& operator<<(ostream&out, const Numar_Complex &a);
    friend double modul(Numar_Complex a);
    Numar_Complex operator+(const Numar_Complex &a);
    Numar_Complex operator*(const Numar_Complex &a);
    Numar_Complex operator/(const Numar_Complex &a);
    Numar_Complex operator*(double n);
    friend void sqrt (Numar_Complex a, Numar_Complex *rez);
    friend void ecuatie(Numar_Complex ob1, Numar_Complex ob2, Numar_Complex ob3, Numar_Complex *rez);
};
#endif // NUMAR_COMPLEX_H

