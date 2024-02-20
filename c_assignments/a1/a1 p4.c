/*
CH-230-A
a1 p4[c]
Shayan Ali Khan
skhan01@jacobs-university.de
*/
#include <stdio.h>

int main(){
double x=17.0 , y=4.0 ;
printf("x=%.0f\n", x);
printf("y=%.0f\n", y);
int sum ;
sum = x + y;
printf ("sum=%d\n", sum);
int product = x*y ;
printf("product=%d\n", product);
int difference = x-y;
printf ("difference=%d\n", difference);
double division = x/y ;
printf("division=%.6f\n", division);
int a=17,b=4;
int remainder = a%b;
printf("remainder of division=%d\n", remainder);
}

/* i tried this code for remainder but it is not working
int remainder= x % y ;
printf("The remainder of the division of x and y is %d\n", remainder);
now it is running as remainder operator is only */
