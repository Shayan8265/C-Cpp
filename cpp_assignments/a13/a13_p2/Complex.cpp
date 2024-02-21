/*
CH-230-A
a13_p2.cpp
Shayan Khan
skhan01@jacobs-university.de
*/
#include "Complex.h"

Complex::Complex(double R = 0, double im = 0){
    this->R = R;
    this->I = im;
}

Complex Complex::operator+(Complex &b){
    return Complex(R + b.R, I + b.I);
}

Complex Complex::operator-(Complex &b){
    return Complex(R - b.R, I - b.I);
}

Complex Complex::operator*(Complex &b){
    double x = R * b.R - I * b.I;
    double y = R * b.I + I * b.R;
    return Complex(x, y);
}

ostream & operator<<(ostream &xx, const Complex &a){
    xx << a.R;
    if (a.I < 0){
        xx << a.I << "i";
    }
    else if (a.I > 0){
        xx << "+" << a.I << "i";
    }
    return xx;
}

istream & operator>>(istream &in, Complex &a){
    in >> a.R >> a.I;
    return in;
}

Complex & Complex::operator =(const Complex &eq){
    R = eq.R;
    I = eq.I;
    return *this;
};