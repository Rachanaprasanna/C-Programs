#include<stdio.h>
void main()
{
    int a[2][3] = {{1,90,3},{4,12,6}};       //declaring 2 d array
    int (*p)[3];                  //declaring pointer to an array of 3
    p=a;                        //initializing pointer
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d ",*(*(p+i)+j));         //printing the pointer
        }
        printf("\n");
    }
}


