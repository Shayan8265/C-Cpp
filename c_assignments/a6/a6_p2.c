/*
CH-230-A
a6_p2.[c or cpp or h]
Shayan Khan
skhan01@jacobs-university.de
*/
/*
In this program we used a Macro in which
we used a bitwise operator as well as 
a compact if else statement
we first took the input and assigned it equal to 
integer x so it prints the decimal value
the we passed this decimal value to the A in macro 
alon with another 0 and 1 
so after comparing  x with the binary representation 
if the last digit is 1 the it would return 1(C) else it 
it would return 0(B)
*/
#include <stdio.h>
#define  MAC(A, B, C) ( (A & 1) ? (C) : (B))
int main (){
unsigned char c;
int x;
int y;
scanf("%c", &c);
x = c;
printf("The decimal representaion is: %d\n", x);
y= MAC(x, 0, 1);
printf("The least significant bit is: %d\n", y);
    return 0;
}