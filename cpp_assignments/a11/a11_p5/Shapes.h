/*
CH-230-A
a11_p5.cpp
Shayan Khan
skhan01@jacobs-university.de
*/
/*
	Classic shape examples: an inheritance tree in a geometric context
*/
#ifndef __SHAPES_H
#define __SHAPES_H
#include <string>

class Shape {			// base class
	private:   				// private access modifier: could also be protected
		std::string name;   // every shape will have a name
	public:
		Shape(const std::string&);  // builds a shape with a name
		Shape();					// empty shape
		Shape(const Shape&);		// copy constructor
		void printName() const ;  	// prints the name
		void setshape(const std::string &);
};

class CenteredShape : public Shape {  // inherits from Shape
	private: 
		double x,y;  // the center of the shape
	public:
		CenteredShape(const std::string&, double, double);  // usual three constructors
		CenteredShape();
		CenteredShape(const CenteredShape&);
		void move(double, double);	// moves the shape, i.e. it modifies it center
		void setcenteredshape(double, double);
};

class RegularPolygon : public CenteredShape { // a regular polygon is a centered_shape with a number of edges
	private: 
		int EdgesNumber;
	public:
		RegularPolygon(const std::string&, double, double, int);
		RegularPolygon();
		RegularPolygon(const RegularPolygon&);
		void setregularpolygon(int);
};

//new shape that is derived from regularpolygon
class Rectangle : public RegularPolygon
{ // a rectangle is a regular polygon with 4 sides
private:
	double w;//width
	double h;//height

public:
	Rectangle(const std::string &, double, double, double, double);
	Rectangle();
	Rectangle(const Rectangle &);
	double parameter();
	double area();
	void setrectangle(double , double);
};

// new shape that is derived from regularpolygon
class Square : public RegularPolygon
{ // a square is a regular polygon with 4 sides
private:
	double side; //length of one side

public:
	Square(const std::string &, double, double, double);
	Square();
	Square(const Square &);
	double parameter();
	double area();
	void setsquare(double);
};

class Circle : public CenteredShape {  // a Circle is a shape with a center and a radius
	private:
		double Radius;
	public:
		Circle(const std::string&, double, double, double);
		Circle();
		Circle(const Circle&);
		double parameter();
		double area();
		void setcircle(double);
};

#endif
