/*
CH-230-A
a10_p5.cpp
Shayan Khan
skhan01@jacobs-university.de
*/
#include <iostream>
#include <cstdlib>
#include "Critter.h"
using namespace std;

int main()
{
	string na = "Mr.CRITTER";
	Critter c1;
	Critter c2(na);
	Critter c3(2, na, 55, 22);
	Critter c4(2, na, 66);
	c1.print();
	c2.print();
	c3.print();
	c4.print();
	return 0;
}