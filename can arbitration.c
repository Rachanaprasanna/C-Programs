#include<stdio.h>
void bits(int,int);
int **k;
int n,i=0,j=0;
 void main()
 {

     int h=0xff;
     printf("Enter number of messages\n");
     scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%x",&arr[i]);
    }
     bits(h,n);
     for(i=0;i<n;i++)
     {
         for(j=10;j>=0;j--)
         {
             printf("%d ", *(*(k+i)+j));
         }
     }

 }
void bits(int h,int n)
{
    for(i=0;i<n;i++)
    {
        for(j=10;j>=0;i--)
        {
            *(*(k+i)+j)=((h>>i)&1);
        }
    }
}
