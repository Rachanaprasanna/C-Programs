#include<stdio.h>
void main()
{
    int a=18,b=0,count=0;
    while(a>0)
    {
        b=a%10;
        count+=b;
        a/=10;
    }
    printf("%d",count);
}
