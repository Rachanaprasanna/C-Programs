#include<stdio.h>
int bubble(int*,int);
void main()
{   int n,i;
    printf("Enter number of elements\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("result after bubble for is\n");
    bubble(a,n);
}
int bubble(int* a,int n)
{
    int temp;
for(int i=0;i<n-1;i++) //for number of pass
{
    for(int j=0;j<n-i-1;j++)  //for comparison in each pass
    {
        if(a[j]>a[j+1])
        {
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
        }
    }
}
 for(int i=0;i<n;i++)
    {
       // printf("%d",i)
        printf("%d ",a[i]);
    }
}
