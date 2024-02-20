/*
CH-230-A
a3_p7.[c or cpp or h]
Shayan Ali Khan
skhan01@jacobs-university.de
*/
#include <stdio.h>
/*
 firstly we introduced the function"print_form" and
called it after the required input
in the first "for" in the function we started by putting i=n
then this i value was used in the second "for" to print j equal to i, and then we returned
in the first for loop after decreasing i by 1;
*/
void print_form(int n, int m, char c)
{
int i, j, x;
x = m + n - 1;
for (i = n; i > 0; i--)
{
for (j = i; j <= x; j++)
{
printf("%c", c);
}
printf("\n");
}
}
int main()
{
    int n, m;
    char c;
    scanf("%d", &n);
    scanf("%d", &m);
    getchar();
    scanf("%c", &c);
    print_form(n, m, c);
    return 0;
}
