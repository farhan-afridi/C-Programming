#include<stdio.h>
#include<string.h>

int main ()
{
    char s[10], d;
    int i =0,l=0;
    printf("Enter string  and char\n");
    gets(s);
    scanf("%c",&d);
    l = strlen(s);
    printf("Lenght = %d \n",l);
    for (i = 0 ; i<l ; i++)
    {
        if (s[i]==d)
        printf("Found %d\n",i);
    }
}