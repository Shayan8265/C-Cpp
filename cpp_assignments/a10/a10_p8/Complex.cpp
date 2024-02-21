/* 
CH-230-A
a10_p8.cpp
Shayan Khan
skhan01@jacobs-university.de 
*/

#include "Complex.h"
#include <iostream>

using namespace std;

//default constructor initializing the properties by 0 
Complex::Complex()
{
    real = 0;
    img = 0;
}

//an empty destructor
Complex::~Complex()
{

//constructor for setting the properties with specific values
} 
Complex::Complex(int real , int img)
{
    this->real = real;
    this->img = img;
}

//a copy constructor
Complex::Complex(Complex &c)
{
    this->real = c.getReal();
    this->img = c.getImaginary();
}

//setter and getter methods for each property
void Complex::setReal(int real)
{
    this->real = real;
}
void Complex::setImaginary(int img)
{
    this->img = img;
}
int Complex::getReal()
{
    return real;
}
int Complex::getImaginary()
{
    return img;
}

//a method for printing the complex number on the
//screen in its mathematical form
void Complex::print()
{
    if( img < 0 )
    {
        if( img == -1 ){
            cout << "The complex number is: "<< real << "-i" << endl;
        }
        else{
            cout << "The complex number is: "<< real << img << "i" << endl;
        }
    }
    else if( img == 1 )
    {
        cout << "The complex number is: "<< real << " + i"<< endl;
    }
    else
    {
        cout << "The complex number is: "<< real << " + " << img << "i" <<endl;
    }
}

//method for the conjugation of a complex number
Complex Complex::conjucate()
{
    Complex c;
    c.setReal(real);
    int i = -1 * img;
    c.setImaginary( i );
    return c;
}

//method for adding, subtracting and multiplying two complex numbers
Complex Complex::add( Complex &c )
{
    Complex x;
    int r , i;
    r = real + c.getReal();  
    i = img + c.getImaginary();
    x.setImaginary(i);
    x.setReal(r);
    return x;
}
Complex Complex::sub( Complex &c )
{
    Complex x;
    int r , i;
    r = real - c.getReal();
    i = img - c.getImaginary();
    x.setImaginary(i);
    x.setReal(r);
    return x;
}
Complex Complex::mul( Complex &c )
{
    Complex x;
    int r  , i;
    r = real * c.getReal() - img * c.getImaginary();
    i = real * c.getImaginary() + img * c.getReal();
    x.setImaginary(i);
    x.setReal(r);
    return x;
}