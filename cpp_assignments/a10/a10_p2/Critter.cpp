/*
CH-230-A
a10_p2.cpp
Shayan Khan
skhan01@jacobs-university.de
*/
#include <iostream>
#include "Critter.h"

using namespace std;

void Critter::setName(std::string& newname) {
	name = newname;
}

void Critter::setHunger(int newhunger) {
	hunger = newhunger;
}

//defining the new methods for the new data members
void Critter::setfood(std::string& newfood){
	food = newfood;
}

void Critter::setage(int newage){
	age = newage;
}

void Critter::print() {
	cout << "I am " << name << ". My hunger level is " << hunger << "." << endl
	<< "I love to eat " << food << " and I am " << age << " years old" << endl;
	}

int Critter::getHunger() {
	return hunger;
}

string Critter::getfood(){
	return food;
}

int Critter::getage(){
	return age;
}