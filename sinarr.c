#include<stdio.h>

void main ()
{
    int arr[10];
    int i ,j,min,temp;
    printf("Enter Values in ARray \n");
    for (i = 0; i<10 ; i++)
    {
        scanf ("%d",&arr[i]);
    }

    for(i = 0 ; i<(10-1); i++)
    {
        min = i ;
        for(j = i+1 ; j<10 ; j++)
        {
            if (arr[j]<arr[min])
            min = j ;

            if (min!=i)
            temp = arr[min];
            arr[min]=arr[i];
            arr[i] = temp;
        }
    }

    printf("Final Array \n");
    for (i = 0 ; i<10 ; i++)
    {
        printf("%d  ",arr[i]);
    }
}