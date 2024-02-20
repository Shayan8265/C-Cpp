/*
CH-230-A
a2_p3.[c or cpp or h]
Shayan Ali Khan
skhan01@jacobs-university.de
*/
/*I introduced printf and scanf for hours, days and weeks so the 
program could take the input. then I wrote my own formula for the program 
to calculate the total number of hours from the input,*/
#include <stdio.h>
int main ()
 {
    int hours, days, weeks,time;
    printf("hours=");
    scanf("%d", &hours);
    printf("days=");
    scanf("%d", &days);
    printf("weeks=");
    scanf("%d", &weeks);
    time= weeks*168 + days*24 + hours;
     printf("total number of hours=%d", time);
    return 0;

}