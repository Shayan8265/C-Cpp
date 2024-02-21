/*
CH-230-A
a10_p5.cpp
Shayan Khan
skhan01@jacobs-university.de
*/
#include <iostream>
#include "Critter.h"

using namespace std;
//sets everything to zero
Critter::Critter(){
	name = "default_critter";
	hunger = boredom = 0;
	height = 5;
	cout << "Constructor one is being called" << endl;
}

Critter::Critter(std::string& n, int h, int hu, int b){
	name = n;
	height = h;
	//using internal as double
	hunger = convert2dbl(hu);
	boredom = b;
	cout << "Constructor two is being called" << endl;
}

Critter::Critter(int hu, std::string& n, int b, int h)
{
	name = n;
	height = h;
	//internaly hunger is double
	hunger = convert2dbl(hu);
	boredom = b;
	cout << "Constructor three is being called" << endl;
}

	void Critter::print()
{
	cout << "I am " << name << ". My hunger level is " << convert2int(hunger) << endl;
	cout << "My height is " << height <<
	 " and my boredom level is " << boredom << endl;
}

//converting hunger to double 
//in the following 2 methods
//and then converting back to 
//int to print

double Critter::convert2dbl(int hu)
{
	return (double)hu / 10.0;
}

int Critter::convert2int(double hu)
{
	return hu * 10;
}

	double Critter::getHunger()
{
	return convert2int(hunger);
}