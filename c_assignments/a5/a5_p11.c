/*
CH-230-A
a5_p11.[c or cpp or h]
Shayan Ali Khan
skhan01@jacobs-university.de
*/
/*
firstly we read the integer from keyboard 
in the recursive prime function we used different 
possibilities and returned the required number
if 1 returned then it is prime else it will not be
prime.
*/
#include <stdio.h>
int prime(int n, int y){
    if (n == 1){
    return 0;
    }
    if(n == 2){
    return 1;
    }
    else if (n%y == 1){
    return 1;
    }
    else if (n%y == 0){
        return 0;
    }
    else {
        return prime(n, y-1);
    }
}

int main() {
    int x, y =2; 
    scanf("%d", &x); 
     if(prime(x, y)==1){
      printf("%d is prime", x); 
     }
        else{
         printf("%d is not prime",x); 
        }
    printf("\n");
     return 0; 
}