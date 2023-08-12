#include<stdio.h>

int main ()
{
    int add(int s,int d);
    int a = 5 ;
    int b = 7 ;
    printf ("Sum = %d",add(a,b));
}

int add(int c,int d)
{
    int sum = c+d;
    return sum;
}