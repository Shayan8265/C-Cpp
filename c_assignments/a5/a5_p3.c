/*
CH-230-A
a5_p3.[c or cpp or h]
Shayan Ali Khan
skhan01@jacobs-university.de
*/
/*
in the first function we 
read the string and give the number of lowercase letters 
by using ASCII table and the for loop
each time our loop encounters a 
lowercase number the value of the counter increreases
in the main function we used while to repeatedly take a 
string input until ENTER(\n) is entered, within
the same while loop we keep printing the numbers by calling
the above function. 
*/
#include <stdio.h>
#include <string.h>
int count_lower(char* str) {
int i,n,c=0;
for(i = 0; i < strlen(str); i++) {
    n=(int)str[i];
    if(n >= 97 && n <= 122) {
    c++;
}}
return c;
}

int main() {
char str[50];
while(1) {
fgets(str,sizeof(str),stdin);
str[strlen(str)-1]='\0';
if(str[0]=='\0') {
break;
}
printf("Number of lowercase characters within a string:%d\n",count_lower(str));
}
return 0;
}