/*
CH-230-A
a4_p2.[c or cpp or h]
Shayan Ali Khan
skhan01@jacobs-university.de
*/
/*added a library for string length function
used char search to remove \n in fgets
so \n is not taken as a character
printed one char then increases value of i
and then printed next char on a new line with space
last character was printed individually using else if 
so no new line is printed afterwards*/
#include <stdio.h>
#include <string.h>
int main(){
    char string[50];
    fgets(string, sizeof(string), stdin);
    string[strcspn(string,"\n")]=0;
    int i,n;
    n = strlen(string);
    for (i=0; i<n; i++){
    if (i < (n-1)){
        printf("%c\n", string[i]);
        i++;
        printf(" %c\n", string[i]);
    }               
    else if (i == n-1){
    printf("%c\n", string[i]);
    }
    else return 0;
    }
    return 0;
}