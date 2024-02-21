/*
CH-230-A
a11_p3.cpp
Shayan Khan
skhan01@jacobs-university.de
*/
//"testcreature.cpp"
//test programm
#include <iostream>
#include "Creature.h"

using namespace std;

int main()
{ 
    cout << "Creating a Creature.\n";
    Creature c;
    c.run();

    cout << "\nCreating a Wizard.\n";
    Wizard w;
    w.run();
    w.hover();

//calling goblin along with its method
//and a method from the parent class
    Goblin g;
    g.run();
    g.ability();

//calling dragon along with its method 
//and a method from the parent class
    Dragon d;
    d.run();
    d.ability();

    return 0;
}