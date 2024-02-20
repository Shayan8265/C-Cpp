/*
CH-230-A
a8_p7.[c]
Shayan Khan
skhan01@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
//opening the first 2 files for reading input
//the 3rd file will be created as it was opened
//for writing
FILE *fp1 = fopen("text1.txt", "r");
FILE *fp2 = fopen("text2.txt", "r");
FILE *fp3 = fopen("text12.txt", "w");
char c;
if (fp1 == NULL || fp2 == NULL || fp3 == NULL)
{
    //checking if files opened successfully
    puts("Could not open files successfully!");
    exit(0);
}
//merging the elements of he files by using fputc
//two times
while ((c = fgetc(fp1)) != EOF)
    fputc(c, fp3);
fprintf(fp3, "%s\n","");
while ((c = fgetc(fp2)) != EOF)
    fputc(c, fp3);
printf("Merged text1.txt and text2.txt into text12.txt");
fclose(fp1);
fclose(fp2);
fclose(fp3);
return 0;
}