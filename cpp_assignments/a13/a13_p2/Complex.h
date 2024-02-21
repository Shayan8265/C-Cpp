/*
CH-230-A
a13_p2.cpp
Shayan Khan
skhan01@jacobs-university.de
*/

#ifndef FILE_WORK
#define FILE_WORK
#include <iostream>

using namespace std;

class Complex
{
    public:
        Complex(double, double);
        Complex operator +(Complex&);
        Complex operator -(Complex&);
        Complex operator *(Complex&);
        Complex & operator =(const Complex &);
        friend ostream &operator <<(ostream&, const Complex&);
        friend istream &operator >>(istream&, Complex &);
    private:
        double R;
        double I;
};
#endif