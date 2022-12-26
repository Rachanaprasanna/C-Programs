/**
 * C program to print hollow square star pattern
 */

#include <stdio.h>

int main()
{
    int i, j, N,c;

    /* Input number of rows from user */
    printf("Enter number of rows:\n");
    scanf("%d", &N);
    printf("Enter number of columns\n");
    scanf("%d",&c);

    /* Iterate over each row */
    for(i=1; i<=N; i++)
    {
        /* Iterate over each column */
        for(j=1; j<=c; j++)
        {
            if(i==1 || i==N || j==1 || j==c)
            {
                /* Print star for 1st, Nth row and column */
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }

        /* Move to the next line/row */
        printf("\n");
    }

    return 0;
}
