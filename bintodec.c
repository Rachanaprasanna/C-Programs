#include<stdio.h>
#include<math.h>
#include<stdlib.h>
void main()
{
    system("cls");
    int n=8;

    int arr[n],a[n],i;
    printf("Enter 8 bit binary value with spaces\n");
    for(i=(n-1);i>=0;i--)
    {
        scanf("%d",&arr[i]);
    }
    int  max = 0;
    for(i=0;i<n;i++)
    {
        a[i]=(pow(2,i))*arr[i];
    }

     for(i=(n-1);i>=0;i--)
    {
        max+=a[i];
    }

     for(i=(n-1);i>=0;i--)
    {
        printf("%d",a[i]);
        if(i>0)
        {
            printf("+");
        }
        else
        {
            printf("=");
        }
    }
    printf("\ndecimal = %d\n",max);
    printf("hex = %x\n",max);

}
