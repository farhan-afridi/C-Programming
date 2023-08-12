#include <stdio.h>
void main()
{
    int year;
    printf("Enter a year to check \n");
    scanf("%d",&year);

    if ((year%4==0) && ((year%100!=0) || (year%400==0)))
        printf(" %d is a Leap Year",year);
    else
        printf("Not a Leap Year");
}