#include<stdio.h>

int main ()
{
    int arr[100] = {1,2,3,4};
    int size = 4 , capacity = 100, element = 45, index= 1;

    for(int i = size-1 ; i>=index ; i--)
    {
        arr[i+1]=arr[i];
    }

    arr[index]= element;
    printf("Display of  array\n");
    for (int i = 0  ; i<(size+1); i++)
    {
        printf("%d \t %d \n ",arr[i],i);
    }
    return 0 ;
}