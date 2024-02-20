/*
CH-230-A
a4_p9.[c or cpp or h]
Shayan Ali Khan
skhan01@jacobs-university.de
*/
/*
in the function we used 2 for loops for max and min
just like in a4_p3 and then claculated product, 
for memory allocation we introduced a pointer and 
assigned it to the array 
later we freed the memory to prevent memory leak
*/
#include <stdio.h>
#include <stdlib.h>
 int prodminmax(int arr[], int n) {
     int i, product;
     float max,min;
    max= arr[0];                    
    for(i=0; i<n ; i++){
    if (arr[i]>max)
    max= arr[i];
    }
    min= arr[0];
    for (i=0; i<n; i++){
        if(arr[i]< min)
        min= arr[i];
    }
    product = max * min ;
    return product;
 }
 int main(){

    int n,i,x;
    scanf("%d", &n);
    int array[n];
    int *par = &array[n];
    par= (int*)malloc(sizeof(par)* n);
    for(i=0 ; i<n ; i++){
        scanf("%d", &array[i]);
    }
    x = prodminmax(array,n);
    printf("%d", x);
    free(par);
    return 0;
 }