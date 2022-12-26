#include<stdio.h>
void main()
{
        int d;
        printf("enter diameter\n");
        scanf("%d",&d);
        for(int i=0;i<=d;i++)
        {
            for(int j=i;j<=d;j++)   //aka for(int j=d;j>=i;j--)
            {
                printf(" ");
            }
            for(int k=0;k<=i;k++)
            {
                printf("*");
            }
            for(int l=i;l>0;l--)
            {
                printf("*");
            }
                printf("\n");
        }

        for(int i=d;i>=0;i--)
        {

            {
                printf(" ");
            }
            for(int k=0;k<=i;k++)
            {
                printf("*");
            }
            for(int l=i;l>0;l--)
            {
                printf("*");
            }
                printf("\n");
        }


}
