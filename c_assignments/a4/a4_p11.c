/*
CH-230-A
a4_p11.[c or cpp or h]
Shayan Ali Khan
skhan01@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
/*
in the function we used counter so whenever a character 
is read by the keyboard its number increases
did memory allocation for str 
and used for loop to assign each value of i 
in array str to i in str2
later gave print commands for the required characters
also freed both str2 and str to prevent memory leak
*/
int count_insensitive(char *str, char c){
	int i, counter =0;
	for(i=0; i<strlen(str); i++){
		if(tolower(c)==tolower(str[i])){
			counter++;
	}
	}
	return counter;
}
int main(){
	
	int i;
	char *str,*str2;
	str = (char*)malloc(sizeof(char)*50);
	if(!str)
		return 1;
	
	fgets(str,50,stdin);
	str[strlen(str)-1]='\0';
	str2 = (char*)malloc(sizeof(char)*strlen(str));
	if(!str2)
		return 1;
	for(i=0;i<strlen(str);i++){
		str2[i]=str[i];
	}
	free(str);
	printf("occurance of %c is %d times.\n",'b',count_insensitive(str2,'b'));
	printf("occurance of %c is %d times.\n",'H',count_insensitive(str2,'H'));
	printf("occurance of %c is %d times.\n",'8',count_insensitive(str2,'8'));
	printf("occurance of %c is %d times.\n",'u',count_insensitive(str2,'u'));
	printf("occurance of %c is %d times.\n",'$',count_insensitive(str2,'$'));
	free(str2);
	return 0;
}
