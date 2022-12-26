#include<stdio.h>
int a,b,t,n,i;
void fib(int,int);
void main()
{
    a = 0;
    b = 1;
    printf("enter the number of num:\n");
    scanf("%d",&n);
    fib(a,b);
}
/*void fib(int a,int b)       //void function with two arguments
{
    while(i<n)
    {
        t = a+b;
        printf("%d ",a);
        a = b;
        b = t;
        i++;
    }
}*/

void fib(int a,int b)       //recursive function
{
        if(i>=n)
        {
            return ;
        }
        else
        {
           printf("%d ",a);
            t = a+b;
            a = b;
            b = t;
            i++;
            fib(a,b);
        }

}
