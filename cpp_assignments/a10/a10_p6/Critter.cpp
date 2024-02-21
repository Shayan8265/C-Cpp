/*
CH-230-A
a10_p6.cpp
Shayan Khan
skhan01@jacobs-university.de
*/
#include <iostream>
#include "Critter.h"

using namespace std;
//sets everything to zero
//made thirst lvl eq to hunger in all 
//existing critters
Critter::Critter(){
	name = "default_critter";
	hunger = boredom = 0;
	height = 5;
	thirst = hunger;
	cout << "Constructor one is being called" << endl;
}

Critter::Critter(std::string& n, int h, int hu, int b){
	name = n;
	height = h;
	// using internal as double
	hunger = convert2dbl(hu);
	boredom = b;
	thirst = hunger;
	cout << "Constructor two is being called" << endl;
}

Critter::Critter(int hu, std::string& n, int b, int h)
{
	name = n;
	height = h;
	// internaly hunger is double
	hunger = convert2dbl(hu);
	boredom = b;
	thirst = hunger;
	cout << "Constructor three is being called" << endl;
}

Critter::Critter(int hu, std::string &n, int b, int h, double t)
{
	name = n;
	height = h;
	hunger = convert2dbl(hu);
	boredom = b;
	thirst = t;
	cout << "Constructor four is being called" << endl;
}

	void Critter::print()
{
	cout << "I am " << name << ". My hunger level is " << convert2int(hunger) << endl;
	cout << "My height is " << height <<
	" and my boredom level is " << boredom << endl;
	cout << "Thirst level: " << thirst << endl;
	//introduced the thirst level in print func
}
// converting hunger to double
// in the following 2 methods
// and then converting back to
// int to print

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