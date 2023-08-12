#include<stdio.h>
#include<stdlib.h>

int main ()
{
    int *ptrarr;
    ptrarr = (int*)malloc(5*sizeof(int));   //malloc allocates memory but does not initialize each block of it(vlaue at every index)
    printf ("%u\n", ptrarr);
    for(int i = 0 ; i<5; i++)
    {
        scanf("%d",&ptrarr[i]);
    }

    printf("Printing of Array \n");
    for ( int i = 0 ; i<5 ; i++)
    {
        printf("%d \n",ptrarr[i]);
    }
    free(ptrarr);  //it is compulsory to free the dynamically alloted memory
    return 0 ;
}