// please refer to shapes.h for methods documentation
/*
CH-230-A
a11_p5.cpp
Shayan Khan
skhan01@jacobs-university.de
*/
#include <iostream>
#include "Shapes.h"

using namespace std; 

Shape::Shape(const string& n) : name(n) {
}

void Shape::printName() const {
	cout << name << endl;
}

CenteredShape::CenteredShape(const string& n, double nx, double ny): Shape(n) {
	x = nx;
	y = ny;
}

RegularPolygon::RegularPolygon(const string& n, double nx, double ny, int nl) :
	CenteredShape(n,nx,ny) 
{
	EdgesNumber = nl;
}

Rectangle::Rectangle(const string &n, double nx, double ny, double nwidth, double nheight) :
    RegularPolygon(n, nx, ny, 4)
{
	w = nwidth;
	h = nheight;
}

Square::Square(const string &n, double nx, double ny, double nside) :
    RegularPolygon(n, nx, ny, 4)
{
	side = nside;
}

Circle::Circle(const string &n, double nx, double ny, double r) : 
	CenteredShape(n, nx, ny)
{
	Radius = r;
}

//introducing default values
Shape::Shape()
{
	name = "Shape";
};

CenteredShape::CenteredShape() :
    Shape("Centered")
{
	x = 1;
	y = 1;
};

RegularPolygon::RegularPolygon() :
    CenteredShape("Regular",1,1)
{
	EdgesNumber = 4;
};

Rectangle::Rectangle() :
    RegularPolygon("Rectangle", 1, 1, 4)
{
	w = 1;
	h = 1;
};

Square::Square() : 
    RegularPolygon("Square", 1, 1, 4)
{
	side = 1;
};

Circle::Circle() :
    CenteredShape("Circle", 1, 1)
{
	Radius = 1;
}

//defining setters for all classes
void Shape::setshape(const std::string &n){
	name = n;
}

void CenteredShape::setcenteredshape(double a, double b){
	x = a;
	y = b;
}

void RegularPolygon::setregularpolygon(int e){
	EdgesNumber = e;
}

void Rectangle::setrectangle(double ww, double hh){
	w = ww;
	h = hh;
}

void Square::setsquare(double s){
	side = s;
}

void Circle::setcircle(double r){
	Radius = r;
}

// methods for perameter and area

double Rectangle::parameter()
{
	double par = (2 * w) + (2 * h);
	return par;
}

double Rectangle::area(){
	double are = w * h;
	return are;
}

double Square::parameter()
{
	double par = side + side + side + side;
	return par;
}

double Square::area()
{
	double are = side * side;
	return are;
}

double Circle::parameter()
{
	double pi2 = 2 * 3.1415;
	double par = Radius * pi2;
	return par;
}

double Circle::area()
{
	double pi = 3.1415;
	double are = Radius * (pi * Radius);
	return are;
}