/*
CH-230-A
a8_p9.[c]
Shayan Khan
skhan01@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    // input for total no. of files
    int n;
    scanf("%d", &n);
    getchar();

    // declaring file pointers
    char filename[n][30];
    FILE *write1;
    FILE *temp;
    char temp1[64];
    // opening/creating an output file by using w
    write1 = fopen("output.txt", "w");
    if (write1 == NULL)
    {
        printf("Error opening file\n");
    }
    for (int i = 0; i < n; i++)
    {
        scanf("%s", filename[i]);
    }
    printf("Concating the content of %d files ...\n", n);
    printf("The result is:\n");
    // for newline after writing the file 
    char newline[] = "\n";
    // for loop for total no. of files
    for (int i = 0; i < n; i++)
    {
        temp = fopen(filename[i], "r");
        fseek(temp, 0, SEEK_END);
        int size = ftell(temp);
        fseek(temp, 0, SEEK_SET);
        fread(temp1, sizeof(char), size, temp);
        temp1[size] = '\0';
        printf("%s\n", temp1);
        fwrite(temp1, sizeof(char), size, write1);
        fclose (temp);
        fwrite(newline, sizeof(char), 1, write1);
    }
    printf("The result was written into output.txt\n");
    // Closing the file we created by pointer. 
    fclose(write1);
    return 0;
}