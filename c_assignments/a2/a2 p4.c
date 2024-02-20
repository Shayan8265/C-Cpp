/*
CH-230-A
a2_p4.[c or cpp or h]
Shayan Ali Khan
skhan01@jacobs-university.de
*/
/*I introduced scanf for a, b and h so the 
program could take the input. then I wrote my own formula for the program 
to calculate the areas from the input,*/
#include <stdio.h>
int main()
 {
float a, b, h;

scanf("%f", &a);

scanf("%f", &b);

scanf("%f", &h);
float s= a*a;
float r= a*b;
float t= 0.5*a*h;
float tr= 0.5*(a+b)*h;
printf("square area=%.6lf\n", s);
printf("rectangle area=%.6f\n", r);
printf("triangle area=%.6f\n", t);
printf("trapezoid area=%.6f\n", tr);
}