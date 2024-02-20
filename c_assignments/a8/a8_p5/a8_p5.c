/*
CH-230-A
a8_p5.[c]
Shayan Khan
skhan01@jacobs-university.de
*/
#include<stdio.h>
#include<stdlib.h>
#include <ctype.h>

int main() {
char ch1, ch2;
int sum = 0;
//assigning pointer
FILE *fptr;
//opening file
fptr = fopen("chars.txt","r");
//check if file opening is successfull
if(fptr==NULL) {
    printf("File chars.txt is empty or doesn't exist\n: ");
    exit(0);
  }
//reading input from file
fscanf(fptr,"%c",&ch1);
fscanf(fptr,"%c",&ch2);
printf("Reading characters: %c %c", ch1, ch2);
//converting their ASCII to int sum
sum = sum + (int)ch1 +(int)ch2 ;
fclose(fptr);
//opening and writing in new required required. 
fptr=fopen("codesum.txt","w");
fprintf(fptr, "%d", sum);
printf("\nfile successfully created; codesum.txt");
}