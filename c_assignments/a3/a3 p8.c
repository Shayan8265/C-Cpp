/*
CH-230-A
a3_p9.[c or cpp or h]
Shayan Ali Khan
skhan01@jacobs-university.de
*/
#include <stdio.h>
float function1(float sum, float i)
{

printf("%f\n", sum);
}
float function2(float average, float sum, float i)
{

printf("%f\n", average);
}
int main()
{
    int n;
    float i, sum, average;
for(i=1; i<=10 && n!=-99.0;i++){
scanf("%f", &n);
}
sum = sum + i;
function1(sum,i);
average= sum/i;
function2(average,sum,i);
}