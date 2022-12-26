#include<stdio.h>
int main()
{
    long long int a=0,res=0,n;
    long long int b=1;
printf("enter the number of num\n");
scanf("%lld",&n);
for(int i=0;i<n;i++)
{
    res=a+b;
    printf("%lld ",a);
    a=b;
    b=res;
}
}
