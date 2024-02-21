/*
CH-230-A
a10_p5.cpp
Shayan Khan
skhan01@jacobs-university.de
*/


#include <string> // defines standard C++ string class

class Critter
{
private:  // data members are private
	std::string name;
	double hunger;
	int boredom;
	double height;

public: // critters are public
    Critter();
	Critter(std::string& n, int h = 5, 
			int hu = 0, int b = 0);
	Critter(int hu, std::string& n, int b, int h = 10);
	// 2 methods which will later
	// convert the int hunger to double
	//and then back to int
	int convert2int(double hu);
	double convert2dbl(int hu);
	double getHunger();
	// service method
	void print();
};