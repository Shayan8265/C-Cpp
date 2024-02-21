/*
CH-230-A
a10_p1.cpp
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

public: // business logic methods are public
	// setter methods
	void setName(std::string& newname);
	void setHunger(int newhunger);
	void setBoredom(int newboredom);
	// getter method
	int getHunger();
	// service method
	void print();
};

//explanations.txt
/*
>>> by using namespace std we mean to use
everything as 'std::' written before hand
>>> so by removing it we are facing an error
>>> we might have an alternate solution
by writting std:: manually before
every predefined funciton like use 
the things in this namespace like this. std::cout
or by writting 
using namespace std in the header file

>>> by using critter we are telling the program
that a class by the name critter is being used
from the header file and that the function
defined is declared inside the class
>>> we will face the error saying that name
was not declared, as the function was defined
inside the critter private section and we are not
able to access it.
>>> an alternate solution would be declaring the
functions outside the class and making the private
content public, to access it later.
*/