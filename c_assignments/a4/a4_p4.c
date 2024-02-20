/*
CH-230-A
a4_p4.[c or cpp or h]
Shayan Ali Khan
skhan01@jacobs-university.de
*/
/*
used fgets inside for loop so it keeps taking input until an enter 
is pressed which breaks the for loops and ends the code
then we called our own function with required instructions 
and printed the desired result
in the function we used ASCII code to identify all the consonants \
and made sure that 'z' wasn't increased each time it faced a vowel or 
any other character then consonants
*/
#include <stdio.h>
#include <string.h>
 int count_consonants(char str[]){
    int z, x;
    z= 0;
    for(x=0; str[x] !='\0'; x++){
        if(((str[x] >  65 && str[x] < 90) || (str[x] > 97 && str[x] < 122))
        && str[x] != 69 && str[x] != 73
        && str[x] != 79 && str[x] != 85 
        && str[x] != 101 && str[x] != 105
        && str[x] != 111 && str[x] != 117 ){
        z++;}
        }
        return z;
 }
 int main() {
    int x ,y[10], w;
    char string[100];
    for (x = 0; string[0] != '\n' ; x++){
         fgets(string, sizeof(string), stdin);
         y[x] = count_consonants(string);
         if (string[0] == '\n')
             break; 
         w=x;
    }
    for (x = 0; x <= w; x++){
        printf("Number of consonants=%d\n", y[x]);
        }
        return 0;
    }