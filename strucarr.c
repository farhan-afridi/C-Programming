#include<stdio.h>
//array of structure
struct student
{
    char name[20];
    int roll;
    char branch[10];
}; struct student samp[5];

int main()
{
    printf("Enter name, roll and branch of 5 students \n");
    for (int i = 0 ; i<5 ; i++)
    {
        printf("farhan is ladchat");
        printf("Enter Details of Student %d \n", (i+1));
        scanf("%s %d %s", samp[i].name,&samp[i].roll,samp[i].branch);
    }

    printf("Printing of Details \n");
    for (int i = 0 ; i<5 ; i++)
    {
        printf("%d \t %s \t %d \t %s \n",(i+1),samp[i].name,samp[i].roll,samp[i].branch);
    }
}