#include<stdio.h>
#include<stdlib.h>

int main ()
{
    int *ptrarr = (int*)calloc(5,sizeof(int));
        //calloc intitializes the array with 0 at each index
    printf("Printing of values without initialzing the array\n");
    for (int i = 0 ; i<5 ; i++)
    {
        printf("%d \n",ptrarr[i]);
    }
}