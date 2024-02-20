/*
CH-230-A
a2_p8.[c or cpp or h]
Shayan Ali Khan
skhan01@jacobs-university.de
*/
/*I used the if else operators to print a statement in any of the two case scenarios
i used a%2 and a%7 because of the concept : remainder is 0 if a number is divided by its factor
i used && operator to print the correct statements if both a%2=0 and a%7=0 are TRUE */
#include <stdio.h>
int main()
{
int a;
scanf("%d", &a);
if (a%2==0 && a%7==0)
{
printf("The number is divisible by 2 and 7\n");
}
else {
printf("The number is NOT divisible by 2 and 7\n");
}
return 0;
}