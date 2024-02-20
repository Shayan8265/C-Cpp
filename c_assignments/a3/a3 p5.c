
/*
CH-230-A
a3_p5.[c or cpp or h]
Shayan Ali Khan
skhan01@jacobs-university.de
*/
//defined array with n elements which later converts to i elements 
//with respect to the input
//we used a for loop and defined the variable from 0 to n
//so it asks for values n no. of times
//then we used switch and assigned each case for known variables
//and gave the instructions to each individual case
//used default for all other characters
//so it carries out default instructions
#include <stdio.h> 
int main() {
    int n, i;
    char c;
    float sum,x, F; 
    x=0;
    scanf("%c\n", &c);
    scanf("%d\n", &n); 
    double temprature[n]; 
    for(i=0 ; i<n ; i++){
        scanf("%lf",&temprature[i]);
        x= x + temprature[i];
    }
    switch (c) {
        case 's':
        sum= x;
         printf("%f", sum);
        break;
        case 'p':
        for(i=0 ; i<n ; i++){
        printf("%lf,",temprature[i]);
        }
        break;
        case 't':
        for(i=0 ; i<n ; i++){
        F= (9*temprature[i]/5) +32;
        printf("%f,", F);
        }
        break;
    }
   
    return 0; 
}