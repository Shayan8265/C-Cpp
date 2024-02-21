/*
CH-230-A
a10_p2.cpp
Shayan Khan
skhan01@jacobs-university.de
*/
//explanation.txt is written below


#include <string> // defines standard C++ string class

/* First C++ class */
class Critter
{
private:  // data members are private
	std::string name;
	int hunger;
	int boredom;
	double height;
	std::string food;
	int age;

public: // business logic methods are public
	// setter methods
	void setName(std::string& newname);
	void setHunger(int newhunger);
	void setBoredom(int newboredom);
	//2 new setter methods for the new data members
	void setfood(std::string& newfood);
	void setage(int age);
	// getter method
	int getHunger();
	std::string getfood();
	int getage();
	// service method
	void print();
};