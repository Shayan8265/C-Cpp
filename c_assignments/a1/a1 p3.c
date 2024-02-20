/*
CH-230-A
a1 p3[c]
Shayan Ali Khan
skhan01@jacobs-university.de
*/
#include <stdio.h>

int main() {
float result; /*The result of the division*/
int a = 5;
float b = 13.5;
result = a/b;
printf("The result is %1f\n", result);
return 0;
}
/*explanation; firstly # was not inluded in the fist line so the library couldn't be used.
secondly b was a real number where as the data type used was int that is for integers, so we introduced float in its place
thirdly %d was used that is used for single decimal integer thus showing incorrect result, so i used double in its place*/