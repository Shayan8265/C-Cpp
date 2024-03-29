/*
CH-230-A
a8_p8.[c]
Shayan Khan
skhan01@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    // declaring file pointer
    FILE *read1;
    // file array to contain 
    char filename[50];
    // reading file name
    scanf("%s", filename);
    char c;
    int count = 0;
    int check = 0;
    // File access
    read1 = fopen(filename, "r");
    if (read1 == NULL)
    {
        printf("Error opening file\n");
    }
    // Taking input from read1 into c
    c = fgetc(read1);
    while (c != EOF)
    {
        // Checks for defined cases
        if (c == ' '  ||
            c == '\n' ||
            c == '\t' ||
            c == '.'  ||
            c == '?'  ||
            c == '\r' ||
            c == '!'  ||
            c == ','  )
        {
            check = 0;
        }
        else if (check == 0)
        {
            check = 1;
            count++;
        }
        // reads the input repeatedly until the loop
        c = fgetc(read1);
    }
    // to print the count
    printf("The file contains %d words.\n", count);
    // to close files
    fclose(read1);
return 0;
}