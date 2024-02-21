/*
CH-230-A
a10_p4.cpp
Shayan Khan
skhan01@jacobs-university.de
*/


#include <string> // defines standard C++ string class

class Critter
{
private:  // data members are private
	std::string name;
	int hunger;
	int boredom;
	double height;

public: // critters are public
    Critter();
	//predefining the values
	//so they will be printed even if
	//parameters are not passed through 
	Critter(std::string& n, int h = 5, 
			int hu = 0, int b = 0);
	Critter(int hu, std::string& n, int b, int h = 10);
	// getter method
	int getHunger();
	// service method
	void print();
};