#pragma once
#include"Vector.h"
#include<iostream>
using namespace std;
class Coada:public virtual Vector
{int varf;
    public:
        Coada(int dimMax=0);
        virtual ~Coada();
        Coada(const Coada& other);
        friend istream& operator>>(istream& in, Coada C);
        friend ostream& operator<<(ostream& out, Coada C);
        Coada& operator=(const Coada& other);
        void adaugare(Complex nr);
        Complex stergere();
        void CoadaPurImaginara();
        virtual void tip();
};
