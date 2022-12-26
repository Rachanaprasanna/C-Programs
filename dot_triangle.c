#include<stdio.h>
void main()
{
    int n;
    printf("Enter range\n");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<=n;j++)
        {
            printf(" ");
        }
        for(int k=0;k<=i;k++)
        {
            printf("*");
        }
        for(int l=0;l<i;l++)
        {
            printf("*");
        }
        printf("\n");
    }
}
