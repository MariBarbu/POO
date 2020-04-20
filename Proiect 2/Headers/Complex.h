#pragma once
#include<iostream>
using namespace std;


class Complex
{   float re, im;
    public:
        Complex(float x=0, float y=0);
        Complex(const Complex& other);
        virtual ~Complex();
        void setReal(float x=0);
        void setImaginar(float y=0);
        float getReal();
        float getImaginar();
        friend istream& operator>>(istream&in, Complex a);
        friend ostream& operator<<(ostream&out, const Complex &a);
        Complex& operator = (const Complex& z);
        bool operator==(const Complex& z)const;
        bool pur_imaginar();





};


