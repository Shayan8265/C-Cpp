/*
CH-230-A
a5_p10.[c or cpp or h]
Shayan Ali Khan
skhan01@jacobs-university.de
*/
/*
in the main function we just read the integer and
pass it to our countdown function
our function is recursive and repeats itself by deducting 
1 from the integer until the integer itself becomes a 1.
*/
#include <stdio.h>
int countdown(int x){
    if(x == 1){
     return 1;
    }
    else{
    printf("%d,",x);
    return countdown(x - 1); 
    }
}

 int main() {
    int n, count; 
    scanf("%d", &n);
    count= countdown(n); 
    printf("%d\n", count); 
    return 0; 
 }
 
