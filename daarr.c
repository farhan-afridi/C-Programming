#include<stdio.h>

void main ()
{
    int ar1[2][2];
    int ar2[2][2];
    int mul[2][2];
    
    int i,j,k ;
    printf("Enter Values in 2D Array 1 \n");
    for (i = 0 ; i<2 ; i++)
    {
        for (j = 0 ; j<2 ; j++)
        {
            scanf ("%d", &ar1[i][j]);
        }
    }
    printf("Enter Values in 2D Array 2 \n");
    for (i = 0 ; i<2 ; i++)
    {
        for (j = 0 ; j<2 ; j++)
        {
            scanf ("%d", &ar2[i][j]);
        }
    }
    for (i = 0 ; i<2 ; i++)
    {
        for (j = 0 ; j<2 ; j++)
        {
            mul[i][j] = 0;
            for (k=0 ; k<2 ; k++)
            {
                mul[i][j]+=ar1[i][k]*ar2[k][j];
            }
        }
    }

    printf ("Array \n");
    for (i = 0 ; i<2 ; i++)
    {
        for (j = 0 ; j<2 ; j++)
        {
            printf ("%d \t", mul[j][i]);
        }
        printf("\n");
    }
}