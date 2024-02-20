/*
CH-230-A
a4_p8.[c or cpp or h]
Shayan Ali Khan
skhan01@jacobs-university.de
*/
/*
for the elements below the other diagonal 
it could be calculated that if j is 2 i is 1 and  vice versa 
plus the corner one is j2 and i2 so we can see that 
their sum is always smaller than n  
in the whole code we used a for loop inside a for loop
in order to construct a matrix type table 
the first loop is for rows and second is for columns
we used 2 functions in the first constructed a table by 
reusing the for loops
and in second function we stated if the outer loop variable
is smaller than inner loop it will be printed 
*/
#include <stdio.h>
void function_a(int array[30][30], int n)
{
    int i, j;
    for (i = 0; i < n; i++){
    for (j = 0; j < n; j++){
    printf("%d ", array[i][j]);
}
    printf("\n");
}
}
void function_b(int array[30][30], int n){
int i,j; 
for (i=0 ; i<n ; i++){
for(j=0; j<n; j++){
if(i+j>=n){
printf("%d ", array[i][j]);

}}}
}
int main(){
    int array[30][30];
    int j,n,i; 
    scanf("%d", &n); 
    for(i=0; i<n; i++){
        for (j=0 ; j<n; j++)
        scanf("%d", &array[i][j]);
    }
    printf("The entered matrix is:\n");
    function_a(array, n);
    printf("Under the secondary diagonal:\n");
    function_b(array, n); 
    printf("\n");
    return 0; 
 }