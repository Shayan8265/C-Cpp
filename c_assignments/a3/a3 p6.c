/*
CH-230-A
a3_p6.[c or cpp or h]
Shayan Ali Khan
skhan01@jacobs-university.de
*/
//introducing and writing instructions in our function
// the function is later called by c and parameters replaced with inputs

#include <stdio.h>
float to_pounds(int kg, int g) {
    float pounds, k;
    k= (float) g / 1000 + kg ;
    pounds = k * 2.2 ;
    return pounds;
}
int main  () {
    int kg, g ;
    float c; 
    scanf("%d", &kg);
    scanf("%d", &g);
    c= to_pounds(kg,g);
    printf ("Result of conversion: %f\n", c );
    return 0; 
}