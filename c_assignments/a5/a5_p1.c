/*
CH-230-A
a5_p1.[c or cpp or h]
Shayan Ali Khan
skhan01@jacobs-university.de
*/
/*
declared and used scanf for reading the values of
the integer and charcter from keyboard
used 2 for loops to for a 2 dimenstional table
started the inner j with x characters and decreased 
x accordingly
*/
#include <stdio.h>
int main (){
    int x,i,j;
    char y;
    scanf("%d\n", &x);
    scanf("%c", &y);
     getchar();
    for(i=1; i<=x; i++){
        for(j=x; j>=i; j--){
            printf("%c", y);
        }
        printf("\n");
    }
return 0;
}