/*
CH-230-A
a2 p1[c]
Shayan Ali Khan
skhan01@jacobs-university.de
*/
#include <stdio.h>

int main(){
  /*firstly we needed to introduce print for the string to appear in the terminal 
  then had to introduce scanf so the program is able to read our assigned input value 
  and do the calculations accordingly*/
   double a , b;
  printf("value of a=");
  scanf("%lf", &a);
  printf("value of b=");
  scanf("%lf", &b);
  double sum = a + b ;
  printf("sum of doubles=%lf\n", sum);
  double difference;
  difference= a-b;
  printf("difference of doubles=%lf\n", difference);
  double square= a*a;
  printf("square=%lf\n",square);

  int x , y;
  printf("value of integer x=");
  scanf("%d", &x);
  printf("value of integer y=");
  scanf("%d", &y);
  int sum2 = x+y , product2 = x*y ;
  printf("sum of integers=%d\n", sum2);
  printf("product of integers=%d\n", product2);

  char c , d;
  printf("charachter c=");
  getchar();
  scanf("%c", &c);
  printf("charachter d=");
  getchar();
  scanf("%c", &d);
  int sum3 = c+d;
  int product3= c*d;
  printf("sum of chars=%d\n", sum3);
  printf("product of chars=%d\n", product3);
  // below the print form is in letters using ASCII table by introducing %c instead of %d
  printf("sum of chars=%c\n", sum3);
  printf("product of chars=%c\n", product3);
  return 0; 
 
}