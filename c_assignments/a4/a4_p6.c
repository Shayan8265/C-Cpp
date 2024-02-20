/*
CH-230-A
a4_p6.[c or cpp or h]
Shayan Ali Khan
skhan01@jacobs-university.de
*/
/*
in the function we used 2 for loops for max and 2max
similar to a4_p3 and then claculated product, 
for memory allocation we introduced a pointer and 
assigned it to the array 
later we freed the memory to prevent memory leak
*/
#include <stdio.h>
#include <stdlib.h>
 int max(int arr[], int n) {
     int i, x = arr[0];
     int max, s_highest=0;
    max= arr[0];                    
    for(i = 0; i < n ; i++){
    if (arr[i] > max){
    max = arr[i];
    }
    if(x < max){
    s_highest = x;
    }}
    printf("highest=%d\n", max);
    printf("second highest=%d\n", s_highest);
 return 0;
 }
 int main(){

    int n,i;
    scanf("%d", &n);
    int array[n];
    int *par = &array[n];
    par= (int*)malloc(sizeof(par)* n);
    for(i=0 ; i<n ; i++){
        scanf("%d", &array[i]);
    }
    max(array,n);
    free(par);
    return 0;
 }