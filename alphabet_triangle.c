#include<stdio.h>
void main()
{
    int i,j,k,l;
    char ch=65;
    int n=26;
    //printf("Enter a range\n");
   // scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
         ch=65;
        for(j=n;j>=i;j--)
        {
            printf(" ");
        }
        for(k=1;k<=i;k++)
        {
            printf("%c",ch++);
        }
        ch--;
        for(l=1;l<i;l++)
        {
            printf("%c",--ch);
        }

        printf("\n");
    }
}
