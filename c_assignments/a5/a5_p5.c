/*
CH-230-A
a5_p5.[c or cpp or h]
Shayan Ali Khan
skhan01@jacobs-university.de
*/
/*
firstly in the main function we read the int n 
from the keyboard and introduce 2 for loops for both 
v and w so it takes only n elemnts, in for loop we made sure that 
i or j is smaller than n and not n as elements start from 0
after that we passed both arrays and n to all the above functions
in scalar function we just repeatedly added elements into sp 
and then printed sp in the main function as stated
for the maximum and minimum values and their positions 
i used similar functions for both v and w
and then used for loops for min or max 
in min we repeated the loop if the prescribed element is
is greater than the encountered one and allocate this 
element as the prescribed one
for max we inverse this method  
*/

#include <stdio.h>
double scalar(int n, double v[], double w[]){
int i;
double sp = 0.0;
for (i = 0; i < n; i++){
sp += (v[i] * w[i]);
}
return sp;
}

double arr_v(int n, double v[]){
int i, j, position_i = 0, position_j = 0;
double max = v[0], min = v[0];
for (j = 0; j < n; j++){
if (v[j] < min){
min = v[j];
position_j = j;
}}
printf("The smallest = %lf\n", min);
printf("Position of smallest = %d\n", (position_j));
for (i = 0; i < n; i++){
if (v[i] > max){
max = v[i];
position_i = i;
}}
printf("The largest = %lf\n", max);
printf("Position of largest = %d\n", position_i);
return 0;
}

double arr_w(int n, double w[]){
int x, y, position_x = 0, position_y = 0;
double max = w[0], min = w[0];
for (x = 0; x < n; x++){
if (w[x] < min){
min = w[x];
position_x = x;
}}
printf("The smallest = %lf\n", min);
printf("Position of smallest = %d\n", (position_x));
for (y = 0; y < n; y++){
if (w[y] > max){
max = w[y];
position_y = y;
}}
printf("The largest = %lf\n", max);
printf("Position of largest = %d\n", position_y);
return 0;
}

int main(){
int n, i, j;
double v[100], w[100];
scanf("%d", &n);
for (i = 0; i < n; i++){
    scanf("%lf", &v[i]);
}
for (j = 0; j < n; j++){
    scanf("%lf", &w[j]);
}
double z = scalar(n, v, w);
printf("Scalar product=%lf\n", z);
arr_v(n, v);
arr_w(n, w);
return 0;
}

