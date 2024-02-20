/*
CH-230-A
a6_p1.[c or cpp or h]
Shayan Ali Khan
skhan01@jacobs-university.de
*/
/*
firstly we read the integers and doubles from keyboard
then we call macro along with theirinstructions, and pass 
the parameters. after the swapping is done in the macro
we print all the values and see that they have been swapped 
*/
#include <stdio.h>
#define SWAP(a, b, temp) temp = a, a = b, b = temp
#define SWAP2(x, y, temp) temp = x, x = y, y = temp

int main(){
int a, b, c;
double x, y, z;
scanf("%d\n", &a);
scanf("%d\n", &b);
scanf("%lf\n", &x);
scanf("%lf", &y);
SWAP(a, b, c);
SWAP2(x, y, z);
printf("After swapping:\n");
printf("%d\n", a);
printf("%d\n", b);
printf("%lf\n", x);
printf("%lf\n", y);
return 0;
}