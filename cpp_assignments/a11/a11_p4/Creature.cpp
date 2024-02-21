/*
CH-230-A
a11_p4.cpp
Shayan Khan
skhan01@jacobs-university.de
*/
//"Creatures.cpp"
//implementation of classes
#include <iostream>
#include "Creature.h"

using namespace std;

Creature::Creature(): distance(10)
{}    

void Creature::run() const
{ 
    cout << "running " << distance << " meters!\n";
}  

Wizard::Wizard() : distFactor(3)
{}  

void Wizard::hover() const
{
    cout << "hovering " << (distFactor * distance) << " meters!\n";
}

//printing message when default constructor is called
Goblin::Goblin() : power("Healing")
{
    cout << "\nCreating a Goblin" << endl;
}

//a method for printing the goblins property
void Goblin::ability(){
    cout << "Ability : " << power << "!!"<< endl;
}

//printing mesage when destructor is called
Goblin::~Goblin()
{
    cout << "Goblin's Destructor is being called!!" << endl;
}

//message for the call of dragons constructor
Dragon::Dragon() : power("Fire breathing")
{
    cout << "\nCreating a Dragon" << endl;
}

//printing the property of the dragons class
void Dragon::ability()
{
    cout << "Ability : " << power << "!!" << endl;
}
//printing message for when destructor is called
Dragon::~Dragon(){
    cout << "\nDragon's Destructor is being called!!" << endl;
}