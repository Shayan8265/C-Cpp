/*
CH-230-A
a4_p5.[c or cpp or h]
Shayan Ali Khan
skhan01@jacobs-university.de
*/
/* we just used a pointer instead of a variable for the for loop
used fgets inside for loop in main 
so it keeps taking input until an enter 
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
    int z;
    char *par;
    z= 0;
    for(par = &str[0]; *par !='\0'; par++){
        if(((*par >  65 && *par < 90) || (*par > 97 && *par < 122))
        && *par != 69 && *par != 73
        && *par != 79 && *par != 85 
        && *par != 101 && *par != 105
        && *par != 111 && *par != 117 ){
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