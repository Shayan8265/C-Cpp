/*
CH-230-A
a9_p3.cpp
Shayan Khan
skhan01@jacobs-university.de
*/
#include <iostream>
#include <string> //for string class

class City {
    private: //to keep data members private
    std::string name;
    int inhab;
    std::string mayor;
    float area;

    public:
    //introducing setter methods
    void setname(std::string& newname);
    void setinhab(int newinhab);
    void setmayor(std::string& newmayor);
    void setarea(float newarea);
    //getter methods
    std::string getname();
    int getinhab();
    std::string getmayor();
    float getarea();  
    //print service
    void print(); 
};