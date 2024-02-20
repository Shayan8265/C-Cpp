/*
CH-230-A
a8_p4.[c or cpp or h]
Shayan Ali Khan
skhan01@jacobs-university.de
*/
#include <stdio.h> 
#include "stack.h"
//pushes an int in the stack 
//prints Stack Overflow if there are more than 12 elems.
void push(struct stack *s,int n)
{
	if(s->count ==12)
	{
		printf("%s\n", "Stack Overflow");
		return;
	}
	s->array[s->count++] = n;
}
//pops and returns the top element
int pop(struct stack *s)
{
	if(s->count == 0)
	{
		printf("%s\n", "Stack Underflow");
		return 0;
	}
	int a = s->array[s->count-1];
	s->array[s->count-1] = 0;
	s->count--;
	return a;
}

// //resets the count to 0 and pops every element
// void empty(struct stack *s)
// {
// 	if(isEmpty(s))
// 		return;
// 	while(!s->count==0)
// 	{
// 		printf("%d ", pop(s));
// 	}
// 	printf("\n");
// }
// //checks is list is empty
// int isEmpty(struct stack *s)
// {
// 	return (s->count == 0);
// }

// void dc_to_bin(int n){
//     if (n == 0 ){
//         printf("0");
//         return ; 
//     }
//     // we are going to store the binary values
//     int binaryNum[32];
//     int i=0 ; 
//     for(; n>0;){
//         binaryNum[i++]= n % 2;
//         n /=2; 
//     }
//     // we are  going to print the array in reverse.
//     for (int j = i-1 ; j >=0 ; j--)
//     printf("The binary representation of %d", binaryNum[j]);
// }