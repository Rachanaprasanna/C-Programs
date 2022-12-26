#include<stdio.h>
int lcm_of(int n1,int n2)
{
    int max,lcm;
    max=(n1>n2)?n1:n2;
    for(int i=max;;i++)
    {

        if(((i%n1)==0)&&((i%n2)==0))
        {
            lcm=i;
            break;
        }
    }
    return lcm;
}
void main()
{
    int num1,num2;
    puts("Enter 2 numbers");
    scanf("%d%d",&num1,&num2);
    int lcm=lcm_of(num1,num2);
    printf("lcm of %d and %d is %d",num1,num2,lcm);
}
