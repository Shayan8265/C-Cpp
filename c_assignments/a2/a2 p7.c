/*
CH-230-A
a2_p7.[c or cpp or h]
Shayan Ali Khan
skhan01@jacobs-university.de
*/
/* we needed to add braces so the statement can be enclosed 
and the program can identify/diffrentiate the end point of the print command*/
#include <stdio.h>
int main()
{
int i=8 ;
while ( i>= 4)
{
printf("i is %d\n", i);
i--;
}
printf("That's it.\n");
return 0;
}