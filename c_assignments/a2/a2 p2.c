/*
CH-230-A
a2_p2.[c or cpp or h]
Shayan Ali Khan
skhan01@jacobs-university.de
*/
/*firstly we needed to introduce printf for the string to appear in the terminal
then had to introduce scanf so the program is able to read our assigned input value
and give the output accordingly*/
#include <stdio.h>
int main()
{
  char character;
    scanf("%c", &character);
  printf("character=%c\n", character);
  printf("decimal=%d\n", character);
  printf("octal=%o\n", character);
  printf("hexadecimal=%x\n", character);
  return 0;
}