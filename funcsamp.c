#include<stdio.h>

int main ()
{
    int add(int s,int d);   //ek baar function ka definition main me likhna hota hai
    int a = 5 ;
    int b = 7 ;
    printf ("Sum = %d",add(a,b));
}

int add(int c,int d)
{
    int sum = c+d;
    return sum;
}