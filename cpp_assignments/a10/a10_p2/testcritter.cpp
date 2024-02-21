/*
CH-230-A
a10_p2.cpp
Shayan Khan
skhan01@jacobs-university.de
*/
#include <iostream>
#include <cstdlib>
#include "Critter.h"

using namespace std;

int main(int argc, char** argv)
{
	Critter c;

	string name;
	//introducing new inputs
	string food;
	int hunger, age;
 
	cout << endl << "Please enter data: " << endl;
	cout << "Name: ";
	// cin >> name; will not work if name contains
	// spaces
	getline(cin, name);
	c.setName(name);
	cout << "Hunger: ";
	cin >> hunger;
	c.setHunger(hunger);
	//taking input of the new elements 
	//and then setting using the function
	// and by calling instance
	//of the critter defined above
	cout << "Food: ";
	getchar();
	getline(cin, food);
	c.setfood(food);
	cout << "age: ";
	cin >> age;
	c.setage(age);

	cout << "You have created:" << endl;
	c.print();
        return 0;
}