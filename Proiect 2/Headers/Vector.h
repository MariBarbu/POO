#pragma once
#include"Complex.h"
#include<iostream>
using namespace std;


class Vector
{protected:
    int dim;
    int dimMax;
    Complex *v;
    public:
        Vector(int dimMax=0);
        virtual ~Vector();
        Vector(const Vector& other);
        Complex* getVector();
        int getDimMax();
        Complex* getV();
        void setDimMax(int dimMax);
        void setV(Complex* v);
        istream& operator>>(istream& in);
        ostream& operator<<(ostream& out);
        Vector& operator=(const Vector& other);
        void virtual adaugare(Complex nr);
        void virtual stergere(int poz);
        bool imaginar();
        virtual void tip()=0;
};


