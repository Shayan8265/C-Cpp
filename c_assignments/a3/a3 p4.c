/*
CH-230-A
a3_p4.[c or cpp or h]
Shayan Ali Khan
skhan01@jacobs-university.de
*/
//firstly we needed to put idx = idx for 'for loop'
// so idx is stored as a value
//then we needed to call the function by y as 
//the function was an int but we needed a char
//also had to put k equal to g to define y
//also used a different char for parameter g
#include <stdio.h>
int position(char str[], char c)
{
int idx;
for (idx=1; str[idx] != c ; idx++)
idx = idx;
return idx;
}
int main() {
    int y;
char k, line[80];
k = 'g';
printf("Enter string:\n");
fgets(line, sizeof(line), stdin);
y = position(line,k);
printf("The first occurrence of 'g' is: %d\n", y);
}