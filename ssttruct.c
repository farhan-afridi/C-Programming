#include<stdio.h>

struct personal
{
    char name[20];
    int day;
    char month[10];
    int year ;
    float salary;
};

main ()
{
    struct personal person1;
    struct personal person2;
    

    printf ("Enter name, date of joining, salary of 1st Person\n");
    scanf("%s %d %s %d %f", person1.name,
                            &person1.day,
                            person1.month,
                            &person1.year,
                            &person1.salary);

    printf ("Enter name, date of joining, salary of 2nd Person\n");
    scanf("%s %d %s %d %f", person2.name,
                            &person2.day,
                            person2.month,
                            &person2.year,
                            &person2.salary);                        
                            

    printf("1st Name = %s\n Date of Joining\n Day = %d\n Month = %s\n Year = %d\n Salary = %f\n",person1.name,
                            person1.day,
                            person1.month,
                            person1.year,
                            person1.salary);

    printf("2nd Name = %s\n Date of Joining\n Day = %d\n Month = %s\n Year = %d\n Salary = %f",person1.name,
                            person2.day,
                            person2.month,
                            person2.year,
                            person2.salary);                        
}