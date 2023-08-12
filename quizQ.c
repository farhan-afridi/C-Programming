#include<stdio.h>

void main ()
{
   // char name[50];
    //printf("Enter name \n");
    //scanf("%[^\n]a",&name);
    //printf("Name = %s",name);

    int a = 10;
    int b ;
  //  a = (++a) - (a++) + (a++) - (++a);
    b = (++a) + (a++);
    printf("%d",b);
}