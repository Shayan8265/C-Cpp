/*
CH-230-A
a2_p5.[c or cpp or h]
Shayan Ali Khan
skhan01@jacobs-university.de
*/

/* firstly i used printf and scanf for the program to read and print the input
secondly *ptr_a was written after int to declare the pointer as an integer
later no * was used with the pointer as i was pointing to a
in the next line * was used again to increase the value of a by 5 and not the bytes of pointer
*/
#include <stdio.h>
int main(){
int a;
printf("a=");
scanf("%d", &a);
int *ptr_a;
ptr_a= &a;
printf ("address of a: %p\n", ptr_a) ;
*ptr_a= *ptr_a + 5;
printf("modified value of a=%d\n", a);
printf("address of modified value of a: %p\n", ptr_a);
}