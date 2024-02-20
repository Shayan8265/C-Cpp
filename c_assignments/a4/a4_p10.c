/*
CH-230-A
a4_p10.[c or cpp or h]
Shayan Ali Khan
skhan01@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
 
/*
assigned and defined function for different values
that were taken from the passed parameters
*/
void proddivpowinv(float a, float b, float *prod,
 float *div, float *pwr, float *invb)
{
    *prod = a * b;
    *div = a / b;
    *pwr = pow(a, b);
    *invb = (1 / b);
}
 
int main()
{
    float a, b, prod, div, pwr, invb; 
    printf("vlue of a and b=\n");
    scanf("%f", &a);
    scanf("%f", &b);
    proddivpowinv(a, b, &prod, &div, &pwr, &invb); 
    printf("Product is: %f\n", prod);
    printf("Division is: %f\n", div);
    printf("A to the power B is: %f\n", pwr);
    printf("Inverse of B is: %f\n", invb);
    return 0;
}
