/*
CH-230-A
a9_p3.cpp
Shayan Khan
skhan01@jacobs-university.de
*/
#include <iostream>
#include <cstdlib>
#include "City.h"
using namespace std;

int main(){
    //introducing the 3 intances 
    //to call and store the data members 
    //at different memory addresses and 
    //to make sure that all new data is 
    //replicated and not overwritten
    City Bremen, London, Paris;
    //proving data to the same class
    //by different instances
    string B_name = "Bremen"; 
    string L_name = "London"; 
    string P_name = "Paris";
    string B_mayor = "Andreas Bovenschulte";
    string L_mayor = "Sadiq Khan";
    string P_mayor = "Anne Hidalgo";
    int B_inhab = 569352;
    int L_inhab = 8982000;
    int P_inhab = 2161000;
    float B_area = 326.7;
    float L_area = 1572;
    float P_area = 105.4;
//calling the setters to store input to
//data memebrs at different memory addresses 
    Bremen.setname(B_name);
    London.setname(L_name);
    Paris.setname(P_name);
    Bremen.setinhab(B_inhab);
    London.setinhab(L_inhab);
    Paris.setinhab(P_inhab);
    Bremen.setmayor(B_mayor);
    London.setmayor(L_mayor);
    Paris.setmayor(P_mayor);
    Bremen.setarea(B_area);
    London.setarea(L_area);
    Paris.setarea(P_area);
//calling the print service with different instances 
//so all the data is printed seperately
    Bremen.print();
    London.print();
    Paris.print();
    return 0;
}