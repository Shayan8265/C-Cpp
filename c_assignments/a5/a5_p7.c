/*
CH-230-A
a5_p7.[c or cpp or h]
Shayan Ali Khan
skhan01@jacobs-university.de
*/
/*
we used fgets to read strings from the keyboard
along with a statement to eliminate \n from the string
then we dynamically allocate memory and free it later
as we are dealing with 2 strings including pointer so we
firstly need to combine the second string with the pointer
and the again combine second string with the pointer one
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char string1[100];
    char string2[100];
    char *str;
    fgets(string1, sizeof(string1), stdin);
    string1[strlen(string1)-1] = '\0';
    fgets(string2, sizeof(string2), stdin);
    string2[strlen(string2) - 1] = '\0';
    str = (char *)malloc(sizeof(char) * (strlen(string1) + strlen(string2)));
    if (str == 0)
    {
    exit(1);
    }
    strcpy(str, string1);
    strcat(str, string2);
    printf("Result of concatenation: %s\n", str);
    free(str);
    return 0;
}