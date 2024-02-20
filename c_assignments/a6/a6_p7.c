/*
CH-230-A
a6_p7.[c or cpp or h]
Shayan Khan
skhan01@jacobs-university.de
*/
/*
So we just used the previous program 
and introduced a new function set3bits()
the function basically needed to to turn 
on the required(input passed by parameter)
places of bits; for this we first assigned three
variables equal to 1 so their least sigfig becomes
1 and just move 1 to left n number of times
by using the bitwise operator '<<'
the value of c was modified three times using OR
and then printed as before
*/
#include <stdio.h>

int set3bits(char c,int j,int k,int l){ 
int bin, i;
int v, w, y;
v = w = y = 1;
bin = 128;
v <<= j;
c = (v | c);
w <<=  k;
c = (w | c);
y <<= l;
c = (y | c);
printf("After setting the bits: ");
for (i = 0; i < 8; i++){
printf("%c", (c & bin) ? '1' : '0');
bin >>= 1;
}
printf("\n");
return 1;
}

int main (){
unsigned char c;
int x, bin, i, j, k, l;
scanf("%c", &c);
scanf("%d", &j);
scanf("%d", &k);
scanf("%d", &l);
x = c;
bin = 128;
printf("The decimal representation is: %d\n", x);
printf("The binary representation is: ");
for (i = 0; i < 8; i++){
printf("%c", (x & bin) ? '1' : '0');
bin >>= 1;
}
printf("\n");
set3bits(c, j, k, l);
    return 0;
}