/*CH-230-A
a7_p5.[c]
Shayan Khan
skhan01@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
//declaring funcitons as compare which are called by
//qsort() and returned the required value
int compare2(const void *w_p , const void *q_p){
    int w=*(int*)w_p;
     int q=*(int*)q_p;
     return q-w;
}

//same as compare just changed the return value
//which changes the order in which qsort prints
int compare(const void *x_p , const void *y_p){
  
     int x=*(int*)x_p;
     int y=*(int*)y_p;
     return x-y;
}

int main(){
    int n, i;
    char c;
    scanf("%d", &n);
//taking input for n values
    int arr[n]; 
    for (i=0 ; i<n ; i++){
        scanf("%d", &arr[i]);  
    }
//using while to only exit when a specific case is entered
    while (1){
    getchar();
    scanf("%c", &c);
//scanf used for using different test cases
//by using the input 
    switch (c){
     case 'a':
//qsort used for printing in order.
    qsort(arr, n , sizeof(int), compare);
     for(i=0 ; i<n ; i++){
    printf("%d ", arr[i]);
    }
    printf("\n");
    break;
    case 'd':
    qsort(arr, n , sizeof(int), compare2);
     for(i=0 ; i<n ; i++){
    printf("%d ", arr[i]);
    }
    printf("\n");
    break;
    case 'e':
    exit(1); 
    }
  }
     return 0;
}