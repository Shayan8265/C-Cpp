/*
CH-230-A
a8_p4.[c or cpp or h]
Shayan Ali Khan
skhan01@jacobs-university.de
*/
#ifndef STACK_H
#define STACK_H

struct stack 
{
	unsigned int count;
	int array[12];//container
};
//function declarations
void push  (struct stack *s,int n);
int  pop   (struct stack *s);
// void empty (struct stack *s);
// int isEmpty(struct stack *s);
// void dc_to_bin(int n);
#endif