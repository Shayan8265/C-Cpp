/*
CH-230-A
a6_p3.[c or cpp or h]
Shayan Khan
skhan01@jacobs-university.de
*/
/*
here we used 4 macros in 2 pairs 
in MIN we returned the min of 2 integers
the in MIN2 we compared the min with the third
int and returned the smaller of those 2
same was done with MAX and MAX2 but the greater 
number was returned 
then in the main func we used the formula 
to find the mid range.
w needed to be a float so we typecasted the min and 
max and used in the formula
*/
#include <stdio.h>
#define MIN(x, y) ((x < y) ? x : y)
#define MIN2(x, y, z) ( (MIN(x, y) < z) ? MIN(x, y) : z)
#define MAX(x, y) ((x > y) ? x : y)
#define MAX2(x, y, z) ( (MAX(x, y) > z) ? MAX(x, y) : z)
int main (){
int x, y, z, n, m;
float w;
scanf("%d", &x);
scanf("%d", &y);
scanf("%d", &z);
n = MIN2(x, y, z);
m = MAX2(x, y, z);
w = (float) (n + m) / 2;
printf("The mid-range is: %.6f\n", w);
    return 0;
}