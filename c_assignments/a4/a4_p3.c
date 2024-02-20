/*
CH-230-A
a4_p3.[c or cpp or h]
Shayan Ali Khan
skhan01@jacobs-university.de
*/
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
/*we introduced individual functions for different cases
for max and min we first assigned maximum/minimum as the first character
in array and then compare it with all the other characters in the array
so it should be assigned another value if the character if greater/smaller than
the already existing values
for sum we just repeatedly increased the value of 'sum' in for loop
for geometric mean we used the geo mean function inside for loop as in all other
*/
float max_value (float max[], int g){
     int i;
     float maximum;
    maximum= max[0];
    for(i=0; i< g ; i++){
    if (max[i]>maximum)
    maximum= max[i];
    }
    return maximum;
}
float min_value(float min[], int o){
    int i;
    float minimum;
    minimum= min[0];
    for (i=0; i< o; i++){
        if(min[i]< minimum)
        minimum= min[i];
    }
    return minimum;
}
float sum(float s[], int y){
    int i;
    float sum;
    sum=0;
    for(i=0; i<y ; i++){
    sum= sum + s[i];
    }
    return sum; 
}
float geometric_mean(float arr[], int num) {
     float m=1, gm ;
     int i;
    for(i=0; i<num ; i++){
    m = m*arr[i];
        gm = pow(m, 1.0/num);
    }
    return gm;
    }
    /*all functions predefined are called and printed by another variable
    used for so float values are read from the keyboard until any value is smaller 
    than 0; thus breaking for loop, after that we take input of the char and
    assigned different cases for each character in switch, calling the required functions */
int main() {
    int i;
    float s,min,m,geomean;
    char c;
    float num[15]; 
    for(i=0; i<15 ;i++){
        scanf("%f",&num[i]);
        if (num[i] < 0)
        break;
     }
       getchar();
    scanf("%c", &c);
    switch (c){
        case 'm':
        geomean= geometric_mean(num, i);
        printf("%f", geomean);
        break;
        case 'h':
         m = max_value(num,i);
         printf("%f", m);
        break;
        case 'l':
        min = min_value(num,i);
        printf("%f", min);
        break;
        case 's':
        s = sum(num, i);
        printf("%f", s);
        break;
        default:
        printf("wrong character input");
    }
    return 0 ;
}