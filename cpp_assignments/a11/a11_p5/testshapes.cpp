/*
CH-230-A
a11_p5.cpp
Shayan Khan
skhan01@jacobs-university.de
*/
#include <iostream>
#include "Shapes.h"

using namespace std;

int main(int argc, char** argv) {

  Circle c("first circle", 3, 4, 7);
  RegularPolygon r("TRIANGLE", 1, 1, 3);
  Rectangle rr("rectangle1", 5, 5, 7, 4);
  Square s("square1", 4, 4, 10);
  r.printName();
  c.printName();
  //printing the returned values 
  //of parameters and areas of all the 
  //concrete shapes
  cout << "Parameter of Rectangle1; " << rr.parameter() << endl;
  cout << "Parameter of Square1; " << s.parameter() << endl;
  cout << "Parameter of Circle1; " << c.parameter() << endl;
  cout << "Area of Rectangle1; " << rr.area() << endl;
  cout << "Area of Square1; " << s.area() << endl;
  cout << "Area of Circle2; " << c.area() << endl;
  return 0;
}
