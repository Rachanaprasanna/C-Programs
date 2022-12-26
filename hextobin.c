#include<stdio.h>
void main()
{
   int i=0, x=0xf1,k[8],count=0;

   for(i=0;i<7;i++)
   {
    k[i]=(1<<i)&x;
   }
    {
        for(i=7;i>=0;i--)
        {

            if(k[i]==0)
            {
                printf("0");
            }
            else
            {
                printf("1");
            }
            count++;
            if(count%4==0)
                {
                 printf(" ");
                }
           }

        }
}
