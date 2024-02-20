/*
CH-230-A
a4_p1.[c or cpp or h]
Shayan Ali Khan
skhan01@jacobs-university.de
*/
//
#include <stdio.h>

int main(){
 int upper, i; 
 double x, lower;
 double acircle;
 double pcircle;
  scanf("%lf", &x);
 scanf("%d",&upper); 
 scanf("%lf", &lower);
 for(i=0 ; i<= upper ; i++){
 acircle= 3.141592653589793238 * (x * x);
 pcircle= 2 * (3.141592653589793238 * x); 
 printf("%lf ", x);
  x = x +lower;
 printf("%lf ", acircle);
 printf("%lf\n", pcircle);
 }
 return 0;
}

