/* 
CH-230-A
a10_p8.cpp
Shayan Khan
skhan01@jacobs-university.de 
*/

#ifndef COMPLEX_H
#define COMPLEX_H
class Complex {
    int real;
    int img;
    public:
        //default constructor initializing the properties by 0 
        Complex();
        //constructor for setting the properties with specific values
        Complex( int real , int img );
        //a copy constructor
        Complex(Complex &c);
        //an empty destructor
        ~Complex();
        void setReal(int real);
        void setImaginary(int img);
        int getReal();
        int getImaginary();
        void print();
        Complex conjucate();
        Complex add(Complex &c);
        Complex sub(Complex &c);
        Complex mul(Complex &c);
};
#endif // COMPLEX_H