/*
CH-230-A
a11_p6.cpp
Shayan Khan
skhan01@jacobs-university.de
*/
#ifndef VECTOR_H
#define VECTOR_H

//Vector class
class Vector
{
private:
    double *arr;
    int size;
public:
    Vector();
    Vector(int n);
    Vector(const Vector &obj);
    ~Vector();
    void setSize(int n);
    int getSize();
    void setVector(double *ptr);
    double norm();
    Vector add(const Vector &obj) const;
    Vector difference(const Vector &obj) const;
    double product(const Vector &obj) const;
    void print();
};

#endif // VECTOR_H