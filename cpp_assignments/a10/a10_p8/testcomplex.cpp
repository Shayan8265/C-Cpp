/* 
CH-230-A
a10_p8.cpp
Shayan Khan
skhan01@jacobs-university.de 
*/

#include <bits/stdc++.h>
#include "Complex.h"

using namespace std;

int main(){
    //creating at least two instances of the Complex class
    //reading the data for the properties from the keyboard.
    Complex c1(1,4);
    cout<<" C1 ->"<<endl;
    c1.print();
    Complex c2(2,6);
    cout<<" C2 ->"<<endl;
    c2.print();
    Complex c3;
    c3 = c1.add(c2);
    cout<<"\t C3 = C1 + C2\n C3 ->"<<endl;
    c3.print();
    c3 = c1.sub(c2);
    cout<<"\t C3 = C1 - C2\n C3 ->"<<endl;
    c3.print();
    c3 = c1.mul(c2);
    cout<<"\t C3 = C1 * C2\n C3 ->"<<endl;
    c3.print();
}