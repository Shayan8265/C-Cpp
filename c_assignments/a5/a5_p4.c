/*
CH-230-A
a5_p4.[c or cpp or h]
Shayan Ali Khan
skhan01@jacobs-university.de
*/
/*
we changed this function from a5_p2 by introducing a pointer arr
and then dynamically allocating memory using malloc
and in the end free the memory to prevent data leak
*/
#include <stdio.h>
#include <stdlib.h>
void divby5(float arr[], int size){
float x;
int i;
for (i = 0; i < size; i++){
x = arr[i] / 5;
printf("%.3f ", x);
}
printf("\n");
}

int main(){
int i, n, j;
scanf("%d", &n);
float *arr;
arr = (float *) malloc ( sizeof (float) * n );
for (j = 0; j < n; j++){
scanf("%f", &arr[j]);
}
printf("Before:\n");
for (i=0; i < n; i++){
printf("%.3f ", arr[i]);
}
printf("\nAfter:\n");
divby5(arr, n);
free(arr);
return 0;
}