#include<stdio.h>
#include<string.h>

void main()
{
    printf("Enter Name \n");
    char str1[50];
    char str2[50];
    gets(str1);
    gets(str2);
    int a = strlen(str1);   
    printf("Length = %d \n", a);

    if (strcmp(str1,str2)==0)
    {
        printf("Same \n ");
    }
    else
    printf("Not Same \n");

    puts(str1);

    strcat(str1,str2);
    printf("After concatenation %s \n",str1);
    puts(str1);
    strrev(str2);
    printf("Reversed String = ");
    puts(str2);
}