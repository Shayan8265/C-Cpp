/*
CH-230-A
a3_p3.[c or cpp or h]
Shayan Ali Khan
skhan01@jacobs-university.de
*/
// we introduced a function and called it later in the main function
//the function does the conversion after taking values from the main funtion
//we had to introduce x as float to do all conversion in float
//as the result and values of conversion should be same
#include <stdio.h>


float convert(int cm) {
    float km,x;
    x=cm;
    km =  x/100000 ;
    return km; 
}


int main() {
    int cm ;
    float c; 
     scanf("%d", &cm);
     c = convert(cm); 
     printf("Result of conversion: %f\n", c); 
     return 0; 
}

