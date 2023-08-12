#include<stdio.h>
#include<math.h>
int fact(int g);
int main ()
{
    int a ,b;
    printf("Enter no to calculate factorial\n");
    scanf("%d",&a);
    b = fact(a);
    printf ("Factorial = %d",b);
    return 0 ;
}
int fact(int n)
{
    if (n==1)
    return 1;
    return (n*fact(n-1));
}