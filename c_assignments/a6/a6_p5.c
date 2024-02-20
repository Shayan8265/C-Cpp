/*
CH-230-A
a6_p5.[c or cpp or h]
Shayan Khan
skhan01@jacobs-university.de
*/
/*
firstly we introduced an int bit that is 0
so all its bits are 0
we identified different sizes for mask
for different sizes of bits
and in the for loop we used
 '&' with x to only compare the
last digit of the binary representation and print
it first, thus printing in reverse
1 if true or 0 if false.
then bit is moved to left
and x is moved to right to compare the next
variable and to repeat the process over and over
again
*/
#include <stdio.h>
int main (){
unsigned char c;
int x, bit, i, size;
scanf("%c", &c);
x = c;
if (x > 128)
size = 8;
else if (x > 64)
size = 7;
else if (x > 32)
size = 6;
else if (x > 16)
size = 5;
else if (x > 8)
size = 4;
else if (x > 4)
size = 3;
else if (x > 2)
size = 2;
bit = 0;
printf("The decimal representation is: %d\n", x);
printf("The backwards binary representation is: ");
for (i = 0; i < size; i++){
bit <<= 1;
printf("%c", (bit | (x & 1)) ? '1' : '0');
x >>= 1;
}
printf("\n");
    return 0;
}