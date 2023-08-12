#include<stdio.h>

void main ()
{
    int a=0,b=1,temp,i,n=7;
    printf ("%d %d ",a,b);
    for (i = 2 ; i<=n ; i++)
    {
        temp = a+b;
        a = b;
        b = temp;
        printf("%d ", temp);
    }
}