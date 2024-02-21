/*
CH-230-A
a10_p4.cpp
Shayan Khan
skhan01@jacobs-university.de
*/
#include <iostream>
#include "Critter.h"

using namespace std;
//this default critter sets everything to zero
Critter::Critter(){
	name = "default_critter";
	hunger = boredom = 0;
	height = 5;
	cout << "Constructor one is being called" << endl;
}
//defining all other critters
Critter::Critter(std::string& n, int h, int hu, int b){
	name = n;
	height = h;
	hunger = hu;
	boredom = b;
	cout << "Constructor two is being called" << endl;
}

Critter::Critter(int hu, std::string& n, int b, int h)
{
	name = n;
	height = h;
	hunger = hu;
	boredom = b;
	cout << "Constructor three is being called" << endl;
}

	void Critter::print()
{
	cout << "I am " << name << ". My hunger level is " << hunger << endl;
	cout << "My height is " << height <<
	 " and my boredom level is " << boredom << endl;
}

int Critter::getHunger()
{
	return hunger;
}