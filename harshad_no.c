#include<stdio.h>
int count(int num)
{
    int i=0;
    while(num>0)
    {
        num/=10;
        i++;
    }
    return i;
}
int harshad(int digit,int num)
{
    int i=0,sum=0;
    for(i=0;i<digit;i++)
    {
        sum+=(num%10);
        num/=10;
    }
    return sum;
}
void main()
{
    int num,sum=0,dig=0;
    printf("Enter a number\n");
    scanf("%d",&num);
    dig=count(num);
    sum=harshad(dig,num);
    if(num%sum==0)
        printf("\nHarshad\n");
    else
        printf("\nNot harshad");
}
