#include<stdio.h>
void sort(int*,int);

void main()
{
    int n=0;
    printf("Enter number of digits to be sorted\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter numbers\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Sorted values is\n");
    sort(a,n);
}
void sort(int*a,int n)
{

    int i=0,j=0;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                a[i]=a[i]+a[j];
                a[j]=a[i]-a[j];
                a[i]=a[i]-a[j];
            }
        }

    }
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}

