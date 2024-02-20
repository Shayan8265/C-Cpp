/*
CH-230-A
a6_p6.[c or cpp or h]
Shayan Khan
skhan01@jacobs-university.de
*/
/*
we put bin as 128 so its first bit is 1 
so we use and operator for x and bin as we 
are comparing the first bit of x and bin 
which inturn prints 1 if true and 0 if false
then moving bin to right that shifts 1 to next bit
to be compared with next bit of x
*/
#include <stdio.h>
int main (){
unsigned char c;
int x, bin, i;
scanf("%c", &c);
x = c;
bin = 128;
printf("The decimal representation is: %d\n", x);
printf("The binary representation is: ");
for (i = 0; i < 8; i++){
printf("%c", (x & bin) ? '1' : '0');
bin >>= 1;
}
printf("\n");
    return 0;
}