/*
CH-230-A
a5_p2.[c or cpp or h]
Shayan Ali Khan
skhan01@jacobs-university.de
*/
/*
firstly we introduce the void function and 
carry out the division by using a for loop
only 3 decimal places were printed to match the output
in the main we predefined the elements then printed
and then passed as parameters to the void function 
*/
#include <stdio.h>

void divby5(float arr[], int size){
float x;
int i;
for (i = 0; i < size; i++){
x = arr[i] / 5;
printf("%.3f ", x);}
printf("\n");
}

int main(){
int i, size = 6;
float arr[]= {5.5, 6.5, 7.75, 8.0, 9.6, 10.36};
printf("Before:\n");
for (i=0; i < size; i++){
printf("%.3f ", arr[i]);
}
printf("\nAfter:\n");
divby5(arr, size);
return 0;
}