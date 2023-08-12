#include<stdio.h>
#include<math.h>
int ack(int s,int g);
int main()
{
    int a ;
    a = ack(1,1);
    printf("%d",a);
    return 0 ;
}

int ack(int m, int n)
{
    if (m==0 && n!=0)
    return (n+1);
    else
    if (n==0 && m!=0)
    return ack(m-1,1);
    else
    return (ack(m-1,ack(m,n-1)));
}