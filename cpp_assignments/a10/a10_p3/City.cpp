/*
CH-230-A
a9_p3.cpp
Shayan Khan
skhan01@jacobs-university.de
*/
#include <iostream>
#include "City.h"
using namespace std;

//defining all the setters by putting the parameter
//equal to the data members for them to be printed later
    void City::setname(std::string& newname){
        name = newname;
    }

    void City::setinhab(int newinhab){
        inhab = newinhab;
    }
    
    void City::setmayor(std::string& newmayor){
        mayor = newmayor;
    }
    
    void City::setarea(float newarea){
        area = newarea;
    }

    string City::getname(){
        return name;
    }

    int City::getinhab(){
        return inhab;
    }

    string City::getmayor(){
        return mayor;
    }

    float City::getarea(){
        return area;
    }   
//printing the data memebers as they are stored thorugh
//different instances of the class city.
//by calling the print service with different instances
    void City::print() {
	cout << name << " is a city with population of " <<
    inhab << " inhabitants." << endl
	<< "Mayor of this city is " << mayor << 
    " and the area of this city is " << area << " km^2" << endl;
	}