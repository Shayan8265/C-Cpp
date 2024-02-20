/*
CH-230-A
a3_p9.[c or cpp or h]
Shayan Ali Khan
skhan01@jacobs-university.de
*/
//introduced and gave instructions to our defined function
// used 'if' for input greater than 6  
//so it returns -111 when elements in v are less than 6(5 places)
//we used i<n so it only reads values for x only n times
//in x we firstly put elements equal to n for it to later 
//change to input(i) and be used instead of v[]
#include <stdio.h> 
double sum25(double v[], int n){
    double sum; 
    sum= v[2]+v[5];
     return sum; 
}
int main() 
{
int n, i, y=20;
scanf("%d", &n);
if (n>=6){
double x[y]; 
for (i=0; i<n; ++i)
{
   scanf("%lf", &x[i]);
}
printf("sum=%f\n",sum25(x,n));
}
else
    printf("One or both positions are invalid\n");
return 0;
}
