/*
CH-230-A
a2_p6.[c or cpp or h]
Shayan Ali Khan
skhan01@jacobs-university.de
*/
/* firstly i used scanf for the program to read the input
secondly *ptr_one, *ptr_two, *ptr_three was written after int to declare the pointers as integer
later no * was used with the pointers while pointing to x or y
*/
#include <stdio.h>
int main(){
    int x;
    scanf("%d", &x);
    int y;
    scanf("%d", &y);
    int *ptr_one, *ptr_two, *ptr_three;
ptr_one = &x;
ptr_two = &x;
ptr_three = &y;
printf("address of pointer one=%p\n", ptr_one);
printf("address of pointer two=%p\n", ptr_two);
printf("address of pointer three=%p\n", ptr_three);
}