/*
CH-230-A
a3_p2.[c or cpp or h]
Shayan Ali Khan
skhan01@jacobs-university.de
*/
#include <stdio.h>
int main()
{
    char ch, k;
    int n, i;
//asking for input using 'scanf' and using
//'printf' for identifying which values to enter at input
printf("ch="); 
scanf("%c", &ch);
printf("n=");
scanf("%d", &n);
/*didn't use while statement to prevent
 wrong input as stated in instructions*/
i=n;
for (i=0 ; i<n ; i++){
k = ch - i;
printf("%c,", k);
} 
/*printing the last statement outside 'for'so 
no 'comma' is printed after last character*/
k = ch - i;
printf("%c", k);
return 0;
}