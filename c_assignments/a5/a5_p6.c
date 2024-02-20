/*
CH-230-A
a5_p6.[c or cpp or h]
Shayan Ali Khan
skhan01@jacobs-university.de
*/
/*
in the function we just read the integer n 
which tells us the total number of inputs
then we used the for loop while taking inputs 
and allocated each integer to a position in 
the array
we also used pointer to allocate it to the position in array 
where the element is negative 
latyer we just minus the ptr and arr to give the number of elements
before the negative number is encountered
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main(){
    int n;
    scanf("%d", &n);
    float arr[n], *ptr;
    for (int i = 0; i < n; i++){
        scanf("%f", &arr[i]);
    }
    for (ptr = arr; ptr < arr + n ; ptr++){
        if (*ptr < 0){
            break;
        }}
printf("Before the first negative value: %ld elements\n", (ptr - arr));
return 0;
}