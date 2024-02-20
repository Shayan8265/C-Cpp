/*CH-230-A
a6_p4.[c or cpp or h]
Shayan Khan
skhan01@jacobs-university.de
*/
/*
Firstly we read the the integer n to assigns
the size of the array of the vector as we 
declared multiple vectors, we used mutiple mallocs
to dynamically allocate the memory.
Then we will calcualte the intermwediate vlaue and scalar product.
at the end we will print the result
and free the unused space.
*/
#include <stdio.h>
#include <stdlib.h>
#define INTERMEDIATE
int main() {
    int n ,i ,p;
    int *v1, *v2, *sp;
    scanf("%d", &n);

    v1 = (int*)malloc(sizeof(int)* n);
    if(v1==NULL){
        exit(1);
    }
    v2 = (int*)malloc(sizeof(int)* n);
    if(v2==NULL){
        exit(1); 
    }
    sp = (int*)malloc(sizeof(int)* n );
    if(sp==NULL){
    exit(1); 
    }

    for(i = 0; i < n; i++){
        scanf("%d", &v1[i]);
    }
    for(i = 0 ; i < n; i++){
        scanf("%d", &v2[i]); 
    }
p = 0;
    for (i = 0; i < n; i++){
        sp[i]= (v1[i] * v2[i]);
        p = p + sp[i];
    }
    #ifdef INTERMEDIATE
    printf("The intermediate product values are:\n");
    for(i = 0 ; i < n ; i++){
        printf("%d\n",sp[i]);
    }
    #endif

    printf("The scalar product is: %d\n", p);
    free (v1);
    free(v2);
    free(sp);
    return 0; 
}
