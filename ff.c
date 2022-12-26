#include<stdio.h>
int main()
{
    int (*p)[5];
    int b[5]={1,2,3,4,5},i;
   for(i=0;i<5;i++)
       {
            *p[i]=b[i];
        }
    for(i=0;i<5;i++)
        {
            printf("%d ",*p[i]);
        }
    }
