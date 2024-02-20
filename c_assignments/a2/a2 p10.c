/*
CH-230-A
a2_p10.[c or cpp or h]
Shayan Ali Khan
skhan01@jacobs-university.de
*/
#include <stdio.h>
int main () {
int n, hours, x;
  scanf("%d", &n); // asking for initial input using scanf
while (n<=0){      // introducing "while" to keep asking for the valid input if initial input was wrong
    scanf("%d", &n);
}
x=1;
hours= x*24; 
printf("%d day = %d hours\n",x,hours); // used printf before while loop so "day" is printed when n=1 and not "days"
x=2;   
while (x<n) // setting range for x, so it prints from 2 till n
{
hours= x*24; 
printf("%d days = %d hours\n",x,hours);
x++;            // comanding to keep printing value of x after increasing it by 1, until x=n
}
hours= x*24;
printf("%d days = %d hours\n",x,hours); //prints when x=n
return 0;
}