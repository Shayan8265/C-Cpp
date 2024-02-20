/*
CH-230-A
a8_p4.[c or cpp or h]
Shayan Ali Khan
skhan01@jacobs-university.de
*/
#include <stdio.h>
#include "stack.h"

int main()
{
	struct stack my_stack;
	unsigned int n, m, r;
	scanf("%d", &n);
	m = n;
	my_stack.count = 0;
	while (m > 0)
	{
		r = m % 2;
		push(&my_stack, r);
		m /= 2;
	}
	printf("The binary representation of %d is ", n);
	while (my_stack.count > 0)
	{
		printf("%d", pop(&my_stack));
	}
	printf(".\n");

	return 0;
}

// int main()
// {
// 	char ch;
// 	int done = 0, n;
// 	struct stack s;
// 	s.count = 0;
// //do while used to keep taking input 
// //until done is returned
// 	do
// 	{
// 		scanf("%c", &ch);
// 		switch(ch)
// 		{
// 			case 's':
// 				scanf("%d",&n);
// 				getchar();
// 				if(s.count==12)
// 					printf("Pushing ");
// 				else printf("Pushing %d\n",n);
// 				push(&s,n);
// 				break;
// 			case 'b':
// 			    scanf("%d", &n);
// 				getchar();
// 				dc_to_bin(n);
// 				break;
// 			case 'p':
// 				printf("Popping ");
// 				int k = pop(&s);
// 				if(k!=0)
// 					printf("%d\n",k);
// 				break;
// 			case 'e':
// 				printf("Emptying Stack \n");
// 				empty(&s);
// 				break;
// 			case 'q':
// 				printf("%s\n", "Quit");
// 				done = 1;
// 				break; 
// 		}
// 	}while(!done);
// return 0;
// }