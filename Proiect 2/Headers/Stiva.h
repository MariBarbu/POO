#pragma once
#include"Vector.h"
#include<iostream>
using namespace std;
class Stiva:public virtual Vector
{int varf;
    public:
        Stiva(int dimMax=0);
        virtual ~Stiva();
        Stiva(const Stiva& other);
        friend istream& operator>>(istream& in, Stiva S);
        friend ostream& operator<<(ostream& out, Stiva S);
        Stiva& operator=(const Stiva& other);
        void adaugare(Complex nr);
        Complex stergere();
        void StivaPurImaginara();
        virtual void tip();




};


