#include<stdio.h>
void main()
{
    int a=0,b=0,sum=0,carry=0;
    printf("Enter 2 nos\n");
    scanf("%d%d",&a,&b);
    while(b!=0)
    {
        carry=a&b;
        a=a^b;
        b=carry<<1;
    }
    printf("sum=%d",a);
}
