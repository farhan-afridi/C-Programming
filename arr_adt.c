#include<stdio.h>
#include<stdlib.h>

struct myArray
{
    int total_size;
    int used_size;
    int *ptr;
};

void createArray(struct myArray *a, int tsize, int usize)
{
    (*a).total_size = tsize;        //as an object samjh sakte hai, a object ho gya aur dot(.) ke badd uska parameters ho gya
    (*a).used_size = usize;
    (*a).ptr = (int*) malloc (tsize*sizeof(int));
}

void show (struct myArray *a)
{
    printf("Used Array \n");
    for (int i = 0; i <(*a).used_size; i++)
    {
        printf("%d \n",((*a).ptr)[i]);
    }
}

void set (struct myArray *a)
{
    int n;
    for (int i = 0 ; i<a->used_size ; i++)
    {
        printf ("Enter element %d \n",i);
        scanf("%d",&(a->ptr)[i]);
    }
}

int main ()
{
    struct myArray marks;       // marks variable bana STACK me or ptr bana HEAP me    createArray(&marks, 10,2);
    set(&marks);
    show (&marks);
    return 0;
}