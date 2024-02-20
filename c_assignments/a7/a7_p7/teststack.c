/*
CH-230-A
a7_p7.[c or cpp or h]
Shayan Ali Khan
skhan01@jacobs-university.de
*/
#include <stdio.h>
#include "stack.h"

int main()
{
	char ch;
	int done = 0, n;
	struct stack s;
	s.count = 0;
//do while used to keep taking input 
//until done is returned
	do
	{
		scanf("%c", &ch);
		switch(ch)
		{
			case 's':
				scanf("%d",&n);
				getchar();
				if(s.count==12)
					printf("Pushing ");
				else printf("Pushing %d\n",n);
				push(&s,n);
				break;
			case 'p':
				printf("Popping ");
				int k = pop(&s);
				if(k!=0)
					printf("%d\n",k);
				break;
			case 'e':
				printf("Emptying Stack ");
				empty(&s);
				break;
			case 'q':
				printf("%s\n", "Quit");
				done = 1;
				break; 
		}
	}while(!done);
return 0;
}