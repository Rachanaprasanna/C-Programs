#include<stdio.h>
void main()
{
    volatile int a=10;
    printf("%d %d %d",a=20,a=30,a=40);
}
