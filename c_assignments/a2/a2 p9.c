/*
CH-230-A
a2_p9.[c or cpp or h]
Shayan Ali Khan
skhan01@jacobs-university.de
*/
/* i used the ASCII tables to assign values to digits, letters 
and other symbols to be used in 'if else' statements and give correct results*/
#include <stdio.h>
int main()
{
char c;
scanf("%c", &c);
if(c>=48 && c<=57)
{
printf("%c is a digit\n",c);
}
else if ((c>=65 && c<=90) || (c>=97 && c<=122))
{
printf("%c is a letter\n",c);
}
else
{
printf("%c is some other symbol\n",c);
}
}